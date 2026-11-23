#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_08002734_6E6714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08002734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08002738: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x0800273C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002740: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x08002744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08002748: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x0800274C: addiu       $t9, $t9, -0x18E4
    ctx->r25 = ADD32(ctx->r25, -0X18E4);
    // 0x08002750: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x08002754: jalr        $t9
    // 0x08002758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08002758: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800275C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002760: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08002764: lwc1        $f12, 0x78($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X78);
    // 0x08002768: jalr        $t9
    // 0x0800276C: lwc1        $f14, 0x80($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800276C: lwc1        $f14, 0x80($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X80);
    after_1:
    // 0x08002770: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08002774: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32F0) << 16);
    // 0x08002778: ldc1        $f0, 0x32F0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32F0));
    // 0x0800277C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08002780: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x08002784: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x08002788: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x0800278C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002790: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08002794: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08002798: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x0800279C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x080027A0: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x080027A4: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x080027A8: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080027AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080027B0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080027B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080027B8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x080027BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080027C0: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x080027C4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x080027C8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x080027CC: jalr        $t9
    // 0x080027D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080027D0: nop

    after_2:
    // 0x080027D4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080027D8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(29, 0X32F8) << 16);
    // 0x080027DC: ldc1        $f0, 0x32F8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(29, 0X32F8));
    // 0x080027E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080027E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x080027E8: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x080027EC: nop

    // 0x080027F0: bc1fl       L_08002878
    if (!c1cs) {
        // 0x080027F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_08002878;
    }
    goto skip_0;
    // 0x080027F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x080027F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080027FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002800: addiu       $t9, $t9, -0x5DD4
    ctx->r25 = ADD32(ctx->r25, -0X5DD4);
    // 0x08002804: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x08002808: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x0800280C: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x08002810: swc1        $f0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f0.u32l;
    // 0x08002814: swc1        $f0, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f0.u32l;
    // 0x08002818: jalr        $t9
    // 0x0800281C: swc1        $f0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800281C: swc1        $f0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->f0.u32l;
    after_3:
    // 0x08002820: lw          $t7, 0x84($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X84);
    // 0x08002824: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x08002828: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x0800282C: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x08002830: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08002834: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08002838: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x0800283C: lw          $t8, 0x84($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X84);
    // 0x08002840: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(29, 0X2888) << 16);
    // 0x08002844: addiu       $a0, $a0, 0x2888
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(29, 0X2888));
    // 0x08002848: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x0800284C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x08002850: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x08002854: lw          $t0, 0x84($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X84);
    // 0x08002858: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x0800285C: jalr        $t9
    // 0x08002860: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08002860: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x08002864: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08002868: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800286C: jalr        $t9
    // 0x08002870: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08002870: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x08002874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08002878:
    // 0x08002878: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x0800287C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x08002880: jr          $ra
    // 0x08002884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x08002884: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_08001288_6E8598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800128C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001290: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001294: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001298: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800129C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080012A0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080012A4: bne         $v0, $zero, L_080012B8
    if (ctx->r2 != 0) {
        // 0x080012A8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080012B8;
    }
    // 0x080012A8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080012AC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X12C8) << 16);
    // 0x080012B0: jalr        $t9
    // 0x080012B4: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X12C8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012B4: addiu       $a0, $a0, 0x12C8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X12C8));
    after_0:
L_080012B8:
    // 0x080012B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080012BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080012C0: jr          $ra
    // 0x080012C4: nop

    TRACE_RETURN()
    return;
    // 0x080012C4: nop

;}
RECOMP_FUNC void func_080005AC_6E78BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080005AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080005B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080005B4: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x080005B8: lwc1        $f0, 0xD0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x080005BC: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x080005C0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x080005C4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x080005C8: nop

    // 0x080005CC: bc1tl       L_08000614
    if (c1cs) {
        // 0x080005D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000614;
    }
    goto skip_0;
    // 0x080005D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080005D4: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x080005D8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x080005DC: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x080005E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x080005E4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x080005E8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x080005EC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x080005F0: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
    // 0x080005F4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080005F8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080005FC: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x08000600: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X620) << 16);
    // 0x08000604: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000608: jalr        $t9
    // 0x0800060C: addiu       $a0, $a0, 0x620
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X620));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800060C: addiu       $a0, $a0, 0x620
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X620));
    after_0:
    // 0x08000610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000614:
    // 0x08000614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000618: jr          $ra
    // 0x0800061C: nop

    TRACE_RETURN()
    return;
    // 0x0800061C: nop

;}
RECOMP_FUNC void func_08001058_6E8368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001058: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800105C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08001064: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08001068: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800106C: addiu       $t9, $t9, -0x3E6C
    ctx->r25 = ADD32(ctx->r25, -0X3E6C);
    // 0x08001070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001074: jalr        $t9
    // 0x08001078: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001078: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x0800107C: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08001080: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x08001084: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001088: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x0800108C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x08001090: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08001094: swc1        $f10, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f10.u32l;
    // 0x08001098: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x0800109C: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    // 0x080010A0: jalr        $t9
    // 0x080010A4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080010A4: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    after_1:
    // 0x080010A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x080010AC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010B0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080010B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010B8: jalr        $t9
    // 0x080010BC: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080010BC: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_2:
    // 0x080010C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080010C4: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080010CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080010D0: jalr        $t9
    // 0x080010D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080010D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x080010D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080010DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080010E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080010E4: jr          $ra
    // 0x080010E8: nop

    TRACE_RETURN()
    return;
    // 0x080010E8: nop

;}
RECOMP_FUNC void func_080002FC_6E760C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000304: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000308: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0800030C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DD0) << 16);
    // 0x08000310: ldc1        $f0, 0x1DD0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DD0));
    // 0x08000314: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000318: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800031C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08000320: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000324: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000328: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800032C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000330: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x08000334: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000338: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x0800033C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08000340: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000344: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x08000348: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800034C: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08000350: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000354: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08000358: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x0800035C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000360: jalr        $t9
    // 0x08000364: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000364: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000368: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x0800036C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DD8) << 16);
    // 0x08000370: ldc1        $f4, 0x1DD8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DD8));
    // 0x08000374: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x08000378: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X3B8) << 16);
    // 0x0800037C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000380: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000384: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x08000388: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x0800038C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08000390: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000394: addiu       $a0, $a0, 0x3B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X3B8));
    // 0x08000398: bc1tl       L_080003AC
    if (c1cs) {
        // 0x0800039C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080003AC;
    }
    goto skip_0;
    // 0x0800039C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080003A0: jalr        $t9
    // 0x080003A4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003A4: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x080003A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080003AC:
    // 0x080003AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080003B0: jr          $ra
    // 0x080003B4: nop

    TRACE_RETURN()
    return;
    // 0x080003B4: nop

;}
RECOMP_FUNC void func_080002A4_6E75B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080002A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080002A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080002AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080002B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080002B4: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080002B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080002BC: jalr        $t9
    // 0x080002C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080002C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080002C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080002C8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080002CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080002D0: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080002D4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080002D8: bne         $v0, $zero, L_080002EC
    if (ctx->r2 != 0) {
        // 0x080002DC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080002EC;
    }
    // 0x080002DC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080002E0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X2FC) << 16);
    // 0x080002E4: jalr        $t9
    // 0x080002E8: addiu       $a0, $a0, 0x2FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X2FC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080002E8: addiu       $a0, $a0, 0x2FC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X2FC));
    after_1:
L_080002EC:
    // 0x080002EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080002F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080002F4: jr          $ra
    // 0x080002F8: nop

    TRACE_RETURN()
    return;
    // 0x080002F8: nop

;}
RECOMP_FUNC void func_08001330_6E8640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001334: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800133C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001340: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001344: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001348: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x0800134C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001354: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x08001358: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x0800135C: jalr        $t9
    // 0x08001360: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001360: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x08001364: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001368: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800136C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X1388) << 16);
    // 0x08001370: jalr        $t9
    // 0x08001374: addiu       $a0, $a0, 0x1388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1388));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001374: addiu       $a0, $a0, 0x1388
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1388));
    after_1:
    // 0x08001378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800137C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001380: jr          $ra
    // 0x08001384: nop

    TRACE_RETURN()
    return;
    // 0x08001384: nop

;}
RECOMP_FUNC void func_08000120_6E7430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000128: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000130: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000134: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X154) << 16);
    // 0x08000138: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800013C: jalr        $t9
    // 0x08000140: addiu       $a0, $a0, 0x154
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X154));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000140: addiu       $a0, $a0, 0x154
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X154));
    after_0:
    // 0x08000144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800014C: jr          $ra
    // 0x08000150: nop

    TRACE_RETURN()
    return;
    // 0x08000150: nop

;}
RECOMP_FUNC void func_08001388_6E8698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800138C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001394: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001398: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x0800139C: jalr        $t9
    // 0x080013A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080013A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080013A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080013A8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080013AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080013B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080013B4: jalr        $t9
    // 0x080013B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080013B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x080013BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080013C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080013C4: jr          $ra
    // 0x080013C8: nop

    TRACE_RETURN()
    return;
    // 0x080013C8: nop

;}
RECOMP_FUNC void func_08000E64_6E8174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000E64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000E68: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000E70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000E74: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000E78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000E7C: jalr        $t9
    // 0x08000E80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000E80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000E84: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DFC) << 16);
    // 0x08000E88: lwc1        $f0, 0x1DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DFC));
    // 0x08000E8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08000E90: lui         $t6, 0x2AF
    ctx->r14 = S32(0X2AF << 16);
    // 0x08000E94: ori         $t6, $t6, 0x7E1
    ctx->r14 = ctx->r14 | 0X7E1;
    // 0x08000E98: addiu       $t7, $zero, 0x1E1
    ctx->r15 = ADD32(0, 0X1E1);
    // 0x08000E9C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x08000EA0: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x08000EA4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x08000EA8: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000EAC: sh          $t7, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r15;
    // 0x08000EB0: sb          $t8, 0x8E($s0)
    MEM_B(0X8E, ctx->r16) = ctx->r24;
    // 0x08000EB4: sb          $t0, 0x8F($s0)
    MEM_B(0X8F, ctx->r16) = ctx->r8;
    // 0x08000EB8: sb          $t1, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r9;
    // 0x08000EBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EC0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EC8: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x08000ECC: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08000ED0: jalr        $t9
    // 0x08000ED4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000ED4: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_1:
    // 0x08000ED8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EDC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000EE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000EEC: jalr        $t9
    // 0x08000EF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000EF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08000EF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000EF8: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F00: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x08000F04: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000F08: jalr        $t9
    // 0x08000F0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000F0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000F10: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000F14: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000F18: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08000F1C: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08000F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000F28: jalr        $t9
    // 0x08000F2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000F2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x08000F30: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F34: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x08000F38: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x08000F3C: addiu       $a1, $a1, 0x2980
    ctx->r5 = ADD32(ctx->r5, 0X2980);
    // 0x08000F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F44: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x08000F48: jalr        $t9
    // 0x08000F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000F4C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x08000F50: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F54: addiu       $t9, $t9, -0x39AC
    ctx->r25 = ADD32(ctx->r25, -0X39AC);
    // 0x08000F58: jalr        $t9
    // 0x08000F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x08000F60: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F64: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x08000F70: jalr        $t9
    // 0x08000F74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000F74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000F78: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F7C: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000F80: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X1CD0) << 16);
    // 0x08000F84: addiu       $a1, $a1, 0x1CD0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X1CD0));
    // 0x08000F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000F8C: jalr        $t9
    // 0x08000F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000F90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x08000F94: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000F98: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000FA4: jalr        $t9
    // 0x08000FA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000FA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x08000FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000FB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000FB8: jr          $ra
    // 0x08000FBC: nop

    TRACE_RETURN()
    return;
    // 0x08000FBC: nop

