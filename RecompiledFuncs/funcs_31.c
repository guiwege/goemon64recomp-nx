#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D5708_591618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5708: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x801D570C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5710: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x801D5714: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x801D5718: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x801D571C: addiu       $t0, $a1, 0x60
    ctx->r8 = ADD32(ctx->r5, 0X60);
L_801D5720:
    // 0x801D5720: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D5724: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D5728: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801D572C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801D5730: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801D5734: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801D5738: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801D573C: bne         $t7, $t0, L_801D5720
    if (ctx->r15 != ctx->r8) {
        // 0x801D5740: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801D5720;
    }
    // 0x801D5740: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801D5744: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801D5748: addiu       $t2, $t2, -0x3400
    ctx->r10 = ADD32(ctx->r10, -0X3400);
    // 0x801D574C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801D5750: addiu       $t1, $sp, 0x30
    ctx->r9 = ADD32(ctx->r29, 0X30);
    // 0x801D5754: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x801D5758: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801D575C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x801D5760: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x801D5764: beq         $a2, $zero, L_801D5784
    if (ctx->r6 == 0) {
        // 0x801D5768: sw          $at, 0x8($t1)
        MEM_W(0X8, ctx->r9) = ctx->r1;
            goto L_801D5784;
    }
    // 0x801D5768: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x801D576C: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D5770: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801D5774: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801D5778: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x801D577C: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801D5780: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
L_801D5784:
    // 0x801D5784: beq         $a3, $zero, L_801D57EC
    if (ctx->r7 == 0) {
        // 0x801D5788: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_801D57EC;
    }
    // 0x801D5788: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D578C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5790: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D5794: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5798: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D579C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x801D57A0: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801D57A4: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D57A8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D57AC: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x801D57B0: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D57B4: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D57B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D57BC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801D57C0: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D57C4: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D57C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D57CC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x801D57D0: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801D57D4: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801D57D8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D57DC: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x801D57E0: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D57E4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D57E8: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
L_801D57EC:
    // 0x801D57EC: lhu         $t9, -0x2E14($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E14);
    // 0x801D57F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D57F4: bnel        $t9, $zero, L_801D59EC
    if (ctx->r25 != 0) {
        // 0x801D57F8: lw          $a0, 0xF4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XF4);
            goto L_801D59EC;
    }
    goto skip_0;
    // 0x801D57F8: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    skip_0:
    // 0x801D57FC: lwc1        $f6, -0x2E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D5800: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x801D5804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D5808: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D580C: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x801D5810: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5814: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D5818: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D581C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5820: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801D5824: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x801D5828: nop

    // 0x801D582C: bc1fl       L_801D59EC
    if (!c1cs) {
        // 0x801D5830: lw          $a0, 0xF4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XF4);
            goto L_801D59EC;
    }
    goto skip_1;
    // 0x801D5830: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    skip_1:
    // 0x801D5834: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D5838: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D583C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5840: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x801D5844: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D5848: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D584C: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5850: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D5854: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D5858: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801D585C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5860: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D5864: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x801D5868: bc1fl       L_801D587C
    if (!c1cs) {
        // 0x801D586C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801D587C;
    }
    goto skip_2;
    // 0x801D586C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801D5870: b           L_801D587C
    // 0x801D5874: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801D587C;
    // 0x801D5874: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801D5878: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801D587C:
    // 0x801D587C: ldc1        $f10, -0x5378($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5378);
    // 0x801D5880: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801D5884: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801D5888: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D588C: bc1tl       L_801D5994
    if (c1cs) {
        // 0x801D5890: lw          $a0, 0xF4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XF4);
            goto L_801D5994;
    }
    goto skip_3;
    // 0x801D5890: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    skip_3:
    // 0x801D5894: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D5898: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D589C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D58A0: add.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x801D58A4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801D58A8: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x801D58AC: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D58B0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801D58B4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801D58B8: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x801D58BC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x801D58C0: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x801D58C4: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x801D58C8: jal         0x8002C9D4
    // 0x801D58CC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_0;
    // 0x801D58CC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801D58D0: lh          $t8, 0x80($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X80);
    // 0x801D58D4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D58D8: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D58DC: bne         $t8, $at, L_801D5990
    if (ctx->r24 != ctx->r1) {
        // 0x801D58E0: lwc1        $f8, 0x60($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
            goto L_801D5990;
    }
    // 0x801D58E0: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D58E4: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x801D58E8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D58EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D58F0: mul.s       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801D58F4: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D58F8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D58FC: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801D5900: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5904: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5908: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801D590C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x801D5910: bc1fl       L_801D5928
    if (!c1cs) {
        // 0x801D5914: c.lt.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
            goto L_801D5928;
    }
    goto skip_4;
    // 0x801D5914: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    skip_4:
    // 0x801D5918: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D591C: nop

    // 0x801D5920: add.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801D5924: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
L_801D5928:
    // 0x801D5928: nop

    // 0x801D592C: bc1fl       L_801D5980
    if (!c1cs) {
        // 0x801D5930: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801D5980;
    }
    goto skip_5;
    // 0x801D5930: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_5:
    // 0x801D5934: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801D5938: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D593C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D5940: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5944: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5948: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D594C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D5950: nop

    // 0x801D5954: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801D5958: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D595C: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801D5960: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D5964: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801D5968: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x801D596C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801D5970: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5974: b           L_801D5990
    // 0x801D5978: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
        goto L_801D5990;
    // 0x801D5978: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x801D597C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_801D5980:
    // 0x801D5980: nop

    // 0x801D5984: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x801D5988: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x801D598C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_801D5990:
    // 0x801D5990: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
L_801D5994:
    // 0x801D5994: jal         0x801D5A78
    // 0x801D5998: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_801D5A78_591988(rdram, ctx);
        goto after_1;
    // 0x801D5998: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x801D599C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D59A0: beql        $v0, $at, L_801D59EC
    if (ctx->r2 == ctx->r1) {
        // 0x801D59A4: lw          $a0, 0xF4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XF4);
            goto L_801D59EC;
    }
    goto skip_6;
    // 0x801D59A4: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    skip_6:
    // 0x801D59A8: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D59AC: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D59B0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D59B4: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801D59B8: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801D59BC: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D59C0: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D59C4: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D59C8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801D59CC: jal         0x80029E08
    // 0x801D59D0: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    func_80029E08_2AA08(rdram, ctx);
        goto after_2;
    // 0x801D59D0: add.s       $f14, $f18, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f6.fl;
    after_2:
    // 0x801D59D4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D59D8: bnel        $v0, $at, L_801D59EC
    if (ctx->r2 != ctx->r1) {
        // 0x801D59DC: lw          $a0, 0xF4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XF4);
            goto L_801D59EC;
    }
    goto skip_7;
    // 0x801D59DC: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    skip_7:
    // 0x801D59E0: b           L_801D5A68
    // 0x801D59E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5A68;
    // 0x801D59E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D59E8: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
L_801D59EC:
    // 0x801D59EC: jal         0x801D5A78
    // 0x801D59F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_801D5A78_591988(rdram, ctx);
        goto after_3;
    // 0x801D59F0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x801D59F4: bnel        $v0, $zero, L_801D5A08
    if (ctx->r2 != 0) {
        // 0x801D59F8: lwc1        $f18, 0x90($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
            goto L_801D5A08;
    }
    goto skip_8;
    // 0x801D59F8: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    skip_8:
    // 0x801D59FC: b           L_801D5A68
    // 0x801D5A00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D5A68;
    // 0x801D5A00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D5A04: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
L_801D5A08:
    // 0x801D5A08: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5A0C: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D5A10: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5A14: add.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801D5A18: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D5A1C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5A20: add.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x801D5A24: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x801D5A28: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x801D5A2C: add.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D5A30: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x801D5A34: lw          $t0, 0xF4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF4);
    // 0x801D5A38: addiu       $t3, $t7, 0x60
    ctx->r11 = ADD32(ctx->r15, 0X60);
    // 0x801D5A3C: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
L_801D5A40:
    // 0x801D5A40: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D5A44: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801D5A48: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x801D5A4C: sw          $at, -0xC($t0)
    MEM_W(-0XC, ctx->r8) = ctx->r1;
    // 0x801D5A50: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801D5A54: sw          $at, -0x8($t0)
    MEM_W(-0X8, ctx->r8) = ctx->r1;
    // 0x801D5A58: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801D5A5C: bne         $t7, $t3, L_801D5A40
    if (ctx->r15 != ctx->r11) {
        // 0x801D5A60: sw          $at, -0x4($t0)
        MEM_W(-0X4, ctx->r8) = ctx->r1;
            goto L_801D5A40;
    }
    // 0x801D5A60: sw          $at, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = ctx->r1;
    // 0x801D5A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D5A68:
    // 0x801D5A68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5A6C: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    // 0x801D5A70: jr          $ra
    // 0x801D5A74: nop

    TRACE_RETURN()
    return;
    // 0x801D5A74: nop

;}
RECOMP_FUNC void func_801D5ECC_591DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5ECC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D5ED0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5ED4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D5ED8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D5EDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D5EE0: lwc1        $f0, -0x2E34($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D5EE4: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D5EE8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D5EEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D5EF0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D5EF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D5EF8: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    // 0x801D5EFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x801D5F00: bc1fl       L_801D5F98
    if (!c1cs) {
        // 0x801D5F04: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D5F98;
    }
    goto skip_0;
    // 0x801D5F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801D5F08: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5F0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5F10: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801D5F14: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801D5F18: lhu         $t6, 0xB6($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XB6);
    // 0x801D5F1C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801D5F20: bgez        $t6, L_801D5F34
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D5F24: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801D5F34;
    }
    // 0x801D5F24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D5F28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D5F2C: nop

    // 0x801D5F30: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801D5F34:
    // 0x801D5F34: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x801D5F38: lwc1        $f18, 0x74($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D5F3C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801D5F40: sub.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x801D5F44: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x801D5F48: nop

    // 0x801D5F4C: bc1f        L_801D5F58
    if (!c1cs) {
        // 0x801D5F50: nop
    
            goto L_801D5F58;
    }
    // 0x801D5F50: nop

    // 0x801D5F54: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
L_801D5F58:
    // 0x801D5F58: jal         0x8001D5B8
    // 0x801D5F5C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_0;
    // 0x801D5F5C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x801D5F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5F64: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801D5F68: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801D5F6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D5F70: jal         0x801D56D0
    // 0x801D5F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_1;
    // 0x801D5F74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x801D5F78: beq         $v0, $zero, L_801D5F94
    if (ctx->r2 == 0) {
        // 0x801D5F7C: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_801D5F94;
    }
    // 0x801D5F7C: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D5F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D5F84: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x801D5F88: jal         0x801D72D4
    // 0x801D5F8C: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    func_801D72D4_5931E4(rdram, ctx);
        goto after_2;
    // 0x801D5F8C: sh          $v1, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r3;
    after_2:
    // 0x801D5F90: lhu         $v1, 0x36($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X36);
L_801D5F94:
    // 0x801D5F94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D5F98:
    // 0x801D5F98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D5F9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D5FA0: jr          $ra
    // 0x801D5FA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D5FA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F8D94_5B4CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8D94: lui         $v0, 0x8015
    ctx->r2 = S32(0X8015 << 16);
    // 0x801F8D98: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801F8D9C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801F8DA0: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F8DA4: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801F8DA8: sb          $zero, 0x788E($at)
    MEM_B(0X788E, ctx->r1) = 0;
    // 0x801F8DAC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F8DB0: sb          $zero, 0x2E2A($at)
    MEM_B(0X2E2A, ctx->r1) = 0;
    // 0x801F8DB4: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x801F8DB8: sb          $zero, 0x7899($at)
    MEM_B(0X7899, ctx->r1) = 0;
    // 0x801F8DBC: sw          $zero, 0x7895($at)
    MEM_W(0X7895, ctx->r1) = 0;
    // 0x801F8DC0: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F8DC4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801F8DC8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801F8DCC: sb          $zero, 0x2E24($at)
    MEM_B(0X2E24, ctx->r1) = 0;
    // 0x801F8DD0: sb          $zero, 0x2E21($at)
    MEM_B(0X2E21, ctx->r1) = 0;
    // 0x801F8DD4: sb          $t6, 0x301E($at)
    MEM_B(0X301E, ctx->r1) = ctx->r14;
    // 0x801F8DD8: sb          $t7, 0x2DCB($at)
    MEM_B(0X2DCB, ctx->r1) = ctx->r15;
    // 0x801F8DDC: jr          $ra
    // 0x801F8DE0: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x801F8DE0: sh          $zero, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801F1130_5AD040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1130: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F1134: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801F1138: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801F113C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1140: bne         $a2, $zero, L_801F1150
    if (ctx->r6 != 0) {
        // 0x801F1144: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_801F1150;
    }
    // 0x801F1144: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801F1148: b           L_801F11E0
    // 0x801F114C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F11E0;
    // 0x801F114C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F1150:
    // 0x801F1150: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801F1154: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F1158: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801F115C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801F1160: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F1164: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F1168: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x801F116C: lwc1        $f6, 0x20($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F1170: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F1174: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801F1178: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F117C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F1180: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801F1184: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x801F1188: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F118C: lwc1        $f16, 0x10($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801F1190: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801F1194: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x801F1198: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x801F119C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F11A0: jal         0x8001D394
    // 0x801F11A4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801F11A4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801F11A8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F11AC: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801F11B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801F11B4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801F11B8: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x801F11BC: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    // 0x801F11C0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801F11C4: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x801F11C8: swc1        $f16, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f16.u32l;
    // 0x801F11CC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F11D0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801F11D4: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801F11D8: jal         0x801F1F34
    // 0x801F11DC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_801F1F34_5ADE44(rdram, ctx);
        goto after_1;
    // 0x801F11DC: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_1:
L_801F11E0:
    // 0x801F11E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F11E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F11E8: jr          $ra
    // 0x801F11EC: nop

    TRACE_RETURN()
    return;
    // 0x801F11EC: nop

;}
RECOMP_FUNC void func_801F5400_5B1310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5408: jal         0x801F5420
    // 0x801F540C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F5420_5B1330(rdram, ctx);
        goto after_0;
    // 0x801F540C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5418: jr          $ra
    // 0x801F541C: nop

    TRACE_RETURN()
    return;
    // 0x801F541C: nop

;}
RECOMP_FUNC void func_801F8790_5B46A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8790: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8794: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801F8798: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801F879C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F87A0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801F87A4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F87A8: sh          $zero, -0x4FE2($at)
    MEM_H(-0X4FE2, ctx->r1) = 0;
    // 0x801F87AC: addiu       $a0, $a0, 0x7FC0
    ctx->r4 = ADD32(ctx->r4, 0X7FC0);
    // 0x801F87B0: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
L_801F87B4:
    // 0x801F87B4: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x801F87B8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x801F87BC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x801F87C0: beql        $t9, $zero, L_801F87E4
    if (ctx->r25 == 0) {
        // 0x801F87C4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_801F87E4;
    }
    goto skip_0;
    // 0x801F87C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x801F87C8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801F87CC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F87D0: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
    // 0x801F87D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801F87D8: jr          $ra
    // 0x801F87DC: sh          $t0, -0x4FE2($at)
    MEM_H(-0X4FE2, ctx->r1) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801F87DC: sh          $t0, -0x4FE2($at)
    MEM_H(-0X4FE2, ctx->r1) = ctx->r8;
    // 0x801F87E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_801F87E4:
    // 0x801F87E4: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x801F87E8: bgez        $t2, L_801F87B4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801F87EC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_801F87B4;
    }
    // 0x801F87EC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x801F87F0: jr          $ra
    // 0x801F87F4: nop

    TRACE_RETURN()
    return;
    // 0x801F87F4: nop

;}
RECOMP_FUNC void func_801E0CE4_59CBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0CEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0CF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801E0CF4: jal         0x801DD720
    // 0x801E0CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E0CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E0CFC: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0D00: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0D04: jalr        $t9
    // 0x801E0D08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E0D08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E0D0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0D10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0D14: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0D18: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E0D1C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E0D20: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0D24: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E0D28: nop

    // 0x801E0D2C: bc1fl       L_801E0D50
    if (!c1cs) {
        // 0x801E0D30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0D50;
    }
    goto skip_0;
    // 0x801E0D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0D34: lbu         $t7, 0x30($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X30);
    // 0x801E0D38: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E0D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0D40: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801E0D44: jal         0x801DACDC
    // 0x801E0D48: sb          $t8, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r24;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0D48: sb          $t8, 0x30($a2)
    MEM_B(0X30, ctx->r6) = ctx->r24;
    after_2:
    // 0x801E0D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0D50:
    // 0x801E0D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0D54: jr          $ra
    // 0x801E0D58: nop

    TRACE_RETURN()
    return;
    // 0x801E0D58: nop

;}
RECOMP_FUNC void func_801D7194_5930A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7194: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D7198: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D719C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801D71A0: lwc1        $f4, 0xC0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x801D71A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D71A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D71AC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801D71B0: lwc1        $f6, 0xC8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x801D71B4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801D71B8: lhu         $v0, 0xA8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA8);
    // 0x801D71BC: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x801D71C0: beql        $t6, $zero, L_801D71DC
    if (ctx->r14 == 0) {
        // 0x801D71C4: lhu         $a0, 0x6E($a3)
        ctx->r4 = MEM_HU(ctx->r7, 0X6E);
            goto L_801D71DC;
    }
    goto skip_0;
    // 0x801D71C4: lhu         $a0, 0x6E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X6E);
    skip_0:
    // 0x801D71C8: lwc1        $f20, 0xC4($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x801D71CC: lwc1        $f2, -0x2E24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x801D71D0: b           L_801D7210
    // 0x801D71D4: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
        goto L_801D7210;
    // 0x801D71D4: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D71D8: lhu         $a0, 0x6E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X6E);
L_801D71DC:
    // 0x801D71DC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x801D71E0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801D71E4: jal         0x80003DC0
    // 0x801D71E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80003DC0_49C0(rdram, ctx);
        goto after_0;
    // 0x801D71E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D71EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D71F0: lwc1        $f2, -0x2E24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x801D71F4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801D71F8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x801D71FC: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801D7200: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D7204: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x801D7208: lhu         $v0, 0xA8($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XA8);
    // 0x801D720C: add.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f16.fl;
