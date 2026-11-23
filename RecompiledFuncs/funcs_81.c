#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DC704_64B554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC70C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DC710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DC714: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DC718: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DC71C: bgezl       $t6, L_801DC744
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DC720: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DC744;
    }
    goto skip_0;
    // 0x801DC720: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DC724: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DC728: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DC72C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC730: jal         0x800352EC
    // 0x801DC734: addiu       $a0, $a0, -0x3874
    ctx->r4 = ADD32(ctx->r4, -0X3874);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DC734: addiu       $a0, $a0, -0x3874
    ctx->r4 = ADD32(ctx->r4, -0X3874);
    after_0:
    // 0x801DC738: b           L_801DC780
    // 0x801DC73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DC780;
    // 0x801DC73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC740: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DC744:
    // 0x801DC744: jal         0x801CD504
    // 0x801DC748: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DC748: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DC74C: beq         $v0, $zero, L_801DC764
    if (ctx->r2 == 0) {
        // 0x801DC750: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DC764;
    }
    // 0x801DC750: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DC754: jal         0x801DBEB0
    // 0x801DC758: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DC758: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DC75C: b           L_801DC780
    // 0x801DC760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DC780;
    // 0x801DC760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DC764:
    // 0x801DC764: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DC768: jal         0x801CD634
    // 0x801DC76C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DC76C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DC770: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DC774: jal         0x801CD780
    // 0x801DC778: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DC778: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DC77C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DC780:
    // 0x801DC780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC784: jr          $ra
    // 0x801DC788: nop

    TRACE_RETURN()
    return;
    // 0x801DC788: nop

;}
RECOMP_FUNC void func_801DA450_6492A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA450: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801DA454: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801DA458: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x801DA45C: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x801DA460: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x801DA464: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x801DA468: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801DA46C: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801DA470: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801DA474: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801DA478: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801DA47C: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801DA480: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DA484: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DA488: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DA48C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA490: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA494: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DA498: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DA49C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801DA4A0: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x801DA4A4: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801DA4A8: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    // 0x801DA4AC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DA4B0: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801DA4B4: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DA4B8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DA4BC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DA4C0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DA4C4: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801DA4C8: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DA4CC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DA4D0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DA4D4: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DA4D8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DA4DC: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DA4E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DA4E4: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801DA4E8: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801DA4EC: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DA4F0: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801DA4F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DA4F8: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x801DA4FC: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DA500: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DA504: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x801DA508: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DA50C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DA510: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801DA514: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x801DA518: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DA51C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DA520: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DA524: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x801DA528: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801DA52C: jal         0x80033898
    // 0x801DA530: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DA530: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801DA534: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA538: lwc1        $f18, 0x5C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DA53C: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA540: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA544: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DA548: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA54C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801DA550: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x801DA554: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DA558: lwc1        $f8, 0x60($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DA55C: addiu       $t2, $sp, 0xCC
    ctx->r10 = ADD32(ctx->r29, 0XCC);
    // 0x801DA560: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA564: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801DA568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DA56C: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA570: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA574: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x801DA578: lwc1        $f18, 0x64($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DA57C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DA580: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DA584: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DA588: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801DA58C: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801DA590: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DA594: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x801DA598: jal         0x80033898
    // 0x801DA59C: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DA59C: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DA5A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA5A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DA5A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DA5AC: addiu       $t3, $sp, 0x90
    ctx->r11 = ADD32(ctx->r29, 0X90);
    // 0x801DA5B0: addiu       $t4, $sp, 0x94
    ctx->r12 = ADD32(ctx->r29, 0X94);
    // 0x801DA5B4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DA5B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DA5BC: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA5C0: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA5C4: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA5C8: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x801DA5CC: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x801DA5D0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x801DA5D4: jal         0x80033898
    // 0x801DA5D8: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801DA5D8: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801DA5DC: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801DA5E0: jal         0x800040A8
    // 0x801DA5E4: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801DA5E4: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    after_3:
    // 0x801DA5E8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DA5EC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DA5F0: addiu       $s0, $v0, 0xC0
    ctx->r16 = ADD32(ctx->r2, 0XC0);
    // 0x801DA5F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DA5F8: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x801DA5FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DA600: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x801DA604: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x801DA608: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_801DA60C:
    // 0x801DA60C: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA610: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA614: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA618: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801DA61C: addiu       $t6, $zero, 0x63
    ctx->r14 = ADD32(0, 0X63);
    // 0x801DA620: addiu       $t7, $zero, 0x43
    ctx->r15 = ADD32(0, 0X43);
    // 0x801DA624: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801DA628: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801DA62C: addiu       $t0, $zero, 0x280
    ctx->r8 = ADD32(0, 0X280);
    // 0x801DA630: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801DA634: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801DA638: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801DA63C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801DA640: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801DA644: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801DA648: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801DA64C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DA650: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DA654: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DA658: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DA65C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DA660: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801DA664: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DA668: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801DA66C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801DA670: jal         0x801CDA88
    // 0x801DA674: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_4;
    // 0x801DA674: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x801DA678: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA67C: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DA680: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA684: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DA688: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DA68C: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DA690: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA694: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DA698: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DA69C: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x801DA6A0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DA6A4: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DA6A8: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x801DA6AC: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x801DA6B0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DA6B4: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DA6B8: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DA6BC: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x801DA6C0: bne         $t4, $zero, L_801DA60C
    if (ctx->r12 != 0) {
        // 0x801DA6C4: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_801DA60C;
    }
    // 0x801DA6C4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x801DA6C8: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801DA6CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA6D0: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801DA6D4: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DA6D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DA6DC: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801DA6E0: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x801DA6E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA6E8: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801DA6EC: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801DA6F0: addiu       $t5, $sp, 0xEC
    ctx->r13 = ADD32(ctx->r29, 0XEC);
    // 0x801DA6F4: addiu       $t6, $sp, 0xF0
    ctx->r14 = ADD32(ctx->r29, 0XF0);
    // 0x801DA6F8: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801DA6FC: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801DA700: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801DA704: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DA708: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801DA70C: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA710: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA714: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA718: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DA71C: jal         0x80033898
    // 0x801DA720: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801DA720: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    after_5:
    // 0x801DA724: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA728: lwc1        $f4, 0x5C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DA72C: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA730: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA734: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DA738: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA73C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DA740: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DA744: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DA748: lwc1        $f6, 0x60($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DA74C: addiu       $t7, $sp, 0xE0
    ctx->r15 = ADD32(ctx->r29, 0XE0);
    // 0x801DA750: addiu       $t8, $sp, 0xE4
    ctx->r24 = ADD32(ctx->r29, 0XE4);
    // 0x801DA754: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DA758: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA75C: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA760: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA764: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DA768: lwc1        $f4, 0x64($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DA76C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801DA770: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DA774: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DA778: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801DA77C: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DA780: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DA784: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DA788: jal         0x80033898
    // 0x801DA78C: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801DA78C: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x801DA790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA794: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x801DA798: addiu       $t0, $sp, 0xD8
    ctx->r8 = ADD32(ctx->r29, 0XD8);
    // 0x801DA79C: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x801DA7A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DA7A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DA7A8: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA7AC: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA7B0: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA7B4: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DA7B8: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DA7BC: jal         0x80033898
    // 0x801DA7C0: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801DA7C0: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x801DA7C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA7C8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DA7CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DA7D0: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x801DA7D4: addiu       $t2, $sp, 0xCC
    ctx->r10 = ADD32(ctx->r29, 0XCC);
    // 0x801DA7D8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DA7DC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DA7E0: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DA7E4: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DA7E8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DA7EC: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801DA7F0: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801DA7F4: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DA7F8: jal         0x80033898
    // 0x801DA7FC: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801DA7FC: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x801DA800: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x801DA804: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DA808: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DA80C: jal         0x801DFBE0
    // 0x801DA810: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_9;
    // 0x801DA810: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x801DA814: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DA818: ldc1        $f30, -0xDA0($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XDA0);
    // 0x801DA81C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DA820: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DA824: ldc1        $f28, -0xD98($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XD98);
    // 0x801DA828: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
L_801DA82C:
    // 0x801DA82C: jal         0x8000DD58
    // 0x801DA830: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801DA830: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x801DA834: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DA838: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DA83C: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DA840: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DA844: mul.d       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f28.d);
    // 0x801DA848: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x801DA84C: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DA850: add.d       $f6, $f16, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = ctx->f16.d + ctx->f30.d;
    // 0x801DA854: jal         0x8000DD58
    // 0x801DA858: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801DA858: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_11:
    // 0x801DA85C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x801DA860: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DA864: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801DA868: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801DA86C: mul.d       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801DA870: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801DA874: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801DA878: add.d       $f18, $f6, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f18.d = ctx->f6.d + ctx->f30.d;
    // 0x801DA87C: jal         0x8000DD58
    // 0x801DA880: cvt.s.d     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f24.fl = CVT_S_D(ctx->f18.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_12;
    // 0x801DA880: cvt.s.d     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f24.fl = CVT_S_D(ctx->f18.d);
    after_12:
    // 0x801DA884: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801DA888: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DA88C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DA890: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA894: mul.d       $f16, $f8, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f28.d);
    // 0x801DA898: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x801DA89C: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801DA8A0: add.d       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = ctx->f18.d + ctx->f30.d;
    // 0x801DA8A4: jal         0x8000DD58
    // 0x801DA8A8: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801DA8A8: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    after_13:
    // 0x801DA8AC: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801DA8B0: and         $t4, $t3, $s0
    ctx->r12 = ctx->r11 & ctx->r16;
    // 0x801DA8B4: addiu       $t5, $t4, -0xA
    ctx->r13 = ADD32(ctx->r12, -0XA);
    // 0x801DA8B8: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801DA8BC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DA8C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DA8C4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DA8C8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DA8CC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801DA8D0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801DA8D4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DA8D8: ldc1        $f8, -0xD90($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XD90);
    // 0x801DA8DC: add.s       $f20, $f4, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DA8E0: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA8E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA8E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DA8EC: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x801DA8F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DA8F4: div.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f18.d);
    // 0x801DA8F8: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DA8FC: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DA900: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DA904: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DA908: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DA90C: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x801DA910: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DA914: mul.s       $f18, $f6, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801DA918: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801DA91C: mul.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801DA920: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DA924: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DA928: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DA92C: mul.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x801DA930: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DA934: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DA938: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA93C: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801DA940: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DA944: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DA948: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801DA94C: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DA950: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DA954: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DA958: mul.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x801DA95C: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DA960: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DA964: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA968: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801DA96C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801DA970: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DA974: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801DA978: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801DA97C: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DA980: lwc1        $f18, 0xCC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DA984: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801DA988: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DA98C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DA990: jal         0x801DFC60
    // 0x801DA994: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_14;
    // 0x801DA994: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x801DA998: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DA99C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DA9A0: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DA9A4: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DA9A8: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DA9AC: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DA9B0: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DA9B4: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DA9B8: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801DA9BC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DA9C0: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DA9C4: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x801DA9C8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x801DA9CC: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801DA9D0: bne         $t6, $zero, L_801DA82C
    if (ctx->r14 != 0) {
        // 0x801DA9D4: swc1        $f18, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
            goto L_801DA82C;
    }
    // 0x801DA9D4: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DA9D8: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DA9DC: lhu         $t7, 0xE2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DA9E0: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x801DA9E4: bnel        $t8, $zero, L_801DAA3C
    if (ctx->r24 != 0) {
        // 0x801DA9E8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801DAA3C;
    }
    goto skip_0;
    // 0x801DA9E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x801DA9EC: lhu         $t9, 0xE6($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DA9F0: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DA9F4: bne         $t9, $at, L_801DAA14
    if (ctx->r25 != ctx->r1) {
        // 0x801DA9F8: nop
    
            goto L_801DAA14;
    }
    // 0x801DA9F8: nop

    // 0x801DA9FC: jal         0x80038B98
    // 0x801DAA00: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_15;
    // 0x801DAA00: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_15:
    // 0x801DAA04: lw          $t1, 0xEC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XEC);
    // 0x801DAA08: addiu       $t0, $zero, 0x29B
    ctx->r8 = ADD32(0, 0X29B);
    // 0x801DAA0C: b           L_801DAA28
    // 0x801DAA10: sh          $t0, 0xE6($t1)
    MEM_H(0XE6, ctx->r9) = ctx->r8;
        goto L_801DAA28;
    // 0x801DAA10: sh          $t0, 0xE6($t1)
    MEM_H(0XE6, ctx->r9) = ctx->r8;
L_801DAA14:
    // 0x801DAA14: jal         0x80038B98
    // 0x801DAA18: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_16;
    // 0x801DAA18: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_16:
    // 0x801DAA1C: lw          $t3, 0xEC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0XEC);
    // 0x801DAA20: addiu       $t2, $zero, 0x29A
    ctx->r10 = ADD32(0, 0X29A);
    // 0x801DAA24: sh          $t2, 0xE6($t3)
    MEM_H(0XE6, ctx->r11) = ctx->r10;
L_801DAA28:
    // 0x801DAA28: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DAA2C: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DAA30: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x801DAA34: sh          $t5, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r13;
    // 0x801DAA38: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801DAA3C:
    // 0x801DAA3C: jal         0x801E8850
    // 0x801DAA40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_17;
    // 0x801DAA40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x801DAA44: jal         0x801D8BF0
    // 0x801DAA48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_18;
    // 0x801DAA48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_18:
    // 0x801DAA4C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801DAA50: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801DAA54: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801DAA58: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801DAA5C: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801DAA60: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801DAA64: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801DAA68: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x801DAA6C: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x801DAA70: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x801DAA74: lw          $s3, 0x80($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X80);
    // 0x801DAA78: jr          $ra
    // 0x801DAA7C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801DAA7C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801D4C14_643A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4C14: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D4C18: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D4C1C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D4C20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D4C24: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D4C28: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D4C2C: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801D4C30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D4C34: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x801D4C38: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D4C3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D4C40: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D4C44: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D4C48: bgez        $v0, L_801D4C58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D4C4C: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D4C58;
    }
    // 0x801D4C4C: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D4C50: b           L_801D4C58
    // 0x801D4C54: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D4C58;
    // 0x801D4C54: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D4C58:
    // 0x801D4C58: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D4C5C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4C60: ldc1        $f8, -0xF10($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF10);
    // 0x801D4C64: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D4C68: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D4C6C: nop

    // 0x801D4C70: bc1f        L_801D4C80
    if (!c1cs) {
        // 0x801D4C74: nop
    
            goto L_801D4C80;
    }
    // 0x801D4C74: nop

    // 0x801D4C78: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D4C7C: sh          $t7, 0xA8($a0)
    MEM_H(0XA8, ctx->r4) = ctx->r15;
L_801D4C80:
    // 0x801D4C80: jr          $ra
    // 0x801D4C84: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D4C84: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D6EA8_645CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6EAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D6EB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D6EB4: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D6EB8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D6EBC: bgezl       $t6, L_801D6EE4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D6EC0: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D6EE4;
    }
    goto skip_0;
    // 0x801D6EC0: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D6EC4: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D6EC8: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D6ECC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D6ED0: jal         0x800352EC
    // 0x801D6ED4: addiu       $a0, $a0, 0x7050
    ctx->r4 = ADD32(ctx->r4, 0X7050);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D6ED4: addiu       $a0, $a0, 0x7050
    ctx->r4 = ADD32(ctx->r4, 0X7050);
    after_0:
    // 0x801D6ED8: b           L_801D6F60
    // 0x801D6EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D6F60;
    // 0x801D6EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6EE0: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801D6EE4:
    // 0x801D6EE4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D6EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6EEC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D6EF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D6EF4: lw          $t9, -0x7480($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7480);
    // 0x801D6EF8: jalr        $t9
    // 0x801D6EFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D6EFC: nop

    after_1:
    // 0x801D6F00: jal         0x801CD504
    // 0x801D6F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D6F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D6F08: beql        $v0, $zero, L_801D6F24
    if (ctx->r2 == 0) {
        // 0x801D6F0C: lw          $v0, 0xEC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XEC);
            goto L_801D6F24;
    }
    goto skip_1;
    // 0x801D6F0C: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    skip_1:
    // 0x801D6F10: jal         0x801D2B90
    // 0x801D6F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D6F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D6F18: b           L_801D6F60
    // 0x801D6F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D6F60;
    // 0x801D6F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D6F20: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
L_801D6F24:
    // 0x801D6F24: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D6F28: ldc1        $f8, -0xE60($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE60);
    // 0x801D6F2C: lwc1        $f4, 0x330($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801D6F30: lwc1        $f16, 0xA0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801D6F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D6F38: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D6F3C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801D6F40: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x801D6F44: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801D6F48: jal         0x801CD634
    // 0x801D6F4C: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    func_801CD634_63C484(rdram, ctx);
        goto after_4;
    // 0x801D6F4C: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    after_4:
    // 0x801D6F50: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D6F54: jal         0x801CD780
    // 0x801D6F58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_5;
    // 0x801D6F58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x801D6F5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D6F60:
    // 0x801D6F60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D6F64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D6F68: jr          $ra
    // 0x801D6F6C: nop

    TRACE_RETURN()
    return;
    // 0x801D6F6C: nop

;}
RECOMP_FUNC void func_801CBC94_63AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBC94: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CBC98: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801CBC9C: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801CBCA0: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    // 0x801CBCA4: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x801CBCA8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801CBCAC: lui         $t0, 0x801F
    ctx->r8 = S32(0X801F << 16);
    // 0x801CBCB0: bc1fl       L_801CBCC4
    if (!c1cs) {
        // 0x801CBCB4: mtc1        $at, $f20
        ctx->f20.u32l = ctx->r1;
            goto L_801CBCC4;
    }
    goto skip_0;
    // 0x801CBCB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    skip_0:
    // 0x801CBCB8: b           L_801CBEEC
    // 0x801CBCBC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_801CBEEC;
    // 0x801CBCBC: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x801CBCC0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
L_801CBCC4:
    // 0x801CBCC4: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
    // 0x801CBCC8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CBCCC: div.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f20.fl);
    // 0x801CBCD0: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801CBCD4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801CBCD8: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x801CBCDC: nop

    // 0x801CBCE0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801CBCE4: bltz        $v1, L_801CBD74
    if (SIGNED(ctx->r3) < 0) {
        // 0x801CBCE8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801CBD74;
    }
    // 0x801CBCE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801CBCEC: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CBCF0: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801CBCF4: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801CBCF8: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801CBCFC: lhu         $a1, -0x520C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X520C);
    // 0x801CBD00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801CBD04: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801CBD08: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x801CBD0C: lbu         $t8, -0x1ED4($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1ED4);
    // 0x801CBD10: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x801CBD14: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801CBD18: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801CBD1C: beq         $at, $zero, L_801CBD34
    if (ctx->r1 == 0) {
        // 0x801CBD20: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_801CBD34;
    }
    // 0x801CBD20: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x801CBD24: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x801CBD28: lw          $t1, -0x1EE4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1EE4);
    // 0x801CBD2C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x801CBD30: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
L_801CBD34:
    // 0x801CBD34: lw          $t4, -0x1E24($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1E24);
    // 0x801CBD38: sll         $t5, $a0, 2
    ctx->r13 = S32(ctx->r4 << 2);
    // 0x801CBD3C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x801CBD40: lw          $a3, 0x0($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X0);
    // 0x801CBD44: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801CBD48: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x801CBD4C: nop

    // 0x801CBD50: bc1fl       L_801CBD74
    if (!c1cs) {
        // 0x801CBD54: lwc1        $f2, 0x8($a3)
        ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
            goto L_801CBD74;
    }
    goto skip_1;
    // 0x801CBD54: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    skip_1:
    // 0x801CBD58: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
L_801CBD5C:
    // 0x801CBD5C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x801CBD60: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x801CBD64: nop

    // 0x801CBD68: bc1tl       L_801CBD5C
    if (c1cs) {
        // 0x801CBD6C: lwc1        $f10, 0xC($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
            goto L_801CBD5C;
    }
    goto skip_2;
    // 0x801CBD6C: lwc1        $f10, 0xC($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0XC);
    skip_2:
    // 0x801CBD70: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
L_801CBD74:
    // 0x801CBD74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801CBD78: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x801CBD7C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CBD80: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CBD84: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x801CBD88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CBD8C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x801CBD90: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x801CBD94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CBD98: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801CBD9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801CBDA0: lhu         $a1, -0x520C($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X520C);
    // 0x801CBDA4: lui         $v1, 0x801F
    ctx->r3 = S32(0X801F << 16);
    // 0x801CBDA8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CBDAC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x801CBDB0: lbu         $v1, -0x1ED4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1ED4);
    // 0x801CBDB4: sll         $a2, $a1, 2
    ctx->r6 = S32(ctx->r5 << 2);
    // 0x801CBDB8: addu        $t0, $t0, $a2
    ctx->r8 = ADD32(ctx->r8, ctx->r6);
    // 0x801CBDBC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801CBDC0: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x801CBDC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801CBDC8: beq         $at, $zero, L_801CBDE4
    if (ctx->r1 == 0) {
        // 0x801CBDCC: lw          $t0, -0x1E24($t0)
        ctx->r8 = MEM_W(ctx->r8, -0X1E24);
            goto L_801CBDE4;
    }
    // 0x801CBDCC: lw          $t0, -0x1E24($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1E24);
    // 0x801CBDD0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CBDD4: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x801CBDD8: lw          $t9, -0x1EE4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1EE4);
    // 0x801CBDDC: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x801CBDE0: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
L_801CBDE4:
    // 0x801CBDE4: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x801CBDE8: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x801CBDEC: lw          $a3, 0x0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X0);
    // 0x801CBDF0: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
    // 0x801CBDF4: lwc1        $f16, 0x0($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801CBDF8: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x801CBDFC: nop

    // 0x801CBE00: bc1fl       L_801CBE2C
    if (!c1cs) {
        // 0x801CBE04: lwc1        $f18, 0x4($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
            goto L_801CBE2C;
    }
    goto skip_3;
    // 0x801CBE04: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    skip_3:
    // 0x801CBE08: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_801CBE0C:
    // 0x801CBE0C: lwc1        $f16, 0xC($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0XC);
    // 0x801CBE10: lwc1        $f2, 0x8($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CBE14: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x801CBE18: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x801CBE1C: nop

    // 0x801CBE20: bc1tl       L_801CBE0C
    if (c1cs) {
        // 0x801CBE24: mov.s       $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
            goto L_801CBE0C;
    }
    goto skip_4;
    // 0x801CBE24: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    skip_4:
    // 0x801CBE28: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
L_801CBE2C:
    // 0x801CBE2C: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801CBE30: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x801CBE34: sub.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801CBE38: bc1f        L_801CBE60
    if (!c1cs) {
        // 0x801CBE3C: swc1        $f8, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
            goto L_801CBE60;
    }
    // 0x801CBE3C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CBE40: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801CBE44: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CBE48: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x801CBE4C: nop

    // 0x801CBE50: bc1fl       L_801CBE64
    if (!c1cs) {
        // 0x801CBE54: c.le.s      $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl <= ctx->f16.fl;
            goto L_801CBE64;
    }
    goto skip_5;
    // 0x801CBE54: c.le.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl <= ctx->f16.fl;
    skip_5:
    // 0x801CBE58: b           L_801CBEEC
    // 0x801CBE5C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_801CBEEC;
    // 0x801CBE5C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801CBE60:
    // 0x801CBE60: c.le.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl <= ctx->f16.fl;
L_801CBE64:
    // 0x801CBE64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801CBE68: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x801CBE6C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801CBE70: bc1fl       L_801CBEA4
    if (!c1cs) {
        // 0x801CBE74: lwc1        $f2, 0x4($a3)
        ctx->f2.u32l = MEM_W(ctx->r7, 0X4);
            goto L_801CBEA4;
    }
    goto skip_6;
    // 0x801CBE74: lwc1        $f2, 0x4($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X4);
    skip_6:
    // 0x801CBE78: beq         $at, $zero, L_801CBE94
    if (ctx->r1 == 0) {
        // 0x801CBE7C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801CBE94;
    }
    // 0x801CBE7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801CBE80: lui         $t4, 0x801F
    ctx->r12 = S32(0X801F << 16);
    // 0x801CBE84: addu        $t4, $t4, $a2
    ctx->r12 = ADD32(ctx->r12, ctx->r6);
    // 0x801CBE88: lw          $t4, -0x1EE4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1EE4);
    // 0x801CBE8C: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x801CBE90: lbu         $a0, 0x0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X0);
L_801CBE94:
    // 0x801CBE94: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x801CBE98: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x801CBE9C: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x801CBEA0: lwc1        $f2, 0x4($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X4);
L_801CBEA4:
    // 0x801CBEA4: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x801CBEA8: nop

    // 0x801CBEAC: bc1fl       L_801CBED8
    if (!c1cs) {
        // 0x801CBEB0: sub.s       $f10, $f12, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_801CBED8;
    }
    goto skip_7;
    // 0x801CBEB0: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
    skip_7:
    // 0x801CBEB4: sub.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x801CBEB8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CBEBC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x801CBEC0: nop

    // 0x801CBEC4: bc1fl       L_801CBED8
    if (!c1cs) {
        // 0x801CBEC8: sub.s       $f10, $f12, $f14
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_801CBED8;
    }
    goto skip_8;
    // 0x801CBEC8: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
    skip_8:
    // 0x801CBECC: b           L_801CBEEC
    // 0x801CBED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_801CBEEC;
    // 0x801CBED0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801CBED4: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
