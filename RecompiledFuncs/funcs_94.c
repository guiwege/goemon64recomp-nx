#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021B8E4_6852C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B8E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B8E8: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021B8EC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B8F0: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x8021B8F4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021B8F8: nop

    // 0x8021B8FC: bc1fl       L_8021B920
    if (!c1cs) {
        // 0x8021B900: lwc1        $f10, 0x14($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
            goto L_8021B920;
    }
    goto skip_0;
    // 0x8021B900: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    skip_0:
    // 0x8021B904: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021B908: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021B90C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B910: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021B914: b           L_8021B928
    // 0x8021B918: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021B928;
    // 0x8021B918: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021B91C: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
L_8021B920:
    // 0x8021B920: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021B924: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8021B928:
    // 0x8021B928: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021B92C: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8021B930: jr          $ra
    // 0x8021B934: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B934: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8020D2E0_676CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D2E0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8020D2E4: addiu       $v0, $v0, -0x4CD8
    ctx->r2 = ADD32(ctx->r2, -0X4CD8);
    // 0x8020D2E8: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x8020D2EC: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x8020D2F0: addiu       $t6, $t6, -0x4CD0
    ctx->r14 = ADD32(ctx->r14, -0X4CD0);
    // 0x8020D2F4: addiu       $t7, $t7, -0x2D90
    ctx->r15 = ADD32(ctx->r15, -0X2D90);
    // 0x8020D2F8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8020D2FC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8020D300: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020D304: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020D308: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x8020D30C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D310: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8020D314: lh          $t9, -0x524E($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X524E);
    // 0x8020D318: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8020D31C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020D320: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8020D324: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x8020D328: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8020D32C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x8020D330: jr          $ra
    // 0x8020D334: sw          $t2, -0xE50($at)
    MEM_W(-0XE50, ctx->r1) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x8020D334: sw          $t2, -0xE50($at)
    MEM_W(-0XE50, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void func_802247C4_68E1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802247C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802247C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x802247CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802247D0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x802247D4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802247D8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x802247DC: addiu       $a1, $a1, 0x45E0
    ctx->r5 = ADD32(ctx->r5, 0X45E0);
    // 0x802247E0: jal         0x80034E08
    // 0x802247E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802247E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802247E8: bne         $v0, $zero, L_802247F8
    if (ctx->r2 != 0) {
        // 0x802247EC: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_802247F8;
    }
    // 0x802247EC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x802247F0: b           L_80224990
    // 0x802247F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80224990;
    // 0x802247F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802247F8:
    // 0x802247F8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x802247FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80224800: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80224804: swc1        $f4, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->f4.u32l;
    // 0x80224808: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8022480C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80224810: swc1        $f6, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->f6.u32l;
    // 0x80224814: jal         0x80035EEC
    // 0x80224818: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80224818: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8022481C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80224820: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80224824: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x80224828: addiu       $v1, $a3, 0x5C
    ctx->r3 = ADD32(ctx->r7, 0X5C);
    // 0x8022482C: bne         $v0, $zero, L_8022483C
    if (ctx->r2 != 0) {
        // 0x80224830: sw          $v0, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->r2;
            goto L_8022483C;
    }
    // 0x80224830: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80224834: b           L_80224990
    // 0x80224838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80224990;
    // 0x80224838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022483C:
    // 0x8022483C: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x80224840: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80224844: jal         0x80014840
    // 0x80224848: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x80224848: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_2:
    // 0x8022484C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80224850: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x80224854: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x80224858: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x8022485C: addiu       $a1, $zero, 0x4BA
    ctx->r5 = ADD32(0, 0X4BA);
    // 0x80224860: jal         0x80014840
    // 0x80224864: sw          $v0, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_3;
    // 0x80224864: sw          $v0, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r2;
    after_3:
    // 0x80224868: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022486C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80224870: addiu       $t8, $zero, 0x4BA
    ctx->r24 = ADD32(0, 0X4BA);
    // 0x80224874: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x80224878: addiu       $t2, $zero, 0x2019
    ctx->r10 = ADD32(0, 0X2019);
    // 0x8022487C: addiu       $t6, $zero, 0x280
    ctx->r14 = ADD32(0, 0X280);
    // 0x80224880: sw          $v0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->r2;
    // 0x80224884: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x80224888: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022488C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80224890: sh          $t8, 0xC($t9)
    MEM_H(0XC, ctx->r25) = ctx->r24;
    // 0x80224894: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80224898: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x8022489C: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x802248A0: swc1        $f8, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f8.u32l;
    // 0x802248A4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802248A8: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x802248AC: swc1        $f10, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f10.u32l;
    // 0x802248B0: lw          $t3, 0x24($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X24);
    // 0x802248B4: sh          $t2, 0xE($t3)
    MEM_H(0XE, ctx->r11) = ctx->r10;
    // 0x802248B8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x802248BC: lw          $t5, 0x24($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X24);
    // 0x802248C0: sb          $t4, 0x5($t5)
    MEM_B(0X5, ctx->r13) = ctx->r12;
    // 0x802248C4: lw          $t7, 0x24($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X24);
    // 0x802248C8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802248CC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x802248D0: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    // 0x802248D4: lw          $t9, 0x24($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X24);
    // 0x802248D8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802248DC: sh          $t8, 0x12($t9)
    MEM_H(0X12, ctx->r25) = ctx->r24;
    // 0x802248E0: lwc1        $f16, -0x4F28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4F28);
    // 0x802248E4: lw          $t0, 0x24($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X24);
    // 0x802248E8: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x802248EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802248F0: swc1        $f16, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f16.u32l;
    // 0x802248F4: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x802248F8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802248FC: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x80224900: lw          $t2, 0x24($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X24);
    // 0x80224904: swc1        $f0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f0.u32l;
    // 0x80224908: lw          $t3, 0x24($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X24);
    // 0x8022490C: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x80224910: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x80224914: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80224918: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8022491C: nop

    // 0x80224920: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80224924: beql        $t5, $zero, L_80224974
    if (ctx->r13 == 0) {
        // 0x80224928: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_80224974;
    }
    goto skip_0;
    // 0x80224928: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8022492C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80224930: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80224934: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80224938: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8022493C: nop

    // 0x80224940: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80224944: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80224948: nop

    // 0x8022494C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80224950: bne         $t5, $zero, L_80224968
    if (ctx->r13 != 0) {
        // 0x80224954: nop
    
            goto L_80224968;
    }
    // 0x80224954: nop

    // 0x80224958: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8022495C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80224960: b           L_80224980
    // 0x80224964: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80224980;
    // 0x80224964: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_80224968:
    // 0x80224968: b           L_80224980
    // 0x8022496C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80224980;
    // 0x8022496C: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x80224970: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_80224974:
    // 0x80224974: nop

    // 0x80224978: bltz        $t5, L_80224968
    if (SIGNED(ctx->r13) < 0) {
        // 0x8022497C: nop
    
            goto L_80224968;
    }
    // 0x8022497C: nop

L_80224980:
    // 0x80224980: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x80224984: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80224988: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8022498C: sb          $t5, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = ctx->r13;
L_80224990:
    // 0x80224990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80224994: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80224998: jr          $ra
    // 0x8022499C: nop

    TRACE_RETURN()
    return;
    // 0x8022499C: nop

;}
RECOMP_FUNC void func_8021C330_685D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C330: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021C334: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021C338: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C33C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021C340: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021C344: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021C348: addiu       $a1, $a1, -0x4090
    ctx->r5 = ADD32(ctx->r5, -0X4090);
    // 0x8021C34C: jal         0x80034E08
    // 0x8021C350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021C350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021C354: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021C358: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021C35C: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021C360: bne         $v0, $zero, L_8021C370
    if (ctx->r2 != 0) {
        // 0x8021C364: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021C370;
    }
    // 0x8021C364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021C368: b           L_8021C3E4
    // 0x8021C36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021C3E4;
    // 0x8021C36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021C370:
    // 0x8021C370: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C374: lwc1        $f0, -0x5324($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5324);
    // 0x8021C378: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x8021C37C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x8021C380: swc1        $f2, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f2.u32l;
    // 0x8021C384: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x8021C388: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x8021C38C: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x8021C390: addiu       $t7, $t7, -0x5D90
    ctx->r15 = ADD32(ctx->r15, -0X5D90);
    // 0x8021C394: addiu       $t6, $t6, 0x93C
    ctx->r14 = ADD32(ctx->r14, 0X93C);
    // 0x8021C398: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x8021C39C: addiu       $t8, $zero, 0x4E1
    ctx->r24 = ADD32(0, 0X4E1);
    // 0x8021C3A0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021C3A4: addu        $a1, $v0, $t6
    ctx->r5 = ADD32(ctx->r2, ctx->r14);
    // 0x8021C3A8: or          $a2, $t7, $v0
    ctx->r6 = ctx->r15 | ctx->r2;
    // 0x8021C3AC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021C3B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021C3B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021C3B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021C3BC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021C3C0: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x8021C3C4: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x8021C3C8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021C3CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021C3D0: jal         0x8000DBF0
    // 0x8021C3D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021C3D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8021C3D8: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8021C3DC: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x8021C3E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8021C3E4:
    // 0x8021C3E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021C3E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021C3EC: jr          $ra
    // 0x8021C3F0: nop

    TRACE_RETURN()
    return;
    // 0x8021C3F0: nop

;}
RECOMP_FUNC void func_80223D10_68D6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80223D10: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80223D14: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80223D18: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80223D1C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80223D20: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80223D24: lhu         $t6, 0x84($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X84);
    // 0x80223D28: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80223D2C: lwc1        $f18, 0x68($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80223D30: lwc1        $f20, 0x6C($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x80223D34: sh          $t6, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r14;
    // 0x80223D38: lhu         $t7, 0x86($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X86);
    // 0x80223D3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80223D40: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x80223D44: lhu         $t8, 0x88($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X88);
    // 0x80223D48: sh          $t8, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r24;
    // 0x80223D4C: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80223D50: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80223D54: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x80223D58: lwc1        $f8, 0xA0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x80223D5C: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80223D60: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x80223D64: lwc1        $f4, 0xA8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x80223D68: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80223D6C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x80223D70: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x80223D74: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x80223D78: jal         0x8001D394
    // 0x80223D7C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x80223D7C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80223D80: addiu       $v0, $s0, 0x5C
    ctx->r2 = ADD32(ctx->r16, 0X5C);
    // 0x80223D84: lhu         $t9, 0x32($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X32);
    // 0x80223D88: lhu         $t3, 0x34($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X34);
    // 0x80223D8C: lhu         $t7, 0x36($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X36);
    // 0x80223D90: addiu       $t1, $t9, 0xC
    ctx->r9 = ADD32(ctx->r25, 0XC);
    // 0x80223D94: addiu       $t5, $t3, 0x6
    ctx->r13 = ADD32(ctx->r11, 0X6);
    // 0x80223D98: addiu       $t9, $t7, 0x3
    ctx->r25 = ADD32(ctx->r15, 0X3);
    // 0x80223D9C: sh          $t1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r9;
    // 0x80223DA0: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x80223DA4: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80223DA8: sh          $t5, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r13;
    // 0x80223DAC: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x80223DB0: sh          $t9, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r25;
    // 0x80223DB4: sh          $t2, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r10;
    // 0x80223DB8: sh          $t6, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r14;
    // 0x80223DBC: sh          $t0, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r8;
    // 0x80223DC0: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x80223DC4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80223DC8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80223DCC: andi        $a3, $t6, 0xFFFF
    ctx->r7 = ctx->r14 & 0XFFFF;
    // 0x80223DD0: andi        $a2, $t2, 0xFFFF
    ctx->r6 = ctx->r10 & 0XFFFF;
    // 0x80223DD4: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80223DD8: jal         0x8001DB04
    // 0x80223DDC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x80223DDC: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_1:
    // 0x80223DE0: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80223DE4: lhu         $t2, 0x58($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X58);
    // 0x80223DE8: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80223DEC: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80223DF0: sh          $t2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r10;
    // 0x80223DF4: lhu         $t3, 0x5A($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X5A);
    // 0x80223DF8: lwc1        $f14, 0x58($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80223DFC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80223E00: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
    // 0x80223E04: lhu         $t4, 0x5C($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X5C);
    // 0x80223E08: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80223E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80223E10: sh          $t4, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r12;
    // 0x80223E14: ldc1        $f8, -0x4F48($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4F48);
    // 0x80223E18: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x80223E1C: nop

    // 0x80223E20: bc1fl       L_80223E9C
    if (!c1cs) {
        // 0x80223E24: lw          $v1, 0x5C($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X5C);
            goto L_80223E9C;
    }
    goto skip_0;
    // 0x80223E24: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
    skip_0:
    // 0x80223E28: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
    // 0x80223E2C: lwc1        $f12, 0x54($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80223E30: lwc1        $f2, 0x24($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80223E34: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80223E38: nop

    // 0x80223E3C: bc1fl       L_80223E54
    if (!c1cs) {
        // 0x80223E40: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_80223E54;
    }
    goto skip_1;
    // 0x80223E40: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_1:
    // 0x80223E44: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x80223E48: b           L_80223E54
    // 0x80223E4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80223E54;
    // 0x80223E4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80223E50: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_80223E54:
    // 0x80223E54: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80223E58: nop

    // 0x80223E5C: bc1fl       L_80223E78
    if (!c1cs) {
        // 0x80223E60: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_80223E78;
    }
    goto skip_2;
    // 0x80223E60: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_2:
    // 0x80223E64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80223E68: swc1        $f12, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f12.u32l;
    // 0x80223E6C: b           L_80223E98
    // 0x80223E70: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
        goto L_80223E98;
    // 0x80223E70: swc1        $f4, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f4.u32l;
    // 0x80223E74: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_80223E78:
    // 0x80223E78: nop

    // 0x80223E7C: bc1fl       L_80223E94
    if (!c1cs) {
        // 0x80223E80: add.s       $f8, $f2, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_80223E94;
    }
    goto skip_3;
    // 0x80223E80: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
    skip_3:
    // 0x80223E84: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80223E88: b           L_80223E98
    // 0x80223E8C: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
        goto L_80223E98;
    // 0x80223E8C: swc1        $f6, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f6.u32l;
    // 0x80223E90: add.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f14.fl;