L_801D7210:
    // 0x801D7210: sub.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x801D7214: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D7218: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x801D721C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D7220: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D7224: beq         $t7, $zero, L_801D7294
    if (ctx->r15 == 0) {
        // 0x801D7228: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_801D7294;
    }
    // 0x801D7228: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D722C: lwc1        $f6, 0x74($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801D7230: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x801D7234: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801D7238: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x801D723C: nop

    // 0x801D7240: bc1fl       L_801D7298
    if (!c1cs) {
        // 0x801D7244: lwc1        $f6, 0x2C($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_801D7298;
    }
    goto skip_1;
    // 0x801D7244: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801D7248: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D724C: lwc1        $f12, 0xC($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801D7250: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D7254: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x801D7258: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D725C: sub.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x801D7260: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801D7264: lwc1        $f14, 0x14($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X14);
    // 0x801D7268: sub.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x801D726C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801D7270: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D7274: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801D7278: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x801D727C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801D7280: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x801D7284: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801D7288: add.s       $f20, $f16, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D728C: add.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x801D7290: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
L_801D7294:
    // 0x801D7294: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
L_801D7298:
    // 0x801D7298: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801D729C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D72A0: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x801D72A4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D72A8: sub.s       $f6, $f20, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x801D72AC: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x801D72B0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801D72B4: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D72B8: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801D72BC: swc1        $f4, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f4.u32l;
    // 0x801D72C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D72C4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801D72C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D72CC: jr          $ra
    // 0x801D72D0: nop

    TRACE_RETURN()
    return;
    // 0x801D72D0: nop

;}
RECOMP_FUNC void func_801E5D2C_5A1C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5D2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E5D30: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E5D34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5D38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E5D3C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801E5D40: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801E5D44: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801E5D48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5D4C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801E5D50: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E5D54: jal         0x801E3DE0
    // 0x801E5D58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_801E3DE0_59FCF0(rdram, ctx);
        goto after_0;
    // 0x801E5D58: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x801E5D5C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x801E5D60: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5D64: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x801E5D68: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x801E5D6C: lhu         $a1, 0x94($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X94);
    // 0x801E5D70: lhu         $a0, 0x8($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X8);
    // 0x801E5D74: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801E5D78: ori         $a2, $zero, 0x8100
    ctx->r6 = 0 | 0X8100;
    // 0x801E5D7C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x801E5D80: jal         0x801E3C34
    // 0x801E5D84: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_801E3C34_59FB44(rdram, ctx);
        goto after_1;
    // 0x801E5D84: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801E5D88: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5D8C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801E5D90: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801E5D94: beq         $v0, $zero, L_801E5EA0
    if (ctx->r2 == 0) {
        // 0x801E5D98: lwc1        $f2, 0x44($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E5EA0;
    }
    // 0x801E5D98: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E5D9C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5DA0: nop

    // 0x801E5DA4: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x801E5DA8: nop

    // 0x801E5DAC: bc1tl       L_801E5EA4
    if (c1cs) {
        // 0x801E5DB0: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_801E5EA4;
    }
    goto skip_0;
    // 0x801E5DB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_0:
    // 0x801E5DB4: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x801E5DB8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801E5DBC: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x801E5DC0: bnel        $t9, $zero, L_801E5EA4
    if (ctx->r25 != 0) {
        // 0x801E5DC4: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_801E5EA4;
    }
    goto skip_1;
    // 0x801E5DC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_1:
    // 0x801E5DC8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E5DCC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E5DD0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E5DD4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801E5DD8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801E5DDC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E5DE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E5DE4: lwc1        $f4, 0xD0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801E5DE8: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5DF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E5DF4: sub.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d - ctx->f10.d;
    // 0x801E5DF8: mul.d       $f0, $f6, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x801E5DFC: add.d       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f0.d + ctx->f0.d;
    // 0x801E5E00: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5E04: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x801E5E08: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x801E5E0C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801E5E10: jal         0x801E5EC4
    // 0x801E5E14: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_801E5EC4_5A1DD4(rdram, ctx);
        goto after_2;
    // 0x801E5E14: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x801E5E18: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5E1C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801E5E20: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E5E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5E28: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801E5E2C: swc1        $f0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f0.u32l;
    // 0x801E5E30: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x801E5E34: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x801E5E38: lwc1        $f6, 0xE4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XE4);
    // 0x801E5E3C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x801E5E40: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x801E5E44: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x801E5E48: lhu         $a2, 0x18($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X18);
    // 0x801E5E4C: lhu         $a1, 0x16($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X16);
    // 0x801E5E50: lhu         $a0, 0x14($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X14);
    // 0x801E5E54: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E5E58: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E5E5C: jal         0x80033898
    // 0x801E5E60: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801E5E60: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x801E5E64: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5E68: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801E5E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E5E70: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E5E74: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E5E78: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801E5E7C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E5E80: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801E5E84: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5E88: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801E5E8C: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x801E5E90: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E5E94: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801E5E98: b           L_801E5EB0
    // 0x801E5E9C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
        goto L_801E5EB0;
    // 0x801E5E9C: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
L_801E5EA0:
    // 0x801E5EA0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_801E5EA4:
    // 0x801E5EA4: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E5EAC: swc1        $f10, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f10.u32l;
L_801E5EB0:
    // 0x801E5EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5EB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5EB8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E5EBC: jr          $ra
    // 0x801E5EC0: nop

    TRACE_RETURN()
    return;
    // 0x801E5EC0: nop

;}
RECOMP_FUNC void func_801DDFA8_599EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDFA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DDFAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DDFB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DDFB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DDFB8: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801DDFBC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x801DDFC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DDFC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DDFC8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DDFCC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DDFD0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801DDFD4: lhu         $t8, 0x7DB4($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X7DB4);
    // 0x801DDFD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DDFDC: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801DDFE0: bne         $t9, $zero, L_801DDFFC
    if (ctx->r25 != 0) {
        // 0x801DDFE4: nop
    
            goto L_801DDFFC;
    }
    // 0x801DDFE4: nop

    // 0x801DDFE8: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801DDFEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DDFF0: lbu         $t1, 0x68($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X68);
    // 0x801DDFF4: bne         $t1, $at, L_801DE00C
    if (ctx->r9 != ctx->r1) {
        // 0x801DDFF8: nop
    
            goto L_801DE00C;
    }
    // 0x801DDFF8: nop

L_801DDFFC:
    // 0x801DDFFC: jal         0x801E4624
    // 0x801DE000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E4624_5A0534(rdram, ctx);
        goto after_0;
    // 0x801DE000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801DE004: b           L_801DE0F4
    // 0x801DE008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE0F4;
    // 0x801DE008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE00C:
    // 0x801DE00C: jal         0x801E79F4
    // 0x801DE010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E79F4_5A3904(rdram, ctx);
        goto after_1;
    // 0x801DE010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DE014: bnel        $v0, $zero, L_801DE0F4
    if (ctx->r2 != 0) {
        // 0x801DE018: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DE0F4;
    }
    goto skip_0;
    // 0x801DE018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DE01C: jal         0x801E5328
    // 0x801DE020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5328_5A1238(rdram, ctx);
        goto after_2;
    // 0x801DE020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DE024: beq         $v0, $zero, L_801DE050
    if (ctx->r2 == 0) {
        // 0x801DE028: nop
    
            goto L_801DE050;
    }
    // 0x801DE028: nop

    // 0x801DE02C: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801DE030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE034: jal         0x801E20A0
    // 0x801DE038: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_3;
    // 0x801DE038: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    after_3:
    // 0x801DE03C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE040: jal         0x801DACDC
    // 0x801DE044: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DE044: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_4:
    // 0x801DE048: b           L_801DE0F4
    // 0x801DE04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE0F4;
    // 0x801DE04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE050:
    // 0x801DE050: jal         0x801E1C90
    // 0x801DE054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_5;
    // 0x801DE054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DE058: beq         $v0, $zero, L_801DE078
    if (ctx->r2 == 0) {
        // 0x801DE05C: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_801DE078;
    }
    // 0x801DE05C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801DE060: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801DE064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE068: jal         0x801DACDC
    // 0x801DE06C: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801DE06C: sh          $zero, 0x0($t3)
    MEM_H(0X0, ctx->r11) = 0;
    after_6:
    // 0x801DE070: b           L_801DE0F4
    // 0x801DE074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE0F4;
    // 0x801DE074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE078:
    // 0x801DE078: lhu         $t4, 0x98($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X98);
    // 0x801DE07C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DE080: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DE084: bne         $t4, $zero, L_801DE0B0
    if (ctx->r12 != 0) {
        // 0x801DE088: nop
    
            goto L_801DE0B0;
    }
    // 0x801DE088: nop

    // 0x801DE08C: jal         0x801E3324
    // 0x801DE090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_7;
    // 0x801DE090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801DE094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE098: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DE09C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DE0A0: jal         0x801DAC7C
    // 0x801DE0A4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_8;
    // 0x801DE0A4: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_8:
    // 0x801DE0A8: b           L_801DE0F4
    // 0x801DE0AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE0F4;
    // 0x801DE0AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE0B0:
    // 0x801DE0B0: jalr        $t9
    // 0x801DE0B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x801DE0B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x801DE0B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE0BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE0C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801DE0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE0C8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DE0CC: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x801DE0D0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DE0D4: nop

    // 0x801DE0D8: bc1fl       L_801DE0F4
    if (!c1cs) {
        // 0x801DE0DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DE0F4;
    }
    goto skip_1;
    // 0x801DE0DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801DE0E0: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801DE0E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE0E8: jal         0x801DACDC
    // 0x801DE0EC: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_10;
    // 0x801DE0EC: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    after_10:
    // 0x801DE0F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE0F4:
    // 0x801DE0F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DE0F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE0FC: jr          $ra
    // 0x801DE100: nop

    TRACE_RETURN()
    return;
    // 0x801DE100: nop

;}
RECOMP_FUNC void func_801FAB00_5B6A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FAB00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FAB04: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FAB08: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801FAB0C: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801FAB10: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB14: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FAB1C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FAB20: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FAB24: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FAB28: sh          $zero, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = 0;
    // 0x801FAB2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB30: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801FAB34: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801FAB38: addu        $t8, $v0, $a3
    ctx->r24 = ADD32(ctx->r2, ctx->r7);
    // 0x801FAB3C: lh          $v1, 0x2FE8($t8)
    ctx->r3 = MEM_H(ctx->r24, 0X2FE8);
    // 0x801FAB40: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FAB48: sh          $v1, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r3;
    // 0x801FAB4C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB50: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB54: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FAB58: sh          $v1, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r3;
    // 0x801FAB5C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB60: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB64: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FAB68: sh          $v1, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r3;
    // 0x801FAB6C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB74: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FAB78: sh          $zero, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = 0;
    // 0x801FAB7C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801FAB80: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAB84: addu        $a2, $v0, $a3
    ctx->r6 = ADD32(ctx->r2, ctx->r7);
    // 0x801FAB88: lhu         $t2, 0x2DF2($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X2DF2);
    // 0x801FAB8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FAB90: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
    // 0x801FAB94: lbu         $t3, 0x2DE4($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X2DE4);
    // 0x801FAB98: sh          $t3, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r11;
    // 0x801FAB9C: lhu         $t4, 0x2DF4($a2)
    ctx->r12 = MEM_HU(ctx->r6, 0X2DF4);
    // 0x801FABA0: sh          $t4, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r12;
    // 0x801FABA4: jal         0x801F8EDC
    // 0x801FABA8: sh          $a1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r5;
    func_801F8EDC_5B4DEC(rdram, ctx);
        goto after_0;
    // 0x801FABA8: sh          $a1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r5;
    after_0:
    // 0x801FABAC: jal         0x801F8790
    // 0x801FABB0: nop

    func_801F8790_5B46A0(rdram, ctx);
        goto after_1;
    // 0x801FABB0: nop

    after_1:
    // 0x801FABB4: jal         0x801F87F8
    // 0x801FABB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F87F8_5B4708(rdram, ctx);
        goto after_2;
    // 0x801FABB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801FABBC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801FABC0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FABC4: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FABC8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FABCC: sw          $zero, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = 0;
    // 0x801FABD0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x801FABD4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FABD8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FABDC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801FABE0: lbu         $t6, 0x2DF6($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X2DF6);
    // 0x801FABE4: lhu         $t9, 0x2DF8($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X2DF8);
    // 0x801FABE8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FABEC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801FABF0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801FABF4: lw          $t8, -0x6694($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6694);
    // 0x801FABF8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801FABFC: addiu       $a1, $a1, -0x7B6C
    ctx->r5 = ADD32(ctx->r5, -0X7B6C);
    // 0x801FAC00: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x801FAC04: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x801FAC08: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAC0C: beq         $t2, $zero, L_801FAC2C
    if (ctx->r10 == 0) {
        // 0x801FAC10: nop
    
            goto L_801FAC2C;
    }
    // 0x801FAC10: nop

    // 0x801FAC14: jal         0x80034E08
    // 0x801FAC18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801FAC18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801FAC1C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801FAC20: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAC24: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FAC28: sw          $v0, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = ctx->r2;
L_801FAC2C:
    // 0x801FAC2C: jal         0x801F8C4C
    // 0x801FAC30: nop

    func_801F8C4C_5B4B5C(rdram, ctx);
        goto after_4;
    // 0x801FAC30: nop

    after_4:
    // 0x801FAC34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAC38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FAC3C: jal         0x80035EEC
    // 0x801FAC40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_5;
    // 0x801FAC40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x801FAC44: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801FAC48: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAC4C: lui         $a1, 0xD
    ctx->r5 = S32(0XD << 16);
    // 0x801FAC50: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FAC54: sw          $v0, -0x708($at)
    MEM_W(-0X708, ctx->r1) = ctx->r2;
    // 0x801FAC58: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801FAC5C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAC60: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801FAC64: jal         0x801F95D8
    // 0x801FAC68: lw          $a1, -0x708($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X708);
    func_801F95D8_5B54E8(rdram, ctx);
        goto after_6;
    // 0x801FAC68: lw          $a1, -0x708($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X708);
    after_6:
    // 0x801FAC6C: jal         0x801FACF0
    // 0x801FAC70: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801FACF0_5B6C00(rdram, ctx);
        goto after_7;
    // 0x801FAC70: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x801FAC74: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801FAC78: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x801FAC7C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAC80: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FAC84: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    // 0x801FAC88: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801FAC8C: lhu         $t9, 0x22($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X22);
    // 0x801FAC90: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAC94: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FAC98: sb          $t9, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r25;
    // 0x801FAC9C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FACA0: lhu         $t0, 0x24($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X24);
    // 0x801FACA4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FACA8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FACAC: sh          $t0, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r8;
    // 0x801FACB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FACB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FACB8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FACBC: jr          $ra
    // 0x801FACC0: nop

    TRACE_RETURN()
    return;
    // 0x801FACC0: nop

;}
RECOMP_FUNC void func_801F8644_5B4554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F8648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F864C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F8654: addiu       $a1, $zero, 0x280
    ctx->r5 = ADD32(0, 0X280);
    // 0x801F8658: jal         0x801F8670
    // 0x801F865C: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    func_801F8670_5B4580(rdram, ctx);
        goto after_0;
    // 0x801F865C: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    after_0:
    // 0x801F8660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F8664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8668: jr          $ra
    // 0x801F866C: nop

    TRACE_RETURN()
    return;
    // 0x801F866C: nop

;}
RECOMP_FUNC void func_801DE57C_59A48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE57C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE584: jal         0x801E3AC0
    // 0x801DE588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE588: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE594: jr          $ra
    // 0x801DE598: nop

    TRACE_RETURN()
    return;
    // 0x801DE598: nop

;}
RECOMP_FUNC void func_801D6164_592074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D616C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D6170: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D6174: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6178: lbu         $t7, 0xBD($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XBD);
    // 0x801D617C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D6180: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6184: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D6188: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D618C: beq         $t7, $zero, L_801D61B4
    if (ctx->r15 == 0) {
        // 0x801D6190: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801D61B4;
    }
    // 0x801D6190: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6194: lhu         $t8, 0x66($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X66);
    // 0x801D6198: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D619C: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x801D61A0: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    // 0x801D61A4: jal         0x801D7B74
    // 0x801D61A8: sh          $t8, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r24;
    func_801D7B74_593A84(rdram, ctx);
        goto after_0;
    // 0x801D61A8: sh          $t8, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r24;
    after_0:
    // 0x801D61AC: b           L_801D61FC
    // 0x801D61B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801D61FC;
    // 0x801D61B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D61B4:
    // 0x801D61B4: lbu         $t9, 0xE8($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XE8);
    // 0x801D61B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D61BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D61C0: slti        $at, $t9, 0x15
    ctx->r1 = SIGNED(ctx->r25) < 0X15 ? 1 : 0;
    // 0x801D61C4: bne         $at, $zero, L_801D61EC
    if (ctx->r1 != 0) {
        // 0x801D61C8: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_801D61EC;
    }
    // 0x801D61C8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D61CC: lhu         $t0, 0x66($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X66);
    // 0x801D61D0: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x801D61D4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x801D61D8: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x801D61DC: jal         0x801D7B74
    // 0x801D61E0: sh          $t0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r8;
    func_801D7B74_593A84(rdram, ctx);
        goto after_1;
    // 0x801D61E0: sh          $t0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r8;
    after_1:
    // 0x801D61E4: b           L_801D61FC
    // 0x801D61E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801D61FC;
    // 0x801D61E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D61EC:
    // 0x801D61EC: lhu         $t1, -0x2E2A($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E2A);
    // 0x801D61F0: sh          $zero, 0xB8($s0)
    MEM_H(0XB8, ctx->r16) = 0;
    // 0x801D61F4: sh          $t1, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r9;
    // 0x801D61F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D61FC:
    // 0x801D61FC: jal         0x801D7F20
    // 0x801D6200: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D7F20_593E30(rdram, ctx);
        goto after_2;
    // 0x801D6200: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801D6204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6208: jal         0x801D5DC0
    // 0x801D620C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5DC0_591CD0(rdram, ctx);
        goto after_3;
    // 0x801D620C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x801D6210: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6214: ldc1        $f4, -0x5358($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5358);
    // 0x801D6218: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D621C: lwc1        $f6, -0x2E1C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E1C);
    // 0x801D6220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6224: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D6228: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801D622C: nop

    // 0x801D6230: bc1t        L_801D6270
    if (c1cs) {
        // 0x801D6234: nop
    
            goto L_801D6270;
    }
    // 0x801D6234: nop

    // 0x801D6238: lbu         $t2, 0xE8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE8);
    // 0x801D623C: slti        $at, $t2, 0x15
    ctx->r1 = SIGNED(ctx->r10) < 0X15 ? 1 : 0;
    // 0x801D6240: beq         $at, $zero, L_801D6270
    if (ctx->r1 == 0) {
        // 0x801D6244: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D6270;
    }
    // 0x801D6244: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6248: lwc1        $f10, -0x2E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D624C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6250: lwc1        $f16, -0x2E18($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D6254: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801D6258: nop

    // 0x801D625C: bc1t        L_801D6270
    if (c1cs) {
        // 0x801D6260: nop
    
            goto L_801D6270;
    }
    // 0x801D6260: nop

    // 0x801D6264: lbu         $t3, 0xBD($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D6268: beql        $t3, $zero, L_801D627C
    if (ctx->r11 == 0) {
        // 0x801D626C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D627C;
    }
    goto skip_0;
    // 0x801D626C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_801D6270:
    // 0x801D6270: jal         0x801D5ECC
    // 0x801D6274: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_4;
    // 0x801D6274: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x801D6278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D627C:
    // 0x801D627C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D6280: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D6284: jr          $ra
    // 0x801D6288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D6288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801E156C_59D47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E156C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1570: jr          $ra
    // 0x801E1574: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1574: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F5DC8_5B1CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5DD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5DD4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F5DD8: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    // 0x801F5DDC: jal         0x801F5DF4
    // 0x801F5DE0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_801F5DF4_5B1D04(rdram, ctx);
        goto after_0;
    // 0x801F5DE0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x801F5DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5DE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5DEC: jr          $ra
    // 0x801F5DF0: nop

    TRACE_RETURN()
    return;
    // 0x801F5DF0: nop