L_801CBED8:
    // 0x801CBED8: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x801CBEDC: sub.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x801CBEE0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801CBEE4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CBEE8: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
L_801CBEEC:
    // 0x801CBEEC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801CBEF0: jr          $ra
    // 0x801CBEF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801CBEF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801DFEC0_64ED10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DFEC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DFEC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801DFEC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x801DFECC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x801DFED0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801DFED4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801DFED8: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801DFEDC: lui         $s2, 0x801F
    ctx->r18 = S32(0X801F << 16);
    // 0x801DFEE0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DFEE4: beq         $s0, $zero, L_801DFF40
    if (ctx->r16 == 0) {
        // 0x801DFEE8: addiu       $s2, $s2, -0x2110
        ctx->r18 = ADD32(ctx->r18, -0X2110);
            goto L_801DFF40;
    }
    // 0x801DFEE8: addiu       $s2, $s2, -0x2110
    ctx->r18 = ADD32(ctx->r18, -0X2110);
    // 0x801DFEEC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
L_801DFEF0:
    // 0x801DFEF0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DFEF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DFEF8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DFEFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DFF00: jal         0x801CD834
    // 0x801DFF04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801CD834_63C684(rdram, ctx);
        goto after_0;
    // 0x801DFF04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x801DFF08: beq         $v0, $zero, L_801DFF30
    if (ctx->r2 == 0) {
        // 0x801DFF0C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DFF30;
    }
    // 0x801DFF0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFF10: jal         0x801CDFE4
    // 0x801DFF14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801DFF14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801DFF18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFF1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DFF20: jal         0x80036158
    // 0x801DFF24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801DFF24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801DFF28: b           L_801DFF34
    // 0x801DFF2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801DFF34;
    // 0x801DFF2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801DFF30:
    // 0x801DFF30: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801DFF34:
    // 0x801DFF34: bnel        $s0, $zero, L_801DFEF0
    if (ctx->r16 != 0) {
        // 0x801DFF38: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_801DFEF0;
    }
    goto skip_0;
    // 0x801DFF38: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    skip_0:
    // 0x801DFF3C: lw          $s0, 0x18($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X18);
L_801DFF40:
    // 0x801DFF40: lbu         $t7, 0x6A($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X6A);
    // 0x801DFF44: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801DFF48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DFF4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DFF50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801DFF54: lw          $t9, -0x20C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20C8);
    // 0x801DFF58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DFF5C: jalr        $t9
    // 0x801DFF60: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x801DFF60: nop

    after_3:
    // 0x801DFF64: lw          $t0, 0x18($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X18);
    // 0x801DFF68: bnel        $t0, $zero, L_801DFF8C
    if (ctx->r8 != 0) {
        // 0x801DFF6C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801DFF8C;
    }
    goto skip_1;
    // 0x801DFF6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801DFF70: lb          $t1, 0x78($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X78);
    // 0x801DFF74: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801DFF78: bnel        $t2, $zero, L_801DFF8C
    if (ctx->r10 != 0) {
        // 0x801DFF7C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801DFF8C;
    }
    goto skip_2;
    // 0x801DFF7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801DFF80: jal         0x80034ED4
    // 0x801DFF84: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801DFF84: nop

    after_4:
    // 0x801DFF88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801DFF8C:
    // 0x801DFF8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801DFF90: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801DFF94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801DFF98: jr          $ra
    // 0x801DFF9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801DFF9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801E09F8_64F848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E09F8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x801E09FC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x801E0A00: beq         $a1, $zero, L_801E0C68
    if (ctx->r5 == 0) {
        // 0x801E0A04: sw          $a0, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r4;
            goto L_801E0C68;
    }
    // 0x801E0A04: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x801E0A08: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801E0A0C: lui         $t3, 0x801F
    ctx->r11 = S32(0X801F << 16);
    // 0x801E0A10: lui         $t1, 0x8FFF
    ctx->r9 = S32(0X8FFF << 16);
    // 0x801E0A14: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E0A18: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E0A1C: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x801E0A20: addiu       $t3, $t3, -0x1828
    ctx->r11 = ADD32(ctx->r11, -0X1828);
    // 0x801E0A24: lui         $s0, 0xB800
    ctx->r16 = S32(0XB800 << 16);
    // 0x801E0A28: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x801E0A2C: lui         $t4, 0xFA00
    ctx->r12 = S32(0XFA00 << 16);
    // 0x801E0A30: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801E0A34: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801E0A38: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
L_801E0A3C:
    // 0x801E0A3C: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x801E0A40: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801E0A44: nop

    // 0x801E0A48: bc1fl       L_801E0C60
    if (!c1cs) {
        // 0x801E0A4C: lw          $a1, 0x0($a1)
        ctx->r5 = MEM_W(ctx->r5, 0X0);
            goto L_801E0C60;
    }
    goto skip_0;
    // 0x801E0A4C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x801E0A50: lbu         $t6, 0x8F($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8F);
    // 0x801E0A54: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801E0A58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E0A5C: subu        $v0, $t0, $t6
    ctx->r2 = SUB32(ctx->r8, ctx->r14);
    // 0x801E0A60: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801E0A64: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801E0A68: bgez        $t7, L_801E0A7C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E0A6C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801E0A7C;
    }
    // 0x801E0A6C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801E0A70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0A74: nop

    // 0x801E0A78: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801E0A7C:
    // 0x801E0A7C: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801E0A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E0A84: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E0A88: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E0A8C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801E0A90: nop

    // 0x801E0A94: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E0A98: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801E0A9C: nop

    // 0x801E0AA0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801E0AA4: beql        $v0, $zero, L_801E0AF4
    if (ctx->r2 == 0) {
        // 0x801E0AA8: mfc1        $v0, $f18
        ctx->r2 = (int32_t)ctx->f18.u32l;
            goto L_801E0AF4;
    }
    goto skip_1;
    // 0x801E0AA8: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x801E0AAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E0AB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E0AB4: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E0AB8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801E0ABC: nop

    // 0x801E0AC0: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801E0AC4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801E0AC8: nop

    // 0x801E0ACC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801E0AD0: bne         $v0, $zero, L_801E0AE8
    if (ctx->r2 != 0) {
        // 0x801E0AD4: nop
    
            goto L_801E0AE8;
    }
    // 0x801E0AD4: nop

    // 0x801E0AD8: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x801E0ADC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E0AE0: b           L_801E0B00
    // 0x801E0AE4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801E0B00;
    // 0x801E0AE4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801E0AE8:
    // 0x801E0AE8: b           L_801E0B00
    // 0x801E0AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801E0B00;
    // 0x801E0AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801E0AF0: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
L_801E0AF4:
    // 0x801E0AF4: nop

    // 0x801E0AF8: bltz        $v0, L_801E0AE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x801E0AFC: nop
    
            goto L_801E0AE8;
    }
    // 0x801E0AFC: nop

L_801E0B00:
    // 0x801E0B00: lbu         $t6, 0x93($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X93);
    // 0x801E0B04: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E0B08: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x801E0B0C: subu        $v1, $t0, $t6
    ctx->r3 = SUB32(ctx->r8, ctx->r14);
    // 0x801E0B10: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x801E0B14: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801E0B18: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801E0B1C: bgez        $t7, L_801E0B34
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E0B20: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801E0B34;
    }
    // 0x801E0B20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E0B24: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E0B28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0B2C: nop

    // 0x801E0B30: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_801E0B34:
    // 0x801E0B34: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801E0B38: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E0B3C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E0B40: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801E0B44: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801E0B48: nop

    // 0x801E0B4C: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801E0B50: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801E0B54: nop

    // 0x801E0B58: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801E0B5C: beql        $v1, $zero, L_801E0BAC
    if (ctx->r3 == 0) {
        // 0x801E0B60: mfc1        $v1, $f16
        ctx->r3 = (int32_t)ctx->f16.u32l;
            goto L_801E0BAC;
    }
    goto skip_2;
    // 0x801E0B60: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    skip_2:
    // 0x801E0B64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E0B68: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801E0B6C: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x801E0B70: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801E0B74: nop

    // 0x801E0B78: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E0B7C: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801E0B80: nop

    // 0x801E0B84: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801E0B88: bne         $v1, $zero, L_801E0BA0
    if (ctx->r3 != 0) {
        // 0x801E0B8C: nop
    
            goto L_801E0BA0;
    }
    // 0x801E0B8C: nop

    // 0x801E0B90: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801E0B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E0B98: b           L_801E0BB8
    // 0x801E0B9C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_801E0BB8;
    // 0x801E0B9C: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_801E0BA0:
    // 0x801E0BA0: b           L_801E0BB8
    // 0x801E0BA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_801E0BB8;
    // 0x801E0BA4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x801E0BA8: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
L_801E0BAC:
    // 0x801E0BAC: nop

    // 0x801E0BB0: bltz        $v1, L_801E0BA0
    if (SIGNED(ctx->r3) < 0) {
        // 0x801E0BB4: nop
    
            goto L_801E0BA0;
    }
    // 0x801E0BB4: nop

L_801E0BB8:
    // 0x801E0BB8: lw          $t6, 0x30($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X30);
    // 0x801E0BBC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801E0BC0: or          $t9, $v1, $zero
    ctx->r25 = ctx->r3 | 0;
    // 0x801E0BC4: and         $a2, $t6, $t1
    ctx->r6 = ctx->r14 & ctx->r9;
    // 0x801E0BC8: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x801E0BCC: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x801E0BD0: sw          $t3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r11;
    // 0x801E0BD4: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x801E0BD8: lbu         $t7, 0x8F($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X8F);
    // 0x801E0BDC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801E0BE0: addiu       $a0, $a3, 0x8
    ctx->r4 = ADD32(ctx->r7, 0X8);
    // 0x801E0BE4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x801E0BE8: lbu         $t7, 0x8C($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X8C);
    // 0x801E0BEC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x801E0BF0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E0BF4: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x801E0BF8: or          $t6, $t9, $t8
    ctx->r14 = ctx->r25 | ctx->r24;
    // 0x801E0BFC: lbu         $t9, 0x8D($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X8D);
    // 0x801E0C00: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x801E0C04: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x801E0C08: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x801E0C0C: lbu         $t6, 0x8E($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8E);
    // 0x801E0C10: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x801E0C14: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x801E0C18: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x801E0C1C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x801E0C20: lbu         $t6, 0x93($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X93);
    // 0x801E0C24: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x801E0C28: lbu         $t6, 0x90($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X90);
    // 0x801E0C2C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x801E0C30: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x801E0C34: or          $t9, $t8, $t7
    ctx->r25 = ctx->r24 | ctx->r15;
    // 0x801E0C38: lbu         $t8, 0x91($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X91);
    // 0x801E0C3C: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x801E0C40: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x801E0C44: lbu         $t9, 0x92($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X92);
    // 0x801E0C48: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x801E0C4C: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x801E0C50: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x801E0C54: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x801E0C58: sw          $s0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r16;
    // 0x801E0C5C: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
L_801E0C60:
    // 0x801E0C60: bnel        $a1, $zero, L_801E0A3C
    if (ctx->r5 != 0) {
        // 0x801E0C64: lwc1        $f4, 0x28($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
            goto L_801E0A3C;
    }
    goto skip_3;
    // 0x801E0C64: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    skip_3:
L_801E0C68:
    // 0x801E0C68: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x801E0C6C: jr          $ra
    // 0x801E0C70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x801E0C70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_801DC78C_64B5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC78C: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x801DC790: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801DC794: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801DC798: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801DC79C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801DC7A0: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801DC7A4: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801DC7A8: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801DC7AC: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801DC7B0: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801DC7B4: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801DC7B8: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801DC7BC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801DC7C0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DC7C4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DC7C8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DC7CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC7D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DC7D4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801DC7D8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DC7DC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DC7E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DC7E4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801DC7E8: addiu       $t9, $sp, 0xFC
    ctx->r25 = ADD32(ctx->r29, 0XFC);
    // 0x801DC7EC: addiu       $t0, $sp, 0x100
    ctx->r8 = ADD32(ctx->r29, 0X100);
    // 0x801DC7F0: addiu       $a3, $sp, 0xF8
    ctx->r7 = ADD32(ctx->r29, 0XF8);
    // 0x801DC7F4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DC7F8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x801DC7FC: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DC800: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DC804: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DC808: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DC80C: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801DC810: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DC814: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DC818: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DC81C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DC820: ldc1        $f16, -0xD50($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XD50);
    // 0x801DC824: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DC828: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x801DC82C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801DC830: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x801DC834: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DC838: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801DC83C: sh          $t6, 0xA4($sp)
    MEM_H(0XA4, ctx->r29) = ctx->r14;
    // 0x801DC840: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DC844: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DC848: sh          $t7, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r15;
    // 0x801DC84C: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801DC850: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DC854: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801DC858: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x801DC85C: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    // 0x801DC860: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DC864: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DC868: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DC86C: sh          $t8, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r24;
    // 0x801DC870: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x801DC874: jal         0x80033898
    // 0x801DC878: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DC878: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DC87C: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DC880: lwc1        $f6, 0x5C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DC884: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DC888: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC88C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801DC890: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DC894: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DC898: addiu       $t1, $sp, 0xF0
    ctx->r9 = ADD32(ctx->r29, 0XF0);
    // 0x801DC89C: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x801DC8A0: lwc1        $f16, 0x60($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DC8A4: addiu       $t2, $sp, 0xF4
    ctx->r10 = ADD32(ctx->r29, 0XF4);
    // 0x801DC8A8: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DC8AC: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DC8B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DC8B4: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DC8B8: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DC8BC: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x801DC8C0: lwc1        $f6, 0x64($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DC8C4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DC8C8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DC8CC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801DC8D0: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x801DC8D4: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x801DC8D8: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x801DC8DC: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x801DC8E0: jal         0x80033898
    // 0x801DC8E4: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DC8E4: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DC8E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DC8EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DC8F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DC8F4: addiu       $t3, $sp, 0x9C
    ctx->r11 = ADD32(ctx->r29, 0X9C);
    // 0x801DC8F8: addiu       $t4, $sp, 0xA0
    ctx->r12 = ADD32(ctx->r29, 0XA0);
    // 0x801DC8FC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DC900: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DC904: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DC908: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DC90C: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DC910: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x801DC914: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x801DC918: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x801DC91C: jal         0x80033898
    // 0x801DC920: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801DC920: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DC924: lwc1        $f12, 0x98($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801DC928: jal         0x800040A8
    // 0x801DC92C: lwc1        $f14, 0xA0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA0);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801DC92C: lwc1        $f14, 0xA0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA0);
    after_3:
    // 0x801DC930: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DC934: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DC938: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DC93C: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DC940: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DC944: addiu       $v1, $v0, 0xC0
    ctx->r3 = ADD32(ctx->r2, 0XC0);
    // 0x801DC948: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x801DC94C: addiu       $t5, $zero, 0xDE
    ctx->r13 = ADD32(0, 0XDE);
    // 0x801DC950: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x801DC954: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x801DC958: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801DC95C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801DC960: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x801DC964: addiu       $t1, $zero, 0x340
    ctx->r9 = ADD32(0, 0X340);
    // 0x801DC968: andi        $s0, $v1, 0xFFFF
    ctx->r16 = ctx->r3 & 0XFFFF;
    // 0x801DC96C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x801DC970: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x801DC974: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801DC978: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801DC97C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801DC980: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801DC984: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801DC988: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801DC98C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DC990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DC994: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DC998: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801DC99C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801DC9A0: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DC9A4: jal         0x801CDA88
    // 0x801DC9A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_4;
    // 0x801DC9A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801DC9AC: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DC9B0: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DC9B4: lwc1        $f12, 0x100($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DC9B8: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DC9BC: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DC9C0: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DC9C4: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801DC9C8: addiu       $s1, $s0, 0x80
    ctx->r17 = ADD32(ctx->r16, 0X80);
    // 0x801DC9CC: addiu       $s0, $s0, -0x60
    ctx->r16 = ADD32(ctx->r16, -0X60);
    // 0x801DC9D0: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x801DC9D4: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x801DC9D8: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x801DC9DC: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801DC9E0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801DC9E4: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x801DC9E8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x801DC9EC: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x801DC9F0: swc1        $f12, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f12.u32l;
    // 0x801DC9F4: swc1        $f2, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f2.u32l;
    // 0x801DC9F8: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
L_801DC9FC:
    // 0x801DC9FC: lwc1        $f0, 0xF8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCA00: lwc1        $f2, 0xFC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCA04: lwc1        $f12, 0x100($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCA08: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x801DCA0C: addiu       $t4, $zero, 0xDE
    ctx->r12 = ADD32(0, 0XDE);
    // 0x801DCA10: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x801DCA14: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x801DCA18: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801DCA1C: addiu       $t8, $zero, 0x60
    ctx->r24 = ADD32(0, 0X60);
    // 0x801DCA20: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801DCA24: addiu       $t0, $zero, 0x340
    ctx->r8 = ADD32(0, 0X340);
    // 0x801DCA28: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801DCA2C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x801DCA30: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801DCA34: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DCA38: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801DCA3C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DCA40: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DCA44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DCA48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801DCA4C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801DCA50: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801DCA54: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DCA58: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DCA5C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801DCA60: jal         0x801CDA88
    // 0x801DCA64: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_5;
    // 0x801DCA64: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x801DCA68: lwc1        $f18, 0xF8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCA6C: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCA70: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCA74: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x801DCA78: addiu       $t1, $zero, 0xDE
    ctx->r9 = ADD32(0, 0XDE);
    // 0x801DCA7C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x801DCA80: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x801DCA84: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x801DCA88: addiu       $t5, $zero, 0x60
    ctx->r13 = ADD32(0, 0X60);
    // 0x801DCA8C: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801DCA90: addiu       $t7, $zero, 0x340
    ctx->r15 = ADD32(0, 0X340);
    // 0x801DCA94: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801DCA98: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801DCA9C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801DCAA0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801DCAA4: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801DCAA8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DCAAC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DCAB0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DCAB4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801DCAB8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801DCABC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801DCAC0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801DCAC4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801DCAC8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DCACC: jal         0x801CDA88
    // 0x801DCAD0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_6;
    // 0x801DCAD0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x801DCAD4: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCAD8: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DCADC: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCAE0: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DCAE4: add.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DCAE8: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DCAEC: lwc1        $f8, 0x100($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCAF0: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DCAF4: addiu       $s0, $s0, -0x60
    ctx->r16 = ADD32(ctx->r16, -0X60);
    // 0x801DCAF8: addiu       $s1, $s1, 0x60
    ctx->r17 = ADD32(ctx->r17, 0X60);
    // 0x801DCAFC: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DCB00: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x801DCB04: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x801DCB08: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x801DCB0C: andi        $t0, $s2, 0xFF
    ctx->r8 = ctx->r18 & 0XFF;
    // 0x801DCB10: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801DCB14: swc1        $f16, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f16.u32l;
    // 0x801DCB18: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    // 0x801DCB1C: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x801DCB20: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801DCB24: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x801DCB28: bne         $t0, $zero, L_801DC9FC
    if (ctx->r8 != 0) {
        // 0x801DCB2C: or          $s2, $t0, $zero
        ctx->r18 = ctx->r8 | 0;
            goto L_801DC9FC;
    }
    // 0x801DCB2C: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x801DCB30: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x801DCB34: addiu       $t1, $zero, 0xDE
    ctx->r9 = ADD32(0, 0XDE);
    // 0x801DCB38: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x801DCB3C: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x801DCB40: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x801DCB44: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x801DCB48: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801DCB4C: addiu       $t7, $zero, 0x340
    ctx->r15 = ADD32(0, 0X340);
    // 0x801DCB50: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801DCB54: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801DCB58: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801DCB5C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801DCB60: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801DCB64: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DCB68: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DCB6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DCB70: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801DCB74: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DCB78: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801DCB7C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801DCB80: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x801DCB84: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801DCB88: jal         0x801CDA88
    // 0x801DCB8C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_7;
    // 0x801DCB8C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    after_7:
    // 0x801DCB90: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801DCB94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DCB98: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801DCB9C: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801DCBA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DCBA4: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DCBA8: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801DCBAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DCBB0: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801DCBB4: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801DCBB8: addiu       $t8, $sp, 0xFC
    ctx->r24 = ADD32(ctx->r29, 0XFC);
    // 0x801DCBBC: addiu       $t9, $sp, 0x100
    ctx->r25 = ADD32(ctx->r29, 0X100);
    // 0x801DCBC0: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x801DCBC4: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801DCBC8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DCBCC: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x801DCBD0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DCBD4: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DCBD8: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DCBDC: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DCBE0: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x801DCBE4: jal         0x80033898
    // 0x801DCBE8: addiu       $a3, $sp, 0xF8
    ctx->r7 = ADD32(ctx->r29, 0XF8);
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801DCBE8: addiu       $a3, $sp, 0xF8
    ctx->r7 = ADD32(ctx->r29, 0XF8);
    after_8:
    // 0x801DCBEC: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCBF0: lwc1        $f6, 0x5C($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DCBF4: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCBF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCBFC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DCC00: lwc1        $f16, 0x100($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCC04: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801DCC08: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801DCC0C: swc1        $f18, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f18.u32l;
    // 0x801DCC10: lwc1        $f8, 0x60($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DCC14: addiu       $t1, $sp, 0xF4
    ctx->r9 = ADD32(ctx->r29, 0XF4);
    // 0x801DCC18: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DCC1C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DCC20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DCC24: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DCC28: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DCC2C: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x801DCC30: lwc1        $f6, 0x64($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DCC34: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801DCC38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801DCC3C: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801DCC40: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x801DCC44: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x801DCC48: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x801DCC4C: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x801DCC50: jal         0x80033898
    // 0x801DCC54: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801DCC54: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x801DCC58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCC5C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DCC60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DCC64: addiu       $t2, $sp, 0xE4
    ctx->r10 = ADD32(ctx->r29, 0XE4);
    // 0x801DCC68: addiu       $t3, $sp, 0xE8
    ctx->r11 = ADD32(ctx->r29, 0XE8);
    // 0x801DCC6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DCC70: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801DCC74: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DCC78: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DCC7C: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DCC80: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    // 0x801DCC84: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DCC88: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x801DCC8C: jal         0x80033898
    // 0x801DCC90: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_10;
    // 0x801DCC90: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x801DCC94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCC98: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DCC9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DCCA0: addiu       $t4, $sp, 0xD8
    ctx->r12 = ADD32(ctx->r29, 0XD8);
    // 0x801DCCA4: addiu       $t5, $sp, 0xDC
    ctx->r13 = ADD32(ctx->r29, 0XDC);
    // 0x801DCCA8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DCCAC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DCCB0: lhu         $a0, 0xA4($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0XA4);
    // 0x801DCCB4: lhu         $a1, 0xA6($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0XA6);
    // 0x801DCCB8: lhu         $a2, 0xA8($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0XA8);
    // 0x801DCCBC: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x801DCCC0: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x801DCCC4: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x801DCCC8: jal         0x80033898
    // 0x801DCCCC: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_11;
    // 0x801DCCCC: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x801DCCD0: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x801DCCD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DCCD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DCCDC: jal         0x801DFBE0
    // 0x801DCCE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_12;
    // 0x801DCCE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x801DCCE4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DCCE8: ldc1        $f30, -0xD48($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XD48);
    // 0x801DCCEC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DCCF0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801DCCF4: ldc1        $f28, -0xD40($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XD40);
    // 0x801DCCF8: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
