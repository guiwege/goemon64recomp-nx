#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D36CC_5FEAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D36CC: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801D36D0: beql        $v0, $zero, L_801D3768
    if (ctx->r2 == 0) {
        // 0x801D36D4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D3768;
    }
    goto skip_0;
    // 0x801D36D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801D36D8: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x801D36DC: addiu       $t7, $t6, -0x32
    ctx->r15 = ADD32(ctx->r14, -0X32);
    // 0x801D36E0: sltiu       $at, $t7, 0x33
    ctx->r1 = ctx->r15 < 0X33 ? 1 : 0;
    // 0x801D36E4: beq         $at, $zero, L_801D3758
    if (ctx->r1 == 0) {
        // 0x801D36E8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801D3758;
    }
    // 0x801D36E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801D36EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D36F0: addu        $at, $at, $t7
    gpr jr_addend_801D36F8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D36F4: lw          $t7, -0x2B28($at)
    ctx->r15 = ADD32(ctx->r1, -0X2B28);
    // 0x801D36F8: jr          $t7
    // 0x801D36FC: nop

    switch (jr_addend_801D36F8 >> 2) {
        case 0: goto L_801D3700; break;
        case 1: goto L_801D3708; break;
        case 2: goto L_801D3758; break;
        case 3: goto L_801D3758; break;
        case 4: goto L_801D3758; break;
        case 5: goto L_801D3758; break;
        case 6: goto L_801D3758; break;
        case 7: goto L_801D3758; break;
        case 8: goto L_801D3758; break;
        case 9: goto L_801D3758; break;
        case 10: goto L_801D3710; break;
        case 11: goto L_801D3718; break;
        case 12: goto L_801D3728; break;
        case 13: goto L_801D3758; break;
        case 14: goto L_801D3758; break;
        case 15: goto L_801D3758; break;
        case 16: goto L_801D3758; break;
        case 17: goto L_801D3758; break;
        case 18: goto L_801D3758; break;
        case 19: goto L_801D3758; break;
        case 20: goto L_801D3730; break;
        case 21: goto L_801D3758; break;
        case 22: goto L_801D3758; break;
        case 23: goto L_801D3758; break;
        case 24: goto L_801D3758; break;
        case 25: goto L_801D3758; break;
        case 26: goto L_801D3758; break;
        case 27: goto L_801D3758; break;
        case 28: goto L_801D3758; break;
        case 29: goto L_801D3758; break;
        case 30: goto L_801D3720; break;
        case 31: goto L_801D3748; break;
        case 32: goto L_801D3758; break;
        case 33: goto L_801D3758; break;
        case 34: goto L_801D3758; break;
        case 35: goto L_801D3758; break;
        case 36: goto L_801D3758; break;
        case 37: goto L_801D3758; break;
        case 38: goto L_801D3758; break;
        case 39: goto L_801D3758; break;
        case 40: goto L_801D3738; break;
        case 41: goto L_801D3740; break;
        case 42: goto L_801D3758; break;
        case 43: goto L_801D3758; break;
        case 44: goto L_801D3758; break;
        case 45: goto L_801D3758; break;
        case 46: goto L_801D3758; break;
        case 47: goto L_801D3758; break;
        case 48: goto L_801D3758; break;
        case 49: goto L_801D3758; break;
        case 50: goto L_801D3750; break;
        default: switch_error(__func__, 0x801D36F8, 0x8020D4D8);
    }
    // 0x801D36FC: nop

L_801D3700:
    // 0x801D3700: jr          $ra
    // 0x801D3704: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    TRACE_RETURN()
    return;
    // 0x801D3704: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_801D3708:
    // 0x801D3708: jr          $ra
    // 0x801D370C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    TRACE_RETURN()
    return;
    // 0x801D370C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_801D3710:
    // 0x801D3710: jr          $ra
    // 0x801D3714: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    TRACE_RETURN()
    return;
    // 0x801D3714: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_801D3718:
    // 0x801D3718: jr          $ra
    // 0x801D371C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D371C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_801D3720:
    // 0x801D3720: jr          $ra
    // 0x801D3724: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    TRACE_RETURN()
    return;
    // 0x801D3724: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_801D3728:
    // 0x801D3728: jr          $ra
    // 0x801D372C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    TRACE_RETURN()
    return;
    // 0x801D372C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_801D3730:
    // 0x801D3730: jr          $ra
    // 0x801D3734: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    TRACE_RETURN()
    return;
    // 0x801D3734: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_801D3738:
    // 0x801D3738: jr          $ra
    // 0x801D373C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    TRACE_RETURN()
    return;
    // 0x801D373C: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
L_801D3740:
    // 0x801D3740: jr          $ra
    // 0x801D3744: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    TRACE_RETURN()
    return;
    // 0x801D3744: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_801D3748:
    // 0x801D3748: jr          $ra
    // 0x801D374C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    TRACE_RETURN()
    return;
    // 0x801D374C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_801D3750:
    // 0x801D3750: jr          $ra
    // 0x801D3754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3758:
    // 0x801D3758: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D375C: jr          $ra
    // 0x801D3760: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3760: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D3764: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3768:
    // 0x801D3768: jr          $ra
    // 0x801D376C: nop

    TRACE_RETURN()
    return;
    // 0x801D376C: nop

;}
RECOMP_FUNC void func_80200948_62BD28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020094C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200950: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x80200954: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80200958: bgtz        $t7, L_80200968
    if (SIGNED(ctx->r15) > 0) {
        // 0x8020095C: sw          $t7, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r15;
            goto L_80200968;
    }
    // 0x8020095C: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x80200960: jal         0x80200978
    // 0x80200964: nop

    func_80200978_62BD58(rdram, ctx);
        goto after_0;
    // 0x80200964: nop

    after_0:
L_80200968:
    // 0x80200968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020096C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80200970: jr          $ra
    // 0x80200974: nop

    TRACE_RETURN()
    return;
    // 0x80200974: nop

;}
RECOMP_FUNC void func_801DED6C_60A14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DED6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DED70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DED74: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801DED78: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DED7C: lui         $at, 0x4069
    ctx->r1 = S32(0X4069 << 16);
    // 0x801DED80: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801DED84: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DED88: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DED8C: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x801DED90: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801DED94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DED98: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DED9C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801DEDA0: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801DEDA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DEDA8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801DEDAC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801DEDB0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x801DEDB4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x801DEDB8: nop

    // 0x801DEDBC: bc1fl       L_801DEDD0
    if (!c1cs) {
        // 0x801DEDC0: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_801DEDD0;
    }
    goto skip_0;
    // 0x801DEDC0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    skip_0:
    // 0x801DEDC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DEDC8: nop

    // 0x801DEDCC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_801DEDD0:
    // 0x801DEDD0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DEDD4: nop

    // 0x801DEDD8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801DEDDC: nop

    // 0x801DEDE0: bc1fl       L_801DEDF0
    if (!c1cs) {
        // 0x801DEDE4: trunc.w.s   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801DEDF0;
    }
    goto skip_1;
    // 0x801DEDE4: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x801DEDE8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x801DEDEC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
L_801DEDF0:
    // 0x801DEDF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DEDF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DEDF8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801DEDFC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x801DEE00: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DEE04: jal         0x8000DF10
    // 0x801DEE08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801DEE08: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x801DEE0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DEE10: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801DEE14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DEE18: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x801DEE1C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801DEE20: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801DEE24: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801DEE28: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DEE2C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801DEE30: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801DEE34: sw          $t9, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r25;
    // 0x801DEE38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DEE3C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801DEE40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801DEE44: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801DEE48: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801DEE4C: beql        $v0, $zero, L_801DEE9C
    if (ctx->r2 == 0) {
        // 0x801DEE50: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_801DEE9C;
    }
    goto skip_2;
    // 0x801DEE50: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x801DEE54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEE58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DEE5C: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DEE60: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801DEE64: nop

    // 0x801DEE68: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801DEE6C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801DEE70: nop

    // 0x801DEE74: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801DEE78: bne         $v0, $zero, L_801DEE90
    if (ctx->r2 != 0) {
        // 0x801DEE7C: nop
    
            goto L_801DEE90;
    }
    // 0x801DEE7C: nop

    // 0x801DEE80: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801DEE84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801DEE88: b           L_801DEEA8
    // 0x801DEE8C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801DEEA8;
    // 0x801DEE8C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801DEE90:
    // 0x801DEE90: b           L_801DEEA8
    // 0x801DEE94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801DEEA8;
    // 0x801DEE94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801DEE98: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_801DEE9C:
    // 0x801DEE9C: nop

    // 0x801DEEA0: bltz        $v0, L_801DEE90
    if (SIGNED(ctx->r2) < 0) {
        // 0x801DEEA4: nop
    
            goto L_801DEE90;
    }
    // 0x801DEEA4: nop

L_801DEEA8:
    // 0x801DEEA8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x801DEEAC: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x801DEEB0: jr          $ra
    // 0x801DEEB4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    TRACE_RETURN()
    return;
    // 0x801DEEB4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void func_801F1D78_61D158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1D80: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801F1D84: sltiu       $at, $t6, 0xB
    ctx->r1 = ctx->r14 < 0XB ? 1 : 0;
    // 0x801F1D88: beq         $at, $zero, L_801F1E6C
    if (ctx->r1 == 0) {
        // 0x801F1D8C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801F1E6C;
    }
    // 0x801F1D8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801F1D90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1D94: addu        $at, $at, $t6
    gpr jr_addend_801F1D9C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F1D98: lw          $t6, -0x1A64($at)
    ctx->r14 = ADD32(ctx->r1, -0X1A64);
    // 0x801F1D9C: jr          $t6
    // 0x801F1DA0: nop

    switch (jr_addend_801F1D9C >> 2) {
        case 0: goto L_801F1DA4; break;
        case 1: goto L_801F1DB8; break;
        case 2: goto L_801F1DCC; break;
        case 3: goto L_801F1DE0; break;
        case 4: goto L_801F1DF4; break;
        case 5: goto L_801F1E08; break;
        case 6: goto L_801F1E1C; break;
        case 7: goto L_801F1E30; break;
        case 8: goto L_801F1E44; break;
        case 9: goto L_801F1E58; break;
        case 10: goto L_801F1E6C; break;
        default: switch_error(__func__, 0x801F1D9C, 0x8020E59C);
    }
    // 0x801F1DA0: nop

L_801F1DA4:
    // 0x801F1DA4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F1DA8: jal         0x801F1FA4
    // 0x801F1DAC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_0;
    // 0x801F1DAC: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x801F1DB0: b           L_801F1E88
    // 0x801F1DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1DB8:
    // 0x801F1DB8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801F1DBC: jal         0x801F1FA4
    // 0x801F1DC0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_1;
    // 0x801F1DC0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_1:
    // 0x801F1DC4: b           L_801F1E88
    // 0x801F1DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1DC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1DCC:
    // 0x801F1DCC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801F1DD0: jal         0x801F1FA4
    // 0x801F1DD4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_2;
    // 0x801F1DD4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x801F1DD8: b           L_801F1E88
    // 0x801F1DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1DE0:
    // 0x801F1DE0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F1DE4: jal         0x801F1FA4
    // 0x801F1DE8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_3;
    // 0x801F1DE8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x801F1DEC: b           L_801F1E88
    // 0x801F1DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1DF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1DF4:
    // 0x801F1DF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801F1DF8: jal         0x801F1FA4
    // 0x801F1DFC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_4;
    // 0x801F1DFC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_4:
    // 0x801F1E00: b           L_801F1E88
    // 0x801F1E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E08:
    // 0x801F1E08: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F1E0C: jal         0x801F1FA4
    // 0x801F1E10: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_5;
    // 0x801F1E10: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_5:
    // 0x801F1E14: b           L_801F1E88
    // 0x801F1E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E1C:
    // 0x801F1E1C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801F1E20: jal         0x801F1FA4
    // 0x801F1E24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_6;
    // 0x801F1E24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x801F1E28: b           L_801F1E88
    // 0x801F1E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E30:
    // 0x801F1E30: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801F1E34: jal         0x801F1FA4
    // 0x801F1E38: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_7;
    // 0x801F1E38: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x801F1E3C: b           L_801F1E88
    // 0x801F1E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E44:
    // 0x801F1E44: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801F1E48: jal         0x801F1FA4
    // 0x801F1E4C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_8;
    // 0x801F1E4C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_8:
    // 0x801F1E50: b           L_801F1E88
    // 0x801F1E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E58:
    // 0x801F1E58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x801F1E5C: jal         0x801F1FA4
    // 0x801F1E60: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_9;
    // 0x801F1E60: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_9:
    // 0x801F1E64: b           L_801F1E88
    // 0x801F1E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1E88;
    // 0x801F1E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E6C:
    // 0x801F1E6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801F1E70: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801F1E74: jal         0x801F1FA4
    // 0x801F1E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F1FA4_61D384(rdram, ctx);
        goto after_10;
    // 0x801F1E78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x801F1E7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F1E80: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801F1E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1E88:
    // 0x801F1E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1E8C: jr          $ra
    // 0x801F1E90: nop

    TRACE_RETURN()
    return;
    // 0x801F1E90: nop

;}
RECOMP_FUNC void func_801F977C_624B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F977C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F9780: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F9784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F9788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F978C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F9790: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F9794: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x801F9798: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F979C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F97A0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F97A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F97A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F97AC: lw          $t6, 0x1D8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1D8);
    // 0x801F97B0: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F97B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F97B8: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x801F97BC: addiu       $a0, $zero, 0x27F
    ctx->r4 = ADD32(0, 0X27F);
    // 0x801F97C0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F97C4: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x801F97C8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F97CC: ldc1        $f18, -0x1770($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1770);
    // 0x801F97D0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801F97D4: c.eq.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d == ctx->f4.d;
    // 0x801F97D8: nop

    // 0x801F97DC: bc1fl       L_801F9800
    if (!c1cs) {
        // 0x801F97E0: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_801F9800;
    }
    goto skip_0;
    // 0x801F97E0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    skip_0:
    // 0x801F97E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801F97E8: jal         0x80038BC8
    // 0x801F97EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801F97EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F97F0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801F97F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F97F8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F97FC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_801F9800:
    // 0x801F9800: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9804: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F9808: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x801F980C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x801F9810: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9814: bc1fl       L_801F9830
    if (!c1cs) {
        // 0x801F9818: lwc1        $f8, 0x8($a1)
        ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
            goto L_801F9830;
    }
    goto skip_1;
    // 0x801F9818: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    skip_1:
    // 0x801F981C: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801F9820: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F9824: sb          $t7, 0x2C1($t8)
    MEM_B(0X2C1, ctx->r24) = ctx->r15;
    // 0x801F9828: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F982C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
L_801F9830:
    // 0x801F9830: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x801F9834: addiu       $a0, $a0, -0x67A0
    ctx->r4 = ADD32(ctx->r4, -0X67A0);
    // 0x801F9838: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x801F983C: nop

    // 0x801F9840: bc1fl       L_801F9854
    if (!c1cs) {
        // 0x801F9844: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F9854;
    }
    goto skip_2;
    // 0x801F9844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801F9848: jal         0x8003521C
    // 0x801F984C: sw          $t9, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F984C: sw          $t9, 0x7C($t0)
    MEM_W(0X7C, ctx->r8) = ctx->r25;
    after_1:
    // 0x801F9850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9854:
    // 0x801F9854: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9858: jr          $ra
    // 0x801F985C: nop

    TRACE_RETURN()
    return;
    // 0x801F985C: nop

;}
RECOMP_FUNC void func_801F9B74_624F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9B74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F9B78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F9B7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F9B80: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F9B84: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F9B88: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F9B8C: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801F9B90: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x801F9B94: slti        $at, $v0, 0x50
    ctx->r1 = SIGNED(ctx->r2) < 0X50 ? 1 : 0;
    // 0x801F9B98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F9B9C: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x801F9BA0: beq         $at, $zero, L_801F9BEC
    if (ctx->r1 == 0) {
        // 0x801F9BA4: addiu       $t0, $t0, 0xA0
        ctx->r8 = ADD32(ctx->r8, 0XA0);
            goto L_801F9BEC;
    }
    // 0x801F9BA4: addiu       $t0, $t0, 0xA0
    ctx->r8 = ADD32(ctx->r8, 0XA0);
    // 0x801F9BA8: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x801F9BAC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801F9BB0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F9BB4: beq         $v1, $zero, L_801F9BEC
    if (ctx->r3 == 0) {
        // 0x801F9BB8: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_801F9BEC;
    }
    // 0x801F9BB8: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x801F9BBC: sw          $t8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r24;
    // 0x801F9BC0: lw          $a3, 0x80($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X80);
    // 0x801F9BC4: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x801F9BC8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F9BCC: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x801F9BD0: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x801F9BD4: andi        $a3, $t9, 0xFFFF
    ctx->r7 = ctx->r25 & 0XFFFF;
    // 0x801F9BD8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x801F9BDC: jal         0x801D15BC
    // 0x801F9BE0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801F9BE0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_0:
    // 0x801F9BE4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801F9BE8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801F9BEC:
    // 0x801F9BEC: bgtzl       $v0, L_801F9C90
    if (SIGNED(ctx->r2) > 0) {
        // 0x801F9BF0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F9C90;
    }
    goto skip_0;
    // 0x801F9BF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801F9BF4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F9BF8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801F9BFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F9C00: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F9C04: jal         0x801D4EB8
    // 0x801F9C08: lw          $a3, 0x14($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X14);
    func_801D4EB8_600298(rdram, ctx);
        goto after_1;
    // 0x801F9C08: lw          $a3, 0x14($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X14);
    after_1:
    // 0x801F9C0C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F9C10: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F9C14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F9C18: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F9C1C: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F9C20: jal         0x801D4D0C
    // 0x801F9C24: nop

    func_801D4D0C_6000EC(rdram, ctx);
        goto after_2;
    // 0x801F9C24: nop

    after_2:
    // 0x801F9C28: beq         $v0, $zero, L_801F9C8C
    if (ctx->r2 == 0) {
        // 0x801F9C2C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801F9C8C;
    }
    // 0x801F9C2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F9C30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F9C34: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801F9C38: jal         0x801D5064
    // 0x801F9C3C: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    func_801D5064_600444(rdram, ctx);
        goto after_3;
    // 0x801F9C3C: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    after_3:
    // 0x801F9C40: beq         $v0, $zero, L_801F9C8C
    if (ctx->r2 == 0) {
        // 0x801F9C44: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801F9C8C;
    }
    // 0x801F9C44: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F9C48: addiu       $v0, $v0, -0x1130
    ctx->r2 = ADD32(ctx->r2, -0X1130);
    // 0x801F9C4C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801F9C50: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F9C54: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F9C58: sb          $zero, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = 0;
    // 0x801F9C5C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x801F9C60: addiu       $a1, $a1, -0x7B4
    ctx->r5 = ADD32(ctx->r5, -0X7B4);
    // 0x801F9C64: sb          $zero, 0x2C2($t4)
    MEM_B(0X2C2, ctx->r12) = 0;
    // 0x801F9C68: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801F9C6C: sb          $zero, 0x2C3($t5)
    MEM_B(0X2C3, ctx->r13) = 0;
    // 0x801F9C70: lw          $t6, -0x10D0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10D0);
    // 0x801F9C74: sb          $zero, 0xC($t6)
    MEM_B(0XC, ctx->r14) = 0;
    // 0x801F9C78: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801F9C7C: jal         0x8003522C
    // 0x801F9C80: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801F9C80: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    after_4:
    // 0x801F9C84: jal         0x80034ED4
    // 0x801F9C88: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801F9C88: nop

    after_5:
L_801F9C8C:
    // 0x801F9C8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F9C90:
    // 0x801F9C90: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F9C94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F9C98: jr          $ra
    // 0x801F9C9C: nop

    TRACE_RETURN()
    return;
    // 0x801F9C9C: nop

;}
RECOMP_FUNC void func_801D5F34_601314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5F34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D5F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D5F3C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801D5F40: beq         $a0, $zero, L_801D5FFC
    if (ctx->r4 == 0) {
        // 0x801D5F44: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_801D5FFC;
    }
    // 0x801D5F44: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801D5F48: beql        $a1, $zero, L_801D6000
    if (ctx->r5 == 0) {
        // 0x801D5F4C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6000;
    }
    goto skip_0;
    // 0x801D5F4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D5F50: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x801D5F54: beql        $v0, $zero, L_801D6000
    if (ctx->r2 == 0) {
        // 0x801D5F58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6000;
    }
    goto skip_1;
    // 0x801D5F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801D5F5C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801D5F60: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5F64: beql        $v1, $zero, L_801D6000
    if (ctx->r3 == 0) {
        // 0x801D5F68: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D6000;
    }
    goto skip_2;
    // 0x801D5F68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801D5F6C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801D5F70: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5F74: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x801D5F78: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D5F7C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5F80: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x801D5F84: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x801D5F88: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x801D5F8C: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801D5F90: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D5F94: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x801D5F98: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801D5F9C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D5FA0: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801D5FA4: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801D5FA8: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801D5FAC: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801D5FB0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D5FB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801D5FB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D5FBC: jal         0x8000E808
    // 0x801D5FC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801D5FC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D5FC4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801D5FC8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D5FCC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D5FD0: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D5FD4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D5FD8: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x801D5FDC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5FE0: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D5FE4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5FE8: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x801D5FEC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D5FF0: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D5FF4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D5FF8: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_801D5FFC:
    // 0x801D5FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D6000:
    // 0x801D6000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D6004: jr          $ra
    // 0x801D6008: nop

    TRACE_RETURN()
    return;
    // 0x801D6008: nop

;}
RECOMP_FUNC void func_801F6AC8_621EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6AD0: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801F6AD4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F6AD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6ADC: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F6AE0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x801F6AE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F6AE8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F6AEC: bgez        $t6, L_801F6B00
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801F6AF0: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801F6B00;
    }
    // 0x801F6AF0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801F6AF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F6AF8: nop

    // 0x801F6AFC: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801F6B00:
    // 0x801F6B00: add.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801F6B04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F6B08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F6B0C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F6B10: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F6B14: nop

    // 0x801F6B18: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801F6B1C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F6B20: nop

    // 0x801F6B24: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F6B28: beql        $t8, $zero, L_801F6B78
    if (ctx->r24 == 0) {
        // 0x801F6B2C: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_801F6B78;
    }
    goto skip_0;
    // 0x801F6B2C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x801F6B30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6B34: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F6B38: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F6B3C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x801F6B40: nop

    // 0x801F6B44: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801F6B48: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x801F6B4C: nop

    // 0x801F6B50: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x801F6B54: bne         $t8, $zero, L_801F6B6C
    if (ctx->r24 != 0) {
        // 0x801F6B58: nop
    
            goto L_801F6B6C;
    }
    // 0x801F6B58: nop

    // 0x801F6B5C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x801F6B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F6B64: b           L_801F6B84
    // 0x801F6B68: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_801F6B84;
    // 0x801F6B68: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_801F6B6C:
    // 0x801F6B6C: b           L_801F6B84
    // 0x801F6B70: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_801F6B84;
    // 0x801F6B70: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F6B74: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_801F6B78:
    // 0x801F6B78: nop

    // 0x801F6B7C: bltz        $t8, L_801F6B6C
    if (SIGNED(ctx->r24) < 0) {
        // 0x801F6B80: nop
    
            goto L_801F6B6C;
    }
    // 0x801F6B80: nop

L_801F6B84:
    // 0x801F6B84: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F6B88: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x801F6B8C: jal         0x801D60E4
    // 0x801F6B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801F6B90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F6B94: jal         0x801F732C
    // 0x801F6B98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F732C_62270C(rdram, ctx);
        goto after_1;
    // 0x801F6B98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F6B9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6BA0: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x801F6BA4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F6BA8: bgtz        $t0, L_801F6BBC
    if (SIGNED(ctx->r8) > 0) {
        // 0x801F6BAC: sw          $t0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r8;
            goto L_801F6BBC;
    }
    // 0x801F6BAC: sw          $t0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r8;
    // 0x801F6BB0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F6BB4: jal         0x8003521C
    // 0x801F6BB8: addiu       $a0, $a0, 0x6BCC
    ctx->r4 = ADD32(ctx->r4, 0X6BCC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F6BB8: addiu       $a0, $a0, 0x6BCC
    ctx->r4 = ADD32(ctx->r4, 0X6BCC);
    after_2:
L_801F6BBC:
    // 0x801F6BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6BC4: jr          $ra
    // 0x801F6BC8: nop

    TRACE_RETURN()
    return;
    // 0x801F6BC8: nop

;}
RECOMP_FUNC void func_801F7CEC_6230CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7CEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F7CF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F7CF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F7CF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F7CFC: jal         0x801F7168
    // 0x801F7D00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801F7168_622548(rdram, ctx);
        goto after_0;
    // 0x801F7D00: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F7D04: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801F7D08: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F7D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F7D10: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x801F7D14: lui         $a1, 0xBDCC
    ctx->r5 = S32(0XBDCC << 16);
    // 0x801F7D18: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801F7D1C: nop

    // 0x801F7D20: bc1fl       L_801F7DBC
    if (!c1cs) {
        // 0x801F7D24: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801F7DBC;
    }
    goto skip_0;
    // 0x801F7D24: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x801F7D28: jal         0x801D6508
    // 0x801F7D2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801F7D2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x801F7D30: jal         0x801D60E4
    // 0x801F7D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801F7D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F7D38: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x801F7D3C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F7D40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F7D44: lwc1        $f8, 0xC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801F7D48: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801F7D4C: nop

    // 0x801F7D50: bc1fl       L_801F7E44
    if (!c1cs) {
        // 0x801F7D54: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F7E44;
    }
    goto skip_1;
    // 0x801F7D54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801F7D58: lwc1        $f10, 0x74($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F7D5C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F7D60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F7D64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F7D68: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F7D6C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7D70: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F7D74: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F7D78: addiu       $a0, $zero, 0x283
    ctx->r4 = ADD32(0, 0X283);
    // 0x801F7D7C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F7D80: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801F7D84: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F7D88: jal         0x8000F3D8
    // 0x801F7D8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_3;
    // 0x801F7D8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801F7D90: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801F7D94: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801F7D98: lui         $a3, 0x3D75
    ctx->r7 = S32(0X3D75 << 16);
    // 0x801F7D9C: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801F7DA0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801F7DA4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F7DA8: jal         0x801F74E4
    // 0x801F7DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801F7DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F7DB0: b           L_801F7E44
    // 0x801F7DB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801F7E44;
    // 0x801F7DB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F7DB8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_801F7DBC:
    // 0x801F7DBC: lwc1        $f0, 0x74($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F7DC0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801F7DC4: nop

    // 0x801F7DC8: bc1fl       L_801F7DE4
    if (!c1cs) {
        // 0x801F7DCC: neg.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
            goto L_801F7DE4;
    }
    goto skip_2;
    // 0x801F7DCC: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    skip_2:
    // 0x801F7DD0: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x801F7DD4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x801F7DD8: b           L_801F7DE8
    // 0x801F7DDC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
        goto L_801F7DE8;
    // 0x801F7DDC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801F7DE0: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
L_801F7DE4:
    // 0x801F7DE4: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
L_801F7DE8:
    // 0x801F7DE8: jal         0x801D614C
    // 0x801F7DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_5;
    // 0x801F7DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F7DF0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F7DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7DF8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F7DFC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x801F7E00: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F7E04: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F7E08: lwc1        $f18, 0xC($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0XC);
    // 0x801F7E0C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F7E10: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x801F7E14: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x801F7E18: nop

    // 0x801F7E1C: bc1fl       L_801F7E44
    if (!c1cs) {
        // 0x801F7E20: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801F7E44;
    }
    goto skip_3;
    // 0x801F7E20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801F7E24: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F7E28: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F7E2C: jal         0x8000E39C
    // 0x801F7E30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_6;
    // 0x801F7E30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_6:
    // 0x801F7E34: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7E38: jal         0x8003521C
    // 0x801F7E3C: addiu       $a0, $a0, 0x7E54
    ctx->r4 = ADD32(ctx->r4, 0X7E54);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F7E3C: addiu       $a0, $a0, 0x7E54
    ctx->r4 = ADD32(ctx->r4, 0X7E54);
    after_7:
    // 0x801F7E40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801F7E44:
    // 0x801F7E44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F7E48: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F7E4C: jr          $ra
    // 0x801F7E50: nop

    TRACE_RETURN()
    return;
    // 0x801F7E50: nop

;}
RECOMP_FUNC void func_80201ED8_62D2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80201EDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80201EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201EE4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201EE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201EEC: jal         0x8003521C
    // 0x80201EF0: addiu       $a0, $a0, 0x1F0C
    ctx->r4 = ADD32(ctx->r4, 0X1F0C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80201EF0: addiu       $a0, $a0, 0x1F0C
    ctx->r4 = ADD32(ctx->r4, 0X1F0C);
    after_0:
    // 0x80201EF4: jal         0x80204624
    // 0x80201EF8: nop

    func_80204624_62FA04(rdram, ctx);
        goto after_1;
    // 0x80201EF8: nop

    after_1:
    // 0x80201EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201F00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201F04: jr          $ra
    // 0x80201F08: nop

    TRACE_RETURN()
    return;
    // 0x80201F08: nop

;}
RECOMP_FUNC void func_801D8290_603670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8290: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8294: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8298: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D829C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D82A0: lbu         $v1, 0x15D($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X15D);
    // 0x801D82A4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801D82A8: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D82AC: blez        $v1, L_801D82C8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D82B0: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_801D82C8;
    }
    // 0x801D82B0: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801D82B4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D82B8: bne         $t7, $zero, L_801D82C8
    if (ctx->r15 != 0) {
        // 0x801D82BC: sb          $t6, 0x1D($v0)
        MEM_B(0X1D, ctx->r2) = ctx->r14;
            goto L_801D82C8;
    }
    // 0x801D82BC: sb          $t6, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r14;
    // 0x801D82C0: sb          $zero, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = 0;
    // 0x801D82C4: sb          $zero, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = 0;
L_801D82C8:
    // 0x801D82C8: lbu         $a0, 0x1B($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1B);
    // 0x801D82CC: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x801D82D0: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x801D82D4: beq         $a0, $zero, L_801D82FC
    if (ctx->r4 == 0) {
        // 0x801D82D8: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801D82FC;
    }
    // 0x801D82D8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801D82DC: beq         $a0, $at, L_801D834C
    if (ctx->r4 == ctx->r1) {
        // 0x801D82E0: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_801D834C;
    }
    // 0x801D82E0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D82E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D82E8: beq         $v1, $at, L_801D838C
    if (ctx->r3 == ctx->r1) {
        // 0x801D82EC: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_801D838C;
    }
    // 0x801D82EC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801D82F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D82F4: beq         $v1, $at, L_801D83CC
    if (ctx->r3 == ctx->r1) {
        // 0x801D82F8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801D83CC;
    }
    // 0x801D82F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_801D82FC:
    // 0x801D82FC: sb          $zero, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = 0;
    // 0x801D8300: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801D8304: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D8308: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D830C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D8310: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801D8314: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801D8318: lhu         $t0, 0x307C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X307C);
    // 0x801D831C: andi        $t1, $t0, 0x8
    ctx->r9 = ctx->r8 & 0X8;
    // 0x801D8320: beq         $t1, $zero, L_801D83D0
    if (ctx->r9 == 0) {
        // 0x801D8324: nop
    
            goto L_801D83D0;
    }
    // 0x801D8324: nop

    // 0x801D8328: lhu         $t2, 0x307A($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X307A);
    // 0x801D832C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D8330: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x801D8334: andi        $t3, $t2, 0x7
    ctx->r11 = ctx->r10 & 0X7;
    // 0x801D8338: bne         $t3, $zero, L_801D83D0
    if (ctx->r11 != 0) {
        // 0x801D833C: nop
    
            goto L_801D83D0;
    }
    // 0x801D833C: nop

    // 0x801D8340: sb          $t5, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r13;
    // 0x801D8344: jr          $ra
    // 0x801D8348: sb          $t6, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801D8348: sb          $t6, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r14;
L_801D834C:
    // 0x801D834C: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D8350: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x801D8354: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x801D8358: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801D835C: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801D8360: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801D8364: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801D8368: lhu         $t0, -0x4F84($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X4F84);
    // 0x801D836C: addiu       $t2, $a0, 0x1
    ctx->r10 = ADD32(ctx->r4, 0X1);
    // 0x801D8370: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x801D8374: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x801D8378: beq         $t1, $zero, L_801D83D0
    if (ctx->r9 == 0) {
        // 0x801D837C: nop
    
            goto L_801D83D0;
    }
    // 0x801D837C: nop

    // 0x801D8380: sb          $t2, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r10;
    // 0x801D8384: jr          $ra
    // 0x801D8388: sb          $t3, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801D8388: sb          $t3, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r11;
L_801D838C:
    // 0x801D838C: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801D8390: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x801D8394: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x801D8398: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801D839C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801D83A0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x801D83A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D83A8: lhu         $t7, -0x4F84($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F84);
    // 0x801D83AC: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x801D83B0: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801D83B4: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x801D83B8: beq         $t8, $zero, L_801D83D0
    if (ctx->r24 == 0) {
        // 0x801D83BC: nop
    
            goto L_801D83D0;
    }
    // 0x801D83BC: nop

    // 0x801D83C0: sb          $t9, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r25;
    // 0x801D83C4: jr          $ra
    // 0x801D83C8: sb          $t0, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x801D83C8: sb          $t0, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r8;
L_801D83CC:
    // 0x801D83CC: sb          $t1, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r9;
L_801D83D0:
    // 0x801D83D0: jr          $ra
    // 0x801D83D4: nop

    TRACE_RETURN()
    return;
    // 0x801D83D4: nop

;}
RECOMP_FUNC void func_801EAC4C_61602C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAC4C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EAC50: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EAC54: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EAC58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EAC5C: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801EAC60: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801EAC64: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801EAC68: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801EAC6C: lw          $v1, 0x1D8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D8);
    // 0x801EAC70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EAC74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EAC78: lw          $t7, 0xD8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XD8);
    // 0x801EAC7C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801EAC80: beql        $t7, $at, L_801EAC9C
    if (ctx->r15 == ctx->r1) {
        // 0x801EAC84: lw          $v1, 0x90($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X90);
            goto L_801EAC9C;
    }
    goto skip_0;
    // 0x801EAC84: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    skip_0:
    // 0x801EAC88: jal         0x80034ED4
    // 0x801EAC8C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801EAC8C: nop

    after_0:
    // 0x801EAC90: b           L_801EAE70
    // 0x801EAC94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EAE70;
    // 0x801EAC94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EAC98: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
L_801EAC9C:
    // 0x801EAC9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EACA0: ldc1        $f8, -0x1EB0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EB0);
    // 0x801EACA4: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EACA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EACAC: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x801EACB0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EACB4: addiu       $t9, $sp, 0x44
    ctx->r25 = ADD32(ctx->r29, 0X44);
    // 0x801EACB8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801EACBC: ldc1        $f6, -0x1EA8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1EA8);
    // 0x801EACC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EACC4: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801EACC8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801EACCC: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x801EACD0: lwc1        $f18, 0x20($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EACD4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EACD8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801EACDC: ldc1        $f4, -0x1EA0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1EA0);
    // 0x801EACE0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EACE4: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x801EACE8: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EACEC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801EACF0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801EACF4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801EACF8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801EACFC: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801EAD00: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801EAD04: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801EAD08: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801EAD0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801EAD10: jal         0x8000E808
    // 0x801EAD14: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_1;
    // 0x801EAD14: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801EAD18: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801EAD1C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EAD20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EAD24: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EAD28: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x801EAD2C: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801EAD30: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EAD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EAD38: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801EAD3C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EAD40: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EAD44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801EAD48: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x801EAD4C: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801EAD50: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EAD54: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EAD58: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x801EAD5C: lhu         $t0, 0x14($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X14);
    // 0x801EAD60: sh          $t0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r8;
    // 0x801EAD64: lhu         $t1, 0x16($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X16);
    // 0x801EAD68: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
    // 0x801EAD6C: lhu         $t2, 0x18($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X18);
    // 0x801EAD70: sh          $t2, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r10;
    // 0x801EAD74: lw          $t3, 0x94($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X94);
    // 0x801EAD78: addiu       $t4, $t3, 0x5
    ctx->r12 = ADD32(ctx->r11, 0X5);
    // 0x801EAD7C: slti        $at, $t4, 0xB4
    ctx->r1 = SIGNED(ctx->r12) < 0XB4 ? 1 : 0;
    // 0x801EAD80: bne         $at, $zero, L_801EAD8C
    if (ctx->r1 != 0) {
        // 0x801EAD84: sw          $t4, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r12;
            goto L_801EAD8C;
    }
    // 0x801EAD84: sw          $t4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r12;
    // 0x801EAD88: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