;}
RECOMP_FUNC void func_801E708C_5A2F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E708C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E7090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E7094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E7098: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E709C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E70A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E70A4: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x801E70A8: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801E70AC: jal         0x801E71D0
    // 0x801E70B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E71D0_5A30E0(rdram, ctx);
        goto after_0;
    // 0x801E70B0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E70B4: sltiu       $at, $v0, 0x6
    ctx->r1 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x801E70B8: beq         $at, $zero, L_801E71BC
    if (ctx->r1 == 0) {
        // 0x801E70BC: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801E71BC;
    }
    // 0x801E70BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E70C0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801E70C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E70C8: addu        $at, $at, $t7
    gpr jr_addend_801E70D0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E70CC: lw          $t7, -0x4A50($at)
    ctx->r15 = ADD32(ctx->r1, -0X4A50);
    // 0x801E70D0: jr          $t7
    // 0x801E70D4: nop

    switch (jr_addend_801E70D0 >> 2) {
        case 0: goto L_801E70D8; break;
        case 1: goto L_801E715C; break;
        case 2: goto L_801E7178; break;
        case 3: goto L_801E70F0; break;
        case 4: goto L_801E7114; break;
        case 5: goto L_801E7140; break;
        default: switch_error(__func__, 0x801E70D0, 0x8020B5B0);
    }
    // 0x801E70D4: nop

L_801E70D8:
    // 0x801E70D8: beq         $a1, $zero, L_801E71BC
    if (ctx->r5 == 0) {
        // 0x801E70DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E71BC;
    }
    // 0x801E70DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E70E0: jal         0x801DACDC
    // 0x801E70E4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E70E4: addiu       $a1, $zero, 0x38
    ctx->r5 = ADD32(0, 0X38);
    after_1:
    // 0x801E70E8: b           L_801E71C0
    // 0x801E70EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E70EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E70F0:
    // 0x801E70F0: jal         0x801E6F4C
    // 0x801E70F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F4C_5A2E5C(rdram, ctx);
        goto after_2;
    // 0x801E70F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E70F8: jal         0x801E6F00
    // 0x801E70FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F00_5A2E10(rdram, ctx);
        goto after_3;
    // 0x801E70FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E7100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7104: jal         0x801DACDC
    // 0x801E7108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E7108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x801E710C: b           L_801E71C0
    // 0x801E7110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E7110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7114:
    // 0x801E7114: jal         0x801E6F4C
    // 0x801E7118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F4C_5A2E5C(rdram, ctx);
        goto after_5;
    // 0x801E7118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E711C: jal         0x801E6F00
    // 0x801E7120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F00_5A2E10(rdram, ctx);
        goto after_6;
    // 0x801E7120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E7124: jal         0x801E2220
    // 0x801E7128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2220_59E130(rdram, ctx);
        goto after_7;
    // 0x801E7128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7130: jal         0x801DACDC
    // 0x801E7134: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801E7134: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_8:
    // 0x801E7138: b           L_801E71C0
    // 0x801E713C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E713C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7140:
    // 0x801E7140: jal         0x801E6FE0
    // 0x801E7144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6FE0_5A2EF0(rdram, ctx);
        goto after_9;
    // 0x801E7144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E7148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E714C: jal         0x801DACDC
    // 0x801E7150: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_10;
    // 0x801E7150: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    after_10:
    // 0x801E7154: b           L_801E71C0
    // 0x801E7158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E7158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E715C:
    // 0x801E715C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E7160: beq         $a1, $at, L_801E71BC
    if (ctx->r5 == ctx->r1) {
        // 0x801E7164: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E71BC;
    }
    // 0x801E7164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7168: jal         0x801DACDC
    // 0x801E716C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_11;
    // 0x801E716C: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_11:
    // 0x801E7170: b           L_801E71C0
    // 0x801E7174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E7174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E7178:
    // 0x801E7178: lhu         $t8, 0x98($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X98);
    // 0x801E717C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E7180: beq         $t8, $zero, L_801E71AC
    if (ctx->r24 == 0) {
        // 0x801E7184: nop
    
            goto L_801E71AC;
    }
    // 0x801E7184: nop

    // 0x801E7188: jal         0x801E6F4C
    // 0x801E718C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F4C_5A2E5C(rdram, ctx);
        goto after_12;
    // 0x801E718C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801E7190: jal         0x801E6F00
    // 0x801E7194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F00_5A2E10(rdram, ctx);
        goto after_13;
    // 0x801E7194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x801E7198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E719C: jal         0x801DACDC
    // 0x801E71A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_14;
    // 0x801E71A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x801E71A4: b           L_801E71C0
    // 0x801E71A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E71C0;
    // 0x801E71A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E71AC:
    // 0x801E71AC: beq         $a1, $at, L_801E71BC
    if (ctx->r5 == ctx->r1) {
        // 0x801E71B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E71BC;
    }
    // 0x801E71B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E71B4: jal         0x801DACDC
    // 0x801E71B8: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_15;
    // 0x801E71B8: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_15:
L_801E71BC:
    // 0x801E71BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E71C0:
    // 0x801E71C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E71C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E71C8: jr          $ra
    // 0x801E71CC: nop

    TRACE_RETURN()
    return;
    // 0x801E71CC: nop

;}
RECOMP_FUNC void func_801F0F2C_5ACE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0F34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F0F38: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F0F3C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F0F40: jal         0x801F0F84
    // 0x801F0F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801F0F84_5ACE94(rdram, ctx);
        goto after_0;
    // 0x801F0F44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801F0F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0F50: jr          $ra
    // 0x801F0F54: nop

    TRACE_RETURN()
    return;
    // 0x801F0F54: nop

;}
RECOMP_FUNC void func_801DEB80_59AA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DEB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DEB88: jal         0x801E5154
    // 0x801DEB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E5154_5A1064(rdram, ctx);
        goto after_0;
    // 0x801DEB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DEB90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DEB94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DEB98: jr          $ra
    // 0x801DEB9C: nop

    TRACE_RETURN()
    return;
    // 0x801DEB9C: nop

;}
RECOMP_FUNC void func_801D7C20_593B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7C20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D7C24: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D7C28: addiu       $t1, $t1, -0x2E2A
    ctx->r9 = ADD32(ctx->r9, -0X2E2A);
    // 0x801D7C2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D7C30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D7C34: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801D7C38: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801D7C3C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801D7C40: lhu         $v1, 0x6A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6A);
    // 0x801D7C44: lhu         $t8, 0x0($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X0);
    // 0x801D7C48: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801D7C4C: sll         $t2, $t6, 1
    ctx->r10 = S32(ctx->r14 << 1);
    // 0x801D7C50: subu        $t9, $v1, $t8
    ctx->r25 = SUB32(ctx->r3, ctx->r24);
    // 0x801D7C54: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801D7C58: addu        $t3, $t0, $t6
    ctx->r11 = ADD32(ctx->r8, ctx->r14);
    // 0x801D7C5C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801D7C60: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801D7C64: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801D7C68: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D7C6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D7C70: bne         $at, $zero, L_801D7C8C
    if (ctx->r1 != 0) {
        // 0x801D7C74: sh          $t9, 0x42($sp)
        MEM_H(0X42, ctx->r29) = ctx->r25;
            goto L_801D7C8C;
    }
    // 0x801D7C74: sh          $t9, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r25;
    // 0x801D7C78: sh          $v1, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r3;
    // 0x801D7C7C: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D7C80: sb          $zero, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = 0;
    // 0x801D7C84: b           L_801D7DBC
    // 0x801D7C88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_801D7DBC;
    // 0x801D7C88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_801D7C8C:
    // 0x801D7C8C: andi        $v1, $t0, 0x8000
    ctx->r3 = ctx->r8 & 0X8000;
    // 0x801D7C90: beql        $v1, $zero, L_801D7CA8
    if (ctx->r3 == 0) {
        // 0x801D7C94: lbu         $v0, 0xBD($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XBD);
            goto L_801D7CA8;
    }
    goto skip_0;
    // 0x801D7C94: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    skip_0:
    // 0x801D7C98: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x801D7C9C: b           L_801D7CAC
    // 0x801D7CA0: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
        goto L_801D7CAC;
    // 0x801D7CA0: andi        $a0, $v0, 0x1
    ctx->r4 = ctx->r2 & 0X1;
    // 0x801D7CA4: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
L_801D7CA8:
    // 0x801D7CA8: andi        $a0, $v0, 0x2
    ctx->r4 = ctx->r2 & 0X2;
L_801D7CAC:
    // 0x801D7CAC: bne         $a0, $zero, L_801D7CE0
    if (ctx->r4 != 0) {
        // 0x801D7CB0: andi        $t7, $v0, 0x80
        ctx->r15 = ctx->r2 & 0X80;
            goto L_801D7CE0;
    }
    // 0x801D7CB0: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x801D7CB4: beq         $v1, $zero, L_801D7CCC
    if (ctx->r3 == 0) {
        // 0x801D7CB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D7CCC;
    }
    // 0x801D7CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7CBC: lbu         $v1, 0xAA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAA);
    // 0x801D7CC0: andi        $t5, $v1, 0x1
    ctx->r13 = ctx->r3 & 0X1;
    // 0x801D7CC4: b           L_801D7CD8
    // 0x801D7CC8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
        goto L_801D7CD8;
    // 0x801D7CC8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_801D7CCC:
    // 0x801D7CCC: lbu         $v1, 0xAA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAA);
    // 0x801D7CD0: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x801D7CD4: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_801D7CD8:
    // 0x801D7CD8: beq         $v1, $zero, L_801D7CF0
    if (ctx->r3 == 0) {
        // 0x801D7CDC: lw          $a1, 0x5C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X5C);
            goto L_801D7CF0;
    }
    // 0x801D7CDC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
L_801D7CE0:
    // 0x801D7CE0: bnel        $t7, $zero, L_801D7D54
    if (ctx->r15 != 0) {
        // 0x801D7CE4: lhu         $a0, 0x0($t1)
        ctx->r4 = MEM_HU(ctx->r9, 0X0);
            goto L_801D7D54;
    }
    goto skip_1;
    // 0x801D7CE4: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    skip_1:
    // 0x801D7CE8: b           L_801D7D50
    // 0x801D7CEC: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
        goto L_801D7D50;
    // 0x801D7CEC: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
L_801D7CF0:
    // 0x801D7CF0: lhu         $t8, 0x6A($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X6A);
    // 0x801D7CF4: lhu         $a2, 0x42($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X42);
    // 0x801D7CF8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801D7CFC: jal         0x801D7868
    // 0x801D7D00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D7868_593778(rdram, ctx);
        goto after_0;
    // 0x801D7D00: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801D7D04: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D7D08: addiu       $t1, $t1, -0x2E2A
    ctx->r9 = ADD32(ctx->r9, -0X2E2A);
    // 0x801D7D0C: lhu         $t3, 0x0($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X0);
    // 0x801D7D10: lhu         $t9, 0xB8($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XB8);
    // 0x801D7D14: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D7D18: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x801D7D1C: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x801D7D20: lhu         $t4, 0xB8($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XB8);
    // 0x801D7D24: xor         $t5, $t4, $t0
    ctx->r13 = ctx->r12 ^ ctx->r8;
    // 0x801D7D28: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801D7D2C: bnel        $t6, $zero, L_801D7D54
    if (ctx->r14 != 0) {
        // 0x801D7D30: lhu         $a0, 0x0($t1)
        ctx->r4 = MEM_HU(ctx->r9, 0X0);
            goto L_801D7D54;
    }
    goto skip_2;
    // 0x801D7D30: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    skip_2:
    // 0x801D7D34: lhu         $v1, 0x6A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6A);
    // 0x801D7D38: subu        $t8, $v1, $t2
    ctx->r24 = SUB32(ctx->r3, ctx->r10);
    // 0x801D7D3C: xor         $t9, $t8, $t0
    ctx->r25 = ctx->r24 ^ ctx->r8;
    // 0x801D7D40: andi        $t3, $t9, 0x8000
    ctx->r11 = ctx->r25 & 0X8000;
    // 0x801D7D44: beql        $t3, $zero, L_801D7D54
    if (ctx->r11 == 0) {
        // 0x801D7D48: lhu         $a0, 0x0($t1)
        ctx->r4 = MEM_HU(ctx->r9, 0X0);
            goto L_801D7D54;
    }
    goto skip_3;
    // 0x801D7D48: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    skip_3:
    // 0x801D7D4C: sh          $v1, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r3;
L_801D7D50:
    // 0x801D7D50: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
L_801D7D54:
    // 0x801D7D54: jal         0x80003D88
    // 0x801D7D58: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80003D88_4988(rdram, ctx);
        goto after_1;
    // 0x801D7D58: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x801D7D5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7D60: lwc1        $f2, -0x2E30($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7D64: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D7D68: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7D6C: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D7D70: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D7D74: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D7D78: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D7D7C: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D7D80: addiu       $t2, $zero, 0x3F00
    ctx->r10 = ADD32(0, 0X3F00);
    // 0x801D7D84: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D7D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7D8C: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D7D90: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D7D94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D7D98: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x801D7D9C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801D7DA0: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x801D7DA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D7DA8: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801D7DAC: jal         0x801D56D0
    // 0x801D7DB0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_2;
    // 0x801D7DB0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801D7DB4: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x801D7DB8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_801D7DBC:
    // 0x801D7DBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D7DC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D7DC4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801D7DC8: jr          $ra
    // 0x801D7DCC: nop

    TRACE_RETURN()
    return;
    // 0x801D7DCC: nop

;}
RECOMP_FUNC void func_801E11F8_59D108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11FC: jr          $ra
    // 0x801E1200: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1200: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E5B6C_5A1A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5B6C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E5B70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5B74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E5B78: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E5B7C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5B80: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801E5B84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5B88: sw          $a1, 0x90($t7)
    MEM_W(0X90, ctx->r15) = ctx->r5;
    // 0x801E5B8C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5B90: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x801E5B94: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x801E5B98: lw          $v1, 0x90($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X90);
    // 0x801E5B9C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801E5BA0: lw          $t9, 0x68($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X68);
    // 0x801E5BA4: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x801E5BA8: sw          $t1, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r9;
    // 0x801E5BAC: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x801E5BB0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E5BB4: lw          $t0, 0x18($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X18);
    // 0x801E5BB8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E5BBC: lwc1        $f6, 0x8($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801E5BC0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E5BC4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5BC8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E5BCC: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801E5BD0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E5BD4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x801E5BD8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E5BDC: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801E5BE0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801E5BE4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801E5BE8: lhu         $a2, 0x18($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X18);
    // 0x801E5BEC: lhu         $a1, 0x16($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X16);
    // 0x801E5BF0: lhu         $a0, 0x14($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X14);
    // 0x801E5BF4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E5BF8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E5BFC: jal         0x80033A3C
    // 0x801E5C00: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_80033A3C_3463C(rdram, ctx);
        goto after_0;
    // 0x801E5C00: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E5C04: lui         $at, 0x4178
    ctx->r1 = S32(0X4178 << 16);
    // 0x801E5C08: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E5C0C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5C10: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801E5C14: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x801E5C18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801E5C1C: jal         0x801E5A20
    // 0x801E5C20: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801E5A20_5A1930(rdram, ctx);
        goto after_1;
    // 0x801E5C20: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801E5C24: lui         $at, 0x4178
    ctx->r1 = S32(0X4178 << 16);
    // 0x801E5C28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E5C2C: beq         $v0, $zero, L_801E5C58
    if (ctx->r2 == 0) {
        // 0x801E5C30: lw          $t0, 0x40($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X40);
            goto L_801E5C58;
    }
    // 0x801E5C30: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801E5C34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E5C38: beq         $v0, $at, L_801E5C78
    if (ctx->r2 == ctx->r1) {
        // 0x801E5C3C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E5C78;
    }
    // 0x801E5C3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E5C40: beq         $v0, $at, L_801E5C98
    if (ctx->r2 == ctx->r1) {
        // 0x801E5C44: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E5C98;
    }
    // 0x801E5C44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E5C48: beql        $v0, $at, L_801E5CBC
    if (ctx->r2 == ctx->r1) {
        // 0x801E5C4C: lhu         $t7, 0x16($t0)
        ctx->r15 = MEM_HU(ctx->r8, 0X16);
            goto L_801E5CBC;
    }
    goto skip_0;
    // 0x801E5C4C: lhu         $t7, 0x16($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X16);
    skip_0:
    // 0x801E5C50: b           L_801E5CD8
    // 0x801E5C54: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
        goto L_801E5CD8;
    // 0x801E5C54: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