;}
RECOMP_FUNC void func_080012C8_6E85D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080012C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080012CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080012D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080012D4: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x080012D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x080012DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080012E0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x080012E4: beq         $t7, $zero, L_08001320
    if (ctx->r15 == 0) {
        // 0x080012E8: lui         $t9, 0x8022
        ctx->r25 = S32(0X8022 << 16);
            goto L_08001320;
    }
    // 0x080012E8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012EC: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x080012F0: jalr        $t9
    // 0x080012F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080012F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x080012F8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080012FC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08001300: jalr        $t9
    // 0x08001304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08001308: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800130C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08001310: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001314: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001318: jalr        $t9
    // 0x0800131C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800131C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_08001320:
    // 0x08001320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001328: jr          $ra
    // 0x0800132C: nop

    TRACE_RETURN()
    return;
    // 0x0800132C: nop

;}
RECOMP_FUNC void func_08000504_6E7814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800050C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000510: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x08000514: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000518: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800051C: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x08000520: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x08000524: jalr        $t9
    // 0x08000528: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000528: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x0800052C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000530: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000534: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800053C: jalr        $t9
    // 0x08000540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x08000544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800054C: jr          $ra
    // 0x08000550: nop

    TRACE_RETURN()
    return;
    // 0x08000550: nop

;}
RECOMP_FUNC void func_08000554_6E7864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800055C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x08000560: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x08000564: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x08000568: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x0800056C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x08000570: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x08000574: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000578: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x0800057C: sb          $t8, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r24;
    // 0x08000580: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000584: swc1        $f4, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->f4.u32l;
    // 0x08000588: swc1        $f6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f6.u32l;
    // 0x0800058C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X5AC) << 16);
    // 0x08000590: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000594: jalr        $t9
    // 0x08000598: addiu       $a0, $a0, 0x5AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X5AC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000598: addiu       $a0, $a0, 0x5AC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X5AC));
    after_0:
    // 0x0800059C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080005A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080005A4: jr          $ra
    // 0x080005A8: nop

    TRACE_RETURN()
    return;
    // 0x080005A8: nop

;}
RECOMP_FUNC void func_080006B8_6E79C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080006B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080006BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080006C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080006C4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080006C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006CC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080006D0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080006D4: bne         $v0, $zero, L_080006FC
    if (ctx->r2 != 0) {
        // 0x080006D8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_080006FC;
    }
    // 0x080006D8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080006DC: jalr        $t9
    // 0x080006E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080006E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080006E8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080006EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080006F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080006F4: jalr        $t9
    // 0x080006F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080006F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_080006FC:
    // 0x080006FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000704: jr          $ra
    // 0x08000708: nop

    TRACE_RETURN()
    return;
    // 0x08000708: nop

;}
RECOMP_FUNC void func_08000A88_6E7D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000A90: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08000A94: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A98: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x08000A9C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x08000AA0: beq         $t7, $zero, L_08000AB8
    if (ctx->r15 == 0) {
        // 0x08000AA4: addiu       $t9, $t9, 0x521C
        ctx->r25 = ADD32(ctx->r25, 0X521C);
            goto L_08000AB8;
    }
    // 0x08000AA4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000AA8: sh          $t8, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r24;
    // 0x08000AAC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0XAC8) << 16);
    // 0x08000AB0: jalr        $t9
    // 0x08000AB4: addiu       $a0, $a0, 0xAC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XAC8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AB4: addiu       $a0, $a0, 0xAC8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XAC8));
    after_0:
L_08000AB8:
    // 0x08000AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000AC0: jr          $ra
    // 0x08000AC4: nop

    TRACE_RETURN()
    return;
    // 0x08000AC4: nop

;}
RECOMP_FUNC void func_080009CC_6E7CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080009CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080009D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080009D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x080009D8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080009DC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x080009E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0XC30) << 16);
    // 0x080009E4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080009E8: bne         $v0, $zero, L_08000A78
    if (ctx->r2 != 0) {
        // 0x080009EC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000A78;
    }
    // 0x080009EC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080009F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080009F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080009F8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080009FC: addiu       $a1, $a1, 0xC30
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0XC30));
    // 0x08000A00: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08000A04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08000A08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08000A0C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08000A10: jalr        $t9
    // 0x08000A14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000A14: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x08000A18: beq         $v0, $zero, L_08000A64
    if (ctx->r2 == 0) {
        // 0x08000A1C: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_08000A64;
    }
    // 0x08000A1C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x08000A20: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A24: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x08000A28: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000A2C: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08000A30: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08000A34: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x08000A38: jalr        $t9
    // 0x08000A3C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000A3C: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x08000A40: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A44: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08000A48: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x08000A4C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08000A50: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x08000A54: jalr        $t9
    // 0x08000A58: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000A58: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_2:
    // 0x08000A5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x08000A60: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08000A64:
    // 0x08000A64: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000A68: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000A6C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0XA88) << 16);
    // 0x08000A70: jalr        $t9
    // 0x08000A74: addiu       $a0, $a0, 0xA88
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XA88));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000A74: addiu       $a0, $a0, 0xA88
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XA88));
    after_3:
L_08000A78:
    // 0x08000A78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000A7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x08000A80: jr          $ra
    // 0x08000A84: nop

    TRACE_RETURN()
    return;
    // 0x08000A84: nop

;}
RECOMP_FUNC void func_080004C0_6E77D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080004C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080004C4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DE4) << 16);
    // 0x080004C8: lwc1        $f0, 0x1DE4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DE4));
    // 0x080004CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080004D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080004D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080004D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080004DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X504) << 16);
    // 0x080004E0: addiu       $a0, $a0, 0x504
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X504));
    // 0x080004E4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x080004E8: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x080004EC: jalr        $t9
    // 0x080004F0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080004F0: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x080004F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004FC: jr          $ra
    // 0x08000500: nop

    TRACE_RETURN()
    return;
    // 0x08000500: nop

;}
RECOMP_FUNC void func_08000B9C_6E7EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000BA0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000BA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000BAC: addiu       $t9, $t9, -0x6BB8
    ctx->r25 = ADD32(ctx->r25, -0X6BB8);
    // 0x08000BB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000BB4: jalr        $t9
    // 0x08000BB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000BB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000BBC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BC0: addiu       $t9, $t9, -0x43FC
    ctx->r25 = ADD32(ctx->r25, -0X43FC);
    // 0x08000BC4: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x08000BC8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x08000BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BD0: jalr        $t9
    // 0x08000BD4: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000BD4: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    after_1:
    // 0x08000BD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BDC: addiu       $t9, $t9, -0x5230
    ctx->r25 = ADD32(ctx->r25, -0X5230);
    // 0x08000BE0: lwc1        $f12, 0x78($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X78);
    // 0x08000BE4: jalr        $t9
    // 0x08000BE8: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000BE8: lwc1        $f14, 0x80($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X80);
    after_2:
    // 0x08000BEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x08000BF0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000BF4: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000BFC: jalr        $t9
    // 0x08000C00: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000C00: sh          $v0, 0x16($t6)
    MEM_H(0X16, ctx->r14) = ctx->r2;
    after_3:
    // 0x08000C04: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C08: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000C14: jalr        $t9
    // 0x08000C18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000C18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x08000C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000C20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000C24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000C28: jr          $ra
    // 0x08000C2C: nop

    TRACE_RETURN()
    return;
    // 0x08000C2C: nop

;}
RECOMP_FUNC void func_0800070C_6E7A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800070C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000710: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000718: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x0800071C: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000720: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000724: jalr        $t9
    // 0x08000728: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000728: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x0800072C: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08000730: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000734: ori         $t6, $t6, 0x6E3
    ctx->r14 = ctx->r14 | 0X6E3;
    // 0x08000738: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800073C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000748: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x0800074C: jalr        $t9
    // 0x08000750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000750: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000754: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000758: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x0800075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000760: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000764: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000768: jalr        $t9
    // 0x0800076C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800076C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000770: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000774: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800077C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08000780: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x08000784: jalr        $t9
    // 0x08000788: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000788: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800078C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000790: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000798: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x0800079C: jalr        $t9
    // 0x080007A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080007A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x080007A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007A8: addiu       $t9, $t9, 0x6840
    ctx->r25 = ADD32(ctx->r25, 0X6840);
    // 0x080007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080007B0: jalr        $t9
    // 0x080007B4: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080007B4: lhu         $a1, 0xD2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XD2);
    after_5:
    // 0x080007B8: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080007BC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080007C0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X7E0) << 16);
    // 0x080007C4: jalr        $t9
    // 0x080007C8: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X7E0));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080007C8: addiu       $a0, $a0, 0x7E0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X7E0));
    after_6:
    // 0x080007CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080007D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080007D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080007D8: jr          $ra
    // 0x080007DC: nop

    TRACE_RETURN()
    return;
    // 0x080007DC: nop

;}
RECOMP_FUNC void func_080007E0_6E7AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080007E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080007E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080007E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080007EC: addiu       $t9, $t9, 0x68A8
    ctx->r25 = ADD32(ctx->r25, 0X68A8);
    // 0x080007F0: jalr        $t9
    // 0x080007F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080007F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080007F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080007FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000800: jr          $ra
    // 0x08000804: nop

    TRACE_RETURN()
    return;
    // 0x08000804: nop

;}
RECOMP_FUNC void func_08000FC0_6E82D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000FC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000FD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000FD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000FD8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000FDC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000FE0: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x08000FE4: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X1004) << 16);
    // 0x08000FE8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000FEC: jalr        $t9
    // 0x08000FF0: addiu       $a0, $a0, 0x1004
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1004));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000FF0: addiu       $a0, $a0, 0x1004
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1004));
    after_0:
    // 0x08000FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000FFC: jr          $ra
    // 0x08001000: nop

    TRACE_RETURN()
    return;
    // 0x08001000: nop

;}
RECOMP_FUNC void func_08001004_6E8314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800100C: lbu         $t6, 0x7C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X7C);
    // 0x08001010: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001014: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x08001018: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x0800101C: beq         $t7, $zero, L_08001048
    if (ctx->r15 == 0) {
        // 0x08001020: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_08001048;
    }
    // 0x08001020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08001024: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001028: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800102C: jalr        $t9
    // 0x08001030: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001030: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08001034: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001038: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800103C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X1058) << 16);
    // 0x08001040: jalr        $t9
    // 0x08001044: addiu       $a0, $a0, 0x1058
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1058));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001044: addiu       $a0, $a0, 0x1058
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1058));
    after_1:
L_08001048:
    // 0x08001048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800104C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001050: jr          $ra
    // 0x08001054: nop

    TRACE_RETURN()
    return;
    // 0x08001054: nop

;}
RECOMP_FUNC void func_080003B8_6E76C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080003B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080003BC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080003C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080003C8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080003CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x080003D0: jalr        $t9
    // 0x080003D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080003D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x080003D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080003DC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080003E0: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080003E4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x080003E8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x080003EC: bne         $v0, $zero, L_08000414
    if (ctx->r2 != 0) {
        // 0x080003F0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000414;
    }
    // 0x080003F0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x080003F4: jalr        $t9
    // 0x080003F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080003F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x080003FC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000400: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000404: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000408: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x0800040C: jalr        $t9
    // 0x08000410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
L_08000414:
    // 0x08000414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800041C: jr          $ra
    // 0x08000420: nop

    TRACE_RETURN()
    return;
    // 0x08000420: nop

;}
RECOMP_FUNC void func_08000620_6E7930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000628: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x0800062C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DE8) << 16);
    // 0x08000630: ldc1        $f0, 0x1DE8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DE8));
    // 0x08000634: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000638: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x0800063C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08000640: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DF0) << 16);
    // 0x08000644: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000648: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x0800064C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000650: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000654: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x08000658: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800065C: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08000660: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08000664: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000668: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x0800066C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000670: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08000674: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08000678: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800067C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000680: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08000684: ldc1        $f4, 0x1DF0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DF0));
    // 0x08000688: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x0800068C: nop

    // 0x08000690: bc1tl       L_080006AC
    if (c1cs) {
        // 0x08000694: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080006AC;
    }
    goto skip_0;
    // 0x08000694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08000698: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x0800069C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X6B8) << 16);
    // 0x080006A0: jalr        $t9
    // 0x080006A4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X6B8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080006A4: addiu       $a0, $a0, 0x6B8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X6B8));
    after_0:
    // 0x080006A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080006AC:
    // 0x080006AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080006B0: jr          $ra
    // 0x080006B4: nop

    TRACE_RETURN()
    return;
    // 0x080006B4: nop

;}
RECOMP_FUNC void func_080014F4_6E8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080014F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080014F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080014FC: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08001500: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001504: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001508: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x0800150C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08001510: bne         $v1, $zero, L_08001540
    if (ctx->r3 != 0) {
        // 0x08001514: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08001540;
    }
    // 0x08001514: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08001518: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x0800151C: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08001520: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08001524: jalr        $t9
    // 0x08001528: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001528: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x0800152C: bne         $v0, $zero, L_08001540
    if (ctx->r2 != 0) {
        // 0x08001530: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08001540;
    }
    // 0x08001530: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08001534: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08001538: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x0800153C: beq         $t8, $zero, L_080015D4
    if (ctx->r24 == 0) {
        // 0x08001540: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_080015D4;
    }
L_08001540:
    // 0x08001540: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001544: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08001548: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x0800154C: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08001550: jalr        $t9
    // 0x08001554: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001554: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08001558: beq         $v0, $zero, L_080015C4
    if (ctx->r2 == 0) {
        // 0x0800155C: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_080015C4;
    }
    // 0x0800155C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x08001560: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001564: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08001568: jalr        $t9
    // 0x0800156C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800156C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x08001570: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08001574: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08001578: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x0800157C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001580: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001584: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x08001588: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x0800158C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08001590: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001594: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001598: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x0800159C: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x080015A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x080015A4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080015A8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080015AC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x080015B0: jalr        $t9
    // 0x080015B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x080015B4: nop

    after_3:
    // 0x080015B8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x080015BC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    // 0x080015C0: sw          $t0, 0x64($t1)
    MEM_W(0X64, ctx->r9) = ctx->r8;
L_080015C4:
    // 0x080015C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080015C8: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x080015CC: jalr        $t9
    // 0x080015D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080015D0: nop

    after_4:
L_080015D4:
    // 0x080015D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080015D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080015DC: jr          $ra
    // 0x080015E0: nop

    TRACE_RETURN()
    return;
    // 0x080015E0: nop

;}
RECOMP_FUNC void func_08000B1C_6E7E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000B1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000B20: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000B28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08000B2C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000B34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x08000B38: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000B3C: jalr        $t9
    // 0x08000B40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000B40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x08000B44: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000B48: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x08000B4C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000B50: lbu         $t6, 0xEB($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XEB);
    // 0x08000B54: lbu         $a1, 0xE8($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XE8);
    // 0x08000B58: lbu         $a2, 0xE9($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XE9);
    // 0x08000B5C: lbu         $a3, 0xEA($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0XEA);
    // 0x08000B60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x08000B64: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x08000B68: lhu         $t0, 0x16($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X16);
    // 0x08000B6C: addiu       $t9, $t9, -0x6CD0
    ctx->r25 = ADD32(ctx->r25, -0X6CD0);
    // 0x08000B70: jalr        $t9
    // 0x08000B74: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B74: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x08000B78: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000B7C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000B80: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0XB9C) << 16);
    // 0x08000B84: jalr        $t9
    // 0x08000B88: addiu       $a0, $a0, 0xB9C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XB9C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000B88: addiu       $a0, $a0, 0xB9C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XB9C));
    after_2:
    // 0x08000B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000B94: jr          $ra
    // 0x08000B98: nop

    TRACE_RETURN()
    return;
    // 0x08000B98: nop

;}
RECOMP_FUNC void func_08000C30_6E7F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000C30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x08000C34: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000C38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000C3C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x08000C40: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x08000C44: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000C48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000C4C: jalr        $t9
    // 0x08000C50: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000C50: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x08000C54: lui         $t7, 0x40
    ctx->r15 = S32(0X40 << 16);
    // 0x08000C58: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000C5C: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x08000C60: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x08000C64: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08000C68: sh          $t6, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r14;
    // 0x08000C6C: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x08000C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000C74: jalr        $t9
    // 0x08000C78: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000C78: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x08000C7C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DF8) << 16);
    // 0x08000C80: lwc1        $f0, 0x1DF8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DF8));
    // 0x08000C84: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x08000C88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08000C8C: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x08000C90: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x08000C94: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x08000C98: lw          $v0, 0x84($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X84);
    // 0x08000C9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08000CA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x08000CA4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08000CA8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000CAC: addiu       $t9, $t9, -0x4678
    ctx->r25 = ADD32(ctx->r25, -0X4678);
    // 0x08000CB0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08000CB4: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x08000CB8: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x08000CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000CC0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x08000CC4: jalr        $t9
    // 0x08000CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000CC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x08000CCC: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000CD0: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x08000CD4: jalr        $t9
    // 0x08000CD8: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000CD8: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_3:
    // 0x08000CDC: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x08000CE0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08000CE4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000CE8: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08000CEC: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x08000CF0: jalr        $t9
    // 0x08000CF4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000CF4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_4:
    // 0x08000CF8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x08000CFC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D00: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000D04: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08000D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D0C: jalr        $t9
    // 0x08000D10: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08000D10: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x08000D14: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D18: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08000D1C: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000D20: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08000D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D28: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08000D2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08000D30: jalr        $t9
    // 0x08000D34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08000D34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x08000D38: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000D3C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08000D40: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x08000D44: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x08000D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000D4C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x08000D50: jalr        $t9
    // 0x08000D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08000D54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x08000D58: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D5C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000D60: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0XD80) << 16);
    // 0x08000D64: jalr        $t9
    // 0x08000D68: addiu       $a0, $a0, 0xD80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XD80));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000D68: addiu       $a0, $a0, 0xD80
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0XD80));
    after_8:
    // 0x08000D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000D70: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08000D74: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08000D78: jr          $ra
    // 0x08000D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x08000D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_08000AC8_6E7DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000AD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000AD4: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000AD8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000ADC: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000AE0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000AE4: bne         $v0, $zero, L_08000B0C
    if (ctx->r2 != 0) {
        // 0x08000AE8: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000B0C;
    }
    // 0x08000AE8: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000AEC: jalr        $t9
    // 0x08000AF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000AF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000AF4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000AF8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000AFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08000B00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000B04: jalr        $t9
    // 0x08000B08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000B08: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_08000B0C:
    // 0x08000B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000B14: jr          $ra
    // 0x08000B18: nop

    TRACE_RETURN()
    return;
    // 0x08000B18: nop

;}
RECOMP_FUNC void func_080011A4_6E84B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080011A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x080011A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x080011B0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080011B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x080011B8: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x080011BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080011C0: jalr        $t9
    // 0x080011C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080011C4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x080011C8: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x080011CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080011D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080011D4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x080011D8: bne         $v1, $zero, L_08001274
    if (ctx->r3 != 0) {
        // 0x080011DC: sh          $t6, 0x8A($s0)
        MEM_H(0X8A, ctx->r16) = ctx->r14;
            goto L_08001274;
    }
    // 0x080011DC: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080011E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x080011E4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080011E8: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x080011EC: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X13CC) << 16);
    // 0x080011F0: addiu       $a1, $a1, 0x13CC
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X13CC));
    // 0x080011F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x080011F8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x080011FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001200: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x08001204: jalr        $t9
    // 0x08001208: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001208: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x0800120C: beq         $v0, $zero, L_08001258
    if (ctx->r2 == 0) {
        // 0x08001210: sw          $v0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r2;
            goto L_08001258;
    }
    // 0x08001210: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x08001214: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001218: addiu       $t9, $t9, -0xBE0
    ctx->r25 = ADD32(ctx->r25, -0XBE0);
    // 0x0800121C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08001220: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001224: addiu       $a0, $zero, 0x259
    ctx->r4 = ADD32(0, 0X259);
    // 0x08001228: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x0800122C: jalr        $t9
    // 0x08001230: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001230: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_2:
    // 0x08001234: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x08001238: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800123C: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x08001240: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001244: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x08001248: jalr        $t9
    // 0x0800124C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800124C: sh          $t7, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r15;
    after_3:
    // 0x08001250: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x08001254: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
L_08001258:
    // 0x08001258: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800125C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x08001260: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001264: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X1288) << 16);
    // 0x08001268: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x0800126C: jalr        $t9
    // 0x08001270: addiu       $a0, $a0, 0x1288
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1288));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001270: addiu       $a0, $a0, 0x1288
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1288));
    after_4:
L_08001274:
    // 0x08001274: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001278: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x0800127C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08001280: jr          $ra
    // 0x08001284: nop

    TRACE_RETURN()
    return;
    // 0x08001284: nop