L_801EAD8C:
    // 0x801EAD8C: lw          $t7, 0x98($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X98);
    // 0x801EAD90: addiu       $a2, $t7, 0x6
    ctx->r6 = ADD32(ctx->r15, 0X6);
    // 0x801EAD94: slti        $at, $a2, 0xFF
    ctx->r1 = SIGNED(ctx->r6) < 0XFF ? 1 : 0;
    // 0x801EAD98: bne         $at, $zero, L_801EADA8
    if (ctx->r1 != 0) {
        // 0x801EAD9C: sw          $a2, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r6;
            goto L_801EADA8;
    }
    // 0x801EAD9C: sw          $a2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r6;
    // 0x801EADA0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EADA4: sw          $a2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r6;
L_801EADA8:
    // 0x801EADA8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EADAC: lw          $t0, 0x94($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X94);
    // 0x801EADB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EADB4: jal         0x8000DF10
    // 0x801EADB8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801EADB8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x801EADBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EADC0: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801EADC4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EADC8: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801EADCC: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801EADD0: lw          $t3, 0x98($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X98);
    // 0x801EADD4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801EADD8: bnel        $t3, $at, L_801EAE10
    if (ctx->r11 != ctx->r1) {
        // 0x801EADDC: lw          $v1, 0x34($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X34);
            goto L_801EAE10;
    }
    goto skip_1;
    // 0x801EADDC: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    skip_1:
    // 0x801EADE0: lbu         $t4, 0x30($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X30);
    // 0x801EADE4: beql        $t4, $zero, L_801EAE10
    if (ctx->r12 == 0) {
        // 0x801EADE8: lw          $v1, 0x34($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X34);
            goto L_801EAE10;
    }
    goto skip_2;
    // 0x801EADE8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    skip_2:
    // 0x801EADEC: lw          $t5, 0x7C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7C);
    // 0x801EADF0: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x801EADF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EADF8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801EADFC: bne         $t6, $zero, L_801EAE0C
    if (ctx->r14 != 0) {
        // 0x801EAE00: sw          $t6, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r14;
            goto L_801EAE0C;
    }
    // 0x801EAE00: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801EAE04: jal         0x801EAE80
    // 0x801EAE08: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    func_801EAE80_616260(rdram, ctx);
        goto after_3;
    // 0x801EAE08: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    after_3:
L_801EAE0C:
    // 0x801EAE0C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
L_801EAE10:
    // 0x801EAE10: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EAE14: beql        $v1, $zero, L_801EAE70
    if (ctx->r3 == 0) {
        // 0x801EAE18: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801EAE70;
    }
    goto skip_3;
    // 0x801EAE18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801EAE1C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EAE20: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801EAE24: lw          $t9, 0x1CC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X1CC);
    // 0x801EAE28: bne         $t9, $v1, L_801EAE64
    if (ctx->r25 != ctx->r3) {
        // 0x801EAE2C: nop
    
            goto L_801EAE64;
    }
    // 0x801EAE2C: nop

    // 0x801EAE30: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x801EAE34: bne         $t1, $zero, L_801EAE64
    if (ctx->r9 != 0) {
        // 0x801EAE38: nop
    
            goto L_801EAE64;
    }
    // 0x801EAE38: nop

    // 0x801EAE3C: lbu         $t2, 0x2C5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2C5);
    // 0x801EAE40: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801EAE44: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    // 0x801EAE48: bne         $t2, $zero, L_801EAE64
    if (ctx->r10 != 0) {
        // 0x801EAE4C: nop
    
            goto L_801EAE64;
    }
    // 0x801EAE4C: nop

    // 0x801EAE50: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801EAE54: jal         0x80038BC8
    // 0x801EAE58: sb          $t3, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r11;
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801EAE58: sb          $t3, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r11;
    after_4:
    // 0x801EAE5C: jal         0x801EB03C
    // 0x801EAE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EB03C_61641C(rdram, ctx);
        goto after_5;
    // 0x801EAE60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_801EAE64:
    // 0x801EAE64: jal         0x801D36C4
    // 0x801EAE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_6;
    // 0x801EAE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801EAE6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EAE70:
    // 0x801EAE70: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801EAE74: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801EAE78: jr          $ra
    // 0x801EAE7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801EAE7C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801E4628_60FA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4628: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E462C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801E4630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4638: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E463C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E4640: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801E4644: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x801E4648: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801E464C: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x801E4650: addiu       $v1, $a1, 0xA0
    ctx->r3 = ADD32(ctx->r5, 0XA0);
    // 0x801E4654: sb          $a2, 0x2C0($a1)
    MEM_B(0X2C0, ctx->r5) = ctx->r6;
    // 0x801E4658: sb          $zero, 0x2C1($a1)
    MEM_B(0X2C1, ctx->r5) = 0;
    // 0x801E465C: sb          $a2, 0x2C2($a1)
    MEM_B(0X2C2, ctx->r5) = ctx->r6;
    // 0x801E4660: sb          $a2, 0x2C3($a1)
    MEM_B(0X2C3, ctx->r5) = ctx->r6;
    // 0x801E4664: sw          $t6, 0x1EC($a1)
    MEM_W(0X1EC, ctx->r5) = ctx->r14;
    // 0x801E4668: sw          $t7, 0x1F0($a1)
    MEM_W(0X1F0, ctx->r5) = ctx->r15;
    // 0x801E466C: sw          $t8, 0x1F4($a1)
    MEM_W(0X1F4, ctx->r5) = ctx->r24;
    // 0x801E4670: sw          $t9, 0x1F8($a1)
    MEM_W(0X1F8, ctx->r5) = ctx->r25;
    // 0x801E4674: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801E4678: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E467C: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x801E4680: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x801E4684: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x801E4688: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x801E468C: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x801E4690: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x801E4694: jal         0x801E33A4
    // 0x801E4698: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    func_801E33A4_60E784(rdram, ctx);
        goto after_0;
    // 0x801E4698: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    after_0:
    // 0x801E469C: jal         0x80038BC8
    // 0x801E46A0: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E46A0: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_1:
    // 0x801E46A4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E46A8: addiu       $a0, $a0, 0x46FC
    ctx->r4 = ADD32(ctx->r4, 0X46FC);
    // 0x801E46AC: jal         0x80034DD8
    // 0x801E46B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801E46B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801E46B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E46B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E46BC: jr          $ra
    // 0x801E46C0: nop

    TRACE_RETURN()
    return;
    // 0x801E46C0: nop

;}
RECOMP_FUNC void func_801ED4D4_6188B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED4D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ED4D8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801ED4DC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801ED4E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801ED4E4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801ED4E8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801ED4EC: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801ED4F0: lwc1        $f6, 0x180($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X180);
    // 0x801ED4F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801ED4F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801ED4FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801ED500: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801ED504: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801ED508: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED50C: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x801ED510: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801ED514: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801ED518: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801ED51C: lw          $a1, 0x90($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X90);
    // 0x801ED520: lw          $a3, 0x98($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X98);
    // 0x801ED524: lw          $a2, 0x94($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X94);
    // 0x801ED528: jal         0x8000EE50
    // 0x801ED52C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000EE50_FA50(rdram, ctx);
        goto after_0;
    // 0x801ED52C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801ED530: lwc1        $f10, 0xA4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801ED534: lwc1        $f16, 0xA0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801ED538: lwc1        $f4, 0x9C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X9C);
    // 0x801ED53C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801ED540: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801ED544: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801ED548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ED54C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801ED550: swc1        $f18, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f18.u32l;
    // 0x801ED554: lwc1        $f0, 0xA4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801ED558: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801ED55C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801ED560: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801ED564: nop

    // 0x801ED568: bc1fl       L_801ED584
    if (!c1cs) {
        // 0x801ED56C: swc1        $f0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
            goto L_801ED584;
    }
    goto skip_0;
    // 0x801ED56C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    skip_0:
    // 0x801ED570: jal         0x80034ED4
    // 0x801ED574: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801ED574: nop

    after_1:
    // 0x801ED578: b           L_801ED5C8
    // 0x801ED57C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801ED5C8;
    // 0x801ED57C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801ED580: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_801ED584:
    // 0x801ED584: lwc1        $f6, 0xA4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801ED588: swc1        $f6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f6.u32l;
    // 0x801ED58C: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x801ED590: addiu       $v0, $t9, -0xC
    ctx->r2 = ADD32(ctx->r25, -0XC);
    // 0x801ED594: bne         $v0, $zero, L_801ED5A4
    if (ctx->r2 != 0) {
        // 0x801ED598: sw          $v0, 0xA8($s0)
        MEM_W(0XA8, ctx->r16) = ctx->r2;
            goto L_801ED5A4;
    }
    // 0x801ED598: sw          $v0, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r2;
    // 0x801ED59C: sw          $zero, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = 0;
    // 0x801ED5A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801ED5A4:
    // 0x801ED5A4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801ED5A8: jal         0x8000DF10
    // 0x801ED5AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801ED5AC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x801ED5B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ED5B4: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801ED5B8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ED5BC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801ED5C0: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
    // 0x801ED5C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801ED5C8:
    // 0x801ED5C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801ED5CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801ED5D0: jr          $ra
    // 0x801ED5D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801ED5D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80201088_62C468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201088: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020108C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80201090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80201094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80201098: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8020109C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802010A0: swc1        $f2, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f2.u32l;
    // 0x802010A4: swc1        $f2, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f2.u32l;
    // 0x802010A8: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x802010AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802010B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802010B4: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x802010B8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x802010BC: nop

    // 0x802010C0: bc1fl       L_802010DC
    if (!c1cs) {
        // 0x802010C4: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_802010DC;
    }
    goto skip_0;
    // 0x802010C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x802010C8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802010CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802010D0: b           L_80201174
    // 0x802010D4: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_80201174;
    // 0x802010D4: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x802010D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_802010DC:
    // 0x802010DC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802010E0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802010E4: nop

    // 0x802010E8: bc1fl       L_802010FC
    if (!c1cs) {
        // 0x802010EC: lwc1        $f0, 0x70($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
            goto L_802010FC;
    }
    goto skip_1;
    // 0x802010EC: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    skip_1:
    // 0x802010F0: b           L_80201174
    // 0x802010F4: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
        goto L_80201174;
    // 0x802010F4: swc1        $f2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f2.u32l;
    // 0x802010F8: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
L_802010FC:
    // 0x802010FC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80201100: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80201104: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80201108: nop

    // 0x8020110C: bc1fl       L_80201120
    if (!c1cs) {
        // 0x80201110: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80201120;
    }
    goto skip_2;
    // 0x80201110: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x80201114: b           L_80201120
    // 0x80201118: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80201120;
    // 0x80201118: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8020111C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80201120:
    // 0x80201120: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201124: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80201128: c.eq.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d == ctx->f16.d;
    // 0x8020112C: nop

    // 0x80201130: bc1t        L_80201174
    if (c1cs) {
        // 0x80201134: nop
    
            goto L_80201174;
    }
    // 0x80201134: nop

    // 0x80201138: jal         0x8000DDC0
    // 0x8020113C: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x8020113C: nop

    after_0:
    // 0x80201140: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80201144: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80201148: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020114C: beq         $v0, $zero, L_8020116C
    if (ctx->r2 == 0) {
        // 0x80201150: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_8020116C;
    }
    // 0x80201150: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80201154: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80201158: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8020115C: nop

    // 0x80201160: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80201164: b           L_80201174
    // 0x80201168: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
        goto L_80201174;
    // 0x80201168: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
L_8020116C:
    // 0x8020116C: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x80201170: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80201174:
    // 0x80201174: jal         0x801D600C
    // 0x80201178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x80201178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8020117C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201180: jal         0x801D6330
    // 0x80201184: lui         $a1, 0xC366
    ctx->r5 = S32(0XC366 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x80201184: lui         $a1, 0xC366
    ctx->r5 = S32(0XC366 << 16);
    after_2:
    // 0x80201188: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8020118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201190: jal         0x801D641C
    // 0x80201194: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x80201194: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_3:
    // 0x80201198: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x8020119C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x802011A0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802011A4: beql        $t6, $zero, L_802011C4
    if (ctx->r14 == 0) {
        // 0x802011A8: lw          $t9, 0x7C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X7C);
            goto L_802011C4;
    }
    goto skip_3;
    // 0x802011A8: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    skip_3:
    // 0x802011AC: beq         $v1, $zero, L_802011C0
    if (ctx->r3 == 0) {
        // 0x802011B0: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_802011C0;
    }
    // 0x802011B0: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802011B4: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x802011B8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802011BC: sb          $t7, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r15;
L_802011C0:
    // 0x802011C0: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
L_802011C4:
    // 0x802011C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x802011C8: beq         $t0, $zero, L_802011E0
    if (ctx->r8 == 0) {
        // 0x802011CC: sw          $t0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r8;
            goto L_802011E0;
    }
    // 0x802011CC: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x802011D0: lw          $t2, -0x10C0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10C0);
    // 0x802011D4: lbu         $t3, 0x12($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X12);
    // 0x802011D8: bne         $t3, $zero, L_802011FC
    if (ctx->r11 != 0) {
        // 0x802011DC: nop
    
            goto L_802011FC;
    }
    // 0x802011DC: nop

L_802011E0:
    // 0x802011E0: jal         0x80200684
    // 0x802011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_4;
    // 0x802011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802011E8: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x802011EC: lw          $t5, -0x10C0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10C0);
    // 0x802011F0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x802011F4: b           L_80201204
    // 0x802011F8: sb          $t4, 0x11($t5)
    MEM_B(0X11, ctx->r13) = ctx->r12;
        goto L_80201204;
    // 0x802011F8: sb          $t4, 0x11($t5)
    MEM_B(0X11, ctx->r13) = ctx->r12;
L_802011FC:
    // 0x802011FC: jal         0x8020407C
    // 0x80201200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_5;
    // 0x80201200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80201204:
    // 0x80201204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80201208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8020120C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201210: jr          $ra
    // 0x80201214: nop

    TRACE_RETURN()
    return;
    // 0x80201214: nop

;}
RECOMP_FUNC void func_801E61A8_611588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E61A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E61AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E61B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E61B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E61B8: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801E61BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E61C0: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801E61C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E61C8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E61CC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801E61D0: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801E61D4: bc1fl       L_801E61EC
    if (!c1cs) {
        // 0x801E61D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_801E61EC;
    }
    goto skip_0;
    // 0x801E61D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    skip_0:
    // 0x801E61DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E61E0: jal         0x801D606C
    // 0x801E61E4: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    func_801D606C_60144C(rdram, ctx);
        goto after_0;
    // 0x801E61E4: swc1        $f8, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x801E61E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
L_801E61EC:
    // 0x801E61EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E61F0: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E61F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E61F8: ldc1        $f18, -0x2038($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2038);
    // 0x801E61FC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E6200: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E6204: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801E6208: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E620C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E6210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6214: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E6218: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E621C: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x801E6220: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E6224: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x801E6228: nop

    // 0x801E622C: bc1fl       L_801E6254
    if (!c1cs) {
        // 0x801E6230: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801E6254;
    }
    goto skip_1;
    // 0x801E6230: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x801E6234: jal         0x801D34D0
    // 0x801E6238: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E6238: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x801E623C: addiu       $t6, $zero, 0x41
    ctx->r14 = ADD32(0, 0X41);
    // 0x801E6240: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6244: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x801E6248: jal         0x8003521C
    // 0x801E624C: addiu       $a0, $a0, 0x628C
    ctx->r4 = ADD32(ctx->r4, 0X628C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E624C: addiu       $a0, $a0, 0x628C
    ctx->r4 = ADD32(ctx->r4, 0X628C);
    after_2:
    // 0x801E6250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801E6254:
    // 0x801E6254: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801E6258: jal         0x801D3B18
    // 0x801E625C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_3;
    // 0x801E625C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x801E6260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E6264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E6268: jal         0x801D3F00
    // 0x801E626C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_4;
    // 0x801E626C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x801E6270: jal         0x801EEEC0
    // 0x801E6274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_5;
    // 0x801E6274: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801E6278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E627C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E6280: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E6284: jr          $ra
    // 0x801E6288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801E6288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801F436C_61F74C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F436C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4374: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F4378: jal         0x801D619C
    // 0x801F437C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D619C_60157C(rdram, ctx);
        goto after_0;
    // 0x801F437C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F4380: jal         0x801F76D0
    // 0x801F4384: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F4384: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F4388: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F438C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F4390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F4394: jal         0x8000ED00
    // 0x801F4398: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_2;
    // 0x801F4398: lw          $a1, 0x1CC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1CC);
    after_2:
    // 0x801F439C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801F43A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F43A4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F43A8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F43AC: nop

    // 0x801F43B0: bc1fl       L_801F43C4
    if (!c1cs) {
        // 0x801F43B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F43C4;
    }
    goto skip_0;
    // 0x801F43B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F43B8: jal         0x8003521C
    // 0x801F43BC: addiu       $a0, $a0, 0x43D0
    ctx->r4 = ADD32(ctx->r4, 0X43D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F43BC: addiu       $a0, $a0, 0x43D0
    ctx->r4 = ADD32(ctx->r4, 0X43D0);
    after_3:
    // 0x801F43C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F43C4:
    // 0x801F43C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F43C8: jr          $ra
    // 0x801F43CC: nop

    TRACE_RETURN()
    return;
    // 0x801F43CC: nop

;}
RECOMP_FUNC void func_80208510_6338F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208510: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80208514: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x80208518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020851C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208520: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80208524: addiu       $t0, $zero, 0x77
    ctx->r8 = ADD32(0, 0X77);
    // 0x80208528: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8020852C: addiu       $t7, $zero, 0x136
    ctx->r15 = ADD32(0, 0X136);
    // 0x80208530: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80208534: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80208538: addiu       $v1, $a2, 0xA0
    ctx->r3 = ADD32(ctx->r6, 0XA0);
    // 0x8020853C: sb          $a3, 0x2C0($a2)
    MEM_B(0X2C0, ctx->r6) = ctx->r7;
    // 0x80208540: sb          $zero, 0x2C1($a2)
    MEM_B(0X2C1, ctx->r6) = 0;
    // 0x80208544: sb          $a3, 0x2C2($a2)
    MEM_B(0X2C2, ctx->r6) = ctx->r7;
    // 0x80208548: sb          $zero, 0x2C3($a2)
    MEM_B(0X2C3, ctx->r6) = 0;
    // 0x8020854C: sw          $t6, 0x1EC($a2)
    MEM_W(0X1EC, ctx->r6) = ctx->r14;
    // 0x80208550: sw          $t0, 0x1F0($a2)
    MEM_W(0X1F0, ctx->r6) = ctx->r8;
    // 0x80208554: sw          $t7, 0x1F4($a2)
    MEM_W(0X1F4, ctx->r6) = ctx->r15;
    // 0x80208558: sw          $t0, 0x1F8($a2)
    MEM_W(0X1F8, ctx->r6) = ctx->r8;
    // 0x8020855C: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x80208560: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80208564: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208568: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x8020856C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80208570: addiu       $t8, $zero, 0x1380
    ctx->r24 = ADD32(0, 0X1380);
    // 0x80208574: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208578: sh          $t8, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r24;
    // 0x8020857C: addiu       $a0, $a0, -0x78FC
    ctx->r4 = ADD32(ctx->r4, -0X78FC);
    // 0x80208580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80208584: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x80208588: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x8020858C: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80208590: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x80208594: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x80208598: jal         0x80034DD8
    // 0x8020859C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x8020859C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    after_0:
    // 0x802085A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802085A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802085A8: jr          $ra
    // 0x802085AC: nop

    TRACE_RETURN()
    return;
    // 0x802085AC: nop

;}
RECOMP_FUNC void func_801DA990_605D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA990: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DA994: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DA998: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DA99C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DA9A0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801DA9A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801DA9A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DA9AC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DA9B0: jal         0x801DAEC8
    // 0x801DA9B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_801DAEC8_6062A8(rdram, ctx);
        goto after_0;
    // 0x801DA9B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x801DA9B8: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801DA9BC: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801DA9C0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801DA9C4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801DA9C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DA9CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DA9D0: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x801DA9D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801DA9D8: swc1        $f8, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f8.u32l;
    // 0x801DA9DC: lwc1        $f10, 0x28($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801DA9E0: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x801DA9E4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x801DA9E8: nop

    // 0x801DA9EC: bc1f        L_801DAA34
    if (!c1cs) {
        // 0x801DA9F0: nop
    
            goto L_801DAA34;
    }
    // 0x801DA9F0: nop

    // 0x801DA9F4: swc1        $f2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f2.u32l;
    // 0x801DA9F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DA9FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DAA00: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x801DAA04: sw          $t7, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->r15;
    // 0x801DAA08: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x801DAA0C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801DAA10: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801DAA14: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801DAA18: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801DAA1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DAA20: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DAA24: addiu       $a0, $a0, -0x5598
    ctx->r4 = ADD32(ctx->r4, -0X5598);
    // 0x801DAA28: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DAA2C: jal         0x8003521C
    // 0x801DAA30: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801DAA30: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    after_1:
L_801DAA34:
    // 0x801DAA34: jal         0x801D9030
    // 0x801DAA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_2;
    // 0x801DAA38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DAA3C: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    // 0x801DAA40: lw          $t1, 0x9C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X9C);
    // 0x801DAA44: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x801DAA48: sw          $t9, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r25;
    // 0x801DAA4C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x801DAA50: sh          $t2, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r10;
    // 0x801DAA54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DAA58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801DAA5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801DAA60: jr          $ra
    // 0x801DAA64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801DAA64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801FE1E8_6295C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE1E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FE1EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE1F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FE1F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE1F8: jal         0x801FFE6C
    // 0x801FE1FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE1FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE200: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE204: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE208: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FE20C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FE210: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE214: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FE218: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FE21C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801FE220: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801FE224: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FE228: addiu       $v0, $zero, 0x54
    ctx->r2 = ADD32(0, 0X54);
    // 0x801FE22C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801FE230: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801FE234: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801FE238: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE23C: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801FE240: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801FE244: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    // 0x801FE248: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x801FE24C: jal         0x801D2EE4
    // 0x801FE250: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE250: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x801FE254: jal         0x80038BC8
    // 0x801FE258: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801FE258: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    after_2:
    // 0x801FE25C: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x801FE260: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE264: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    // 0x801FE268: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801FE26C: jal         0x8003521C
    // 0x801FE270: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FE270: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
    after_3:
    // 0x801FE274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE278: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FE27C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FE280: jr          $ra
    // 0x801FE284: nop

    TRACE_RETURN()
    return;
    // 0x801FE284: nop

;}
RECOMP_FUNC void func_801F0A0C_61BDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F0A10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F0A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F0A18: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F0A20: jal         0x801D31CC
    // 0x801F0A24: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801F0A24: addiu       $a1, $a1, -0x4D90
    ctx->r5 = ADD32(ctx->r5, -0X4D90);
    after_0:
    // 0x801F0A28: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F0A2C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F0A30: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0A34: addiu       $a0, $a0, 0xA50
    ctx->r4 = ADD32(ctx->r4, 0XA50);
    // 0x801F0A38: jal         0x8003521C
    // 0x801F0A3C: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F0A3C: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    after_1:
    // 0x801F0A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0A48: jr          $ra
    // 0x801F0A4C: nop

    TRACE_RETURN()
    return;
    // 0x801F0A4C: nop

;}
RECOMP_FUNC void func_801E599C_610D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E599C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E59A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E59A4: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801E59A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E59AC: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801E59B0: jal         0x801D31CC
    // 0x801E59B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801E59B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E59B8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E59BC: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E59C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E59C4: jal         0x801D3534
    // 0x801E59C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D3534_5FE914(rdram, ctx);
        goto after_1;
    // 0x801E59C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801E59CC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E59D0: addiu       $a1, $a1, 0x52D8
    ctx->r5 = ADD32(ctx->r5, 0X52D8);
    // 0x801E59D4: jal         0x8003522C
    // 0x801E59D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801E59D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E59DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E59E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E59E4: jr          $ra
    // 0x801E59E8: nop

    TRACE_RETURN()
    return;
    // 0x801E59E8: nop

;}
RECOMP_FUNC void func_801E75E4_6129C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E75E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E75E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E75EC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E75F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E75F4: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E75F8: lui         $at, 0x402E
    ctx->r1 = S32(0X402E << 16);
    // 0x801E75FC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E7600: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7604: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7608: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E760C: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x801E7610: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E7614: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E7618: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E761C: bc1fl       L_801E7638
    if (!c1cs) {
        // 0x801E7620: lw          $t6, 0x94($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X94);
            goto L_801E7638;
    }
    goto skip_0;
    // 0x801E7620: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801E7624: ldc1        $f8, -0x1F08($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1F08);
    // 0x801E7628: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801E762C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E7630: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    // 0x801E7634: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
L_801E7638:
    // 0x801E7638: swc1        $f12, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f12.u32l;
    // 0x801E763C: swc1        $f12, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f12.u32l;
    // 0x801E7640: addiu       $t7, $t6, -0x20
    ctx->r15 = ADD32(ctx->r14, -0X20);
    // 0x801E7644: bne         $t7, $zero, L_801E76DC
    if (ctx->r15 != 0) {
        // 0x801E7648: sw          $t7, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r15;
            goto L_801E76DC;
    }
    // 0x801E7648: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801E764C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7650: lwc1        $f4, -0x1F00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1F00);
    // 0x801E7654: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E7658: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E765C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7660: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x801E7664: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E7668: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801E766C: bc1fl       L_801E7690
    if (!c1cs) {
        // 0x801E7670: sw          $t9, 0xB0($s0)
        MEM_W(0XB0, ctx->r16) = ctx->r25;
            goto L_801E7690;
    }
    goto skip_1;
    // 0x801E7670: sw          $t9, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r25;
    skip_1:
    // 0x801E7674: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E7678: addiu       $a0, $a0, 0x7714
    ctx->r4 = ADD32(ctx->r4, 0X7714);
    // 0x801E767C: jal         0x8003521C
    // 0x801E7680: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801E7680: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    after_0:
    // 0x801E7684: b           L_801E76DC
    // 0x801E7688: nop

        goto L_801E76DC;
    // 0x801E7688: nop

    // 0x801E768C: sw          $t9, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r25;
L_801E7690:
    // 0x801E7690: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x801E7694: jal         0x8000E9F4
    // 0x801E7698: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_1;
    // 0x801E7698: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801E769C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E76A0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801E76A4: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801E76A8: addiu       $a1, $a1, -0x4E60
    ctx->r5 = ADD32(ctx->r5, -0X4E60);
    // 0x801E76AC: jal         0x801D31CC
    // 0x801E76B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801E76B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E76B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E76B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E76BC: lwc1        $f8, 0x94($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801E76C0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E76C4: addiu       $a0, $a0, 0x79E4
    ctx->r4 = ADD32(ctx->r4, 0X79E4);
    // 0x801E76C8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801E76CC: jal         0x8003521C
    // 0x801E76D0: swc1        $f16, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f16.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E76D0: swc1        $f16, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f16.u32l;
    after_3:
    // 0x801E76D4: b           L_801E7704
    // 0x801E76D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E7704;
    // 0x801E76D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E76DC:
    // 0x801E76DC: jal         0x801D614C
    // 0x801E76E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_4;
    // 0x801E76E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E76E4: lw          $t0, 0x94($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X94);
    // 0x801E76E8: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801E76EC: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801E76F0: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801E76F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E76F8: jal         0x8000EE50
    // 0x801E76FC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000EE50_FA50(rdram, ctx);
        goto after_5;
    // 0x801E76FC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x801E7700: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E7704:
    // 0x801E7704: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7708: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E770C: jr          $ra
    // 0x801E7710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E7710: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801F5550_620930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F555C: jal         0x801F76D0
    // 0x801F5560: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F5560: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5564: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F556C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F5570: lwc1        $f12, 0x94($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801F5574: lwc1        $f2, 0x28($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F5578: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F557C: sub.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801F5580: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801F5584: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801F5588: nop

    // 0x801F558C: bc1fl       L_801F55D8
    if (!c1cs) {
        // 0x801F5590: lw          $v0, 0x7C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X7C);
            goto L_801F55D8;
    }
    goto skip_0;
    // 0x801F5590: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x801F5594: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F5598: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F559C: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x801F55A0: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x801F55A4: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801F55A8: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x801F55AC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F55B0: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x801F55B4: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F55B8: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801F55BC: nop

    // 0x801F55C0: bc1fl       L_801F562C
    if (!c1cs) {
        // 0x801F55C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F562C;
    }
    goto skip_1;
    // 0x801F55C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F55C8: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801F55CC: b           L_801F5628
    // 0x801F55D0: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
        goto L_801F5628;
    // 0x801F55D0: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x801F55D4: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_801F55D8:
    // 0x801F55D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F55DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801F55E0: bgtz        $v0, L_801F5628
    if (SIGNED(ctx->r2) > 0) {
        // 0x801F55E4: sw          $t6, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r14;
            goto L_801F5628;
    }
    // 0x801F55E4: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801F55E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F55EC: jal         0x801D3A18
    // 0x801F55F0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_1;
    // 0x801F55F0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
    after_1:
    // 0x801F55F4: beq         $v0, $zero, L_801F5620
    if (ctx->r2 == 0) {
        // 0x801F55F8: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801F5620;
    }
    // 0x801F55F8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F55FC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801F5600: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801F5604: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F5608: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F560C: addiu       $a0, $a0, -0x6DC
    ctx->r4 = ADD32(ctx->r4, -0X6DC);
    // 0x801F5610: jal         0x8003521C
    // 0x801F5614: sb          $t7, 0x2C4($t8)
    MEM_B(0X2C4, ctx->r24) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F5614: sb          $t7, 0x2C4($t8)
    MEM_B(0X2C4, ctx->r24) = ctx->r15;
    after_2:
    // 0x801F5618: b           L_801F562C
    // 0x801F561C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F562C;
    // 0x801F561C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5620:
    // 0x801F5620: jal         0x8003521C
    // 0x801F5624: addiu       $a0, $a0, 0x5638
    ctx->r4 = ADD32(ctx->r4, 0X5638);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F5624: addiu       $a0, $a0, 0x5638
    ctx->r4 = ADD32(ctx->r4, 0X5638);
    after_3:
L_801F5628:
    // 0x801F5628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F562C:
    // 0x801F562C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5630: jr          $ra
    // 0x801F5634: nop

    TRACE_RETURN()
    return;
    // 0x801F5634: nop

;}
RECOMP_FUNC void func_801D5CB8_601098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5CB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D5CBC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D5CC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D5CC4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D5CC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D5CCC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D5CD0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D5CD4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801D5CD8: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x801D5CDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801D5CE0: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x801D5CE4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801D5CE8: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x801D5CEC: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5CF0: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x801D5CF4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x801D5CF8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5CFC: jal         0x80004058
    // 0x801D5D00: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_80004058_4C58(rdram, ctx);
        goto after_0;
    // 0x801D5D00: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D5D04: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D5D08: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D5D0C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D5D10: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801D5D14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D5D18: bc1fl       L_801D5D38
    if (!c1cs) {
        // 0x801D5D1C: lwc1        $f10, 0x38($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
            goto L_801D5D38;
    }
    goto skip_0;
    // 0x801D5D1C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x801D5D20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5D24: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801D5D28: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x801D5D2C: b           L_801D5D48
    // 0x801D5D30: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
        goto L_801D5D48;
    // 0x801D5D30: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x801D5D34: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
L_801D5D38:
    // 0x801D5D38: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801D5D3C: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x801D5D40: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801D5D44: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
L_801D5D48:
    // 0x801D5D48: jal         0x8001D394
    // 0x801D5D4C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801D5D4C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x801D5D50: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D5D54: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801D5D58: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801D5D5C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x801D5D60: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x801D5D64: jal         0x8001D14C
    // 0x801D5D68: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_2;
    // 0x801D5D68: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801D5D6C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801D5D70: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801D5D74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D5D78: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D5D7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D5D80: jal         0x8001DB04
    // 0x801D5D84: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_3;
    // 0x801D5D84: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_3:
    // 0x801D5D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D5D8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D5D90: jr          $ra
    // 0x801D5D94: nop

    TRACE_RETURN()
    return;
    // 0x801D5D94: nop

;}
RECOMP_FUNC void func_801EFC34_61B014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFC34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EFC38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EFC3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EFC40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EFC44: jal         0x801F76D0
    // 0x801EFC48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801EFC48: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EFC4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFC50: jal         0x801D31F0
    // 0x801EFC54: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_1;
    // 0x801EFC54: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x801EFC58: lui         $a2, 0x3CA3
    ctx->r6 = S32(0X3CA3 << 16);
    // 0x801EFC5C: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x801EFC60: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801EFC64: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801EFC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EFC6C: jal         0x801D6A30
    // 0x801EFC70: lui         $a1, 0xC307
    ctx->r5 = S32(0XC307 << 16);
    func_801D6A30_601E10(rdram, ctx);
        goto after_2;
    // 0x801EFC70: lui         $a1, 0xC307
    ctx->r5 = S32(0XC307 << 16);
    after_2:
    // 0x801EFC74: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EFC78: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EFC7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EFC80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFC84: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801EFC88: bnel        $t7, $at, L_801EFCF4
    if (ctx->r15 != ctx->r1) {
        // 0x801EFC8C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EFCF4;
    }
    goto skip_0;
    // 0x801EFC8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EFC90: jal         0x80037C9C
    // 0x801EFC94: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801EFC94: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_3:
    // 0x801EFC98: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x801EFC9C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x801EFCA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EFCA4: jal         0x80037C20
    // 0x801EFCA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801EFCA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x801EFCAC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EFCB0: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801EFCB4: jal         0x801D2EE4
    // 0x801EFCB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_5;
    // 0x801EFCB8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x801EFCBC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801EFCC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EFCC4: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x801EFCC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EFCCC: addiu       $a0, $zero, 0x153
    ctx->r4 = ADD32(0, 0X153);
    // 0x801EFCD0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x801EFCD4: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x801EFCD8: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801EFCDC: jal         0x80038C30
    // 0x801EFCE0: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    func_80038C30_39830(rdram, ctx);
        goto after_6;
    // 0x801EFCE0: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    after_6:
    // 0x801EFCE4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EFCE8: jal         0x8003521C
    // 0x801EFCEC: addiu       $a0, $a0, -0x2FC
    ctx->r4 = ADD32(ctx->r4, -0X2FC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801EFCEC: addiu       $a0, $a0, -0x2FC
    ctx->r4 = ADD32(ctx->r4, -0X2FC);
    after_7:
    // 0x801EFCF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EFCF4:
    // 0x801EFCF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EFCF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EFCFC: jr          $ra
    // 0x801EFD00: nop

    TRACE_RETURN()
    return;
    // 0x801EFD00: nop

;}
RECOMP_FUNC void func_801D44D8_5FF8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D44D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D44DC: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D44E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D44E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D44E8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801D44EC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801D44F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D44F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D44F8: bne         $t6, $zero, L_801D4508
    if (ctx->r14 != 0) {
        // 0x801D44FC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_801D4508;
    }
    // 0x801D44FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D4500: b           L_801D45A8
    // 0x801D4504: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D45A8;
    // 0x801D4504: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4508:
    // 0x801D4508: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D450C: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D4510: bne         $t7, $zero, L_801D4520
    if (ctx->r15 != 0) {
        // 0x801D4514: nop
    
            goto L_801D4520;
    }
    // 0x801D4514: nop

    // 0x801D4518: b           L_801D45A8
    // 0x801D451C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D45A8;
    // 0x801D451C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4520:
    // 0x801D4520: bne         $a2, $zero, L_801D4530
    if (ctx->r6 != 0) {
        // 0x801D4524: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801D4530;
    }
    // 0x801D4524: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D4528: b           L_801D45A8
    // 0x801D452C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D45A8;
    // 0x801D452C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4530:
    // 0x801D4530: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D4534: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x801D4538: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x801D453C: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D4540: lw          $a1, 0x20($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X20);
    // 0x801D4544: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x801D4548: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801D454C: jal         0x801D4188
    // 0x801D4550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D4188_5FF568(rdram, ctx);
        goto after_0;
    // 0x801D4550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801D4554: bne         $v0, $zero, L_801D458C
    if (ctx->r2 != 0) {
        // 0x801D4558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D458C;
    }
    // 0x801D4558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D455C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801D4560: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4564: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x801D4568: jal         0x801D4188
    // 0x801D456C: lw          $a1, 0x24($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X24);
    func_801D4188_5FF568(rdram, ctx);
        goto after_1;
    // 0x801D456C: lw          $a1, 0x24($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X24);
    after_1:
    // 0x801D4570: bne         $v0, $zero, L_801D458C
    if (ctx->r2 != 0) {
        // 0x801D4574: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D458C;
    }
    // 0x801D4574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4578: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801D457C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4580: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x801D4584: jal         0x801D4188
    // 0x801D4588: lw          $a1, 0x28($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X28);
    func_801D4188_5FF568(rdram, ctx);
        goto after_2;
    // 0x801D4588: lw          $a1, 0x28($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X28);
    after_2:
L_801D458C:
    // 0x801D458C: lh          $t0, 0x38($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X38);
    // 0x801D4590: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D4594: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4598: bne         $t0, $at, L_801D45A8
    if (ctx->r8 != ctx->r1) {
        // 0x801D459C: nop
    
            goto L_801D45A8;
    }
    // 0x801D459C: nop

    // 0x801D45A0: b           L_801D45A8
    // 0x801D45A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D45A8;
    // 0x801D45A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D45A8:
    // 0x801D45A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D45AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D45B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D45B4: jr          $ra
    // 0x801D45B8: nop

    TRACE_RETURN()
    return;
    // 0x801D45B8: nop

;}
RECOMP_FUNC void func_801DA1F8_6055D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA1F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA1FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DA204: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DA208: jal         0x80038BC8
    // 0x801DA20C: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801DA20C: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_0:
    // 0x801DA210: jal         0x80034ED4
    // 0x801DA214: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801DA214: nop

    after_1:
    // 0x801DA218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA220: jr          $ra
    // 0x801DA224: nop

    TRACE_RETURN()
    return;
    // 0x801DA224: nop

;}
RECOMP_FUNC void func_801E1A44_60CE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1A44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1A48: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1A4C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1A50: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1A54: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1A58: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1A5C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1A60: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1A64: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E1A68: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1A6C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1A70: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1A74: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1A78: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1A7C: addiu       $t9, $zero, 0x4A9
    ctx->r25 = ADD32(0, 0X4A9);
    // 0x801E1A80: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1A84: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1A88: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1A8C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1A90: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1A94: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E1A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1A9C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1AA0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1AA4: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1AA8: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1AAC: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1AB0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1AB4: jal         0x800358E8
    // 0x801E1AB8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1AB8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1ABC: beq         $v0, $zero, L_801E1B1C
    if (ctx->r2 == 0) {
        // 0x801E1AC0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E1B1C;
    }
    // 0x801E1AC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E1AC4: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1AC8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E1ACC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1AD0: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1AD4: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E1AD8: addiu       $t0, $t0, -0x4FF4
    ctx->r8 = ADD32(ctx->r8, -0X4FF4);
    // 0x801E1ADC: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x801E1AE0: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E1AE4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E1AE8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E1AEC: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E1AF0: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E1AF4: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E1AF8: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E1AFC: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E1B00: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E1B04: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E1B08: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E1B0C: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1B10: jal         0x801E18E4
    // 0x801E1B14: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1B14: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1B18: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E1B1C:
    // 0x801E1B1C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1B20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E1B24: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E1B28: jr          $ra
    // 0x801E1B2C: nop

    TRACE_RETURN()
    return;
    // 0x801E1B2C: nop

;}
RECOMP_FUNC void func_801D1264_5FC644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1264: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1268: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D126C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D1270: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801D1274: lwc1        $f4, 0x184($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X184);
    // 0x801D1278: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D127C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1280: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801D1284: lwc1        $f6, 0x188($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X188);
    // 0x801D1288: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D128C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D1290: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x801D1294: lwc1        $f18, -0x2DC8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2DC8);
    // 0x801D1298: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801D129C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801D12A0: jr          $ra
    // 0x801D12A4: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801D12A4: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8020302C_62E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020302C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80203030: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80203034: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80203038: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8020303C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80203040: addiu       $a2, $a2, 0x154
    ctx->r6 = ADD32(ctx->r6, 0X154);
    // 0x80203044: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80203048: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8020304C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80203050: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80203054: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80203058: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x8020305C: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80203060: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80203064: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80203068: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x8020306C: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80203070: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80203074: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80203078: addiu       $a1, $a1, 0x3154
    ctx->r5 = ADD32(ctx->r5, 0X3154);
    // 0x8020307C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80203080: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80203084: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80203088: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x8020308C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80203090: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80203094: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80203098: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8020309C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x802030A0: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802030A4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x802030A8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802030AC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x802030B0: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x802030B4: jal         0x800358E8
    // 0x802030B8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802030B8: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x802030BC: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x802030C0: beq         $v0, $zero, L_80203140
    if (ctx->r2 == 0) {
        // 0x802030C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80203140;
    }
    // 0x802030C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802030C8: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x802030CC: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x802030D0: lui         $at, 0xC36E
    ctx->r1 = S32(0XC36E << 16);
    // 0x802030D4: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x802030D8: lbu         $t1, 0x5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X5);
    // 0x802030DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802030E0: addiu       $t2, $zero, 0x9D
    ctx->r10 = ADD32(0, 0X9D);
    // 0x802030E4: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x802030E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x802030EC: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x802030F0: sh          $t2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r10;
    // 0x802030F4: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x802030F8: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x802030FC: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x80203100: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x80203104: sh          $t0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r8;
    // 0x80203108: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x8020310C: sw          $t4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r12;
    // 0x80203110: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80203114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80203118: lui         $a2, 0xC35C
    ctx->r6 = S32(0XC35C << 16);
    // 0x8020311C: lui         $a3, 0xC2BC
    ctx->r7 = S32(0XC2BC << 16);
    // 0x80203120: jal         0x80203F5C
    // 0x80203124: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80203124: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80203128: jal         0x80203F88
    // 0x8020312C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x8020312C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80203130: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80203134: addiu       $a1, $a1, -0x4B88
    ctx->r5 = ADD32(ctx->r5, -0X4B88);
    // 0x80203138: jal         0x801D31CC
    // 0x8020313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x8020313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80203140:
    // 0x80203140: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80203144: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80203148: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8020314C: jr          $ra
    // 0x80203150: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80203150: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801E4CE8_6100C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4CE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E4CEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4CF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E4CF4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E4CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E4CFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E4D00: jal         0x801D2F40
    // 0x801E4D04: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E4D04: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    after_0:
    // 0x801E4D08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E4D0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E4D10: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4D14: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E4D18: nop

    // 0x801E4D1C: bc1fl       L_801E4DB0
    if (!c1cs) {
        // 0x801E4D20: lui         $at, 0x4150
        ctx->r1 = S32(0X4150 << 16);
            goto L_801E4DB0;
    }
    goto skip_0;
    // 0x801E4D20: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    skip_0:
    // 0x801E4D24: jal         0x801D31CC
    // 0x801E4D28: addiu       $a1, $a1, -0x4E30
    ctx->r5 = ADD32(ctx->r5, -0X4E30);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E4D28: addiu       $a1, $a1, -0x4E30
    ctx->r5 = ADD32(ctx->r5, -0X4E30);
    after_1:
    // 0x801E4D2C: jal         0x80038BC8
    // 0x801E4D30: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E4D30: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_2:
    // 0x801E4D34: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801E4D38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E4D3C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E4D40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E4D44: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801E4D48: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E4D4C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x801E4D50: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801E4D54: jal         0x801E1084
    // 0x801E4D58: nop

    func_801E1084_60C464(rdram, ctx);
        goto after_3;
    // 0x801E4D58: nop

    after_3:
    // 0x801E4D5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801E4D60: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801E4D64: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801E4D68: jal         0x801E0950
    // 0x801E4D6C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801E0950_60BD30(rdram, ctx);
        goto after_4;
    // 0x801E4D6C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_4:
    // 0x801E4D70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E4D74: jal         0x80037C9C
    // 0x801E4D78: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801E4D78: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_5:
    // 0x801E4D7C: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801E4D80: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801E4D84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E4D88: jal         0x80037C20
    // 0x801E4D8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801E4D8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x801E4D90: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801E4D94: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x801E4D98: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4D9C: addiu       $a0, $a0, 0x4DF8
    ctx->r4 = ADD32(ctx->r4, 0X4DF8);
    // 0x801E4DA0: sw          $t6, 0x7C($t7)
    MEM_W(0X7C, ctx->r15) = ctx->r14;
    // 0x801E4DA4: jal         0x8003521C
    // 0x801E4DA8: sw          $zero, 0x80($t7)
    MEM_W(0X80, ctx->r15) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801E4DA8: sw          $zero, 0x80($t7)
    MEM_W(0X80, ctx->r15) = 0;
    after_7:
    // 0x801E4DAC: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
L_801E4DB0:
    // 0x801E4DB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E4DB4: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E4DB8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801E4DBC: nop

    // 0x801E4DC0: bc1fl       L_801E4DE8
    if (!c1cs) {
        // 0x801E4DC4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801E4DE8;
    }
    goto skip_1;
    // 0x801E4DC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801E4DC8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E4DCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E4DD0: ldc1        $f8, -0x20F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X20F0);
    // 0x801E4DD4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4DD8: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E4DDC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E4DE0: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x801E4DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4DE8:
    // 0x801E4DE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E4DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E4DF0: jr          $ra
    // 0x801E4DF4: nop

    TRACE_RETURN()
    return;
    // 0x801E4DF4: nop

;}
RECOMP_FUNC void func_801EEDB4_61A194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEDB4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801EEDB8: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801EEDBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EEDC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EEDC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EEDC8: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801EEDCC: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x801EEDD0: addiu       $t9, $zero, 0x136
    ctx->r25 = ADD32(0, 0X136);
    // 0x801EEDD4: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x801EEDD8: sb          $t6, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r14;
    // 0x801EEDDC: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x801EEDE0: sb          $zero, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = 0;
    // 0x801EEDE4: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x801EEDE8: sw          $t7, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r15;
    // 0x801EEDEC: sw          $t8, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r24;
    // 0x801EEDF0: sw          $t9, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r25;
    // 0x801EEDF4: sw          $t0, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r8;
    // 0x801EEDF8: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    // 0x801EEDFC: jal         0x80038BC8
    // 0x801EEE00: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EEE00: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EEE04: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801EEE08: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801EEE0C: jal         0x80034EF8
    // 0x801EEE10: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_1;
    // 0x801EEE10: lw          $a0, 0x1D4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1D4);
    after_1:
    // 0x801EEE14: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EEE18: addiu       $a0, $a0, -0x18C0
    ctx->r4 = ADD32(ctx->r4, -0X18C0);
    // 0x801EEE1C: jal         0x80034DD8
    // 0x801EEE20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801EEE20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801EEE24: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801EEE28: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801EEE2C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801EEE30: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801EEE34: sw          $zero, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = 0;
    // 0x801EEE38: addiu       $a1, $a1, 0x4FD4
    ctx->r5 = ADD32(ctx->r5, 0X4FD4);
    // 0x801EEE3C: jal         0x8003522C
    // 0x801EEE40: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801EEE40: lw          $a0, 0x1D8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1D8);
    after_3:
    // 0x801EEE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEE48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EEE4C: jr          $ra
    // 0x801EEE50: nop

    TRACE_RETURN()
    return;
    // 0x801EEE50: nop

;}
RECOMP_FUNC void func_801F4C0C_61FFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F4C10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4C14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F4C18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4C1C: jal         0x801F7074
    // 0x801F4C20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F4C20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F4C24: jal         0x801F76D0
    // 0x801F4C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F4C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F4C2C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F4C30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4C34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F4C38: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F4C3C: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801F4C40: jal         0x801D2EE4
    // 0x801F4C44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801F4C44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801F4C48: lw          $t6, 0xE8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE8);
    // 0x801F4C4C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4C50: addiu       $a0, $a0, 0x4CF4
    ctx->r4 = ADD32(ctx->r4, 0X4CF4);
    // 0x801F4C54: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F4C58: jal         0x8003521C
    // 0x801F4C5C: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F4C5C: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    after_3:
    // 0x801F4C60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4C64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F4C6C: jr          $ra
    // 0x801F4C70: nop

    TRACE_RETURN()
    return;
    // 0x801F4C70: nop

;}
RECOMP_FUNC void func_801F5B78_620F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5B78: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F5B7C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F5B80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F5B84: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F5B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5B8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F5B90: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F5B94: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F5B98: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801F5B9C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801F5BA0: lwc1        $f6, 0xA0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801F5BA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5BA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F5BAC: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    // 0x801F5BB0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F5BB4: swc1        $f10, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f10.u32l;
    // 0x801F5BB8: jal         0x801D3018
    // 0x801F5BBC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F5BBC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x801F5BC0: jal         0x801F76D0
    // 0x801F5BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F5BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F5BC8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801F5BCC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801F5BD0: bnel        $v1, $at, L_801F5C08
    if (ctx->r3 != ctx->r1) {
        // 0x801F5BD4: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_801F5C08;
    }
    goto skip_0;
    // 0x801F5BD4: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x801F5BD8: jal         0x80038BC8
    // 0x801F5BDC: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F5BDC: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    after_2:
    // 0x801F5BE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F5BE4: jal         0x80037C9C
    // 0x801F5BE8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801F5BE8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_3:
    // 0x801F5BEC: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801F5BF0: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801F5BF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F5BF8: jal         0x80037C20
    // 0x801F5BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801F5BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x801F5C00: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x801F5C04: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
L_801F5C08:
    // 0x801F5C08: beq         $t7, $zero, L_801F5E90
    if (ctx->r15 == 0) {
        // 0x801F5C0C: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_801F5E90;
    }
    // 0x801F5C0C: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801F5C10: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801F5C14: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801F5C18: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801F5C1C: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801F5C20: lw          $t1, 0x1E4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1E4);
    // 0x801F5C24: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801F5C28: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F5C2C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801F5C30: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x801F5C34: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x801F5C38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F5C3C: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x801F5C40: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801F5C44: lwc1        $f18, -0x4F7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4F7C);
    // 0x801F5C48: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F5C4C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x801F5C50: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F5C54: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801F5C58: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x801F5C5C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F5C60: bc1fl       L_801F5DBC
    if (!c1cs) {
        // 0x801F5C64: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801F5DBC;
    }
    goto skip_1;
    // 0x801F5C64: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_1:
    // 0x801F5C68: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F5C6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F5C70: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801F5C74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5C78: lwc1        $f2, 0x8($t4)
    ctx->f2.u32l = MEM_W(ctx->r12, 0X8);
    // 0x801F5C7C: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801F5C80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5C84: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x801F5C88: nop

    // 0x801F5C8C: bc1fl       L_801F5CA0
    if (!c1cs) {
        // 0x801F5C90: c.le.s      $f8, $f2
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
            goto L_801F5CA0;
    }
    goto skip_2;
    // 0x801F5C90: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    skip_2:
    // 0x801F5C94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F5C98: nop

    // 0x801F5C9C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
L_801F5CA0:
    // 0x801F5CA0: nop

    // 0x801F5CA4: bc1fl       L_801F5CB8
    if (!c1cs) {
        // 0x801F5CA8: lwc1        $f10, 0x90($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801F5CB8;
    }
    goto skip_3;
    // 0x801F5CA8: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
    skip_3:
    // 0x801F5CAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F5CB0: nop

    // 0x801F5CB4: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
L_801F5CB8:
    // 0x801F5CB8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801F5CBC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x801F5CC0: add.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801F5CC4: jal         0x801D4BF4
    // 0x801F5CC8: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_5;
    // 0x801F5CC8: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x801F5CCC: lw          $t5, 0x94($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X94);
    // 0x801F5CD0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801F5CD4: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F5CD8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x801F5CDC: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x801F5CE0: bgez        $t5, L_801F5CF8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x801F5CE4: cvt.s.w     $f4, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801F5CF8;
    }
    // 0x801F5CE4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F5CE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F5CEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F5CF0: nop

    // 0x801F5CF4: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801F5CF8:
    // 0x801F5CF8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801F5CFC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F5D00: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801F5D04: addiu       $a3, $v1, 0x10
    ctx->r7 = ADD32(ctx->r3, 0X10);
    // 0x801F5D08: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801F5D0C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F5D10: nop

    // 0x801F5D14: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801F5D18: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F5D1C: nop

    // 0x801F5D20: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801F5D24: beql        $t7, $zero, L_801F5D74
    if (ctx->r15 == 0) {
        // 0x801F5D28: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_801F5D74;
    }
    goto skip_4;
    // 0x801F5D28: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_4:
    // 0x801F5D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F5D30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F5D34: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801F5D38: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801F5D3C: nop

    // 0x801F5D40: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801F5D44: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801F5D48: nop

    // 0x801F5D4C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x801F5D50: bne         $t7, $zero, L_801F5D68
    if (ctx->r15 != 0) {
        // 0x801F5D54: nop
    
            goto L_801F5D68;
    }
    // 0x801F5D54: nop

    // 0x801F5D58: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x801F5D5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F5D60: b           L_801F5D80
    // 0x801F5D64: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_801F5D80;
    // 0x801F5D64: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_801F5D68:
    // 0x801F5D68: b           L_801F5D80
    // 0x801F5D6C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_801F5D80;
    // 0x801F5D6C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x801F5D70: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_801F5D74:
    // 0x801F5D74: nop

    // 0x801F5D78: bltz        $t7, L_801F5D68
    if (SIGNED(ctx->r15) < 0) {
        // 0x801F5D7C: nop
    
            goto L_801F5D68;
    }
    // 0x801F5D7C: nop

L_801F5D80:
    // 0x801F5D80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801F5D84: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801F5D88: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801F5D8C: jal         0x8000E630
    // 0x801F5D90: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_6;
    // 0x801F5D90: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_6:
    // 0x801F5D94: lwc1        $f16, 0xA0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F5D98: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801F5D9C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801F5DA0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F5DA4: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801F5DA8: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x801F5DAC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F5DB0: b           L_801F5E3C
    // 0x801F5DB4: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
        goto L_801F5E3C;
    // 0x801F5DB4: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x801F5DB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801F5DBC:
    // 0x801F5DBC: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801F5DC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F5DC4: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F5DC8: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801F5DCC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F5DD0: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x801F5DD4: nop

    // 0x801F5DD8: bc1fl       L_801F5DEC
    if (!c1cs) {
        // 0x801F5DDC: c.le.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
            goto L_801F5DEC;
    }
    goto skip_5;
    // 0x801F5DDC: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    skip_5:
    // 0x801F5DE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F5DE4: nop

    // 0x801F5DE8: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