L_801E5C58:
    // 0x801E5C58: lhu         $t5, 0x16($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X16);
    // 0x801E5C5C: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5C60: addiu       $t6, $t5, 0x200
    ctx->r14 = ADD32(ctx->r13, 0X200);
    // 0x801E5C64: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x801E5C68: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x801E5C6C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5C70: b           L_801E5CD8
    // 0x801E5C74: sub.s       $f0, $f16, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f12.fl;
        goto L_801E5CD8;
    // 0x801E5C74: sub.s       $f0, $f16, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f12.fl;
L_801E5C78:
    // 0x801E5C78: lhu         $t9, 0x16($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X16);
    // 0x801E5C7C: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5C80: addiu       $t1, $t9, 0x300
    ctx->r9 = ADD32(ctx->r25, 0X300);
    // 0x801E5C84: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x801E5C88: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
    // 0x801E5C8C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E5C90: b           L_801E5CD8
    // 0x801E5C94: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
        goto L_801E5CD8;
    // 0x801E5C94: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
L_801E5C98:
    // 0x801E5C98: lhu         $t4, 0x16($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X16);
    // 0x801E5C9C: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5CA0: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x801E5CA4: sh          $t5, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r13;
    // 0x801E5CA8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5CAC: add.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801E5CB0: b           L_801E5CD8
    // 0x801E5CB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801E5CD8;
    // 0x801E5CB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801E5CB8: lhu         $t7, 0x16($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X16);
L_801E5CBC:
    // 0x801E5CBC: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5CC0: addiu       $t8, $t7, 0x100
    ctx->r24 = ADD32(ctx->r15, 0X100);
    // 0x801E5CC4: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801E5CC8: sh          $t9, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r25;
    // 0x801E5CCC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E5CD0: add.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801E5CD4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_801E5CD8:
    // 0x801E5CD8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5CDC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801E5CE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E5CE4: lhu         $t2, 0x2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2);
    // 0x801E5CE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E5CEC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E5CF0: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801E5CF4: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x801E5CF8: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5CFC: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x801E5D00: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5D04: swc1        $f10, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f10.u32l;
    // 0x801E5D08: swc1        $f8, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f8.u32l;
    // 0x801E5D0C: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x801E5D10: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5D14: sh          $zero, 0x30($t7)
    MEM_H(0X30, ctx->r15) = 0;
    // 0x801E5D18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5D1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5D20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E5D24: jr          $ra
    // 0x801E5D28: nop

    TRACE_RETURN()
    return;
    // 0x801E5D28: nop

;}
RECOMP_FUNC void func_801E5570_5A1480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5574: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E5578: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E557C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E5580: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801E5584: sw          $a3, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r7;
    // 0x801E5588: jal         0x8001B918
    // 0x801E558C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801E558C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801E5590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E5594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5598: jr          $ra
    // 0x801E559C: nop

    TRACE_RETURN()
    return;
    // 0x801E559C: nop

;}
RECOMP_FUNC void func_801DE858_59A768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE858: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DE85C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DE860: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801DE864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE868: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE86C: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801DE870: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DE874: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801DE878: jalr        $v0
    // 0x801DE87C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801DE87C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801DE880: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE884: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE888: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801DE88C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DE890: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DE894: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801DE898: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DE89C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DE8A0: nop

    // 0x801DE8A4: bc1f        L_801DE8F0
    if (!c1cs) {
        // 0x801DE8A8: nop
    
            goto L_801DE8F0;
    }
    // 0x801DE8A8: nop

    // 0x801DE8AC: lw          $t6, -0x3A1C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A1C);
    // 0x801DE8B0: bgtz        $t6, L_801DE8D4
    if (SIGNED(ctx->r14) > 0) {
        // 0x801DE8B4: nop
    
            goto L_801DE8D4;
    }
    // 0x801DE8B4: nop

    // 0x801DE8B8: jal         0x801E3098
    // 0x801DE8BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3098_59EFA8(rdram, ctx);
        goto after_1;
    // 0x801DE8BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DE8C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE8C4: jal         0x801DACDC
    // 0x801DE8C8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DE8C8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_2:
    // 0x801DE8CC: b           L_801DE930
    // 0x801DE8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE930;
    // 0x801DE8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE8D4:
    // 0x801DE8D4: jal         0x801E3134
    // 0x801DE8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_3;
    // 0x801DE8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DE8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE8E0: jal         0x801DACDC
    // 0x801DE8E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801DE8E4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_4:
    // 0x801DE8E8: b           L_801DE930
    // 0x801DE8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DE930;
    // 0x801DE8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE8F0:
    // 0x801DE8F0: jalr        $v0
    // 0x801DE8F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x801DE8F4: nop

    after_5:
    // 0x801DE8F8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DE8FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DE900: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801DE904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE908: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801DE90C: lwc1        $f10, 0x28($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801DE910: lui         $a1, 0xBECC
    ctx->r5 = S32(0XBECC << 16);
    // 0x801DE914: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x801DE918: nop

    // 0x801DE91C: bc1fl       L_801DE930
    if (!c1cs) {
        // 0x801DE920: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DE930;
    }
    goto skip_0;
    // 0x801DE920: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DE924: jal         0x801E3B9C
    // 0x801DE928: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_6;
    // 0x801DE928: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_6:
    // 0x801DE92C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DE930:
    // 0x801DE930: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DE934: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DE938: jr          $ra
    // 0x801DE93C: nop

    TRACE_RETURN()
    return;
    // 0x801DE93C: nop

;}
RECOMP_FUNC void func_801CB7A8_5876B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB7AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CB7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB7B4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB7B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CB7BC: jal         0x8003521C
    // 0x801CB7C0: addiu       $a0, $a0, -0x482C
    ctx->r4 = ADD32(ctx->r4, -0X482C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CB7C0: addiu       $a0, $a0, -0x482C
    ctx->r4 = ADD32(ctx->r4, -0X482C);
    after_0:
    // 0x801CB7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB7C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB7CC: jr          $ra
    // 0x801CB7D0: nop

    TRACE_RETURN()
    return;
    // 0x801CB7D0: nop

;}
RECOMP_FUNC void func_801CF3A0_58B2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF3A0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x801CF3A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CF3A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CF3AC: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x801CF3B0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801CF3B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CF3B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF3BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801CF3C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CF3C4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x801CF3C8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x801CF3CC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CF3D0: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CF3D4: lbu         $t7, 0x64($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X64);
    // 0x801CF3D8: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CF3DC: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801CF3E0: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x801CF3E4: sb          $t8, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r24;
    // 0x801CF3E8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x801CF3EC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801CF3F0: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801CF3F4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x801CF3F8: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x801CF3FC: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x801CF400: jal         0x8002A718
    // 0x801CF404: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    func_8002A718_2B318(rdram, ctx);
        goto after_0;
    // 0x801CF404: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801CF408: lh          $t9, 0x78($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X78);
    // 0x801CF40C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801CF410: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x801CF414: lwc1        $f0, 0x8C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801CF418: lwc1        $f2, 0x90($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801CF41C: bne         $t9, $at, L_801CF4FC
    if (ctx->r25 != ctx->r1) {
        // 0x801CF420: lwc1        $f12, 0x88($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
            goto L_801CF4FC;
    }
    // 0x801CF420: lwc1        $f12, 0x88($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801CF424: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801CF428: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CF42C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801CF430: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x801CF434: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801CF438: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x801CF43C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801CF440: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801CF444: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801CF448: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CF44C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF450: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801CF454: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801CF458: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CF45C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801CF460: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x801CF464: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x801CF468: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801CF46C: ldc1        $f8, -0x5640($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5640);
    // 0x801CF470: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF474: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801CF478: ldc1        $f16, -0x5638($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5638);
    // 0x801CF47C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF480: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CF484: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801CF488: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x801CF48C: cvt.d.s     $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f18.d = CVT_D_S(ctx->f14.fl);
    // 0x801CF490: c.lt.d      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.d < ctx->f18.d;
    // 0x801CF494: nop

    // 0x801CF498: bc1fl       L_801CF4A8
    if (!c1cs) {
        // 0x801CF49C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801CF4A8;
    }
    goto skip_0;
    // 0x801CF49C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x801CF4A0: lwc1        $f14, -0x5630($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5630);
    // 0x801CF4A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801CF4A8:
    // 0x801CF4A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF4AC: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801CF4B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CF4B4: sub.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801CF4B8: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801CF4BC: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CF4C0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801CF4C4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x801CF4C8: lwc1        $f10, -0x562C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X562C);
    // 0x801CF4CC: jal         0x8001D394
    // 0x801CF4D0: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801CF4D0: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    after_1:
    // 0x801CF4D4: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x801CF4D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801CF4DC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x801CF4E0: lhu         $a3, 0x94($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X94);
    // 0x801CF4E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CF4E8: jal         0x8001DB04
    // 0x801CF4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801CF4EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x801CF4F0: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x801CF4F4: b           L_801CF508
    // 0x801CF4F8: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
        goto L_801CF508;
    // 0x801CF4F8: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
L_801CF4FC:
    // 0x801CF4FC: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    // 0x801CF500: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x801CF504: swc1        $f12, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f12.u32l;
L_801CF508:
    // 0x801CF508: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801CF50C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x801CF510: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CF514: jr          $ra
    // 0x801CF518: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x801CF518: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_801F4754_5B0664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4754: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4758: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F475C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F4760: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F4764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4768: jal         0x801E8C98
    // 0x801F476C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8C98_5A4BA8(rdram, ctx);
        goto after_0;
    // 0x801F476C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x801F4770: bgez        $v0, L_801F478C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801F4774: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801F478C;
    }
    // 0x801F4774: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F4778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F477C: jal         0x801DACDC
    // 0x801F4780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F4780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F4784: b           L_801F4974
    // 0x801F4788: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F4974;
    // 0x801F4788: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F478C:
    // 0x801F478C: bne         $v0, $at, L_801F481C
    if (ctx->r2 != ctx->r1) {
        // 0x801F4790: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F481C;
    }
    // 0x801F4790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4794: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4798: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    // 0x801F479C: sh          $zero, 0x34($t6)
    MEM_H(0X34, ctx->r14) = 0;
    // 0x801F47A0: jal         0x80038BC8
    // 0x801F47A4: sh          $zero, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F47A4: sh          $zero, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = 0;
    after_2:
    // 0x801F47A8: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    // 0x801F47AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F47B0: beql        $t7, $zero, L_801F47CC
    if (ctx->r15 == 0) {
        // 0x801F47B4: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801F47CC;
    }
    goto skip_0;
    // 0x801F47B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x801F47B8: jal         0x801DACDC
    // 0x801F47BC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F47BC: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    after_3:
    // 0x801F47C0: b           L_801F4974
    // 0x801F47C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F4974;
    // 0x801F47C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F47C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801F47CC:
    // 0x801F47CC: lwc1        $f4, 0xA4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801F47D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F47D4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801F47D8: nop

    // 0x801F47DC: bc1f        L_801F480C
    if (!c1cs) {
        // 0x801F47E0: nop
    
            goto L_801F480C;
    }
    // 0x801F47E0: nop

    // 0x801F47E4: jal         0x801E3324
    // 0x801F47E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_4;
    // 0x801F47E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F47EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F47F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F47F4: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F47F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F47FC: jal         0x801DAC7C
    // 0x801F4800: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_5;
    // 0x801F4800: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_5:
    // 0x801F4804: b           L_801F4974
    // 0x801F4808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F4974;
    // 0x801F4808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F480C:
    // 0x801F480C: jal         0x801DACDC
    // 0x801F4810: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801F4810: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_6:
    // 0x801F4814: b           L_801F4974
    // 0x801F4818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F4974;
    // 0x801F4818: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F481C:
    // 0x801F481C: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x801F4820: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4824: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801F4828: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801F482C: addiu       $a2, $zero, 0x196
    ctx->r6 = ADD32(0, 0X196);
    // 0x801F4830: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x801F4834: jal         0x801DB494
    // 0x801F4838: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801DB494_5973A4(rdram, ctx);
        goto after_7;
    // 0x801F4838: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x801F483C: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4840: sw          $v0, 0x88($t8)
    MEM_W(0X88, ctx->r24) = ctx->r2;
    // 0x801F4844: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F484C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801F4850: lw          $v1, 0x88($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X88);
    // 0x801F4854: beq         $v1, $zero, L_801F4864
    if (ctx->r3 == 0) {
        // 0x801F4858: nop
    
            goto L_801F4864;
    }
    // 0x801F4858: nop

    // 0x801F485C: b           L_801F4864
    // 0x801F4860: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
        goto L_801F4864;
    // 0x801F4860: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
L_801F4864:
    // 0x801F4864: beql        $v0, $zero, L_801F4930
    if (ctx->r2 == 0) {
        // 0x801F4868: lhu         $t7, 0x98($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X98);
            goto L_801F4930;
    }
    goto skip_1;
    // 0x801F4868: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    skip_1:
    // 0x801F486C: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x801F4870: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F4874: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F4878: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F487C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F4880: c.le.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl <= ctx->f8.fl;
    // 0x801F4884: nop

    // 0x801F4888: bc1fl       L_801F4930
    if (!c1cs) {
        // 0x801F488C: lhu         $t7, 0x98($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X98);
            goto L_801F4930;
    }
    goto skip_2;
    // 0x801F488C: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    skip_2:
    // 0x801F4890: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F4894: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801F4898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F489C: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801F48A0: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801F48A4: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F48A8: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F48AC: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801F48B0: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801F48B4: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801F48B8: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x801F48BC: jal         0x801DB3A0
    // 0x801F48C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_801DB3A0_5972B0(rdram, ctx);
        goto after_8;
    // 0x801F48C0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_8:
    // 0x801F48C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F48C8: jal         0x801E8D30
    // 0x801F48CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8D30_5A4C40(rdram, ctx);
        goto after_9;
    // 0x801F48CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x801F48D0: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801F48D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F48D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F48DC: jal         0x801EA5E4
    // 0x801F48E0: lw          $a2, 0x88($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X88);
    func_801EA5E4_5A64F4(rdram, ctx);
        goto after_10;
    // 0x801F48E0: lw          $a2, 0x88($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X88);
    after_10:
    // 0x801F48E4: jal         0x80038BC8
    // 0x801F48E8: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x801F48E8: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    after_11:
    // 0x801F48EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F48F0: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801F48F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F48F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F48FC: swc1        $f4, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f4.u32l;
    // 0x801F4900: lbu         $t4, 0x30($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X30);
    // 0x801F4904: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4908: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x801F490C: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x801F4910: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    // 0x801F4914: sh          $zero, 0x34($t6)
    MEM_H(0X34, ctx->r14) = 0;
    // 0x801F4918: sh          $zero, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = 0;
    // 0x801F491C: jal         0x801DACDC
    // 0x801F4920: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_12;
    // 0x801F4920: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    after_12:
    // 0x801F4924: b           L_801F4974
    // 0x801F4928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F4974;
    // 0x801F4928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F492C: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
L_801F4930:
    // 0x801F4930: beq         $t7, $zero, L_801F4958
    if (ctx->r15 == 0) {
        // 0x801F4934: nop
    
            goto L_801F4958;
    }
    // 0x801F4934: nop

    // 0x801F4938: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F493C: sh          $zero, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = 0;
    // 0x801F4940: swc1        $f0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->f0.u32l;
    // 0x801F4944: swc1        $f0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->f0.u32l;
    // 0x801F4948: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F494C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F4950: b           L_801F4970
    // 0x801F4954: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
        goto L_801F4970;
    // 0x801F4954: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
L_801F4958:
    // 0x801F4958: jal         0x801E1C90
    // 0x801F495C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_13;
    // 0x801F495C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x801F4960: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4964: lhu         $t9, 0x34($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X34);
    // 0x801F4968: ori         $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 | 0X8000;
    // 0x801F496C: sh          $t0, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = ctx->r8;
L_801F4970:
    // 0x801F4970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F4974:
    // 0x801F4974: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F4978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F497C: jr          $ra
    // 0x801F4980: nop

    TRACE_RETURN()
    return;
    // 0x801F4980: nop

;}
RECOMP_FUNC void func_801E12E8_59D1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E12E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E12EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E12F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E12F4: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E12F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E12FC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E1300: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801E1304: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x801E1308: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x801E130C: lw          $a2, 0x4360($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4360);
    // 0x801E1310: lw          $a1, 0x4340($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4340);
    // 0x801E1314: jal         0x801E54E0
    // 0x801E1318: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    func_801E54E0_5A13F0(rdram, ctx);
        goto after_0;
    // 0x801E1318: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    after_0:
    // 0x801E131C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1320: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1324: jr          $ra
    // 0x801E1328: nop

    TRACE_RETURN()
    return;
    // 0x801E1328: nop

;}
RECOMP_FUNC void func_801DE434_59A344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE43C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DE440: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801DE444: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE448: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    // 0x801DE44C: bne         $t6, $at, L_801DE464
    if (ctx->r14 != ctx->r1) {
        // 0x801DE450: nop
    
            goto L_801DE464;
    }
    // 0x801DE450: nop

    // 0x801DE454: jal         0x801F5B9C
    // 0x801DE458: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801F5B9C_5B1AAC(rdram, ctx);
        goto after_0;
    // 0x801DE458: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x801DE45C: b           L_801DE470
    // 0x801DE460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DE470;
    // 0x801DE460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE464:
    // 0x801DE464: jal         0x801E4260
    // 0x801DE468: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    func_801E4260_5A0170(rdram, ctx);
        goto after_1;
    // 0x801DE468: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    after_1:
    // 0x801DE46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DE470:
    // 0x801DE470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE474: jr          $ra
    // 0x801DE478: nop

    TRACE_RETURN()
    return;
    // 0x801DE478: nop