;}
RECOMP_FUNC void func_080013CC_6E86DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080013CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x080013D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x080013D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x080013D8: lui         $t7, 0xC0
    ctx->r15 = S32(0XC0 << 16);
    // 0x080013DC: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x080013E0: ori         $t7, $t7, 0x6E0
    ctx->r15 = ctx->r15 | 0X6E0;
    // 0x080013E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080013E8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x080013EC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x080013F0: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x080013F4: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080013F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080013FC: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x08001400: jalr        $t9
    // 0x08001404: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001404: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x08001408: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x0800140C: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E00) << 16);
    // 0x08001410: lwc1        $f0, 0x1E00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E00));
    // 0x08001414: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001418: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x0800141C: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    // 0x08001420: swc1        $f0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f0.u32l;
    // 0x08001424: swc1        $f0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f0.u32l;
    // 0x08001428: jalr        $t9
    // 0x0800142C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x0800142C: swc1        $f0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f0.u32l;
    after_1:
    // 0x08001430: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08001434: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001438: add.d       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f2.d + ctx->f2.d;
    // 0x0800143C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x08001440: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001444: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x08001448: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800144C: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001450: swc1        $f8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f8.u32l;
    // 0x08001454: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x08001458: jalr        $t9
    // 0x0800145C: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800145C: lhu         $a0, 0x16($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X16);
    after_2:
    // 0x08001460: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x08001464: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001468: add.d       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f2.d + ctx->f2.d;
    // 0x0800146C: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001474: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001478: jalr        $t9
    // 0x0800147C: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800147C: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x08001480: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001484: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x08001488: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800148C: sh          $t8, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r24;
    // 0x08001490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001494: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x08001498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x0800149C: jalr        $t9
    // 0x080014A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080014A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080014A4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080014A8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x080014AC: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080014B0: sb          $t0, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r8;
    // 0x080014B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080014B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x080014BC: jalr        $t9
    // 0x080014C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080014C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x080014C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080014C8: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x080014CC: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080014D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X14F4) << 16);
    // 0x080014D4: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x080014D8: jalr        $t9
    // 0x080014DC: addiu       $a0, $a0, 0x14F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X14F4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080014DC: addiu       $a0, $a0, 0x14F4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X14F4));
    after_6:
    // 0x080014E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080014E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080014E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080014EC: jr          $ra
    // 0x080014F0: nop

    TRACE_RETURN()
    return;
    // 0x080014F0: nop

;}
RECOMP_FUNC void func_080010EC_6E83FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080010F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x080010F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080010F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080010FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08001100: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001104: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08001108: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x0800110C: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X112C) << 16);
    // 0x08001110: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001114: jalr        $t9
    // 0x08001118: addiu       $a0, $a0, 0x112C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X112C));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001118: addiu       $a0, $a0, 0x112C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X112C));
    after_0:
    // 0x0800111C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08001124: jr          $ra
    // 0x08001128: nop

    TRACE_RETURN()
    return;
    // 0x08001128: nop

;}
RECOMP_FUNC void func_08000154_6E7464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800015C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000160: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x08000164: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DB0) << 16);
    // 0x08000168: ldc1        $f0, 0x1DB0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DB0));
    // 0x0800016C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000170: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08000174: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x08000178: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DB8) << 16);
    // 0x0800017C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000180: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000184: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000188: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X1E8) << 16);
    // 0x0800018C: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x08000190: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000194: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08000198: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x0800019C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x080001A0: div.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x080001A4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080001A8: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x080001AC: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x080001B0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080001B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080001B8: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x080001BC: ldc1        $f4, 0x1DB8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DB8));
    // 0x080001C0: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x080001C4: nop

    // 0x080001C8: bc1tl       L_080001DC
    if (c1cs) {
        // 0x080001CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080001DC;
    }
    goto skip_0;
    // 0x080001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x080001D0: jalr        $t9
    // 0x080001D4: addiu       $a0, $a0, 0x1E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1E8));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080001D4: addiu       $a0, $a0, 0x1E8
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X1E8));
    after_0:
    // 0x080001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080001DC:
    // 0x080001DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080001E0: jr          $ra
    // 0x080001E4: nop

    TRACE_RETURN()
    return;
    // 0x080001E4: nop

;}
RECOMP_FUNC void func_080017A0_6E8AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080017A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x080017A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080017A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x080017AC: lbu         $t6, 0xED($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XED);
    // 0x080017B0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x080017B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x080017B8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080017BC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x080017C0: sb          $t7, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r15;
    // 0x080017C4: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x080017C8: beq         $at, $zero, L_080017E0
    if (ctx->r1 == 0) {
        // 0x080017CC: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_080017E0;
    }
    // 0x080017CC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x080017D0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x080017D4: sb          $t0, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r8;
    // 0x080017D8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x080017DC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_080017E0:
    // 0x080017E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080017E4: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x080017E8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x080017EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x080017F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x080017F4: jalr        $t9
    // 0x080017F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080017F8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x080017FC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001800: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
    // 0x08001804: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x08001808: beq         $t2, $zero, L_08001860
    if (ctx->r10 == 0) {
        // 0x0800180C: nop
    
            goto L_08001860;
    }
    // 0x0800180C: nop

    // 0x08001810: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001814: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E08) << 16);
    // 0x08001818: ldc1        $f0, 0x1E08($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E08));
    // 0x0800181C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001820: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001824: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001828: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E10) << 16);
    // 0x0800182C: ldc1        $f2, 0x1E10($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E10));
    // 0x08001830: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001834: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001838: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0800183C: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08001840: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08001844: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001848: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800184C: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x08001850: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x08001854: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001858: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x0800185C: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
L_08001860:
    // 0x08001860: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E18) << 16);
    // 0x08001864: andi        $t3, $v1, 0x20
    ctx->r11 = ctx->r3 & 0X20;
    // 0x08001868: beq         $t3, $zero, L_080018C0
    if (ctx->r11 == 0) {
        // 0x0800186C: ldc1        $f2, 0x1E18($at)
        CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E18));
            goto L_080018C0;
    }
    // 0x0800186C: ldc1        $f2, 0x1E18($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E18));
    // 0x08001870: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x08001874: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E20) << 16);
    // 0x08001878: ldc1        $f0, 0x1E20($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E20));
    // 0x0800187C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001880: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x08001884: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x08001888: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E28) << 16);
    // 0x0800188C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08001890: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001894: swc1        $f10, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f10.u32l;
    // 0x08001898: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x0800189C: ldc1        $f4, 0x1E28($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E28));
    // 0x080018A0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080018A4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x080018A8: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x080018AC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x080018B0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x080018B4: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x080018B8: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x080018BC: lw          $v1, 0xE8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XE8);
L_080018C0:
    // 0x080018C0: andi        $t4, $v1, 0x40
    ctx->r12 = ctx->r3 & 0X40;
    // 0x080018C4: beql        $t4, $zero, L_08001914
    if (ctx->r12 == 0) {
        // 0x080018C8: lwc1        $f8, 0x20($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
            goto L_08001914;
    }
    goto skip_0;
    // 0x080018C8: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x080018CC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x080018D0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x080018D4: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E30) << 16);
    // 0x080018D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x080018DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x080018E0: add.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f8.d + ctx->f2.d;
    // 0x080018E4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080018E8: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
    // 0x080018EC: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x080018F0: ldc1        $f6, 0x1E30($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E30));
    // 0x080018F4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x080018F8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x080018FC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x08001900: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08001904: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08001908: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x0800190C: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x08001910: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
L_08001914:
    // 0x08001914: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x08001918: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x0800191C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x08001920: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08001924: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001928: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x0800192C: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08001930: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x08001934: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x08001938: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x0800193C: lwc1        $f14, 0xC($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0XC);
    // 0x08001940: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x08001944: jalr        $t9
    // 0x08001948: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001948: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x0800194C: bne         $v0, $zero, L_08001970
    if (ctx->r2 != 0) {
        // 0x08001950: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_08001970;
    }
    // 0x08001950: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x08001954: lw          $t5, 0x68($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X68);
    // 0x08001958: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x0800195C: bne         $t6, $zero, L_08001970
    if (ctx->r14 != 0) {
        // 0x08001960: nop
    
            goto L_08001970;
    }
    // 0x08001960: nop

    // 0x08001964: lbu         $t7, 0xED($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XED);
    // 0x08001968: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x0800196C: bne         $t7, $at, L_08001980
    if (ctx->r15 != ctx->r1) {
        // 0x08001970: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_08001980;
    }
L_08001970:
    // 0x08001970: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001974: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08001978: jalr        $t9
    // 0x0800197C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800197C: nop

    after_2:
L_08001980:
    // 0x08001980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001984: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x08001988: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x0800198C: jr          $ra
    // 0x08001990: nop

    TRACE_RETURN()
    return;
    // 0x08001990: nop

;}
RECOMP_FUNC void func_0800112C_6E843C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x0800112C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08001130: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001138: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x0800113C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08001140: lui         $a2, 0x3EAA
    ctx->r6 = S32(0X3EAA << 16);
    // 0x08001144: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001148: ori         $a2, $a2, 0xAAAB
    ctx->r6 = ctx->r6 | 0XAAAB;
    // 0x0800114C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08001150: jalr        $t9
    // 0x08001154: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001154: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x08001158: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800115C: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08001160: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x08001164: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x08001168: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x0800116C: jalr        $t9
    // 0x08001170: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001170: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x08001174: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x08001178: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800117C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x08001180: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001184: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X11A4) << 16);
    // 0x08001188: addiu       $a0, $a0, 0x11A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X11A4));
    // 0x0800118C: jalr        $t9
    // 0x08001190: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001190: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_2:
    // 0x08001194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08001198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800119C: jr          $ra
    // 0x080011A0: nop

    TRACE_RETURN()
    return;
    // 0x080011A0: nop

;}
RECOMP_FUNC void func_08000D80_6E8090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000D80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000D88: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x08000D8C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000D90: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000D94: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x08000D98: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x08000D9C: bne         $v1, $zero, L_08000DCC
    if (ctx->r3 != 0) {
        // 0x08000DA0: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_08000DCC;
    }
    // 0x08000DA0: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x08000DA4: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08000DA8: lwc1        $f14, 0xC($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0XC);
    // 0x08000DAC: lw          $a2, 0x10($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X10);
    // 0x08000DB0: jalr        $t9
    // 0x08000DB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000DB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x08000DB8: bne         $v0, $zero, L_08000DCC
    if (ctx->r2 != 0) {
        // 0x08000DBC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_08000DCC;
    }
    // 0x08000DBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x08000DC0: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x08000DC4: andi        $t8, $t7, 0x200
    ctx->r24 = ctx->r15 & 0X200;
    // 0x08000DC8: beq         $t8, $zero, L_08000E54
    if (ctx->r24 == 0) {
        // 0x08000DCC: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_08000E54;
    }
L_08000DCC:
    // 0x08000DCC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000DD0: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08000DD4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x08000DD8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x08000DDC: jalr        $t9
    // 0x08000DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x08000DE4: beq         $v0, $zero, L_08000E44
    if (ctx->r2 == 0) {
        // 0x08000DE8: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_08000E44;
    }
    // 0x08000DE8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x08000DEC: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000DF0: addiu       $t9, $t9, -0x6D4C
    ctx->r25 = ADD32(ctx->r25, -0X6D4C);
    // 0x08000DF4: jalr        $t9
    // 0x08000DF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000DF8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x08000DFC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x08000E00: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x08000E04: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08000E08: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08000E0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08000E10: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08000E14: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08000E18: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08000E1C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000E20: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000E24: addiu       $t9, $t9, -0x61F8
    ctx->r25 = ADD32(ctx->r25, -0X61F8);
    // 0x08000E28: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08000E2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x08000E30: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x08000E34: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08000E38: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x08000E3C: jalr        $t9
    // 0x08000E40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000E40: nop

    after_3:
L_08000E44:
    // 0x08000E44: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08000E48: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x08000E4C: jalr        $t9
    // 0x08000E50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08000E50: nop

    after_4:
L_08000E54:
    // 0x08000E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x08000E58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000E5C: jr          $ra
    // 0x08000E60: nop

    TRACE_RETURN()
    return;
    // 0x08000E60: nop

;}
RECOMP_FUNC void func_08001994_6E8CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001994: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x08001998: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x0800199C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x080019A0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x080019A4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x080019A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x080019AC: addiu       $t0, $s0, 0xD0
    ctx->r8 = ADD32(ctx->r16, 0XD0);
    // 0x080019B0: beq         $v0, $zero, L_080019D4
    if (ctx->r2 == 0) {
        // 0x080019B4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_080019D4;
    }
    // 0x080019B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x080019B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080019BC: beq         $v0, $at, L_080019DC
    if (ctx->r2 == ctx->r1) {
        // 0x080019C0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_080019DC;
    }
    // 0x080019C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080019C4: beq         $v0, $at, L_080019E4
    if (ctx->r2 == ctx->r1) {
        // 0x080019C8: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_080019E4;
    }
    // 0x080019C8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x080019CC: b           L_08001BE4
    // 0x080019D0: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
        goto L_08001BE4;
    // 0x080019D0: addiu       $t0, $a0, 0xD0
    ctx->r8 = ADD32(ctx->r4, 0XD0);
L_080019D4:
    // 0x080019D4: b           L_08001BE4
    // 0x080019D8: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
        goto L_08001BE4;
    // 0x080019D8: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
L_080019DC:
    // 0x080019DC: b           L_08001BE4
    // 0x080019E0: addiu       $t0, $s0, 0xD0
    ctx->r8 = ADD32(ctx->r16, 0XD0);
        goto L_08001BE4;
    // 0x080019E0: addiu       $t0, $s0, 0xD0
    ctx->r8 = ADD32(ctx->r16, 0XD0);
L_080019E4:
    // 0x080019E4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x080019E8: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x080019EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x080019F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x080019F4: lhu         $t8, -0x5232($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X5232);
    // 0x080019F8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x080019FC: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x08001A00: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x08001A04: mfhi        $t9
    ctx->r25 = hi;
    // 0x08001A08: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    // 0x08001A0C: bne         $t9, $zero, L_08001A24
    if (ctx->r25 != 0) {
        // 0x08001A10: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_08001A24;
    }
    // 0x08001A10: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x08001A14: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A18: addiu       $t9, $t9, -0xB98
    ctx->r25 = ADD32(ctx->r25, -0XB98);
    // 0x08001A1C: jalr        $t9
    // 0x08001A20: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001A20: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_0:
L_08001A24:
    // 0x08001A24: addiu       $t0, $s0, 0xD0
    ctx->r8 = ADD32(ctx->r16, 0XD0);
    // 0x08001A28: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x08001A2C: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x08001A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001A34: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x08001A38: mfhi        $t2
    ctx->r10 = hi;
    // 0x08001A3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x08001A40: bne         $t2, $at, L_08001ABC
    if (ctx->r10 != ctx->r1) {
        // 0x08001A44: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
            goto L_08001ABC;
    }
    // 0x08001A44: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
    // 0x08001A48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001A50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08001A54: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001A58: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001A5C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001A60: addiu       $a1, $a1, 0x15E4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X15E4));
    // 0x08001A64: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001A68: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001A6C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001A70: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08001A74: jalr        $t9
    // 0x08001A78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001A78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x08001A7C: beq         $v0, $zero, L_08001ABC
    if (ctx->r2 == 0) {
        // 0x08001A80: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_08001ABC;
    }
    // 0x08001A80: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001A84: addiu       $t3, $zero, 0x27
    ctx->r11 = ADD32(0, 0X27);
    // 0x08001A88: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001A8C: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08001A90: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001A94: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001A98: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08001A9C: jalr        $t9
    // 0x08001AA0: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08001AA0: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_2:
    // 0x08001AA4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08001AA8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001AAC: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x08001AB0: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001AB4: sw          $s0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r16;
    // 0x08001AB8: sw          $t4, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r12;
L_08001ABC:
    // 0x08001ABC: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x08001AC0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x08001AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001AC8: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x08001ACC: mfhi        $t6
    ctx->r14 = hi;
    // 0x08001AD0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x08001AD4: bne         $t6, $at, L_08001B50
    if (ctx->r14 != ctx->r1) {
        // 0x08001AD8: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
            goto L_08001B50;
    }
    // 0x08001AD8: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
    // 0x08001ADC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08001AE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001AE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08001AE8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001AEC: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001AF0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x08001AF4: addiu       $a1, $a1, 0x15E4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X15E4));
    // 0x08001AF8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001AFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001B00: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001B04: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x08001B08: jalr        $t9
    // 0x08001B0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08001B0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x08001B10: beq         $v0, $zero, L_08001B50
    if (ctx->r2 == 0) {
        // 0x08001B14: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_08001B50;
    }
    // 0x08001B14: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001B18: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x08001B1C: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001B20: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08001B24: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001B28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001B2C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08001B30: jalr        $t9
    // 0x08001B34: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x08001B34: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_4:
    // 0x08001B38: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08001B3C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001B40: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x08001B44: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001B48: sw          $s0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r16;
    // 0x08001B4C: sw          $t8, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r24;
L_08001B50:
    // 0x08001B50: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x08001B54: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x08001B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001B5C: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x08001B60: mfhi        $t2
    ctx->r10 = hi;
    // 0x08001B64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x08001B68: bne         $t2, $at, L_08001BE4
    if (ctx->r10 != ctx->r1) {
        // 0x08001B6C: lui         $a1, 0x800
        ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
            goto L_08001BE4;
    }
    // 0x08001B6C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X15E4) << 16);
    // 0x08001B70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x08001B74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001B78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001B7C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001B80: addiu       $t9, $t9, -0x2218
    ctx->r25 = ADD32(ctx->r25, -0X2218);
    // 0x08001B84: addiu       $a1, $a1, 0x15E4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X15E4));
    // 0x08001B88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x08001B8C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x08001B90: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x08001B94: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001B98: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x08001B9C: jalr        $t9
    // 0x08001BA0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x08001BA0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x08001BA4: beq         $v0, $zero, L_08001BE4
    if (ctx->r2 == 0) {
        // 0x08001BA8: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_08001BE4;
    }
    // 0x08001BA8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001BAC: addiu       $t3, $zero, 0x27
    ctx->r11 = ADD32(0, 0X27);
    // 0x08001BB0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08001BB4: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08001BB8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08001BBC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001BC0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x08001BC4: jalr        $t9
    // 0x08001BC8: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x08001BC8: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_6:
    // 0x08001BCC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x08001BD0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001BD4: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x08001BD8: sw          $v0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r2;
    // 0x08001BDC: sw          $s0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r16;
    // 0x08001BE0: sw          $t4, 0xE8($v1)
    MEM_W(0XE8, ctx->r3) = ctx->r12;
L_08001BE4:
    // 0x08001BE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x08001BE8: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x08001BEC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x08001BF0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x08001BF4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x08001BF8: lwc1        $f6, 0x8($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X8);
    // 0x08001BFC: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x08001C00: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x08001C04: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x08001C08: lwc1        $f18, 0x10($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X10);
    // 0x08001C0C: lwc1        $f10, 0xC($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0XC);
    // 0x08001C10: addiu       $t9, $t9, 0x17E0
    ctx->r25 = ADD32(ctx->r25, 0X17E0);
    // 0x08001C14: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x08001C18: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x08001C1C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x08001C20: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x08001C24: mul.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x08001C28: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08001C2C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x08001C30: jalr        $t9
    // 0x08001C34: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001C34: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    after_7:
    // 0x08001C38: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x08001C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x08001C40: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x08001C44: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x08001C48: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x08001C4C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x08001C50: bc1fl       L_08001C64
    if (!c1cs) {
        // 0x08001C54: sb          $t7, 0x0($t0)
        MEM_B(0X0, ctx->r8) = ctx->r15;
            goto L_08001C64;
    }
    goto skip_0;
    // 0x08001C54: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    skip_0:
    // 0x08001C58: b           L_08001C64
    // 0x08001C5C: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
        goto L_08001C64;
    // 0x08001C5C: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
    // 0x08001C60: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
L_08001C64:
    // 0x08001C64: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x08001C68: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x08001C6C: sh          $t1, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r9;
    // 0x08001C70: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x08001C74: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x08001C78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x08001C7C: jr          $ra
    // 0x08001C80: nop

    TRACE_RETURN()
    return;
    // 0x08001C80: nop

;}
RECOMP_FUNC void func_08000424_6E7734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08000428: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DE0) << 16);
    // 0x0800042C: lwc1        $f0, 0x1DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DE0));
    // 0x08000430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000434: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000438: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800043C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000440: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X468) << 16);
    // 0x08000444: addiu       $a0, $a0, 0x468
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X468));
    // 0x08000448: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x0800044C: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x08000450: jalr        $t9
    // 0x08000454: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000454: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x08000458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800045C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08000460: jr          $ra
    // 0x08000464: nop

    TRACE_RETURN()
    return;
    // 0x08000464: nop