L_801DCCFC:
    // 0x801DCCFC: jal         0x8000DD58
    // 0x801DCD00: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801DCD00: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_13:
    // 0x801DCD04: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801DCD08: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DCD0C: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DCD10: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801DCD14: mul.d       $f10, $f18, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f28.d);
    // 0x801DCD18: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801DCD1C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801DCD20: add.d       $f16, $f4, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f30.d); 
    ctx->f16.d = ctx->f4.d + ctx->f30.d;
    // 0x801DCD24: jal         0x8000DD58
    // 0x801DCD28: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_14;
    // 0x801DCD28: cvt.s.d     $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f22.fl = CVT_S_D(ctx->f16.d);
    after_14:
    // 0x801DCD2C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801DCD30: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DCD34: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801DCD38: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DCD3C: mul.d       $f8, $f10, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f28.d);
    // 0x801DCD40: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x801DCD44: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x801DCD48: add.d       $f6, $f16, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = ctx->f16.d + ctx->f30.d;
    // 0x801DCD4C: jal         0x8000DD58
    // 0x801DCD50: cvt.s.d     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f24.fl = CVT_S_D(ctx->f6.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_15;
    // 0x801DCD50: cvt.s.d     $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f24.fl = CVT_S_D(ctx->f6.d);
    after_15:
    // 0x801DCD54: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x801DCD58: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DCD5C: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801DCD60: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DCD64: mul.d       $f4, $f8, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f28.d);
    // 0x801DCD68: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x801DCD6C: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801DCD70: add.d       $f18, $f6, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f18.d = ctx->f6.d + ctx->f30.d;
    // 0x801DCD74: jal         0x8000DD58
    // 0x801DCD78: cvt.s.d     $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f26.fl = CVT_S_D(ctx->f18.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_16;
    // 0x801DCD78: cvt.s.d     $f26, $f18
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f26.fl = CVT_S_D(ctx->f18.d);
    after_16:
    // 0x801DCD7C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801DCD80: and         $t7, $t6, $s0
    ctx->r15 = ctx->r14 & ctx->r16;
    // 0x801DCD84: addiu       $t8, $t7, -0xA
    ctx->r24 = ADD32(ctx->r15, -0XA);
    // 0x801DCD88: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801DCD8C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DCD90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DCD94: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DCD98: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DCD9C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DCDA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DCDA4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DCDA8: ldc1        $f8, -0xD38($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XD38);
    // 0x801DCDAC: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DCDB0: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCDB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCDB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DCDBC: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x801DCDC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DCDC4: div.d       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f6.d);
    // 0x801DCDC8: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DCDCC: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DCDD0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DCDD4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DCDD8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DCDDC: mul.d       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f18.d, ctx->f8.d);
    // 0x801DCDE0: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DCDE4: mul.s       $f6, $f16, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801DCDE8: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x801DCDEC: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801DCDF0: add.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DCDF4: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DCDF8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DCDFC: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801DCE00: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DCE04: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DCE08: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCE0C: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x801DCE10: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DCE14: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DCE18: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801DCE1C: mul.s       $f8, $f16, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x801DCE20: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DCE24: lwc1        $f18, 0xD8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DCE28: mul.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801DCE2C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DCE30: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DCE34: lwc1        $f6, 0x100($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCE38: mul.s       $f18, $f8, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801DCE3C: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801DCE40: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DCE44: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DCE48: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x801DCE4C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DCE50: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DCE54: mul.s       $f18, $f6, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x801DCE58: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DCE5C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DCE60: jal         0x801DFC60
    // 0x801DCE64: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_17;
    // 0x801DCE64: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_17:
    // 0x801DCE68: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801DCE6C: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DCE70: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DCE74: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DCE78: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DCE7C: lwc1        $f16, 0xF4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801DCE80: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801DCE84: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DCE88: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x801DCE8C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x801DCE90: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DCE94: andi        $t9, $s2, 0xFF
    ctx->r25 = ctx->r18 & 0XFF;
    // 0x801DCE98: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x801DCE9C: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x801DCEA0: bne         $t9, $zero, L_801DCCFC
    if (ctx->r25 != 0) {
        // 0x801DCEA4: swc1        $f6, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
            goto L_801DCCFC;
    }
    // 0x801DCEA4: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x801DCEA8: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DCEAC: lhu         $t0, 0xE2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DCEB0: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x801DCEB4: bnel        $t1, $zero, L_801DCF0C
    if (ctx->r9 != 0) {
        // 0x801DCEB8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801DCF0C;
    }
    goto skip_0;
    // 0x801DCEB8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
    // 0x801DCEBC: lhu         $t2, 0xE6($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DCEC0: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DCEC4: bne         $t2, $at, L_801DCEE4
    if (ctx->r10 != ctx->r1) {
        // 0x801DCEC8: nop
    
            goto L_801DCEE4;
    }
    // 0x801DCEC8: nop

    // 0x801DCECC: jal         0x80038B98
    // 0x801DCED0: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_18;
    // 0x801DCED0: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_18:
    // 0x801DCED4: lw          $t4, 0xEC($s4)
    ctx->r12 = MEM_W(ctx->r20, 0XEC);
    // 0x801DCED8: addiu       $t3, $zero, 0x29B
    ctx->r11 = ADD32(0, 0X29B);
    // 0x801DCEDC: b           L_801DCEF8
    // 0x801DCEE0: sh          $t3, 0xE6($t4)
    MEM_H(0XE6, ctx->r12) = ctx->r11;
        goto L_801DCEF8;
    // 0x801DCEE0: sh          $t3, 0xE6($t4)
    MEM_H(0XE6, ctx->r12) = ctx->r11;
L_801DCEE4:
    // 0x801DCEE4: jal         0x80038B98
    // 0x801DCEE8: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_19;
    // 0x801DCEE8: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_19:
    // 0x801DCEEC: lw          $t6, 0xEC($s4)
    ctx->r14 = MEM_W(ctx->r20, 0XEC);
    // 0x801DCEF0: addiu       $t5, $zero, 0x29A
    ctx->r13 = ADD32(0, 0X29A);
    // 0x801DCEF4: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
L_801DCEF8:
    // 0x801DCEF8: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DCEFC: lhu         $t7, 0xE2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DCF00: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x801DCF04: sh          $t8, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r24;
    // 0x801DCF08: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_801DCF0C:
    // 0x801DCF0C: jal         0x801E8850
    // 0x801DCF10: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801E8850_6576A0(rdram, ctx);
        goto after_20;
    // 0x801DCF10: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_20:
    // 0x801DCF14: jal         0x801DBEB0
    // 0x801DCF18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_21;
    // 0x801DCF18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_21:
    // 0x801DCF1C: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801DCF20: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801DCF24: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801DCF28: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801DCF2C: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801DCF30: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801DCF34: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801DCF38: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801DCF3C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801DCF40: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801DCF44: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801DCF48: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801DCF4C: jr          $ra
    // 0x801DCF50: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    TRACE_RETURN()
    return;
    // 0x801DCF50: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_801CFEF0_63ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFEF0: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x801CFEF4: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x801CFEF8: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x801CFEFC: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x801CFF00: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x801CFF04: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x801CFF08: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x801CFF0C: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x801CFF10: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x801CFF14: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x801CFF18: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x801CFF1C: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801CFF20: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801CFF24: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801CFF28: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801CFF2C: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801CFF30: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801CFF34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CFF38: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x801CFF3C: sb          $t6, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r14;
    // 0x801CFF40: sb          $t7, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r15;
    // 0x801CFF44: lh          $t8, 0x0($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X0);
    // 0x801CFF48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CFF4C: andi        $t9, $t8, 0xF9BF
    ctx->r25 = ctx->r24 & 0XF9BF;
    // 0x801CFF50: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x801CFF54: lb          $t0, 0x9F($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X9F);
    // 0x801CFF58: andi        $t1, $t0, 0xFF3F
    ctx->r9 = ctx->r8 & 0XFF3F;
    // 0x801CFF5C: jal         0x80036260
    // 0x801CFF60: sb          $t1, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r9;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x801CFF60: sb          $t1, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r9;
    after_0:
    // 0x801CFF64: lw          $s7, 0xE4($s0)
    ctx->r23 = MEM_W(ctx->r16, 0XE4);
    // 0x801CFF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFF6C: sw          $s7, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r23;
    // 0x801CFF70: jal         0x8001B740
    // 0x801CFF74: lw          $a1, 0x18($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X18);
    func_8001B740_1C340(rdram, ctx);
        goto after_1;
    // 0x801CFF74: lw          $a1, 0x18($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X18);
    after_1:
    // 0x801CFF78: lw          $s7, 0xE0($s0)
    ctx->r23 = MEM_W(ctx->r16, 0XE0);
    // 0x801CFF7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFF80: sw          $s7, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r23;
    // 0x801CFF84: jal         0x8001B740
    // 0x801CFF88: lw          $a1, 0x18($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X18);
    func_8001B740_1C340(rdram, ctx);
        goto after_2;
    // 0x801CFF88: lw          $a1, 0x18($s7)
    ctx->r5 = MEM_W(ctx->r23, 0X18);
    after_2:
    // 0x801CFF8C: lw          $s7, 0xDC($s0)
    ctx->r23 = MEM_W(ctx->r16, 0XDC);
    // 0x801CFF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFF94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801CFF98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801CFF9C: jal         0x80035EEC
    // 0x801CFFA0: sw          $s7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r23;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801CFFA0: sw          $s7, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r23;
    after_3:
    // 0x801CFFA4: lw          $t2, 0x18($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X18);
    // 0x801CFFA8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801CFFAC: or          $t6, $v0, $zero
    ctx->r14 = ctx->r2 | 0;
    // 0x801CFFB0: addiu       $t5, $t2, 0x90
    ctx->r13 = ADD32(ctx->r10, 0X90);
L_801CFFB4:
    // 0x801CFFB4: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801CFFB8: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x801CFFBC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CFFC0: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801CFFC4: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x801CFFC8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801CFFCC: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x801CFFD0: bne         $t2, $t5, L_801CFFB4
    if (ctx->r10 != ctx->r13) {
        // 0x801CFFD4: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801CFFB4;
    }
    // 0x801CFFD4: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801CFFD8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801CFFDC: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801CFFE0: addiu       $fp, $zero, 0x60
    ctx->r30 = ADD32(0, 0X60);
    // 0x801CFFE4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801CFFE8: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x801CFFEC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CFFF0: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x801CFFF4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x801CFFF8: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x801CFFFC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801D0000: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D0004: lw          $s6, 0x18($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X18);
    // 0x801D0008: lwc1        $f26, 0x5C($s0)
    ctx->f26.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D000C: lwc1        $f28, 0x60($s0)
    ctx->f28.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D0010: addiu       $s7, $zero, 0x5A0
    ctx->r23 = ADD32(0, 0X5A0);
    // 0x801D0014: addiu       $s5, $zero, 0xF0
    ctx->r21 = ADD32(0, 0XF0);
    // 0x801D0018: addiu       $s4, $zero, 0xC8
    ctx->r20 = ADD32(0, 0XC8);
    // 0x801D001C: addiu       $s3, $zero, 0xC0
    ctx->r19 = ADD32(0, 0XC0);
    // 0x801D0020: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x801D0024: lwc1        $f4, 0xC($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0XC);
L_801D0028:
    // 0x801D0028: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D002C: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x801D0030: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801D0034: sub.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x801D0038: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801D003C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D0040: nop

    // 0x801D0044: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x801D0048: bne         $at, $zero, L_801D0054
    if (ctx->r1 != 0) {
        // 0x801D004C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801D0054;
    }
    // 0x801D004C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801D0050: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
L_801D0054:
    // 0x801D0054: addiu       $s0, $s0, 0x5
    ctx->r16 = ADD32(ctx->r16, 0X5);
    // 0x801D0058: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D005C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x801D0060: mflo        $t8
    ctx->r24 = lo;
    // 0x801D0064: nop

    // 0x801D0068: nop

    // 0x801D006C: div         $zero, $t8, $s4
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r20)));
    // 0x801D0070: mflo        $t9
    ctx->r25 = lo;
    // 0x801D0074: bne         $s4, $zero, L_801D0080
    if (ctx->r20 != 0) {
        // 0x801D0078: nop
    
            goto L_801D0080;
    }
    // 0x801D0078: nop

    // 0x801D007C: break       7
    do_break(2149384316);
L_801D0080:
    // 0x801D0080: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D0084: bne         $s4, $at, L_801D0098
    if (ctx->r20 != ctx->r1) {
        // 0x801D0088: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D0098;
    }
    // 0x801D0088: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D008C: bne         $t8, $at, L_801D0098
    if (ctx->r24 != ctx->r1) {
        // 0x801D0090: nop
    
            goto L_801D0098;
    }
    // 0x801D0090: nop

    // 0x801D0094: break       6
    do_break(2149384340);
L_801D0098:
    // 0x801D0098: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D009C: mflo        $t0
    ctx->r8 = lo;
    // 0x801D00A0: addiu       $t1, $t0, 0xF0
    ctx->r9 = ADD32(ctx->r8, 0XF0);
    // 0x801D00A4: nop

    // 0x801D00A8: div         $zero, $t1, $s2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r18)));
    // 0x801D00AC: mflo        $t4
    ctx->r12 = lo;
    // 0x801D00B0: negu        $t3, $t4
    ctx->r11 = SUB32(0, ctx->r12);
    // 0x801D00B4: bne         $s2, $zero, L_801D00C0
    if (ctx->r18 != 0) {
        // 0x801D00B8: nop
    
            goto L_801D00C0;
    }
    // 0x801D00B8: nop

    // 0x801D00BC: break       7
    do_break(2149384380);
L_801D00C0:
    // 0x801D00C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D00C4: bne         $s2, $at, L_801D00D8
    if (ctx->r18 != ctx->r1) {
        // 0x801D00C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D00D8;
    }
    // 0x801D00C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D00CC: bne         $t1, $at, L_801D00D8
    if (ctx->r9 != ctx->r1) {
        // 0x801D00D0: nop
    
            goto L_801D00D8;
    }
    // 0x801D00D0: nop

    // 0x801D00D4: break       6
    do_break(2149384404);
L_801D00D8:
    // 0x801D00D8: sh          $t3, 0x174($sp)
    MEM_H(0X174, ctx->r29) = ctx->r11;
    // 0x801D00DC: jal         0x8000DD58
    // 0x801D00E0: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801D00E0: nop

    after_4:
    // 0x801D00E4: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D00E8: lhu         $t5, 0x174($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X174);
    // 0x801D00EC: mflo        $t2
    ctx->r10 = lo;
    // 0x801D00F0: nop

    // 0x801D00F4: nop

    // 0x801D00F8: div         $zero, $t2, $s2
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r18)));
    // 0x801D00FC: mflo        $t6
    ctx->r14 = lo;
    // 0x801D0100: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x801D0104: sh          $t7, 0x174($sp)
    MEM_H(0X174, ctx->r29) = ctx->r15;
    // 0x801D0108: lwc1        $f18, 0x8($s6)
    ctx->f18.u32l = MEM_W(ctx->r22, 0X8);
    // 0x801D010C: bne         $s2, $zero, L_801D0118
    if (ctx->r18 != 0) {
        // 0x801D0110: nop
    
            goto L_801D0118;
    }
    // 0x801D0110: nop

    // 0x801D0114: break       7
    do_break(2149384468);
L_801D0118:
    // 0x801D0118: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D011C: bne         $s2, $at, L_801D0130
    if (ctx->r18 != ctx->r1) {
        // 0x801D0120: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D0130;
    }
    // 0x801D0120: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D0124: bne         $t2, $at, L_801D0130
    if (ctx->r10 != ctx->r1) {
        // 0x801D0128: nop
    
            goto L_801D0130;
    }
    // 0x801D0128: nop

    // 0x801D012C: break       6
    do_break(2149384492);
L_801D0130:
    // 0x801D0130: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D0134: mul.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f24.d);
    // 0x801D0138: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D013C: sub.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x801D0140: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801D0144: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x801D0148: nop

    // 0x801D014C: slti        $at, $v1, -0x60
    ctx->r1 = SIGNED(ctx->r3) < -0X60 ? 1 : 0;
    // 0x801D0150: beq         $at, $zero, L_801D015C
    if (ctx->r1 == 0) {
        // 0x801D0154: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801D015C;
    }
    // 0x801D0154: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801D0158: addiu       $s0, $zero, -0x60
    ctx->r16 = ADD32(0, -0X60);
L_801D015C:
    // 0x801D015C: slti        $at, $s0, 0x61
    ctx->r1 = SIGNED(ctx->r16) < 0X61 ? 1 : 0;
    // 0x801D0160: bnel        $at, $zero, L_801D0170
    if (ctx->r1 != 0) {
        // 0x801D0164: addiu       $s0, $s0, 0x3
        ctx->r16 = ADD32(ctx->r16, 0X3);
            goto L_801D0170;
    }
    goto skip_0;
    // 0x801D0164: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    skip_0:
    // 0x801D0168: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x801D016C: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
L_801D0170:
    // 0x801D0170: sll         $t9, $s0, 4
    ctx->r25 = S32(ctx->r16 << 4);
    // 0x801D0174: div         $zero, $t9, $fp
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r30)));
    // 0x801D0178: mflo        $s1
    ctx->r17 = lo;
    // 0x801D017C: bne         $fp, $zero, L_801D0188
    if (ctx->r30 != 0) {
        // 0x801D0180: nop
    
            goto L_801D0188;
    }
    // 0x801D0180: nop

    // 0x801D0184: break       7
    do_break(2149384580);
L_801D0188:
    // 0x801D0188: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801D018C: bne         $fp, $at, L_801D01A0
    if (ctx->r30 != ctx->r1) {
        // 0x801D0190: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801D01A0;
    }
    // 0x801D0190: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D0194: bne         $t9, $at, L_801D01A0
    if (ctx->r25 != ctx->r1) {
        // 0x801D0198: nop
    
            goto L_801D01A0;
    }
    // 0x801D0198: nop

    // 0x801D019C: break       6
    do_break(2149384604);
L_801D01A0:
    // 0x801D01A0: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D01A4: mflo        $a1
    ctx->r5 = lo;
    // 0x801D01A8: bgez        $a1, L_801D01B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x801D01AC: sra         $t0, $a1, 4
        ctx->r8 = S32(SIGNED(ctx->r5) >> 4);
            goto L_801D01B8;
    }
    // 0x801D01AC: sra         $t0, $a1, 4
    ctx->r8 = S32(SIGNED(ctx->r5) >> 4);
    // 0x801D01B0: addiu       $at, $a1, 0xF
    ctx->r1 = ADD32(ctx->r5, 0XF);
    // 0x801D01B4: sra         $t0, $at, 4
    ctx->r8 = S32(SIGNED(ctx->r1) >> 4);
L_801D01B8:
    // 0x801D01B8: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x801D01BC: beq         $s1, $zero, L_801D0228
    if (ctx->r17 == 0) {
        // 0x801D01C0: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_801D0228;
    }
    // 0x801D01C0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801D01C4: bgez        $s1, L_801D01D4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x801D01C8: sh          $t1, 0x176($sp)
        MEM_H(0X176, ctx->r29) = ctx->r9;
            goto L_801D01D4;
    }
    // 0x801D01C8: sh          $t1, 0x176($sp)
    MEM_H(0X176, ctx->r29) = ctx->r9;
    // 0x801D01CC: b           L_801D01D8
    // 0x801D01D0: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
        goto L_801D01D8;
    // 0x801D01D0: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
L_801D01D4:
    // 0x801D01D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D01D8:
    // 0x801D01D8: jal         0x8000DD58
    // 0x801D01DC: nop

    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801D01DC: nop

    after_5:
    // 0x801D01E0: slti        $t4, $s1, 0x2
    ctx->r12 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x801D01E4: xori        $t4, $t4, 0x1
    ctx->r12 = ctx->r12 ^ 0X1;
    // 0x801D01E8: sll         $t3, $t4, 1
    ctx->r11 = S32(ctx->r12 << 1);
    // 0x801D01EC: addiu       $t2, $t3, -0x1
    ctx->r10 = ADD32(ctx->r11, -0X1);
    // 0x801D01F0: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D01F4: lhu         $a1, 0x176($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X176);
    // 0x801D01F8: mflo        $t5
    ctx->r13 = lo;
    // 0x801D01FC: nop

    // 0x801D0200: nop

    // 0x801D0204: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D0208: mflo        $t6
    ctx->r14 = lo;
    // 0x801D020C: bgez        $t6, L_801D021C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D0210: sra         $t7, $t6, 4
        ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
            goto L_801D021C;
    }
    // 0x801D0210: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x801D0214: addiu       $at, $t6, 0xF
    ctx->r1 = ADD32(ctx->r14, 0XF);
    // 0x801D0218: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_801D021C:
    // 0x801D021C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x801D0220: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801D0224: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_801D0228:
    // 0x801D0228: addiu       $t9, $sp, 0x180
    ctx->r25 = ADD32(ctx->r29, 0X180);
    // 0x801D022C: addiu       $t0, $sp, 0x184
    ctx->r8 = ADD32(ctx->r29, 0X184);
    // 0x801D0230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0234: swc1        $f22, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f22.u32l;
    // 0x801D0238: swc1        $f22, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f22.u32l;
    // 0x801D023C: swc1        $f20, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f20.u32l;
    // 0x801D0240: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D0244: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D0248: lhu         $a0, 0x174($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X174);
    // 0x801D024C: addiu       $a3, $sp, 0x17C
    ctx->r7 = ADD32(ctx->r29, 0X17C);
    // 0x801D0250: sh          $a1, 0x176($sp)
    MEM_H(0X176, ctx->r29) = ctx->r5;
    // 0x801D0254: jal         0x80033898
    // 0x801D0258: sh          $zero, 0x178($sp)
    MEM_H(0X178, ctx->r29) = 0;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801D0258: sh          $zero, 0x178($sp)
    MEM_H(0X178, ctx->r29) = 0;
    after_6:
    // 0x801D025C: lwc1        $f16, 0x17C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x801D0260: lhu         $t1, 0x14($s6)
    ctx->r9 = MEM_HU(ctx->r22, 0X14);
    // 0x801D0264: lhu         $t4, 0x16($s6)
    ctx->r12 = MEM_HU(ctx->r22, 0X16);
    // 0x801D0268: swc1        $f16, 0x80($s6)
    MEM_W(0X80, ctx->r22) = ctx->f16.u32l;
    // 0x801D026C: lwc1        $f18, 0x180($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X180);
    // 0x801D0270: lhu         $t2, 0x18($s6)
    ctx->r10 = MEM_HU(ctx->r22, 0X18);
    // 0x801D0274: and         $t3, $t1, $t4
    ctx->r11 = ctx->r9 & ctx->r12;
    // 0x801D0278: swc1        $f18, 0x84($s6)
    MEM_W(0X84, ctx->r22) = ctx->f18.u32l;
    // 0x801D027C: lwc1        $f4, 0x184($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801D0280: and         $t5, $t3, $t2
    ctx->r13 = ctx->r11 & ctx->r10;
    // 0x801D0284: andi        $t6, $t5, 0x8000
    ctx->r14 = ctx->r13 & 0X8000;
    // 0x801D0288: sh          $zero, 0x8C($s6)
    MEM_H(0X8C, ctx->r22) = 0;
    // 0x801D028C: sh          $zero, 0x8E($s6)
    MEM_H(0X8E, ctx->r22) = 0;
    // 0x801D0290: bne         $t6, $zero, L_801D02D8
    if (ctx->r14 != 0) {
        // 0x801D0294: swc1        $f4, 0x88($s6)
        MEM_W(0X88, ctx->r22) = ctx->f4.u32l;
            goto L_801D02D8;
    }
    // 0x801D0294: swc1        $f4, 0x88($s6)
    MEM_W(0X88, ctx->r22) = ctx->f4.u32l;
    // 0x801D0298: jal         0x8000DD58
    // 0x801D029C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_7;
    // 0x801D029C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
    // 0x801D02A0: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801D02A4: bltz        $v1, L_801D02B0
    if (SIGNED(ctx->r3) < 0) {
        // 0x801D02A8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801D02B0;
    }
    // 0x801D02A8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801D02AC: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
L_801D02B0:
    // 0x801D02B0: sll         $t7, $s0, 5
    ctx->r15 = S32(ctx->r16 << 5);
    // 0x801D02B4: sh          $t7, 0x8C($s6)
    MEM_H(0X8C, ctx->r22) = ctx->r15;
    // 0x801D02B8: jal         0x8000DD58
    // 0x801D02BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801D02BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x801D02C0: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801D02C4: bltz        $v1, L_801D02D0
    if (SIGNED(ctx->r3) < 0) {
        // 0x801D02C8: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_801D02D0;
    }
    // 0x801D02C8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801D02CC: addiu       $s0, $v1, 0x1
    ctx->r16 = ADD32(ctx->r3, 0X1);
L_801D02D0:
    // 0x801D02D0: sll         $t8, $s0, 5
    ctx->r24 = S32(ctx->r16 << 5);
    // 0x801D02D4: sh          $t8, 0x8E($s6)
    MEM_H(0X8E, ctx->r22) = ctx->r24;
L_801D02D8:
    // 0x801D02D8: lw          $s6, 0x0($s6)
    ctx->r22 = MEM_W(ctx->r22, 0X0);
    // 0x801D02DC: bnel        $s6, $zero, L_801D0028
    if (ctx->r22 != 0) {
        // 0x801D02E0: lwc1        $f4, 0xC($s6)
        ctx->f4.u32l = MEM_W(ctx->r22, 0XC);
            goto L_801D0028;
    }
    goto skip_1;
    // 0x801D02E0: lwc1        $f4, 0xC($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0XC);
    skip_1:
    // 0x801D02E4: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x801D02E8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801D02EC: lui         $s5, 0x801F
    ctx->r21 = S32(0X801F << 16);
    // 0x801D02F0: sb          $t9, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r25;
    // 0x801D02F4: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x801D02F8: addiu       $s5, $s5, -0x76CC
    ctx->r21 = ADD32(ctx->r21, -0X76CC);
    // 0x801D02FC: addiu       $s4, $zero, 0x7
    ctx->r20 = ADD32(0, 0X7);
    // 0x801D0300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D0308: jal         0x801DFBE0
    // 0x801D030C: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_9;
    // 0x801D030C: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    after_9:
    // 0x801D0310: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x801D0314: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x801D0318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D031C: jal         0x801E0494
    // 0x801D0320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E0494_64F2E4(rdram, ctx);
        goto after_10;
    // 0x801D0320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x801D0324: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D0328: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801D032C: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x801D0330: lbu         $s2, 0xAD($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0XAD);
L_801D0334:
    // 0x801D0334: lw          $s6, 0x18($s7)
    ctx->r22 = MEM_W(ctx->r23, 0X18);