L_80223E94:
    // 0x80223E94: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
L_80223E98:
    // 0x80223E98: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
L_80223E9C:
    // 0x80223E9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80223EA0: ldc1        $f14, -0x4F40($at)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r1, -0X4F40);
    // 0x80223EA4: lwc1        $f0, 0x24($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80223EA8: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80223EAC: lw          $t5, 0x5C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X5C);
    // 0x80223EB0: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
    // 0x80223EB4: lwc1        $f12, 0x40($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80223EB8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80223EBC: c.lt.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d < ctx->f10.d;
    // 0x80223EC0: nop

    // 0x80223EC4: bc1fl       L_80223F30
    if (!c1cs) {
        // 0x80223EC8: lwc1        $f12, 0x48($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
            goto L_80223F30;
    }
    goto skip_4;
    // 0x80223EC8: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
    skip_4:
    // 0x80223ECC: lwc1        $f2, 0x3C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80223ED0: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80223ED4: nop

    // 0x80223ED8: bc1fl       L_80223EF0
    if (!c1cs) {
        // 0x80223EDC: sub.s       $f0, $f2, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
            goto L_80223EF0;
    }
    goto skip_5;
    // 0x80223EDC: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    skip_5:
    // 0x80223EE0: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x80223EE4: b           L_80223EF0
    // 0x80223EE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80223EF0;
    // 0x80223EE8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80223EEC: sub.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f16.fl;
L_80223EF0:
    // 0x80223EF0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80223EF4: nop

    // 0x80223EF8: bc1fl       L_80223F14
    if (!c1cs) {
        // 0x80223EFC: c.lt.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
            goto L_80223F14;
    }
    goto skip_6;
    // 0x80223EFC: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    skip_6:
    // 0x80223F00: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80223F04: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
    // 0x80223F08: b           L_80223F2C
    // 0x80223F0C: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
        goto L_80223F2C;
    // 0x80223F0C: swc1        $f4, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f4.u32l;
    // 0x80223F10: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
L_80223F14:
    // 0x80223F14: nop

    // 0x80223F18: bc1fl       L_80223F2C
    if (!c1cs) {
        // 0x80223F1C: add.s       $f16, $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
            goto L_80223F2C;
    }
    goto skip_7;
    // 0x80223F1C: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
    skip_7:
    // 0x80223F20: b           L_80223F2C
    // 0x80223F24: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
        goto L_80223F2C;
    // 0x80223F24: sub.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f12.fl;
    // 0x80223F28: add.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f12.fl;
L_80223F2C:
    // 0x80223F2C: lwc1        $f12, 0x48($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X48);
L_80223F30:
    // 0x80223F30: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x80223F34: c.lt.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d < ctx->f6.d;
    // 0x80223F38: nop

    // 0x80223F3C: bc1fl       L_80223FA8
    if (!c1cs) {
        // 0x80223F40: lwc1        $f12, 0x50($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X50);
            goto L_80223FA8;
    }
    goto skip_8;
    // 0x80223F40: lwc1        $f12, 0x50($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X50);
    skip_8:
    // 0x80223F44: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80223F48: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80223F4C: nop

    // 0x80223F50: bc1fl       L_80223F68
    if (!c1cs) {
        // 0x80223F54: sub.s       $f0, $f2, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
            goto L_80223F68;
    }
    goto skip_9;
    // 0x80223F54: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
    skip_9:
    // 0x80223F58: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x80223F5C: b           L_80223F68
    // 0x80223F60: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80223F68;
    // 0x80223F60: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80223F64: sub.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f18.fl;
L_80223F68:
    // 0x80223F68: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80223F6C: nop

    // 0x80223F70: bc1fl       L_80223F8C
    if (!c1cs) {
        // 0x80223F74: c.lt.s      $f2, $f18
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
            goto L_80223F8C;
    }
    goto skip_10;
    // 0x80223F74: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    skip_10:
    // 0x80223F78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80223F7C: mov.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.fl = ctx->f2.fl;
    // 0x80223F80: b           L_80223FA4
    // 0x80223F84: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
        goto L_80223FA4;
    // 0x80223F84: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    // 0x80223F88: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
L_80223F8C:
    // 0x80223F8C: nop

    // 0x80223F90: bc1fl       L_80223FA4
    if (!c1cs) {
        // 0x80223F94: add.s       $f18, $f18, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
            goto L_80223FA4;
    }
    goto skip_11;
    // 0x80223F94: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    skip_11:
    // 0x80223F98: b           L_80223FA4
    // 0x80223F9C: sub.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f12.fl;
        goto L_80223FA4;
    // 0x80223F9C: sub.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80223FA0: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
L_80223FA4:
    // 0x80223FA4: lwc1        $f12, 0x50($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X50);
L_80223FA8:
    // 0x80223FA8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x80223FAC: c.lt.d      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.d < ctx->f10.d;
    // 0x80223FB0: nop

    // 0x80223FB4: bc1fl       L_80224020
    if (!c1cs) {
        // 0x80223FB8: swc1        $f16, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
            goto L_80224020;
    }
    goto skip_12;
    // 0x80223FB8: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    skip_12:
    // 0x80223FBC: lwc1        $f2, 0x4C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x80223FC0: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x80223FC4: nop

    // 0x80223FC8: bc1fl       L_80223FE0
    if (!c1cs) {
        // 0x80223FCC: sub.s       $f0, $f2, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_80223FE0;
    }
    goto skip_13;
    // 0x80223FCC: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
    skip_13:
    // 0x80223FD0: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x80223FD4: b           L_80223FE0
    // 0x80223FD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80223FE0;
    // 0x80223FD8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80223FDC: sub.s       $f0, $f2, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f20.fl;
L_80223FE0:
    // 0x80223FE0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80223FE4: nop

    // 0x80223FE8: bc1fl       L_80224004
    if (!c1cs) {
        // 0x80223FEC: c.lt.s      $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
            goto L_80224004;
    }
    goto skip_14;
    // 0x80223FEC: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    skip_14:
    // 0x80223FF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80223FF4: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x80223FF8: b           L_8022401C
    // 0x80223FFC: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
        goto L_8022401C;
    // 0x80223FFC: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    // 0x80224000: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
L_80224004:
    // 0x80224004: nop

    // 0x80224008: bc1fl       L_8022401C
    if (!c1cs) {
        // 0x8022400C: add.s       $f20, $f20, $f12
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f12.fl;
            goto L_8022401C;
    }
    goto skip_15;
    // 0x8022400C: add.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f12.fl;
    skip_15:
    // 0x80224010: b           L_8022401C
    // 0x80224014: sub.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f12.fl;
        goto L_8022401C;
    // 0x80224014: sub.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f12.fl;
    // 0x80224018: add.s       $f20, $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f12.fl;
L_8022401C:
    // 0x8022401C: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
L_80224020:
    // 0x80224020: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80224024: jal         0x80011760
    // 0x80224028: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    func_80011760_12360(rdram, ctx);
        goto after_2;
    // 0x80224028: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
    after_2:
    // 0x8022402C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80224030: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80224034: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80224038: jr          $ra
    // 0x8022403C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x8022403C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80217FCC_6819AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80217FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217FD4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80217FD8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80217FDC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217FE0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80217FE4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80217FE8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80217FEC: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80217FF0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80217FF4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80217FF8: jal         0x800040A8
    // 0x80217FFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80217FFC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80218000: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80218004: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80218008: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x8021800C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80218010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80218014: jr          $ra
    // 0x80218018: nop

    TRACE_RETURN()
    return;
    // 0x80218018: nop

;}
RECOMP_FUNC void func_802177FC_6811DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802177FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80217800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80217808: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021780C: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80217810: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80217814: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80217818: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x8021781C: jal         0x8001B5AC
    // 0x80217820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80217820: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80217824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217828: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021782C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80217830: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80217834: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80217838: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021783C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80217840: nop

    // 0x80217844: bc1fl       L_802178B0
    if (!c1cs) {
        // 0x80217848: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802178B0;
    }
    goto skip_0;
    // 0x80217848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021784C: lbu         $v1, 0x5C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5C);
    // 0x80217850: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80217854: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x80217858: bne         $v1, $at, L_80217890
    if (ctx->r3 != ctx->r1) {
        // 0x8021785C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_80217890;
    }
    // 0x8021785C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80217860: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80217864: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217868: lwc1        $f18, -0x55E0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X55E0);
    // 0x8021786C: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80217870: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217874: addiu       $t8, $t8, 0x1498
    ctx->r24 = ADD32(ctx->r24, 0X1498);
    // 0x80217878: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021787C: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80217880: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80217884: sw          $t9, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r25;
    // 0x80217888: b           L_802178AC
    // 0x8021788C: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
        goto L_802178AC;
    // 0x8021788C: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
L_80217890:
    // 0x80217890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217894: bnel        $v1, $at, L_802178AC
    if (ctx->r3 != ctx->r1) {
        // 0x80217898: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_802178AC;
    }
    goto skip_1;
    // 0x80217898: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x8021789C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802178A0: b           L_802178AC
    // 0x802178A4: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
        goto L_802178AC;
    // 0x802178A4: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x802178A8: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_802178AC:
    // 0x802178AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802178B0:
    // 0x802178B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802178B4: jr          $ra
    // 0x802178B8: nop

    TRACE_RETURN()
    return;
    // 0x802178B8: nop

;}
RECOMP_FUNC void func_8021B270_684C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B270: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8021B274: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8021B278: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021B27C: bgez        $t6, L_8021B294
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021B280: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8021B294;
    }
    // 0x8021B280: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021B284: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8021B288: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021B28C: nop

    // 0x8021B290: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8021B294:
    // 0x8021B294: jr          $ra
    // 0x8021B298: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B298: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80217A68_681448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217A68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80217A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217A70: lh          $t6, 0x6A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6A);
    // 0x80217A74: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80217A78: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217A7C: beql        $t6, $zero, L_80217AA8
    if (ctx->r14 == 0) {
        // 0x80217A80: addiu       $v0, $a2, 0x5C
        ctx->r2 = ADD32(ctx->r6, 0X5C);
            goto L_80217AA8;
    }
    goto skip_0;
    // 0x80217A80: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
    skip_0:
    // 0x80217A84: lhu         $t7, 0xC($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XC);
    // 0x80217A88: lh          $t8, 0x10($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X10);
    // 0x80217A8C: lh          $t1, 0xE($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XE);
    // 0x80217A90: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80217A94: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80217A98: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80217A9C: sh          $t0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r8;
    // 0x80217AA0: sh          $t2, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r10;
    // 0x80217AA4: addiu       $v0, $a2, 0x5C
    ctx->r2 = ADD32(ctx->r6, 0X5C);
L_80217AA8:
    // 0x80217AA8: lhu         $t3, 0xC($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0XC);
    // 0x80217AAC: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217AB0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80217AB4: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x80217AB8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80217ABC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80217AC0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    // 0x80217AC4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80217AC8: jal         0x8001B5AC
    // 0x80217ACC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80217ACC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80217AD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217AD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80217AD8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80217ADC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80217AE0: sub.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80217AE4: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80217AE8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80217AEC: nop

    // 0x80217AF0: bc1fl       L_80217B1C
    if (!c1cs) {
        // 0x80217AF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80217B1C;
    }
    goto skip_1;
    // 0x80217AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80217AF8: lbu         $t4, 0x4($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X4);
    // 0x80217AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80217B00: bnel        $t4, $at, L_80217B18
    if (ctx->r12 != ctx->r1) {
        // 0x80217B04: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_80217B18;
    }
    goto skip_2;
    // 0x80217B04: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_2:
    // 0x80217B08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80217B0C: b           L_80217B18
    // 0x80217B10: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
        goto L_80217B18;
    // 0x80217B10: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x80217B14: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_80217B18:
    // 0x80217B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80217B1C:
    // 0x80217B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80217B20: jr          $ra
    // 0x80217B24: nop

    TRACE_RETURN()
    return;
    // 0x80217B24: nop