;}
RECOMP_FUNC void func_080015E4_6E88F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080015E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x080015E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x080015EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x080015F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x080015F4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x080015F8: sb          $t9, 0x6D($a0)
    MEM_B(0X6D, ctx->r4) = ctx->r25;
    // 0x080015FC: lui         $t6, 0x440
    ctx->r14 = S32(0X440 << 16);
    // 0x08001600: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001604: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x08001608: ori         $t6, $t6, 0x6E2
    ctx->r14 = ctx->r14 | 0X6E2;
    // 0x0800160C: addiu       $t7, $zero, 0x7E
    ctx->r15 = ADD32(0, 0X7E);
    // 0x08001610: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x08001614: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x08001618: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x0800161C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08001620: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001624: sh          $t7, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r15;
    // 0x08001628: sb          $t8, 0xED($a0)
    MEM_B(0XED, ctx->r4) = ctx->r24;
    // 0x0800162C: sb          $t0, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r8;
    // 0x08001630: jalr        $t9
    // 0x08001634: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08001634: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x08001638: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800163C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08001640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001644: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x08001648: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800164C: jalr        $t9
    // 0x08001650: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08001650: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08001654: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001658: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800165C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001660: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    // 0x08001664: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x08001668: jalr        $t9
    // 0x0800166C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800166C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x08001670: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001674: addiu       $t9, $t9, -0x5CF0
    ctx->r25 = ADD32(ctx->r25, -0X5CF0);
    // 0x08001678: jalr        $t9
    // 0x0800167C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x0800167C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x08001680: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08001684: addiu       $t9, $t9, -0x5D94
    ctx->r25 = ADD32(ctx->r25, -0X5D94);
    // 0x08001688: lbu         $a1, 0xED($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XED);
    // 0x0800168C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x08001690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08001694: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x08001698: jalr        $t9
    // 0x0800169C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x0800169C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080016A0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1E04) << 16);
    // 0x080016A4: lwc1        $f0, 0x1E04($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(30, 0X1E04));
    // 0x080016A8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x080016AC: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x080016B0: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x080016B4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x080016B8: sw          $t1, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r9;
    // 0x080016BC: sb          $t2, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r10;
    // 0x080016C0: addiu       $v1, $v1, -0x6D4C
    ctx->r3 = ADD32(ctx->r3, -0X6D4C);
    // 0x080016C4: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x080016C8: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x080016CC: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x080016D0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x080016D4: jalr        $v1
    // 0x080016D8: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_5;
    // 0x080016D8: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_5:
    // 0x080016DC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x080016E0: andi        $s1, $v0, 0xFFFF
    ctx->r17 = ctx->r2 & 0XFFFF;
    // 0x080016E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x080016E8: jalr        $v1
    // 0x080016EC: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_6;
    // 0x080016EC: nop

    after_6:
    // 0x080016F0: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080016F4: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080016F8: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x080016FC: jalr        $t9
    // 0x08001700: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x08001700: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_7:
    // 0x08001704: lh          $t3, 0x34($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X34);
    // 0x08001708: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x0800170C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08001710: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x08001714: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08001718: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x0800171C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x08001720: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x08001724: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x08001728: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x0800172C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08001730: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x08001734: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08001738: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x0800173C: jalr        $t9
    // 0x08001740: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08001740: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x08001744: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x08001748: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x0800174C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x08001750: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x08001754: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001758: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x0800175C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001760: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x08001764: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08001768: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X17A0) << 16);
    // 0x0800176C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08001770: sh          $t4, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r12;
    // 0x08001774: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x08001778: addiu       $a0, $a0, 0x17A0
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X17A0));
    // 0x0800177C: swc1        $f18, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f18.u32l;
    // 0x08001780: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x08001784: jalr        $t9
    // 0x08001788: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08001788: swc1        $f16, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f16.u32l;
    after_9:
    // 0x0800178C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08001790: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x08001794: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x08001798: jr          $ra
    // 0x0800179C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x0800179C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_08000808_6E7B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x0800080C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000810: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x08000814: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x08000818: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x0800081C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000820: jalr        $t9
    // 0x08000824: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000824: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000828: lw          $t7, 0xD0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD0);
    // 0x0800082C: lui         $t6, 0x220
    ctx->r14 = S32(0X220 << 16);
    // 0x08000830: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000834: ori         $t6, $t6, 0x87E1
    ctx->r14 = ctx->r14 | 0X87E1;
    // 0x08000838: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x0800083C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000844: jalr        $t9
    // 0x08000848: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000848: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    after_1:
    // 0x0800084C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000850: addiu       $t8, $zero, 0x221
    ctx->r24 = ADD32(0, 0X221);
    // 0x08000854: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000858: sh          $t8, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r24;
    // 0x0800085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000860: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000864: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x08000868: jalr        $t9
    // 0x0800086C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800086C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000870: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000874: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800087C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x08000880: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    // 0x08000884: jalr        $t9
    // 0x08000888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000888: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x0800088C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000890: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x08000894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000898: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x0800089C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x080008A0: jalr        $t9
    // 0x080008A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080008A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080008A8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008AC: addiu       $t9, $t9, -0x7270
    ctx->r25 = ADD32(ctx->r25, -0X7270);
    // 0x080008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008B4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x080008B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x080008BC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x080008C0: jalr        $t9
    // 0x080008C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080008C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x080008C8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008CC: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008D4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x080008D8: jalr        $t9
    // 0x080008DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080008DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x080008E0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080008E4: addiu       $t9, $t9, -0x589C
    ctx->r25 = ADD32(ctx->r25, -0X589C);
    // 0x080008E8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x080008EC: addiu       $a1, $a1, 0x1B50
    ctx->r5 = ADD32(ctx->r5, 0X1B50);
    // 0x080008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080008F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x080008F8: jalr        $t9
    // 0x080008FC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080008FC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x08000900: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000904: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x08000908: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X1CB0) << 16);
    // 0x0800090C: addiu       $a1, $a1, 0x1CB0
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X1CB0));
    // 0x08000910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000914: jalr        $t9
    // 0x08000918: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000918: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x0800091C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000920: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x08000924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800092C: jalr        $t9
    // 0x08000930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x08000930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x08000934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x08000938: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x0800093C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x08000940: jr          $ra
    // 0x08000944: nop

    TRACE_RETURN()
    return;
    // 0x08000944: nop

;}
RECOMP_FUNC void func_08000948_6E7C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000948: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x0800094C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x08000950: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08000954: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000958: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800095C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000960: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000964: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000968: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x0800096C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x08000970: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x08000974: jalr        $t9
    // 0x08000978: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000978: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x0800097C: bne         $v0, $zero, L_080009B8
    if (ctx->r2 != 0) {
        // 0x08000980: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_080009B8;
    }
    // 0x08000980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000984: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000988: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x0800098C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x08000990: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000994: jalr        $t9
    // 0x08000998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000998: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x0800099C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080009A0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x080009A4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080009A8: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X9CC) << 16);
    // 0x080009AC: sh          $t6, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r14;
    // 0x080009B0: jalr        $t9
    // 0x080009B4: addiu       $a0, $a0, 0x9CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X9CC));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080009B4: addiu       $a0, $a0, 0x9CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X9CC));
    after_2:
L_080009B8:
    // 0x080009B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x080009BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x080009C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x080009C4: jr          $ra
    // 0x080009C8: nop

    TRACE_RETURN()
    return;
    // 0x080009C8: nop

;}
RECOMP_FUNC void func_08000468_6E7778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800046C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08000474: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x08000478: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x0800047C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08000480: jalr        $t9
    // 0x08000484: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000484: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000488: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800048C: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x08000490: jalr        $t9
    // 0x08000494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x08000498: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800049C: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080004A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080004A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x080004A8: jalr        $t9
    // 0x080004AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080004AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x080004B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080004B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080004B8: jr          $ra
    // 0x080004BC: nop

    TRACE_RETURN()
    return;
    // 0x080004BC: nop

;}
RECOMP_FUNC void func_080001E8_6E74F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080001E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080001EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080001F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080001F4: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x080001F8: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DC0) << 16);
    // 0x080001FC: ldc1        $f0, 0x1DC0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DC0));
    // 0x08000200: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x08000204: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x08000208: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x0800020C: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000210: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x08000214: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x08000218: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x0800021C: addiu       $t9, $t9, -0x6828
    ctx->r25 = ADD32(ctx->r25, -0X6828);
    // 0x08000220: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x08000224: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x08000228: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x0800022C: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x08000230: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x08000234: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x08000238: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x0800023C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08000240: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x08000244: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x08000248: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x0800024C: jalr        $t9
    // 0x08000250: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08000250: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x08000254: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08000258: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(30, 0X1DC8) << 16);
    // 0x0800025C: ldc1        $f4, 0x1DC8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, (int16_t)RELOC_LO16(30, 0X1DC8));
    // 0x08000260: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x08000264: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(30, 0X2A4) << 16);
    // 0x08000268: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800026C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08000270: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x08000274: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x08000278: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x0800027C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08000280: addiu       $a0, $a0, 0x2A4
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(30, 0X2A4));
    // 0x08000284: bc1tl       L_08000298
    if (c1cs) {
        // 0x08000288: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08000298;
    }
    goto skip_0;
    // 0x08000288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x0800028C: jalr        $t9
    // 0x08000290: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000290: sh          $t6, 0x8A($t7)
    MEM_H(0X8A, ctx->r15) = ctx->r14;
    after_1:
    // 0x08000294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08000298:
    // 0x08000298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x0800029C: jr          $ra
    // 0x080002A0: nop

    TRACE_RETURN()
    return;
    // 0x080002A0: nop

;}
RECOMP_FUNC void func_08000000_6E7310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08000000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x08000004: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000008: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x0800000C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08000010: addiu       $t9, $t9, -0x59BC
    ctx->r25 = ADD32(ctx->r25, -0X59BC);
    // 0x08000014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08000018: jalr        $t9
    // 0x0800001C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800001C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x08000020: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x08000024: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08000028: ori         $t6, $t6, 0x6E3
    ctx->r14 = ctx->r14 | 0X6E3;
    // 0x0800002C: addiu       $t9, $t9, 0x664C
    ctx->r25 = ADD32(ctx->r25, 0X664C);
    // 0x08000030: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x08000034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x0800003C: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    // 0x08000040: jalr        $t9
    // 0x08000044: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08000044: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x08000048: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800004C: addiu       $t9, $t9, 0x4ABC
    ctx->r25 = ADD32(ctx->r25, 0X4ABC);
    // 0x08000050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000054: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000058: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x0800005C: jalr        $t9
    // 0x08000060: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08000060: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x08000064: lui         $t8, 0x800
    ctx->r24 = S32(RELOC_HI16(30, 0X554) << 16);
    // 0x08000068: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x0800006C: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x08000070: addiu       $t8, $t8, 0x554
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(30, 0X554));
    // 0x08000074: addiu       $t9, $t9, -0x7284
    ctx->r25 = ADD32(ctx->r25, -0X7284);
    // 0x08000078: sb          $t7, 0x8D($s0)
    MEM_B(0X8D, ctx->r16) = ctx->r15;
    // 0x0800007C: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    // 0x08000080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000084: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x08000088: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x0800008C: jalr        $t9
    // 0x08000090: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08000090: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x08000094: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08000098: addiu       $t9, $t9, -0x7258
    ctx->r25 = ADD32(ctx->r25, -0X7258);
    // 0x0800009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000A0: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x080000A4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x080000A8: jalr        $t9
    // 0x080000AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x080000AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x080000B0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000B4: addiu       $t9, $t9, -0x6D84
    ctx->r25 = ADD32(ctx->r25, -0X6D84);
    // 0x080000B8: jalr        $t9
    // 0x080000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x080000C0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000C4: addiu       $t9, $t9, -0x6190
    ctx->r25 = ADD32(ctx->r25, -0X6190);
    // 0x080000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x080000D0: jalr        $t9
    // 0x080000D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x080000D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x080000D8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000DC: addiu       $t9, $t9, -0x4F9C
    ctx->r25 = ADD32(ctx->r25, -0X4F9C);
    // 0x080000E0: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(30, 0X1C90) << 16);
    // 0x080000E4: addiu       $a1, $a1, 0x1C90
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(30, 0X1C90));
    // 0x080000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080000EC: jalr        $t9
    // 0x080000F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x080000F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x080000F4: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080000F8: addiu       $t9, $t9, -0x4F64
    ctx->r25 = ADD32(ctx->r25, -0X4F64);
    // 0x080000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08000100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x08000104: jalr        $t9
    // 0x08000108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x08000108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x0800010C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x08000110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x08000114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x08000118: jr          $ra
    // 0x0800011C: nop

    TRACE_RETURN()
    return;
    // 0x0800011C: nop