L_801D0338:
    // 0x801D0338: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x801D033C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x801D0340: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x801D0344: jal         0x8001B918
    // 0x801D0348: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_11;
    // 0x801D0348: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    after_11:
    // 0x801D034C: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801D0350: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801D0354: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x801D0358: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D035C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D0360: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x801D0364: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D0368: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D036C: mul.d       $f4, $f18, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f24.d);
    // 0x801D0370: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    // 0x801D0374: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x801D0378: cvt.s.d     $f28, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f28.fl = CVT_S_D(ctx->f4.d);
    // 0x801D037C: jal         0x8000DD58
    // 0x801D0380: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_12;
    // 0x801D0380: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    after_12:
    // 0x801D0384: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x801D0388: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x801D038C: andi        $t0, $s2, 0xFF
    ctx->r8 = ctx->r18 & 0XFF;
    // 0x801D0390: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x801D0394: bne         $v1, $s1, L_801D03A4
    if (ctx->r3 != ctx->r17) {
        // 0x801D0398: or          $s2, $t0, $zero
        ctx->r18 = ctx->r8 | 0;
            goto L_801D03A4;
    }
    // 0x801D0398: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x801D039C: bne         $t0, $zero, L_801D03C0
    if (ctx->r8 != 0) {
        // 0x801D03A0: nop
    
            goto L_801D03C0;
    }
    // 0x801D03A0: nop

L_801D03A4:
    // 0x801D03A4: bne         $v1, $s1, L_801D03B0
    if (ctx->r3 != ctx->r17) {
        // 0x801D03A8: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_801D03B0;
    }
    // 0x801D03A8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801D03AC: xori        $s0, $v1, 0x1
    ctx->r16 = ctx->r3 ^ 0X1;
L_801D03B0:
    // 0x801D03B0: subu        $s2, $t4, $s0
    ctx->r18 = SUB32(ctx->r12, ctx->r16);
    // 0x801D03B4: andi        $t3, $s2, 0xFF
    ctx->r11 = ctx->r18 & 0XFF;
    // 0x801D03B8: andi        $s3, $s0, 0xFF
    ctx->r19 = ctx->r16 & 0XFF;
    // 0x801D03BC: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
L_801D03C0:
    // 0x801D03C0: beq         $s3, $zero, L_801D0414
    if (ctx->r19 == 0) {
        // 0x801D03C4: lw          $a0, 0xA8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA8);
            goto L_801D0414;
    }
    // 0x801D03C4: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x801D03C8: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801D03CC: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x801D03D0: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x801D03D4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801D03D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D03DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D03E0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801D03E4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801D03E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D03EC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x801D03F0: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x801D03F4: swc1        $f28, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f28.u32l;
    // 0x801D03F8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x801D03FC: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x801D0400: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801D0404: jal         0x801E0514
    // 0x801D0408: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    func_801E0514_64F364(rdram, ctx);
        goto after_13;
    // 0x801D0408: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    after_13:
    // 0x801D040C: b           L_801D0474
    // 0x801D0410: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
        goto L_801D0474;
    // 0x801D0410: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_801D0414:
    // 0x801D0414: mfc1        $a1, $f30
    ctx->r5 = (int32_t)ctx->f30.u32l;
    // 0x801D0418: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D041C: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D0420: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x801D0424: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x801D0428: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801D042C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x801D0430: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801D0434: jal         0x801DFC60
    // 0x801D0438: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_14;
    // 0x801D0438: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    after_14:
    // 0x801D043C: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x801D0440: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801D0444: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D0448: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x801D044C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0450: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D0454: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x801D0458: swc1        $f28, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f28.u32l;
    // 0x801D045C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801D0460: swc1        $f22, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f22.u32l;
    // 0x801D0464: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x801D0468: jal         0x801DF9EC
    // 0x801D046C: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_15;
    // 0x801D046C: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    after_15:
    // 0x801D0470: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_801D0474:
    // 0x801D0474: bne         $s4, $zero, L_801D0338
    if (ctx->r20 != 0) {
        // 0x801D0478: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_801D0338;
    }
    // 0x801D0478: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x801D047C: lbu         $v0, 0xAF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XAF);
    // 0x801D0480: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D0484: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x801D0488: bne         $v0, $at, L_801D049C
    if (ctx->r2 != ctx->r1) {
        // 0x801D048C: lw          $s7, 0x14C($sp)
        ctx->r23 = MEM_W(ctx->r29, 0X14C);
            goto L_801D049C;
    }
    // 0x801D048C: lw          $s7, 0x14C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14C);
    // 0x801D0490: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x801D0494: b           L_801D049C
    // 0x801D0498: lw          $s7, 0x150($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X150);
        goto L_801D049C;
    // 0x801D0498: lw          $s7, 0x150($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X150);
L_801D049C:
    // 0x801D049C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D04A0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801D04A4: bne         $t8, $zero, L_801D0334
    if (ctx->r24 != 0) {
        // 0x801D04A8: sb          $t8, 0xAF($sp)
        MEM_B(0XAF, ctx->r29) = ctx->r24;
            goto L_801D0334;
    }
    // 0x801D04A8: sb          $t8, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r24;
    // 0x801D04AC: sb          $s2, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r18;
    // 0x801D04B0: jal         0x80038B98
    // 0x801D04B4: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    func_80038B98_39798(rdram, ctx);
        goto after_16;
    // 0x801D04B4: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    after_16:
    // 0x801D04B8: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x801D04BC: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801D04C0: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801D04C4: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801D04C8: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801D04CC: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801D04D0: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801D04D4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x801D04D8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x801D04DC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x801D04E0: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x801D04E4: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x801D04E8: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x801D04EC: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x801D04F0: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x801D04F4: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x801D04F8: jr          $ra
    // 0x801D04FC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    TRACE_RETURN()
    return;
    // 0x801D04FC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void func_801D146C_6402BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D146C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D1470: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D1474: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D1478: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D147C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801D1480: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1484: jal         0x801CCE64
    // 0x801D1488: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D1488: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D148C: lw          $v0, 0xB4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB4);
    // 0x801D1490: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1494: ldc1        $f6, -0x1050($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1050);
    // 0x801D1498: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D149C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D14A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D14A4: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D14A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D14AC: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801D14B0: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x801D14B4: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801D14B8: c.le.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d <= ctx->f0.d;
    // 0x801D14BC: nop

    // 0x801D14C0: bc1fl       L_801D14E4
    if (!c1cs) {
        // 0x801D14C4: lw          $a0, 0xC8($s0)
        ctx->r4 = MEM_W(ctx->r16, 0XC8);
            goto L_801D14E4;
    }
    goto skip_0;
    // 0x801D14C4: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    skip_0:
    // 0x801D14C8: ldc1        $f8, -0x1048($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1048);
    // 0x801D14CC: sub.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d - ctx->f8.d;
    // 0x801D14D0: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D14D4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D14D8: nop

    // 0x801D14DC: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x801D14E0: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
L_801D14E4:
    // 0x801D14E4: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x801D14E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D14EC: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x801D14F0: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D14F4: sw          $t7, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r15;
    // 0x801D14F8: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x801D14FC: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x801D1500: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D1504: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801D1508: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D150C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D1510: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1514: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801D1518: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801D151C: jal         0x80033898
    // 0x801D1520: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D1520: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x801D1524: jal         0x8001D394
    // 0x801D1528: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D1528: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x801D152C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801D1530: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801D1534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1538: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D153C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D1540: jal         0x8001DB04
    // 0x801D1544: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801D1544: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x801D1548: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D154C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D1550: lwc1        $f4, 0x60($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D1554: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x801D1558: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x801D155C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D1560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1564: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D1568: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801D156C: nop

    // 0x801D1570: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801D1574: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801D1578: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801D157C: sw          $v0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r2;
    // 0x801D1580: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D1584: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801D1588: bgtz        $v0, L_801D1594
    if (SIGNED(ctx->r2) > 0) {
        // 0x801D158C: swc1        $f18, 0x60($s0)
        MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
            goto L_801D1594;
    }
    // 0x801D158C: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    // 0x801D1590: sb          $t2, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r10;
L_801D1594:
    // 0x801D1594: jal         0x801CC350
    // 0x801D1598: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_801CC350_63B1A0(rdram, ctx);
        goto after_4;
    // 0x801D1598: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_4:
    // 0x801D159C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D15A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D15A4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801D15A8: jr          $ra
    // 0x801D15AC: nop

    TRACE_RETURN()
    return;
    // 0x801D15AC: nop

;}
RECOMP_FUNC void func_801CB9F4_63A844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB9F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB9FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801CBA00: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801CBA04: lh          $v0, 0x6($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X6);
    // 0x801CBA08: beq         $v0, $zero, L_801CBA28
    if (ctx->r2 == 0) {
        // 0x801CBA0C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_801CBA28;
    }
    // 0x801CBA0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801CBA10: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801CBA14: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CBA18: beq         $t7, $zero, L_801CBA28
    if (ctx->r15 == 0) {
        // 0x801CBA1C: sh          $t7, 0x6($v1)
        MEM_H(0X6, ctx->r3) = ctx->r15;
            goto L_801CBA28;
    }
    // 0x801CBA1C: sh          $t7, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r15;
    // 0x801CBA20: jal         0x80037548
    // 0x801CBA24: nop

    func_80037548_38148(rdram, ctx);
        goto after_0;
    // 0x801CBA24: nop

    after_0:
L_801CBA28:
    // 0x801CBA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBA30: jr          $ra
    // 0x801CBA34: nop

    TRACE_RETURN()
    return;
    // 0x801CBA34: nop

;}
RECOMP_FUNC void func_801D1A9C_6408EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1A9C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x801D1AA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D1AA4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x801D1AA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x801D1AAC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801D1AB0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801D1AB4: lw          $s2, 0xE8($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XE8);
    // 0x801D1AB8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x801D1ABC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D1AC0: lbu         $v1, 0xC6($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XC6);
    // 0x801D1AC4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801D1AC8: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x801D1ACC: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x801D1AD0: andi        $v1, $t7, 0xFF
    ctx->r3 = ctx->r15 & 0XFF;
    // 0x801D1AD4: sb          $v1, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r3;
    // 0x801D1AD8: lb          $v0, 0xC5($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC5);
    // 0x801D1ADC: bltz        $v0, L_801D1C4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D1AE0: nop
    
            goto L_801D1C4C;
    }
    // 0x801D1AE0: nop

    // 0x801D1AE4: lb          $t9, 0xD8($a0)
    ctx->r25 = MEM_B(ctx->r4, 0XD8);
    // 0x801D1AE8: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801D1AEC: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801D1AF0: beq         $v0, $t9, L_801D1B04
    if (ctx->r2 == ctx->r25) {
        // 0x801D1AF4: addu        $t1, $t1, $t0
        ctx->r9 = ADD32(ctx->r9, ctx->r8);
            goto L_801D1B04;
    }
    // 0x801D1AF4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D1AF8: sb          $v0, 0xD8($a0)
    MEM_B(0XD8, ctx->r4) = ctx->r2;
    // 0x801D1AFC: lw          $t1, -0x76E4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X76E4);
    // 0x801D1B00: sw          $t1, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r9;
L_801D1B04:
    // 0x801D1B04: lwc1        $f4, 0xC0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC0);
    // 0x801D1B08: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D1B0C: addiu       $a2, $a2, -0x7BC8
    ctx->r6 = ADD32(ctx->r6, -0X7BC8);
    // 0x801D1B10: swc1        $f4, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f4.u32l;
    // 0x801D1B14: lwc1        $f6, 0xC0($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XC0);
    // 0x801D1B18: lw          $v0, 0xE4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE4);
    // 0x801D1B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1B20: swc1        $f6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f6.u32l;
    // 0x801D1B24: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x801D1B28: jal         0x8001B918
    // 0x801D1B2C: sb          $v1, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r3;
    func_8001B918_1C518(rdram, ctx);
        goto after_0;
    // 0x801D1B2C: sb          $v1, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D1B30: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D1B34: lw          $s0, 0xEC($s3)
    ctx->r16 = MEM_W(ctx->r19, 0XEC);
    // 0x801D1B38: addiu       $a2, $a2, -0x7320
    ctx->r6 = ADD32(ctx->r6, -0X7320);
    // 0x801D1B3C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801D1B40: jal         0x8001B918
    // 0x801D1B44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001B918_1C518(rdram, ctx);
        goto after_1;
    // 0x801D1B44: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x801D1B48: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D1B4C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D1B50: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D1B54: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1B58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D1B5C: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D1B60: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801D1B64: addiu       $a2, $a2, -0x76B8
    ctx->r6 = ADD32(ctx->r6, -0X76B8);
    // 0x801D1B68: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801D1B6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D1B70: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D1B74: swc1        $f18, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->f18.u32l;
    // 0x801D1B78: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D1B7C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D1B80: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D1B84: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1B88: swc1        $f10, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f10.u32l;
    // 0x801D1B8C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D1B90: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D1B94: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D1B98: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D1B9C: jal         0x8001B918
    // 0x801D1BA0: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
    func_8001B918_1C518(rdram, ctx);
        goto after_2;
    // 0x801D1BA0: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x801D1BA4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D1BA8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D1BAC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D1BB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1BB4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D1BB8: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801D1BBC: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801D1BC0: addiu       $a2, $a2, -0x7618
    ctx->r6 = ADD32(ctx->r6, -0X7618);
    // 0x801D1BC4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x801D1BC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801D1BCC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D1BD0: swc1        $f18, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f18.u32l;
    // 0x801D1BD4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D1BD8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D1BDC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D1BE0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1BE4: swc1        $f10, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f10.u32l;
    // 0x801D1BE8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D1BEC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D1BF0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D1BF4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D1BF8: jal         0x8001B918
    // 0x801D1BFC: swc1        $f6, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f6.u32l;
    func_8001B918_1C518(rdram, ctx);
        goto after_3;
    // 0x801D1BFC: swc1        $f6, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x801D1C00: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D1C04: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D1C08: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D1C0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1C10: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D1C14: lbu         $v1, 0xC0($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0XC0);
    // 0x801D1C18: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801D1C1C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D1C20: swc1        $f18, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f18.u32l;
    // 0x801D1C24: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D1C28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D1C2C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D1C30: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D1C34: swc1        $f10, 0x108($s0)
    MEM_W(0X108, ctx->r16) = ctx->f10.u32l;
    // 0x801D1C38: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D1C3C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D1C40: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D1C44: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D1C48: swc1        $f6, 0x10C($s0)
    MEM_W(0X10C, ctx->r16) = ctx->f6.u32l;
L_801D1C4C:
    // 0x801D1C4C: bne         $v1, $zero, L_801D1C5C
    if (ctx->r3 != 0) {
        // 0x801D1C50: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_801D1C5C;
    }
    // 0x801D1C50: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D1C54: jal         0x801CD780
    // 0x801D1C58: lwc1        $f12, 0x64($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D1C58: lwc1        $f12, 0x64($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X64);
    after_4:
L_801D1C5C:
    // 0x801D1C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D1C60: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801D1C64: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801D1C68: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1C6C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x801D1C70: jr          $ra
    // 0x801D1C74: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x801D1C74: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_801E4AF8_653948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4AF8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x801E4AFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E4B00: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E4B04: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E4B08: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E4B0C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E4B10: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E4B14: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E4B18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E4B1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4B20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4B24: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E4B28: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4B2C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801E4B30: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x801E4B34: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x801E4B38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4B3C: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x801E4B40: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E4B44: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4B48: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E4B4C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4B50: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x801E4B54: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E4B58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4B5C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4B60: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4B64: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x801E4B68: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E4B6C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4B70: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4B74: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4B78: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801E4B7C: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E4B80: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E4B84: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E4B88: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4B8C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801E4B90: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E4B94: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4B98: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4B9C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E4BA0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E4BA4: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E4BA8: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E4BAC: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x801E4BB0: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E4BB4: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x801E4BB8: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E4BBC: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E4BC0: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
    // 0x801E4BC4: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E4BC8: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801E4BCC: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801E4BD0: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E4BD4: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E4BD8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x801E4BDC: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E4BE0: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E4BE4: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E4BE8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E4BEC: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801E4BF0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E4BF4: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E4BF8: c.eq.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl == ctx->f8.fl;
    // 0x801E4BFC: nop

    // 0x801E4C00: bc1tl       L_801E4C54
    if (c1cs) {
        // 0x801E4C04: lw          $v0, 0x18($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X18);
            goto L_801E4C54;
    }
    goto skip_0;
    // 0x801E4C04: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    skip_0:
    // 0x801E4C08: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E4C0C: jal         0x80033898
    // 0x801E4C10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E4C10: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E4C14: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E4C18: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E4C1C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E4C20: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E4C24: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E4C28: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E4C2C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E4C30: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E4C34: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x801E4C38: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E4C3C: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E4C40: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E4C44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E4C48: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x801E4C4C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801E4C50: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
L_801E4C54:
    // 0x801E4C54: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E4C58: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E4C5C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E4C60: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801E4C64: mul.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801E4C68: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4C6C: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x801E4C70: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E4C74: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x801E4C78: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E4C7C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801E4C80: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E4C84: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4C88: mul.d       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4C8C: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4C90: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801E4C94: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E4C98: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E4C9C: mul.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4CA0: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4CA4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801E4CA8: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E4CAC: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801E4CB0: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E4CB4: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E4CB8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x801E4CBC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E4CC0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4CC4: mul.d       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E4CC8: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4CCC: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x801E4CD0: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E4CD4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x801E4CD8: mul.d       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4CDC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E4CE0: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4CE4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x801E4CE8: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801E4CEC: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x801E4CF0: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801E4CF4: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801E4CF8: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x801E4CFC: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801E4D00: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801E4D04: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x801E4D08: lwc1        $f8, 0x84($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X84);
    // 0x801E4D0C: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801E4D10: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801E4D14: lwc1        $f16, 0x88($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X88);
    // 0x801E4D18: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E4D1C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x801E4D20: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E4D24: lwc1        $f18, 0x8C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801E4D28: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E4D2C: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x801E4D30: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E4D34: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E4D38: c.eq.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl == ctx->f18.fl;
    // 0x801E4D3C: nop

    // 0x801E4D40: bc1tl       L_801E4D90
    if (c1cs) {
        // 0x801E4D44: lwc1        $f8, 0x78($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
            goto L_801E4D90;
    }
    goto skip_1;
    // 0x801E4D44: lwc1        $f8, 0x78($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
    skip_1:
    // 0x801E4D48: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E4D4C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801E4D50: jal         0x80033898
    // 0x801E4D54: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E4D54: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801E4D58: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E4D5C: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E4D60: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E4D64: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E4D68: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E4D6C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E4D70: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E4D74: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E4D78: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801E4D7C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E4D80: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E4D84: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x801E4D88: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x801E4D8C: lwc1        $f8, 0x78($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X78);
L_801E4D90:
    // 0x801E4D90: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E4D94: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x801E4D98: addiu       $t7, $sp, 0x68
    ctx->r15 = ADD32(ctx->r29, 0X68);
    // 0x801E4D9C: mul.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E4DA0: addiu       $t8, $sp, 0x64
    ctx->r24 = ADD32(ctx->r29, 0X64);
    // 0x801E4DA4: addiu       $t9, $sp, 0x60
    ctx->r25 = ADD32(ctx->r29, 0X60);
    // 0x801E4DA8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E4DAC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E4DB0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E4DB4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E4DB8: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x801E4DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4DC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E4DC4: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x801E4DC8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801E4DCC: jal         0x801E4DE8
    // 0x801E4DD0: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    func_801E4DE8_653C38(rdram, ctx);
        goto after_2;
    // 0x801E4DD0: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x801E4DD4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E4DD8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E4DDC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E4DE0: jr          $ra
    // 0x801E4DE4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x801E4DE4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_801DD07C_64BECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD07C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801DD080: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x801DD084: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x801DD088: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x801DD08C: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x801DD090: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x801DD094: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x801DD098: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x801DD09C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x801DD0A0: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x801DD0A4: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x801DD0A8: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x801DD0AC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801DD0B0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DD0B4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DD0B8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DD0BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD0C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DD0C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DD0C8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DD0CC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DD0D0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x801DD0D4: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x801DD0D8: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801DD0DC: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    // 0x801DD0E0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DD0E4: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801DD0E8: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DD0EC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DD0F0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DD0F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DD0F8: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801DD0FC: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DD100: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DD104: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DD108: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DD10C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801DD110: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DD114: ldc1        $f18, -0xD30($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XD30);
    // 0x801DD118: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801DD11C: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DD120: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801DD124: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x801DD128: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DD12C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801DD130: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DD134: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x801DD138: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DD13C: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DD140: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DD144: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801DD148: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x801DD14C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DD150: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DD154: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DD158: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x801DD15C: jal         0x80033898
    // 0x801DD160: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DD160: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DD164: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD168: lwc1        $f18, 0x5C($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DD16C: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD170: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x801DD174: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DD178: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD17C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD180: addiu       $t1, $sp, 0xD4
    ctx->r9 = ADD32(ctx->r29, 0XD4);
    // 0x801DD184: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DD188: lwc1        $f4, 0x60($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DD18C: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x801DD190: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD194: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DD198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DD19C: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DD1A0: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD1A4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DD1A8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DD1AC: lwc1        $f18, 0x64($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DD1B0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DD1B4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DD1B8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD1BC: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DD1C0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DD1C4: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DD1C8: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x801DD1CC: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x801DD1D0: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    // 0x801DD1D4: jal         0x80033898
    // 0x801DD1D8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DD1D8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DD1DC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DD1E0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DD1E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DD1E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DD1EC: addiu       $s1, $zero, 0x300
    ctx->r17 = ADD32(0, 0X300);
    // 0x801DD1F0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x801DD1F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DD1F8: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_801DD1FC:
    // 0x801DD1FC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD200: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD204: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD208: subu        $a3, $s3, $s0
    ctx->r7 = SUB32(ctx->r19, ctx->r16);
    // 0x801DD20C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x801DD210: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801DD214: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x801DD218: addiu       $t5, $zero, 0x39
    ctx->r13 = ADD32(0, 0X39);
    // 0x801DD21C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x801DD220: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x801DD224: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x801DD228: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x801DD22C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DD230: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801DD234: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DD238: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DD23C: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x801DD240: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DD244: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DD248: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801DD24C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DD250: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DD254: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801DD258: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801DD25C: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DD260: jal         0x801CDA88
    // 0x801DD264: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_2;
    // 0x801DD264: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801DD268: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD26C: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DD270: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD274: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DD278: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DD27C: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DD280: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD284: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DD288: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DD28C: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    // 0x801DD290: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DD294: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DD298: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x801DD29C: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x801DD2A0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DD2A4: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801DD2A8: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x801DD2AC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x801DD2B0: bne         $t0, $zero, L_801DD1FC
    if (ctx->r8 != 0) {
        // 0x801DD2B4: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_801DD1FC;
    }
    // 0x801DD2B4: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x801DD2B8: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801DD2BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD2C0: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801DD2C4: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801DD2C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DD2CC: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DD2D0: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801DD2D4: addiu       $t1, $sp, 0xEC
    ctx->r9 = ADD32(ctx->r29, 0XEC);
    // 0x801DD2D8: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DD2DC: addiu       $t2, $sp, 0xF0
    ctx->r10 = ADD32(ctx->r29, 0XF0);
    // 0x801DD2E0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DD2E4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DD2E8: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DD2EC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DD2F0: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD2F4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DD2F8: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD2FC: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD300: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801DD304: jal         0x80033898
    // 0x801DD308: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801DD308: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    after_3:
    // 0x801DD30C: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD310: lwc1        $f8, 0x5C($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X5C);
    // 0x801DD314: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD318: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD31C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DD320: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD324: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DD328: addiu       $t3, $sp, 0xE0
    ctx->r11 = ADD32(ctx->r29, 0XE0);
    // 0x801DD32C: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x801DD330: lwc1        $f16, 0x60($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X60);
    // 0x801DD334: addiu       $t4, $sp, 0xE4
    ctx->r12 = ADD32(ctx->r29, 0XE4);
    // 0x801DD338: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD33C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DD340: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD344: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD348: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD34C: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801DD350: lwc1        $f8, 0x64($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X64);
    // 0x801DD354: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DD358: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DD35C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DD360: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801DD364: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801DD368: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801DD36C: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x801DD370: jal         0x80033898
    // 0x801DD374: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801DD374: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801DD378: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD37C: lui         $at, 0x4252
    ctx->r1 = S32(0X4252 << 16);
    // 0x801DD380: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DD384: addiu       $t5, $sp, 0xD4
    ctx->r13 = ADD32(ctx->r29, 0XD4);
    // 0x801DD388: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x801DD38C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801DD390: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801DD394: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD398: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD39C: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD3A0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801DD3A4: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DD3A8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x801DD3AC: jal         0x80033898
    // 0x801DD3B0: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801DD3B0: swc1        $f16, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x801DD3B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD3B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DD3BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DD3C0: addiu       $t7, $sp, 0xC8
    ctx->r15 = ADD32(ctx->r29, 0XC8);
    // 0x801DD3C4: addiu       $t8, $sp, 0xCC
    ctx->r24 = ADD32(ctx->r29, 0XCC);
    // 0x801DD3C8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801DD3CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801DD3D0: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801DD3D4: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801DD3D8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801DD3DC: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801DD3E0: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801DD3E4: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DD3E8: jal         0x80033898
    // 0x801DD3EC: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801DD3EC: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801DD3F0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x801DD3F4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x801DD3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DD3FC: jal         0x801DFBE0
    // 0x801DD400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_7;
    // 0x801DD400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801DD404: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DD408: ldc1        $f30, -0xD28($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XD28);
    // 0x801DD40C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DD410: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DD414: ldc1        $f28, -0xD20($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XD20);
    // 0x801DD418: addiu       $s1, $zero, -0x2
    ctx->r17 = ADD32(0, -0X2);