;}
RECOMP_FUNC void func_80225B20_68F500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B20: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80225B24: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80225B28: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80225B2C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80225B30: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x80225B34: jr          $ra
    // 0x80225B38: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80225B38: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80227A00_6913E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A00: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80227A04: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80227A08: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80227A0C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80227A10: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80227A14: jr          $ra
    // 0x80227A18: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80227A18: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021E314_687CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E314: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021E318: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021E31C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021E320: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021E324: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021E328: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021E32C: addiu       $a1, $a1, -0x1E00
    ctx->r5 = ADD32(ctx->r5, -0X1E00);
    // 0x8021E330: jal         0x80034E08
    // 0x8021E334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021E334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021E338: bne         $v0, $zero, L_8021E348
    if (ctx->r2 != 0) {
        // 0x8021E33C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021E348;
    }
    // 0x8021E33C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021E340: b           L_8021E3C8
    // 0x8021E344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021E3C8;
    // 0x8021E344: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021E348:
    // 0x8021E348: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E34C: lwc1        $f0, -0x52B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52B8);
    // 0x8021E350: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021E354: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021E358: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021E35C: addiu       $a1, $a1, 0x6D80
    ctx->r5 = ADD32(ctx->r5, 0X6D80);
    // 0x8021E360: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021E364: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021E368: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x8021E36C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021E370: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x8021E374: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021E378: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021E37C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021E380: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021E384: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021E388: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021E38C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021E390: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021E394: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021E398: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021E39C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021E3A0: jal         0x8000DBF0
    // 0x8021E3A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021E3A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021E3A8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8021E3AC: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021E3B0: addiu       $v1, $v0, 0x5C
    ctx->r3 = ADD32(ctx->r2, 0X5C);
    // 0x8021E3B4: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8021E3B8: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021E3BC: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x8021E3C0: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021E3C4: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
L_8021E3C8:
    // 0x8021E3C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021E3CC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021E3D0: jr          $ra
    // 0x8021E3D4: nop

    TRACE_RETURN()
    return;
    // 0x8021E3D4: nop

;}
RECOMP_FUNC void func_80217700_6810E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80217704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217708: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021770C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80217710: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217714: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80217718: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021771C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80217720: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80217724: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80217728: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021772C: jal         0x800040A8
    // 0x80217730: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80217730: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80217734: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80217738: addiu       $t6, $v0, 0x240
    ctx->r14 = ADD32(ctx->r2, 0X240);
    // 0x8021773C: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x80217740: sh          $t7, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r15;
    // 0x80217744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80217748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021774C: jr          $ra
    // 0x80217750: nop

    TRACE_RETURN()
    return;
    // 0x80217750: nop

;}
RECOMP_FUNC void func_80226D20_690700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80226D24: jr          $ra
    // 0x80226D28: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80226D28: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802123F4_67BDD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802123F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802123F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802123FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80212400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212404: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80212408: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021240C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80212410: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80212414: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80212418: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021241C: jal         0x800040A8
    // 0x80212420: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212420: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x80212424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80212428: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021242C: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x80212430: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212438: jr          $ra
    // 0x8021243C: nop

    TRACE_RETURN()
    return;
    // 0x8021243C: nop

;}
RECOMP_FUNC void func_80227468_690E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227468: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8022746C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227470: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    // 0x80227474: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x80227478: jr          $ra
    // 0x8022747C: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022747C: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
;}
RECOMP_FUNC void func_802124FC_67BEDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802124FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212500: lwc1        $f4, 0x8C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80212504: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212508: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    // 0x8021250C: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80212510: nop

    // 0x80212514: bc1fl       L_80212538
    if (!c1cs) {
        // 0x80212518: lwc1        $f10, 0x34($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
            goto L_80212538;
    }
    goto skip_0;
    // 0x80212518: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    skip_0:
    // 0x8021251C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212520: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80212524: lwc1        $f8, 0x30($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80212528: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021252C: b           L_80212540
    // 0x80212530: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80212540;
    // 0x80212530: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80212534: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
L_80212538:
    // 0x80212538: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021253C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_80212540:
    // 0x80212540: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80212544: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80212548: jr          $ra
    // 0x8021254C: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8021254C: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80217970_681350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80217974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217978: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021797C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80217980: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217984: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80217988: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021798C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80217990: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80217994: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80217998: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021799C: jal         0x800040A8
    // 0x802179A0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802179A0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x802179A4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802179A8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x802179AC: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x802179B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802179B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802179B8: jr          $ra
    // 0x802179BC: nop

    TRACE_RETURN()
    return;
    // 0x802179BC: nop

;}
RECOMP_FUNC void func_8021F330_688D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F330: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x8021F334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F338: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F33C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F340: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8021F344: jal         0x80013B14
    // 0x8021F348: lhu         $a0, -0x5C80($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5C80);
    func_80013B14_14714(rdram, ctx);
        goto after_0;
    // 0x8021F348: lhu         $a0, -0x5C80($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5C80);
    after_0:
    // 0x8021F34C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021F354: jr          $ra
    // 0x8021F358: nop

    TRACE_RETURN()
    return;
    // 0x8021F358: nop

;}
RECOMP_FUNC void func_80217C64_681644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217C64: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80217C68: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80217C6C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80217C70: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80217C74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217C78: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80217C7C: addiu       $a1, $a1, 0x7A68
    ctx->r5 = ADD32(ctx->r5, 0X7A68);
    // 0x80217C80: jal         0x80034E08
    // 0x80217C84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80217C84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80217C88: bne         $v0, $zero, L_80217C98
    if (ctx->r2 != 0) {
        // 0x80217C8C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217C98;
    }
    // 0x80217C8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217C90: b           L_80217CFC
    // 0x80217C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217CFC;
    // 0x80217C94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217C98:
    // 0x80217C98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217C9C: lwc1        $f0, -0x55C4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55C4);
    // 0x80217CA0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80217CA4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80217CA8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80217CAC: addiu       $a1, $a1, 0x1754
    ctx->r5 = ADD32(ctx->r5, 0X1754);
    // 0x80217CB0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217CB4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80217CB8: addiu       $t6, $zero, 0x4DC
    ctx->r14 = ADD32(0, 0X4DC);
    // 0x80217CBC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80217CC0: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80217CC4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80217CC8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80217CCC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80217CD0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80217CD4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80217CD8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80217CDC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80217CE0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80217CE4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80217CE8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80217CEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80217CF0: jal         0x8000DBF0
    // 0x80217CF4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80217CF4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80217CF8: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80217CFC:
    // 0x80217CFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80217D00: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80217D04: jr          $ra
    // 0x80217D08: nop

    TRACE_RETURN()
    return;
    // 0x80217D08: nop

;}
RECOMP_FUNC void func_80225CC4_68F6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80225CC8: jr          $ra
    // 0x80225CCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80225CCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021E3D8_687DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E3D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E3DC: lwc1        $f0, -0x52B4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52B4);
    // 0x8021E3E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021E3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E3E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021E3EC: sb          $t6, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r14;
    // 0x8021E3F0: swc1        $f0, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f0.u32l;
    // 0x8021E3F4: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021E3F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021E3FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8021E400: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021E404: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x8021E408: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8021E40C: jal         0x8001B5AC
    // 0x8021E410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x8021E410: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021E414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021E418: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021E41C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E420: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8021E424: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x8021E428: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8021E42C: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x8021E430: nop

    // 0x8021E434: bc1fl       L_8021E460
    if (!c1cs) {
        // 0x8021E438: lhu         $t8, 0x14($a1)
        ctx->r24 = MEM_HU(ctx->r5, 0X14);
            goto L_8021E460;
    }
    goto skip_0;
    // 0x8021E438: lhu         $t8, 0x14($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X14);
    skip_0:
    // 0x8021E43C: lbu         $t7, 0x5C($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X5C);
    // 0x8021E440: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021E444: bnel        $t7, $at, L_8021E45C
    if (ctx->r15 != ctx->r1) {
        // 0x8021E448: swc1        $f2, 0x28($a1)
        MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
            goto L_8021E45C;
    }
    goto skip_1;
    // 0x8021E448: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
    skip_1:
    // 0x8021E44C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8021E450: b           L_8021E45C
    // 0x8021E454: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
        goto L_8021E45C;
    // 0x8021E454: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x8021E458: swc1        $f2, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f2.u32l;
L_8021E45C:
    // 0x8021E45C: lhu         $t8, 0x14($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X14);
L_8021E460:
    // 0x8021E460: lhu         $t0, 0x16($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X16);
    // 0x8021E464: lhu         $t2, 0x18($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X18);
    // 0x8021E468: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8021E46C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8021E470: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x8021E474: sh          $t9, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r25;
    // 0x8021E478: sh          $t1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r9;
    // 0x8021E47C: sh          $t3, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r11;
    // 0x8021E480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021E484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021E488: jr          $ra
    // 0x8021E48C: nop

    TRACE_RETURN()
    return;
    // 0x8021E48C: nop

;}
RECOMP_FUNC void func_8021467C_67E05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021467C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214680: jr          $ra
    // 0x80214684: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214684: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80229968_693348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229968: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x8022996C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80229970: lwc1        $f6, 0xA0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x80229974: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80229978: lwc1        $f8, 0xAC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x8022997C: jr          $ra
    // 0x80229980: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80229980: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80224B24_68E504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224B24: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80224B28: jr          $ra
    // 0x80224B2C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x80224B2C: swc1        $f12, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_802122A4_67BC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122A4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802122A8: jr          $ra
    // 0x802122AC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802122AC: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80229330_692D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229330: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80229334: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80229338: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022933C: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80229340: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80229344: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80229348: addiu       $a1, $a1, -0x7178
    ctx->r5 = ADD32(ctx->r5, -0X7178);
    // 0x8022934C: jal         0x80034E08
    // 0x80229350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80229350: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80229354: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80229358: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8022935C: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80229360: bne         $v0, $zero, L_80229370
    if (ctx->r2 != 0) {
        // 0x80229364: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80229370;
    }
    // 0x80229364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80229368: b           L_802293EC
    // 0x8022936C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802293EC;
    // 0x8022936C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80229370:
    // 0x80229370: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229374: lwc1        $f0, -0x4D7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D7C);
    // 0x80229378: swc1        $f14, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f14.u32l;
    // 0x8022937C: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    // 0x80229380: swc1        $f2, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f2.u32l;
    // 0x80229384: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80229388: addiu       $a1, $a1, 0x6ED0
    ctx->r5 = ADD32(ctx->r5, 0X6ED0);
    // 0x8022938C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80229390: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80229394: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80229398: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x8022939C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x802293A0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x802293A4: addiu       $t9, $zero, 0x4E4
    ctx->r25 = ADD32(0, 0X4E4);
    // 0x802293A8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x802293AC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x802293B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802293B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x802293B8: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x802293BC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802293C0: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x802293C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802293C8: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x802293CC: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x802293D0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802293D4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802293D8: jal         0x8000DBF0
    // 0x802293DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x802293DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x802293E0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x802293E4: sw          $v0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r2;
    // 0x802293E8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_802293EC:
    // 0x802293EC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802293F0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802293F4: jr          $ra
    // 0x802293F8: nop

    TRACE_RETURN()
    return;
    // 0x802293F8: nop

;}
RECOMP_FUNC void func_802157C0_67F1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802157C0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802157C4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x802157C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802157CC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x802157D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802157D4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802157D8: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x802157DC: addiu       $a1, $a1, 0x5720
    ctx->r5 = ADD32(ctx->r5, 0X5720);
    // 0x802157E0: jal         0x80034E08
    // 0x802157E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802157E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802157E8: bne         $v0, $zero, L_802157F8
    if (ctx->r2 != 0) {
        // 0x802157EC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802157F8;
    }
    // 0x802157EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802157F0: b           L_80215904
    // 0x802157F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80215904;
    // 0x802157F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802157F8:
    // 0x802157F8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x802157FC: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80215800: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80215804: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80215808: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021580C: jal         0x800040A8
    // 0x80215810: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x80215810: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_1:
    // 0x80215814: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80215818: lwc1        $f0, -0x5648($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5648);
    // 0x8021581C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80215820: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80215824: addiu       $v1, $v0, 0x200
    ctx->r3 = ADD32(ctx->r2, 0X200);
    // 0x80215828: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021582C: andi        $t6, $v1, 0x3FF
    ctx->r14 = ctx->r3 & 0X3FF;
    // 0x80215830: addiu       $a1, $a1, -0x4C30
    ctx->r5 = ADD32(ctx->r5, -0X4C30);
    // 0x80215834: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80215838: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x8021583C: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x80215840: addiu       $t8, $zero, 0x4DC
    ctx->r24 = ADD32(0, 0X4DC);
    // 0x80215844: sh          $t6, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r14;
    // 0x80215848: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021584C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80215850: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80215854: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80215858: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021585C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215860: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80215864: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80215868: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021586C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80215870: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80215874: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80215878: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8021587C: jal         0x8000DBF0
    // 0x80215880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x80215880: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x80215884: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80215888: lwc1        $f0, -0x5644($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5644);
    // 0x8021588C: addiu       $v1, $s0, 0x5C
    ctx->r3 = ADD32(ctx->r16, 0X5C);
    // 0x80215890: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80215894: lhu         $t0, 0x52($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X52);
    // 0x80215898: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021589C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x802158A0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x802158A4: addiu       $a1, $a1, -0x4A40
    ctx->r5 = ADD32(ctx->r5, -0X4A40);
    // 0x802158A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802158AC: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802158B0: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x802158B4: addiu       $t1, $zero, 0x4DC
    ctx->r9 = ADD32(0, 0X4DC);
    // 0x802158B8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x802158BC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x802158C0: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x802158C4: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802158C8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x802158CC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802158D0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802158D4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x802158D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802158DC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x802158E0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x802158E4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x802158E8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802158EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802158F0: jal         0x8000DBF0
    // 0x802158F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x802158F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x802158F8: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x802158FC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80215900: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80215904:
    // 0x80215904: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80215908: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8021590C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80215910: jr          $ra
    // 0x80215914: nop

    TRACE_RETURN()
    return;
    // 0x80215914: nop