L_801F5DEC:
    // 0x801F5DEC: nop

    // 0x801F5DF0: bc1fl       L_801F5E04
    if (!c1cs) {
        // 0x801F5DF4: lwc1        $f6, 0x90($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801F5E04;
    }
    goto skip_6;
    // 0x801F5DF4: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    skip_6:
    // 0x801F5DF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F5DFC: nop

    // 0x801F5E00: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
L_801F5E04:
    // 0x801F5E04: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801F5E08: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801F5E0C: add.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801F5E10: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x801F5E14: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    // 0x801F5E18: jal         0x8000E630
    // 0x801F5E1C: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_7;
    // 0x801F5E1C: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_7:
    // 0x801F5E20: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F5E24: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F5E28: ldc1        $f18, -0x1968($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1968);
    // 0x801F5E2C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F5E30: add.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f10.d + ctx->f18.d;
    // 0x801F5E34: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x801F5E38: swc1        $f6, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f6.u32l;
L_801F5E3C:
    // 0x801F5E3C: jal         0x801F732C
    // 0x801F5E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_8;
    // 0x801F5E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801F5E44: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F5E48: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801F5E4C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F5E50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F5E54: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801F5E58: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801F5E5C: c.le.d      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.d <= ctx->f4.d;
    // 0x801F5E60: nop

    // 0x801F5E64: bc1fl       L_801F5E80
    if (!c1cs) {
        // 0x801F5E68: trunc.w.s   $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801F5E80;
    }
    goto skip_7;
    // 0x801F5E68: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_7:
    // 0x801F5E6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5E70: nop

    // 0x801F5E74: swc1        $f10, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f10.u32l;
    // 0x801F5E78: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801F5E7C: trunc.w.s   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_S(ctx->f0.fl);
L_801F5E80:
    // 0x801F5E80: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801F5E84: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x801F5E88: b           L_801F5EF8
    // 0x801F5E8C: sw          $t0, 0x70($t1)
    MEM_W(0X70, ctx->r9) = ctx->r8;
        goto L_801F5EF8;
    // 0x801F5E8C: sw          $t0, 0x70($t1)
    MEM_W(0X70, ctx->r9) = ctx->r8;
L_801F5E90:
    // 0x801F5E90: jal         0x8000DD58
    // 0x801F5E94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801F5E94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x801F5E98: addiu       $t9, $v0, -0x2
    ctx->r25 = ADD32(ctx->r2, -0X2);
    // 0x801F5E9C: bgtz        $t9, L_801F5EC0
    if (SIGNED(ctx->r25) > 0) {
        // 0x801F5EA0: addiu       $t2, $zero, 0x12C
        ctx->r10 = ADD32(0, 0X12C);
            goto L_801F5EC0;
    }
    // 0x801F5EA0: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x801F5EA4: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801F5EA8: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F5EAC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F5EB0: nop

    // 0x801F5EB4: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x801F5EB8: b           L_801F5ED8
    // 0x801F5EBC: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
        goto L_801F5ED8;
    // 0x801F5EBC: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
L_801F5EC0:
    // 0x801F5EC0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801F5EC4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801F5EC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F5ECC: nop

    // 0x801F5ED0: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x801F5ED4: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
L_801F5ED8:
    // 0x801F5ED8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F5EDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5EE0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F5EE4: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801F5EE8: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    // 0x801F5EEC: addiu       $a0, $a0, 0x5F0C
    ctx->r4 = ADD32(ctx->r4, 0X5F0C);
    // 0x801F5EF0: jal         0x8003521C
    // 0x801F5EF4: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_10;
    // 0x801F5EF4: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    after_10:
L_801F5EF8:
    // 0x801F5EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5EFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F5F00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F5F04: jr          $ra
    // 0x801F5F08: nop

    TRACE_RETURN()
    return;
    // 0x801F5F08: nop

;}
RECOMP_FUNC void func_801D4944_5FFD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4944: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801D4948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D494C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D4950: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x801D4954: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    // 0x801D4958: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801D495C: sb          $zero, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = 0;
    // 0x801D4960: lwc1        $f4, 0x78($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X78);
    // 0x801D4964: andi        $t6, $a3, 0xFFFF
    ctx->r14 = ctx->r7 & 0XFFFF;
    // 0x801D4968: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801D496C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x801D4970: lwc1        $f6, 0x70($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801D4974: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D4978: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801D497C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D4980: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x801D4984: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D4988: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x801D498C: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x801D4990: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D4994: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D4998: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D499C: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D49A0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D49A4: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801D49A8: bgez        $t6, L_801D49C0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D49AC: lw          $v1, 0x18($a2)
        ctx->r3 = MEM_W(ctx->r6, 0X18);
            goto L_801D49C0;
    }
    // 0x801D49AC: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x801D49B0: negu        $t1, $t6
    ctx->r9 = SUB32(0, ctx->r14);
    // 0x801D49B4: andi        $t7, $t1, 0xFFFF
    ctx->r15 = ctx->r9 & 0XFFFF;
    // 0x801D49B8: b           L_801D49C0
    // 0x801D49BC: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
        goto L_801D49C0;
    // 0x801D49BC: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_801D49C0:
    // 0x801D49C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D49C4: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x801D49C8: sb          $t0, 0x3A($sp)
    MEM_B(0X3A, ctx->r29) = ctx->r8;
    // 0x801D49CC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D49D0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D49D4: jal         0x8000EB08
    // 0x801D49D8: sh          $t1, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r9;
    func_8000EB08_F708(rdram, ctx);
        goto after_0;
    // 0x801D49D8: sh          $t1, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r9;
    after_0:
    // 0x801D49DC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801D49E0: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x801D49E4: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D49E8: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D49EC: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801D49F0: jal         0x8000EB08
    // 0x801D49F4: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    func_8000EB08_F708(rdram, ctx);
        goto after_1;
    // 0x801D49F4: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    after_1:
    // 0x801D49F8: lhu         $a2, 0x42($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X42);
    // 0x801D49FC: lbu         $t0, 0x3A($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3A);
    // 0x801D4A00: lhu         $t1, 0x66($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X66);
    // 0x801D4A04: subu        $a0, $v0, $a2
    ctx->r4 = SUB32(ctx->r2, ctx->r6);
    // 0x801D4A08: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x801D4A0C: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x801D4A10: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x801D4A14: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x801D4A18: bgez        $t9, L_801D4A2C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801D4A1C: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_801D4A2C;
    }
    // 0x801D4A1C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801D4A20: addiu       $v1, $t9, 0x400
    ctx->r3 = ADD32(ctx->r25, 0X400);
    // 0x801D4A24: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x801D4A28: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
L_801D4A2C:
    // 0x801D4A2C: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801D4A30: bne         $at, $zero, L_801D4A44
    if (ctx->r1 != 0) {
        // 0x801D4A34: addiu       $a3, $s0, 0x70
        ctx->r7 = ADD32(ctx->r16, 0X70);
            goto L_801D4A44;
    }
    // 0x801D4A34: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801D4A38: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x801D4A3C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x801D4A40: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
L_801D4A44:
    // 0x801D4A44: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801D4A48: bne         $at, $zero, L_801D4A60
    if (ctx->r1 != 0) {
        // 0x801D4A4C: addiu       $t6, $zero, 0x400
        ctx->r14 = ADD32(0, 0X400);
            goto L_801D4A60;
    }
    // 0x801D4A4C: addiu       $t6, $zero, 0x400
    ctx->r14 = ADD32(0, 0X400);
    // 0x801D4A50: subu        $v1, $t6, $v1
    ctx->r3 = SUB32(ctx->r14, ctx->r3);
    // 0x801D4A54: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x801D4A58: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D4A5C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_801D4A60:
    // 0x801D4A60: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801D4A64: beq         $at, $zero, L_801D4A7C
    if (ctx->r1 == 0) {
        // 0x801D4A68: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_801D4A7C;
    }
    // 0x801D4A68: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x801D4A6C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D4A70: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801D4A74: b           L_801D4A94
    // 0x801D4A78: sb          $t9, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r25;
        goto L_801D4A94;
    // 0x801D4A78: sb          $t9, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r25;
L_801D4A7C:
    // 0x801D4A7C: bne         $t0, $zero, L_801D4A90
    if (ctx->r8 != 0) {
        // 0x801D4A80: subu        $t4, $a2, $a0
        ctx->r12 = SUB32(ctx->r6, ctx->r4);
            goto L_801D4A90;
    }
    // 0x801D4A80: subu        $t4, $a2, $a0
    ctx->r12 = SUB32(ctx->r6, ctx->r4);
    // 0x801D4A84: addu        $t2, $a2, $a0
    ctx->r10 = ADD32(ctx->r6, ctx->r4);
    // 0x801D4A88: b           L_801D4A94
    // 0x801D4A8C: andi        $a1, $t2, 0x3FF
    ctx->r5 = ctx->r10 & 0X3FF;
        goto L_801D4A94;
    // 0x801D4A8C: andi        $a1, $t2, 0x3FF
    ctx->r5 = ctx->r10 & 0X3FF;
L_801D4A90:
    // 0x801D4A90: andi        $a1, $t4, 0x3FF
    ctx->r5 = ctx->r12 & 0X3FF;
L_801D4A94:
    // 0x801D4A94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4A98: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x801D4A9C: addiu       $t7, $s0, 0x78
    ctx->r15 = ADD32(ctx->r16, 0X78);
    // 0x801D4AA0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801D4AA4: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801D4AA8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801D4AAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D4AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D4AB4: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x801D4AB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D4ABC: jal         0x8000E808
    // 0x801D4AC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x801D4AC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_2:
    // 0x801D4AC4: lbu         $t8, 0x3B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3B);
    // 0x801D4AC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D4ACC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D4AD0: bne         $t8, $at, L_801D4AE0
    if (ctx->r24 != ctx->r1) {
        // 0x801D4AD4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4AE0;
    }
    // 0x801D4AD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4AD8: b           L_801D4AE0
    // 0x801D4ADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4AE0;
    // 0x801D4ADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4AE0:
    // 0x801D4AE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D4AE4: jr          $ra
    // 0x801D4AE8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801D4AE8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801D8184_603564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8184: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D8188: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D818C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8194: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D8198: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D819C: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    // 0x801D81A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801D81A4: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x801D81A8: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801D81AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D81B0: blez        $t6, L_801D8218
    if (SIGNED(ctx->r14) <= 0) {
        // 0x801D81B4: addiu       $v1, $v0, 0x140
        ctx->r3 = ADD32(ctx->r2, 0X140);
            goto L_801D8218;
    }
    // 0x801D81B4: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x801D81B8: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x801D81BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801D81C0: bne         $t7, $zero, L_801D81D0
    if (ctx->r15 != 0) {
        // 0x801D81C4: nop
    
            goto L_801D81D0;
    }
    // 0x801D81C4: nop

    // 0x801D81C8: b           L_801D81D0
    // 0x801D81CC: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
        goto L_801D81D0;
    // 0x801D81CC: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
L_801D81D0:
    // 0x801D81D0: jal         0x801DAFCC
    // 0x801D81D4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_801DAFCC_6063AC(rdram, ctx);
        goto after_0;
    // 0x801D81D4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x801D81D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D81DC: bne         $v0, $at, L_801D8218
    if (ctx->r2 != ctx->r1) {
        // 0x801D81E0: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_801D8218;
    }
    // 0x801D81E0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801D81E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D81E8: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
    // 0x801D81EC: lw          $t9, 0x2C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X2C);
    // 0x801D81F0: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    // 0x801D81F4: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x801D81F8: jal         0x80038BC8
    // 0x801D81FC: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801D81FC: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
    after_1:
    // 0x801D8200: jal         0x801CEE80
    // 0x801D8204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_2;
    // 0x801D8204: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801D8208: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D820C: lw          $t1, 0x64($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X64);
    // 0x801D8210: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801D8214: sw          $t2, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r10;
L_801D8218:
    // 0x801D8218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D821C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D8220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D8224: jr          $ra
    // 0x801D8228: nop

    TRACE_RETURN()
    return;
    // 0x801D8228: nop

;}
RECOMP_FUNC void func_80208A80_633E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80208A84: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80208A88: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x80208A8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80208A90: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80208A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208A98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80208A9C: lw          $a1, 0x1D8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1D8);
    // 0x80208AA0: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x80208AA4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80208AA8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80208AAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80208AB0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80208AB4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80208AB8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80208ABC: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x80208AC0: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80208AC4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80208AC8: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x80208ACC: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80208AD0: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x80208AD4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80208AD8: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x80208ADC: beql        $t7, $zero, L_80208B68
    if (ctx->r15 == 0) {
        // 0x80208AE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80208B68;
    }
    goto skip_0;
    // 0x80208AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80208AE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80208AE8: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80208AEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208AF0: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x80208AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80208AF8: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x80208AFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80208B00: lui         $at, 0xC3B9
    ctx->r1 = S32(0XC3B9 << 16);
    // 0x80208B04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80208B08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80208B0C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80208B10: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x80208B14: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80208B18: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80208B1C: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80208B20: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80208B24: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80208B28: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x80208B2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80208B30: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80208B34: lbu         $t9, -0x521C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X521C);
    // 0x80208B38: bne         $t9, $at, L_80208B50
    if (ctx->r25 != ctx->r1) {
        // 0x80208B3C: nop
    
            goto L_80208B50;
    }
    // 0x80208B3C: nop

    // 0x80208B40: jal         0x80038BC8
    // 0x80208B44: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x80208B44: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    after_0:
    // 0x80208B48: b           L_80208B58
    // 0x80208B4C: nop

        goto L_80208B58;
    // 0x80208B4C: nop

L_80208B50:
    // 0x80208B50: jal         0x80038BC8
    // 0x80208B54: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80208B54: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    after_1:
L_80208B58:
    // 0x80208B58: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208B5C: jal         0x8003521C
    // 0x80208B60: addiu       $a0, $a0, -0x748C
    ctx->r4 = ADD32(ctx->r4, -0X748C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80208B60: addiu       $a0, $a0, -0x748C
    ctx->r4 = ADD32(ctx->r4, -0X748C);
    after_2:
    // 0x80208B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208B68:
    // 0x80208B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80208B6C: jr          $ra
    // 0x80208B70: nop

    TRACE_RETURN()
    return;
    // 0x80208B70: nop

;}
RECOMP_FUNC void func_801E4DF8_6101D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4DF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E4DFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E4E00: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801E4E04: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801E4E08: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x801E4E0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4E10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E4E14: bgtz        $t7, L_801E4E40
    if (SIGNED(ctx->r15) > 0) {
        // 0x801E4E18: sw          $t7, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r15;
            goto L_801E4E40;
    }
    // 0x801E4E18: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x801E4E1C: jal         0x80038BC8
    // 0x801E4E20: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801E4E20: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    after_0:
    // 0x801E4E24: jal         0x8000DD58
    // 0x801E4E28: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801E4E28: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_1:
    // 0x801E4E2C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801E4E30: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801E4E34: mflo        $t9
    ctx->r25 = lo;
    // 0x801E4E38: addiu       $t0, $t9, 0x7
    ctx->r8 = ADD32(ctx->r25, 0X7);
    // 0x801E4E3C: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
L_801E4E40:
    // 0x801E4E40: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801E4E44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E4E48: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E4E4C: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801E4E50: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801E4E54: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E4E58: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801E4E5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E4E60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E4E64: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801E4E68: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E4E6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E4E70: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E4E74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801E4E78: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E4E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4E80: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E4E84: lwc1        $f16, 0x10($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801E4E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E4E8C: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801E4E90: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801E4E94: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x801E4E98: jal         0x801DFB90
    // 0x801E4E9C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801E4E9C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801E4EA0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x801E4EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4EA8: lhu         $t3, 0x14($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X14);
    // 0x801E4EAC: slti        $at, $t3, 0x100
    ctx->r1 = SIGNED(ctx->r11) < 0X100 ? 1 : 0;
    // 0x801E4EB0: beql        $at, $zero, L_801E4EC4
    if (ctx->r1 == 0) {
        // 0x801E4EB4: lw          $t4, 0x7C($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X7C);
            goto L_801E4EC4;
    }
    goto skip_0;
    // 0x801E4EB4: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801E4EB8: jal         0x801D326C
    // 0x801E4EBC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_3;
    // 0x801E4EBC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_3:
    // 0x801E4EC0: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
L_801E4EC4:
    // 0x801E4EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E4EC8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E4ECC: addiu       $v0, $t4, -0x1
    ctx->r2 = ADD32(ctx->r12, -0X1);
    // 0x801E4ED0: bne         $v0, $at, L_801E4EE8
    if (ctx->r2 != ctx->r1) {
        // 0x801E4ED4: sw          $v0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r2;
            goto L_801E4EE8;
    }
    // 0x801E4ED4: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801E4ED8: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4EDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E4EE0: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801E4EE4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801E4EE8:
    // 0x801E4EE8: bne         $v0, $zero, L_801E4F18
    if (ctx->r2 != 0) {
        // 0x801E4EEC: lui         $a0, 0x801E
        ctx->r4 = S32(0X801E << 16);
            goto L_801E4F18;
    }
    // 0x801E4EEC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4EF0: jal         0x8003521C
    // 0x801E4EF4: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E4EF4: addiu       $a0, $a0, 0x4F2C
    ctx->r4 = ADD32(ctx->r4, 0X4F2C);
    after_4:
    // 0x801E4EF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E4EFC: jal         0x80037C9C
    // 0x801E4F00: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801E4F00: addiu       $a1, $zero, 0xBB8
    ctx->r5 = ADD32(0, 0XBB8);
    after_5:
    // 0x801E4F04: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801E4F08: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801E4F0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E4F10: jal         0x80037C20
    // 0x801E4F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801E4F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_801E4F18:
    // 0x801E4F18: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E4F1C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801E4F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E4F24: jr          $ra
    // 0x801E4F28: nop

    TRACE_RETURN()
    return;
    // 0x801E4F28: nop