L_801DD41C:
    // 0x801DD41C: jal         0x8000DD58
    // 0x801DD420: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801DD420: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x801DD424: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801DD428: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DD42C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DD430: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801DD434: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801DD438: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801DD43C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DD440: add.d       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = ctx->f18.d + ctx->f30.d;
    // 0x801DD444: jal         0x8000DD58
    // 0x801DD448: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801DD448: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    after_9:
    // 0x801DD44C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801DD450: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DD454: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DD458: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DD45C: mul.d       $f16, $f6, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x801DD460: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DD464: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DD468: add.d       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f10.d + ctx->f30.d;
    // 0x801DD46C: jal         0x8000DD58
    // 0x801DD470: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801DD470: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    after_10:
    // 0x801DD474: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DD478: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DD47C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DD480: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DD484: mul.d       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f28.d);
    // 0x801DD488: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801DD48C: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DD490: add.d       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f4.d = ctx->f8.d + ctx->f30.d;
    // 0x801DD494: jal         0x8000DD58
    // 0x801DD498: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801DD498: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    after_11:
    // 0x801DD49C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x801DD4A0: and         $t0, $t9, $s1
    ctx->r8 = ctx->r25 & ctx->r17;
    // 0x801DD4A4: addiu       $t1, $t0, -0xA
    ctx->r9 = ADD32(ctx->r8, -0XA);
    // 0x801DD4A8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x801DD4AC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DD4B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DD4B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DD4B8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DD4BC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DD4C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DD4C4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DD4C8: ldc1        $f16, -0xD18($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XD18);
    // 0x801DD4CC: add.s       $f20, $f6, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DD4D0: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD4D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD4D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DD4DC: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801DD4E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DD4E4: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x801DD4E8: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DD4EC: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DD4F0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DD4F4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DD4F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DD4FC: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x801DD500: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DD504: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x801DD508: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801DD50C: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x801DD510: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DD514: lwc1        $f18, 0xC4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DD518: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DD51C: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801DD520: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DD524: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DD528: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD52C: mul.s       $f18, $f6, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801DD530: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DD534: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DD538: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DD53C: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x801DD540: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801DD544: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DD548: mul.s       $f18, $f4, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801DD54C: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801DD550: lwc1        $f16, 0xE4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DD554: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD558: mul.s       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801DD55C: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DD560: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DD564: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DD568: mul.s       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DD56C: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DD570: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DD574: mul.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x801DD578: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DD57C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DD580: jal         0x801DFC60
    // 0x801DD584: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_12;
    // 0x801DD584: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801DD588: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DD58C: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DD590: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801DD594: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DD598: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DD59C: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DD5A0: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801DD5A4: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DD5A8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DD5AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x801DD5B0: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DD5B4: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x801DD5B8: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x801DD5BC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x801DD5C0: bne         $t2, $zero, L_801DD41C
    if (ctx->r10 != 0) {
        // 0x801DD5C4: swc1        $f8, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
            goto L_801DD41C;
    }
    // 0x801DD5C4: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801DD5C8: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DD5CC: lhu         $t3, 0xE2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DD5D0: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x801DD5D4: bnel        $t4, $zero, L_801DD62C
    if (ctx->r12 != 0) {
        // 0x801DD5D8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_801DD62C;
    }
    goto skip_0;
    // 0x801DD5D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    skip_0:
    // 0x801DD5DC: lhu         $t5, 0xE6($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DD5E0: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DD5E4: bne         $t5, $at, L_801DD604
    if (ctx->r13 != ctx->r1) {
        // 0x801DD5E8: nop
    
            goto L_801DD604;
    }
    // 0x801DD5E8: nop

    // 0x801DD5EC: jal         0x80038B98
    // 0x801DD5F0: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_13;
    // 0x801DD5F0: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_13:
    // 0x801DD5F4: lw          $t7, 0xEC($s4)
    ctx->r15 = MEM_W(ctx->r20, 0XEC);
    // 0x801DD5F8: addiu       $t6, $zero, 0x29B
    ctx->r14 = ADD32(0, 0X29B);
    // 0x801DD5FC: b           L_801DD618
    // 0x801DD600: sh          $t6, 0xE6($t7)
    MEM_H(0XE6, ctx->r15) = ctx->r14;
        goto L_801DD618;
    // 0x801DD600: sh          $t6, 0xE6($t7)
    MEM_H(0XE6, ctx->r15) = ctx->r14;
L_801DD604:
    // 0x801DD604: jal         0x80038B98
    // 0x801DD608: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_14;
    // 0x801DD608: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_14:
    // 0x801DD60C: lw          $t9, 0xEC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XEC);
    // 0x801DD610: addiu       $t8, $zero, 0x29A
    ctx->r24 = ADD32(0, 0X29A);
    // 0x801DD614: sh          $t8, 0xE6($t9)
    MEM_H(0XE6, ctx->r25) = ctx->r24;
L_801DD618:
    // 0x801DD618: lw          $v0, 0xEC($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XEC);
    // 0x801DD61C: lhu         $t0, 0xE2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DD620: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x801DD624: sh          $t1, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r9;
    // 0x801DD628: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_801DD62C:
    // 0x801DD62C: jal         0x801E8850
    // 0x801DD630: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_15;
    // 0x801DD630: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x801DD634: jal         0x801DBEB0
    // 0x801DD638: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_16;
    // 0x801DD638: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_16:
    // 0x801DD63C: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x801DD640: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801DD644: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x801DD648: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x801DD64C: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x801DD650: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x801DD654: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x801DD658: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x801DD65C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x801DD660: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x801DD664: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x801DD668: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x801DD66C: jr          $ra
    // 0x801DD670: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801DD670: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801CD504_63C354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD504: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801CD508: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD50C: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801CD510: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD514: lwc1        $f8, -0x11F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X11F0);
    // 0x801CD518: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CD51C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD520: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801CD524: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD528: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801CD52C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CD530: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801CD534: nop

    // 0x801CD538: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CD53C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801CD540: nop

    // 0x801CD544: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801CD548: beql        $t7, $zero, L_801CD598
    if (ctx->r15 == 0) {
        // 0x801CD54C: mfc1        $t7, $f16
        ctx->r15 = (int32_t)ctx->f16.u32l;
            goto L_801CD598;
    }
    goto skip_0;
    // 0x801CD54C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801CD550: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD554: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CD558: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801CD55C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801CD560: nop

    // 0x801CD564: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801CD568: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801CD56C: nop

    // 0x801CD570: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801CD574: bne         $t7, $zero, L_801CD58C
    if (ctx->r15 != 0) {
        // 0x801CD578: nop
    
            goto L_801CD58C;
    }
    // 0x801CD578: nop

    // 0x801CD57C: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801CD580: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD584: b           L_801CD5A4
    // 0x801CD588: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801CD5A4;
    // 0x801CD588: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801CD58C:
    // 0x801CD58C: b           L_801CD5A4
    // 0x801CD590: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801CD5A4;
    // 0x801CD590: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801CD594: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
L_801CD598:
    // 0x801CD598: nop

    // 0x801CD59C: bltz        $t7, L_801CD58C
    if (SIGNED(ctx->r15) < 0) {
        // 0x801CD5A0: nop
    
            goto L_801CD58C;
    }
    // 0x801CD5A0: nop

L_801CD5A4:
    // 0x801CD5A4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x801CD5A8: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x801CD5AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CD5B0: bne         $at, $zero, L_801CD5C0
    if (ctx->r1 != 0) {
        // 0x801CD5B4: nop
    
            goto L_801CD5C0;
    }
    // 0x801CD5B4: nop

    // 0x801CD5B8: jr          $ra
    // 0x801CD5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801CD5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801CD5C0:
    // 0x801CD5C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CD5C4: lwc1        $f4, -0x11EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X11EC);
    // 0x801CD5C8: lwc1        $f18, 0x60($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CD5CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CD5D0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x801CD5D4: nop

    // 0x801CD5D8: bc1fl       L_801CD5EC
    if (!c1cs) {
        // 0x801CD5DC: lwc1        $f6, 0x64($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
            goto L_801CD5EC;
    }
    goto skip_1;
    // 0x801CD5DC: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    skip_1:
    // 0x801CD5E0: jr          $ra
    // 0x801CD5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801CD5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801CD5E8: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
L_801CD5EC:
    // 0x801CD5EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CD5F0: lw          $a2, 0x31C($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X31C);
    // 0x801CD5F4: lui         $at, 0xFFC2
    ctx->r1 = S32(0XFFC2 << 16);
    // 0x801CD5F8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801CD5FC: ori         $at, $at, 0xF700
    ctx->r1 = ctx->r1 | 0XF700;
    // 0x801CD600: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801CD604: lui         $at, 0x3D
    ctx->r1 = S32(0X3D << 16);
    // 0x801CD608: ori         $at, $at, 0x901
    ctx->r1 = ctx->r1 | 0X901;
    // 0x801CD60C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801CD610: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801CD614: nop

    // 0x801CD618: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x801CD61C: sltu        $v0, $a1, $at
    ctx->r2 = ctx->r5 < ctx->r1 ? 1 : 0;
    // 0x801CD620: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801CD624: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x801CD628: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x801CD62C: jr          $ra
    // 0x801CD630: nop

    TRACE_RETURN()
    return;
    // 0x801CD630: nop

;}
RECOMP_FUNC void func_801E0700_64F550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0708: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801E070C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801E0710: jal         0x801E0494
    // 0x801E0714: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_801E0494_64F2E4(rdram, ctx);
        goto after_0;
    // 0x801E0714: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x801E0718: beq         $v0, $zero, L_801E072C
    if (ctx->r2 == 0) {
        // 0x801E071C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E072C;
    }
    // 0x801E071C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E0720: lb          $t7, 0x78($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X78);
    // 0x801E0724: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801E0728: sb          $t8, 0x78($v0)
    MEM_B(0X78, ctx->r2) = ctx->r24;
L_801E072C:
    // 0x801E072C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E0730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E0734: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x801E0738: jr          $ra
    // 0x801E073C: nop

    TRACE_RETURN()
    return;
    // 0x801E073C: nop

;}
RECOMP_FUNC void func_801D7484_6462D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7484: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D7488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D748C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D7490: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D7494: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D7498: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D749C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D74A0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D74A4: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D74A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D74AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D74B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D74B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D74B8: add.s       $f0, $f16, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D74BC: swc1        $f0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f0.u32l;
    // 0x801D74C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D74C4: jal         0x801CD96C
    // 0x801D74C8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D74C8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D74CC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D74D0: lwc1        $f18, -0xE48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0XE48);
    // 0x801D74D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D74D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D74DC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x801D74E0: nop

    // 0x801D74E4: bc1f        L_801D7580
    if (!c1cs) {
        // 0x801D74E8: nop
    
            goto L_801D7580;
    }
    // 0x801D74E8: nop

    // 0x801D74EC: jal         0x801CD96C
    // 0x801D74F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_1;
    // 0x801D74F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D74F4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D74F8: ldc1        $f6, -0xE40($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XE40);
    // 0x801D74FC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D7500: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801D7504: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801D7508: slti        $t8, $t7, 0x0
    ctx->r24 = SIGNED(ctx->r15) < 0X0 ? 1 : 0;
    // 0x801D750C: bc1fl       L_801D758C
    if (!c1cs) {
        // 0x801D7510: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D758C;
    }
    goto skip_0;
    // 0x801D7510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D7514: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D7518: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D751C: or          $t6, $zero, $zero
    ctx->r14 = 0 | 0;
    // 0x801D7520: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801D7524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7528: lwc1        $f0, 0x64($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801D752C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801D7530: nop

    // 0x801D7534: bc1f        L_801D7540
    if (!c1cs) {
        // 0x801D7538: nop
    
            goto L_801D7540;
    }
    // 0x801D7538: nop

    // 0x801D753C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_801D7540:
    // 0x801D7540: bnel        $t6, $t8, L_801D758C
    if (ctx->r14 != ctx->r24) {
        // 0x801D7544: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D758C;
    }
    goto skip_1;
    // 0x801D7544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D7548: jal         0x801CD96C
    // 0x801D754C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_2;
    // 0x801D754C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801D7550: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7554: ldc1        $f10, -0xE38($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XE38);
    // 0x801D7558: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x801D755C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7560: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x801D7564: nop

    // 0x801D7568: bc1fl       L_801D758C
    if (!c1cs) {
        // 0x801D756C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D758C;
    }
    goto skip_2;
    // 0x801D756C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801D7570: jal         0x801D7778
    // 0x801D7574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801D7778_6465C8(rdram, ctx);
        goto after_3;
    // 0x801D7574: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801D7578: b           L_801D758C
    // 0x801D757C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D758C;
    // 0x801D757C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7580:
    // 0x801D7580: jal         0x801D7778
    // 0x801D7584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D7778_6465C8(rdram, ctx);
        goto after_4;
    // 0x801D7584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x801D7588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D758C:
    // 0x801D758C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D7590: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D7594: jr          $ra
    // 0x801D7598: nop

    TRACE_RETURN()
    return;
    // 0x801D7598: nop

;}
RECOMP_FUNC void func_801E5554_6543A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5554: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801E5558: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E555C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801E5560: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801E5564: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E5568: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E556C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E5570: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E5574: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E5578: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E557C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E5580: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E5584: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E5588: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801E558C: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x801E5590: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x801E5594: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5598: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x801E559C: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E55A0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E55A4: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E55A8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E55AC: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x801E55B0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E55B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E55B8: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E55BC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E55C0: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x801E55C4: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E55C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E55CC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E55D0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E55D4: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801E55D8: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E55DC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E55E0: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E55E4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E55E8: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801E55EC: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E55F0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E55F4: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E55F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E55FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E5600: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E5604: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5608: sh          $t6, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r14;
    // 0x801E560C: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E5610: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    // 0x801E5614: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5618: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E561C: sh          $t8, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r24;
    // 0x801E5620: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E5624: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801E5628: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801E562C: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E5630: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E5634: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x801E5638: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E563C: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E5640: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E5644: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E5648: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801E564C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E5650: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E5654: c.eq.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl == ctx->f8.fl;
    // 0x801E5658: nop

    // 0x801E565C: bc1tl       L_801E56B0
    if (c1cs) {
        // 0x801E5660: lwc1        $f4, 0x44($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E56B0;
    }
    goto skip_0;
    // 0x801E5660: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x801E5664: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E5668: jal         0x80033898
    // 0x801E566C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E566C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E5670: lwc1        $f16, 0x8C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E5674: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E5678: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E567C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E5680: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E5684: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E5688: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801E568C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E5690: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5694: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E5698: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E569C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E56A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E56A4: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x801E56A8: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x801E56AC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
L_801E56B0:
    // 0x801E56B0: lwc1        $f10, 0x78($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E56B4: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801E56B8: addiu       $t4, $sp, 0x54
    ctx->r12 = ADD32(ctx->r29, 0X54);
    // 0x801E56BC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801E56C0: addiu       $t5, $sp, 0x58
    ctx->r13 = ADD32(ctx->r29, 0X58);
    // 0x801E56C4: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801E56C8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801E56CC: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E56D0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E56D4: mul.d       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E56D8: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801E56DC: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x801E56E0: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E56E4: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801E56E8: mul.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E56EC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E56F0: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x801E56F4: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E56F8: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x801E56FC: mul.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E5700: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801E5704: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5708: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E570C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5710: mul.d       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E5714: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x801E5718: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801E571C: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E5720: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801E5724: mul.d       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E5728: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E572C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801E5730: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E5734: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x801E5738: mul.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E573C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E5740: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801E5744: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5748: lhu         $t1, 0x14($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14);
    // 0x801E574C: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x801E5750: lhu         $t2, 0x16($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X16);
    // 0x801E5754: andi        $a0, $t1, 0xFFFF
    ctx->r4 = ctx->r9 & 0XFFFF;
    // 0x801E5758: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x801E575C: lhu         $t3, 0x18($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5760: andi        $a1, $t2, 0xFFFF
    ctx->r5 = ctx->r10 & 0XFFFF;
    // 0x801E5764: sh          $t3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r11;
    // 0x801E5768: lwc1        $f16, 0x84($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801E576C: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x801E5770: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x801E5774: lwc1        $f18, 0x88($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801E5778: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E577C: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x801E5780: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E5784: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801E5788: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E578C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x801E5790: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E5794: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x801E5798: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801E579C: nop

    // 0x801E57A0: bc1tl       L_801E57E8
    if (c1cs) {
        // 0x801E57A4: lwc1        $f16, 0x44($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E57E8;
    }
    goto skip_1;
    // 0x801E57A4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x801E57A8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E57AC: jal         0x80033898
    // 0x801E57B0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E57B0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x801E57B4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E57B8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801E57BC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E57C0: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E57C4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E57C8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E57CC: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E57D0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801E57D4: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x801E57D8: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801E57DC: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x801E57E0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x801E57E4: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
L_801E57E8:
    // 0x801E57E8: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E57EC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E57F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E57F4: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801E57F8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E57FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E5800: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E5804: addiu       $a2, $sp, 0x8C
    ctx->r6 = ADD32(ctx->r29, 0X8C);
    // 0x801E5808: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    // 0x801E580C: addiu       $t6, $sp, 0x84
    ctx->r14 = ADD32(ctx->r29, 0X84);
    // 0x801E5810: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5814: lwc1        $f8, 0x7C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E5818: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x801E581C: addiu       $t8, $sp, 0x74
    ctx->r24 = ADD32(ctx->r29, 0X74);
    // 0x801E5820: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801E5824: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E5828: addiu       $t9, $sp, 0x6C
    ctx->r25 = ADD32(ctx->r29, 0X6C);
    // 0x801E582C: addiu       $t0, $sp, 0x68
    ctx->r8 = ADD32(ctx->r29, 0X68);
    // 0x801E5830: addiu       $t1, $sp, 0x5C
    ctx->r9 = ADD32(ctx->r29, 0X5C);
    // 0x801E5834: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801E5838: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E583C: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x801E5840: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E5844: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801E5848: bc1f        L_801E585C
    if (!c1cs) {
        // 0x801E584C: swc1        $f6, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
            goto L_801E585C;
    }
    // 0x801E584C: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801E5850: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
    // 0x801E5854: b           L_801E5874
    // 0x801E5858: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
        goto L_801E5874;
    // 0x801E5858: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
L_801E585C:
    // 0x801E585C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E5860: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E5864: div.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801E5868: add.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x801E586C: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x801E5870: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
L_801E5874:
    // 0x801E5874: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E5878: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E587C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E5880: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E5884: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801E5888: jal         0x801E58A4
    // 0x801E588C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801E58A4_6546F4(rdram, ctx);
        goto after_2;
    // 0x801E588C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E5890: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E5894: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801E5898: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801E589C: jr          $ra
    // 0x801E58A0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801E58A0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801D2D50_641BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D2D54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D2D58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D2D5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D2D60: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D2D64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D2D68: bgezl       $t6, L_801D2D90
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D2D6C: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D2D90;
    }
    goto skip_0;
    // 0x801D2D6C: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D2D70: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D2D74: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D2D78: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D2D7C: jal         0x800352EC
    // 0x801D2D80: addiu       $a0, $a0, 0x3658
    ctx->r4 = ADD32(ctx->r4, 0X3658);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D2D80: addiu       $a0, $a0, 0x3658
    ctx->r4 = ADD32(ctx->r4, 0X3658);
    after_0:
    // 0x801D2D84: b           L_801D2EB0
    // 0x801D2D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D2EB0;
    // 0x801D2D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2D8C: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801D2D90:
    // 0x801D2D90: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D2D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2D98: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D2D9C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D2DA0: lw          $t9, -0x7560($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7560);
    // 0x801D2DA4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D2DA8: jalr        $t9
    // 0x801D2DAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D2DAC: nop

    after_1:
    // 0x801D2DB0: jal         0x801CD504
    // 0x801D2DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D2DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D2DB8: beql        $v0, $zero, L_801D2DD4
    if (ctx->r2 == 0) {
        // 0x801D2DBC: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801D2DD4;
    }
    goto skip_1;
    // 0x801D2DBC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_1:
    // 0x801D2DC0: jal         0x801D2B90
    // 0x801D2DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D2DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D2DC8: b           L_801D2EB0
    // 0x801D2DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D2EB0;
    // 0x801D2DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2DD0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_801D2DD4:
    // 0x801D2DD4: jal         0x801CBC94
    // 0x801D2DD8: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_4;
    // 0x801D2DD8: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    after_4:
    // 0x801D2DDC: lbu         $t0, 0x9D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9D);
    // 0x801D2DE0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D2DE4: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x801D2DE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801D2DEC: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x801D2DF0: lw          $t9, -0x754C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X754C);
    // 0x801D2DF4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D2DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D2DFC: jalr        $t9
    // 0x801D2E00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801D2E00: nop

    after_5:
    // 0x801D2E04: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
    // 0x801D2E08: beq         $v0, $zero, L_801D2E98
    if (ctx->r2 == 0) {
        // 0x801D2E0C: nop
    
            goto L_801D2E98;
    }
    // 0x801D2E0C: nop

    // 0x801D2E10: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D2E14: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D2E18: ldc1        $f10, -0xFD8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XFD8);
    // 0x801D2E1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D2E20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x801D2E24: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x801D2E28: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x801D2E2C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D2E30: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x801D2E34: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D2E38: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D2E3C: neg.d       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = -ctx->f16.d;
    // 0x801D2E40: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D2E44: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D2E48: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801D2E4C: nop

    // 0x801D2E50: bc1fl       L_801D2E6C
    if (!c1cs) {
        // 0x801D2E54: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801D2E6C;
    }
    goto skip_2;
    // 0x801D2E54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x801D2E58: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x801D2E5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D2E60: b           L_801D2E94
    // 0x801D2E64: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_801D2E94;
    // 0x801D2E64: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x801D2E68: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801D2E6C:
    // 0x801D2E6C: nop

    // 0x801D2E70: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D2E74: nop

    // 0x801D2E78: bc1fl       L_801D2E98
    if (!c1cs) {
        // 0x801D2E7C: swc1        $f0, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
            goto L_801D2E98;
    }
    goto skip_3;
    // 0x801D2E7C: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    skip_3:
    // 0x801D2E80: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_801D2E84:
    // 0x801D2E84: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D2E88: nop

    // 0x801D2E8C: bc1tl       L_801D2E84
    if (c1cs) {
        // 0x801D2E90: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801D2E84;
    }
    goto skip_4;
    // 0x801D2E90: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
L_801D2E94:
    // 0x801D2E94: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
L_801D2E98:
    // 0x801D2E98: jal         0x801CD634
    // 0x801D2E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_6;
    // 0x801D2E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801D2EA0: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D2EA4: jal         0x801CD780
    // 0x801D2EA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_7;
    // 0x801D2EA8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x801D2EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D2EB0:
    // 0x801D2EB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D2EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D2EB8: jr          $ra
    // 0x801D2EBC: nop

    TRACE_RETURN()
    return;
    // 0x801D2EBC: nop

;}
RECOMP_FUNC void func_801D06E4_63F534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D06E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D06E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D06EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D06F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D06F4: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D06F8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D06FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D0700: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D0704: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801D0708: lw          $t9, -0x75D8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75D8);
    // 0x801D070C: jalr        $t9
    // 0x801D0710: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D0710: nop

    after_0:
    // 0x801D0714: lb          $t7, 0xA2($s0)
    ctx->r15 = MEM_B(ctx->r16, 0XA2);
    // 0x801D0718: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801D071C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801D0720: sb          $t8, 0xA2($s0)
    MEM_B(0XA2, ctx->r16) = ctx->r24;
    // 0x801D0724: lb          $t0, 0xA2($s0)
    ctx->r8 = MEM_B(ctx->r16, 0XA2);
    // 0x801D0728: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801D072C: bnel        $t0, $zero, L_801D0764
    if (ctx->r8 != 0) {
        // 0x801D0730: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_801D0764;
    }
    goto skip_0;
    // 0x801D0730: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_0:
    // 0x801D0734: sb          $t1, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = ctx->r9;
    // 0x801D0738: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801D073C: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x801D0740: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x801D0744: andi        $t3, $t2, 0xF9BF
    ctx->r11 = ctx->r10 & 0XF9BF;
    // 0x801D0748: jal         0x80038B98
    // 0x801D074C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x801D074C: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    after_1:
    // 0x801D0750: jal         0x80038B98
    // 0x801D0754: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801D0754: addiu       $a0, $zero, 0x14C
    ctx->r4 = ADD32(0, 0X14C);
    after_2:
    // 0x801D0758: jal         0x80038B98
    // 0x801D075C: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D075C: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    after_3:
    // 0x801D0760: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_801D0764:
    // 0x801D0764: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D0768: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D076C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x801D0770: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801D0774: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801D0778: lw          $t6, 0x318($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X318);
    // 0x801D077C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D0780: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0784: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801D0788: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801D078C: nop

    // 0x801D0790: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x801D0794: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801D0798: nop

    // 0x801D079C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D07A0: div.s       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    // 0x801D07A4: div.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f18.fl);
    // 0x801D07A8: ldc1        $f18, -0x1100($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1100);
    // 0x801D07AC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D07B0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801D07B4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x801D07B8: nop

    // 0x801D07BC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x801D07C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801D07C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801D07C8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D07CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801D07D0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801D07D4: nop

    // 0x801D07D8: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D07DC: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x801D07E0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801D07E4: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x801D07E8: nop

    // 0x801D07EC: bc1fl       L_801D0808
    if (!c1cs) {
        // 0x801D07F0: lwc1        $f10, 0x60($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
            goto L_801D0808;
    }
    goto skip_1;
    // 0x801D07F0: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    skip_1:
    // 0x801D07F4: ldc1        $f6, -0x10F8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X10F8);
    // 0x801D07F8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801D07FC: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801D0800: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x801D0804: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