;}
RECOMP_FUNC void func_8022817C_691B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022817C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80228180: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80228184: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80228188: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8022818C: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x80228190: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80228194: jr          $ra
    // 0x80228198: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80228198: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021DE84_687864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DE84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021DE88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021DE8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021DE90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DE94: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8021DE98: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021DE9C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021DEA0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021DEA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021DEA8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021DEAC: jal         0x800040A8
    // 0x8021DEB0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021DEB0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8021DEB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021DEB8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021DEBC: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x8021DEC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DEC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021DEC8: jr          $ra
    // 0x8021DECC: nop

    TRACE_RETURN()
    return;
    // 0x8021DECC: nop

;}
RECOMP_FUNC void func_8021E200_687BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E200: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8021E204: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021E208: ldc1        $f4, -0x52C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X52C0);
    // 0x8021E20C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021E210: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021E214: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021E218: nop

    // 0x8021E21C: bc1fl       L_8021E298
    if (!c1cs) {
        // 0x8021E220: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021E298;
    }
    goto skip_0;
    // 0x8021E220: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8021E224: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E228: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E22C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021E230: nop

    // 0x8021E234: bc1fl       L_8021E24C
    if (!c1cs) {
        // 0x8021E238: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_8021E24C;
    }
    goto skip_1;
    // 0x8021E238: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x8021E23C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021E240: b           L_8021E24C
    // 0x8021E244: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021E24C;
    // 0x8021E244: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021E248: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021E24C:
    // 0x8021E24C: lwc1        $f14, 0x14($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021E250: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021E254: nop

    // 0x8021E258: bc1fl       L_8021E274
    if (!c1cs) {
        // 0x8021E25C: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_8021E274;
    }
    goto skip_2;
    // 0x8021E25C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x8021E260: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021E264: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x8021E268: b           L_8021E294
    // 0x8021E26C: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
        goto L_8021E294;
    // 0x8021E26C: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x8021E270: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_8021E274:
    // 0x8021E274: nop

    // 0x8021E278: bc1fl       L_8021E290
    if (!c1cs) {
        // 0x8021E27C: add.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_8021E290;
    }
    goto skip_3;
    // 0x8021E27C: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x8021E280: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8021E284: b           L_8021E294
    // 0x8021E288: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
        goto L_8021E294;
    // 0x8021E288: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x8021E28C: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
L_8021E290:
    // 0x8021E290: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
L_8021E294:
    // 0x8021E294: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_8021E298:
    // 0x8021E298: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021E29C: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x8021E2A0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E2A4: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x8021E2A8: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021E2AC: jr          $ra
    // 0x8021E2B0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021E2B0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021F110_688AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8021F114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F118: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8021F11C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F120: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021F124: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021F128: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x8021F12C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8021F130: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    // 0x8021F134: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021F138: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021F13C: bc1f        L_8021F15C
    if (!c1cs) {
        // 0x8021F140: swc1        $f4, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
            goto L_8021F15C;
    }
    // 0x8021F140: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    // 0x8021F144: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021F148: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021F14C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F150: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021F154: b           L_8021F168
    // 0x8021F158: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021F168;
    // 0x8021F158: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021F15C:
    // 0x8021F15C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021F160: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F164: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_8021F168:
    // 0x8021F168: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021F16C: lwc1        $f2, 0x1C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8021F170: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x8021F174: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F178: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021F17C: nop

    // 0x8021F180: bc1f        L_8021F194
    if (!c1cs) {
        // 0x8021F184: swc1        $f6, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
            goto L_8021F194;
    }
    // 0x8021F184: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x8021F188: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021F18C: b           L_8021F198
    // 0x8021F190: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021F198;
    // 0x8021F190: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021F194:
    // 0x8021F194: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021F198:
    // 0x8021F198: div.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F19C: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8021F1A0: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x8021F1A4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8021F1A8: nop

    // 0x8021F1AC: bc1f        L_8021F1C0
    if (!c1cs) {
        // 0x8021F1B0: swc1        $f8, 0x20($v1)
        MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
            goto L_8021F1C0;
    }
    // 0x8021F1B0: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x8021F1B4: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021F1B8: b           L_8021F1C8
    // 0x8021F1BC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021F1C8;
    // 0x8021F1BC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8021F1C0:
    // 0x8021F1C0: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8021F1C4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021F1C8:
    // 0x8021F1C8: div.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021F1CC: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021F1D0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021F1D4: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021F1D8: swc1        $f10, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f10.u32l;
    // 0x8021F1DC: jal         0x800040A8
    // 0x8021F1E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021F1E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8021F1E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F1E8: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021F1EC: sh          $t6, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r14;
    // 0x8021F1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F1F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8021F1F8: jr          $ra
    // 0x8021F1FC: nop

    TRACE_RETURN()
    return;
    // 0x8021F1FC: nop

;}
RECOMP_FUNC void func_802281CC_691BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802281D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802281D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802281D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802281DC: lwc1        $f10, 0x80($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802281E0: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802281E4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802281E8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802281EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802281F0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802281F4: jal         0x800040A8
    // 0x802281F8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802281F8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x802281FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80228200: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80228204: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80228208: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8022820C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80228210: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80228214: lhu         $t0, 0x30($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X30);
    // 0x80228218: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8022821C: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x80228220: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80228224: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80228228: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x8022822C: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80228230: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80228234: nop

    // 0x80228238: sh          $t7, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r15;
    // 0x8022823C: lh          $t2, 0x32($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X32);
    // 0x80228240: div         $zero, $t1, $t2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r10)));
    // 0x80228244: mflo        $t3
    ctx->r11 = lo;
    // 0x80228248: sh          $t3, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r11;
    // 0x8022824C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228250: bne         $t2, $zero, L_8022825C
    if (ctx->r10 != 0) {
        // 0x80228254: nop
    
            goto L_8022825C;
    }
    // 0x80228254: nop

    // 0x80228258: break       7
    do_break(2149745240);
L_8022825C:
    // 0x8022825C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80228260: bne         $t2, $at, L_80228274
    if (ctx->r10 != ctx->r1) {
        // 0x80228264: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80228274;
    }
    // 0x80228264: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80228268: bne         $t1, $at, L_80228274
    if (ctx->r9 != ctx->r1) {
        // 0x8022826C: nop
    
            goto L_80228274;
    }
    // 0x8022826C: nop

    // 0x80228270: break       6
    do_break(2149745264);
L_80228274:
    // 0x80228274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228278: jr          $ra
    // 0x8022827C: nop

    TRACE_RETURN()
    return;
    // 0x8022827C: nop

;}
RECOMP_FUNC void func_80225DA4_68F784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80225DA8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80225DAC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80225DB0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80225DB4: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225DB8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80225DBC: addiu       $a1, $a1, 0x5D78
    ctx->r5 = ADD32(ctx->r5, 0X5D78);
    // 0x80225DC0: jal         0x80034E08
    // 0x80225DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80225DC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80225DC8: bne         $v0, $zero, L_80225DD8
    if (ctx->r2 != 0) {
        // 0x80225DCC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80225DD8;
    }
    // 0x80225DCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225DD0: b           L_80225E48
    // 0x80225DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80225E48;
    // 0x80225DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225DD8:
    // 0x80225DD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225DDC: lwc1        $f0, -0x4EEC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4EEC);
    // 0x80225DE0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80225DE4: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80225DE8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80225DEC: addiu       $a1, $a1, 0x3F30
    ctx->r5 = ADD32(ctx->r5, 0X3F30);
    // 0x80225DF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80225DF4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80225DF8: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80225DFC: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80225E00: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80225E04: addiu       $t9, $zero, 0x4E2
    ctx->r25 = ADD32(0, 0X4E2);
    // 0x80225E08: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x80225E0C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80225E10: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80225E14: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80225E18: addiu       $a2, $a2, -0x26E0
    ctx->r6 = ADD32(ctx->r6, -0X26E0);
    // 0x80225E1C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80225E20: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80225E24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80225E28: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80225E2C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80225E30: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80225E34: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80225E38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80225E3C: jal         0x8000DBF0
    // 0x80225E40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80225E40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80225E44: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80225E48:
    // 0x80225E48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80225E4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80225E50: jr          $ra
    // 0x80225E54: nop

    TRACE_RETURN()
    return;
    // 0x80225E54: nop

;}
RECOMP_FUNC void func_8020D74C_67712C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D74C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8020D750: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8020D754: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x8020D758: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8020D75C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8020D760: lw          $v0, -0x708($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X708);
    // 0x8020D764: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8020D768: sb          $a0, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r4;
    // 0x8020D76C: beq         $v1, $zero, L_8020D778
    if (ctx->r3 == 0) {
        // 0x8020D770: nop
    
            goto L_8020D778;
    }
    // 0x8020D770: nop

    // 0x8020D774: sb          $a0, 0x64($v1)
    MEM_B(0X64, ctx->r3) = ctx->r4;
L_8020D778:
    // 0x8020D778: jr          $ra
    // 0x8020D77C: nop

    TRACE_RETURN()
    return;
    // 0x8020D77C: nop

;}
RECOMP_FUNC void func_802122D4_67BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802122D8: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802122DC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802122E0: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x802122E4: swc1        $f14, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f14.u32l;
    // 0x802122E8: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802122EC: jr          $ra
    // 0x802122F0: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x802122F0: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8022921C_692BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022921C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80229220: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80229224: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80229228: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x8022922C: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x80229230: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80229234: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x80229238: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x8022923C: jr          $ra
    // 0x80229240: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80229240: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80217E04_6817E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80217E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80217E0C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80217E10: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80217E14: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217E18: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80217E1C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80217E20: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80217E24: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80217E28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80217E2C: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80217E30: jal         0x800040A8
    // 0x80217E34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80217E34: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x80217E38: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80217E3C: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80217E40: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x80217E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80217E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80217E4C: jr          $ra
    // 0x80217E50: nop

    TRACE_RETURN()
    return;
    // 0x80217E50: nop

;}
RECOMP_FUNC void func_802142F8_67DCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802142F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802142FC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214300: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80214304: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80214308: div.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8021430C: swc1        $f12, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f12.u32l;
    // 0x80214310: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80214314: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80214318: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8021431C: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x80214320: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80214324: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x80214328: swc1        $f2, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f2.u32l;
    // 0x8021432C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x80214330: swc1        $f2, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f2.u32l;
    // 0x80214334: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    // 0x80214338: jr          $ra
    // 0x8021433C: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x8021433C: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
;}
RECOMP_FUNC void func_80215720_67F100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215720: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80215724: lh          $t6, 0x64($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X64);
    // 0x80215728: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021572C: andi        $t7, $t6, 0x7
    ctx->r15 = ctx->r14 & 0X7;
    // 0x80215730: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80215734: addu        $at, $at, $t7
    gpr jr_addend_8021573C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80215738: lw          $t7, -0x5670($at)
    ctx->r15 = ADD32(ctx->r1, -0X5670);
    // 0x8021573C: jr          $t7
    // 0x80215740: nop

    switch (jr_addend_8021573C >> 2) {
        case 0: goto L_80215744; break;
        case 1: goto L_80215744; break;
        case 2: goto L_80215794; break;
        case 3: goto L_80215794; break;
        case 4: goto L_8021576C; break;
        case 5: goto L_8021576C; break;
        case 6: goto L_80215794; break;
        case 7: goto L_80215794; break;
        default: switch_error(__func__, 0x8021573C, 0x8022A990);
    }
    // 0x80215740: nop

L_80215744:
    // 0x80215744: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215748: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8021574C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80215750: sb          $zero, 0x64($t8)
    MEM_B(0X64, ctx->r24) = 0;
    // 0x80215754: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80215758: sb          $zero, 0x64($t9)
    MEM_B(0X64, ctx->r25) = 0;
    // 0x8021575C: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80215760: lwc1        $f4, -0x5650($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5650);
    // 0x80215764: b           L_802157AC
    // 0x80215768: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
        goto L_802157AC;
    // 0x80215768: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_8021576C:
    // 0x8021576C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215770: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80215774: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80215778: sb          $zero, 0x64($t1)
    MEM_B(0X64, ctx->r9) = 0;
    // 0x8021577C: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80215780: sb          $zero, 0x64($t2)
    MEM_B(0X64, ctx->r10) = 0;
    // 0x80215784: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80215788: lwc1        $f6, -0x564C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X564C);
    // 0x8021578C: b           L_802157AC
    // 0x80215790: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
        goto L_802157AC;
    // 0x80215790: swc1        $f6, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f6.u32l;
L_80215794:
    // 0x80215794: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80215798: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8021579C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802157A0: sb          $v1, 0x64($t4)
    MEM_B(0X64, ctx->r12) = ctx->r3;
    // 0x802157A4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x802157A8: sb          $v1, 0x64($t5)
    MEM_B(0X64, ctx->r13) = ctx->r3;