;}
RECOMP_FUNC void func_801D90D8_594FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D90D8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D90DC: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x801D90E0: addiu       $t6, $t6, -0x2008
    ctx->r14 = ADD32(ctx->r14, -0X2008);
    // 0x801D90E4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x801D90E8: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801D90EC: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x801D90F0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x801D90F4: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x801D90F8: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x801D90FC: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x801D9100: lui         $t4, 0x8007
    ctx->r12 = S32(0X8007 << 16);
    // 0x801D9104: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x801D9108: addiu       $t7, $t7, -0x2000
    ctx->r15 = ADD32(ctx->r15, -0X2000);
    // 0x801D910C: addiu       $t8, $t8, -0x1FF8
    ctx->r24 = ADD32(ctx->r24, -0X1FF8);
    // 0x801D9110: addiu       $t9, $t9, -0x1FF0
    ctx->r25 = ADD32(ctx->r25, -0X1FF0);
    // 0x801D9114: addiu       $t3, $t3, -0x1FE8
    ctx->r11 = ADD32(ctx->r11, -0X1FE8);
    // 0x801D9118: addiu       $t4, $t4, -0x1FE0
    ctx->r12 = ADD32(ctx->r12, -0X1FE0);
    // 0x801D911C: addiu       $t5, $t5, -0x1FD8
    ctx->r13 = ADD32(ctx->r13, -0X1FD8);
    // 0x801D9120: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D9124: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D9128: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x801D912C: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x801D9130: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x801D9134: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x801D9138: sw          $t4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r12;
    // 0x801D913C: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x801D9140: lbu         $t7, 0xD2($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD2);
    // 0x801D9144: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801D9148: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D914C: beq         $t7, $zero, L_801D946C
    if (ctx->r15 == 0) {
        // 0x801D9150: addiu       $t2, $t2, -0x39F4
        ctx->r10 = ADD32(ctx->r10, -0X39F4);
            goto L_801D946C;
    }
    // 0x801D9150: addiu       $t2, $t2, -0x39F4
    ctx->r10 = ADD32(ctx->r10, -0X39F4);
    // 0x801D9154: lw          $v1, -0x39FC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39FC);
    // 0x801D9158: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801D915C: lbu         $v0, 0x60($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X60);
    // 0x801D9160: bnel        $v0, $zero, L_801D9180
    if (ctx->r2 != 0) {
        // 0x801D9164: lw          $t8, 0x0($t2)
        ctx->r24 = MEM_W(ctx->r10, 0X0);
            goto L_801D9180;
    }
    goto skip_0;
    // 0x801D9164: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    skip_0:
    // 0x801D9168: lw          $t8, 0x5C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X5C);
    // 0x801D916C: lhu         $t9, 0x86($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X86);
    // 0x801D9170: beql        $t9, $zero, L_801D9180
    if (ctx->r25 == 0) {
        // 0x801D9174: lw          $t8, 0x0($t2)
        ctx->r24 = MEM_W(ctx->r10, 0X0);
            goto L_801D9180;
    }
    goto skip_1;
    // 0x801D9174: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    skip_1:
    // 0x801D9178: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x801D917C: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
L_801D9180:
    // 0x801D9180: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D9184: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9188: lbu         $t3, 0x5($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X5);
    // 0x801D918C: addiu       $t0, $t0, -0x39CC
    ctx->r8 = ADD32(ctx->r8, -0X39CC);
    // 0x801D9190: addiu       $t7, $t8, 0x90
    ctx->r15 = ADD32(ctx->r24, 0X90);
    // 0x801D9194: sb          $t3, -0x2E00($at)
    MEM_B(-0X2E00, ctx->r1) = ctx->r11;
    // 0x801D9198: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
L_801D919C:
    // 0x801D919C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801D91A0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801D91A4: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D91A8: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x801D91AC: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801D91B0: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x801D91B4: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801D91B8: bne         $t8, $t7, L_801D919C
    if (ctx->r24 != ctx->r15) {
        // 0x801D91BC: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_801D919C;
    }
    // 0x801D91BC: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x801D91C0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801D91C4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x801D91C8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801D91CC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801D91D0: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x801D91D4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801D91D8: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x801D91DC: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x801D91E0: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x801D91E4: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801D91E8: beq         $v0, $at, L_801D9210
    if (ctx->r2 == ctx->r1) {
        // 0x801D91EC: sw          $zero, 0x0($t9)
        MEM_W(0X0, ctx->r25) = 0;
            goto L_801D9210;
    }
    // 0x801D91EC: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x801D91F0: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x801D91F4: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x801D91F8: lw          $t3, -0x3390($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3390);
    // 0x801D91FC: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x801D9200: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D9204: addu        $t6, $t3, $at
    ctx->r14 = ADD32(ctx->r11, ctx->r1);
    // 0x801D9208: b           L_801D9228
    // 0x801D920C: sw          $t6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r14;
        goto L_801D9228;
    // 0x801D920C: sw          $t6, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r14;
L_801D9210:
    // 0x801D9210: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x801D9214: lw          $t7, -0x3390($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3390);
    // 0x801D9218: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x801D921C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D9220: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D9224: sw          $t8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r24;
L_801D9228:
    // 0x801D9228: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x801D922C: lw          $a3, -0x33A4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X33A4);
    // 0x801D9230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9234: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D9238: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x801D923C: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x801D9240: beq         $t9, $zero, L_801D927C
    if (ctx->r25 == 0) {
        // 0x801D9244: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_801D927C;
    }
    // 0x801D9244: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
L_801D9248:
    // 0x801D9248: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801D924C: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x801D9250: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x801D9254: addu        $t6, $s0, $t3
    ctx->r14 = ADD32(ctx->r16, ctx->r11);
    // 0x801D9258: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x801D925C: addu        $t4, $a3, $t8
    ctx->r12 = ADD32(ctx->r7, ctx->r24);
    // 0x801D9260: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
    // 0x801D9264: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x801D9268: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x801D926C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801D9270: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801D9274: bne         $a0, $zero, L_801D9248
    if (ctx->r4 != 0) {
        // 0x801D9278: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_801D9248;
    }
    // 0x801D9278: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_801D927C:
    // 0x801D927C: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x801D9280: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801D9284: addu        $t3, $s0, $t9
    ctx->r11 = ADD32(ctx->r16, ctx->r25);
    // 0x801D9288: sw          $zero, 0x0($t3)
    MEM_W(0X0, ctx->r11) = 0;
    // 0x801D928C: lw          $a2, 0x0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X0);
    // 0x801D9290: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801D9294: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x801D9298: jal         0x8001B918
    // 0x801D929C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801D929C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_0:
    // 0x801D92A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D92A4: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801D92A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801D92AC: jal         0x8001C3E0
    // 0x801D92B0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    func_8001C3E0_1CFE0(rdram, ctx);
        goto after_1;
    // 0x801D92B0: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    after_1:
    // 0x801D92B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D92B8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801D92BC: addiu       $v0, $v0, -0x39DC
    ctx->r2 = ADD32(ctx->r2, -0X39DC);
    // 0x801D92C0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801D92C4: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x801D92C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D92CC: sb          $t6, 0xE0($t5)
    MEM_B(0XE0, ctx->r13) = ctx->r14;
    // 0x801D92D0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801D92D4: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x801D92D8: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x801D92DC: lbu         $t8, 0xE1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XE1);
    // 0x801D92E0: addiu       $a0, $sp, 0x3A
    ctx->r4 = ADD32(ctx->r29, 0X3A);
    // 0x801D92E4: bnel        $t8, $at, L_801D92F8
    if (ctx->r24 != ctx->r1) {
        // 0x801D92E8: lhu         $a0, 0x3A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X3A);
            goto L_801D92F8;
    }
    goto skip_2;
    // 0x801D92E8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    skip_2:
    // 0x801D92EC: jal         0x801D9480
    // 0x801D92F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_801D9480_595390(rdram, ctx);
        goto after_2;
    // 0x801D92F0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x801D92F4: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
L_801D92F8:
    // 0x801D92F8: jal         0x801D96E4
    // 0x801D92FC: lhu         $a1, 0x38($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X38);
    func_801D96E4_5955F4(rdram, ctx);
        goto after_3;
    // 0x801D92FC: lhu         $a1, 0x38($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X38);
    after_3:
    // 0x801D9300: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x801D9304: addiu       $s0, $s0, -0x39D4
    ctx->r16 = ADD32(ctx->r16, -0X39D4);
    // 0x801D9308: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801D930C: lhu         $a0, 0x80($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X80);
    // 0x801D9310: jal         0x801D978C
    // 0x801D9314: lhu         $a1, 0x82($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X82);
    func_801D978C_59569C(rdram, ctx);
        goto after_4;
    // 0x801D9314: lhu         $a1, 0x82($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X82);
    after_4:
    // 0x801D9318: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801D931C: lw          $t4, -0x39D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X39D8);
    // 0x801D9320: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801D9324: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x801D9328: lbu         $t9, 0x64($t4)
    ctx->r25 = MEM_BU(ctx->r12, 0X64);
    // 0x801D932C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801D9330: addiu       $v1, $v1, -0x1F10
    ctx->r3 = ADD32(ctx->r3, -0X1F10);
    // 0x801D9334: sb          $t9, 0x64($t3)
    MEM_B(0X64, ctx->r11) = ctx->r25;
    // 0x801D9338: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801D933C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D9340: or          $t7, $v1, $at
    ctx->r15 = ctx->r3 | ctx->r1;
    // 0x801D9344: sb          $t6, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r14;
    // 0x801D9348: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801D934C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D9350: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x801D9354: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D9358: sw          $t8, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r24;
    // 0x801D935C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801D9360: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D9364: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D9368: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801D936C: lhu         $t9, 0x2DC2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2DC2);
    // 0x801D9370: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x801D9374: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x801D9378: andi        $t3, $t9, 0x3
    ctx->r11 = ctx->r25 & 0X3;
    // 0x801D937C: sll         $t6, $t3, 19
    ctx->r14 = S32(ctx->r11 << 19);
    // 0x801D9380: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x801D9384: ori         $t7, $t5, 0x13F
    ctx->r15 = ctx->r13 | 0X13F;
    // 0x801D9388: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x801D938C: lh          $t8, 0x2DB0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2DB0);
    // 0x801D9390: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D9394: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x801D9398: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x801D939C: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x801D93A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801D93A4: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x801D93A8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x801D93AC: subu        $t4, $t4, $t8
    ctx->r12 = SUB32(ctx->r12, ctx->r24);
    // 0x801D93B0: sll         $t4, $t4, 11
    ctx->r12 = S32(ctx->r12 << 11);
    // 0x801D93B4: addu        $t9, $t4, $at
    ctx->r25 = ADD32(ctx->r12, ctx->r1);
    // 0x801D93B8: addiu       $t3, $t3, 0x1000
    ctx->r11 = ADD32(ctx->r11, 0X1000);
    // 0x801D93BC: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x801D93C0: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x801D93C4: addiu       $a0, $a0, -0x1F08
    ctx->r4 = ADD32(ctx->r4, -0X1F08);
    // 0x801D93C8: jal         0x80040620
    // 0x801D93CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x801D93CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x801D93D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D93D4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801D93D8: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D93DC: addiu       $v0, $v0, -0x33B0
    ctx->r2 = ADD32(ctx->r2, -0X33B0);
    // 0x801D93E0: addiu       $t5, $t5, -0x3410
    ctx->r13 = ADD32(ctx->r13, -0X3410);
    // 0x801D93E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D93E8: addiu       $t8, $t5, 0x60
    ctx->r24 = ADD32(ctx->r13, 0X60);
    // 0x801D93EC: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
L_801D93F0:
    // 0x801D93F0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801D93F4: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x801D93F8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x801D93FC: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x801D9400: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x801D9404: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x801D9408: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x801D940C: bne         $t5, $t8, L_801D93F0
    if (ctx->r13 != ctx->r24) {
        // 0x801D9410: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_801D93F0;
    }
    // 0x801D9410: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x801D9414: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801D9418: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D941C: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801D9420: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D9424: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801D9428: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x801D942C: bc1fl       L_801D9464
    if (!c1cs) {
        // 0x801D9430: lw          $t4, 0x0($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X0);
            goto L_801D9464;
    }
    goto skip_3;
    // 0x801D9430: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    skip_3:
    // 0x801D9434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9438: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801D943C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x801D9440: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x801D9444: sb          $t9, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r25;
    // 0x801D9448: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801D944C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801D9450: lw          $t8, -0x39CC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39CC);
    // 0x801D9454: lbu         $t7, 0x5($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X5);
    // 0x801D9458: b           L_801D946C
    // 0x801D945C: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
        goto L_801D946C;
    // 0x801D945C: sb          $t7, 0x5($t8)
    MEM_B(0X5, ctx->r24) = ctx->r15;
    // 0x801D9460: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
L_801D9464:
    // 0x801D9464: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D9468: sb          $t5, 0x64($t4)
    MEM_B(0X64, ctx->r12) = ctx->r13;
L_801D946C:
    // 0x801D946C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9470: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D9474: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x801D9478: jr          $ra
    // 0x801D947C: nop

    TRACE_RETURN()
    return;
    // 0x801D947C: nop

;}
RECOMP_FUNC void func_801E01F0_59C100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E01F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E01F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E01F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E01FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0204: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E0208: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E020C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E0210: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0214: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E0218: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E021C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801E0220: jalr        $t9
    // 0x801E0224: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E0224: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801E0228: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E022C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0230: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0234: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E0238: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E023C: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0240: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E0244: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801E0248: nop

    // 0x801E024C: bc1fl       L_801E0260
    if (!c1cs) {
        // 0x801E0250: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0260;
    }
    goto skip_0;
    // 0x801E0250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E0254: jal         0x801DACDC
    // 0x801E0258: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E0258: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    after_1:
    // 0x801E025C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0260:
    // 0x801E0260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0264: jr          $ra
    // 0x801E0268: nop

    TRACE_RETURN()
    return;
    // 0x801E0268: nop

;}
RECOMP_FUNC void func_801E50C0_5A0FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E50C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E50C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E50C8: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801E50CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E50D0: jal         0x801E5090
    // 0x801E50D4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_801E5090_5A0FA0(rdram, ctx);
        goto after_0;
    // 0x801E50D4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E50D8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E50DC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E50E0: jalr        $t9
    // 0x801E50E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E50E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E50E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E50EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E50F0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x801E50F4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801E50F8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E50FC: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801E5100: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E5104: nop

    // 0x801E5108: bc1fl       L_801E5148
    if (!c1cs) {
        // 0x801E510C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E5148;
    }
    goto skip_0;
    // 0x801E510C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E5110: lw          $v0, 0x5C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X5C);
    // 0x801E5114: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x801E5118: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E511C: lhu         $t8, 0x30($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X30);
    // 0x801E5120: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x801E5124: sh          $t0, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r8;
    // 0x801E5128: lw          $t1, 0x5C($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X5C);
    // 0x801E512C: lhu         $t2, 0x30($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X30);
    // 0x801E5130: bne         $t2, $at, L_801E5144
    if (ctx->r10 != ctx->r1) {
        // 0x801E5134: lui         $at, 0x8016
        ctx->r1 = S32(0X8016 << 16);
            goto L_801E5144;
    }
    // 0x801E5134: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801E5138: sb          $t3, -0x3AB3($at)
    MEM_B(-0X3AB3, ctx->r1) = ctx->r11;
    // 0x801E513C: lw          $t4, 0x5C($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X5C);
    // 0x801E5140: sh          $zero, 0x86($t4)
    MEM_H(0X86, ctx->r12) = 0;
L_801E5144:
    // 0x801E5144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E5148:
    // 0x801E5148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E514C: jr          $ra
    // 0x801E5150: nop

    TRACE_RETURN()
    return;
    // 0x801E5150: nop

;}
RECOMP_FUNC void func_801E6FE0_5A2EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6FE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E6FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E6FE8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E6FEC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801E6FF0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E6FF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E6FF8: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x801E6FFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7000: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E7004: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801E7008: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x801E700C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801E7010: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E7014: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E7018: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E701C: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x801E7020: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x801E7024: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801E7028: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E702C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801E7030: jal         0x80033898
    // 0x801E7034: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E7034: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E7038: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801E703C: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E7040: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801E7044: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E7048: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E704C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801E7050: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E7054: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E7058: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x801E705C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E7060: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E7064: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x801E7068: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E706C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E7070: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801E7074: jal         0x801E7398
    // 0x801E7078: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    func_801E7398_5A32A8(rdram, ctx);
        goto after_1;
    // 0x801E7078: lw          $a0, -0x39DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39DC);
    after_1:
    // 0x801E707C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7080: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E7084: jr          $ra
    // 0x801E7088: nop

    TRACE_RETURN()
    return;
    // 0x801E7088: nop

;}
RECOMP_FUNC void func_801F7B0C_5B3A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7B14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F7B18: jal         0x80036928
    // 0x801F7B1C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80036928_37528(rdram, ctx);
        goto after_0;
    // 0x801F7B1C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x801F7B20: bne         $v0, $zero, L_801F7C04
    if (ctx->r2 != 0) {
        // 0x801F7B24: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_801F7C04;
    }
    // 0x801F7B24: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801F7B28: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F7B2C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801F7B30: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801F7B34: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7B38: addiu       $t6, $zero, 0x95
    ctx->r14 = ADD32(0, 0X95);
    // 0x801F7B3C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F7B40: sh          $t6, -0x51DC($at)
    MEM_H(-0X51DC, ctx->r1) = ctx->r14;
    // 0x801F7B44: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801F7B48: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7B4C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801F7B50: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801F7B54: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801F7B58: sb          $t8, -0x4FE3($at)
    MEM_B(-0X4FE3, ctx->r1) = ctx->r24;
    // 0x801F7B5C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F7B60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801F7B64: sh          $t0, 0x2DB7($at)
    MEM_H(0X2DB7, ctx->r1) = ctx->r8;
    // 0x801F7B68: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801F7B6C: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801F7B70: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7B74: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801F7B78: lbu         $t2, -0x51D7($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X51D7);
    // 0x801F7B7C: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F7B80: addiu       $a0, $a0, 0x7C14
    ctx->r4 = ADD32(ctx->r4, 0X7C14);
    // 0x801F7B84: andi        $t3, $t2, 0x80
    ctx->r11 = ctx->r10 & 0X80;
    // 0x801F7B88: beq         $t3, $zero, L_801F7BFC
    if (ctx->r11 == 0) {
        // 0x801F7B8C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_801F7BFC;
    }
    // 0x801F7B8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801F7B90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801F7B94: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x801F7B98: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F7B9C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801F7BA0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F7BA4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F7BA8: addiu       $a0, $a0, -0x7BD8
    ctx->r4 = ADD32(ctx->r4, -0X7BD8);
    // 0x801F7BAC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801F7BB0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x801F7BB4: nop

    // 0x801F7BB8: sh          $t5, 0x2FE5($at)
    MEM_H(0X2FE5, ctx->r1) = ctx->r13;
    // 0x801F7BBC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F7BC0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801F7BC4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801F7BC8: nop

    // 0x801F7BCC: sh          $t7, 0x2FE7($at)
    MEM_H(0X2FE7, ctx->r1) = ctx->r15;
    // 0x801F7BD0: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F7BD4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801F7BD8: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x801F7BDC: nop

    // 0x801F7BE0: sh          $t9, 0x2FE9($at)
    MEM_H(0X2FE9, ctx->r1) = ctx->r25;
    // 0x801F7BE4: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801F7BE8: lhu         $t1, 0x94($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X94);
    // 0x801F7BEC: jal         0x8003521C
    // 0x801F7BF0: sh          $t1, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F7BF0: sh          $t1, 0x2FEB($at)
    MEM_H(0X2FEB, ctx->r1) = ctx->r9;
    after_1:
    // 0x801F7BF4: b           L_801F7C08
    // 0x801F7BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F7C08;
    // 0x801F7BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7BFC:
    // 0x801F7BFC: jal         0x8003521C
    // 0x801F7C00: sb          $t2, 0x2DCB($at)
    MEM_B(0X2DCB, ctx->r1) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F7C00: sb          $t2, 0x2DCB($at)
    MEM_B(0X2DCB, ctx->r1) = ctx->r10;
    after_2:
L_801F7C04:
    // 0x801F7C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7C08:
    // 0x801F7C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7C0C: jr          $ra
    // 0x801F7C10: nop

    TRACE_RETURN()
    return;
    // 0x801F7C10: nop

;}
RECOMP_FUNC void func_801D6710_592620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6710: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D6714: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D6718: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D671C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D6720: lw          $s1, 0x2C($a1)
    ctx->r17 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6724: lhu         $t7, 0xA8($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XA8);
    // 0x801D6728: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D672C: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6730: and         $t6, $s1, $at
    ctx->r14 = ctx->r17 & ctx->r1;
    // 0x801D6734: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x801D6738: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D673C: beq         $t8, $zero, L_801D6750
    if (ctx->r24 == 0) {
        // 0x801D6740: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_801D6750;
    }
    // 0x801D6740: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D6744: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6748: b           L_801D6760
    // 0x801D674C: lwc1        $f2, -0x2E24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E24);
        goto L_801D6760;
    // 0x801D674C: lwc1        $f2, -0x2E24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E24);
L_801D6750:
    // 0x801D6750: jal         0x80003DC0
    // 0x801D6754: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    func_80003DC0_49C0(rdram, ctx);
        goto after_0;
    // 0x801D6754: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    after_0:
    // 0x801D6758: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D675C: lwc1        $f2, -0x2E24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E24);
L_801D6760:
    // 0x801D6760: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D6764: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D6768: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D676C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6770: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x801D6774: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D6778: bc1fl       L_801D678C
    if (!c1cs) {
        // 0x801D677C: sb          $zero, 0xAB($s0)
        MEM_B(0XAB, ctx->r16) = 0;
            goto L_801D678C;
    }
    goto skip_0;
    // 0x801D677C: sb          $zero, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = 0;
    skip_0:
    // 0x801D6780: b           L_801D678C
    // 0x801D6784: sb          $t9, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r25;
        goto L_801D678C;
    // 0x801D6784: sb          $t9, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r25;
    // 0x801D6788: sb          $zero, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = 0;
L_801D678C:
    // 0x801D678C: jal         0x801D7194
    // 0x801D6790: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_801D7194_5930A4(rdram, ctx);
        goto after_1;
    // 0x801D6790: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x801D6794: addiu       $t0, $zero, 0x3F00
    ctx->r8 = ADD32(0, 0X3F00);
    // 0x801D6798: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D679C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D67A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D67A4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801D67A8: jal         0x801D56D0
    // 0x801D67AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_2;
    // 0x801D67AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801D67B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D67B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D67B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D67BC: jr          $ra
    // 0x801D67C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801D67C0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801E8964_5A4874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8968: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E896C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E8970: sltiu       $at, $t6, 0x2B
    ctx->r1 = ctx->r14 < 0X2B ? 1 : 0;
    // 0x801E8974: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E897C: beq         $at, $zero, L_801E8C34
    if (ctx->r1 == 0) {
        // 0x801E8980: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801E8C34;
    }
    // 0x801E8980: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E8984: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E8988: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E898C: addu        $at, $at, $t7
    gpr jr_addend_801E8994 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801E8990: lw          $t7, -0x48B8($at)
    ctx->r15 = ADD32(ctx->r1, -0X48B8);
    // 0x801E8994: jr          $t7
    // 0x801E8998: nop

    switch (jr_addend_801E8994 >> 2) {
        case 0: goto L_801E8C34; break;
        case 1: goto L_801E899C; break;
        case 2: goto L_801E89AC; break;
        case 3: goto L_801E89BC; break;
        case 4: goto L_801E89CC; break;
        case 5: goto L_801E89DC; break;
        case 6: goto L_801E89EC; break;
        case 7: goto L_801E89FC; break;
        case 8: goto L_801E8A0C; break;
        case 9: goto L_801E8A1C; break;
        case 10: goto L_801E8A2C; break;
        case 11: goto L_801E8A3C; break;
        case 12: goto L_801E8A4C; break;
        case 13: goto L_801E8A5C; break;
        case 14: goto L_801E8A6C; break;
        case 15: goto L_801E8A7C; break;
        case 16: goto L_801E8A8C; break;
        case 17: goto L_801E8A9C; break;
        case 18: goto L_801E8AAC; break;
        case 19: goto L_801E8ABC; break;
        case 20: goto L_801E8ACC; break;
        case 21: goto L_801E8ADC; break;
        case 22: goto L_801E8AEC; break;
        case 23: goto L_801E8AFC; break;
        case 24: goto L_801E8B0C; break;
        case 25: goto L_801E8B1C; break;
        case 26: goto L_801E8B2C; break;
        case 27: goto L_801E8B3C; break;
        case 28: goto L_801E8B4C; break;
        case 29: goto L_801E8B5C; break;
        case 30: goto L_801E8B6C; break;
        case 31: goto L_801E8B7C; break;
        case 32: goto L_801E8B8C; break;
        case 33: goto L_801E8B9C; break;
        case 34: goto L_801E8BAC; break;
        case 35: goto L_801E8BBC; break;
        case 36: goto L_801E8BCC; break;
        case 37: goto L_801E8BDC; break;
        case 38: goto L_801E8BEC; break;
        case 39: goto L_801E8BFC; break;
        case 40: goto L_801E8C0C; break;
        case 41: goto L_801E8C1C; break;
        case 42: goto L_801E8C2C; break;
        default: switch_error(__func__, 0x801E8994, 0x8020B748);
    }
    // 0x801E8998: nop

L_801E899C:
    // 0x801E899C: jal         0x801E8F50
    // 0x801E89A0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801E8F50_5A4E60(rdram, ctx);
        goto after_0;
    // 0x801E89A0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_0:
    // 0x801E89A4: b           L_801E8C38
    // 0x801E89A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89AC:
    // 0x801E89AC: jal         0x801E9AE0
    // 0x801E89B0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801E9AE0_5A59F0(rdram, ctx);
        goto after_1;
    // 0x801E89B0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_1:
    // 0x801E89B4: b           L_801E8C38
    // 0x801E89B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89BC:
    // 0x801E89BC: jal         0x801EA860
    // 0x801E89C0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EA860_5A6770(rdram, ctx);
        goto after_2;
    // 0x801E89C0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_2:
    // 0x801E89C4: b           L_801E8C38
    // 0x801E89C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89CC:
    // 0x801E89CC: jal         0x801EB020
    // 0x801E89D0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB020_5A6F30(rdram, ctx);
        goto after_3;
    // 0x801E89D0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_3:
    // 0x801E89D4: b           L_801E8C38
    // 0x801E89D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89DC:
    // 0x801E89DC: jal         0x801EB04C
    // 0x801E89E0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB04C_5A6F5C(rdram, ctx);
        goto after_4;
    // 0x801E89E0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_4:
    // 0x801E89E4: b           L_801E8C38
    // 0x801E89E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89EC:
    // 0x801E89EC: jal         0x801EB078
    // 0x801E89F0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB078_5A6F88(rdram, ctx);
        goto after_5;
    // 0x801E89F0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_5:
    // 0x801E89F4: b           L_801E8C38
    // 0x801E89F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E89F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E89FC:
    // 0x801E89FC: jal         0x801EB0A4
    // 0x801E8A00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB0A4_5A6FB4(rdram, ctx);
        goto after_6;
    // 0x801E8A00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_6:
    // 0x801E8A04: b           L_801E8C38
    // 0x801E8A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A0C:
    // 0x801E8A0C: jal         0x801EB0D0
    // 0x801E8A10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB0D0_5A6FE0(rdram, ctx);
        goto after_7;
    // 0x801E8A10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_7:
    // 0x801E8A14: b           L_801E8C38
    // 0x801E8A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A1C:
    // 0x801E8A1C: jal         0x801EB0FC
    // 0x801E8A20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB0FC_5A700C(rdram, ctx);
        goto after_8;
    // 0x801E8A20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_8:
    // 0x801E8A24: b           L_801E8C38
    // 0x801E8A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A2C:
    // 0x801E8A2C: jal         0x801EB128
    // 0x801E8A30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB128_5A7038(rdram, ctx);
        goto after_9;
    // 0x801E8A30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_9:
    // 0x801E8A34: b           L_801E8C38
    // 0x801E8A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A3C:
    // 0x801E8A3C: jal         0x801EB154
    // 0x801E8A40: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB154_5A7064(rdram, ctx);
        goto after_10;
    // 0x801E8A40: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_10:
    // 0x801E8A44: b           L_801E8C38
    // 0x801E8A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A4C:
    // 0x801E8A4C: jal         0x801EB840
    // 0x801E8A50: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB840_5A7750(rdram, ctx);
        goto after_11;
    // 0x801E8A50: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_11:
    // 0x801E8A54: b           L_801E8C38
    // 0x801E8A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A5C:
    // 0x801E8A5C: jal         0x801EB86C
    // 0x801E8A60: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EB86C_5A777C(rdram, ctx);
        goto after_12;
    // 0x801E8A60: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_12:
    // 0x801E8A64: b           L_801E8C38
    // 0x801E8A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A6C:
    // 0x801E8A6C: jal         0x801EBC64
    // 0x801E8A70: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EBC64_5A7B74(rdram, ctx);
        goto after_13;
    // 0x801E8A70: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_13:
    // 0x801E8A74: b           L_801E8C38
    // 0x801E8A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A7C:
    // 0x801E8A7C: jal         0x801EBC90
    // 0x801E8A80: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EBC90_5A7BA0(rdram, ctx);
        goto after_14;
    // 0x801E8A80: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_14:
    // 0x801E8A84: b           L_801E8C38
    // 0x801E8A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A8C:
    // 0x801E8A8C: jal         0x801EBCBC
    // 0x801E8A90: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EBCBC_5A7BCC(rdram, ctx);
        goto after_15;
    // 0x801E8A90: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_15:
    // 0x801E8A94: b           L_801E8C38
    // 0x801E8A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8A9C:
    // 0x801E8A9C: jal         0x801EC5B4
    // 0x801E8AA0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EC5B4_5A84C4(rdram, ctx);
        goto after_16;
    // 0x801E8AA0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_16:
    // 0x801E8AA4: b           L_801E8C38
    // 0x801E8AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8AAC:
    // 0x801E8AAC: jal         0x801ECCB8
    // 0x801E8AB0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801ECCB8_5A8BC8(rdram, ctx);
        goto after_17;
    // 0x801E8AB0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_17:
    // 0x801E8AB4: b           L_801E8C38
    // 0x801E8AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8ABC:
    // 0x801E8ABC: jal         0x801ED500
    // 0x801E8AC0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801ED500_5A9410(rdram, ctx);
        goto after_18;
    // 0x801E8AC0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_18:
    // 0x801E8AC4: b           L_801E8C38
    // 0x801E8AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8ACC:
    // 0x801E8ACC: jal         0x801ED528
    // 0x801E8AD0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801ED528_5A9438(rdram, ctx);
        goto after_19;
    // 0x801E8AD0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_19:
    // 0x801E8AD4: b           L_801E8C38
    // 0x801E8AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8ADC:
    // 0x801E8ADC: jal         0x801ED554
    // 0x801E8AE0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801ED554_5A9464(rdram, ctx);
        goto after_20;
    // 0x801E8AE0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_20:
    // 0x801E8AE4: b           L_801E8C38
    // 0x801E8AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8AEC:
    // 0x801E8AEC: jal         0x801EDC08
    // 0x801E8AF0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EDC08_5A9B18(rdram, ctx);
        goto after_21;
    // 0x801E8AF0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_21:
    // 0x801E8AF4: b           L_801E8C38
    // 0x801E8AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8AFC:
    // 0x801E8AFC: jal         0x801EE7A0
    // 0x801E8B00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EE7A0_5AA6B0(rdram, ctx);
        goto after_22;
    // 0x801E8B00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_22:
    // 0x801E8B04: b           L_801E8C38
    // 0x801E8B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B0C:
    // 0x801E8B0C: jal         0x801EE7CC
    // 0x801E8B10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EE7CC_5AA6DC(rdram, ctx);
        goto after_23;
    // 0x801E8B10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_23:
    // 0x801E8B14: b           L_801E8C38
    // 0x801E8B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B1C:
    // 0x801E8B1C: jal         0x801EE7F8
    // 0x801E8B20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EE7F8_5AA708(rdram, ctx);
        goto after_24;
    // 0x801E8B20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_24:
    // 0x801E8B24: b           L_801E8C38
    // 0x801E8B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B2C:
    // 0x801E8B2C: jal         0x801EF87C
    // 0x801E8B30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801EF87C_5AB78C(rdram, ctx);
        goto after_25;
    // 0x801E8B30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_25:
    // 0x801E8B34: b           L_801E8C38
    // 0x801E8B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B3C:
    // 0x801E8B3C: jal         0x801F0408
    // 0x801E8B40: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F0408_5AC318(rdram, ctx);
        goto after_26;
    // 0x801E8B40: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_26:
    // 0x801E8B44: b           L_801E8C38
    // 0x801E8B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B4C:
    // 0x801E8B4C: jal         0x801F093C
    // 0x801E8B50: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F093C_5AC84C(rdram, ctx);
        goto after_27;
    // 0x801E8B50: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_27:
    // 0x801E8B54: b           L_801E8C38
    // 0x801E8B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B5C:
    // 0x801E8B5C: jal         0x801F0F00
    // 0x801E8B60: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F0F00_5ACE10(rdram, ctx);
        goto after_28;
    // 0x801E8B60: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_28:
    // 0x801E8B64: b           L_801E8C38
    // 0x801E8B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B6C:
    // 0x801E8B6C: jal         0x801F0F2C
    // 0x801E8B70: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F0F2C_5ACE3C(rdram, ctx);
        goto after_29;
    // 0x801E8B70: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_29:
    // 0x801E8B74: b           L_801E8C38
    // 0x801E8B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B7C:
    // 0x801E8B7C: jal         0x801F0F58
    // 0x801E8B80: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F0F58_5ACE68(rdram, ctx);
        goto after_30;
    // 0x801E8B80: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_30:
    // 0x801E8B84: b           L_801E8C38
    // 0x801E8B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B8C:
    // 0x801E8B8C: jal         0x801F23F0
    // 0x801E8B90: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F23F0_5AE300(rdram, ctx);
        goto after_31;
    // 0x801E8B90: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_31:
    // 0x801E8B94: b           L_801E8C38
    // 0x801E8B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8B9C:
    // 0x801E8B9C: jal         0x801F3B30
    // 0x801E8BA0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F3B30_5AFA40(rdram, ctx);
        goto after_32;
    // 0x801E8BA0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_32:
    // 0x801E8BA4: b           L_801E8C38
    // 0x801E8BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BAC:
    // 0x801E8BAC: jal         0x801F11F0
    // 0x801E8BB0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F11F0_5AD100(rdram, ctx);
        goto after_33;
    // 0x801E8BB0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_33:
    // 0x801E8BB4: b           L_801E8C38
    // 0x801E8BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BBC:
    // 0x801E8BBC: jal         0x801F15E0
    // 0x801E8BC0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F15E0_5AD4F0(rdram, ctx);
        goto after_34;
    // 0x801E8BC0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_34:
    // 0x801E8BC4: b           L_801E8C38
    // 0x801E8BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BCC:
    // 0x801E8BCC: jal         0x801F309C
    // 0x801E8BD0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F309C_5AEFAC(rdram, ctx);
        goto after_35;
    // 0x801E8BD0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_35:
    // 0x801E8BD4: b           L_801E8C38
    // 0x801E8BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BDC:
    // 0x801E8BDC: jal         0x801F3298
    // 0x801E8BE0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F3298_5AF1A8(rdram, ctx);
        goto after_36;
    // 0x801E8BE0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_36:
    // 0x801E8BE4: b           L_801E8C38
    // 0x801E8BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BEC:
    // 0x801E8BEC: jal         0x801F3494
    // 0x801E8BF0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F3494_5AF3A4(rdram, ctx);
        goto after_37;
    // 0x801E8BF0: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_37:
    // 0x801E8BF4: b           L_801E8C38
    // 0x801E8BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8BFC:
    // 0x801E8BFC: jal         0x801F365C
    // 0x801E8C00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F365C_5AF56C(rdram, ctx);
        goto after_38;
    // 0x801E8C00: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_38:
    // 0x801E8C04: b           L_801E8C38
    // 0x801E8C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8C0C:
    // 0x801E8C0C: jal         0x801F387C
    // 0x801E8C10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F387C_5AF78C(rdram, ctx);
        goto after_39;
    // 0x801E8C10: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_39:
    // 0x801E8C14: b           L_801E8C38
    // 0x801E8C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8C1C:
    // 0x801E8C1C: jal         0x801F27AC
    // 0x801E8C20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F27AC_5AE6BC(rdram, ctx);
        goto after_40;
    // 0x801E8C20: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_40:
    // 0x801E8C24: b           L_801E8C38
    // 0x801E8C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E8C38;
    // 0x801E8C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8C2C:
    // 0x801E8C2C: jal         0x801F2CB4
    // 0x801E8C30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    func_801F2CB4_5AEBC4(rdram, ctx);
        goto after_41;
    // 0x801E8C30: lw          $a0, 0xDC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XDC);
    after_41:
L_801E8C34:
    // 0x801E8C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E8C38:
    // 0x801E8C38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8C3C: jr          $ra
    // 0x801E8C40: nop

    TRACE_RETURN()
    return;
    // 0x801E8C40: nop

;}
RECOMP_FUNC void func_801F8E80_5B4D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8E80: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F8E84: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801F8E88: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E8C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8E90: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F8E94: sw          $zero, -0x724($at)
    MEM_W(-0X724, ctx->r1) = 0;
    // 0x801F8E98: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801F8E9C: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8EA0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F8EA4: sw          $zero, -0x720($at)
    MEM_W(-0X720, ctx->r1) = 0;
    // 0x801F8EA8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801F8EAC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8EB0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801F8EB4: sw          $zero, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = 0;
    // 0x801F8EB8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801F8EBC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8EC0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801F8EC4: sw          $zero, -0x710($at)
    MEM_W(-0X710, ctx->r1) = 0;
    // 0x801F8EC8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801F8ECC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801F8ED0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801F8ED4: jr          $ra
    // 0x801F8ED8: sw          $zero, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x801F8ED8: sw          $zero, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_801F8C4C_5B4B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8C4C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x801F8C50: addiu       $a1, $a1, -0x70A0
    ctx->r5 = ADD32(ctx->r5, -0X70A0);
    // 0x801F8C54: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x801F8C58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801F8C5C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8C60: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F8C64: sw          $zero, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = 0;
    // 0x801F8C68: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F8C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F8C70: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F8C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8C78: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F8C7C: lbu         $t6, 0x2DF6($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F8C80: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F8C84: lhu         $t9, 0x2DF8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F8C88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F8C8C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801F8C90: lw          $t8, -0x66DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X66DC);
    // 0x801F8C94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801F8C98: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x801F8C9C: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x801F8CA0: beql        $v0, $zero, L_801F8D88
    if (ctx->r2 == 0) {
        // 0x801F8CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F8D88;
    }
    goto skip_0;
    // 0x801F8CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F8CA8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x801F8CAC: lbu         $t2, 0x2DF6($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F8CB0: lhu         $t5, 0x2DF8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F8CB4: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801F8CB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801F8CBC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801F8CC0: lw          $t4, -0x6724($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6724);
    // 0x801F8CC4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801F8CC8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801F8CCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801F8CD0: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x801F8CD4: jal         0x800141C4
    // 0x801F8CD8: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x801F8CD8: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_0:
    // 0x801F8CDC: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x801F8CE0: addiu       $a1, $a1, -0x70A0
    ctx->r5 = ADD32(ctx->r5, -0X70A0);
    // 0x801F8CE4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801F8CE8: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801F8CEC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F8CF0: addu        $t8, $v0, $t9
    ctx->r24 = ADD32(ctx->r2, ctx->r25);
    // 0x801F8CF4: addu        $t0, $t8, $at
    ctx->r8 = ADD32(ctx->r24, ctx->r1);
    // 0x801F8CF8: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x801F8CFC: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801F8D00: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F8D04: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801F8D08: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801F8D0C: lbu         $t1, 0x2DF6($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F8D10: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801F8D14: lhu         $t5, 0x2DF8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F8D18: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F8D1C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801F8D20: lw          $t3, -0x66C4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X66C4);
    // 0x801F8D24: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x801F8D28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801F8D2C: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x801F8D30: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x801F8D34: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F8D38: sw          $t7, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = ctx->r15;
    // 0x801F8D3C: lbu         $t9, 0x2DF6($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801F8D40: lhu         $t1, 0x2DF8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801F8D44: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x801F8D48: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x801F8D4C: lw          $t0, -0x6724($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6724);
    // 0x801F8D50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F8D54: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801F8D58: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801F8D5C: addu        $t5, $t0, $t2
    ctx->r13 = ADD32(ctx->r8, ctx->r10);
    // 0x801F8D60: jal         0x800141C4
    // 0x801F8D64: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x801F8D64: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_1:
    // 0x801F8D68: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x801F8D6C: addiu       $v1, $v1, -0x709C
    ctx->r3 = ADD32(ctx->r3, -0X709C);
    // 0x801F8D70: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801F8D74: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x801F8D78: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x801F8D7C: addu        $t6, $t4, $at
    ctx->r14 = ADD32(ctx->r12, ctx->r1);
    // 0x801F8D80: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x801F8D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F8D88:
    // 0x801F8D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F8D8C: jr          $ra
    // 0x801F8D90: nop

    TRACE_RETURN()
    return;
    // 0x801F8D90: nop

;}
RECOMP_FUNC void func_801EB840_5A7750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB84C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB850: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB854: jal         0x801EB898
    // 0x801EB858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EB898_5A77A8(rdram, ctx);
        goto after_0;
    // 0x801EB858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801EB85C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB864: jr          $ra
    // 0x801EB868: nop

    TRACE_RETURN()
    return;
    // 0x801EB868: nop

;}
RECOMP_FUNC void func_801F6F30_5B2E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6F34: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6F3C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F6F40: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6F44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F6F48: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801F6F4C: jalr        $t9
    // 0x801F6F50: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801F6F50: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801F6F54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6F58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6F5C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6F60: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F6F64: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6F68: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6F6C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F6F70: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6F74: nop

    // 0x801F6F78: bc1fl       L_801F6FA8
    if (!c1cs) {
        // 0x801F6F7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6FA8;
    }
    goto skip_0;
    // 0x801F6F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6F80: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801F6F84: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x801F6F88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F6F8C: lwc1        $f10, 0x48($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X48);
    // 0x801F6F90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F6F94: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    // 0x801F6F98: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F6F9C: jal         0x801DACDC
    // 0x801F6FA0: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F6FA0: swc1        $f18, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x801F6FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6FA8:
    // 0x801F6FA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6FAC: jr          $ra
    // 0x801F6FB0: nop

    TRACE_RETURN()
    return;
    // 0x801F6FB0: nop

;}
RECOMP_FUNC void func_801F6E60_5B2D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6E6C: jal         0x801E7F50
    // 0x801F6E70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6E70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6E74: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6E78: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6E7C: jalr        $t9
    // 0x801F6E80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6E80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6E84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6E88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6E8C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6E94: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6E98: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6E9C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6EA0: nop

    // 0x801F6EA4: bc1fl       L_801F6EB8
    if (!c1cs) {
        // 0x801F6EA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6EB8;
    }
    goto skip_0;
    // 0x801F6EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6EAC: jal         0x801DACDC
    // 0x801F6EB0: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6EB0: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_2:
    // 0x801F6EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6EB8:
    // 0x801F6EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6EBC: jr          $ra
    // 0x801F6EC0: nop

    TRACE_RETURN()
    return;
    // 0x801F6EC0: nop

;}
RECOMP_FUNC void func_801DDB28_599A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDB28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDB2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDB30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DDB34: lbu         $t6, 0x30($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X30);
    // 0x801DDB38: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801DDB3C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801DDB40: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801DDB44: sb          $t7, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r15;
    // 0x801DDB48: lw          $t9, -0x39E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39E4);
    // 0x801DDB4C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DDB50: sb          $t8, 0x64($t9)
    MEM_B(0X64, ctx->r25) = ctx->r24;
    // 0x801DDB54: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DDB58: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DDB5C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801DDB60: jalr        $t9
    // 0x801DDB64: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801DDB64: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801DDB68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DDB6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DDB70: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDB74: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DDB78: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801DDB7C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DDB80: nop

    // 0x801DDB84: bc1fl       L_801DDBA4
    if (!c1cs) {
        // 0x801DDB88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DDBA4;
    }
    goto skip_0;
    // 0x801DDB88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801DDB8C: jal         0x801E3358
    // 0x801DDB90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E3358_59F268(rdram, ctx);
        goto after_1;
    // 0x801DDB90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801DDB94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DDB98: jal         0x801DACDC
    // 0x801DDB9C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DDB9C: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_2:
    // 0x801DDBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DDBA4:
    // 0x801DDBA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDBA8: jr          $ra
    // 0x801DDBAC: nop

    TRACE_RETURN()
    return;
    // 0x801DDBAC: nop

;}
RECOMP_FUNC void func_801F10C4_5ACFD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F10C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F10C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F10CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F10D0: jal         0x801EEDF8
    // 0x801F10D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801EEDF8_5AAD08(rdram, ctx);
        goto after_0;
    // 0x801F10D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x801F10D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F10DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F10E0: jr          $ra
    // 0x801F10E4: nop

    TRACE_RETURN()
    return;
    // 0x801F10E4: nop

;}
RECOMP_FUNC void func_801E0158_59C068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0158: lbu         $t6, 0x60($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X60);
    // 0x801E015C: bnel        $t6, $zero, L_801E0198
    if (ctx->r14 != 0) {
        // 0x801E0160: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E0198;
    }
    goto skip_0;
    // 0x801E0160: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E0164: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E0168: lw          $v0, 0x90($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X90);
    // 0x801E016C: beql        $v0, $zero, L_801E0198
    if (ctx->r2 == 0) {
        // 0x801E0170: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E0198;
    }
    goto skip_1;
    // 0x801E0170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E0174: lhu         $t7, 0x5C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X5C);
    // 0x801E0178: addiu       $at, $zero, 0x245
    ctx->r1 = ADD32(0, 0X245);
    // 0x801E017C: bnel        $t7, $at, L_801E0198
    if (ctx->r15 != ctx->r1) {
        // 0x801E0180: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E0198;
    }
    goto skip_2;
    // 0x801E0180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801E0184: lhu         $v0, 0x86($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X86);
    // 0x801E0188: sltiu       $t8, $v0, 0x1
    ctx->r24 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x801E018C: jr          $ra
    // 0x801E0190: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x801E0190: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801E0194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0198:
    // 0x801E0198: jr          $ra
    // 0x801E019C: nop

    TRACE_RETURN()
    return;
    // 0x801E019C: nop

;}
RECOMP_FUNC void func_801ECCB8_5A8BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ECCB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ECCBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ECCC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ECCC4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801ECCC8: jal         0x801E8F50
    // 0x801ECCCC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_801E8F50_5A4E60(rdram, ctx);
        goto after_0;
    // 0x801ECCCC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801ECCD0: beq         $v0, $zero, L_801ECCE0
    if (ctx->r2 == 0) {
        // 0x801ECCD4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801ECCE0;
    }
    // 0x801ECCD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801ECCD8: jal         0x801ED1F0
    // 0x801ECCDC: nop

    func_801ED1F0_5A9100(rdram, ctx);
        goto after_1;
    // 0x801ECCDC: nop

    after_1:
L_801ECCE0:
    // 0x801ECCE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ECCE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ECCE8: jr          $ra
    // 0x801ECCEC: nop

    TRACE_RETURN()
    return;
    // 0x801ECCEC: nop

;}
RECOMP_FUNC void func_801E2D50_59EC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2D58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801E2D5C: jal         0x801E2D74
    // 0x801E2D60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801E2D74_59EC84(rdram, ctx);
        goto after_0;
    // 0x801E2D60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x801E2D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2D6C: jr          $ra
    // 0x801E2D70: nop

    TRACE_RETURN()
    return;
    // 0x801E2D70: nop

;}
RECOMP_FUNC void func_801E3324_59F234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3324: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3328: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E332C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E3330: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801E3334: lbu         $t7, 0x60($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X60);
    // 0x801E3338: bnel        $t7, $at, L_801E334C
    if (ctx->r15 != ctx->r1) {
        // 0x801E333C: sb          $t8, 0xDB($a0)
        MEM_B(0XDB, ctx->r4) = ctx->r24;
            goto L_801E334C;
    }
    goto skip_0;
    // 0x801E333C: sb          $t8, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r24;
    skip_0:
    // 0x801E3340: b           L_801E334C
    // 0x801E3344: sb          $zero, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = 0;
        goto L_801E334C;
    // 0x801E3344: sb          $zero, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = 0;
    // 0x801E3348: sb          $t8, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r24;
L_801E334C:
    // 0x801E334C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3350: jr          $ra
    // 0x801E3354: sh          $zero, 0x30($t9)
    MEM_H(0X30, ctx->r25) = 0;
    TRACE_RETURN()
    return;
    // 0x801E3354: sh          $zero, 0x30($t9)
    MEM_H(0X30, ctx->r25) = 0;
;}
RECOMP_FUNC void func_801D6B80_592A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6B80: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801D6B84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D6B88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D6B8C: lw          $a2, 0x2C($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X2C);
    // 0x801D6B90: lbu         $t7, 0xE1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XE1);
    // 0x801D6B94: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D6B98: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D6B9C: and         $t6, $a2, $at
    ctx->r14 = ctx->r6 & ctx->r1;
    // 0x801D6BA0: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801D6BA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D6BA8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D6BAC: beq         $at, $zero, L_801D6C00
    if (ctx->r1 == 0) {
        // 0x801D6BB0: sb          $zero, 0x5E($a0)
        MEM_B(0X5E, ctx->r4) = 0;
            goto L_801D6C00;
    }
    // 0x801D6BB0: sb          $zero, 0x5E($a0)
    MEM_B(0X5E, ctx->r4) = 0;
    // 0x801D6BB4: lbu         $v0, 0x62($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X62);
    // 0x801D6BB8: beq         $v0, $zero, L_801D6BD8
    if (ctx->r2 == 0) {
        // 0x801D6BBC: slti        $at, $v0, 0x3
        ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_801D6BD8;
    }
    // 0x801D6BBC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801D6BC0: beq         $at, $zero, L_801D6BD0
    if (ctx->r1 == 0) {
        // 0x801D6BC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D6BD0;
    }
    // 0x801D6BC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D6BC8: b           L_801D6BD8
    // 0x801D6BCC: sb          $zero, 0x62($a0)
    MEM_B(0X62, ctx->r4) = 0;
        goto L_801D6BD8;
    // 0x801D6BCC: sb          $zero, 0x62($a0)
    MEM_B(0X62, ctx->r4) = 0;
L_801D6BD0:
    // 0x801D6BD0: addiu       $t8, $v1, -0x3
    ctx->r24 = ADD32(ctx->r3, -0X3);
    // 0x801D6BD4: sb          $t8, 0x62($s0)
    MEM_B(0X62, ctx->r16) = ctx->r24;
L_801D6BD8:
    // 0x801D6BD8: lhu         $v1, 0xB0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB0);
    // 0x801D6BDC: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x801D6BE0: beq         $v1, $zero, L_801D6C54
    if (ctx->r3 == 0) {
        // 0x801D6BE4: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_801D6C54;
    }
    // 0x801D6BE4: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x801D6BE8: bne         $at, $zero, L_801D6BF8
    if (ctx->r1 != 0) {
        // 0x801D6BEC: addiu       $t9, $v1, -0x3
        ctx->r25 = ADD32(ctx->r3, -0X3);
            goto L_801D6BF8;
    }
    // 0x801D6BEC: addiu       $t9, $v1, -0x3
    ctx->r25 = ADD32(ctx->r3, -0X3);
    // 0x801D6BF0: b           L_801D6C54
    // 0x801D6BF4: sh          $t9, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r25;
        goto L_801D6C54;
    // 0x801D6BF4: sh          $t9, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r25;
L_801D6BF8:
    // 0x801D6BF8: b           L_801D6C54
    // 0x801D6BFC: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
        goto L_801D6C54;
    // 0x801D6BFC: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
L_801D6C00:
    // 0x801D6C00: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801D6C04: lw          $t0, -0x39D4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39D4);
    // 0x801D6C08: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x801D6C0C: lhu         $v0, 0x92($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X92);
    // 0x801D6C10: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801D6C14: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D6C18: beql        $at, $zero, L_801D6C30
    if (ctx->r1 == 0) {
        // 0x801D6C1C: lhu         $v0, 0xB0($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0XB0);
            goto L_801D6C30;
    }
    goto skip_0;
    // 0x801D6C1C: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
    skip_0:
    // 0x801D6C20: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x801D6C24: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801D6C28: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x801D6C2C: lhu         $v0, 0xB0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XB0);
L_801D6C30:
    // 0x801D6C30: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D6C34: beq         $at, $zero, L_801D6C54
    if (ctx->r1 == 0) {
        // 0x801D6C38: subu        $t1, $a0, $v0
        ctx->r9 = SUB32(ctx->r4, ctx->r2);
            goto L_801D6C54;
    }
    // 0x801D6C38: subu        $t1, $a0, $v0
    ctx->r9 = SUB32(ctx->r4, ctx->r2);
    // 0x801D6C3C: slti        $at, $t1, 0x8
    ctx->r1 = SIGNED(ctx->r9) < 0X8 ? 1 : 0;
    // 0x801D6C40: bne         $at, $zero, L_801D6C50
    if (ctx->r1 != 0) {
        // 0x801D6C44: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_801D6C50;
    }
    // 0x801D6C44: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x801D6C48: b           L_801D6C54
    // 0x801D6C4C: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
        goto L_801D6C54;
    // 0x801D6C4C: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
L_801D6C50:
    // 0x801D6C50: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
L_801D6C54:
    // 0x801D6C54: lbu         $v0, 0xE1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE1);
    // 0x801D6C58: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D6C5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6C60: beq         $v0, $zero, L_801D6CA0
    if (ctx->r2 == 0) {
        // 0x801D6C64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D6CA0;
    }
    // 0x801D6C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6C68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D6C6C: beq         $v0, $at, L_801D6D0C
    if (ctx->r2 == ctx->r1) {
        // 0x801D6C70: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_801D6D0C;
    }
    // 0x801D6C70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D6C74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D6C78: beq         $v0, $at, L_801D6EB0
    if (ctx->r2 == ctx->r1) {
        // 0x801D6C7C: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_801D6EB0;
    }
    // 0x801D6C7C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D6C80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D6C84: beq         $v0, $at, L_801D6F64
    if (ctx->r2 == ctx->r1) {
        // 0x801D6C88: lui         $v1, 0x8021
        ctx->r3 = S32(0X8021 << 16);
            goto L_801D6F64;
    }
    // 0x801D6C88: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D6C8C: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x801D6C90: sh          $t3, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r11;
    // 0x801D6C94: sb          $zero, 0x70($s0)
    MEM_B(0X70, ctx->r16) = 0;
    // 0x801D6C98: b           L_801D7044
    // 0x801D6C9C: sb          $zero, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = 0;
        goto L_801D7044;
    // 0x801D6C9C: sb          $zero, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = 0;