L_801D0808:
    // 0x801D0808: lw          $v0, 0xB0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB0);
    // 0x801D080C: swc1        $f2, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f2.u32l;
    // 0x801D0810: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D0814: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801D0818: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x801D081C: nop

    // 0x801D0820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801D0824: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D0828: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801D082C: sw          $v0, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r2;
    // 0x801D0830: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D0834: div.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801D0838: swc1        $f8, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f8.u32l;
    // 0x801D083C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0840: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0844: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0848: jr          $ra
    // 0x801D084C: nop

    TRACE_RETURN()
    return;
    // 0x801D084C: nop

;}
RECOMP_FUNC void func_801D7438_646288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D743C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D7440: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D7444: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D7448: jal         0x801CD96C
    // 0x801D744C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D744C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801D7450: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x801D7454: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D7458: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D745C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D7460: nop

    // 0x801D7464: bc1fl       L_801D7478
    if (!c1cs) {
        // 0x801D7468: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D7478;
    }
    goto skip_0;
    // 0x801D7468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D746C: jal         0x801D7710
    // 0x801D7470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D7710_646560(rdram, ctx);
        goto after_1;
    // 0x801D7470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801D7474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D7478:
    // 0x801D7478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D747C: jr          $ra
    // 0x801D7480: nop

    TRACE_RETURN()
    return;
    // 0x801D7480: nop

;}
RECOMP_FUNC void func_801D7710_646560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7710: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D7714: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801D7718: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801D771C: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801D7720: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x801D7724: lwc1        $f0, 0x64($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D7728: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D772C: lwc1        $f2, 0x64($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X64);
    // 0x801D7730: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D7734: sltu        $t9, $zero, $a1
    ctx->r25 = 0 < ctx->r5 ? 1 : 0;
    // 0x801D7738: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D773C: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x801D7740: bc1fl       L_801D7750
    if (!c1cs) {
        // 0x801D7744: xor         $t0, $t8, $t9
        ctx->r8 = ctx->r24 ^ ctx->r25;
            goto L_801D7750;
    }
    goto skip_0;
    // 0x801D7744: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
    skip_0:
    // 0x801D7748: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D774C: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
L_801D7750:
    // 0x801D7750: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801D7754: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801D7758: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801D775C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7760: ldc1        $f8, -0xE18($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE18);
    // 0x801D7764: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D7768: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D776C: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D7770: jr          $ra
    // 0x801D7774: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801D7774: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_801CFCC0_63EB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFCC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CFCC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CFCC8: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CFCCC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFCD0: ldc1        $f8, -0x1120($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1120);
    // 0x801CFCD4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CFCD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CFCDC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x801CFCE0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CFCE4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x801CFCE8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CFCEC: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CFCF0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CFCF4: nop

    // 0x801CFCF8: slti        $at, $v0, 0x7530
    ctx->r1 = SIGNED(ctx->r2) < 0X7530 ? 1 : 0;
    // 0x801CFCFC: bnel        $at, $zero, L_801CFD40
    if (ctx->r1 != 0) {
        // 0x801CFD00: sw          $v0, 0xB4($a2)
        MEM_W(0XB4, ctx->r6) = ctx->r2;
            goto L_801CFD40;
    }
    goto skip_0;
    // 0x801CFD00: sw          $v0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801CFD04: sb          $v1, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r3;
    // 0x801CFD08: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFD0C: lwc1        $f18, -0x1118($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1118);
    // 0x801CFD10: addiu       $v0, $zero, 0x7530
    ctx->r2 = ADD32(0, 0X7530);
    // 0x801CFD14: sh          $v1, 0xE0($a1)
    MEM_H(0XE0, ctx->r5) = ctx->r3;
    // 0x801CFD18: sh          $a3, 0xDE($a1)
    MEM_H(0XDE, ctx->r5) = ctx->r7;
    // 0x801CFD1C: sh          $a3, 0xDC($a1)
    MEM_H(0XDC, ctx->r5) = ctx->r7;
    // 0x801CFD20: swc1        $f18, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f18.u32l;
    // 0x801CFD24: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801CFD28: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801CFD2C: jal         0x80038B98
    // 0x801CFD30: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801CFD30: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_0:
    // 0x801CFD34: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801CFD38: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801CFD3C: sw          $v0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r2;
L_801CFD40:
    // 0x801CFD40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CFD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CFD48: jr          $ra
    // 0x801CFD4C: nop

    TRACE_RETURN()
    return;
    // 0x801CFD4C: nop

;}
RECOMP_FUNC void func_801E2A3C_65188C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2A3C: lhu         $v0, 0x62($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X62);
    // 0x801E2A40: lhu         $v1, 0x60($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X60);
    // 0x801E2A44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x801E2A48: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x801E2A4C: addiu       $t7, $t6, -0x420
    ctx->r15 = ADD32(ctx->r14, -0X420);
    // 0x801E2A50: sltiu       $at, $t7, 0x7C1
    ctx->r1 = ctx->r15 < 0X7C1 ? 1 : 0;
    // 0x801E2A54: bne         $at, $zero, L_801E2A7C
    if (ctx->r1 != 0) {
        // 0x801E2A58: sh          $t6, 0x62($a0)
        MEM_H(0X62, ctx->r4) = ctx->r14;
            goto L_801E2A7C;
    }
    // 0x801E2A58: sh          $t6, 0x62($a0)
    MEM_H(0X62, ctx->r4) = ctx->r14;
    // 0x801E2A5C: lb          $v0, 0x5F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5F);
    // 0x801E2A60: sb          $zero, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = 0;
    // 0x801E2A64: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x801E2A68: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x801E2A6C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x801E2A70: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x801E2A74: sb          $t9, 0x5F($a0)
    MEM_B(0X5F, ctx->r4) = ctx->r25;
    // 0x801E2A78: sh          $t0, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r8;
L_801E2A7C:
    // 0x801E2A7C: jr          $ra
    // 0x801E2A80: nop

    TRACE_RETURN()
    return;
    // 0x801E2A80: nop

;}
RECOMP_FUNC void func_801CCA28_63B878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCA2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCA30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCA34: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCA38: addiu       $a0, $a0, 0x28B0
    ctx->r4 = ADD32(ctx->r4, 0X28B0);
    // 0x801CCA3C: jal         0x80034DD8
    // 0x801CCA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCA40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCA44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801CCA48: sw          $t6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r14;
    // 0x801CCA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCA50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCA54: jr          $ra
    // 0x801CCA58: nop

    TRACE_RETURN()
    return;
    // 0x801CCA58: nop

;}
RECOMP_FUNC void func_801DA2B0_649100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA2B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DA2B4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DA2B8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801DA2BC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801DA2C0: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DA2C4: addiu       $t6, $t6, 0x1960
    ctx->r14 = ADD32(ctx->r14, 0X1960);
    // 0x801DA2C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DA2CC: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DA2D0: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DA2D4: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DA2D8: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DA2DC: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DA2E0: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    // 0x801DA2E4: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DA2E8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DA2EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DA2F0: beq         $t9, $zero, L_801DA348
    if (ctx->r25 == 0) {
        // 0x801DA2F4: addiu       $t1, $zero, 0x200
        ctx->r9 = ADD32(0, 0X200);
            goto L_801DA348;
    }
    // 0x801DA2F4: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801DA2F8: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801DA2FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA300: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DA304: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801DA308: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DA30C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DA310: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DA314: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801DA318: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x801DA31C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801DA320: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DA324: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DA328: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DA32C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DA330: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DA334: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DA338: jal         0x801E8378
    // 0x801DA33C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DA33C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DA340: b           L_801DA394
    // 0x801DA344: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
        goto L_801DA394;
    // 0x801DA344: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801DA348:
    // 0x801DA348: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA34C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801DA350: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801DA354: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DA358: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801DA35C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DA360: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DA364: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801DA368: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801DA36C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801DA370: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DA374: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DA378: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DA37C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DA380: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DA384: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DA388: jal         0x801E8378
    // 0x801DA38C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801DA38C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801DA390: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801DA394:
    // 0x801DA394: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801DA398: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DA39C: lwc1        $f8, 0x330($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801DA3A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA3A4: addiu       $a0, $a0, -0x5C38
    ctx->r4 = ADD32(ctx->r4, -0X5C38);
    // 0x801DA3A8: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DA3AC: jal         0x800352EC
    // 0x801DA3B0: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801DA3B0: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x801DA3B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DA3B8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801DA3BC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801DA3C0: jr          $ra
    // 0x801DA3C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DA3C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D8080_646ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D808C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D8090: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D8094: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D8098: lui         $at, 0xC010
    ctx->r1 = S32(0XC010 << 16);
    // 0x801D809C: bgezl       $t6, L_801D80C4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D80A0: lwc1        $f4, 0x64($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X64);
            goto L_801D80C4;
    }
    goto skip_0;
    // 0x801D80A0: lwc1        $f4, 0x64($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X64);
    skip_0:
    // 0x801D80A4: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D80A8: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D80AC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D80B0: jal         0x800352EC
    // 0x801D80B4: addiu       $a0, $a0, -0x7E24
    ctx->r4 = ADD32(ctx->r4, -0X7E24);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D80B4: addiu       $a0, $a0, -0x7E24
    ctx->r4 = ADD32(ctx->r4, -0X7E24);
    after_0:
    // 0x801D80B8: b           L_801D81D0
    // 0x801D80BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D81D0;
    // 0x801D80BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D80C0: lwc1        $f4, 0x64($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X64);
L_801D80C4:
    // 0x801D80C4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D80C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D80CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D80D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D80D4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D80D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D80DC: swc1        $f16, 0x64($a1)
    MEM_W(0X64, ctx->r5) = ctx->f16.u32l;
    // 0x801D80E0: jal         0x801CD504
    // 0x801D80E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D80E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801D80E8: beq         $v0, $zero, L_801D8100
    if (ctx->r2 == 0) {
        // 0x801D80EC: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801D8100;
    }
    // 0x801D80EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D80F0: jal         0x801D2B90
    // 0x801D80F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_2;
    // 0x801D80F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801D80F8: b           L_801D81D0
    // 0x801D80FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D81D0;
    // 0x801D80FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D8100:
    // 0x801D8100: lw          $v0, 0xA0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XA0);
    // 0x801D8104: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D8108: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D810C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D8110: lw          $v1, 0xA8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XA8);
    // 0x801D8114: lwc1        $f18, 0x5C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X5C);
    // 0x801D8118: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D811C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D8120: lwc1        $f16, 0x60($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X60);
    // 0x801D8124: lw          $a0, 0xA4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XA4);
    // 0x801D8128: lw          $a2, 0xAC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XAC);
    // 0x801D812C: negu        $t9, $v0
    ctx->r25 = SUB32(0, ctx->r2);
    // 0x801D8130: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D8134: negu        $t3, $v1
    ctx->r11 = SUB32(0, ctx->r3);
    // 0x801D8138: xor         $t0, $t9, $v0
    ctx->r8 = ctx->r25 ^ ctx->r2;
    // 0x801D813C: xor         $t4, $t3, $v1
    ctx->r12 = ctx->r11 ^ ctx->r3;
    // 0x801D8140: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D8144: xor         $t8, $v0, $a0
    ctx->r24 = ctx->r2 ^ ctx->r4;
    // 0x801D8148: xor         $t2, $v1, $a2
    ctx->r10 = ctx->r3 ^ ctx->r6;
    // 0x801D814C: and         $t5, $t2, $t4
    ctx->r13 = ctx->r10 & ctx->r12;
    // 0x801D8150: and         $t1, $t8, $t0
    ctx->r9 = ctx->r24 & ctx->r8;
    // 0x801D8154: and         $t7, $v0, $v1
    ctx->r15 = ctx->r2 & ctx->r3;
    // 0x801D8158: or          $t6, $t1, $t5
    ctx->r14 = ctx->r9 | ctx->r13;
    // 0x801D815C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801D8160: div.s       $f18, $f6, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801D8164: swc1        $f10, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = ctx->f10.u32l;
    // 0x801D8168: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D816C: beq         $t7, $zero, L_801D8180
    if (ctx->r15 == 0) {
        // 0x801D8170: swc1        $f8, 0x60($a1)
        MEM_W(0X60, ctx->r5) = ctx->f8.u32l;
            goto L_801D8180;
    }
    // 0x801D8170: swc1        $f8, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->f8.u32l;
    // 0x801D8174: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x801D8178: b           L_801D81AC
    // 0x801D817C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
        goto L_801D81AC;
    // 0x801D817C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_801D8180:
    // 0x801D8180: bltzl       $t6, L_801D81A8
    if (SIGNED(ctx->r14) < 0) {
        // 0x801D8184: addu        $v0, $v0, $a0
        ctx->r2 = ADD32(ctx->r2, ctx->r4);
            goto L_801D81A8;
    }
    goto skip_1;
    // 0x801D8184: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    skip_1:
    // 0x801D8188: beq         $v0, $zero, L_801D819C
    if (ctx->r2 == 0) {
        // 0x801D818C: negu        $t9, $a2
        ctx->r25 = SUB32(0, ctx->r6);
            goto L_801D819C;
    }
    // 0x801D818C: negu        $t9, $a2
    ctx->r25 = SUB32(0, ctx->r6);
    // 0x801D8190: negu        $t7, $a0
    ctx->r15 = SUB32(0, ctx->r4);
    // 0x801D8194: b           L_801D81AC
    // 0x801D8198: sw          $t7, 0xA4($a1)
    MEM_W(0XA4, ctx->r5) = ctx->r15;
        goto L_801D81AC;
    // 0x801D8198: sw          $t7, 0xA4($a1)
    MEM_W(0XA4, ctx->r5) = ctx->r15;
L_801D819C:
    // 0x801D819C: b           L_801D81AC
    // 0x801D81A0: sw          $t9, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->r25;
        goto L_801D81AC;
    // 0x801D81A0: sw          $t9, 0xAC($a1)
    MEM_W(0XAC, ctx->r5) = ctx->r25;
    // 0x801D81A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
L_801D81A8:
    // 0x801D81A8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
L_801D81AC:
    // 0x801D81AC: sw          $v0, 0xA0($a1)
    MEM_W(0XA0, ctx->r5) = ctx->r2;
    // 0x801D81B0: sw          $v1, 0xA8($a1)
    MEM_W(0XA8, ctx->r5) = ctx->r3;
    // 0x801D81B4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x801D81B8: jal         0x801CD634
    // 0x801D81BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D81BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x801D81C0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D81C4: jal         0x801CD780
    // 0x801D81C8: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D81C8: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801D81CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D81D0:
    // 0x801D81D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D81D4: jr          $ra
    // 0x801D81D8: nop

    TRACE_RETURN()
    return;
    // 0x801D81D8: nop

;}
RECOMP_FUNC void func_801CE9B8_63D808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE9B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CE9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CE9C0: lb          $t6, 0x9F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X9F);
    // 0x801CE9C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801CE9C8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CE9CC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801CE9D0: beql        $t7, $zero, L_801CEA30
    if (ctx->r15 == 0) {
        // 0x801CE9D4: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801CEA30;
    }
    goto skip_0;
    // 0x801CE9D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_0:
    // 0x801CE9D8: lw          $t8, 0xB4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XB4);
    // 0x801CE9DC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x801CE9E0: sb          $v0, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r2;
    // 0x801CE9E4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801CE9E8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE9EC: ldc1        $f8, -0x11A0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X11A0);
    // 0x801CE9F0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CE9F4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE9F8: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x801CE9FC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CEA00: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CEA04: swc1        $f16, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f16.u32l;
    // 0x801CEA08: lwc1        $f18, -0x1198($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1198);
    // 0x801CEA0C: sh          $v0, 0xE0($a1)
    MEM_H(0XE0, ctx->r5) = ctx->r2;
    // 0x801CEA10: sh          $v1, 0xDE($a1)
    MEM_H(0XDE, ctx->r5) = ctx->r3;
    // 0x801CEA14: sh          $v1, 0xDC($a1)
    MEM_H(0XDC, ctx->r5) = ctx->r3;
    // 0x801CEA18: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    // 0x801CEA1C: jal         0x80038B98
    // 0x801CEA20: swc1        $f18, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f18.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801CEA20: swc1        $f18, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f18.u32l;
    after_0:
    // 0x801CEA24: b           L_801CEAAC
    // 0x801CEA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CEAAC;
    // 0x801CEA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CEA2C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801CEA30:
    // 0x801CEA30: lwc1        $f4, 0x60($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X60);
    // 0x801CEA34: lw          $v0, 0xB0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB0);
    // 0x801CEA38: lw          $a0, 0xB4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XB4);
    // 0x801CEA3C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801CEA40: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CEA44: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x801CEA48: nop

    // 0x801CEA4C: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CEA50: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x801CEA54: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x801CEA58: nop

    // 0x801CEA5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801CEA60: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801CEA64: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801CEA68: sw          $v0, 0xB0($a2)
    MEM_W(0XB0, ctx->r6) = ctx->r2;
    // 0x801CEA6C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CEA70: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801CEA74: swc1        $f18, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->f18.u32l;
    // 0x801CEA78: ldc1        $f6, -0x1190($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1190);
    // 0x801CEA7C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CEA80: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801CEA84: nop

    // 0x801CEA88: bc1fl       L_801CEAAC
    if (!c1cs) {
        // 0x801CEA8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CEAAC;
    }
    goto skip_1;
    // 0x801CEA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801CEA90: ldc1        $f8, -0x1188($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1188);
    // 0x801CEA94: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801CEA98: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CEA9C: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x801CEAA0: nop

    // 0x801CEAA4: sw          $a0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r4;
    // 0x801CEAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CEAAC:
    // 0x801CEAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CEAB0: jr          $ra
    // 0x801CEAB4: nop

    TRACE_RETURN()
    return;
    // 0x801CEAB4: nop

;}
RECOMP_FUNC void func_801D7B08_646958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7B08: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D7B0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D7B10: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801D7B14: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801D7B18: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D7B1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D7B20: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D7B24: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801D7B28: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801D7B2C: bgez        $t6, L_801D7B50
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D7B30: lui         $at, 0xC034
        ctx->r1 = S32(0XC034 << 16);
            goto L_801D7B50;
    }
    // 0x801D7B30: lui         $at, 0xC034
    ctx->r1 = S32(0XC034 << 16);
    // 0x801D7B34: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D7B38: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D7B3C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D7B40: jal         0x800352EC
    // 0x801D7B44: addiu       $a0, $a0, 0x7E80
    ctx->r4 = ADD32(ctx->r4, 0X7E80);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D7B44: addiu       $a0, $a0, 0x7E80
    ctx->r4 = ADD32(ctx->r4, 0X7E80);
    after_0:
    // 0x801D7B48: b           L_801D7D98
    // 0x801D7B4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D7D98;
    // 0x801D7B4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D7B50:
    // 0x801D7B50: lwc1        $f4, 0x64($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X64);
    // 0x801D7B54: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D7B58: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D7B5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D7B60: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D7B64: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D7B68: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D7B6C: jal         0x801CD504
    // 0x801D7B70: swc1        $f16, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f16.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D7B70: swc1        $f16, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->f16.u32l;
    after_1:
    // 0x801D7B74: beq         $v0, $zero, L_801D7B8C
    if (ctx->r2 == 0) {
        // 0x801D7B78: nop
    
            goto L_801D7B8C;
    }
    // 0x801D7B78: nop

    // 0x801D7B7C: jal         0x801D2B90
    // 0x801D7B80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_2;
    // 0x801D7B80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x801D7B84: b           L_801D7D98
    // 0x801D7B88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801D7D98;
    // 0x801D7B88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D7B8C:
    // 0x801D7B8C: jal         0x801CD634
    // 0x801D7B90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D7B90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x801D7B94: lwc1        $f12, 0x64($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X64);
    // 0x801D7B98: jal         0x801CD780
    // 0x801D7B9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D7B9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x801D7BA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D7BA4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D7BA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D7BAC: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x801D7BB0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D7BB4: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801D7BB8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801D7BBC: jal         0x8001D394
    // 0x801D7BC0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x801D7BC0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801D7BC4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801D7BC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7BCC: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801D7BD0: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801D7BD4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801D7BD8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D7BDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D7BE0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D7BE4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D7BE8: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801D7BEC: jal         0x8001D14C
    // 0x801D7BF0: nop

    func_8001D14C_1DD4C(rdram, ctx);
        goto after_6;
    // 0x801D7BF0: nop

    after_6:
    // 0x801D7BF4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x801D7BF8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D7BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D7C00: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D7C04: jal         0x8001DB04
    // 0x801D7C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_7;
    // 0x801D7C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x801D7C0C: lw          $t7, 0xEC($s2)
    ctx->r15 = MEM_W(ctx->r18, 0XEC);
    // 0x801D7C10: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D7C14: lui         $at, 0xC049
    ctx->r1 = S32(0XC049 << 16);
    // 0x801D7C18: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x801D7C1C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x801D7C20: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x801D7C24: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801D7C28: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D7C2C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D7C30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D7C34: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x801D7C38: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801D7C3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D7C40: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801D7C44: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x801D7C48: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x801D7C4C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x801D7C50: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D7C54: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x801D7C58: lwc1        $f16, 0x24($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801D7C5C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D7C60: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801D7C64: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801D7C68: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801D7C6C: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D7C70: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801D7C74: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801D7C78: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D7C7C: jal         0x80033898
    // 0x801D7C80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801D7C80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_8:
    // 0x801D7C84: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D7C88: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D7C8C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D7C90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D7C94: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D7C98: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D7C9C: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x801D7CA0: addiu       $t1, $sp, 0x44
    ctx->r9 = ADD32(ctx->r29, 0X44);
    // 0x801D7CA4: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801D7CA8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D7CAC: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x801D7CB0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D7CB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D7CB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7CBC: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801D7CC0: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D7CC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D7CC8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D7CCC: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801D7CD0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x801D7CD4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x801D7CD8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801D7CDC: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801D7CE0: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801D7CE4: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801D7CE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801D7CEC: jal         0x80033898
    // 0x801D7CF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_9;
    // 0x801D7CF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_9:
    // 0x801D7CF4: jal         0x8001D394
    // 0x801D7CF8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_10;
    // 0x801D7CF8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x801D7CFC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801D7D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7D04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D7D08: lwc1        $f10, 0x36C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X36C);
    // 0x801D7D0C: lw          $a2, 0x364($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X364);
    // 0x801D7D10: lw          $a3, 0x368($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X368);
    // 0x801D7D14: jal         0x8001D14C
    // 0x801D7D18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_11;
    // 0x801D7D18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x801D7D1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x801D7D20: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D7D24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D7D28: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D7D2C: jal         0x8001DB04
    // 0x801D7D30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_12;
    // 0x801D7D30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x801D7D34: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7D38: ldc1        $f12, -0xDF8($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0XDF8);
    // 0x801D7D3C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x801D7D40: sb          $t2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r10;
    // 0x801D7D44: lh          $v0, 0xAA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XAA);
    // 0x801D7D48: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7D4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D7D50: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x801D7D54: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x801D7D58: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801D7D5C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801D7D60: sh          $v0, 0xAA($s2)
    MEM_H(0XAA, ctx->r18) = ctx->r2;
    // 0x801D7D64: ldc1        $f8, -0xDF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XDF0);
    // 0x801D7D68: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x801D7D6C: mul.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f12.d);
    // 0x801D7D70: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D7D74: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x801D7D78: sub.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d - ctx->f0.d;
    // 0x801D7D7C: add.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f0.d + ctx->f12.d;
    // 0x801D7D80: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x801D7D84: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801D7D88: swc1        $f2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f2.u32l;
    // 0x801D7D8C: swc1        $f2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f2.u32l;
    // 0x801D7D90: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x801D7D94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D7D98:
    // 0x801D7D98: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D7D9C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D7DA0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x801D7DA4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x801D7DA8: jr          $ra
    // 0x801D7DAC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D7DAC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801E5CC8_654B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5CC8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x801E5CCC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E5CD0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801E5CD4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801E5CD8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801E5CDC: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801E5CE0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E5CE4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E5CE8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E5CEC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E5CF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E5CF4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E5CF8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E5CFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5D00: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E5D04: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E5D08: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5D0C: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x801E5D10: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E5D14: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5D18: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E5D1C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E5D20: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x801E5D24: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E5D28: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E5D2C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E5D30: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E5D34: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x801E5D38: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E5D3C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E5D40: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E5D44: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5D48: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801E5D4C: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E5D50: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E5D54: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E5D58: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E5D5C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x801E5D60: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E5D64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E5D68: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E5D6C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E5D70: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x801E5D74: lhu         $t6, 0x14($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5D78: sh          $t6, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r14;
    // 0x801E5D7C: lhu         $t7, 0x16($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X16);
    // 0x801E5D80: sh          $t7, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r15;
    // 0x801E5D84: lhu         $t8, 0x18($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5D88: sh          $t8, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r24;
    // 0x801E5D8C: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801E5D90: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x801E5D94: lwc1        $f6, 0x88($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801E5D98: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E5D9C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801E5DA0: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5DA4: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801E5DA8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E5DAC: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    // 0x801E5DB0: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5DB4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E5DB8: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x801E5DBC: nop

    // 0x801E5DC0: bc1t        L_801E5E18
    if (c1cs) {
        // 0x801E5DC4: addiu       $t9, $sp, 0x6C
        ctx->r25 = ADD32(ctx->r29, 0X6C);
            goto L_801E5E18;
    }
    // 0x801E5DC4: addiu       $t9, $sp, 0x6C
    ctx->r25 = ADD32(ctx->r29, 0X6C);
    // 0x801E5DC8: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x801E5DCC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801E5DD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E5DD4: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x801E5DD8: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801E5DDC: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801E5DE0: jal         0x80033898
    // 0x801E5DE4: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E5DE4: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801E5DE8: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801E5DEC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E5DF0: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E5DF4: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5DF8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E5DFC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5E00: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E5E04: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E5E08: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x801E5E0C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E5E10: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x801E5E14: swc1        $f16, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f16.u32l;