L_802157AC:
    // 0x802157AC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802157B0: lh          $t6, 0x8($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X8);
    // 0x802157B4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802157B8: jr          $ra
    // 0x802157BC: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x802157BC: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_802149AC_67E38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802149AC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802149B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802149B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802149B8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802149BC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802149C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x802149C4: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802149C8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802149CC: nop

    // 0x802149D0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x802149D4: beql        $t7, $zero, L_80214A24
    if (ctx->r15 == 0) {
        // 0x802149D8: mfc1        $t7, $f4
        ctx->r15 = (int32_t)ctx->f4.u32l;
            goto L_80214A24;
    }
    goto skip_0;
    // 0x802149D8: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x802149DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802149E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802149E4: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802149E8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802149EC: nop

    // 0x802149F0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802149F4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802149F8: nop

    // 0x802149FC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80214A00: bne         $t7, $zero, L_80214A18
    if (ctx->r15 != 0) {
        // 0x80214A04: nop
    
            goto L_80214A18;
    }
    // 0x80214A04: nop

    // 0x80214A08: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80214A0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80214A10: b           L_80214A30
    // 0x80214A14: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80214A30;
    // 0x80214A14: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80214A18:
    // 0x80214A18: b           L_80214A30
    // 0x80214A1C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80214A30;
    // 0x80214A1C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80214A20: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
L_80214A24:
    // 0x80214A24: nop

    // 0x80214A28: bltz        $t7, L_80214A18
    if (SIGNED(ctx->r15) < 0) {
        // 0x80214A2C: nop
    
            goto L_80214A18;
    }
    // 0x80214A2C: nop

L_80214A30:
    // 0x80214A30: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80214A34: jr          $ra
    // 0x80214A38: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x80214A38: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8021F3BC_688D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F3BC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8021F3C0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x8021F3C4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x8021F3C8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8021F3CC: mtc1        $a3, $f26
    ctx->f26.u32l = ctx->r7;
    // 0x8021F3D0: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x8021F3D4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8021F3D8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021F3DC: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8021F3E0: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8021F3E4: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8021F3E8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8021F3EC: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8021F3F0: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x8021F3F4: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x8021F3F8: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x8021F3FC: addiu       $a1, $a1, -0xCA4
    ctx->r5 = ADD32(ctx->r5, -0XCA4);
    // 0x8021F400: jal         0x80034E08
    // 0x8021F404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021F404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021F408: bne         $v0, $zero, L_8021F418
    if (ctx->r2 != 0) {
        // 0x8021F40C: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_8021F418;
    }
    // 0x8021F40C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8021F410: b           L_8021F830
    // 0x8021F414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021F830;
    // 0x8021F414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021F418:
    // 0x8021F418: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x8021F41C: lui         $s0, 0x4000
    ctx->r16 = S32(0X4000 << 16);
    // 0x8021F420: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F424: beq         $v1, $zero, L_8021F44C
    if (ctx->r3 == 0) {
        // 0x8021F428: sb          $v1, 0x5C($v0)
        MEM_B(0X5C, ctx->r2) = ctx->r3;
            goto L_8021F44C;
    }
    // 0x8021F428: sb          $v1, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r3;
    // 0x8021F42C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021F430: beq         $v1, $at, L_8021F4CC
    if (ctx->r3 == ctx->r1) {
        // 0x8021F434: lui         $s0, 0x4000
        ctx->r16 = S32(0X4000 << 16);
            goto L_8021F4CC;
    }
    // 0x8021F434: lui         $s0, 0x4000
    ctx->r16 = S32(0X4000 << 16);
    // 0x8021F438: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8021F43C: beq         $v1, $at, L_8021F550
    if (ctx->r3 == ctx->r1) {
        // 0x8021F440: lui         $s0, 0x4000
        ctx->r16 = S32(0X4000 << 16);
            goto L_8021F550;
    }
    // 0x8021F440: lui         $s0, 0x4000
    ctx->r16 = S32(0X4000 << 16);
    // 0x8021F444: b           L_8021F6F8
    // 0x8021F448: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
        goto L_8021F6F8;
    // 0x8021F448: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8021F44C:
    // 0x8021F44C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8021F450: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8021F454: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021F458: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8021F45C: addiu       $t6, $zero, 0x91
    ctx->r14 = ADD32(0, 0X91);
    // 0x8021F460: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8021F464: sh          $t6, 0x2D90($at)
    MEM_H(0X2D90, ctx->r1) = ctx->r14;
    // 0x8021F468: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021F46C: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x8021F470: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x8021F474: addiu       $t9, $t9, -0x5E30
    ctx->r25 = ADD32(ctx->r25, -0X5E30);
    // 0x8021F478: addiu       $t8, $t8, 0x5F50
    ctx->r24 = ADD32(ctx->r24, 0X5F50);
    // 0x8021F47C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021F480: addiu       $t0, $zero, 0xA8
    ctx->r8 = ADD32(0, 0XA8);
    // 0x8021F484: addiu       $t1, $zero, 0x95
    ctx->r9 = ADD32(0, 0X95);
    // 0x8021F488: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8021F48C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8021F490: addu        $a1, $s0, $t8
    ctx->r5 = ADD32(ctx->r16, ctx->r24);
    // 0x8021F494: or          $a2, $t9, $s0
    ctx->r6 = ctx->r25 | ctx->r16;
    // 0x8021F498: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F49C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021F4A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F4A4: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8021F4A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F4AC: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021F4B0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021F4B4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021F4B8: jal         0x8000DBF0
    // 0x8021F4BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021F4BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8021F4C0: sw          $v0, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->r2;
    // 0x8021F4C4: b           L_8021F6F4
    // 0x8021F4C8: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
        goto L_8021F6F4;
    // 0x8021F4C8: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
L_8021F4CC:
    // 0x8021F4CC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8021F4D0: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x8021F4D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F4D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021F4DC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8021F4E0: addiu       $t2, $zero, 0x10A
    ctx->r10 = ADD32(0, 0X10A);
    // 0x8021F4E4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8021F4E8: sh          $t2, 0x2D90($at)
    MEM_H(0X2D90, ctx->r1) = ctx->r10;
    // 0x8021F4EC: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021F4F0: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8021F4F4: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x8021F4F8: addiu       $t5, $t5, -0x2768
    ctx->r13 = ADD32(ctx->r13, -0X2768);
    // 0x8021F4FC: addiu       $t4, $t4, 0x2BF8
    ctx->r12 = ADD32(ctx->r12, 0X2BF8);
    // 0x8021F500: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021F504: addiu       $t6, $zero, 0x118
    ctx->r14 = ADD32(0, 0X118);
    // 0x8021F508: addiu       $t7, $zero, 0x10F
    ctx->r15 = ADD32(0, 0X10F);
    // 0x8021F50C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8021F510: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021F514: addu        $a1, $s0, $t4
    ctx->r5 = ADD32(ctx->r16, ctx->r12);
    // 0x8021F518: or          $a2, $t5, $s0
    ctx->r6 = ctx->r13 | ctx->r16;
    // 0x8021F51C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F520: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021F524: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F528: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8021F52C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F530: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021F534: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021F538: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021F53C: jal         0x8000DBF0
    // 0x8021F540: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x8021F540: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8021F544: sw          $v0, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->r2;
    // 0x8021F548: b           L_8021F6F4
    // 0x8021F54C: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
        goto L_8021F6F4;
    // 0x8021F54C: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
L_8021F550:
    // 0x8021F550: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8021F554: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x8021F558: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F55C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8021F560: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8021F564: addiu       $t8, $zero, 0x10C
    ctx->r24 = ADD32(0, 0X10C);
    // 0x8021F568: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8021F56C: sh          $t8, 0x2D90($at)
    MEM_H(0X2D90, ctx->r1) = ctx->r24;
    // 0x8021F570: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x8021F574: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021F578: addiu       $t1, $t1, -0x2768
    ctx->r9 = ADD32(ctx->r9, -0X2768);
    // 0x8021F57C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8021F580: addiu       $t0, $t0, 0x2080
    ctx->r8 = ADD32(ctx->r8, 0X2080);
    // 0x8021F584: or          $s1, $t1, $s0
    ctx->r17 = ctx->r9 | ctx->r16;
    // 0x8021F588: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021F58C: addiu       $t2, $zero, 0x11F
    ctx->r10 = ADD32(0, 0X11F);
    // 0x8021F590: addiu       $t3, $zero, 0x111
    ctx->r11 = ADD32(0, 0X111);
    // 0x8021F594: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8021F598: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x8021F59C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021F5A0: addu        $a1, $s0, $t0
    ctx->r5 = ADD32(ctx->r16, ctx->r8);
    // 0x8021F5A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F5A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021F5AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F5B0: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x8021F5B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F5B8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021F5BC: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021F5C0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021F5C4: jal         0x8000DBF0
    // 0x8021F5C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x8021F5C8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8021F5CC: addiu       $s3, $s4, 0x5C
    ctx->r19 = ADD32(ctx->r20, 0X5C);
    // 0x8021F5D0: lui         $at, 0x4369
    ctx->r1 = S32(0X4369 << 16);
    // 0x8021F5D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021F5D8: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x8021F5DC: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8021F5E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021F5E4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021F5E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021F5EC: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021F5F0: add.s       $f16, $f28, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f28.fl + ctx->f10.fl;
    // 0x8021F5F4: lui         $t4, 0x800
    ctx->r12 = S32(0X800 << 16);
    // 0x8021F5F8: addiu       $t4, $t4, 0xD68
    ctx->r12 = ADD32(ctx->r12, 0XD68);
    // 0x8021F5FC: sub.s       $f4, $f26, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f26.fl - ctx->f18.fl;
    // 0x8021F600: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021F604: addiu       $t5, $zero, 0x300
    ctx->r13 = ADD32(0, 0X300);
    // 0x8021F608: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021F60C: addiu       $t6, $zero, 0x23F
    ctx->r14 = ADD32(0, 0X23F);
    // 0x8021F610: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021F614: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8021F618: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8021F61C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021F620: addu        $a1, $s0, $t4
    ctx->r5 = ADD32(ctx->r16, ctx->r12);
    // 0x8021F624: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021F628: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021F62C: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021F630: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021F634: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F638: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F63C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F640: jal         0x8000DBF0
    // 0x8021F644: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x8021F644: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x8021F648: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8021F64C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021F650: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x8021F654: addiu       $s2, $s2, 0x280
    ctx->r18 = ADD32(ctx->r18, 0X280);
    // 0x8021F658: addiu       $s1, $s1, -0x5E30
    ctx->r17 = ADD32(ctx->r17, -0X5E30);
    // 0x8021F65C: or          $t7, $s1, $at
    ctx->r15 = ctx->r17 | ctx->r1;
    // 0x8021F660: addu        $s2, $s2, $at
    ctx->r18 = ADD32(ctx->r18, ctx->r1);
    // 0x8021F664: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8021F668: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021F66C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8021F670: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F674: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    // 0x8021F678: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8021F67C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8021F680: sub.s       $f22, $f26, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f22.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x8021F684: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8021F688: addiu       $s3, $zero, 0x5DC
    ctx->r19 = ADD32(0, 0X5DC);
    // 0x8021F68C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x8021F690: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021F694: sub.s       $f24, $f18, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021F698: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
L_8021F69C:
    // 0x8021F69C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021F6A0: addiu       $t8, $zero, 0x4C8
    ctx->r24 = ADD32(0, 0X4C8);
    // 0x8021F6A4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8021F6A8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8021F6AC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F6B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8021F6B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8021F6B8: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    // 0x8021F6BC: add.s       $f10, $f24, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f24.fl + ctx->f8.fl;
    // 0x8021F6C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021F6C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021F6C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021F6CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8021F6D0: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021F6D4: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    // 0x8021F6D8: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021F6DC: jal         0x8000DBF0
    // 0x8021F6E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_5;
    // 0x8021F6E0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_5:
    // 0x8021F6E4: addiu       $s0, $s0, 0x1F4
    ctx->r16 = ADD32(ctx->r16, 0X1F4);
    // 0x8021F6E8: bnel        $s0, $s3, L_8021F69C
    if (ctx->r16 != ctx->r19) {
        // 0x8021F6EC: mtc1        $s0, $f6
        ctx->f6.u32l = ctx->r16;
            goto L_8021F69C;
    }
    goto skip_0;
    // 0x8021F6EC: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    skip_0:
    // 0x8021F6F0: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