;}
RECOMP_FUNC void func_080037B4_6EC904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080037B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x080037B8: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x080037BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x080037C0: addiu       $t9, $t9, -0x7184
    ctx->r25 = ADD32(ctx->r25, -0X7184);
    // 0x080037C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x080037C8: jalr        $t9
    // 0x080037CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080037CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x080037D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x080037D4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x080037D8: lwc1        $f6, 0xDC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XDC);
    // 0x080037DC: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080037E0: lwc1        $f16, 0xE0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XE0);
    // 0x080037E4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x080037E8: swc1        $f8, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f8.u32l;
    // 0x080037EC: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x080037F0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x080037F4: swc1        $f18, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f18.u32l;
    // 0x080037F8: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x080037FC: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x08003800: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08003804: swc1        $f6, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->f6.u32l;
    // 0x08003808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800380C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003810: jr          $ra
    // 0x08003814: nop

    TRACE_RETURN()
    return;
    // 0x08003814: nop

;}
RECOMP_FUNC void func_08001728_6EA878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x0800172C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08001730: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x08001734: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08001738: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x0800173C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08001740: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x08001744: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x08001748: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x0800174C: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x08001750: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x08001754: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x08001758: jalr        $t9
    // 0x0800175C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x0800175C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x08001760: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08001764: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x08001768: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x0800176C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x08001770: sb          $zero, 0x6C($a2)
    MEM_B(0X6C, ctx->r6) = 0;
    // 0x08001774: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x08001778: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x0800177C: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x08001780: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x08001784: lw          $t8, 0xD0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XD0);
    // 0x08001788: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x0800178C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x08001790: lw          $t0, 0x18($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X18);
    // 0x08001794: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08001798: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800179C: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x080017A0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X17CC) << 16);
    // 0x080017A4: addiu       $a0, $a0, 0x17CC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X17CC));
    // 0x080017A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x080017AC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x080017B0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x080017B4: jalr        $t9
    // 0x080017B8: swc1        $f16, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080017B8: swc1        $f16, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->f16.u32l;
    after_1:
    // 0x080017BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x080017C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080017C4: jr          $ra
    // 0x080017C8: nop

    TRACE_RETURN()
    return;
    // 0x080017C8: nop

;}
RECOMP_FUNC void func_08003FF0_6ED140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x08003FF8: lui         $at, 0xC325
    ctx->r1 = S32(0XC325 << 16);
    // 0x08003FFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x08004000: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x08004004: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x08004008: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x0800400C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x08004010: nop

    // 0x08004014: bc1fl       L_08004050
    if (!c1cs) {
        // 0x08004018: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004050;
    }
    goto skip_0;
    // 0x08004018: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_0:
    // 0x0800401C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08004020: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x08004024: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08004028: addiu       $t9, $t9, 0x4ED4
    ctx->r25 = ADD32(ctx->r25, 0X4ED4);
    // 0x0800402C: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x08004030: nop

    // 0x08004034: bc1fl       L_08004050
    if (!c1cs) {
        // 0x08004038: lw          $t6, 0xD0($a3)
        ctx->r14 = MEM_W(ctx->r7, 0XD0);
            goto L_08004050;
    }
    goto skip_1;
    // 0x08004038: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
    skip_1:
    // 0x0800403C: jalr        $t9
    // 0x08004040: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x08004040: nop

    after_0:
    // 0x08004044: b           L_080040E0
    // 0x08004048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_080040E0;
    // 0x08004048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x0800404C: lw          $t6, 0xD0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XD0);
L_08004050:
    // 0x08004050: lwc1        $f18, 0x10($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X10);
    // 0x08004054: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x08004058: lwc1        $f10, 0xE4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x0800405C: addiu       $t9, $t9, -0x48C4
    ctx->r25 = ADD32(ctx->r25, -0X48C4);
    // 0x08004060: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x08004064: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x08004068: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x0800406C: swc1        $f16, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f16.u32l;
    // 0x08004070: lw          $t7, 0xD0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XD0);
    // 0x08004074: lwc1        $f4, 0xE8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0XE8);
    // 0x08004078: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x0800407C: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x08004080: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x08004084: jalr        $t9
    // 0x08004088: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x08004088: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x0800408C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x08004090: bne         $v0, $zero, L_080040A8
    if (ctx->r2 != 0) {
        // 0x08004094: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_080040A8;
    }
    // 0x08004094: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x08004098: lw          $t8, 0xD0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XD0);
    // 0x0800409C: lbu         $t0, 0xED($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0XED);
    // 0x080040A0: beql        $t0, $zero, L_080040E0
    if (ctx->r8 == 0) {
        // 0x080040A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_080040E0;
    }
    goto skip_2;
    // 0x080040A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_080040A8:
    // 0x080040A8: lw          $t2, 0xD0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XD0);
    // 0x080040AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x080040B0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x080040B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080040B8: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x080040BC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080040C0: sb          $t1, 0xED($t2)
    MEM_B(0XED, ctx->r10) = ctx->r9;
    // 0x080040C4: sh          $t3, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r11;
    // 0x080040C8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080040CC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X40EC) << 16);
    // 0x080040D0: addiu       $a0, $a0, 0x40EC
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X40EC));
    // 0x080040D4: jalr        $t9
    // 0x080040D8: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x080040D8: swc1        $f8, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f8.u32l;
    after_2:
    // 0x080040DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_080040E0:
    // 0x080040E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x080040E4: jr          $ra
    // 0x080040E8: nop

    TRACE_RETURN()
    return;
    // 0x080040E8: nop

;}
RECOMP_FUNC void func_080010FC_6EA24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x080010FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001100: jr          $ra
    // 0x08001104: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001104: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003168_6EC2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003168: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x0800316C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x08003170: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x08003174: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x08003178: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x0800317C: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003180: ori         $t6, $t6, 0x20
    ctx->r14 = ctx->r14 | 0X20;
    // 0x08003184: addiu       $t7, $zero, 0x4000
    ctx->r15 = ADD32(0, 0X4000);
    // 0x08003188: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x0800318C: addiu       $t9, $t9, 0x5244
    ctx->r25 = ADD32(ctx->r25, 0X5244);
    // 0x08003190: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X37B4) << 16);
    // 0x08003194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x08003198: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x0800319C: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
    // 0x080031A0: sb          $t8, 0x6C($a0)
    MEM_B(0X6C, ctx->r4) = ctx->r24;
    // 0x080031A4: jalr        $t9
    // 0x080031A8: addiu       $a1, $a1, 0x37B4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X37B4));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080031A8: addiu       $a1, $a1, 0x37B4
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X37B4));
    after_0:
    // 0x080031AC: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x080031B0: addiu       $t9, $t9, 0x6E1C
    ctx->r25 = ADD32(ctx->r25, 0X6E1C);
    // 0x080031B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080031B8: jalr        $t9
    // 0x080031BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080031BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x080031C0: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57A0) << 16);
    // 0x080031C4: lwc1        $f0, 0x57A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(31, 0X57A0));
    // 0x080031C8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x080031CC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x080031D0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x080031D4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x080031D8: lbu         $t0, 0xEC($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XEC);
    // 0x080031DC: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x080031E0: sltiu       $at, $t1, 0x9
    ctx->r1 = ctx->r9 < 0X9 ? 1 : 0;
    // 0x080031E4: beq         $at, $zero, L_080035B4
    if (ctx->r1 == 0) {
        // 0x080031E8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_080035B4;
    }
    // 0x080031E8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x080031EC: lui         $at, 0x800
    ctx->r1 = S32(RELOC_HI16(31, 0X57A4) << 16);
    // 0x080031F0: addu        $at, $at, $t1
    gpr jr_addend_080031F8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x080031F4: lw          $t1, 0x57A4($at)
    ctx->r9 = ADD32(ctx->r1, (int16_t)RELOC_LO16(31, 0X57A4));
    // 0x080031F8: jr          $t1
    // 0x080031FC: nop

    switch (jr_addend_080031F8 >> 2) {
        case 0: goto L_08003200; break;
        case 1: goto L_080035B4; break;
        case 2: goto L_0800326C; break;
        case 3: goto L_08003200; break;
        case 4: goto L_080035B4; break;
        case 5: goto L_08003388; break;
        case 6: goto L_08003200; break;
        case 7: goto L_080035B4; break;
        case 8: goto L_080034A4; break;
        default: switch_error(__func__, 0x080031F8, 0x080057A4);
    }
    // 0x080031FC: nop

L_08003200:
    // 0x08003200: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x08003204: addiu       $t9, $t9, 0x71A8
    ctx->r25 = ADD32(ctx->r25, 0X71A8);
    // 0x08003208: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3818) << 16);
    // 0x0800320C: addiu       $a1, $a1, 0x3818
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3818));
    // 0x08003210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003214: jalr        $t9
    // 0x08003218: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x08003218: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x0800321C: beq         $v0, $zero, L_080035B4
    if (ctx->r2 == 0) {
        // 0x08003220: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_080035B4;
    }
    // 0x08003220: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x08003224: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003228: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x0800322C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003230: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x08003234: jalr        $t9
    // 0x08003238: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x08003238: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_3:
    // 0x0800323C: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x08003240: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003244: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003248: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x0800324C: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x08003250: sw          $s0, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->r16;
    // 0x08003254: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x08003258: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x0800325C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003260: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x08003264: b           L_080035B4
    // 0x08003268: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
        goto L_080035B4;
    // 0x08003268: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