L_801E5E18:
    // 0x801E5E18: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E5E1C: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x801E5E20: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E5E24: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x801E5E28: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E5E2C: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E5E30: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E5E34: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x801E5E38: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5E3C: lwc1        $f6, 0x98($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801E5E40: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E5E44: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E5E48: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x801E5E4C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5E50: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E5E54: addiu       $t1, $sp, 0x6C
    ctx->r9 = ADD32(ctx->r29, 0X6C);
    // 0x801E5E58: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801E5E5C: addiu       $t2, $sp, 0x70
    ctx->r10 = ADD32(ctx->r29, 0X70);
    // 0x801E5E60: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x801E5E64: nop

    // 0x801E5E68: bc1tl       L_801E5EA0
    if (c1cs) {
        // 0x801E5E6C: lwc1        $f6, 0x50($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
            goto L_801E5EA0;
    }
    goto skip_0;
    // 0x801E5E6C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x801E5E70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E5E74: jal         0x80033898
    // 0x801E5E78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E5E78: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x801E5E7C: jal         0x8001D394
    // 0x801E5E80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801E5E80: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x801E5E84: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x801E5E88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E5E8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E5E90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E5E94: jal         0x8001DB04
    // 0x801E5E98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801E5E98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x801E5E9C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
L_801E5EA0:
    // 0x801E5EA0: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E5EA4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E5EA8: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E5EAC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E5EB0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E5EB4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E5EB8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E5EBC: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x801E5EC0: addiu       $t4, $sp, 0x70
    ctx->r12 = ADD32(ctx->r29, 0X70);
    // 0x801E5EC4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801E5EC8: lwc1        $f16, 0x7C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E5ECC: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801E5ED0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E5ED4: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x801E5ED8: lwc1        $f8, 0x80($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E5EDC: c.lt.s      $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f18.fl < ctx->f20.fl;
    // 0x801E5EE0: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x801E5EE4: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E5EE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E5EEC: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x801E5EF0: mul.d       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f6.d);
    // 0x801E5EF4: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801E5EF8: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5EFC: bc1f        L_801E5F14
    if (!c1cs) {
        // 0x801E5F00: swc1        $f4, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
            goto L_801E5F14;
    }
    // 0x801E5F00: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x801E5F04: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801E5F08: neg.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = -ctx->f18.fl;
    // 0x801E5F0C: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801E5F10: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
L_801E5F14:
    // 0x801E5F14: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E5F18: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E5F1C: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E5F20: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E5F24: jal         0x80033898
    // 0x801E5F28: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801E5F28: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_4:
    // 0x801E5F2C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5F30: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E5F34: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E5F38: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801E5F3C: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E5F40: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E5F44: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E5F48: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E5F4C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E5F50: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5F54: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x801E5F58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E5F5C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E5F60: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E5F64: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x801E5F68: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801E5F6C: mul.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f10.d);
    // 0x801E5F70: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E5F74: addiu       $t5, $sp, 0x6C
    ctx->r13 = ADD32(ctx->r29, 0X6C);
    // 0x801E5F78: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x801E5F7C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E5F80: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x801E5F84: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801E5F88: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801E5F8C: sub.d       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f8.d = ctx->f6.d - ctx->f16.d;
    // 0x801E5F90: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x801E5F94: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x801E5F98: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E5F9C: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x801E5FA0: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E5FA4: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E5FA8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E5FAC: jal         0x80033898
    // 0x801E5FB0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E5FB0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801E5FB4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E5FB8: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801E5FBC: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E5FC0: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E5FC4: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E5FC8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E5FCC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E5FD0: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E5FD4: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x801E5FD8: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E5FDC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E5FE0: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x801E5FE4: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x801E5FE8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E5FEC: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x801E5FF0: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x801E5FF4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E5FF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E5FFC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E6000: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E6004: addiu       $t0, $sp, 0x6C
    ctx->r8 = ADD32(ctx->r29, 0X6C);
    // 0x801E6008: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801E600C: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x801E6010: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E6014: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801E6018: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x801E601C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E6020: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6024: mul.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E6028: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x801E602C: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x801E6030: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E6034: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6038: mul.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E603C: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801E6040: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x801E6044: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E6048: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x801E604C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E6050: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x801E6054: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801E6058: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E605C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6060: mul.d       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E6064: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x801E6068: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x801E606C: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E6070: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x801E6074: mul.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E6078: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801E607C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x801E6080: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801E6084: sh          $t7, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r15;
    // 0x801E6088: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x801E608C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    // 0x801E6090: sh          $t8, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r24;
    // 0x801E6094: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6098: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    // 0x801E609C: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x801E60A0: lwc1        $f8, 0x84($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X84);
    // 0x801E60A4: andi        $a2, $t9, 0xFFFF
    ctx->r6 = ctx->r25 & 0XFFFF;
    // 0x801E60A8: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801E60AC: lwc1        $f18, 0x88($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X88);
    // 0x801E60B0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E60B4: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x801E60B8: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E60BC: lwc1        $f4, 0x8C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801E60C0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801E60C4: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x801E60C8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E60CC: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801E60D0: c.eq.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl == ctx->f18.fl;
    // 0x801E60D4: nop

    // 0x801E60D8: bc1tl       L_801E6120
    if (c1cs) {
        // 0x801E60DC: lwc1        $f8, 0x90($s1)
        ctx->f8.u32l = MEM_W(ctx->r17, 0X90);
            goto L_801E6120;
    }
    goto skip_1;
    // 0x801E60DC: lwc1        $f8, 0x90($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X90);
    skip_1:
    // 0x801E60E0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801E60E4: jal         0x80033898
    // 0x801E60E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801E60E8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_6:
    // 0x801E60EC: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E60F0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E60F4: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E60F8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E60FC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E6100: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E6104: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E6108: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801E610C: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x801E6110: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E6114: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x801E6118: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x801E611C: lwc1        $f8, 0x90($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X90);
L_801E6120:
    // 0x801E6120: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E6124: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E6128: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801E612C: lwc1        $f16, 0x94($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801E6130: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E6134: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E6138: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x801E613C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E6140: lwc1        $f18, 0x98($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X98);
    // 0x801E6144: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E6148: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801E614C: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x801E6150: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E6154: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x801E6158: addiu       $t3, $sp, 0x70
    ctx->r11 = ADD32(ctx->r29, 0X70);
    // 0x801E615C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801E6160: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x801E6164: nop

    // 0x801E6168: bc1tl       L_801E61A0
    if (c1cs) {
        // 0x801E616C: lwc1        $f18, 0x50($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
            goto L_801E61A0;
    }
    goto skip_2;
    // 0x801E616C: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    skip_2:
    // 0x801E6170: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801E6174: jal         0x80033898
    // 0x801E6178: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801E6178: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_7:
    // 0x801E617C: jal         0x8001D394
    // 0x801E6180: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_8;
    // 0x801E6180: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x801E6184: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x801E6188: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801E618C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6190: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E6194: jal         0x8001DB04
    // 0x801E6198: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_9;
    // 0x801E6198: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x801E619C: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
L_801E61A0:
    // 0x801E61A0: lwc1        $f4, 0x78($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E61A4: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E61A8: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E61AC: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E61B0: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E61B4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E61B8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E61BC: addiu       $t4, $sp, 0x6C
    ctx->r12 = ADD32(ctx->r29, 0X6C);
    // 0x801E61C0: addiu       $t5, $sp, 0x70
    ctx->r13 = ADD32(ctx->r29, 0X70);
    // 0x801E61C4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801E61C8: lwc1        $f6, 0x7C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x801E61CC: mul.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801E61D0: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x801E61D4: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x801E61D8: lwc1        $f4, 0x80($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X80);
    // 0x801E61DC: c.lt.s      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.fl < ctx->f20.fl;
    // 0x801E61E0: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x801E61E4: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801E61E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E61EC: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x801E61F0: mul.d       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f18.d);
    // 0x801E61F4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801E61F8: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x801E61FC: bc1f        L_801E6214
    if (!c1cs) {
        // 0x801E6200: swc1        $f8, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
            goto L_801E6214;
    }
    // 0x801E6200: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x801E6204: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801E6208: neg.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = -ctx->f16.fl;
    // 0x801E620C: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801E6210: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
L_801E6214:
    // 0x801E6214: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E6218: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E621C: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E6220: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E6224: jal         0x80033898
    // 0x801E6228: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_10;
    // 0x801E6228: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_10:
    // 0x801E622C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E6230: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E6234: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E6238: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E623C: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801E6240: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E6244: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x801E6248: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801E624C: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E6250: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E6254: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x801E6258: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E625C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E6260: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801E6264: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x801E6268: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801E626C: mul.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801E6270: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E6274: addiu       $t6, $sp, 0x6C
    ctx->r14 = ADD32(ctx->r29, 0X6C);
    // 0x801E6278: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x801E627C: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801E6280: addiu       $t7, $sp, 0x70
    ctx->r15 = ADD32(ctx->r29, 0X70);
    // 0x801E6284: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E6288: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E628C: sub.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f18.d - ctx->f6.d;
    // 0x801E6290: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x801E6294: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x801E6298: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x801E629C: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
    // 0x801E62A0: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E62A4: lhu         $a2, 0x4C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X4C);
    // 0x801E62A8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E62AC: jal         0x80033898
    // 0x801E62B0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_11;
    // 0x801E62B0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x801E62B4: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E62B8: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E62BC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E62C0: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E62C4: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E62C8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E62CC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E62D0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E62D4: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E62D8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E62DC: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x801E62E0: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801E62E4: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x801E62E8: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x801E62EC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E62F0: addiu       $t9, $sp, 0x98
    ctx->r25 = ADD32(ctx->r29, 0X98);
    // 0x801E62F4: addiu       $t0, $sp, 0x88
    ctx->r8 = ADD32(ctx->r29, 0X88);
    // 0x801E62F8: addiu       $t1, $sp, 0x78
    ctx->r9 = ADD32(ctx->r29, 0X78);
    // 0x801E62FC: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x801E6300: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x801E6304: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801E6308: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801E630C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E6310: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E6314: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801E6318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E631C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E6320: addiu       $a2, $sp, 0xC8
    ctx->r6 = ADD32(ctx->r29, 0XC8);
    // 0x801E6324: jal         0x801E6348
    // 0x801E6328: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    func_801E6348_655198(rdram, ctx);
        goto after_12;
    // 0x801E6328: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    after_12:
    // 0x801E632C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E6330: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801E6334: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801E6338: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801E633C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801E6340: jr          $ra
    // 0x801E6344: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    TRACE_RETURN()
    return;
    // 0x801E6344: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_801CC5CC_63B41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC5CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801CC5D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CC5D4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801CC5D8: lwc1        $f0, 0x340($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X340);
    // 0x801CC5DC: lwc1        $f4, 0x378($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X378);
    // 0x801CC5E0: lui         $at, 0xC004
    ctx->r1 = S32(0XC004 << 16);
    // 0x801CC5E4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC5E8: sub.s       $f20, $f4, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x801CC5EC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC5F0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC5F4: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x801CC5F8: swc1        $f20, 0x360($a0)
    MEM_W(0X360, ctx->r4) = ctx->f20.u32l;
    // 0x801CC5FC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CC600: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801CC604: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x801CC608: jal         0x801CBEF8
    // 0x801CC60C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_0;
    // 0x801CC60C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x801CC610: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC614: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801CC618: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC61C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CC620: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC624: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801CC628: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x801CC62C: bc1fl       L_801CC63C
    if (!c1cs) {
        // 0x801CC630: cvt.d.s     $f18, $f20
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
            goto L_801CC63C;
    }
    goto skip_0;
    // 0x801CC630: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
    skip_0:
    // 0x801CC634: mov.s       $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    ctx->f16.fl = ctx->f14.fl;
    // 0x801CC638: cvt.d.s     $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f18.d = CVT_D_S(ctx->f20.fl);
L_801CC63C:
    // 0x801CC63C: swc1        $f16, 0x35C($a0)
    MEM_W(0X35C, ctx->r4) = ctx->f16.u32l;
    // 0x801CC640: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x801CC644: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x801CC648: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801CC64C: jal         0x801CBEF8
    // 0x801CC650: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_1;
    // 0x801CC650: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801CC654: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC658: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801CC65C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CC660: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CC664: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801CC668: bc1fl       L_801CC678
    if (!c1cs) {
        // 0x801CC66C: sub.s       $f12, $f2, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_801CC678;
    }
    goto skip_1;
    // 0x801CC66C: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
    skip_1:
    // 0x801CC670: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x801CC674: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
L_801CC678:
    // 0x801CC678: jal         0x80003A94
    // 0x801CC67C: sub.s       $f14, $f8, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f20.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801CC67C: sub.s       $f14, $f8, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f20.fl;
    after_2:
    // 0x801CC680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC684: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801CC688: sra         $t6, $v0, 4
    ctx->r14 = S32(SIGNED(ctx->r2) >> 4);
    // 0x801CC68C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801CC690: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801CC694: jr          $ra
    // 0x801CC698: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
    TRACE_RETURN()
    return;
    // 0x801CC698: andi        $v0, $t6, 0xFFFF
    ctx->r2 = ctx->r14 & 0XFFFF;
;}
RECOMP_FUNC void func_801E8850_6576A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8850: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8854: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E8858: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x801E885C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x801E8860: lhu         $t9, 0xE8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE8);
    // 0x801E8864: ori         $at, $at, 0x70F1
    ctx->r1 = ctx->r1 | 0X70F1;
    // 0x801E8868: addu        $v1, $t9, $t8
    ctx->r3 = ADD32(ctx->r25, ctx->r24);
    // 0x801E886C: andi        $t0, $v1, 0xFFFF
    ctx->r8 = ctx->r3 & 0XFFFF;
    // 0x801E8870: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x801E8874: bne         $at, $zero, L_801E8880
    if (ctx->r1 != 0) {
        // 0x801E8878: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_801E8880;
    }
    // 0x801E8878: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x801E887C: addiu       $v1, $zero, 0x70F0
    ctx->r3 = ADD32(0, 0X70F0);
L_801E8880:
    // 0x801E8880: jr          $ra
    // 0x801E8884: sh          $v1, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x801E8884: sh          $v1, 0xE8($v0)
    MEM_H(0XE8, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_801DBFF4_64AE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBFF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DBFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DBFFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DC000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DC004: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DC008: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DC00C: bgezl       $t6, L_801DC034
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DC010: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DC034;
    }
    goto skip_0;
    // 0x801DC010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DC014: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DC018: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DC01C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC020: jal         0x800352EC
    // 0x801DC024: addiu       $a0, $a0, -0x3F84
    ctx->r4 = ADD32(ctx->r4, -0X3F84);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DC024: addiu       $a0, $a0, -0x3F84
    ctx->r4 = ADD32(ctx->r4, -0X3F84);
    after_0:
    // 0x801DC028: b           L_801DC070
    // 0x801DC02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DC070;
    // 0x801DC02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC030: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DC034:
    // 0x801DC034: jal         0x801CD504
    // 0x801DC038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DC038: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DC03C: beq         $v0, $zero, L_801DC054
    if (ctx->r2 == 0) {
        // 0x801DC040: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DC054;
    }
    // 0x801DC040: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DC044: jal         0x801DBEB0
    // 0x801DC048: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_2;
    // 0x801DC048: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DC04C: b           L_801DC070
    // 0x801DC050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DC070;
    // 0x801DC050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DC054:
    // 0x801DC054: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DC058: jal         0x801CD634
    // 0x801DC05C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DC05C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DC060: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DC064: jal         0x801CD780
    // 0x801DC068: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DC068: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DC06C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DC070:
    // 0x801DC070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC074: jr          $ra
    // 0x801DC078: nop

    TRACE_RETURN()
    return;
    // 0x801DC078: nop

;}
RECOMP_FUNC void func_801D5D84_644BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5D84: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5D88: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x801D5D8C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5D90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5D94: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D5D98: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D5D9C: lh          $v1, 0xA2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA2);
    // 0x801D5DA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5DA4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D5DA8: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D5DAC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D5DB0: sh          $t7, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r15;
    // 0x801D5DB4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5DB8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D5DBC: bne         $t7, $zero, L_801D5DD8
    if (ctx->r15 != 0) {
        // 0x801D5DC0: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D5DD8;
    }
    // 0x801D5DC0: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D5DC4: lw          $t9, 0xAC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XAC);
    // 0x801D5DC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D5DCC: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D5DD0: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x801D5DD4: sw          $t0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r8;
L_801D5DD8:
    // 0x801D5DD8: jr          $ra
    // 0x801D5DDC: nop

    TRACE_RETURN()
    return;
    // 0x801D5DDC: nop

;}
RECOMP_FUNC void func_801E23A0_6511F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E23A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E23A4: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E23A8: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x801E23AC: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x801E23B0: beq         $t6, $zero, L_801E2400
    if (ctx->r14 == 0) {
        // 0x801E23B4: andi        $t7, $v1, 0x2
        ctx->r15 = ctx->r3 & 0X2;
            goto L_801E2400;
    }
    // 0x801E23B4: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x801E23B8: beq         $t7, $zero, L_801E23C4
    if (ctx->r15 == 0) {
        // 0x801E23BC: addiu       $t8, $zero, 0x5DC0
        ctx->r24 = ADD32(0, 0X5DC0);
            goto L_801E23C4;
    }
    // 0x801E23BC: addiu       $t8, $zero, 0x5DC0
    ctx->r24 = ADD32(0, 0X5DC0);
    // 0x801E23C0: sw          $t8, 0x318($v0)
    MEM_W(0X318, ctx->r2) = ctx->r24;
L_801E23C4:
    // 0x801E23C4: lw          $t9, 0x31C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X31C);
    // 0x801E23C8: lw          $t0, 0x318($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X318);
    // 0x801E23CC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E23D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E23D4: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x801E23D8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801E23DC: sw          $v1, 0x31C($v0)
    MEM_W(0X31C, ctx->r2) = ctx->r3;
    // 0x801E23E0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E23E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801E23E8: ldc1        $f18, -0xBD8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XBD8);
    // 0x801E23EC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E23F0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E23F4: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801E23F8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E23FC: swc1        $f6, 0x320($v0)
    MEM_W(0X320, ctx->r2) = ctx->f6.u32l;
L_801E2400:
    // 0x801E2400: jr          $ra
    // 0x801E2404: nop

    TRACE_RETURN()
    return;
    // 0x801E2404: nop

;}
RECOMP_FUNC void func_801D4C88_643AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4C88: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D4C8C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801D4C90: addiu       $t6, $zero, 0xCF
    ctx->r14 = ADD32(0, 0XCF);
    // 0x801D4C94: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801D4C98: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801D4C9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4CA0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D4CA4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D4CA8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x801D4CAC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D4CB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D4CB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D4CB8: lwc1        $f4, 0x5C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D4CBC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D4CC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D4CC4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D4CC8: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D4CCC: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801D4CD0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    // 0x801D4CD4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801D4CD8: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4CDC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x801D4CE0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x801D4CE4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D4CE8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D4CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D4CF0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D4CF4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D4CF8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x801D4CFC: jal         0x801CDA88
    // 0x801D4D00: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_0;
    // 0x801D4D00: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801D4D04: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D4D08: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D4D0C: lwc1        $f16, 0x5C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801D4D10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4D18: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D4D1C: lwc1        $f18, 0x60($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801D4D20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D4D24: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x801D4D28: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801D4D2C: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D4D30: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D4D34: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D4D38: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D4D3C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D4D40: jal         0x801DF9EC
    // 0x801D4D44: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_1;
    // 0x801D4D44: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D4D48: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4D4C: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4D50: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x801D4D54: bnel        $t3, $zero, L_801D4DAC
    if (ctx->r11 != 0) {
        // 0x801D4D58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D4DAC;
    }
    goto skip_0;
    // 0x801D4D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801D4D5C: lhu         $t4, 0xE4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D4D60: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D4D64: bne         $t4, $at, L_801D4D84
    if (ctx->r12 != ctx->r1) {
        // 0x801D4D68: nop
    
            goto L_801D4D84;
    }
    // 0x801D4D68: nop

    // 0x801D4D6C: jal         0x80038B98
    // 0x801D4D70: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x801D4D70: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_2:
    // 0x801D4D74: lw          $t6, 0xEC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4D78: addiu       $t5, $zero, 0x299
    ctx->r13 = ADD32(0, 0X299);
    // 0x801D4D7C: b           L_801D4D98
    // 0x801D4D80: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
        goto L_801D4D98;
    // 0x801D4D80: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
L_801D4D84:
    // 0x801D4D84: jal         0x80038B98
    // 0x801D4D88: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D4D88: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_3:
    // 0x801D4D8C: lw          $t8, 0xEC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4D90: addiu       $t7, $zero, 0x298
    ctx->r15 = ADD32(0, 0X298);
    // 0x801D4D94: sh          $t7, 0xE4($t8)
    MEM_H(0XE4, ctx->r24) = ctx->r15;
L_801D4D98:
    // 0x801D4D98: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x801D4D9C: lhu         $t9, 0xE2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4DA0: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x801D4DA4: sh          $t0, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r8;
    // 0x801D4DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801D4DAC:
    // 0x801D4DAC: jal         0x801E8824
    // 0x801D4DB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_4;
    // 0x801D4DB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x801D4DB4: jal         0x801D2B90
    // 0x801D4DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_5;
    // 0x801D4DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801D4DBC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D4DC0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801D4DC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D4DC8: jr          $ra
    // 0x801D4DCC: nop

    TRACE_RETURN()
    return;
    // 0x801D4DCC: nop

;}
RECOMP_FUNC void func_801CD834_63C684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD834: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x801CD838: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x801CD83C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CD840: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801CD844: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801CD848: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x801CD84C: lbu         $v1, 0x86($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X86);
    // 0x801CD850: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x801CD854: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801CD858: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x801CD85C: bne         $t9, $zero, L_801CD8D8
    if (ctx->r25 != 0) {
        // 0x801CD860: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_801CD8D8;
    }
    // 0x801CD860: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801CD864: lbu         $a1, 0x84($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X84);
    // 0x801CD868: lbu         $t3, 0x85($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X85);
    // 0x801CD86C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x801CD870: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x801CD874: slt         $t1, $t2, $t3
    ctx->r9 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801CD878: xori        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 ^ 0X1;
    // 0x801CD87C: andi        $t4, $t1, 0xFF
    ctx->r12 = ctx->r9 & 0XFF;
    // 0x801CD880: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x801CD884: beq         $t4, $zero, L_801CD890
    if (ctx->r12 == 0) {
        // 0x801CD888: or          $t1, $t4, $zero
        ctx->r9 = ctx->r12 | 0;
            goto L_801CD890;
    }
    // 0x801CD888: or          $t1, $t4, $zero
    ctx->r9 = ctx->r12 | 0;
    // 0x801CD88C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801CD890:
    // 0x801CD890: sb          $a1, 0x84($t0)
    MEM_B(0X84, ctx->r8) = ctx->r5;
    // 0x801CD894: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x801CD898: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801CD89C: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x801CD8A0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x801CD8A4: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    // 0x801CD8A8: lw          $a3, 0x80($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X80);
    // 0x801CD8AC: sll         $t2, $t9, 25
    ctx->r10 = S32(ctx->r25 << 25);
    // 0x801CD8B0: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x801CD8B4: subu        $t3, $a2, $t2
    ctx->r11 = SUB32(ctx->r6, ctx->r10);
    // 0x801CD8B8: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x801CD8BC: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x801CD8C0: sw          $a3, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r7;
    // 0x801CD8C4: lbu         $v1, 0x87($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X87);
    // 0x801CD8C8: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x801CD8CC: bnel        $v1, $zero, L_801CD8DC
    if (ctx->r3 != 0) {
        // 0x801CD8D0: sb          $v1, 0x86($t0)
        MEM_B(0X86, ctx->r8) = ctx->r3;
            goto L_801CD8DC;
    }
    goto skip_0;
    // 0x801CD8D0: sb          $v1, 0x86($t0)
    MEM_B(0X86, ctx->r8) = ctx->r3;
    skip_0:
    // 0x801CD8D4: lbu         $v1, 0x0($t6)
    ctx->r3 = MEM_BU(ctx->r14, 0X0);
L_801CD8D8:
    // 0x801CD8D8: sb          $v1, 0x86($t0)
    MEM_B(0X86, ctx->r8) = ctx->r3;