L_8021F6F4:
    // 0x8021F6F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_8021F6F8:
    // 0x8021F6F8: beq         $v1, $at, L_8021F82C
    if (ctx->r3 == ctx->r1) {
        // 0x8021F6FC: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8021F82C;
    }
    // 0x8021F6FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8021F700: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8021F704: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021F708: jal         0x80035EEC
    // 0x8021F70C: addiu       $s3, $s4, 0x5C
    ctx->r19 = ADD32(ctx->r20, 0X5C);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_6;
    // 0x8021F70C: addiu       $s3, $s4, 0x5C
    ctx->r19 = ADD32(ctx->r20, 0X5C);
    after_6:
    // 0x8021F710: bne         $v0, $zero, L_8021F720
    if (ctx->r2 != 0) {
        // 0x8021F714: sw          $v0, 0x14($s3)
        MEM_W(0X14, ctx->r19) = ctx->r2;
            goto L_8021F720;
    }
    // 0x8021F714: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8021F718: b           L_8021F830
    // 0x8021F71C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021F830;
    // 0x8021F71C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021F720:
    // 0x8021F720: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x8021F724: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8021F728: lw          $t9, 0x14($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X14);
    // 0x8021F72C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021F730: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8021F734: swc1        $f16, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f16.u32l;
    // 0x8021F738: lw          $t0, 0x14($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X14);
    // 0x8021F73C: addiu       $t3, $zero, 0x280
    ctx->r11 = ADD32(0, 0X280);
    // 0x8021F740: addiu       $t5, $zero, 0xF0
    ctx->r13 = ADD32(0, 0XF0);
    // 0x8021F744: swc1        $f0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f0.u32l;
    // 0x8021F748: lw          $t2, 0x14($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X14);
    // 0x8021F74C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021F750: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x8021F754: sb          $t1, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r9;
    // 0x8021F758: lw          $t4, 0x14($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X14);
    // 0x8021F75C: addiu       $t1, $zero, 0x2009
    ctx->r9 = ADD32(0, 0X2009);
    // 0x8021F760: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8021F764: sh          $t3, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r11;
    // 0x8021F768: lw          $t6, 0x14($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X14);
    // 0x8021F76C: sh          $t5, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r13;
    // 0x8021F770: lw          $t7, 0x14($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X14);
    // 0x8021F774: lwc1        $f18, -0x51A8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X51A8);
    // 0x8021F778: lui         $at, 0x436F
    ctx->r1 = S32(0X436F << 16);
    // 0x8021F77C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021F780: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x8021F784: lw          $t8, 0x14($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X14);
    // 0x8021F788: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021F78C: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
    // 0x8021F790: lw          $t9, 0x14($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X14);
    // 0x8021F794: swc1        $f0, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f0.u32l;
    // 0x8021F798: lw          $t0, 0x14($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X14);
    // 0x8021F79C: swc1        $f0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f0.u32l;
    // 0x8021F7A0: lw          $t2, 0x14($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X14);
    // 0x8021F7A4: sh          $t1, 0xE($t2)
    MEM_H(0XE, ctx->r10) = ctx->r9;
    // 0x8021F7A8: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8021F7AC: beq         $t3, $zero, L_8021F7BC
    if (ctx->r11 == 0) {
        // 0x8021F7B0: nop
    
            goto L_8021F7BC;
    }
    // 0x8021F7B0: nop

    // 0x8021F7B4: beq         $t3, $at, L_8021F7F4
    if (ctx->r11 == ctx->r1) {
        // 0x8021F7B8: addiu       $a1, $zero, 0x4C7
        ctx->r5 = ADD32(0, 0X4C7);
            goto L_8021F7F4;
    }
    // 0x8021F7B8: addiu       $a1, $zero, 0x4C7
    ctx->r5 = ADD32(0, 0X4C7);
L_8021F7BC:
    // 0x8021F7BC: jal         0x80014840
    // 0x8021F7C0: addiu       $a1, $zero, 0x4B9
    ctx->r5 = ADD32(0, 0X4B9);
    func_80014840_15440(rdram, ctx);
        goto after_7;
    // 0x8021F7C0: addiu       $a1, $zero, 0x4B9
    ctx->r5 = ADD32(0, 0X4B9);
    after_7:
    // 0x8021F7C4: lw          $t4, 0x14($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X14);
    // 0x8021F7C8: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x8021F7CC: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x8021F7D0: addiu       $a1, $zero, 0x4B9
    ctx->r5 = ADD32(0, 0X4B9);
    // 0x8021F7D4: jal         0x80014840
    // 0x8021F7D8: sw          $v0, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_8;
    // 0x8021F7D8: sw          $v0, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r2;
    after_8:
    // 0x8021F7DC: lw          $t5, 0x14($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X14);
    // 0x8021F7E0: addiu       $t6, $zero, 0x4B9
    ctx->r14 = ADD32(0, 0X4B9);
    // 0x8021F7E4: sw          $v0, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r2;
    // 0x8021F7E8: lw          $t7, 0x14($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X14);
    // 0x8021F7EC: b           L_8021F82C
    // 0x8021F7F0: sh          $t6, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r14;
        goto L_8021F82C;
    // 0x8021F7F0: sh          $t6, 0xC($t7)
    MEM_H(0XC, ctx->r15) = ctx->r14;
L_8021F7F4:
    // 0x8021F7F4: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x8021F7F8: jal         0x80014840
    // 0x8021F7FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    func_80014840_15440(rdram, ctx);
        goto after_9;
    // 0x8021F7FC: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    after_9:
    // 0x8021F800: lw          $t8, 0x14($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X14);
    // 0x8021F804: lui         $a0, 0x802
    ctx->r4 = S32(0X802 << 16);
    // 0x8021F808: addiu       $a0, $a0, 0x5800
    ctx->r4 = ADD32(ctx->r4, 0X5800);
    // 0x8021F80C: addiu       $a1, $zero, 0x4C7
    ctx->r5 = ADD32(0, 0X4C7);
    // 0x8021F810: jal         0x80014840
    // 0x8021F814: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    func_80014840_15440(rdram, ctx);
        goto after_10;
    // 0x8021F814: sw          $v0, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r2;
    after_10:
    // 0x8021F818: lw          $t9, 0x14($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X14);
    // 0x8021F81C: addiu       $t0, $zero, 0x4C7
    ctx->r8 = ADD32(0, 0X4C7);
    // 0x8021F820: sw          $v0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r2;
    // 0x8021F824: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x8021F828: sh          $t0, 0xC($t1)
    MEM_H(0XC, ctx->r9) = ctx->r8;
L_8021F82C:
    // 0x8021F82C: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_8021F830:
    // 0x8021F830: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8021F834: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x8021F838: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x8021F83C: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x8021F840: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x8021F844: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x8021F848: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8021F84C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8021F850: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8021F854: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8021F858: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8021F85C: jr          $ra
    // 0x8021F860: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8021F860: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_802140B8_67DA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802140B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802140BC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x802140C0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802140C4: bnel        $t6, $zero, L_80214288
    if (ctx->r14 != 0) {
        // 0x802140C8: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80214288;
    }
    goto skip_0;
    // 0x802140C8: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x802140CC: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802140D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802140D4: ldc1        $f16, -0x56A0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X56A0);
    // 0x802140D8: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x802140DC: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x802140E0: nop

    // 0x802140E4: bc1fl       L_8021415C
    if (!c1cs) {
        // 0x802140E8: lwc1        $f14, 0x1C($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
            goto L_8021415C;
    }
    goto skip_1;
    // 0x802140E8: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    skip_1:
    // 0x802140EC: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802140F0: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802140F4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802140F8: nop

    // 0x802140FC: bc1fl       L_80214114
    if (!c1cs) {
        // 0x80214100: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80214114;
    }
    goto skip_2;
    // 0x80214100: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_2:
    // 0x80214104: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214108: b           L_80214114
    // 0x8021410C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80214114;
    // 0x8021410C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214110: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80214114:
    // 0x80214114: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214118: nop

    // 0x8021411C: bc1fl       L_80214138
    if (!c1cs) {
        // 0x80214120: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80214138;
    }
    goto skip_3;
    // 0x80214120: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_3:
    // 0x80214124: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80214128: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x8021412C: b           L_80214158
    // 0x80214130: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
        goto L_80214158;
    // 0x80214130: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x80214134: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80214138:
    // 0x80214138: nop

    // 0x8021413C: bc1fl       L_80214154
    if (!c1cs) {
        // 0x80214140: add.s       $f8, $f12, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80214154;
    }
    goto skip_4;
    // 0x80214140: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
    skip_4:
    // 0x80214144: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80214148: b           L_80214158
    // 0x8021414C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
        goto L_80214158;
    // 0x8021414C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80214150: add.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f14.fl;
L_80214154:
    // 0x80214154: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
L_80214158:
    // 0x80214158: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
L_8021415C:
    // 0x8021415C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80214160: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x80214164: c.lt.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d < ctx->f10.d;
    // 0x80214168: nop

    // 0x8021416C: bc1fl       L_802141E0
    if (!c1cs) {
        // 0x80214170: lwc1        $f14, 0x28($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
            goto L_802141E0;
    }
    goto skip_5;
    // 0x80214170: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
    skip_5:
    // 0x80214174: lwc1        $f2, 0x18($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80214178: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021417C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80214180: nop

    // 0x80214184: bc1fl       L_8021419C
    if (!c1cs) {
        // 0x80214188: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_8021419C;
    }
    goto skip_6;
    // 0x80214188: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_6:
    // 0x8021418C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214190: b           L_8021419C
    // 0x80214194: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021419C;
    // 0x80214194: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214198: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021419C:
    // 0x8021419C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802141A0: nop

    // 0x802141A4: bc1fl       L_802141BC
    if (!c1cs) {
        // 0x802141A8: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_802141BC;
    }
    goto skip_7;
    // 0x802141A8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_7:
    // 0x802141AC: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x802141B0: b           L_802141DC
    // 0x802141B4: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
        goto L_802141DC;
    // 0x802141B4: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x802141B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_802141BC:
    // 0x802141BC: nop

    // 0x802141C0: bc1fl       L_802141D8
    if (!c1cs) {
        // 0x802141C4: add.s       $f6, $f12, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_802141D8;
    }
    goto skip_8;
    // 0x802141C4: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
    skip_8:
    // 0x802141C8: sub.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x802141CC: b           L_802141DC
    // 0x802141D0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
        goto L_802141DC;
    // 0x802141D0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x802141D4: add.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f14.fl;
L_802141D8:
    // 0x802141D8: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
L_802141DC:
    // 0x802141DC: lwc1        $f14, 0x28($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X28);
L_802141E0:
    // 0x802141E0: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x802141E4: c.lt.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d < ctx->f8.d;
    // 0x802141E8: nop

    // 0x802141EC: bc1fl       L_80214260
    if (!c1cs) {
        // 0x802141F0: lh          $v1, 0x2E($v0)
        ctx->r3 = MEM_H(ctx->r2, 0X2E);
            goto L_80214260;
    }
    goto skip_9;
    // 0x802141F0: lh          $v1, 0x2E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2E);
    skip_9:
    // 0x802141F4: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802141F8: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802141FC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80214200: nop

    // 0x80214204: bc1fl       L_8021421C
    if (!c1cs) {
        // 0x80214208: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_8021421C;
    }
    goto skip_10;
    // 0x80214208: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_10:
    // 0x8021420C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80214210: b           L_8021421C
    // 0x80214214: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021421C;
    // 0x80214214: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80214218: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_8021421C:
    // 0x8021421C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80214220: nop

    // 0x80214224: bc1fl       L_8021423C
    if (!c1cs) {
        // 0x80214228: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_8021423C;
    }
    goto skip_11;
    // 0x80214228: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_11:
    // 0x8021422C: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x80214230: b           L_8021425C
    // 0x80214234: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
        goto L_8021425C;
    // 0x80214234: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x80214238: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_8021423C:
    // 0x8021423C: nop

    // 0x80214240: bc1fl       L_80214258
    if (!c1cs) {
        // 0x80214244: add.s       $f4, $f12, $f14
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80214258;
    }
    goto skip_12;
    // 0x80214244: add.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
    skip_12:
    // 0x80214248: sub.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8021424C: b           L_8021425C
    // 0x80214250: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
        goto L_8021425C;
    // 0x80214250: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80214254: add.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
L_80214258:
    // 0x80214258: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
L_8021425C:
    // 0x8021425C: lh          $v1, 0x2E($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2E);