L_801D6CA0:
    // 0x801D6CA0: sh          $t4, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r12;
    // 0x801D6CA4: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
    // 0x801D6CA8: sb          $zero, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = 0;
    // 0x801D6CAC: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    // 0x801D6CB0: jal         0x801D5FA8
    // 0x801D6CB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_801D5FA8_591EB8(rdram, ctx);
        goto after_0;
    // 0x801D6CB4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x801D6CB8: lhu         $t6, 0x66($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X66);
    // 0x801D6CBC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D6CC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6CC4: sh          $t6, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r14;
    // 0x801D6CC8: sh          $t7, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r15;
    // 0x801D6CCC: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
    // 0x801D6CD0: sb          $zero, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = 0;
    // 0x801D6CD4: addiu       $t9, $zero, 0xE00
    ctx->r25 = ADD32(0, 0XE00);
    // 0x801D6CD8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D6CDC: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D6CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6CE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801D6CE8: jal         0x801D7C20
    // 0x801D6CEC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_801D7C20_593B30(rdram, ctx);
        goto after_1;
    // 0x801D6CEC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_1:
    // 0x801D6CF0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D6CF4: bnel        $v0, $at, L_801D7048
    if (ctx->r2 != ctx->r1) {
        // 0x801D6CF8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D7048;
    }
    goto skip_1;
    // 0x801D6CF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801D6CFC: lbu         $t0, 0xE1($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XE1);
    // 0x801D6D00: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801D6D04: b           L_801D7044
    // 0x801D6D08: sb          $t1, 0xE1($s0)
    MEM_B(0XE1, ctx->r16) = ctx->r9;
        goto L_801D7044;
    // 0x801D6D08: sb          $t1, 0xE1($s0)
    MEM_B(0XE1, ctx->r16) = ctx->r9;
L_801D6D0C:
    // 0x801D6D0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6D10: sh          $t2, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r10;
    // 0x801D6D14: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
    // 0x801D6D18: sb          $zero, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = 0;
    // 0x801D6D1C: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    // 0x801D6D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6D24: jal         0x801D5FA8
    // 0x801D6D28: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_801D5FA8_591EB8(rdram, ctx);
        goto after_2;
    // 0x801D6D28: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x801D6D2C: lbu         $t4, 0x5E($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5E);
    // 0x801D6D30: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x801D6D34: addiu       $a2, $a2, -0x3340
    ctx->r6 = ADD32(ctx->r6, -0X3340);
    // 0x801D6D38: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801D6D3C: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x801D6D40: sb          $t5, 0x5E($s0)
    MEM_B(0X5E, ctx->r16) = ctx->r13;
    // 0x801D6D44: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x801D6D48: lwc1        $f4, -0x4EA0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EA0);
    // 0x801D6D4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6D50: lwc1        $f6, -0x532C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X532C);
    // 0x801D6D54: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D6D58: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D6D5C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D6D60: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801D6D64: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x801D6D68: nop

    // 0x801D6D6C: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x801D6D70: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x801D6D74: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D6D78: slti        $at, $t8, 0x201
    ctx->r1 = SIGNED(ctx->r24) < 0X201 ? 1 : 0;
    // 0x801D6D7C: bne         $at, $zero, L_801D6D8C
    if (ctx->r1 != 0) {
        // 0x801D6D80: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_801D6D8C;
    }
    // 0x801D6D80: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801D6D84: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x801D6D88: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
L_801D6D8C:
    // 0x801D6D8C: slti        $at, $a1, -0x200
    ctx->r1 = SIGNED(ctx->r5) < -0X200 ? 1 : 0;
    // 0x801D6D90: beq         $at, $zero, L_801D6D9C
    if (ctx->r1 == 0) {
        // 0x801D6D94: nop
    
            goto L_801D6D9C;
    }
    // 0x801D6D94: nop

    // 0x801D6D98: ori         $v1, $zero, 0xFE00
    ctx->r3 = 0 | 0XFE00;
L_801D6D9C:
    // 0x801D6D9C: lhu         $t9, -0x2E2A($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E2A);
    // 0x801D6DA0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x801D6DA4: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x801D6DA8: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x801D6DAC: sh          $t0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r8;
    // 0x801D6DB0: lwc1        $f16, -0x4E9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4E9C);
    // 0x801D6DB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6DB8: lwc1        $f4, -0x5328($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5328);
    // 0x801D6DBC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801D6DC0: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801D6DC4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D6DC8: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x801D6DCC: nop

    // 0x801D6DD0: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x801D6DD4: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x801D6DD8: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D6DDC: slti        $at, $t3, 0x101
    ctx->r1 = SIGNED(ctx->r11) < 0X101 ? 1 : 0;
    // 0x801D6DE0: bne         $at, $zero, L_801D6DF0
    if (ctx->r1 != 0) {
        // 0x801D6DE4: or          $a1, $t3, $zero
        ctx->r5 = ctx->r11 | 0;
            goto L_801D6DF0;
    }
    // 0x801D6DE4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x801D6DE8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x801D6DEC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_801D6DF0:
    // 0x801D6DF0: slti        $at, $a1, -0x100
    ctx->r1 = SIGNED(ctx->r5) < -0X100 ? 1 : 0;
    // 0x801D6DF4: beq         $at, $zero, L_801D6E00
    if (ctx->r1 == 0) {
        // 0x801D6DF8: nop
    
            goto L_801D6E00;
    }
    // 0x801D6DF8: nop

    // 0x801D6DFC: ori         $v0, $zero, 0xFF00
    ctx->r2 = 0 | 0XFF00;
L_801D6E00:
    // 0x801D6E00: lhu         $t4, -0x2E2C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X2E2C);
    // 0x801D6E04: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x801D6E08: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x801D6E0C: jal         0x801D5338
    // 0x801D6E10: sh          $t5, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r13;
    func_801D5338_591248(rdram, ctx);
        goto after_3;
    // 0x801D6E10: sh          $t5, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r13;
    after_3:
    // 0x801D6E14: lhu         $a0, 0x54($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X54);
    // 0x801D6E18: jal         0x80003D88
    // 0x801D6E1C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_80003D88_4988(rdram, ctx);
        goto after_4;
    // 0x801D6E1C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x801D6E20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6E24: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D6E28: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D6E2C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6E30: lhu         $a0, 0x58($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X58);
    // 0x801D6E34: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x801D6E38: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D6E3C: mul.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D6E40: swc1        $f16, -0x2E30($at)
    MEM_W(-0X2E30, ctx->r1) = ctx->f16.u32l;
    // 0x801D6E44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6E48: lwc1        $f4, -0x2E3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D6E4C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801D6E50: jal         0x80003D88
    // 0x801D6E54: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_80003D88_4988(rdram, ctx);
        goto after_5;
    // 0x801D6E54: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801D6E58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6E5C: lwc1        $f2, -0x2E30($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D6E60: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D6E64: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D6E68: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D6E6C: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x801D6E70: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D6E74: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D6E78: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D6E7C: addiu       $t6, $zero, 0x3F00
    ctx->r14 = ADD32(0, 0X3F00);
    // 0x801D6E80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D6E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6E88: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D6E8C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801D6E90: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x801D6E94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D6E98: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D6E9C: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x801D6EA0: jal         0x801D56D0
    // 0x801D6EA4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_6;
    // 0x801D6EA4: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x801D6EA8: b           L_801D7048
    // 0x801D6EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D7048;
    // 0x801D6EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D6EB0:
    // 0x801D6EB0: lbu         $t8, -0x2E5E($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2E5E);
    // 0x801D6EB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D6EB8: addiu       $a0, $a0, -0x36E4
    ctx->r4 = ADD32(ctx->r4, -0X36E4);
    // 0x801D6EBC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D6EC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D6EC4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D6EC8: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x801D6ECC: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x801D6ED0: lui         $t7, 0x801D
    ctx->r15 = S32(0X801D << 16);
    // 0x801D6ED4: addiu       $t7, $t7, 0x6710
    ctx->r15 = ADD32(ctx->r15, 0X6710);
    // 0x801D6ED8: bne         $t7, $t1, L_801D6F08
    if (ctx->r15 != ctx->r9) {
        // 0x801D6EDC: lui         $v0, 0x8020
        ctx->r2 = S32(0X8020 << 16);
            goto L_801D6F08;
    }
    // 0x801D6EDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x801D6EE0: lwc1        $f18, 0xC8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC8);
    // 0x801D6EE4: lwc1        $f16, 0x14($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X14);
    // 0x801D6EE8: lwc1        $f10, 0xC0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC0);
    // 0x801D6EEC: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801D6EF0: sub.s       $f12, $f18, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801D6EF4: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    // 0x801D6EF8: jal         0x80003A94
    // 0x801D6EFC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_7;
    // 0x801D6EFC: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    after_7:
    // 0x801D6F00: b           L_801D6F20
    // 0x801D6F04: sh          $v0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r2;
        goto L_801D6F20;
    // 0x801D6F04: sh          $v0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r2;
L_801D6F08:
    // 0x801D6F08: lw          $v0, -0x39D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39D4);
    // 0x801D6F0C: lwc1        $f12, 0x8C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x801D6F10: lwc1        $f14, 0x84($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X84);
    // 0x801D6F14: jal         0x80003A94
    // 0x801D6F18: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    func_80003A94_4694(rdram, ctx);
        goto after_8;
    // 0x801D6F18: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    after_8:
    // 0x801D6F1C: sh          $v0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r2;
L_801D6F20:
    // 0x801D6F20: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801D6F24: lbu         $t2, -0x2E5E($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X2E5E);
    // 0x801D6F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6F2C: sb          $t2, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r10;
    // 0x801D6F30: jal         0x801D5214
    // 0x801D6F34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_801D5214_591124(rdram, ctx);
        goto after_9;
    // 0x801D6F34: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_9:
    // 0x801D6F38: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x801D6F3C: sb          $t3, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r11;
    // 0x801D6F40: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801D6F44: jal         0x801D7058
    // 0x801D6F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D7058_592F68(rdram, ctx);
        goto after_10;
    // 0x801D6F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801D6F4C: beq         $v0, $zero, L_801D7044
    if (ctx->r2 == 0) {
        // 0x801D6F50: addiu       $t4, $zero, 0x10
        ctx->r12 = ADD32(0, 0X10);
            goto L_801D7044;
    }
    // 0x801D6F50: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x801D6F54: jal         0x80221FB0
    // 0x801D6F58: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    func_80221FB0_5DD480(rdram, ctx);
        goto after_11;
    // 0x801D6F58: sb          $t4, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r12;
    after_11:
    // 0x801D6F5C: b           L_801D7048
    // 0x801D6F60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D7048;
    // 0x801D6F60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D6F64:
    // 0x801D6F64: addiu       $v1, $v1, -0x2E5E
    ctx->r3 = ADD32(ctx->r3, -0X2E5E);
    // 0x801D6F68: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x801D6F6C: lbu         $t9, 0x70($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X70);
    // 0x801D6F70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801D6F74: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801D6F78: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801D6F7C: addiu       $a0, $a0, -0x36E4
    ctx->r4 = ADD32(ctx->r4, -0X36E4);
    // 0x801D6F80: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801D6F84: addu        $t8, $a0, $t6
    ctx->r24 = ADD32(ctx->r4, ctx->r14);
    // 0x801D6F88: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x801D6F8C: addu        $t7, $t8, $t0
    ctx->r15 = ADD32(ctx->r24, ctx->r8);
    // 0x801D6F90: lwc1        $f6, 0x8($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X8);
    // 0x801D6F94: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801D6F98: addiu       $t3, $t3, 0x6710
    ctx->r11 = ADD32(ctx->r11, 0X6710);
    // 0x801D6F9C: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801D6FA0: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x801D6FA4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D6FA8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801D6FAC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801D6FB0: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x801D6FB4: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x801D6FB8: lw          $t4, 0x20($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X20);
    // 0x801D6FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6FC0: bne         $t3, $t4, L_801D6FE4
    if (ctx->r11 != ctx->r12) {
        // 0x801D6FC4: nop
    
            goto L_801D6FE4;
    }
    // 0x801D6FC4: nop

    // 0x801D6FC8: lhu         $t5, 0x4($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X4);
    // 0x801D6FCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6FD0: andi        $t6, $t5, 0x4
    ctx->r14 = ctx->r13 & 0X4;
    // 0x801D6FD4: bne         $t6, $zero, L_801D6FE4
    if (ctx->r14 != 0) {
        // 0x801D6FD8: nop
    
            goto L_801D6FE4;
    }
    // 0x801D6FD8: nop

    // 0x801D6FDC: lwc1        $f8, -0x2E24($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E24);
    // 0x801D6FE0: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
L_801D6FE4:
    // 0x801D6FE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6FE8: lwc1        $f10, -0x2E34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D6FEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6FF0: lwc1        $f16, -0x2E18($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x801D6FF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D6FF8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801D6FFC: nop

    // 0x801D7000: bc1f        L_801D700C
    if (!c1cs) {
        // 0x801D7004: nop
    
            goto L_801D700C;
    }
    // 0x801D7004: nop

    // 0x801D7008: sh          $t9, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r25;
L_801D700C:
    // 0x801D700C: jal         0x801D5ECC
    // 0x801D7010: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_801D5ECC_591DDC(rdram, ctx);
        goto after_12;
    // 0x801D7010: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_12:
    // 0x801D7014: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7018: lwc1        $f18, -0x2E34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D701C: lwc1        $f4, 0x74($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801D7020: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801D7024: nop

    // 0x801D7028: bc1tl       L_801D703C
    if (c1cs) {
        // 0x801D702C: lbu         $t8, 0xE1($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0XE1);
            goto L_801D703C;
    }
    goto skip_2;
    // 0x801D702C: lbu         $t8, 0xE1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE1);
    skip_2:
    // 0x801D7030: bnel        $v0, $zero, L_801D7048
    if (ctx->r2 != 0) {
        // 0x801D7034: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D7048;
    }
    goto skip_3;
    // 0x801D7034: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801D7038: lbu         $t8, 0xE1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XE1);
L_801D703C:
    // 0x801D703C: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x801D7040: sb          $t0, 0xE1($s0)
    MEM_B(0XE1, ctx->r16) = ctx->r8;
L_801D7044:
    // 0x801D7044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D7048:
    // 0x801D7048: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D704C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801D7050: jr          $ra
    // 0x801D7054: nop

    TRACE_RETURN()
    return;
    // 0x801D7054: nop

;}
RECOMP_FUNC void func_801F7AA4_5B39B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7AA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7AA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7AAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801F7AB0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F7AB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F7AB8: jal         0x800369F0
    // 0x801F7ABC: sb          $t6, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r14;
    func_800369F0_375F0(rdram, ctx);
        goto after_0;
    // 0x801F7ABC: sb          $t6, -0x3A9E($at)
    MEM_B(-0X3A9E, ctx->r1) = ctx->r14;
    after_0:
    // 0x801F7AC0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801F7AC4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801F7AC8: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x801F7ACC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801F7AD0: lhu         $v0, -0x5020($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5020);
    // 0x801F7AD4: slti        $at, $v0, 0x23A
    ctx->r1 = SIGNED(ctx->r2) < 0X23A ? 1 : 0;
    // 0x801F7AD8: bne         $at, $zero, L_801F7AE8
    if (ctx->r1 != 0) {
        // 0x801F7ADC: slti        $at, $v0, 0x23C
        ctx->r1 = SIGNED(ctx->r2) < 0X23C ? 1 : 0;
            goto L_801F7AE8;
    }
    // 0x801F7ADC: slti        $at, $v0, 0x23C
    ctx->r1 = SIGNED(ctx->r2) < 0X23C ? 1 : 0;
    // 0x801F7AE0: bne         $at, $zero, L_801F7AF0
    if (ctx->r1 != 0) {
        // 0x801F7AE4: nop
    
            goto L_801F7AF0;
    }
    // 0x801F7AE4: nop

L_801F7AE8:
    // 0x801F7AE8: jal         0x801F9BA8
    // 0x801F7AEC: nop

    func_801F9BA8_5B5AB8(rdram, ctx);
        goto after_1;
    // 0x801F7AEC: nop

    after_1:
L_801F7AF0:
    // 0x801F7AF0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7AF4: jal         0x8003521C
    // 0x801F7AF8: addiu       $a0, $a0, 0x7B0C
    ctx->r4 = ADD32(ctx->r4, 0X7B0C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F7AF8: addiu       $a0, $a0, 0x7B0C
    ctx->r4 = ADD32(ctx->r4, 0X7B0C);
    after_2:
    // 0x801F7AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F7B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7B04: jr          $ra
    // 0x801F7B08: nop

    TRACE_RETURN()
    return;
    // 0x801F7B08: nop

;}
RECOMP_FUNC void func_801FA4FC_5B640C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA4FC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FA500: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801FA504: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801FA508: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA50C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FA510: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801FA514: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801FA518: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801FA51C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA520: sh          $a0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r4;
    // 0x801FA524: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801FA528: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA52C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FA530: sh          $a1, -0x501C($at)
    MEM_H(-0X501C, ctx->r1) = ctx->r5;
    // 0x801FA534: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801FA538: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA53C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FA540: sh          $a2, -0x501A($at)
    MEM_H(-0X501A, ctx->r1) = ctx->r6;
    // 0x801FA544: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801FA548: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA54C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801FA550: sh          $a3, -0x5018($at)
    MEM_H(-0X5018, ctx->r1) = ctx->r7;
    // 0x801FA554: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x801FA558: lhu         $t7, 0x12($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X12);
    // 0x801FA55C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA560: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801FA564: sh          $t7, -0x5016($at)
    MEM_H(-0X5016, ctx->r1) = ctx->r15;
    // 0x801FA568: lbu         $t9, 0x17($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X17);
    // 0x801FA56C: beql        $t9, $zero, L_801FA590
    if (ctx->r25 == 0) {
        // 0x801FA570: lw          $t3, 0x0($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X0);
            goto L_801FA590;
    }
    goto skip_0;
    // 0x801FA570: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x801FA574: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801FA578: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA57C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x801FA580: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FA584: jr          $ra
    // 0x801FA588: sb          $t0, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801FA588: sb          $t0, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r8;
    // 0x801FA58C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
L_801FA590:
    // 0x801FA590: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA594: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801FA598: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA59C: sb          $t2, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r10;
    // 0x801FA5A0: jr          $ra
    // 0x801FA5A4: nop

    TRACE_RETURN()
    return;
    // 0x801FA5A4: nop

;}