;}
RECOMP_FUNC void func_802099A8_634D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802099A8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x802099AC: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x802099B0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802099B4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802099B8: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x802099BC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802099C0: sb          $zero, 0x5($t7)
    MEM_B(0X5, ctx->r15) = 0;
    // 0x802099C4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802099C8: sb          $t8, 0x6($t9)
    MEM_B(0X6, ctx->r25) = ctx->r24;
    // 0x802099CC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802099D0: sb          $zero, 0x7($t0)
    MEM_B(0X7, ctx->r8) = 0;
    // 0x802099D4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802099D8: sb          $zero, 0x8($t1)
    MEM_B(0X8, ctx->r9) = 0;
    // 0x802099DC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x802099E0: sb          $zero, 0x9($t2)
    MEM_B(0X9, ctx->r10) = 0;
    // 0x802099E4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802099E8: sb          $zero, 0xA($t3)
    MEM_B(0XA, ctx->r11) = 0;
    // 0x802099EC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x802099F0: sb          $zero, 0xB($t4)
    MEM_B(0XB, ctx->r12) = 0;
    // 0x802099F4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x802099F8: sb          $zero, 0xC($t5)
    MEM_B(0XC, ctx->r13) = 0;
    // 0x802099FC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80209A00: sb          $zero, 0xD($t6)
    MEM_B(0XD, ctx->r14) = 0;
    // 0x80209A04: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80209A08: sb          $zero, 0xE($t7)
    MEM_B(0XE, ctx->r15) = 0;
    // 0x80209A0C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80209A10: sb          $zero, 0xF($t8)
    MEM_B(0XF, ctx->r24) = 0;
    // 0x80209A14: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80209A18: sb          $zero, 0x10($t9)
    MEM_B(0X10, ctx->r25) = 0;
    // 0x80209A1C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80209A20: sb          $zero, 0x11($t0)
    MEM_B(0X11, ctx->r8) = 0;
    // 0x80209A24: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80209A28: sb          $zero, 0x12($t1)
    MEM_B(0X12, ctx->r9) = 0;
    // 0x80209A2C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80209A30: sb          $zero, 0x815($t2)
    MEM_B(0X815, ctx->r10) = 0;
    // 0x80209A34: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80209A38: sb          $zero, 0x816($t3)
    MEM_B(0X816, ctx->r11) = 0;
    // 0x80209A3C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80209A40: jr          $ra
    // 0x80209A44: sb          $zero, 0x817($t4)
    MEM_B(0X817, ctx->r12) = 0;
    TRACE_RETURN()
    return;
    // 0x80209A44: sb          $zero, 0x817($t4)
    MEM_B(0X817, ctx->r12) = 0;
;}
RECOMP_FUNC void func_802006F8_62BAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802006F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802006FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80200700: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80200704: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80200708: jal         0x80204624
    // 0x8020070C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80204624_62FA04(rdram, ctx);
        goto after_0;
    // 0x8020070C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80200710: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80200714: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x80200718: jal         0x801D4BF4
    // 0x8020071C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_1;
    // 0x8020071C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x80200720: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x80200724: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80200728: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020072C: bne         $t7, $zero, L_80200744
    if (ctx->r15 != 0) {
        // 0x80200730: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_80200744;
    }
    // 0x80200730: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80200734: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x80200738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020073C: jal         0x80200684
    // 0x80200740: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_2;
    // 0x80200740: sb          $zero, 0x4($t9)
    MEM_B(0X4, ctx->r25) = 0;
    after_2:
L_80200744:
    // 0x80200744: jal         0x8020407C
    // 0x80200748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_3;
    // 0x80200748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020074C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80200750: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80200758: jr          $ra
    // 0x8020075C: nop

    TRACE_RETURN()
    return;
    // 0x8020075C: nop

;}
RECOMP_FUNC void func_801E88C8_613CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E88C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E88CC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801E88D0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E88D4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801E88D8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801E88DC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801E88E0: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x801E88E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801E88E8: lwc1        $f4, 0x94($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801E88EC: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801E88F0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E88F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E88F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E88FC: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8900: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801E8904: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E8908: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E890C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E8910: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x801E8914: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E8918: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x801E891C: lwc1        $f8, 0x28($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E8920: c.le.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl <= ctx->f8.fl;
    // 0x801E8924: nop

    // 0x801E8928: bc1f        L_801E8934
    if (!c1cs) {
        // 0x801E892C: nop
    
            goto L_801E8934;
    }
    // 0x801E892C: nop

    // 0x801E8930: swc1        $f20, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f20.u32l;
L_801E8934:
    // 0x801E8934: jal         0x801D60E4
    // 0x801E8938: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801E8938: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x801E893C: jal         0x801EA074
    // 0x801E8940: nop

    func_801EA074_615454(rdram, ctx);
        goto after_1;
    // 0x801E8940: nop

    after_1:
    // 0x801E8944: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801E8948: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E894C: jal         0x801D6508
    // 0x801E8950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801E8950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801E8954: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E8958: lwc1        $f16, 0x74($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E895C: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x801E8960: nop

    // 0x801E8964: bc1fl       L_801E8BEC
    if (!c1cs) {
        // 0x801E8968: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E8BEC;
    }
    goto skip_0;
    // 0x801E8968: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x801E896C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801E8970: jal         0x801D4408
    // 0x801E8974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_3;
    // 0x801E8974: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x801E8978: beql        $v0, $zero, L_801E8BEC
    if (ctx->r2 == 0) {
        // 0x801E897C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801E8BEC;
    }
    goto skip_1;
    // 0x801E897C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x801E8980: jal         0x80038BC8
    // 0x801E8984: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E8984: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_4:
    // 0x801E8988: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E898C: swc1        $f20, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f20.u32l;
    // 0x801E8990: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801E8994: lwc1        $f18, 0x74($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E8998: lwc1        $f6, 0x70($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801E899C: lwc1        $f16, 0x78($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801E89A0: div.s       $f10, $f18, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f22.fl);
    // 0x801E89A4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801E89A8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E89AC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E89B0: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801E89B4: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x801E89B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E89BC: swc1        $f4, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f4.u32l;
    // 0x801E89C0: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801E89C4: div.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E89C8: swc1        $f8, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f8.u32l;
    // 0x801E89CC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E89D0: c.lt.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d < ctx->f6.d;
    // 0x801E89D4: nop

    // 0x801E89D8: bc1f        L_801E89EC
    if (!c1cs) {
        // 0x801E89DC: swc1        $f18, 0x78($s1)
        MEM_W(0X78, ctx->r17) = ctx->f18.u32l;
            goto L_801E89EC;
    }
    // 0x801E89DC: swc1        $f18, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f18.u32l;
    // 0x801E89E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E89E4: b           L_801E8A00
    // 0x801E89E8: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
        goto L_801E8A00;
    // 0x801E89E8: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
L_801E89EC:
    // 0x801E89EC: jal         0x801D3A18
    // 0x801E89F0: nop

    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_5;
    // 0x801E89F0: nop

    after_5:
    // 0x801E89F4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E89F8: jal         0x8003521C
    // 0x801E89FC: addiu       $a0, $a0, -0x73FC
    ctx->r4 = ADD32(ctx->r4, -0X73FC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801E89FC: addiu       $a0, $a0, -0x73FC
    ctx->r4 = ADD32(ctx->r4, -0X73FC);
    after_6:
L_801E8A00:
    // 0x801E8A00: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8A04: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E8A08: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801E8A0C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8A10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8A14: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8A18: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x801E8A1C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8A20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8A24: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8A28: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8A2C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8A30: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8A34: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8A38: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8A3C: jal         0x801E006C
    // 0x801E8A40: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801E8A40: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x801E8A44: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8A48: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8A4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8A50: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8A54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x801E8A58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8A5C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8A60: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8A64: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8A68: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8A6C: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8A70: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8A74: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8A78: jal         0x801E006C
    // 0x801E8A7C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801E8A7C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x801E8A80: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8A84: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8A88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8A8C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8A90: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x801E8A94: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8A98: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8A9C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8AA0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8AA4: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8AA8: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8AAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8AB0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8AB4: jal         0x801E006C
    // 0x801E8AB8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801E8AB8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x801E8ABC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8AC0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8AC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8AC8: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8ACC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x801E8AD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8AD4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8AD8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8ADC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8AE0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8AE4: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8AE8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8AEC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8AF0: jal         0x801E006C
    // 0x801E8AF4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801E8AF4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x801E8AF8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8AFC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8B00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8B04: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8B08: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x801E8B0C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8B10: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8B14: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8B18: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8B1C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8B20: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8B24: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8B28: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8B2C: jal         0x801E006C
    // 0x801E8B30: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801E8B30: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x801E8B34: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8B38: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8B3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8B40: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8B44: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x801E8B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8B4C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8B50: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8B54: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8B58: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8B5C: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8B60: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8B64: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8B68: jal         0x801E006C
    // 0x801E8B6C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801E8B6C: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x801E8B70: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8B74: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8B78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8B7C: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8B80: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x801E8B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8B88: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8B8C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8B90: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8B94: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8B98: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8B9C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8BA0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8BA4: jal         0x801E006C
    // 0x801E8BA8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_13;
    // 0x801E8BA8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x801E8BAC: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801E8BB0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801E8BB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E8BB8: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801E8BBC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801E8BC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E8BC4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801E8BC8: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E8BCC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E8BD0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E8BD4: add.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x801E8BD8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E8BDC: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E8BE0: jal         0x801E006C
    // 0x801E8BE4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_14;
    // 0x801E8BE4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x801E8BE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801E8BEC:
    // 0x801E8BEC: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801E8BF0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801E8BF4: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801E8BF8: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801E8BFC: jr          $ra
    // 0x801E8C00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801E8C00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801EA074_615454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA074: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EA078: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EA07C: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801EA080: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EA084: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EA088: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801EA08C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801EA090: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EA094: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801EA098: nop

    // 0x801EA09C: bc1tl       L_801EA0F4
    if (c1cs) {
        // 0x801EA0A0: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801EA0F4;
    }
    goto skip_0;
    // 0x801EA0A0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x801EA0A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801EA0A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA0AC: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x801EA0B0: nop

    // 0x801EA0B4: bc1tl       L_801EA0F4
    if (c1cs) {
        // 0x801EA0B8: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801EA0F4;
    }
    goto skip_1;
    // 0x801EA0B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_1:
    // 0x801EA0BC: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EA0C0: lwc1        $f4, -0x1ED8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1ED8);
    // 0x801EA0C4: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801EA0C8: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x801EA0CC: nop

    // 0x801EA0D0: bc1tl       L_801EA0F4
    if (c1cs) {
        // 0x801EA0D4: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801EA0F4;
    }
    goto skip_2;
    // 0x801EA0D4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_2:
    // 0x801EA0D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EA0DC: nop

    // 0x801EA0E0: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x801EA0E4: nop

    // 0x801EA0E8: bc1fl       L_801EA114
    if (!c1cs) {
        // 0x801EA0EC: c.le.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
            goto L_801EA114;
    }
    goto skip_3;
    // 0x801EA0EC: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    skip_3:
    // 0x801EA0F0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_801EA0F4:
    // 0x801EA0F4: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801EA0F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801EA0FC: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x801EA100: swc1        $f2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f2.u32l;
    // 0x801EA104: swc1        $f2, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f2.u32l;
    // 0x801EA108: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EA10C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EA110: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
L_801EA114:
    // 0x801EA114: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801EA118: bc1fl       L_801EA12C
    if (!c1cs) {
        // 0x801EA11C: c.le.s      $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
            goto L_801EA12C;
    }
    goto skip_4;
    // 0x801EA11C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    skip_4:
    // 0x801EA120: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x801EA124: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EA128: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
L_801EA12C:
    // 0x801EA12C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EA130: bc1fl       L_801EA140
    if (!c1cs) {
        // 0x801EA134: lwc1        $f2, 0x10($v1)
        ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
            goto L_801EA140;
    }
    goto skip_5;
    // 0x801EA134: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    skip_5:
    // 0x801EA138: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x801EA13C: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
L_801EA140:
    // 0x801EA140: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801EA144: nop

    // 0x801EA148: bc1fl       L_801EA15C
    if (!c1cs) {
        // 0x801EA14C: c.le.s      $f16, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
            goto L_801EA15C;
    }
    goto skip_6;
    // 0x801EA14C: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    skip_6:
    // 0x801EA150: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x801EA154: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EA158: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
L_801EA15C:
    // 0x801EA15C: nop

    // 0x801EA160: bc1f        L_801EA16C
    if (!c1cs) {
        // 0x801EA164: nop
    
            goto L_801EA16C;
    }
    // 0x801EA164: nop

    // 0x801EA168: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
L_801EA16C:
    // 0x801EA16C: jr          $ra
    // 0x801EA170: nop

    TRACE_RETURN()
    return;
    // 0x801EA170: nop

;}
RECOMP_FUNC void func_801D0B34_5FBF14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0B34: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D0B38: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D0B3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D0B40: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D0B44: lwc1        $f6, 0x180($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X180);
    // 0x801D0B48: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0B4C: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801D0B50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D0B54: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801D0B58: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D0B5C: ldc1        $f16, -0x2E08($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X2E08);
    // 0x801D0B60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0B64: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x801D0B68: c.lt.d      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.d < ctx->f0.d;
    // 0x801D0B6C: nop

    // 0x801D0B70: bc1f        L_801D0B9C
    if (!c1cs) {
        // 0x801D0B74: nop
    
            goto L_801D0B9C;
    }
    // 0x801D0B74: nop

    // 0x801D0B78: ldc1        $f18, -0x2E00($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X2E00);
    // 0x801D0B7C: sub.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f0.d - ctx->f18.d;
    // 0x801D0B80: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D0B84: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x801D0B88: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x801D0B8C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801D0B90: sw          $t7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r15;
    // 0x801D0B94: lwc1        $f8, 0x10($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801D0B98: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
L_801D0B9C:
    // 0x801D0B9C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BA0: ldc1        $f10, -0x2DF8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X2DF8);
    // 0x801D0BA4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0BA8: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x801D0BAC: nop

    // 0x801D0BB0: bc1f        L_801D0BC8
    if (!c1cs) {
        // 0x801D0BB4: nop
    
            goto L_801D0BC8;
    }
    // 0x801D0BB4: nop

    // 0x801D0BB8: ldc1        $f16, -0x2DF0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X2DF0);
    // 0x801D0BBC: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x801D0BC0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D0BC4: swc1        $f4, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f4.u32l;
L_801D0BC8:
    // 0x801D0BC8: jr          $ra
    // 0x801D0BCC: nop

    TRACE_RETURN()
    return;
    // 0x801D0BCC: nop

;}
RECOMP_FUNC void func_801EB454_616834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB454: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EB458: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801EB45C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EB460: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EB464: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EB468: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801EB46C: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x801EB470: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x801EB474: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x801EB478: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801EB47C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EB480: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801EB484: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801EB488: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x801EB48C: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x801EB490: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x801EB494: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EB498: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x801EB49C: addiu       $t9, $sp, 0x58
    ctx->r25 = ADD32(ctx->r29, 0X58);
    // 0x801EB4A0: addiu       $t0, $sp, 0x54
    ctx->r8 = ADD32(ctx->r29, 0X54);
    // 0x801EB4A4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801EB4A8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801EB4AC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801EB4B0: jal         0x8000E4E4
    // 0x801EB4B4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801EB4B4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EB4B8: lbu         $t1, 0x77($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X77);
    // 0x801EB4BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EB4C0: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x801EB4C4: bne         $t1, $at, L_801EB4F0
    if (ctx->r9 != ctx->r1) {
        // 0x801EB4C8: lwc1        $f4, 0x58($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
            goto L_801EB4F0;
    }
    // 0x801EB4C8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801EB4CC: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EB4D0: addiu       $a1, $a1, 0xB70
    ctx->r5 = ADD32(ctx->r5, 0XB70);
    // 0x801EB4D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB4D8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EB4DC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801EB4E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EB4E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EB4E8: b           L_801EB510
    // 0x801EB4EC: lwc1        $f12, -0x1E90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1E90);
        goto L_801EB510;
    // 0x801EB4EC: lwc1        $f12, -0x1E90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1E90);
L_801EB4F0:
    // 0x801EB4F0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EB4F4: addiu       $a1, $a1, 0xAB0
    ctx->r5 = ADD32(ctx->r5, 0XAB0);
    // 0x801EB4F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB4FC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EB500: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x801EB504: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EB508: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EB50C: lwc1        $f12, -0x1E8C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1E8C);
L_801EB510:
    // 0x801EB510: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801EB514: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801EB518: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801EB51C: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801EB520: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801EB524: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x801EB528: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801EB52C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EB530: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801EB534: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801EB538: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EB53C: ldc1        $f0, -0x1E88($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1E88);
    // 0x801EB540: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801EB544: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EB548: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801EB54C: addiu       $t5, $zero, 0x4B0
    ctx->r13 = ADD32(0, 0X4B0);
    // 0x801EB550: addiu       $a0, $a0, -0x49D8
    ctx->r4 = ADD32(ctx->r4, -0X49D8);
    // 0x801EB554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EB558: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x801EB55C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EB560: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801EB564: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801EB568: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EB56C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801EB570: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EB574: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801EB578: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801EB57C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x801EB580: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x801EB584: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801EB588: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EB58C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801EB590: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x801EB594: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801EB598: jal         0x80035854
    // 0x801EB59C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EB59C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801EB5A0: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EB5A4: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801EB5A8: beq         $v0, $zero, L_801EB618
    if (ctx->r2 == 0) {
        // 0x801EB5AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EB618;
    }
    // 0x801EB5AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EB5B0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EB5B4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x801EB5B8: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x801EB5BC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EB5C0: sw          $t6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r14;
    // 0x801EB5C4: swc1        $f2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f2.u32l;
    // 0x801EB5C8: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x801EB5CC: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x801EB5D0: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801EB5D4: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x801EB5D8: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    // 0x801EB5DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB5E0: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x801EB5E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EB5E8: addiu       $a1, $a1, -0x5C58
    ctx->r5 = ADD32(ctx->r5, -0X5C58);
    // 0x801EB5EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EB5F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EB5F4: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x801EB5F8: jal         0x8000DDF0
    // 0x801EB5FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8000DDF0_E9F0(rdram, ctx);
        goto after_2;
    // 0x801EB5FC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x801EB600: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB604: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x801EB608: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801EB60C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB610: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801EB614: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
L_801EB618:
    // 0x801EB618: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801EB61C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801EB620: jr          $ra
    // 0x801EB624: nop

    TRACE_RETURN()
    return;
    // 0x801EB624: nop

;}
RECOMP_FUNC void func_801E6854_611C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6854: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E6858: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E685C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E6860: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E6864: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E6868: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x801E686C: jal         0x801D322C
    // 0x801E6870: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_801D322C_5FE60C(rdram, ctx);
        goto after_0;
    // 0x801E6870: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_0:
    // 0x801E6874: beql        $v0, $zero, L_801E6888
    if (ctx->r2 == 0) {
        // 0x801E6878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E6888;
    }
    goto skip_0;
    // 0x801E6878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E687C: jal         0x80038BC8
    // 0x801E6880: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E6880: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    after_1:
    // 0x801E6884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E6888:
    // 0x801E6888: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x801E688C: jal         0x801D322C
    // 0x801E6890: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    func_801D322C_5FE60C(rdram, ctx);
        goto after_2;
    // 0x801E6890: lui         $a2, 0x4130
    ctx->r6 = S32(0X4130 << 16);
    after_2:
    // 0x801E6894: beql        $v0, $zero, L_801E68A8
    if (ctx->r2 == 0) {
        // 0x801E6898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E68A8;
    }
    goto skip_1;
    // 0x801E6898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x801E689C: jal         0x80038BC8
    // 0x801E68A0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E68A0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    after_3:
    // 0x801E68A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E68A8:
    // 0x801E68A8: jal         0x801D31F0
    // 0x801E68AC: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_4;
    // 0x801E68AC: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    after_4:
    // 0x801E68B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E68B4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E68B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E68BC: nop

    // 0x801E68C0: bc1fl       L_801E68D4
    if (!c1cs) {
        // 0x801E68C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E68D4;
    }
    goto skip_2;
    // 0x801E68C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x801E68C8: jal         0x801EF2B0
    // 0x801E68CC: nop

    func_801EF2B0_61A690(rdram, ctx);
        goto after_5;
    // 0x801E68CC: nop

    after_5:
    // 0x801E68D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E68D4:
    // 0x801E68D4: lui         $a1, 0x42DC
    ctx->r5 = S32(0X42DC << 16);
    // 0x801E68D8: jal         0x801D3B18
    // 0x801E68DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_6;
    // 0x801E68DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x801E68E0: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x801E68E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E68E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E68EC: jal         0x801D3F00
    // 0x801E68F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_7;
    // 0x801E68F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_7:
    // 0x801E68F4: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x801E68F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E68FC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801E6900: jal         0x801D60E4
    // 0x801E6904: sb          $t7, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r15;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_8;
    // 0x801E6904: sb          $t7, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r15;
    after_8:
    // 0x801E6908: jal         0x801EEEC0
    // 0x801E690C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_9;
    // 0x801E690C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801E6910: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801E6914: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6918: ldc1        $f8, -0x1F50($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1F50);
    // 0x801E691C: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E6920: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E6924: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x801E6928: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x801E692C: nop

    // 0x801E6930: bc1fl       L_801E69E4
    if (!c1cs) {
        // 0x801E6934: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E69E4;
    }
    goto skip_3;
    // 0x801E6934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x801E6938: ldc1        $f10, -0x1F48($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1F48);
    // 0x801E693C: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x801E6940: nop

    // 0x801E6944: bc1fl       L_801E69E4
    if (!c1cs) {
        // 0x801E6948: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E69E4;
    }
    goto skip_4;
    // 0x801E6948: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801E694C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E6950: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E6954: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801E6958: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801E695C: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801E6960: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E6964: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x801E6968: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x801E696C: nop

    // 0x801E6970: bc1fl       L_801E69E4
    if (!c1cs) {
        // 0x801E6974: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E69E4;
    }
    goto skip_5;
    // 0x801E6974: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x801E6978: bne         $t8, $at, L_801E69E0
    if (ctx->r24 != ctx->r1) {
        // 0x801E697C: addiu       $a3, $s0, 0x70
        ctx->r7 = ADD32(ctx->r16, 0X70);
            goto L_801E69E0;
    }
    // 0x801E697C: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x801E6980: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E6984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E6988: addiu       $t9, $s0, 0x74
    ctx->r25 = ADD32(ctx->r16, 0X74);
    // 0x801E698C: addiu       $t0, $s0, 0x78
    ctx->r8 = ADD32(ctx->r16, 0X78);
    // 0x801E6990: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801E6994: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801E6998: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801E699C: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801E69A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801E69A4: jal         0x8000E808
    // 0x801E69A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8000E808_F408(rdram, ctx);
        goto after_10;
    // 0x801E69A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_10:
    // 0x801E69AC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801E69B0: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x801E69B4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E69B8: lhu         $t2, 0x14($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X14);
    // 0x801E69BC: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E69C0: addiu       $a0, $a0, 0x69F4
    ctx->r4 = ADD32(ctx->r4, 0X69F4);
    // 0x801E69C4: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x801E69C8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x801E69CC: lhu         $t4, 0x16($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X16);
    // 0x801E69D0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801E69D4: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801E69D8: jal         0x8003521C
    // 0x801E69DC: sw          $t4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r12;
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x801E69DC: sw          $t4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r12;
    after_11:
L_801E69E0:
    // 0x801E69E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E69E4:
    // 0x801E69E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E69E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E69EC: jr          $ra
    // 0x801E69F0: nop

    TRACE_RETURN()
    return;
    // 0x801E69F0: nop

;}
RECOMP_FUNC void func_801FF460_62A840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FF464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FF468: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x801FF46C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801FF470: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801FF474: addiu       $t6, $v0, 0x20
    ctx->r14 = ADD32(ctx->r2, 0X20);
    // 0x801FF478: bgez        $v0, L_801FF48C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801FF47C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801FF48C;
    }
    // 0x801FF47C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801FF480: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FF484: nop

    // 0x801FF488: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801FF48C:
    // 0x801FF48C: lwc1        $f10, 0x90($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801FF490: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x801FF494: nop

    // 0x801FF498: bc1tl       L_801FF4AC
    if (c1cs) {
        // 0x801FF49C: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_801FF4AC;
    }
    goto skip_0;
    // 0x801FF49C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_0:
    // 0x801FF4A0: b           L_801FF4BC
    // 0x801FF4A4: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
        goto L_801FF4BC;
    // 0x801FF4A4: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x801FF4A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_801FF4AC:
    // 0x801FF4AC: nop

    // 0x801FF4B0: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801FF4B4: jal         0x801FC3FC
    // 0x801FF4B8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_0;
    // 0x801FF4B8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
L_801FF4BC:
    // 0x801FF4BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FF4C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FF4C4: jr          $ra
    // 0x801FF4C8: nop

    TRACE_RETURN()
    return;
    // 0x801FF4C8: nop

;}
RECOMP_FUNC void func_801FDE94_629274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDE94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FDE98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FDE9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FDEA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FDEA4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FDEA8: jal         0x801D3018
    // 0x801FDEAC: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FDEAC: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_0:
    // 0x801FDEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDEB4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FDEB8: jal         0x801D3B18
    // 0x801FDEBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801FDEBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x801FDEC0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FDEC4: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FDEC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801FDECC: jal         0x8000ED00
    // 0x801FDED0: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_2;
    // 0x801FDED0: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    after_2:
    // 0x801FDED4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801FDED8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FDEDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDEE0: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x801FDEE4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801FDEE8: nop

    // 0x801FDEEC: bc1fl       L_801FDF28
    if (!c1cs) {
        // 0x801FDEF0: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801FDF28;
    }
    goto skip_0;
    // 0x801FDEF0: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_0:
    // 0x801FDEF4: jal         0x801D6B14
    // 0x801FDEF8: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_801D6B14_601EF4(rdram, ctx);
        goto after_3;
    // 0x801FDEF8: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_3:
    // 0x801FDEFC: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x801FDF00: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x801FDF04: jal         0x801D6B8C
    // 0x801FDF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6B8C_601F6C(rdram, ctx);
        goto after_4;
    // 0x801FDF08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FDF0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FDF10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FDF14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDF18: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801FDF1C: jal         0x801D6330
    // 0x801FDF20: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    func_801D6330_601710(rdram, ctx);
        goto after_5;
    // 0x801FDF20: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x801FDF24: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
L_801FDF28:
    // 0x801FDF28: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801FDF2C: bne         $t8, $zero, L_801FDF3C
    if (ctx->r24 != 0) {
        // 0x801FDF30: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801FDF3C;
    }
    // 0x801FDF30: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801FDF34: jal         0x801FC3FC
    // 0x801FDF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_6;
    // 0x801FDF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_801FDF3C:
    // 0x801FDF3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FDF40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FDF44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FDF48: jr          $ra
    // 0x801FDF4C: nop

    TRACE_RETURN()
    return;
    // 0x801FDF4C: nop

;}
RECOMP_FUNC void func_801F6660_621A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6660: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801F6664: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F6668: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F666C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801F6670: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801F6674: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F6678: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801F667C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801F6680: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801F6684: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F6688: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F668C: ldc1        $f8, -0x1960($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1960);
    // 0x801F6690: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F6694: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x801F6698: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F669C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F66A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F66A4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F66A8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F66AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801F66B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F66B4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F66B8: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x801F66BC: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F66C0: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x801F66C4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F66C8: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F66CC: nop

    // 0x801F66D0: bc1f        L_801F66E4
    if (!c1cs) {
        // 0x801F66D4: nop
    
            goto L_801F66E4;
    }
    // 0x801F66D4: nop

    // 0x801F66D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F66DC: nop

    // 0x801F66E0: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
L_801F66E4:
    // 0x801F66E4: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F66E8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801F66EC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F66F0: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F66F4: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x801F66F8: lw          $v0, 0xDC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XDC);
    // 0x801F66FC: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x801F6700: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801F6704: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801F6708: lwc1        $f14, 0x70($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801F670C: lw          $a2, 0x74($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X74);
    // 0x801F6710: lw          $a3, 0x78($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X78);
    // 0x801F6714: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801F6718: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801F671C: jal         0x8000E4E4
    // 0x801F6720: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801F6720: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801F6724: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F6728: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F672C: lui         $at, 0xC382
    ctx->r1 = S32(0XC382 << 16);
    // 0x801F6730: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801F6734: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F6738: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F673C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F6740: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801F6744: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801F6748: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F674C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F6750: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801F6754: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x801F6758: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F675C: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801F6760: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801F6764: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801F6768: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F676C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801F6770: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x801F6774: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801F6778: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801F677C: lh          $t2, -0x5250($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X5250);
    // 0x801F6780: beq         $t2, $zero, L_801F6790
    if (ctx->r10 == 0) {
        // 0x801F6784: nop
    
            goto L_801F6790;
    }
    // 0x801F6784: nop

    // 0x801F6788: b           L_801F6790
    // 0x801F678C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801F6790;
    // 0x801F678C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801F6790:
    // 0x801F6790: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801F6794: jal         0x80003EA0
    // 0x801F6798: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801F6798: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x801F679C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x801F67A0: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F67A4: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801F67A8: nop

    // 0x801F67AC: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F67B0: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801F67B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801F67B8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801F67BC: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801F67C0: jal         0x80003E10
    // 0x801F67C4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801F67C4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x801F67C8: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801F67CC: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F67D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801F67D4: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801F67D8: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F67DC: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801F67E0: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F67E4: jal         0x8000E9F4
    // 0x801F67E8: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_3;
    // 0x801F67E8: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    after_3:
    // 0x801F67EC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801F67F0: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801F67F4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801F67F8: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x801F67FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801F6800: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x801F6804: bnel        $t4, $at, L_801F6870
    if (ctx->r12 != ctx->r1) {
        // 0x801F6808: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801F6870;
    }
    goto skip_0;
    // 0x801F6808: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x801F680C: jal         0x801F6884
    // 0x801F6810: nop

    func_801F6884_621C64(rdram, ctx);
        goto after_4;
    // 0x801F6810: nop

    after_4:
    // 0x801F6814: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F6818: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F681C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F6820: swc1        $f0, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f0.u32l;
    // 0x801F6824: swc1        $f0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f0.u32l;
    // 0x801F6828: jal         0x801F71DC
    // 0x801F682C: swc1        $f18, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f18.u32l;
    func_801F71DC_6225BC(rdram, ctx);
        goto after_5;
    // 0x801F682C: swc1        $f18, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f18.u32l;
    after_5:
    // 0x801F6830: bne         $v0, $zero, L_801F6858
    if (ctx->r2 != 0) {
        // 0x801F6834: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_801F6858;
    }
    // 0x801F6834: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F6838: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801F683C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F6840: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F6844: addiu       $a0, $a0, 0x4860
    ctx->r4 = ADD32(ctx->r4, 0X4860);
    // 0x801F6848: jal         0x8003521C
    // 0x801F684C: swc1        $f4, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F684C: swc1        $f4, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f4.u32l;
    after_6:
    // 0x801F6850: b           L_801F6870
    // 0x801F6854: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801F6870;
    // 0x801F6854: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F6858:
    // 0x801F6858: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F685C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F6860: addiu       $a0, $a0, 0x4CF4
    ctx->r4 = ADD32(ctx->r4, 0X4CF4);
    // 0x801F6864: jal         0x8003521C
    // 0x801F6868: swc1        $f6, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F6868: swc1        $f6, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f6.u32l;
    after_7:
    // 0x801F686C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801F6870:
    // 0x801F6870: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F6874: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801F6878: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801F687C: jr          $ra
    // 0x801F6880: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801F6880: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801F1C34_61D014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1C3C: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x801F1C40: sltiu       $at, $t6, 0xD
    ctx->r1 = ctx->r14 < 0XD ? 1 : 0;
    // 0x801F1C44: beq         $at, $zero, L_801F1D50
    if (ctx->r1 == 0) {
        // 0x801F1C48: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_801F1D50;
    }
    // 0x801F1C48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801F1C4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1C50: addu        $at, $at, $t6
    gpr jr_addend_801F1C58 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801F1C54: lw          $t6, -0x1A98($at)
    ctx->r14 = ADD32(ctx->r1, -0X1A98);
    // 0x801F1C58: jr          $t6
    // 0x801F1C5C: nop

    switch (jr_addend_801F1C58 >> 2) {
        case 0: goto L_801F1C60; break;
        case 1: goto L_801F1C74; break;
        case 2: goto L_801F1C88; break;
        case 3: goto L_801F1C9C; break;
        case 4: goto L_801F1CB0; break;
        case 5: goto L_801F1CC4; break;
        case 6: goto L_801F1CD8; break;
        case 7: goto L_801F1CEC; break;
        case 8: goto L_801F1D00; break;
        case 9: goto L_801F1D14; break;
        case 10: goto L_801F1D28; break;
        case 11: goto L_801F1D3C; break;
        case 12: goto L_801F1D50; break;
        default: switch_error(__func__, 0x801F1C58, 0x8020E568);
    }
    // 0x801F1C5C: nop

L_801F1C60:
    // 0x801F1C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1C64: jal         0x801F1FA4
    // 0x801F1C68: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_0;
    // 0x801F1C68: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x801F1C6C: b           L_801F1D6C
    // 0x801F1C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1C74:
    // 0x801F1C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1C78: jal         0x801F1FA4
    // 0x801F1C7C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_1;
    // 0x801F1C7C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x801F1C80: b           L_801F1D6C
    // 0x801F1C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1C88:
    // 0x801F1C88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1C8C: jal         0x801F1FA4
    // 0x801F1C90: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_2;
    // 0x801F1C90: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_2:
    // 0x801F1C94: b           L_801F1D6C
    // 0x801F1C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1C9C:
    // 0x801F1C9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1CA0: jal         0x801F1FA4
    // 0x801F1CA4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_3;
    // 0x801F1CA4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_3:
    // 0x801F1CA8: b           L_801F1D6C
    // 0x801F1CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1CB0:
    // 0x801F1CB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1CB4: jal         0x801F1FA4
    // 0x801F1CB8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_4;
    // 0x801F1CB8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_4:
    // 0x801F1CBC: b           L_801F1D6C
    // 0x801F1CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1CC4:
    // 0x801F1CC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1CC8: jal         0x801F1FA4
    // 0x801F1CCC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_5;
    // 0x801F1CCC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_5:
    // 0x801F1CD0: b           L_801F1D6C
    // 0x801F1CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1CD8:
    // 0x801F1CD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1CDC: jal         0x801F1FA4
    // 0x801F1CE0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_6;
    // 0x801F1CE0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_6:
    // 0x801F1CE4: b           L_801F1D6C
    // 0x801F1CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1CEC:
    // 0x801F1CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801F1CF0: jal         0x801F1FA4
    // 0x801F1CF4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_7;
    // 0x801F1CF4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_7:
    // 0x801F1CF8: b           L_801F1D6C
    // 0x801F1CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D00:
    // 0x801F1D00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1D04: jal         0x801F1FA4
    // 0x801F1D08: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_8;
    // 0x801F1D08: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_8:
    // 0x801F1D0C: b           L_801F1D6C
    // 0x801F1D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D14:
    // 0x801F1D14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1D18: jal         0x801F1FA4
    // 0x801F1D1C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_9;
    // 0x801F1D1C: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_9:
    // 0x801F1D20: b           L_801F1D6C
    // 0x801F1D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D28:
    // 0x801F1D28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1D2C: jal         0x801F1FA4
    // 0x801F1D30: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_10;
    // 0x801F1D30: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_10:
    // 0x801F1D34: b           L_801F1D6C
    // 0x801F1D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D3C:
    // 0x801F1D3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F1D40: jal         0x801F1FA4
    // 0x801F1D44: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_11;
    // 0x801F1D44: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_11:
    // 0x801F1D48: b           L_801F1D6C
    // 0x801F1D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1D6C;
    // 0x801F1D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D50:
    // 0x801F1D50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1D54: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x801F1D58: jal         0x801F1FA4
    // 0x801F1D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F1FA4_61D384(rdram, ctx);
        goto after_12;
    // 0x801F1D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_12:
    // 0x801F1D60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F1D64: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801F1D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1D6C:
    // 0x801F1D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1D70: jr          $ra
    // 0x801F1D74: nop

    TRACE_RETURN()
    return;
    // 0x801F1D74: nop

;}