L_80214260:
    // 0x80214260: beql        $v1, $zero, L_80214288
    if (ctx->r3 == 0) {
        // 0x80214264: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80214288;
    }
    goto skip_13;
    // 0x80214264: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_13:
    // 0x80214268: lhu         $t7, 0x2C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2C);
    // 0x8021426C: lh          $t8, 0x30($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X30);
    // 0x80214270: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x80214274: sh          $t1, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r9;
    // 0x80214278: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021427C: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80214280: sh          $t0, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r8;
    // 0x80214284: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80214288:
    // 0x80214288: lhu         $t2, 0x2C($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X2C);
    // 0x8021428C: lw          $t3, 0x34($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X34);
    // 0x80214290: sh          $t2, 0x16($t3)
    MEM_H(0X16, ctx->r11) = ctx->r10;
    // 0x80214294: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80214298: lw          $t4, 0x34($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X34);
    // 0x8021429C: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x802142A0: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802142A4: lw          $t5, 0x34($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X34);
    // 0x802142A8: swc1        $f8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f8.u32l;
    // 0x802142AC: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802142B0: lw          $t6, 0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X34);
    // 0x802142B4: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x802142B8: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x802142BC: lhu         $t7, 0x2C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2C);
    // 0x802142C0: sh          $t7, 0x16($t8)
    MEM_H(0X16, ctx->r24) = ctx->r15;
    // 0x802142C4: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x802142C8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802142CC: swc1        $f4, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f4.u32l;
    // 0x802142D0: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x802142D4: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802142D8: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    // 0x802142DC: lw          $t1, 0x38($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X38);
    // 0x802142E0: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802142E4: jr          $ra
    // 0x802142E8: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802142E8: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80225FBC_68F99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FBC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225FC0: addiu       $v1, $v1, 0x630
    ctx->r3 = ADD32(ctx->r3, 0X630);
    // 0x80225FC4: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80225FC8: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80225FCC: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x80225FD0: lui         $t8, 0x1F
    ctx->r24 = S32(0X1F << 16);
    // 0x80225FD4: sw          $t9, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r25;
    // 0x80225FD8: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x80225FDC: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
    // 0x80225FE0: ori         $t8, $t8, 0x3205
    ctx->r24 = ctx->r24 | 0X3205;
    // 0x80225FE4: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80225FE8: sw          $t8, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r24;
    // 0x80225FEC: lui         $t7, 0xB600
    ctx->r15 = S32(0XB600 << 16);
    // 0x80225FF0: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80225FF4: ori         $t9, $t9, 0xC02
    ctx->r25 = ctx->r25 | 0XC02;
    // 0x80225FF8: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
    // 0x80225FFC: ori         $t6, $t6, 0x1301
    ctx->r14 = ctx->r14 | 0X1301;
    // 0x80226000: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80226004: sw          $t9, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r25;
    // 0x80226008: sw          $t6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r14;
    // 0x8022600C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80226010: ori         $t8, $t8, 0x1001
    ctx->r24 = ctx->r24 | 0X1001;
    // 0x80226014: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x80226018: ori         $t7, $t7, 0x1102
    ctx->r15 = ctx->r15 | 0X1102;
    // 0x8022601C: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x80226020: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80226024: ori         $t9, $t9, 0xFA7D
    ctx->r25 = ctx->r25 | 0XFA7D;
    // 0x80226028: sw          $t7, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r15;
    // 0x8022602C: ori         $t6, $t6, 0x903
    ctx->r14 = ctx->r14 | 0X903;
    // 0x80226030: sw          $t9, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r25;
    // 0x80226034: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x80226038: sw          $t6, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r14;
    // 0x8022603C: addiu       $t7, $zero, 0xC00
    ctx->r15 = ADD32(0, 0XC00);
    // 0x80226040: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x80226044: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80226048: sw          $t7, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r15;
    // 0x8022604C: sw          $t8, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r24;
    // 0x80226050: lui         $t6, 0xB900
    ctx->r14 = S32(0XB900 << 16);
    // 0x80226054: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x80226058: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x8022605C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x80226060: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80226064: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x80226068: sw          $t6, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r14;
    // 0x8022606C: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80226070: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x80226074: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x80226078: sw          $t8, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r24;
    // 0x8022607C: sw          $t7, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r15;
    // 0x80226080: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80226084: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x80226088: sw          $t6, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r14;
    // 0x8022608C: sw          $t9, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r25;
    // 0x80226090: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80226094: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x80226098: sw          $t8, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->r24;
    // 0x8022609C: sw          $t7, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r15;
    // 0x802260A0: lui         $t9, 0x73F
    ctx->r25 = S32(0X73F << 16);
    // 0x802260A4: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x802260A8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802260AC: sw          $t6, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->r14;
    // 0x802260B0: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x802260B4: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x802260B8: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x802260BC: lui         $s3, 0xE700
    ctx->r19 = S32(0XE700 << 16);
    // 0x802260C0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    // 0x802260C4: sw          $t8, 0x88($v1)
    MEM_W(0X88, ctx->r3) = ctx->r24;
    // 0x802260C8: sw          $t7, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r15;
    // 0x802260CC: sw          $t9, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->r25;
    // 0x802260D0: lui         $t6, 0xBB00
    ctx->r14 = S32(0XBB00 << 16);
    // 0x802260D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802260D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802260DC: ori         $t6, $t6, 0x1
    ctx->r14 = ctx->r14 | 0X1;
    // 0x802260E0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x802260E4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802260E8: addiu       $t9, $zero, 0x3F
    ctx->r25 = ADD32(0, 0X3F);
    // 0x802260EC: addiu       $t8, $zero, 0x3F
    ctx->r24 = ADD32(0, 0X3F);
    // 0x802260F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802260F4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802260F8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802260FC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80226100: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80226104: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80226108: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022610C: sw          $a0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r4;
    // 0x80226110: sw          $s3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r19;
    // 0x80226114: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80226118: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8022611C: sw          $a3, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r7;
    // 0x80226120: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80226124: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x80226128: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
    // 0x8022612C: sw          $a3, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r7;
    // 0x80226130: sw          $zero, 0x54($v1)
    MEM_W(0X54, ctx->r3) = 0;
    // 0x80226134: sw          $s3, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r19;
    // 0x80226138: sw          $a1, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->r5;
    // 0x8022613C: sw          $zero, 0x74($v1)
    MEM_W(0X74, ctx->r3) = 0;
    // 0x80226140: sw          $zero, 0x84($v1)
    MEM_W(0X84, ctx->r3) = 0;
    // 0x80226144: sw          $zero, 0x94($v1)
    MEM_W(0X94, ctx->r3) = 0;
    // 0x80226148: addiu       $v0, $v0, 0x6D0
    ctx->r2 = ADD32(ctx->r2, 0X6D0);
    // 0x8022614C: sw          $t7, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r15;
    // 0x80226150: sw          $t6, 0x98($v1)
    MEM_W(0X98, ctx->r3) = ctx->r14;
    // 0x80226154: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x80226158: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8022615C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80226160: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80226164: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x80226168: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x8022616C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_80226170:
    // 0x80226170: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80226174: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80226178: lw          $fp, 0x44($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X44);
    // 0x8022617C: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x80226180: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x80226184: andi        $s5, $t8, 0xFFF
    ctx->r21 = ctx->r24 & 0XFFF;
    // 0x80226188: addiu       $t7, $t7, -0xDD0
    ctx->r15 = ADD32(ctx->r15, -0XDD0);
    // 0x8022618C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x80226190: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80226194: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80226198: sll         $t9, $fp, 2
    ctx->r25 = S32(ctx->r30 << 2);
    // 0x8022619C: andi        $fp, $t9, 0xFFF
    ctx->r30 = ctx->r25 & 0XFFF;
    // 0x802261A0: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x802261A4: sll         $t6, $s6, 2
    ctx->r14 = S32(ctx->r22 << 2);
    // 0x802261A8: andi        $s6, $t6, 0xFFF
    ctx->r22 = ctx->r14 & 0XFFF;
    // 0x802261AC: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x802261B0: addiu       $t0, $v1, 0x10
    ctx->r8 = ADD32(ctx->r3, 0X10);
    // 0x802261B4: addiu       $t1, $v1, 0x20
    ctx->r9 = ADD32(ctx->r3, 0X20);
    // 0x802261B8: addiu       $t2, $v1, 0x30
    ctx->r10 = ADD32(ctx->r3, 0X30);
    // 0x802261BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802261C0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x802261C4: addiu       $s4, $zero, 0x27
    ctx->r20 = ADD32(0, 0X27);
    // 0x802261C8: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x802261CC: addiu       $s7, $zero, 0x1F
    ctx->r23 = ADD32(0, 0X1F);