L_0800326C:
    // 0x0800326C: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3A00) << 16);
    // 0x08003270: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08003274: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08003278: addiu       $a1, $a1, 0x3A00
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3A00));
    // 0x0800327C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x08003280: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x08003284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003288: jalr        $v0
    // 0x0800328C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x0800328C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x08003290: beq         $v0, $zero, L_080032FC
    if (ctx->r2 == 0) {
        // 0x08003294: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_080032FC;
    }
    // 0x08003294: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x08003298: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800329C: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x080032A0: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080032A4: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x080032A8: jalr        $t9
    // 0x080032AC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x080032AC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x080032B0: lw          $t0, 0xD4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD4);
    // 0x080032B4: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x080032B8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x080032BC: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x080032C0: lw          $t1, 0xD4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD4);
    // 0x080032C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x080032C8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080032CC: sw          $s0, 0xD0($t1)
    MEM_W(0XD0, ctx->r9) = ctx->r16;
    // 0x080032D0: lw          $t2, 0xD4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD4);
    // 0x080032D4: lw          $v1, 0x18($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X18);
    // 0x080032D8: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080032DC: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080032E0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x080032E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x080032E8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x080032EC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x080032F0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x080032F4: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x080032F8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_080032FC:
    // 0x080032FC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003304: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08003308: jalr        $t9
    // 0x0800330C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x0800330C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_6:
    // 0x08003310: beq         $v0, $zero, L_080035B4
    if (ctx->r2 == 0) {
        // 0x08003314: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_080035B4;
    }
    // 0x08003314: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x08003318: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x0800331C: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x08003320: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003324: sh          $t3, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r11;
    // 0x08003328: jalr        $t9
    // 0x0800332C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x0800332C: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_7:
    // 0x08003330: lw          $t5, 0xD8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD8);
    // 0x08003334: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x08003338: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x0800333C: sw          $v0, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->r2;
    // 0x08003340: lw          $t6, 0xD8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD8);
    // 0x08003344: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003348: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x0800334C: sw          $s0, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r16;
    // 0x08003350: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x08003354: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x08003358: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x0800335C: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08003360: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003364: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x08003368: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800336C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003370: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x08003374: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08003378: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800337C: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x08003380: b           L_080035B4
    // 0x08003384: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
        goto L_080035B4;
    // 0x08003384: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_08003388:
    // 0x08003388: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X3F04) << 16);
    // 0x0800338C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x08003390: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x08003394: addiu       $a1, $a1, 0x3F04
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X3F04));
    // 0x08003398: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x0800339C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080033A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080033A4: jalr        $v0
    // 0x080033A8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x080033A8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_8:
    // 0x080033AC: beq         $v0, $zero, L_08003418
    if (ctx->r2 == 0) {
        // 0x080033B0: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_08003418;
    }
    // 0x080033B0: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x080033B4: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080033B8: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x080033BC: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080033C0: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x080033C4: jalr        $t9
    // 0x080033C8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x080033C8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_9:
    // 0x080033CC: lw          $t2, 0xD4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD4);
    // 0x080033D0: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x080033D4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x080033D8: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    // 0x080033DC: lw          $t3, 0xD4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XD4);
    // 0x080033E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x080033E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x080033E8: sw          $s0, 0xD0($t3)
    MEM_W(0XD0, ctx->r11) = ctx->r16;
    // 0x080033EC: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x080033F0: lw          $v1, 0x18($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X18);
    // 0x080033F4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x080033F8: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x080033FC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x08003400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x08003404: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x08003408: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x0800340C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x08003410: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x08003414: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_08003418:
    // 0x08003418: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x0800341C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x08003420: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08003424: jalr        $t9
    // 0x08003428: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x08003428: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_10:
    // 0x0800342C: beq         $v0, $zero, L_080035B4
    if (ctx->r2 == 0) {
        // 0x08003430: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_080035B4;
    }
    // 0x08003430: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x08003434: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003438: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x0800343C: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x08003440: sh          $t5, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r13;
    // 0x08003444: jalr        $t9
    // 0x08003448: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x08003448: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_11:
    // 0x0800344C: lw          $t7, 0xD8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XD8);
    // 0x08003450: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x08003454: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x08003458: sw          $v0, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r2;
    // 0x0800345C: lw          $t8, 0xD8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XD8);
    // 0x08003460: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x08003464: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003468: sw          $s0, 0xD0($t8)
    MEM_W(0XD0, ctx->r24) = ctx->r16;
    // 0x0800346C: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x08003470: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x08003474: lw          $v1, 0x18($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X18);
    // 0x08003478: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x0800347C: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003480: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
    // 0x08003484: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x08003488: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x0800348C: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x08003490: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x08003494: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x08003498: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x0800349C: b           L_080035B4
    // 0x080034A0: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
        goto L_080035B4;
    // 0x080034A0: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_080034A4:
    // 0x080034A4: lui         $a1, 0x800
    ctx->r5 = S32(RELOC_HI16(31, 0X4408) << 16);
    // 0x080034A8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x080034AC: addiu       $v0, $v0, 0x71A8
    ctx->r2 = ADD32(ctx->r2, 0X71A8);
    // 0x080034B0: addiu       $a1, $a1, 0x4408
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(31, 0X4408));
    // 0x080034B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x080034B8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x080034BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x080034C0: jalr        $v0
    // 0x080034C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_12;
    // 0x080034C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_12:
    // 0x080034C8: beq         $v0, $zero, L_08003534
    if (ctx->r2 == 0) {
        // 0x080034CC: sw          $v0, 0xD4($s0)
        MEM_W(0XD4, ctx->r16) = ctx->r2;
            goto L_08003534;
    }
    // 0x080034CC: sw          $v0, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r2;
    // 0x080034D0: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x080034D4: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x080034D8: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x080034DC: sh          $t2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r10;
    // 0x080034E0: jalr        $t9
    // 0x080034E4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x080034E4: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_13:
    // 0x080034E8: lw          $t4, 0xD4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XD4);
    // 0x080034EC: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x080034F0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x080034F4: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x080034F8: lw          $t5, 0xD4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XD4);
    // 0x080034FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x08003500: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003504: sw          $s0, 0xD0($t5)
    MEM_W(0XD0, ctx->r13) = ctx->r16;
    // 0x08003508: lw          $t6, 0xD4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XD4);
    // 0x0800350C: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x08003510: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08003514: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003518: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x0800351C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x08003520: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x08003524: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x08003528: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x0800352C: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x08003530: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_08003534:
    // 0x08003534: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x08003538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x0800353C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x08003540: jalr        $t9
    // 0x08003544: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x08003544: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_14:
    // 0x08003548: beq         $v0, $zero, L_080035B4
    if (ctx->r2 == 0) {
        // 0x0800354C: sw          $v0, 0xD8($s0)
        MEM_W(0XD8, ctx->r16) = ctx->r2;
            goto L_080035B4;
    }
    // 0x0800354C: sw          $v0, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r2;
    // 0x08003550: lui         $t9, 0x8001
    ctx->r25 = S32(0X8001 << 16);
    // 0x08003554: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x08003558: addiu       $t9, $t9, 0x41C4
    ctx->r25 = ADD32(ctx->r25, 0X41C4);
    // 0x0800355C: sh          $t7, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r15;
    // 0x08003560: jalr        $t9
    // 0x08003564: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x08003564: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_15:
    // 0x08003568: lw          $t0, 0xD8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XD8);
    // 0x0800356C: lui         $at, 0x4016
    ctx->r1 = S32(0X4016 << 16);
    // 0x08003570: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x08003574: sw          $v0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r2;
    // 0x08003578: lw          $t1, 0xD8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XD8);
    // 0x0800357C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x08003580: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003584: sw          $s0, 0xD0($t1)
    MEM_W(0XD0, ctx->r9) = ctx->r16;
    // 0x08003588: lw          $t2, 0xD8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XD8);
    // 0x0800358C: lw          $v1, 0x18($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X18);
    // 0x08003590: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x08003594: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x08003598: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x0800359C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x080035A0: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x080035A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x080035A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x080035AC: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x080035B0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
L_080035B4:
    // 0x080035B4: lbu         $v0, 0xED($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XED);
    // 0x080035B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x080035BC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3694) << 16);
    // 0x080035C0: beq         $v0, $at, L_080035F0
    if (ctx->r2 == ctx->r1) {
        // 0x080035C4: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_080035F0;
    }
    // 0x080035C4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080035C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x080035CC: bne         $v0, $at, L_08003604
    if (ctx->r2 != ctx->r1) {
        // 0x080035D0: lui         $a0, 0x800
        ctx->r4 = S32(RELOC_HI16(31, 0X3628) << 16);
            goto L_08003604;
    }
    // 0x080035D0: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3628) << 16);
    // 0x080035D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x080035D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080035DC: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3750) << 16);
    // 0x080035E0: jalr        $t9
    // 0x080035E4: addiu       $a0, $a0, 0x3750
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3750));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x080035E4: addiu       $a0, $a0, 0x3750
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3750));
    after_16:
    // 0x080035E8: b           L_08003618
    // 0x080035EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003618;
    // 0x080035EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_080035F0:
    // 0x080035F0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x080035F4: jalr        $t9
    // 0x080035F8: addiu       $a0, $a0, 0x3694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3694));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x080035F8: addiu       $a0, $a0, 0x3694
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3694));
    after_17:
    // 0x080035FC: b           L_08003618
    // 0x08003600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_08003618;
    // 0x08003600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003604:
    // 0x08003604: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x08003608: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x0800360C: jalr        $t9
    // 0x08003610: addiu       $a0, $a0, 0x3628
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3628));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x08003610: addiu       $a0, $a0, 0x3628
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3628));
    after_18:
    // 0x08003614: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_08003618:
    // 0x08003618: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x0800361C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x08003620: jr          $ra
    // 0x08003624: nop

    TRACE_RETURN()
    return;
    // 0x08003624: nop

;}
RECOMP_FUNC void func_08001EC0_6EB010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08001EC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x08001EC4: jr          $ra
    // 0x08001EC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x08001EC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_08003694_6EC7E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x08003694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x08003698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x0800369C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x080036A0: lhu         $t6, 0xEE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XEE);
    // 0x080036A4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080036A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x080036AC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x080036B0: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x080036B4: sh          $t8, 0xEE($a0)
    MEM_H(0XEE, ctx->r4) = ctx->r24;
    // 0x080036B8: addiu       $t9, $t9, 0x3E10
    ctx->r25 = ADD32(ctx->r25, 0X3E10);
    // 0x080036BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x080036C0: jalr        $t9
    // 0x080036C4: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x080036C4: andi        $a0, $t8, 0xFFFF
    ctx->r4 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x080036C8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x080036CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x080036D0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x080036D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x080036D8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x080036DC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x080036E0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x080036E4: lui         $t9, 0x8000
    ctx->r25 = S32(0X8000 << 16);
    // 0x080036E8: addiu       $t9, $t9, 0x3EA0
    ctx->r25 = ADD32(ctx->r25, 0X3EA0);
    // 0x080036EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x080036F0: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x080036F4: jalr        $t9
    // 0x080036F8: lhu         $a0, 0xEE($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XEE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x080036F8: lhu         $a0, 0xEE($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0XEE);
    after_1:
    // 0x080036FC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x08003700: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x08003704: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x08003708: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x0800370C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x08003710: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x08003714: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x08003718: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x0800371C: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x08003720: lui         $a0, 0x800
    ctx->r4 = S32(RELOC_HI16(31, 0X3750) << 16);
    // 0x08003724: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x08003728: swc1        $f6, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f6.u32l;
    // 0x0800372C: lhu         $t2, 0xEE($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0XEE);
    // 0x08003730: bnel        $t2, $zero, L_08003744
    if (ctx->r10 != 0) {
        // 0x08003734: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_08003744;
    }
    goto skip_0;
    // 0x08003734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x08003738: jalr        $t9
    // 0x0800373C: addiu       $a0, $a0, 0x3750
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3750));
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x0800373C: addiu       $a0, $a0, 0x3750
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(31, 0X3750));
    after_2:
    // 0x08003740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_08003744:
    // 0x08003744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x08003748: jr          $ra
    // 0x0800374C: nop

    TRACE_RETURN()
    return;
    // 0x0800374C: nop

;}