L_801CD8DC:
    // 0x801CD8DC: jr          $ra
    // 0x801CD8E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    TRACE_RETURN()
    return;
    // 0x801CD8E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_801D6F70_645DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6F70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D6F74: lw          $v0, 0xA4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA4);
    // 0x801D6F78: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D6F7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D6F80: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D6F84: lwc1        $f16, 0xA0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801D6F88: lh          $v1, 0xAC($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XAC);
    // 0x801D6F8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D6F90: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D6F94: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D6F98: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D6F9C: sh          $t7, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r15;
    // 0x801D6FA0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D6FA4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D6FA8: bne         $t7, $zero, L_801D6FCC
    if (ctx->r15 != 0) {
        // 0x801D6FAC: swc1        $f18, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->f18.u32l;
            goto L_801D6FCC;
    }
    // 0x801D6FAC: swc1        $f18, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f18.u32l;
    // 0x801D6FB0: lw          $v1, 0xA8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA8);
    // 0x801D6FB4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D6FB8: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D6FBC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x801D6FC0: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801D6FC4: sw          $v1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r3;
    // 0x801D6FC8: sw          $t9, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r25;
L_801D6FCC:
    // 0x801D6FCC: jr          $ra
    // 0x801D6FD0: nop

    TRACE_RETURN()
    return;
    // 0x801D6FD0: nop

;}
RECOMP_FUNC void func_801DAE40_649C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAE40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DAE44: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DAE48: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DAE4C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DAE50: addiu       $t6, $t6, 0x32D0
    ctx->r14 = ADD32(ctx->r14, 0X32D0);
    // 0x801DAE54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DAE58: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DAE5C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DAE60: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DAE64: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DAE68: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DAE6C: lbu         $v0, 0x9E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DAE70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAE74: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DAE78: sll         $t0, $v0, 7
    ctx->r8 = S32(ctx->r2 << 7);
    // 0x801DAE7C: addiu       $v0, $t0, 0x200
    ctx->r2 = ADD32(ctx->r8, 0X200);
    // 0x801DAE80: andi        $t2, $v0, 0x3FF
    ctx->r10 = ctx->r2 & 0X3FF;
    // 0x801DAE84: sh          $t2, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r10;
    // 0x801DAE88: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DAE8C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801DAE90: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DAE94: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801DAE98: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DAE9C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DAEA0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DAEA4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DAEA8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DAEAC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DAEB0: jal         0x801E8378
    // 0x801DAEB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DAEB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DAEB8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAEBC: jal         0x800352EC
    // 0x801DAEC0: addiu       $a0, $a0, -0x5128
    ctx->r4 = ADD32(ctx->r4, -0X5128);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DAEC0: addiu       $a0, $a0, -0x5128
    ctx->r4 = ADD32(ctx->r4, -0X5128);
    after_1:
    // 0x801DAEC4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DAEC8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DAECC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DAED0: jr          $ra
    // 0x801DAED4: nop

    TRACE_RETURN()
    return;
    // 0x801DAED4: nop

;}
RECOMP_FUNC void func_801E0084_64EED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0084: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E0088: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E008C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801E0090: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801E0094: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801E0098: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801E009C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E00A0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801E00A4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801E00A8: lh          $t7, 0x70($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X70);
    // 0x801E00AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E00B0: lhu         $t6, 0x76($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X76);
    // 0x801E00B4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E00B8: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x801E00BC: bne         $t6, $t7, L_801E0100
    if (ctx->r14 != ctx->r15) {
        // 0x801E00C0: lui         $at, 0x801F
        ctx->r1 = S32(0X801F << 16);
            goto L_801E0100;
    }
    // 0x801E00C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E00C4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801E00C8: beq         $v1, $zero, L_801E0100
    if (ctx->r3 == 0) {
        // 0x801E00CC: nop
    
            goto L_801E0100;
    }
    // 0x801E00CC: nop

    // 0x801E00D0: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x801E00D4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x801E00D8: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x801E00DC: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801E00E0: lwc1        $f8, 0x64($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801E00E4: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801E00E8: lhu         $t8, 0x14($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X14);
    // 0x801E00EC: sh          $t8, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r24;
    // 0x801E00F0: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x801E00F4: sh          $t9, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r25;
    // 0x801E00F8: lhu         $t0, 0x18($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X18);
    // 0x801E00FC: sh          $t0, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r8;
L_801E0100:
    // 0x801E0100: beq         $s1, $zero, L_801E0204
    if (ctx->r17 == 0) {
        // 0x801E0104: addiu       $s3, $sp, 0x48
        ctx->r19 = ADD32(ctx->r29, 0X48);
            goto L_801E0204;
    }
    // 0x801E0104: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x801E0108: ldc1        $f20, -0xC68($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0XC68);
    // 0x801E010C: addiu       $s2, $sp, 0x44
    ctx->r18 = ADD32(ctx->r29, 0X44);
    // 0x801E0110: lwc1        $f10, 0x88($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
L_801E0114:
    // 0x801E0114: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x801E0118: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x801E011C: lwc1        $f16, 0x8C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8C);
    // 0x801E0120: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x801E0124: lwc1        $f18, 0x90($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X90);
    // 0x801E0128: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801E012C: lhu         $a2, 0x76($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X76);
    // 0x801E0130: lhu         $a1, 0x74($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X74);
    // 0x801E0134: lhu         $a0, 0x72($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X72);
    // 0x801E0138: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x801E013C: jal         0x80033898
    // 0x801E0140: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E0140: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_0:
    // 0x801E0144: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0148: lwc1        $f6, 0x7C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0150: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E0154: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801E0158: swc1        $f8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f8.u32l;
    // 0x801E015C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E0160: lwc1        $f16, 0x80($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X80);
    // 0x801E0164: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E0168: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801E016C: swc1        $f18, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f18.u32l;
    // 0x801E0170: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E0174: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801E0178: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E017C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801E0180: jal         0x801CD504
    // 0x801E0184: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801E0184: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x801E0188: beq         $v0, $zero, L_801E01B4
    if (ctx->r2 == 0) {
        // 0x801E018C: lwc1        $f10, 0x44($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801E01B4;
    }
    // 0x801E018C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0194: jal         0x801CDFE4
    // 0x801E0198: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_2;
    // 0x801E0198: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x801E019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E01A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E01A4: jal         0x80036158
    // 0x801E01A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_3;
    // 0x801E01A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801E01AC: b           L_801E01FC
    // 0x801E01B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_801E01FC;
    // 0x801E01B0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_801E01B4:
    // 0x801E01B4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E01B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E01BC: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x801E01C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E01C4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E01C8: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x801E01CC: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801E01D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E01D4: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x801E01D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E01DC: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x801E01E0: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E01E4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E01E8: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x801E01EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E01F0: jal         0x801CE068
    // 0x801E01F4: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    func_801CE068_63CEB8(rdram, ctx);
        goto after_4;
    // 0x801E01F4: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x801E01F8: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
L_801E01FC:
    // 0x801E01FC: bnel        $s1, $zero, L_801E0114
    if (ctx->r17 != 0) {
        // 0x801E0200: lwc1        $f10, 0x88($s1)
        ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
            goto L_801E0114;
    }
    goto skip_0;
    // 0x801E0200: lwc1        $f10, 0x88($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X88);
    skip_0:
L_801E0204:
    // 0x801E0204: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801E0208: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801E020C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E0210: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801E0214: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801E0218: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801E021C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801E0220: jr          $ra
    // 0x801E0224: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801E0224: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801CF0E8_63DF38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF0E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CF0EC: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CF0F0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF0F4: ldc1        $f8, -0x1178($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1178);
    // 0x801CF0F8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CF0FC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CF100: addiu       $t1, $zero, 0x5DC0
    ctx->r9 = ADD32(0, 0X5DC0);
    // 0x801CF104: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CF108: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CF10C: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CF110: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CF114: nop

    // 0x801CF118: slti        $at, $v0, 0xFA0
    ctx->r1 = SIGNED(ctx->r2) < 0XFA0 ? 1 : 0;
    // 0x801CF11C: bne         $at, $zero, L_801CF138
    if (ctx->r1 != 0) {
        // 0x801CF120: nop
    
            goto L_801CF138;
    }
    // 0x801CF120: nop

    // 0x801CF124: lb          $t9, 0x9F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X9F);
    // 0x801CF128: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
    // 0x801CF12C: sw          $t1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r9;
    // 0x801CF130: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801CF134: sb          $t0, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r8;
L_801CF138:
    // 0x801CF138: jr          $ra
    // 0x801CF13C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801CF13C: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801CEFBC_63DE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEFBC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801CEFC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CEFC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801CEFC8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CEFCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CEFD0: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CEFD4: lbu         $v1, 0x9E($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9E);
    // 0x801CEFD8: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CEFDC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CEFE0: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x801CEFE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CEFE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CEFEC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801CEFF0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801CEFF4: nop

    // 0x801CEFF8: sw          $t7, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r15;
    // 0x801CEFFC: lw          $t9, -0x7600($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7600);
    // 0x801CF000: sb          $v1, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r3;
    // 0x801CF004: jalr        $t9
    // 0x801CF008: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CF008: nop

    after_0:
    // 0x801CF00C: lbu         $v1, 0x47($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X47);
    // 0x801CF010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CF014: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF018: beq         $v1, $zero, L_801CF050
    if (ctx->r3 == 0) {
        // 0x801CF01C: slti        $at, $v1, 0x3
        ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_801CF050;
    }
    // 0x801CF01C: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x801CF020: beql        $at, $zero, L_801CF054
    if (ctx->r1 == 0) {
        // 0x801CF024: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_801CF054;
    }
    goto skip_0;
    // 0x801CF024: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    skip_0:
    // 0x801CF028: lw          $t0, 0xAC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XAC);
    // 0x801CF02C: lw          $t1, 0xA4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA4);
    // 0x801CF030: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CF038: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x801CF03C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x801CF040: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x801CF044: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801CF048: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801CF04C: swc1        $f6, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f6.u32l;
L_801CF050:
    // 0x801CF050: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_801CF054:
    // 0x801CF054: beql        $at, $zero, L_801CF0D8
    if (ctx->r1 == 0) {
        // 0x801CF058: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801CF0D8;
    }
    goto skip_1;
    // 0x801CF058: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801CF05C: lw          $v0, 0xE4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE4);
    // 0x801CF060: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CF064: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x801CF068: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    // 0x801CF06C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CF070: addiu       $t4, $sp, 0x38
    ctx->r12 = ADD32(ctx->r29, 0X38);
    // 0x801CF074: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x801CF078: lw          $a0, 0xC8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC8);
    // 0x801CF07C: addiu       $t5, $sp, 0x3C
    ctx->r13 = ADD32(ctx->r29, 0X3C);
    // 0x801CF080: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x801CF084: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x801CF088: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x801CF08C: sw          $t3, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r11;
    // 0x801CF090: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x801CF094: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801CF098: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801CF09C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801CF0A0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801CF0A4: jal         0x80033898
    // 0x801CF0A8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801CF0A8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x801CF0AC: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
    // 0x801CF0B0: jal         0x8001D394
    // 0x801CF0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801CF0B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801CF0B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801CF0BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801CF0C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CF0C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801CF0C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801CF0CC: jal         0x8001DB04
    // 0x801CF0D0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801CF0D0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x801CF0D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CF0D8:
    // 0x801CF0D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801CF0DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801CF0E0: jr          $ra
    // 0x801CF0E4: nop

    TRACE_RETURN()
    return;
    // 0x801CF0E4: nop

;}
RECOMP_FUNC void func_801DCF60_64BDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCF60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DCF64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DCF68: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DCF6C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DCF70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DCF74: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DCF78: addiu       $t6, $t6, 0x780
    ctx->r14 = ADD32(ctx->r14, 0X780);
    // 0x801DCF7C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DCF80: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DCF84: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DCF88: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DCF8C: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801DCF90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DCF94: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DCF98: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DCF9C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DCFA0: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801DCFA4: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DCFA8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x801DCFAC: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    // 0x801DCFB0: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    // 0x801DCFB4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801DCFB8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DCFBC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DCFC0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DCFC4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DCFC8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DCFCC: jal         0x801E8378
    // 0x801DCFD0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DCFD0: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801DCFD4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DCFD8: jal         0x800352EC
    // 0x801DCFDC: addiu       $a0, $a0, -0x300C
    ctx->r4 = ADD32(ctx->r4, -0X300C);
    func_800352EC_35EEC(rdram, ctx);
        goto after_1;
    // 0x801DCFDC: addiu       $a0, $a0, -0x300C
    ctx->r4 = ADD32(ctx->r4, -0X300C);
    after_1:
    // 0x801DCFE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DCFE4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DCFE8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DCFEC: jr          $ra
    // 0x801DCFF0: nop

    TRACE_RETURN()
    return;
    // 0x801DCFF0: nop

;}
RECOMP_FUNC void func_801CCA5C_63B8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCA5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCA60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCA68: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801CCA6C: addiu       $a0, $a0, -0x7C10
    ctx->r4 = ADD32(ctx->r4, -0X7C10);
    // 0x801CCA70: jal         0x80034DD8
    // 0x801CCA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801CCA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801CCA78: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801CCA7C: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801CCA80: sw          $v0, 0xD0($v1)
    MEM_W(0XD0, ctx->r3) = ctx->r2;
    // 0x801CCA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCA88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCA8C: jr          $ra
    // 0x801CCA90: nop

    TRACE_RETURN()
    return;
    // 0x801CCA90: nop

;}
RECOMP_FUNC void func_801D0D6C_63FBBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0D74: lb          $t6, 0x9F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X9F);
    // 0x801D0D78: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D0D7C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x801D0D80: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801D0D84: beq         $t7, $zero, L_801D0DC8
    if (ctx->r15 == 0) {
        // 0x801D0D88: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_801D0DC8;
    }
    // 0x801D0D88: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D0D8C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D0D90: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801D0D94: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D0D98: sb          $t9, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r25;
    // 0x801D0D9C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0DA0: lwc1        $f4, -0x10A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X10A0);
    // 0x801D0DA4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x801D0DA8: sh          $t0, 0xE0($a1)
    MEM_H(0XE0, ctx->r5) = ctx->r8;
    // 0x801D0DAC: sh          $v0, 0xDE($a1)
    MEM_H(0XDE, ctx->r5) = ctx->r2;
    // 0x801D0DB0: sh          $v0, 0xDC($a1)
    MEM_H(0XDC, ctx->r5) = ctx->r2;
    // 0x801D0DB4: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    // 0x801D0DB8: jal         0x80038B98
    // 0x801D0DBC: swc1        $f4, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f4.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801D0DBC: swc1        $f4, 0xD8($a1)
    MEM_W(0XD8, ctx->r5) = ctx->f4.u32l;
    after_0:
    // 0x801D0DC0: b           L_801D0E48
    // 0x801D0DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D0E48;
    // 0x801D0DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0DC8:
    // 0x801D0DC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D0DCC: lwc1        $f6, 0x60($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X60);
    // 0x801D0DD0: lw          $v0, 0xB0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XB0);
    // 0x801D0DD4: lw          $a0, 0xB4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XB4);
    // 0x801D0DD8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D0DDC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0DE0: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x801D0DE4: nop

    // 0x801D0DE8: cvt.d.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D0DEC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801D0DF0: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x801D0DF4: nop

    // 0x801D0DF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801D0DFC: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x801D0E00: addiu       $v0, $v0, -0xFA0
    ctx->r2 = ADD32(ctx->r2, -0XFA0);
    // 0x801D0E04: sw          $v0, 0xB0($a2)
    MEM_W(0XB0, ctx->r6) = ctx->r2;
    // 0x801D0E08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801D0E0C: div.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801D0E10: swc1        $f4, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->f4.u32l;
    // 0x801D0E14: ldc1        $f8, -0x1098($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1098);
    // 0x801D0E18: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0E1C: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x801D0E20: nop

    // 0x801D0E24: bc1fl       L_801D0E48
    if (!c1cs) {
        // 0x801D0E28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D0E48;
    }
    goto skip_0;
    // 0x801D0E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D0E2C: ldc1        $f10, -0x1090($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1090);
    // 0x801D0E30: add.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f0.d + ctx->f10.d;
    // 0x801D0E34: trunc.w.d   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x801D0E38: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x801D0E3C: nop

    // 0x801D0E40: sw          $a0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r4;
    // 0x801D0E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0E48:
    // 0x801D0E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0E4C: jr          $ra
    // 0x801D0E50: nop

    TRACE_RETURN()
    return;
    // 0x801D0E50: nop

;}
RECOMP_FUNC void func_801D3128_641F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3128: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D312C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D3130: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D3134: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D3138: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D313C: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D3140: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801D3144: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3148: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D314C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D3150: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D3154: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D3158: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D315C: bgez        $v0, L_801D316C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D3160: swc1        $f18, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
            goto L_801D316C;
    }
    // 0x801D3160: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D3164: b           L_801D316C
    // 0x801D3168: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D316C;
    // 0x801D3168: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D316C:
    // 0x801D316C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D3170: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3174: ldc1        $f8, -0xFA8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XFA8);
    // 0x801D3178: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D317C: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D3180: nop

    // 0x801D3184: bc1f        L_801D3190
    if (!c1cs) {
        // 0x801D3188: nop
    
            goto L_801D3190;
    }
    // 0x801D3188: nop

    // 0x801D318C: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
L_801D3190:
    // 0x801D3190: jr          $ra
    // 0x801D3194: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D3194: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801D12A4_6400F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D12A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D12A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D12AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D12B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D12B4: jal         0x801CCE64
    // 0x801D12B8: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D12B8: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D12BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D12C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D12C4: ldc1        $f8, -0x1068($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1068);
    // 0x801D12C8: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801D12CC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801D12D0: ori         $t1, $zero, 0x8CA0
    ctx->r9 = 0 | 0X8CA0;
    // 0x801D12D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D12D8: nop

    // 0x801D12DC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D12E0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D12E4: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D12E8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801D12EC: nop

    // 0x801D12F0: slti        $at, $v0, 0x2328
    ctx->r1 = SIGNED(ctx->r2) < 0X2328 ? 1 : 0;
    // 0x801D12F4: bnel        $at, $zero, L_801D1314
    if (ctx->r1 != 0) {
        // 0x801D12F8: sw          $v0, 0xB4($a0)
        MEM_W(0XB4, ctx->r4) = ctx->r2;
            goto L_801D1314;
    }
    goto skip_0;
    // 0x801D12F8: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    skip_0:
    // 0x801D12FC: lb          $t9, 0x9F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X9F);
    // 0x801D1300: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D1304: sw          $t1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r9;
    // 0x801D1308: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801D130C: sb          $t0, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r8;
    // 0x801D1310: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
L_801D1314:
    // 0x801D1314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D1318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D131C: jr          $ra
    // 0x801D1320: nop

    TRACE_RETURN()
    return;
    // 0x801D1320: nop

;}
RECOMP_FUNC void func_801D5FAC_644DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5FAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D5FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D5FB4: lh          $t6, 0xB8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XB8);
    // 0x801D5FB8: lh          $t7, 0xBA($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XBA);
    // 0x801D5FBC: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x801D5FC0: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x801D5FC4: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D5FC8: bne         $t9, $zero, L_801D5FF0
    if (ctx->r25 != 0) {
        // 0x801D5FCC: sh          $t9, 0xB8($a0)
        MEM_H(0XB8, ctx->r4) = ctx->r25;
            goto L_801D5FF0;
    }
    // 0x801D5FCC: sh          $t9, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r25;
    // 0x801D5FD0: lb          $t1, 0x9F($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X9F);
    // 0x801D5FD4: lbu         $t0, 0x9D($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D5FD8: sh          $zero, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = 0;
    // 0x801D5FDC: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x801D5FE0: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x801D5FE4: sb          $t2, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r10;
    // 0x801D5FE8: b           L_801D5FF8
    // 0x801D5FEC: sb          $t0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r8;
        goto L_801D5FF8;
    // 0x801D5FEC: sb          $t0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r8;
L_801D5FF0:
    // 0x801D5FF0: jal         0x801D68E0
    // 0x801D5FF4: nop

    func_801D68E0_645730(rdram, ctx);
        goto after_0;
    // 0x801D5FF4: nop

    after_0:
L_801D5FF8:
    // 0x801D5FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D5FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D6000: jr          $ra
    // 0x801D6004: nop

    TRACE_RETURN()
    return;
    // 0x801D6004: nop

;}
RECOMP_FUNC void func_801CE068_63CEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE068: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CE06C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CE070: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CE074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CE078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CE07C: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801CE080: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CE084: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x801CE088: bnel        $t7, $at, L_801CE0C4
    if (ctx->r15 != ctx->r1) {
        // 0x801CE08C: sb          $t0, 0x5($a1)
        MEM_B(0X5, ctx->r5) = ctx->r8;
            goto L_801CE0C4;
    }
    goto skip_0;
    // 0x801CE08C: sb          $t0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r8;
    skip_0:
    // 0x801CE090: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CE094: lwc1        $f6, 0x330($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801CE098: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801CE09C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x801CE0A0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801CE0A4: nop

    // 0x801CE0A8: bc1f        L_801CE0B8
    if (!c1cs) {
        // 0x801CE0AC: nop
    
            goto L_801CE0B8;
    }
    // 0x801CE0AC: nop

    // 0x801CE0B0: jr          $ra
    // 0x801CE0B4: sb          $t8, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801CE0B4: sb          $t8, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r24;
L_801CE0B8:
    // 0x801CE0B8: jr          $ra
    // 0x801CE0BC: sb          $t9, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801CE0BC: sb          $t9, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r25;
    // 0x801CE0C0: sb          $t0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r8;
L_801CE0C4:
    // 0x801CE0C4: jr          $ra
    // 0x801CE0C8: nop

    TRACE_RETURN()
    return;
    // 0x801CE0C8: nop

;}
RECOMP_FUNC void func_801D1670_6404C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1670: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D1674: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D1678: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801D167C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x801D1680: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D1684: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801D1688: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x801D168C: beq         $t7, $zero, L_801D177C
    if (ctx->r15 == 0) {
        // 0x801D1690: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_801D177C;
    }
    // 0x801D1690: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801D1694: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801D1698: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801D169C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D16A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D16A4: lhu         $t9, -0x520C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X520C);
    // 0x801D16A8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x801D16AC: beql        $t9, $at, L_801D16C4
    if (ctx->r25 == ctx->r1) {
        // 0x801D16B0: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_801D16C4;
    }
    goto skip_0;
    // 0x801D16B0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    skip_0:
    // 0x801D16B4: sb          $t0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r8;
    // 0x801D16B8: b           L_801D1748
    // 0x801D16BC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
        goto L_801D1748;
    // 0x801D16BC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D16C0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
L_801D16C4:
    // 0x801D16C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D16C8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D16CC: lwc1        $f12, -0x1038($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1038);
    // 0x801D16D0: sb          $zero, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = 0;
    // 0x801D16D4: sb          $zero, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = 0;
    // 0x801D16D8: lh          $t1, 0x0($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X0);
    // 0x801D16DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D16E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D16E4: ori         $t2, $t1, 0x240
    ctx->r10 = ctx->r9 | 0X240;
    // 0x801D16E8: sh          $t2, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r10;
    // 0x801D16EC: lb          $v0, 0x9F($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9F);
    // 0x801D16F0: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x801D16F4: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801D16F8: ori         $t5, $v0, 0xC1
    ctx->r13 = ctx->r2 | 0XC1;
    // 0x801D16FC: andi        $t6, $t5, 0xFFCF
    ctx->r14 = ctx->r13 & 0XFFCF;
    // 0x801D1700: sb          $t6, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r14;
    // 0x801D1704: swc1        $f12, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f12.u32l;
    // 0x801D1708: swc1        $f12, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f12.u32l;
    // 0x801D170C: jal         0x801CBC94
    // 0x801D1710: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_0;
    // 0x801D1710: sw          $a2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D1714: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801D1718: swc1        $f0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->f0.u32l;
    // 0x801D171C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801D1720: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x801D1724: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x801D1728: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x801D172C: jal         0x801CCD10
    // 0x801D1730: lw          $a1, 0x64($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X64);
    func_801CCD10_63BB60(rdram, ctx);
        goto after_1;
    // 0x801D1730: lw          $a1, 0x64($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X64);
    after_1:
    // 0x801D1734: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801D1738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D173C: sw          $v0, 0x318($a1)
    MEM_W(0X318, ctx->r5) = ctx->r2;
    // 0x801D1740: jal         0x801CE5C8
    // 0x801D1744: sw          $zero, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = 0;
    func_801CE5C8_63D418(rdram, ctx);
        goto after_2;
    // 0x801D1744: sw          $zero, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = 0;
    after_2:
L_801D1748:
    // 0x801D1748: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D174C: lw          $a0, 0xE4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XE4);
    // 0x801D1750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1754: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801D1758: lui         $a3, 0x4352
    ctx->r7 = S32(0X4352 << 16);
    // 0x801D175C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D1760: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D1764: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D1768: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D176C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D1770: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D1774: jal         0x801E8378
    // 0x801D1778: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_3;
    // 0x801D1778: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
L_801D177C:
    // 0x801D177C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1780: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801D1784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D1788: jr          $ra
    // 0x801D178C: nop

    TRACE_RETURN()
    return;
    // 0x801D178C: nop

;}