L_802261D0:
    // 0x802261D0: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x802261D4: addiu       $t6, $t6, -0x5B40
    ctx->r14 = ADD32(ctx->r14, -0X5B40);
    // 0x802261D8: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x802261DC: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x802261E0: addiu       $a0, $a3, -0xA
    ctx->r4 = ADD32(ctx->r7, -0XA);
    // 0x802261E4: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x802261E8: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x802261EC: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x802261F0: lwl         $t7, 0x4($t6)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r14, 0X4);
    // 0x802261F4: lwr         $t7, 0x7($t6)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r14, 0X7);
    // 0x802261F8: addiu       $t9, $t9, -0x5B30
    ctx->r25 = ADD32(ctx->r25, -0X5B30);
    // 0x802261FC: addiu       $a1, $a3, -0x9
    ctx->r5 = ADD32(ctx->r7, -0X9);
    // 0x80226200: swl         $t7, 0x4($v1)
    do_swl(rdram, 0X4, ctx->r3, ctx->r15);
    // 0x80226204: swr         $t7, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r15);
    // 0x80226208: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x8022620C: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80226210: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80226214: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80226218: swl         $at, 0x8($v1)
    do_swl(rdram, 0X8, ctx->r3, ctx->r1);
    // 0x8022621C: swr         $at, 0xB($v1)
    do_swr(rdram, 0XB, ctx->r3, ctx->r1);
    // 0x80226220: lwl         $t7, 0xC($t6)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r14, 0XC);
    // 0x80226224: lwr         $t7, 0xF($t6)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r14, 0XF);
    // 0x80226228: sh          $s1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r17;
    // 0x8022622C: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    // 0x80226230: swl         $t7, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r15);
    // 0x80226234: swr         $t7, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r15);
    // 0x80226238: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x8022623C: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x80226240: lui         $t7, 0x8023
    ctx->r15 = S32(0X8023 << 16);
    // 0x80226244: addiu       $t7, $t7, -0x5B20
    ctx->r15 = ADD32(ctx->r15, -0X5B20);
    // 0x80226248: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x8022624C: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x80226250: lwl         $t6, 0x4($t9)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r25, 0X4);
    // 0x80226254: lwr         $t6, 0x7($t9)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r25, 0X7);
    // 0x80226258: sra         $ra, $s4, 3
    ctx->r31 = S32(SIGNED(ctx->r20) >> 3);
    // 0x8022625C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80226260: swl         $t6, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r14);
    // 0x80226264: swr         $t6, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r14);
    // 0x80226268: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x8022626C: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80226270: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80226274: addiu       $t0, $t0, 0x40
    ctx->r8 = ADD32(ctx->r8, 0X40);
    // 0x80226278: swl         $at, -0x38($t0)
    do_swl(rdram, -0X38, ctx->r8, ctx->r1);
    // 0x8022627C: swr         $at, -0x35($t0)
    do_swr(rdram, -0X35, ctx->r8, ctx->r1);
    // 0x80226280: lwl         $t6, 0xC($t9)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r25, 0XC);
    // 0x80226284: lwr         $t6, 0xF($t9)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r25, 0XF);
    // 0x80226288: addiu       $t1, $t1, 0x40
    ctx->r9 = ADD32(ctx->r9, 0X40);
    // 0x8022628C: addiu       $t2, $t2, 0x40
    ctx->r10 = ADD32(ctx->r10, 0X40);
    // 0x80226290: swl         $t6, -0x34($t0)
    do_swl(rdram, -0X34, ctx->r8, ctx->r14);
    // 0x80226294: swr         $t6, -0x31($t0)
    do_swr(rdram, -0X31, ctx->r8, ctx->r14);
    // 0x80226298: sh          $s2, -0x2E($v1)
    MEM_H(-0X2E, ctx->r3) = ctx->r18;
    // 0x8022629C: sh          $a0, -0x30($v1)
    MEM_H(-0X30, ctx->r3) = ctx->r4;
    // 0x802262A0: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x802262A4: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x802262A8: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x802262AC: addiu       $t6, $t6, -0x5B10
    ctx->r14 = ADD32(ctx->r14, -0X5B10);
    // 0x802262B0: swl         $at, -0x40($t1)
    do_swl(rdram, -0X40, ctx->r9, ctx->r1);
    // 0x802262B4: swr         $at, -0x3D($t1)
    do_swr(rdram, -0X3D, ctx->r9, ctx->r1);
    // 0x802262B8: lwl         $t9, 0x4($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0X4);
    // 0x802262BC: lwr         $t9, 0x7($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0X7);
    // 0x802262C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802262C4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802262C8: swl         $t9, -0x3C($t1)
    do_swl(rdram, -0X3C, ctx->r9, ctx->r25);
    // 0x802262CC: swr         $t9, -0x39($t1)
    do_swr(rdram, -0X39, ctx->r9, ctx->r25);
    // 0x802262D0: lwl         $at, 0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X8);
    // 0x802262D4: lwr         $at, 0xB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XB);
    // 0x802262D8: swl         $at, -0x38($t1)
    do_swl(rdram, -0X38, ctx->r9, ctx->r1);
    // 0x802262DC: swr         $at, -0x35($t1)
    do_swr(rdram, -0X35, ctx->r9, ctx->r1);
    // 0x802262E0: lwl         $t9, 0xC($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0XC);
    // 0x802262E4: lwr         $t9, 0xF($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0XF);
    // 0x802262E8: swl         $t9, -0x34($t1)
    do_swl(rdram, -0X34, ctx->r9, ctx->r25);
    // 0x802262EC: swr         $t9, -0x31($t1)
    do_swr(rdram, -0X31, ctx->r9, ctx->r25);
    // 0x802262F0: sh          $s2, -0x1E($v1)
    MEM_H(-0X1E, ctx->r3) = ctx->r18;
    // 0x802262F4: sh          $a1, -0x20($v1)
    MEM_H(-0X20, ctx->r3) = ctx->r5;
    // 0x802262F8: lwl         $at, 0x0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X0);
    // 0x802262FC: lwr         $at, 0x3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X3);
    // 0x80226300: lui         $t9, 0xFD48
    ctx->r25 = S32(0XFD48 << 16);
    // 0x80226304: ori         $t9, $t9, 0x27F
    ctx->r25 = ctx->r25 | 0X27F;
    // 0x80226308: swl         $at, -0x40($t2)
    do_swl(rdram, -0X40, ctx->r10, ctx->r1);
    // 0x8022630C: swr         $at, -0x3D($t2)
    do_swr(rdram, -0X3D, ctx->r10, ctx->r1);
    // 0x80226310: lwl         $t7, 0x4($t6)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r14, 0X4);
    // 0x80226314: lwr         $t7, 0x7($t6)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r14, 0X7);
    // 0x80226318: swl         $t7, -0x3C($t2)
    do_swl(rdram, -0X3C, ctx->r10, ctx->r15);
    // 0x8022631C: swr         $t7, -0x39($t2)
    do_swr(rdram, -0X39, ctx->r10, ctx->r15);
    // 0x80226320: lwl         $at, 0x8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X8);
    // 0x80226324: lwr         $at, 0xB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XB);
    // 0x80226328: swl         $at, -0x38($t2)
    do_swl(rdram, -0X38, ctx->r10, ctx->r1);
    // 0x8022632C: swr         $at, -0x35($t2)
    do_swr(rdram, -0X35, ctx->r10, ctx->r1);
    // 0x80226330: lwl         $t7, 0xC($t6)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r14, 0XC);
    // 0x80226334: lwr         $t7, 0xF($t6)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r14, 0XF);
    // 0x80226338: andi        $t6, $ra, 0x1FF
    ctx->r14 = ctx->r31 & 0X1FF;
    // 0x8022633C: lui         $at, 0xF548
    ctx->r1 = S32(0XF548 << 16);
    // 0x80226340: swl         $t7, -0x34($t2)
    do_swl(rdram, -0X34, ctx->r10, ctx->r15);
    // 0x80226344: swr         $t7, -0x31($t2)
    do_swr(rdram, -0X31, ctx->r10, ctx->r15);
    // 0x80226348: sh          $s1, -0xE($v1)
    MEM_H(-0XE, ctx->r3) = ctx->r17;
    // 0x8022634C: sh          $a1, -0x10($v1)
    MEM_H(-0X10, ctx->r3) = ctx->r5;
    // 0x80226350: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80226354: sw          $s3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r19;
    // 0x80226358: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8022635C: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x80226360: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80226364: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x80226368: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x8022636C: lui         $t8, 0x709
    ctx->r24 = S32(0X709 << 16);
    // 0x80226370: ori         $t8, $t8, 0x8250
    ctx->r24 = ctx->r24 | 0X8250;
    // 0x80226374: or          $ra, $t7, $at
    ctx->r31 = ctx->r15 | ctx->r1;
    // 0x80226378: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x8022637C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80226380: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80226384: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80226388: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x8022638C: sw          $ra, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r31;
    // 0x80226390: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x80226394: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80226398: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x8022639C: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x802263A0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x802263A4: or          $t7, $t6, $s5
    ctx->r15 = ctx->r14 | ctx->r21;
    // 0x802263A8: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x802263AC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802263B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802263B4: andi        $t8, $t9, 0xFFF
    ctx->r24 = ctx->r25 & 0XFFF;
    // 0x802263B8: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x802263BC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x802263C0: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x802263C4: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x802263C8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802263CC: or          $t9, $t7, $s6
    ctx->r25 = ctx->r15 | ctx->r22;
    // 0x802263D0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802263D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802263D8: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x802263DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802263E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802263E4: lui         $t8, 0x9
    ctx->r24 = S32(0X9 << 16);
    // 0x802263E8: ori         $t8, $t8, 0x8250
    ctx->r24 = ctx->r24 | 0X8250;
    // 0x802263EC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802263F0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x802263F4: sw          $s3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r19;
    // 0x802263F8: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x802263FC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80226400: sll         $t7, $s7, 2
    ctx->r15 = S32(ctx->r23 << 2);
    // 0x80226404: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80226408: sw          $ra, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r31;
    // 0x8022640C: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x80226410: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80226414: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80226418: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022641C: or          $t6, $t8, $fp
    ctx->r14 = ctx->r24 | ctx->r30;
    // 0x80226420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80226424: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x80226428: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022642C: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80226430: ori         $t7, $t7, 0x103F
    ctx->r15 = ctx->r15 | 0X103F;
    // 0x80226434: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x80226438: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8022643C: lui         $t8, 0x6
    ctx->r24 = S32(0X6 << 16);
    // 0x80226440: lui         $t9, 0xB104
    ctx->r25 = S32(0XB104 << 16);
    // 0x80226444: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80226448: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8022644C: ori         $t9, $t9, 0x200
    ctx->r25 = ctx->r25 | 0X200;
    // 0x80226450: ori         $t8, $t8, 0x400
    ctx->r24 = ctx->r24 | 0X400;
    // 0x80226454: addiu       $t5, $t5, 0x40
    ctx->r13 = ADD32(ctx->r13, 0X40);
    // 0x80226458: addiu       $t4, $t4, 0x1E
    ctx->r12 = ADD32(ctx->r12, 0X1E);
    // 0x8022645C: addiu       $t3, $t3, 0x1E
    ctx->r11 = ADD32(ctx->r11, 0X1E);
    // 0x80226460: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80226464: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80226468: bne         $a3, $at, L_802261D0
    if (ctx->r7 != ctx->r1) {
        // 0x8022646C: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_802261D0;
    }
    // 0x8022646C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80226470: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x80226474: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x80226478: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x8022647C: addiu       $t7, $t6, 0x14
    ctx->r15 = ADD32(ctx->r14, 0X14);
    // 0x80226480: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80226484: sw          $t7, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r15;
    // 0x80226488: addiu       $at, $zero, 0x12F
    ctx->r1 = ADD32(0, 0X12F);
    // 0x8022648C: addiu       $t8, $t9, 0x500
    ctx->r24 = ADD32(ctx->r25, 0X500);
    // 0x80226490: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    // 0x80226494: addiu       $t7, $t6, 0x3C
    ctx->r15 = ADD32(ctx->r14, 0X3C);
    // 0x80226498: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8022649C: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x802264A0: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x802264A4: addiu       $s1, $s1, -0x2
    ctx->r17 = ADD32(ctx->r17, -0X2);
    // 0x802264A8: bne         $v1, $at, L_80226170
    if (ctx->r3 != ctx->r1) {
        // 0x802264AC: addiu       $s2, $s2, -0x2
        ctx->r18 = ADD32(ctx->r18, -0X2);
            goto L_80226170;
    }
    // 0x802264AC: addiu       $s2, $s2, -0x2
    ctx->r18 = ADD32(ctx->r18, -0X2);
    // 0x802264B0: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x802264B4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802264B8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802264BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802264C0: addiu       $a0, $a0, -0xDD0
    ctx->r4 = ADD32(ctx->r4, -0XDD0);
    // 0x802264C4: jal         0x80040620
    // 0x802264C8: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x802264C8: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    after_0:
    // 0x802264CC: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802264D0: addiu       $s0, $s0, 0x630
    ctx->r16 = ADD32(ctx->r16, 0X630);
    // 0x802264D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802264D8: jal         0x80040620
    // 0x802264DC: ori         $a1, $zero, 0xCE40
    ctx->r5 = 0 | 0XCE40;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x802264DC: ori         $a1, $zero, 0xCE40
    ctx->r5 = 0 | 0XCE40;
    after_1:
    // 0x802264E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802264E4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802264E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802264EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802264F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802264F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802264F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802264FC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80226500: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80226504: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80226508: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022650C: jr          $ra
    // 0x80226510: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    TRACE_RETURN()
    return;
    // 0x80226510: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_8021DE30_687810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DE30: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8021DE34: bne         $a1, $at, L_8021DE54
    if (ctx->r5 != ctx->r1) {
        // 0x8021DE38: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021DE54;
    }
    // 0x8021DE38: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021DE3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8021DE40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021DE44: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021DE48: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8021DE4C: sb          $t6, 0x34($v0)
    MEM_B(0X34, ctx->r2) = ctx->r14;
    // 0x8021DE50: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
L_8021DE54:
    // 0x8021DE54: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021DE58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021DE5C: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8021DE60: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
    // 0x8021DE64: lw          $t8, 0x3C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X3C);
    // 0x8021DE68: swc1        $f0, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f0.u32l;
    // 0x8021DE6C: lw          $t9, 0x40($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X40);
    // 0x8021DE70: jr          $ra
    // 0x8021DE74: swc1        $f0, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021DE74: swc1        $f0, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802273AC_690D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802273B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802273B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x802273B8: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802273BC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x802273C0: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802273C4: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802273C8: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x802273CC: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x802273D0: bc1fl       L_802273F4
    if (!c1cs) {
        // 0x802273D4: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_802273F4;
    }
    goto skip_0;
    // 0x802273D4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x802273D8: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802273DC: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802273E0: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802273E4: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802273E8: b           L_802273FC
    // 0x802273EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802273FC;
    // 0x802273EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802273F0: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_802273F4:
    // 0x802273F4: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802273F8: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_802273FC:
    // 0x802273FC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80227400: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x80227404: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80227408: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8022740C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80227410: nop

    // 0x80227414: bc1f        L_80227428
    if (!c1cs) {
        // 0x80227418: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_80227428;
    }
    // 0x80227418: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x8022741C: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80227420: b           L_80227430
    // 0x80227424: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80227430;
    // 0x80227424: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80227428:
    // 0x80227428: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8022742C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80227430:
    // 0x80227430: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80227434: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80227438: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8022743C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80227440: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x80227444: jal         0x800040A8
    // 0x80227448: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80227448: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022744C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80227450: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80227454: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x80227458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022745C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80227460: jr          $ra
    // 0x80227464: nop

    TRACE_RETURN()
    return;
    // 0x80227464: nop

;}
RECOMP_FUNC void func_80227BCC_6915AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BCC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80227BD0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80227BD4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80227BD8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80227BDC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80227BE0: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80227BE4: addiu       $a1, $a1, 0x7580
    ctx->r5 = ADD32(ctx->r5, 0X7580);
    // 0x80227BE8: jal         0x80034E08
    // 0x80227BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80227BEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80227BF0: bne         $v0, $zero, L_80227C00
    if (ctx->r2 != 0) {
        // 0x80227BF4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80227C00;
    }
    // 0x80227BF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227BF8: b           L_80227CA8
    // 0x80227BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80227CA8;
    // 0x80227BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80227C00:
    // 0x80227C00: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C04: lwc1        $f0, -0x4E1C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E1C);
    // 0x80227C08: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80227C0C: addiu       $a1, $a1, 0xCFC
    ctx->r5 = ADD32(ctx->r5, 0XCFC);
    // 0x80227C10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80227C14: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80227C18: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80227C1C: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227C20: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80227C24: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80227C28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80227C2C: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80227C30: addiu       $t7, $zero, 0x285
    ctx->r15 = ADD32(0, 0X285);
    // 0x80227C34: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80227C38: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80227C3C: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x80227C40: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80227C44: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80227C48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227C4C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80227C50: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x80227C54: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80227C58: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80227C5C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80227C60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80227C64: jal         0x8000DBF0
    // 0x80227C68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80227C68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80227C6C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80227C70: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80227C74: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80227C78: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80227C7C: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80227C80: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80227C84: swc1        $f10, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f10.u32l;
    // 0x80227C88: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80227C8C: swc1        $f16, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f16.u32l;
    // 0x80227C90: jal         0x80011A38
    // 0x80227C94: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80011A38_12638(rdram, ctx);
        goto after_2;
    // 0x80227C94: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_2:
    // 0x80227C98: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80227C9C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80227CA0: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x80227CA4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80227CA8:
    // 0x80227CA8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80227CAC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80227CB0: jr          $ra
    // 0x80227CB4: nop

    TRACE_RETURN()
    return;
    // 0x80227CB4: nop

;}
RECOMP_FUNC void func_8021D52C_686F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D52C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021D530: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021D534: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021D538: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021D53C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021D540: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021D544: addiu       $a1, $a1, -0x2CF4
    ctx->r5 = ADD32(ctx->r5, -0X2CF4);
    // 0x8021D548: jal         0x80034E08
    // 0x8021D54C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021D54C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021D550: bne         $v0, $zero, L_8021D560
    if (ctx->r2 != 0) {
        // 0x8021D554: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021D560;
    }
    // 0x8021D554: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021D558: b           L_8021D5CC
    // 0x8021D55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021D5CC;
    // 0x8021D55C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021D560:
    // 0x8021D560: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021D564: lwc1        $f0, -0x52EC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X52EC);
    // 0x8021D568: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021D56C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021D570: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021D574: addiu       $a1, $a1, 0x15D0
    ctx->r5 = ADD32(ctx->r5, 0X15D0);
    // 0x8021D578: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021D57C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021D580: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x8021D584: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021D588: addiu       $a2, $a2, -0x5D90
    ctx->r6 = ADD32(ctx->r6, -0X5D90);
    // 0x8021D58C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021D590: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021D594: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021D598: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021D59C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021D5A0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021D5A4: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021D5A8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021D5AC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021D5B0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021D5B4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021D5B8: jal         0x8000DBF0
    // 0x8021D5BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021D5BC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021D5C0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8021D5C4: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x8021D5C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8021D5CC:
    // 0x8021D5CC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021D5D0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021D5D4: jr          $ra
    // 0x8021D5D8: nop

    TRACE_RETURN()
    return;
    // 0x8021D5D8: nop

;}
RECOMP_FUNC void func_80226514_68FEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226514: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80226518: jr          $ra
    // 0x8022651C: sb          $a1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022651C: sb          $a1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_80218150_681B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218150: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80218154: bne         $a1, $at, L_80218188
    if (ctx->r5 != ctx->r1) {
        // 0x80218158: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80218188;
    }
    // 0x80218158: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021815C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80218160: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80218164: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80218168: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021816C: lwc1        $f4, -0x55AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55AC);
    // 0x80218170: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80218174: addiu       $t7, $t7, 0xD5C
    ctx->r15 = ADD32(ctx->r15, 0XD5C);
    // 0x80218178: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021817C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80218180: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80218184: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80218188:
    // 0x80218188: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021818C: jr          $ra
    // 0x80218190: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80218190: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
;}
