#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80224D68_68E748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224D68: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80224D6C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80224D70: ldc1        $f4, -0x4F18($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4F18);
    // 0x80224D74: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80224D78: lui         $t1, 0x8023
    ctx->r9 = S32(0X8023 << 16);
    // 0x80224D7C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x80224D80: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224D84: addiu       $t1, $t1, -0x4CDC
    ctx->r9 = ADD32(ctx->r9, -0X4CDC);
    // 0x80224D88: bc1fl       L_80224E04
    if (!c1cs) {
        // 0x80224D8C: lw          $t6, 0x0($t1)
        ctx->r14 = MEM_W(ctx->r9, 0X0);
            goto L_80224E04;
    }
    goto skip_0;
    // 0x80224D8C: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    skip_0:
    // 0x80224D90: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224D94: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224D98: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80224D9C: nop

    // 0x80224DA0: bc1fl       L_80224DB8
    if (!c1cs) {
        // 0x80224DA4: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80224DB8;
    }
    goto skip_1;
    // 0x80224DA4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x80224DA8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80224DAC: b           L_80224DB8
    // 0x80224DB0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80224DB8;
    // 0x80224DB0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80224DB4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80224DB8:
    // 0x80224DB8: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80224DBC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x80224DC0: nop

    // 0x80224DC4: bc1fl       L_80224DE0
    if (!c1cs) {
        // 0x80224DC8: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_80224DE0;
    }
    goto skip_2;
    // 0x80224DC8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80224DCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80224DD0: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x80224DD4: b           L_80224E00
    // 0x80224DD8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
        goto L_80224E00;
    // 0x80224DD8: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x80224DDC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_80224DE0:
    // 0x80224DE0: nop

    // 0x80224DE4: bc1fl       L_80224DFC
    if (!c1cs) {
        // 0x80224DE8: add.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80224DFC;
    }
    goto skip_3;
    // 0x80224DE8: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x80224DEC: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x80224DF0: b           L_80224E00
    // 0x80224DF4: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
        goto L_80224E00;
    // 0x80224DF4: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80224DF8: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
L_80224DFC:
    // 0x80224DFC: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
L_80224E00:
    // 0x80224E00: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
L_80224E04:
    // 0x80224E04: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80224E08: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x80224E0C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80224E10: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x80224E14: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80224E18: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224E1C: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x80224E20: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80224E24: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80224E28: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80224E2C: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80224E30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224E34: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80224E38: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x80224E3C: lw          $a3, 0x0($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X0);
    // 0x80224E40: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80224E44: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80224E48: addiu       $t3, $a3, 0x8
    ctx->r11 = ADD32(ctx->r7, 0X8);
    // 0x80224E4C: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x80224E50: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
    // 0x80224E54: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80224E58: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80224E5C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80224E60: nop

    // 0x80224E64: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80224E68: beql        $t6, $zero, L_80224EB8
    if (ctx->r14 == 0) {
        // 0x80224E6C: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_80224EB8;
    }
    goto skip_4;
    // 0x80224E6C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_4:
    // 0x80224E70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80224E74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80224E78: sub.s       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80224E7C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80224E80: nop

    // 0x80224E84: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80224E88: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80224E8C: nop

    // 0x80224E90: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80224E94: bne         $t6, $zero, L_80224EAC
    if (ctx->r14 != 0) {
        // 0x80224E98: nop
    
            goto L_80224EAC;
    }
    // 0x80224E98: nop

    // 0x80224E9C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x80224EA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80224EA4: b           L_80224EC4
    // 0x80224EA8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80224EC4;
    // 0x80224EA8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80224EAC:
    // 0x80224EAC: b           L_80224EC4
    // 0x80224EB0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80224EC4;
    // 0x80224EB0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80224EB4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_80224EB8:
    // 0x80224EB8: nop

    // 0x80224EBC: bltz        $t6, L_80224EAC
    if (SIGNED(ctx->r14) < 0) {
        // 0x80224EC0: nop
    
            goto L_80224EAC;
    }
    // 0x80224EC0: nop

L_80224EC4:
    // 0x80224EC4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80224EC8: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80224ECC: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80224ED0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80224ED4: lui         $t9, 0xB800
    ctx->r25 = S32(0XB800 << 16);
    // 0x80224ED8: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80224EDC: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x80224EE0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80224EE4: jr          $ra
    // 0x80224EE8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80224EE8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
;}
RECOMP_FUNC void func_8020D94C_67732C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020D950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020D954: jal         0x8003FF50
    // 0x8020D958: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x8020D958: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8020D95C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020D960: jal         0x80013AC4
    // 0x8020D964: addiu       $a0, $a0, -0x6188
    ctx->r4 = ADD32(ctx->r4, -0X6188);
    func_80013AC4_146C4(rdram, ctx);
        goto after_1;
    // 0x8020D964: addiu       $a0, $a0, -0x6188
    ctx->r4 = ADD32(ctx->r4, -0X6188);
    after_1:
    // 0x8020D968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020D96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020D970: jr          $ra
    // 0x8020D974: nop

    TRACE_RETURN()
    return;
    // 0x8020D974: nop

;}
RECOMP_FUNC void func_80214340_67DD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214340: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214344: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80214348: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021434C: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80214350: swc1        $f14, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f14.u32l;
    // 0x80214354: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80214358: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x8021435C: lhu         $t6, 0x12($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X12);
    // 0x80214360: jr          $ra
    // 0x80214364: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80214364: sh          $t6, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80225CD0_68F6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80225CD4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80225CD8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80225CDC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80225CE0: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225CE4: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80225CE8: addiu       $a1, $a1, 0x5CC4
    ctx->r5 = ADD32(ctx->r5, 0X5CC4);
    // 0x80225CEC: jal         0x80034E08
    // 0x80225CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80225CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80225CF4: bne         $v0, $zero, L_80225D04
    if (ctx->r2 != 0) {
        // 0x80225CF8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80225D04;
    }
    // 0x80225CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225CFC: b           L_80225D68
    // 0x80225D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80225D68;
    // 0x80225D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225D04:
    // 0x80225D04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225D08: lwc1        $f0, -0x4EF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4EF0);
    // 0x80225D0C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80225D10: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80225D14: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80225D18: addiu       $a1, $a1, 0x3C10
    ctx->r5 = ADD32(ctx->r5, 0X3C10);
    // 0x80225D1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80225D20: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80225D24: addiu       $t6, $zero, 0x4E2
    ctx->r14 = ADD32(0, 0X4E2);
    // 0x80225D28: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80225D2C: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80225D30: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80225D34: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80225D38: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80225D3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80225D40: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80225D44: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80225D48: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80225D4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80225D50: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80225D54: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80225D58: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80225D5C: jal         0x8000DBF0
    // 0x80225D60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80225D60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80225D64: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80225D68:
    // 0x80225D68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80225D6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80225D70: jr          $ra
    // 0x80225D74: nop

    TRACE_RETURN()
    return;
    // 0x80225D74: nop

;}
RECOMP_FUNC void func_8021F218_688BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F218: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021F21C: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x8021F220: lw          $t6, 0xA0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA0);
    // 0x8021F224: jr          $ra
    // 0x8021F228: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x8021F228: sb          $zero, 0x64($t6)
    MEM_B(0X64, ctx->r14) = 0;
;}
RECOMP_FUNC void func_8020D4EC_676ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D4EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8020D4F0: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8020D4F4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020D4F8: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x8020D4FC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8020D500: nop

    // 0x8020D504: bc1fl       L_8020D528
    if (!c1cs) {
        // 0x8020D508: lwc1        $f10, 0xC($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8020D528;
    }
    goto skip_0;
    // 0x8020D508: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8020D50C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8020D510: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8020D514: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020D518: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8020D51C: b           L_8020D530
    // 0x8020D520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8020D530;
    // 0x8020D520: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8020D524: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
L_8020D528:
    // 0x8020D528: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8020D52C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
L_8020D530:
    // 0x8020D530: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8020D534: div.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8020D538: jr          $ra
    // 0x8020D53C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8020D53C: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8021F8D4_6892B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F8DC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021F8E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F8E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F8E8: sb          $t6, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r14;
    // 0x8021F8EC: jal         0x80013AC4
    // 0x8021F8F0: addiu       $a0, $a0, -0x5BB0
    ctx->r4 = ADD32(ctx->r4, -0X5BB0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F8F0: addiu       $a0, $a0, -0x5BB0
    ctx->r4 = ADD32(ctx->r4, -0X5BB0);
    after_0:
    // 0x8021F8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F8F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F8FC: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x8021F900: jr          $ra
    // 0x8021F904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8021F904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80217248_680C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217248: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021724C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80217250: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80217254: swc1        $f12, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f12.u32l;
    // 0x80217258: swc1        $f14, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f14.u32l;
    // 0x8021725C: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80217260: jr          $ra
    // 0x80217264: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x80217264: swc1        $f4, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80217658_681038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217658: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021765C: beq         $a1, $at, L_802176DC
    if (ctx->r5 == ctx->r1) {
        // 0x80217660: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_802176DC;
    }
    // 0x80217660: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217664: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80217668: beq         $a1, $at, L_802176B0
    if (ctx->r5 == ctx->r1) {
        // 0x8021766C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802176B0;
    }
    // 0x8021766C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217670: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80217674: bne         $a1, $at, L_802176F4
    if (ctx->r5 != ctx->r1) {
        // 0x80217678: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_802176F4;
    }
    // 0x80217678: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021767C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80217680: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80217684: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217688: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x8021768C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x80217690: lwc1        $f6, -0x55F0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55F0);
    // 0x80217694: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80217698: addiu       $t7, $t7, 0x51C
    ctx->r15 = ADD32(ctx->r15, 0X51C);
    // 0x8021769C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802176A0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x802176A4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x802176A8: b           L_802176F4
    // 0x802176AC: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
        goto L_802176F4;
    // 0x802176AC: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_802176B0:
    // 0x802176B0: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x802176B4: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x802176B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802176BC: lwc1        $f8, -0x55EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55EC);
    // 0x802176C0: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x802176C4: addiu       $t0, $t0, 0xD20
    ctx->r8 = ADD32(ctx->r8, 0XD20);
    // 0x802176C8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802176CC: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x802176D0: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x802176D4: b           L_802176F4
    // 0x802176D8: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_802176F4;
    // 0x802176D8: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_802176DC:
    // 0x802176DC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802176E0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x802176E4: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x802176E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802176EC: lwc1        $f10, -0x55E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X55E8);
    // 0x802176F0: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
L_802176F4:
    // 0x802176F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802176F8: jr          $ra
    // 0x802176FC: swc1        $f16, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x802176FC: swc1        $f16, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_80217320_680D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217320: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80217324: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80217328: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8021732C: bgez        $t6, L_80217344
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80217330: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80217344;
    }
    // 0x80217330: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80217334: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80217338: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021733C: nop

    // 0x80217340: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80217344:
    // 0x80217344: lwc1        $f8, 0xB0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80217348: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x8021734C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217350: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80217354: nop

    // 0x80217358: bc1fl       L_8021737C
    if (!c1cs) {
        // 0x8021735C: lwc1        $f18, 0x58($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X58);
            goto L_8021737C;
    }
    goto skip_0;
    // 0x8021735C: lwc1        $f18, 0x58($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X58);
    skip_0:
    // 0x80217360: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217364: lwc1        $f10, 0x58($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X58);
    // 0x80217368: lwc1        $f16, 0x54($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X54);
    // 0x8021736C: sub.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80217370: b           L_80217384
    // 0x80217374: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80217384;
    // 0x80217374: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80217378: lwc1        $f18, 0x58($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X58);
L_8021737C:
    // 0x8021737C: lwc1        $f4, 0x54($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X54);
    // 0x80217380: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_80217384:
    // 0x80217384: lwc1        $f6, 0x30($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80217388: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8021738C: jr          $ra
    // 0x80217390: swc1        $f8, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80217390: swc1        $f8, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80217F88_681968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217F88: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80217F8C: bne         $a1, $at, L_80217FC0
    if (ctx->r5 != ctx->r1) {
        // 0x80217F90: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80217FC0;
    }
    // 0x80217F90: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217F94: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217F98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80217F9C: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x80217FA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217FA4: lwc1        $f4, -0x55B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55B4);
    // 0x80217FA8: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80217FAC: addiu       $t7, $t7, 0x780
    ctx->r15 = ADD32(ctx->r15, 0X780);
    // 0x80217FB0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217FB4: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80217FB8: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80217FBC: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80217FC0:
    // 0x80217FC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80217FC4: jr          $ra
    // 0x80217FC8: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80217FC8: swc1        $f6, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802259DC_68F3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802259E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259E4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802259E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802259EC: beq         $a1, $at, L_80225A48
    if (ctx->r5 == ctx->r1) {
        // 0x802259F0: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_80225A48;
    }
    // 0x802259F0: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x802259F4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802259F8: bne         $a1, $at, L_80225A94
    if (ctx->r5 != ctx->r1) {
        // 0x802259FC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80225A94;
    }
    // 0x802259FC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80225A00: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80225A04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225A08: lwc1        $f4, -0x4EF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4EF8);
    // 0x80225A0C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x80225A10: addiu       $t6, $t6, 0x39B0
    ctx->r14 = ADD32(ctx->r14, 0X39B0);
    // 0x80225A14: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80225A18: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80225A1C: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80225A20: sw          $t7, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r15;
    // 0x80225A24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80225A28: jal         0x8001B5AC
    // 0x80225A2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80225A2C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80225A30: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80225A34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80225A38: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80225A3C: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x80225A40: b           L_80225AA0
    // 0x80225A44: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
        goto L_80225AA0;
    // 0x80225A44: swc1        $f8, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f8.u32l;
L_80225A48:
    // 0x80225A48: addiu       $v0, $a3, 0x5C
    ctx->r2 = ADD32(ctx->r7, 0X5C);
    // 0x80225A4C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80225A50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225A54: lwc1        $f10, -0x4EF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4EF4);
    // 0x80225A58: lui         $t8, 0x800
    ctx->r24 = S32(0X800 << 16);
    // 0x80225A5C: addiu       $t8, $t8, 0x3E70
    ctx->r24 = ADD32(ctx->r24, 0X3E70);
    // 0x80225A60: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80225A64: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80225A68: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80225A6C: sw          $t9, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r25;
    // 0x80225A70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80225A74: jal         0x8001B5AC
    // 0x80225A78: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x80225A78: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80225A7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80225A80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80225A84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80225A88: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80225A8C: b           L_80225AA0
    // 0x80225A90: swc1        $f18, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f18.u32l;
        goto L_80225AA0;
    // 0x80225A90: swc1        $f18, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f18.u32l;
L_80225A94:
    // 0x80225A94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80225A98: nop

    // 0x80225A9C: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
L_80225AA0:
    // 0x80225AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80225AA8: jr          $ra
    // 0x80225AAC: nop

    TRACE_RETURN()
    return;
    // 0x80225AAC: nop

;}
RECOMP_FUNC void func_80228698_692078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228698: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022869C: jr          $ra
    // 0x802286A0: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802286A0: swc1        $f12, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80214368_67DD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214368: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021436C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80214370: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80214374: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x80214378: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8021437C: jr          $ra
    // 0x80214380: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80214380: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021E138_687B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E138: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8021E13C: lhu         $t6, 0x18($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X18);
    // 0x8021E140: addiu       $t8, $t6, -0x4
    ctx->r24 = ADD32(ctx->r14, -0X4);
    // 0x8021E144: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x8021E148: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x8021E14C: jr          $ra
    // 0x8021E150: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x8021E150: sh          $t9, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r25;
;}
RECOMP_FUNC void func_80214384_67DD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214384: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80214388: nop

    // 0x8021438C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80214390: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80214394: jr          $ra
    // 0x80214398: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80214398: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80227A1C_6913FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80227A20: nop

    // 0x80227A24: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80227A28: jr          $ra
    // 0x80227A2C: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x80227A2C: swc1        $f0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_802293FC_692DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80229408: jal         0x80011760
    // 0x8022940C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80011760_12360(rdram, ctx);
        goto after_0;
    // 0x8022940C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80229410: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80229414: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80229418: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022941C: lh          $v1, 0x8C($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8C);
    // 0x80229420: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x80229424: andi        $t6, $v1, 0x4
    ctx->r14 = ctx->r3 & 0X4;
    // 0x80229428: beql        $t6, $zero, L_80229454
    if (ctx->r14 == 0) {
        // 0x8022942C: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_80229454;
    }
    goto skip_0;
    // 0x8022942C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x80229430: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80229434: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80229438: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022943C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80229440: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80229444: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80229448: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x8022944C: lh          $v1, 0x30($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X30);
    // 0x80229450: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
L_80229454:
    // 0x80229454: sh          $t7, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r15;
    // 0x80229458: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x8022945C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229460: ldc1        $f6, -0x4D78($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4D78);
    // 0x80229464: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80229468: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8022946C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80229470: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80229474: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x80229478: jal         0x8001B5AC
    // 0x8022947C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_1;
    // 0x8022947C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80229480: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80229484: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80229488: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8022948C: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80229490: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80229494: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80229498: nop

    // 0x8022949C: bc1fl       L_802294B4
    if (!c1cs) {
        // 0x802294A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802294B4;
    }
    goto skip_1;
    // 0x802294A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x802294A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802294A8: nop

    // 0x802294AC: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x802294B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802294B4:
    // 0x802294B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802294B8: jr          $ra
    // 0x802294BC: nop

    TRACE_RETURN()
    return;
    // 0x802294BC: nop

;}
RECOMP_FUNC void func_8021F998_689378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F998: jr          $ra
    // 0x8021F99C: nop

    TRACE_RETURN()
    return;
    // 0x8021F99C: nop

;}
RECOMP_FUNC void func_8020D998_677378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D998: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8020D99C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8020D9A0: addiu       $t7, $a0, 0x5C
    ctx->r15 = ADD32(ctx->r4, 0X5C);
    // 0x8020D9A4: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8020D9A8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8020D9AC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8020D9B0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x8020D9B4: jal         0x8020D2A0
    // 0x8020D9B8: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    func_8020D2A0_676C80(rdram, ctx);
        goto after_0;
    // 0x8020D9B8: sw          $t7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r15;
    after_0:
    // 0x8020D9BC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020D9C0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x8020D9C4: sltiu       $at, $t9, 0x22
    ctx->r1 = ctx->r25 < 0X22 ? 1 : 0;
    // 0x8020D9C8: beq         $at, $zero, L_80211D38
    if (ctx->r1 == 0) {
        // 0x8020D9CC: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80211D38;
    }
    // 0x8020D9CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8020D9D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020D9D4: addu        $at, $at, $t9
    gpr jr_addend_8020D9DC = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8020D9D8: lw          $t9, -0x5938($at)
    ctx->r25 = ADD32(ctx->r1, -0X5938);
    // 0x8020D9DC: jr          $t9
    // 0x8020D9E0: nop

    switch (jr_addend_8020D9DC >> 2) {
        case 0: goto L_8020D9E4; break;
        case 1: goto L_8020DA0C; break;
        case 2: goto L_8020DA28; break;
        case 3: goto L_8020DB88; break;
        case 4: goto L_8020DC08; break;
        case 5: goto L_8020DCB4; break;
        case 6: goto L_8020DE14; break;
        case 7: goto L_8020DF3C; break;
        case 8: goto L_8020DFC8; break;
        case 9: goto L_8020E064; break;
        case 10: goto L_8020E08C; break;
        case 11: goto L_8020E980; break;
        case 12: goto L_8020ED78; break;
        case 13: goto L_8020EFD4; break;
        case 14: goto L_8020F120; break;
        case 15: goto L_8020F3C4; break;
        case 16: goto L_8020F6C4; break;
        case 17: goto L_8020F6EC; break;
        case 18: goto L_8020F860; break;
        case 19: goto L_8020F8E8; break;
        case 20: goto L_8020F910; break;
        case 21: goto L_8020FB08; break;
        case 22: goto L_8020FCCC; break;
        case 23: goto L_8020FF00; break;
        case 24: goto L_802101A8; break;
        case 25: goto L_80210460; break;
        case 26: goto L_802106BC; break;
        case 27: goto L_80210A44; break;
        case 28: goto L_80210D80; break;
        case 29: goto L_80211180; break;
        case 30: goto L_802113AC; break;
        case 31: goto L_80211820; break;
        case 32: goto L_80211BE4; break;
        case 33: goto L_80211C7C; break;
        default: switch_error(__func__, 0x8020D9DC, 0x8022A6C8);
    }
    // 0x8020D9E0: nop

L_8020D9E4:
    // 0x8020D9E4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020D9E8: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x8020D9EC: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x8020D9F0: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020D9F4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_0;
    // 0x8020D9F4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_0:
    // 0x8020D9F8: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x8020D9FC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8020DA04: b           L_80211D38
    // 0x8020DA08: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80211D38;
    // 0x8020DA08: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_8020DA0C:
    // 0x8020DA0C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DA10: jal         0x801FAB00
    // 0x8020DA14: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    func_801FAB00_5B6A10(rdram, ctx);
        goto after_1;
    // 0x8020DA14: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    after_1:
    // 0x8020DA18: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA1C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8020DA20: b           L_80211D38
    // 0x8020DA24: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
        goto L_80211D38;
    // 0x8020DA24: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
L_8020DA28:
    // 0x8020DA28: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA2C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020DA30: jal         0x8020D4EC
    // 0x8020DA34: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_2;
    // 0x8020DA34: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    after_2:
    // 0x8020DA38: jal         0x801FAD8C
    // 0x8020DA3C: nop

    func_801FAD8C_5B6C9C(rdram, ctx);
        goto after_3;
    // 0x8020DA3C: nop

    after_3:
    // 0x8020DA40: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA44: jal         0x80012938
    // 0x8020DA48: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_4;
    // 0x8020DA48: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_4:
    // 0x8020DA4C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020DA50: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020DA54: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020DA58: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8020DA5C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8020DA60: sw          $v0, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r2;
    // 0x8020DA64: lw          $t1, -0x39D8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39D8);
    // 0x8020DA68: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8020DA6C: jal         0x8020D818
    // 0x8020DA70: sb          $t9, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r25;
    func_8020D818_6771F8(rdram, ctx);
        goto after_5;
    // 0x8020DA70: sb          $t9, 0x64($t1)
    MEM_B(0X64, ctx->r9) = ctx->r25;
    after_5:
    // 0x8020DA74: jal         0x8020D84C
    // 0x8020DA78: nop

    func_8020D84C_67722C(rdram, ctx);
        goto after_6;
    // 0x8020DA78: nop

    after_6:
    // 0x8020DA7C: jal         0x8020D890
    // 0x8020DA80: nop

    func_8020D890_677270(rdram, ctx);
        goto after_7;
    // 0x8020DA80: nop

    after_7:
    // 0x8020DA84: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DA88: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x8020DA8C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020DA90: jal         0x80212684
    // 0x8020DA94: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    func_80212684_67C064(rdram, ctx);
        goto after_8;
    // 0x8020DA94: lui         $a3, 0xC2A0
    ctx->r7 = S32(0XC2A0 << 16);
    after_8:
    // 0x8020DA98: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DA9C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x8020DAA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020DAA4: sw          $v0, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r2;
    // 0x8020DAA8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DAAC: jal         0x80212DA4
    // 0x8020DAB0: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    func_80212DA4_67C784(rdram, ctx);
        goto after_9;
    // 0x8020DAB0: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_9:
    // 0x8020DAB4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DAB8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8020DABC: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x8020DAC0: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8020DAC4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DAC8: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x8020DACC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DAD0: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x8020DAD4: lw          $t6, -0x4CE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4CE0);
    // 0x8020DAD8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020DADC: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x8020DAE0: beq         $at, $zero, L_80211D38
    if (ctx->r1 == 0) {
        // 0x8020DAE4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80211D38;
    }
    // 0x8020DAE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8020DAE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DAEC: addu        $at, $at, $t7
    gpr jr_addend_8020DAF4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8020DAF0: lw          $t7, -0x58B0($at)
    ctx->r15 = ADD32(ctx->r1, -0X58B0);
    // 0x8020DAF4: jr          $t7
    // 0x8020DAF8: nop

    switch (jr_addend_8020DAF4 >> 2) {
        case 0: goto L_8020DAFC; break;
        case 1: goto L_8020DB18; break;
        case 2: goto L_8020DB30; break;
        case 3: goto L_8020DB48; break;
        case 4: goto L_8020DB58; break;
        case 5: goto L_8020DB68; break;
        default: switch_error(__func__, 0x8020DAF4, 0x8022A750);
    }
    // 0x8020DAF8: nop

L_8020DAFC:
    // 0x8020DAFC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB00: addiu       $t8, $zero, 0x1C1
    ctx->r24 = ADD32(0, 0X1C1);
    // 0x8020DB04: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8020DB08: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x8020DB0C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB10: b           L_80211D38
    // 0x8020DB14: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
        goto L_80211D38;
    // 0x8020DB14: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
L_8020DB18:
    // 0x8020DB18: jal         0x8020D8C4
    // 0x8020DB1C: nop

    func_8020D8C4_6772A4(rdram, ctx);
        goto after_10;
    // 0x8020DB1C: nop

    after_10:
    // 0x8020DB20: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB24: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x8020DB28: b           L_80211D38
    // 0x8020DB2C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80211D38;
    // 0x8020DB2C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_8020DB30:
    // 0x8020DB30: jal         0x8020D870
    // 0x8020DB34: nop

    func_8020D870_677250(rdram, ctx);
        goto after_11;
    // 0x8020DB34: nop

    after_11:
    // 0x8020DB38: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB3C: addiu       $t4, $zero, 0x13
    ctx->r12 = ADD32(0, 0X13);
    // 0x8020DB40: b           L_80211D38
    // 0x8020DB44: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
        goto L_80211D38;
    // 0x8020DB44: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
L_8020DB48:
    // 0x8020DB48: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB4C: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x8020DB50: b           L_80211D38
    // 0x8020DB54: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
        goto L_80211D38;
    // 0x8020DB54: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
L_8020DB58:
    // 0x8020DB58: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB5C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x8020DB60: b           L_80211D38
    // 0x8020DB64: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_80211D38;
    // 0x8020DB64: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_8020DB68:
    // 0x8020DB68: jal         0x8020D870
    // 0x8020DB6C: nop

    func_8020D870_677250(rdram, ctx);
        goto after_12;
    // 0x8020DB6C: nop

    after_12:
    // 0x8020DB70: jal         0x8020D84C
    // 0x8020DB74: nop

    func_8020D84C_67722C(rdram, ctx);
        goto after_13;
    // 0x8020DB74: nop

    after_13:
    // 0x8020DB78: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB7C: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x8020DB80: b           L_80211D38
    // 0x8020DB84: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
        goto L_80211D38;
    // 0x8020DB84: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
L_8020DB88:
    // 0x8020DB88: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DB8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020DB90: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x8020DB94: bnel        $t3, $at, L_8020DBB0
    if (ctx->r11 != ctx->r1) {
        // 0x8020DB98: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DBB0;
    }
    goto skip_1;
    // 0x8020DB98: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_1:
    // 0x8020DB9C: jal         0x80038B98
    // 0x8020DBA0: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    func_80038B98_39798(rdram, ctx);
        goto after_14;
    // 0x8020DBA0: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_14:
    // 0x8020DBA4: b           L_80211D3C
    // 0x8020DBA8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020DBA8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DBAC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020DBB0:
    // 0x8020DBB0: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8020DBB4: lh          $t5, 0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X2);
    // 0x8020DBB8: bnel        $t5, $at, L_8020DBE4
    if (ctx->r13 != ctx->r1) {
        // 0x8020DBBC: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DBE4;
    }
    goto skip_2;
    // 0x8020DBBC: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_2:
    // 0x8020DBC0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DBC4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DBC8: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8020DBCC: jal         0x802138E8
    // 0x8020DBD0: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    func_802138E8_67D2C8(rdram, ctx);
        goto after_15;
    // 0x8020DBD0: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    after_15:
    // 0x8020DBD4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DBD8: b           L_80211D38
    // 0x8020DBDC: sw          $v0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r2;
        goto L_80211D38;
    // 0x8020DBDC: sw          $v0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r2;
    // 0x8020DBE0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_8020DBE4:
    // 0x8020DBE4: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x8020DBE8: slti        $at, $t8, 0xD3
    ctx->r1 = SIGNED(ctx->r24) < 0XD3 ? 1 : 0;
    // 0x8020DBEC: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020DBF0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_3;
    // 0x8020DBF0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_3:
    // 0x8020DBF4: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x8020DBF8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DBFC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8020DC00: b           L_80211D38
    // 0x8020DC04: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
        goto L_80211D38;
    // 0x8020DC04: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
L_8020DC08:
    // 0x8020DC08: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC0C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020DC10: jal         0x800124A0
    // 0x8020DC14: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_16;
    // 0x8020DC14: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_16:
    // 0x8020DC18: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC1C: lui         $a1, 0x4548
    ctx->r5 = S32(0X4548 << 16);
    // 0x8020DC20: jal         0x800124AC
    // 0x8020DC24: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_17;
    // 0x8020DC24: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_17:
    // 0x8020DC28: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC2C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020DC30: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020DC34: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020DC38: jal         0x802138C0
    // 0x8020DC3C: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    func_802138C0_67D2A0(rdram, ctx);
        goto after_18;
    // 0x8020DC3C: lw          $a0, 0x1C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1C);
    after_18:
    // 0x8020DC40: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC44: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020DC48: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8020DC4C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020DC50: jal         0x80012628
    // 0x8020DC54: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_19;
    // 0x8020DC54: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_19:
    // 0x8020DC58: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC5C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DC60: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x8020DC64: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x8020DC68: jal         0x80012518
    // 0x8020DC6C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_20;
    // 0x8020DC6C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_20:
    // 0x8020DC70: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DC74: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x8020DC78: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x8020DC7C: bnel        $t8, $at, L_8020DC90
    if (ctx->r24 != ctx->r1) {
        // 0x8020DC80: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DC90;
    }
    goto skip_4;
    // 0x8020DC80: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_4:
    // 0x8020DC84: jal         0x80038B98
    // 0x8020DC88: addiu       $a0, $zero, 0x255
    ctx->r4 = ADD32(0, 0X255);
    func_80038B98_39798(rdram, ctx);
        goto after_21;
    // 0x8020DC88: addiu       $a0, $zero, 0x255
    ctx->r4 = ADD32(0, 0X255);
    after_21:
    // 0x8020DC8C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_8020DC90:
    // 0x8020DC90: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x8020DC94: slti        $at, $t9, 0x169
    ctx->r1 = SIGNED(ctx->r25) < 0X169 ? 1 : 0;
    // 0x8020DC98: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020DC9C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_5;
    // 0x8020DC9C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_5:
    // 0x8020DCA0: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x8020DCA4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DCA8: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x8020DCAC: b           L_80211D38
    // 0x8020DCB0: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
        goto L_80211D38;
    // 0x8020DCB0: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
L_8020DCB4:
    // 0x8020DCB4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DCB8: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x8020DCBC: jal         0x800124A0
    // 0x8020DCC0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_22;
    // 0x8020DCC0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_22:
    // 0x8020DCC4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DCC8: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x8020DCCC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DCD0: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8020DCD4: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x8020DCD8: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8020DCDC: bgez        $t4, L_8020DCEC
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8020DCE0: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_8020DCEC;
    }
    // 0x8020DCE0: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x8020DCE4: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x8020DCE8: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_8020DCEC:
    // 0x8020DCEC: subu        $t8, $t6, $t5
    ctx->r24 = SUB32(ctx->r14, ctx->r13);
    // 0x8020DCF0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8020DCF4: nop

    // 0x8020DCF8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8020DCFC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8020DD00: jal         0x80012628
    // 0x8020DD04: nop

    func_80012628_13228(rdram, ctx);
        goto after_23;
    // 0x8020DD04: nop

    after_23:
    // 0x8020DD08: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD0C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020DD10: jal         0x800124A0
    // 0x8020DD14: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_24;
    // 0x8020DD14: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_24:
    // 0x8020DD18: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD1C: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    // 0x8020DD20: jal         0x800124AC
    // 0x8020DD24: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_25;
    // 0x8020DD24: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_25:
    // 0x8020DD28: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD2C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DD30: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020DD34: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x8020DD38: jal         0x80012518
    // 0x8020DD3C: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_26;
    // 0x8020DD3C: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_26:
    // 0x8020DD40: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD44: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x8020DD48: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x8020DD4C: bnel        $t2, $at, L_8020DD60
    if (ctx->r10 != ctx->r1) {
        // 0x8020DD50: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DD60;
    }
    goto skip_6;
    // 0x8020DD50: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_6:
    // 0x8020DD54: jal         0x80038B98
    // 0x8020DD58: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    func_80038B98_39798(rdram, ctx);
        goto after_27;
    // 0x8020DD58: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    after_27:
    // 0x8020DD5C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_8020DD60:
    // 0x8020DD60: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8020DD64: slti        $at, $t4, 0x14B
    ctx->r1 = SIGNED(ctx->r12) < 0X14B ? 1 : 0;
    // 0x8020DD68: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020DD6C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_7;
    // 0x8020DD6C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_7:
    // 0x8020DD70: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x8020DD74: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD78: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8020DD7C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020DD80: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
    // 0x8020DD84: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD88: jal         0x800124A0
    // 0x8020DD8C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_28;
    // 0x8020DD8C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_28:
    // 0x8020DD90: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DD94: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    // 0x8020DD98: jal         0x800124AC
    // 0x8020DD9C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_29;
    // 0x8020DD9C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_29:
    // 0x8020DDA0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DDA4: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x8020DDA8: jal         0x800124A0
    // 0x8020DDAC: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_30;
    // 0x8020DDAC: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_30:
    // 0x8020DDB0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DDB4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DDB8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020DDBC: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x8020DDC0: jal         0x80012628
    // 0x8020DDC4: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_31;
    // 0x8020DDC4: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_31:
    // 0x8020DDC8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DDCC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DDD0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020DDD4: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x8020DDD8: jal         0x80012518
    // 0x8020DDDC: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_32;
    // 0x8020DDDC: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_32:
    // 0x8020DDE0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DDE4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8020DDE8: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    // 0x8020DDEC: jal         0x80012900
    // 0x8020DDF0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012900_13500(rdram, ctx);
        goto after_33;
    // 0x8020DDF0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_33:
    // 0x8020DDF4: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8020DDF8: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x8020DDFC: lui         $t4, 0x8023
    ctx->r12 = S32(0X8023 << 16);
    // 0x8020DE00: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020DE04: addiu       $t4, $t4, -0x4D40
    ctx->r12 = ADD32(ctx->r12, -0X4D40);
    // 0x8020DE08: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8020DE0C: b           L_80211D38
    // 0x8020DE10: sw          $t4, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r12;
        goto L_80211D38;
    // 0x8020DE10: sw          $t4, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r12;
L_8020DE14:
    // 0x8020DE14: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DE18: lwc1        $f6, -0x4D30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D30);
    // 0x8020DE1C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DE20: ldc1        $f10, -0x5898($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5898);
    // 0x8020DE24: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8020DE28: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DE2C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x8020DE30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DE34: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020DE38: swc1        $f18, -0x4D30($at)
    MEM_W(-0X4D30, ctx->r1) = ctx->f18.u32l;
    // 0x8020DE3C: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x8020DE40: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8020DE44: bnel        $t5, $at, L_8020DF18
    if (ctx->r13 != ctx->r1) {
        // 0x8020DE48: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020DF18;
    }
    goto skip_8;
    // 0x8020DE48: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_8:
    // 0x8020DE4C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x8020DE50: jal         0x800124A0
    // 0x8020DE54: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_34;
    // 0x8020DE54: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_34:
    // 0x8020DE58: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DE5C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DE60: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020DE64: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x8020DE68: jal         0x80012628
    // 0x8020DE6C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_35;
    // 0x8020DE6C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_35:
    // 0x8020DE70: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DE74: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DE78: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020DE7C: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x8020DE80: jal         0x80012518
    // 0x8020DE84: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_36;
    // 0x8020DE84: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_36:
    // 0x8020DE88: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DE8C: jal         0x80034EF8
    // 0x8020DE90: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_37;
    // 0x8020DE90: lw          $a0, 0x1C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C);
    after_37:
    // 0x8020DE94: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DE98: lui         $a3, 0xC393
    ctx->r7 = S32(0XC393 << 16);
    // 0x8020DE9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8020DEA0: sw          $zero, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = 0;
    // 0x8020DEA4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DEA8: lui         $a1, 0x4214
    ctx->r5 = S32(0X4214 << 16);
    // 0x8020DEAC: jal         0x802132D8
    // 0x8020DEB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_802132D8_67CCB8(rdram, ctx);
        goto after_38;
    // 0x8020DEB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_38:
    // 0x8020DEB4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DEB8: lui         $a1, 0xC080
    ctx->r5 = S32(0XC080 << 16);
    // 0x8020DEBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020DEC0: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x8020DEC4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DEC8: jal         0x80213188
    // 0x8020DECC: lui         $a3, 0xC345
    ctx->r7 = S32(0XC345 << 16);
    func_80213188_67CB68(rdram, ctx);
        goto after_39;
    // 0x8020DECC: lui         $a3, 0xC345
    ctx->r7 = S32(0XC345 << 16);
    after_39:
    // 0x8020DED0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DED4: lui         $a1, 0xC000
    ctx->r5 = S32(0XC000 << 16);
    // 0x8020DED8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020DEDC: sw          $v0, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r2;
    // 0x8020DEE0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DEE4: jal         0x80213028
    // 0x8020DEE8: lui         $a3, 0xC313
    ctx->r7 = S32(0XC313 << 16);
    func_80213028_67CA08(rdram, ctx);
        goto after_40;
    // 0x8020DEE8: lui         $a3, 0xC313
    ctx->r7 = S32(0XC313 << 16);
    after_40:
    // 0x8020DEEC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DEF0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x8020DEF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020DEF8: sw          $v0, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r2;
    // 0x8020DEFC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020DF00: jal         0x80213464
    // 0x8020DF04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80213464_67CE44(rdram, ctx);
        goto after_41;
    // 0x8020DF04: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_41:
    // 0x8020DF08: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DF0C: b           L_80211D38
    // 0x8020DF10: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
        goto L_80211D38;
    // 0x8020DF10: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x8020DF14: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020DF18:
    // 0x8020DF18: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x8020DF1C: slti        $at, $t6, 0x12D
    ctx->r1 = SIGNED(ctx->r14) < 0X12D ? 1 : 0;
    // 0x8020DF20: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020DF24: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_9;
    // 0x8020DF24: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_9:
    // 0x8020DF28: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x8020DF2C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DF30: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8020DF34: b           L_80211D38
    // 0x8020DF38: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
        goto L_80211D38;
    // 0x8020DF38: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
L_8020DF3C:
    // 0x8020DF3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DF40: lwc1        $f4, -0x4D30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D30);
    // 0x8020DF44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DF48: ldc1        $f8, -0x5890($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5890);
    // 0x8020DF4C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020DF50: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DF54: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8020DF58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020DF5C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    // 0x8020DF60: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8020DF64: swc1        $f16, -0x4D30($at)
    MEM_W(-0X4D30, ctx->r1) = ctx->f16.u32l;
    // 0x8020DF68: jal         0x800124A0
    // 0x8020DF6C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_42;
    // 0x8020DF6C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_42:
    // 0x8020DF70: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DF74: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DF78: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x8020DF7C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020DF80: jal         0x80012628
    // 0x8020DF84: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_43;
    // 0x8020DF84: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_43:
    // 0x8020DF88: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DF8C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DF90: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020DF94: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x8020DF98: jal         0x80012518
    // 0x8020DF9C: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_44;
    // 0x8020DF9C: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_44:
    // 0x8020DFA0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DFA4: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x8020DFA8: slti        $at, $t4, 0x169
    ctx->r1 = SIGNED(ctx->r12) < 0X169 ? 1 : 0;
    // 0x8020DFAC: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020DFB0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_10;
    // 0x8020DFB0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_10:
    // 0x8020DFB4: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x8020DFB8: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DFBC: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8020DFC0: b           L_80211D38
    // 0x8020DFC4: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
        goto L_80211D38;
    // 0x8020DFC4: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
L_8020DFC8:
    // 0x8020DFC8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DFCC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020DFD0: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x8020DFD4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020DFD8: jal         0x80012628
    // 0x8020DFDC: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_45;
    // 0x8020DFDC: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_45:
    // 0x8020DFE0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DFE4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8020DFE8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020DFEC: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x8020DFF0: jal         0x80012518
    // 0x8020DFF4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_46;
    // 0x8020DFF4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_46:
    // 0x8020DFF8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020DFFC: lh          $t7, 0x2($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X2);
    // 0x8020E000: slti        $at, $t7, 0x51
    ctx->r1 = SIGNED(ctx->r15) < 0X51 ? 1 : 0;
    // 0x8020E004: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020E008: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_11;
    // 0x8020E008: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_11:
    // 0x8020E00C: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x8020E010: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E014: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x8020E018: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x8020E01C: sb          $t1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r9;
    // 0x8020E020: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E024: jal         0x800124A0
    // 0x8020E028: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_47;
    // 0x8020E028: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_47:
    // 0x8020E02C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E030: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020E034: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x8020E038: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020E03C: jal         0x80012628
    // 0x8020E040: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_48;
    // 0x8020E040: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_48:
    // 0x8020E044: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E048: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020E04C: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020E050: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x8020E054: jal         0x80012518
    // 0x8020E058: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_49;
    // 0x8020E058: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_49:
    // 0x8020E05C: b           L_80211D3C
    // 0x8020E060: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020E060: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020E064:
    // 0x8020E064: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E068: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x8020E06C: slti        $at, $t5, 0x12D
    ctx->r1 = SIGNED(ctx->r13) < 0X12D ? 1 : 0;
    // 0x8020E070: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020E074: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_12;
    // 0x8020E074: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_12:
    // 0x8020E078: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x8020E07C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E080: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8020E084: b           L_80211D38
    // 0x8020E088: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
        goto L_80211D38;
    // 0x8020E088: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
L_8020E08C:
    // 0x8020E08C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020E094: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x8020E098: bne         $t1, $at, L_8020E0F4
    if (ctx->r9 != ctx->r1) {
        // 0x8020E09C: lui         $at, 0xC2B4
        ctx->r1 = S32(0XC2B4 << 16);
            goto L_8020E0F4;
    }
    // 0x8020E09C: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x8020E0A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020E0A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E0A8: lwc1        $f4, -0x5888($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5888);
    // 0x8020E0AC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8020E0B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020E0B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8020E0B8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E0BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020E0C0: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x8020E0C4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020E0C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8020E0CC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x8020E0D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8020E0D4: jal         0x802135E4
    // 0x8020E0D8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_802135E4_67CFC4(rdram, ctx);
        goto after_50;
    // 0x8020E0D8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_50:
    // 0x8020E0DC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E0E0: addiu       $a0, $zero, 0x28A
    ctx->r4 = ADD32(0, 0X28A);
    // 0x8020E0E4: jal         0x8003D310
    // 0x8020E0E8: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    func_8003D310_3DF10(rdram, ctx);
        goto after_51;
    // 0x8020E0E8: sw          $v0, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r2;
    after_51:
    // 0x8020E0EC: b           L_8020E6F4
    // 0x8020E0F0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E0F0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E0F4:
    // 0x8020E0F4: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E0F8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8020E0FC: lh          $t2, 0x2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X2);
    // 0x8020E100: bne         $t2, $at, L_8020E180
    if (ctx->r10 != ctx->r1) {
        // 0x8020E104: lui         $at, 0xC2AA
        ctx->r1 = S32(0XC2AA << 16);
            goto L_8020E180;
    }
    // 0x8020E104: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x8020E108: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020E10C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E110: lwc1        $f16, -0x5884($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5884);
    // 0x8020E114: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E118: lwc1        $f18, -0x5880($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5880);
    // 0x8020E11C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8020E120: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020E128: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x8020E12C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020E130: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8020E134: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x8020E138: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x8020E13C: jal         0x802135E4
    // 0x8020E140: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_802135E4_67CFC4(rdram, ctx);
        goto after_52;
    // 0x8020E140: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_52:
    // 0x8020E144: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E148: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020E14C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020E150: sw          $v0, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->r2;
    // 0x8020E154: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E158: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020E15C: jal         0x802122F4
    // 0x8020E160: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_53;
    // 0x8020E160: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_53:
    // 0x8020E164: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E168: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020E16C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8020E170: jal         0x80212F50
    // 0x8020E174: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    func_80212F50_67C930(rdram, ctx);
        goto after_54;
    // 0x8020E174: lw          $a0, 0x28($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X28);
    after_54:
    // 0x8020E178: b           L_8020E6F4
    // 0x8020E17C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E17C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E180:
    // 0x8020E180: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E184: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8020E188: lh          $t7, 0x2($t8)
    ctx->r15 = MEM_H(ctx->r24, 0X2);
    // 0x8020E18C: bne         $t7, $at, L_8020E1A8
    if (ctx->r15 != ctx->r1) {
        // 0x8020E190: addiu       $a0, $zero, 0x26E
        ctx->r4 = ADD32(0, 0X26E);
            goto L_8020E1A8;
    }
    // 0x8020E190: addiu       $a0, $zero, 0x26E
    ctx->r4 = ADD32(0, 0X26E);
    // 0x8020E194: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8020E198: jal         0x80038C30
    // 0x8020E19C: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    func_80038C30_39830(rdram, ctx);
        goto after_55;
    // 0x8020E19C: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    after_55:
    // 0x8020E1A0: b           L_8020E6F4
    // 0x8020E1A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E1A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E1A8:
    // 0x8020E1A8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E1AC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8020E1B0: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x8020E1B4: bne         $t1, $at, L_8020E258
    if (ctx->r9 != ctx->r1) {
        // 0x8020E1B8: lui         $at, 0xC2AA
        ctx->r1 = S32(0XC2AA << 16);
            goto L_8020E258;
    }
    // 0x8020E1B8: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x8020E1BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020E1C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E1C4: lwc1        $f8, -0x587C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X587C);
    // 0x8020E1C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E1CC: lwc1        $f10, -0x5878($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5878);
    // 0x8020E1D0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8020E1D4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E1D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020E1DC: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x8020E1E0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020E1E4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8020E1E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x8020E1EC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x8020E1F0: jal         0x802135E4
    // 0x8020E1F4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_802135E4_67CFC4(rdram, ctx);
        goto after_56;
    // 0x8020E1F4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_56:
    // 0x8020E1F8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E1FC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020E200: sw          $v0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r2;
    // 0x8020E204: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E208: jal         0x800124A0
    // 0x8020E20C: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_57;
    // 0x8020E20C: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_57:
    // 0x8020E210: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E214: lui         $a1, 0x4520
    ctx->r5 = S32(0X4520 << 16);
    // 0x8020E218: jal         0x800124AC
    // 0x8020E21C: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_58;
    // 0x8020E21C: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_58:
    // 0x8020E220: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E224: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020E228: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x8020E22C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020E230: jal         0x80012628
    // 0x8020E234: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_59;
    // 0x8020E234: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_59:
    // 0x8020E238: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E23C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020E240: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020E244: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x8020E248: jal         0x80012518
    // 0x8020E24C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_60;
    // 0x8020E24C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_60:
    // 0x8020E250: b           L_8020E6F4
    // 0x8020E254: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E254: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E258:
    // 0x8020E258: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E25C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8020E260: lh          $t8, 0x2($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X2);
    // 0x8020E264: bnel        $t8, $at, L_8020E2B4
    if (ctx->r24 != ctx->r1) {
        // 0x8020E268: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E2B4;
    }
    goto skip_13;
    // 0x8020E268: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_13:
    // 0x8020E26C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x8020E270: jal         0x802122A4
    // 0x8020E274: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_61;
    // 0x8020E274: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_61:
    // 0x8020E278: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x8020E27C: addiu       $t7, $t7, -0x39FC
    ctx->r15 = ADD32(ctx->r15, -0X39FC);
    // 0x8020E280: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8020E284: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x8020E288: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E28C: jal         0x801DAC7C
    // 0x8020E290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_62;
    // 0x8020E290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_62:
    // 0x8020E294: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E298: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8020E29C: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    // 0x8020E2A0: jal         0x80212440
    // 0x8020E2A4: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_63;
    // 0x8020E2A4: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    after_63:
    // 0x8020E2A8: b           L_8020E6F4
    // 0x8020E2AC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E2AC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E2B0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020E2B4:
    // 0x8020E2B4: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8020E2B8: lh          $t0, 0x2($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2);
    // 0x8020E2BC: bne         $t0, $at, L_8020E300
    if (ctx->r8 != ctx->r1) {
        // 0x8020E2C0: lui         $t4, 0x8020
        ctx->r12 = S32(0X8020 << 16);
            goto L_8020E300;
    }
    // 0x8020E2C0: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x8020E2C4: addiu       $t4, $t4, -0x39FC
    ctx->r12 = ADD32(ctx->r12, -0X39FC);
    // 0x8020E2C8: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x8020E2CC: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x8020E2D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E2D4: jal         0x801DAC7C
    // 0x8020E2D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_64;
    // 0x8020E2D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_64:
    // 0x8020E2DC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E2E0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8020E2E4: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    // 0x8020E2E8: jal         0x80212440
    // 0x8020E2EC: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_65;
    // 0x8020E2EC: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_65:
    // 0x8020E2F0: jal         0x80038B98
    // 0x8020E2F4: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    func_80038B98_39798(rdram, ctx);
        goto after_66;
    // 0x8020E2F4: addiu       $a0, $zero, 0x22F
    ctx->r4 = ADD32(0, 0X22F);
    after_66:
    // 0x8020E2F8: b           L_8020E6F4
    // 0x8020E2FC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E2FC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E300:
    // 0x8020E300: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E304: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8020E308: lh          $t5, 0x2($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X2);
    // 0x8020E30C: bnel        $t5, $at, L_8020E35C
    if (ctx->r13 != ctx->r1) {
        // 0x8020E310: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E35C;
    }
    goto skip_14;
    // 0x8020E310: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_14:
    // 0x8020E314: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    // 0x8020E318: jal         0x802122A4
    // 0x8020E31C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_67;
    // 0x8020E31C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_67:
    // 0x8020E320: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x8020E324: addiu       $t8, $t8, -0x39FC
    ctx->r24 = ADD32(ctx->r24, -0X39FC);
    // 0x8020E328: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8020E32C: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x8020E330: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E334: jal         0x801DAC7C
    // 0x8020E338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_68;
    // 0x8020E338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_68:
    // 0x8020E33C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E340: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020E344: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8020E348: jal         0x80212440
    // 0x8020E34C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_69;
    // 0x8020E34C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    after_69:
    // 0x8020E350: b           L_8020E6F4
    // 0x8020E354: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E354: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E358: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_8020E35C:
    // 0x8020E35C: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x8020E360: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x8020E364: bnel        $t9, $at, L_8020E3AC
    if (ctx->r25 != ctx->r1) {
        // 0x8020E368: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E3AC;
    }
    goto skip_15;
    // 0x8020E368: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_15:
    // 0x8020E36C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x8020E370: jal         0x80212BAC
    // 0x8020E374: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_70;
    // 0x8020E374: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_70:
    // 0x8020E378: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E37C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020E380: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E384: jal         0x80212A04
    // 0x8020E388: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_71;
    // 0x8020E388: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_71:
    // 0x8020E38C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E390: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020E394: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x8020E398: jal         0x80212CBC
    // 0x8020E39C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212CBC_67C69C(rdram, ctx);
        goto after_72;
    // 0x8020E39C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_72:
    // 0x8020E3A0: b           L_8020E6F4
    // 0x8020E3A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E3A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E3A8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020E3AC:
    // 0x8020E3AC: addiu       $at, $zero, 0x6E
    ctx->r1 = ADD32(0, 0X6E);
    // 0x8020E3B0: lh          $t2, 0x2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X2);
    // 0x8020E3B4: bnel        $t2, $at, L_8020E3D8
    if (ctx->r10 != ctx->r1) {
        // 0x8020E3B8: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E3D8;
    }
    goto skip_16;
    // 0x8020E3B8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_16:
    // 0x8020E3BC: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    // 0x8020E3C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020E3C4: jal         0x80212A04
    // 0x8020E3C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_73;
    // 0x8020E3C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_73:
    // 0x8020E3CC: b           L_8020E6F4
    // 0x8020E3D0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E3D0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E3D4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020E3D8:
    // 0x8020E3D8: addiu       $at, $zero, 0xC3
    ctx->r1 = ADD32(0, 0XC3);
    // 0x8020E3DC: lh          $t3, 0x2($t5)
    ctx->r11 = MEM_H(ctx->r13, 0X2);
    // 0x8020E3E0: bnel        $t3, $at, L_8020E478
    if (ctx->r11 != ctx->r1) {
        // 0x8020E3E4: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E478;
    }
    goto skip_17;
    // 0x8020E3E4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_17:
    // 0x8020E3E8: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    // 0x8020E3EC: jal         0x80212BAC
    // 0x8020E3F0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_74;
    // 0x8020E3F0: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_74:
    // 0x8020E3F4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E3F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020E3FC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020E400: jal         0x80212A04
    // 0x8020E404: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_75;
    // 0x8020E404: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_75:
    // 0x8020E408: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E40C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020E410: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8020E414: jal         0x80212CBC
    // 0x8020E418: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212CBC_67C69C(rdram, ctx);
        goto after_76;
    // 0x8020E418: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_76:
    // 0x8020E41C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E420: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020E424: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E428: jal         0x80213D4C
    // 0x8020E42C: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    func_80213D4C_67D72C(rdram, ctx);
        goto after_77;
    // 0x8020E42C: lui         $a3, 0xC2B4
    ctx->r7 = S32(0XC2B4 << 16);
    after_77:
    // 0x8020E430: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E434: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020E438: sw          $v0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->r2;
    // 0x8020E43C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E440: jal         0x80213C84
    // 0x8020E444: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    func_80213C84_67D664(rdram, ctx);
        goto after_78;
    // 0x8020E444: lw          $a0, 0x18($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X18);
    after_78:
    // 0x8020E448: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E44C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020E450: jal         0x80213B8C
    // 0x8020E454: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    func_80213B8C_67D56C(rdram, ctx);
        goto after_79;
    // 0x8020E454: lw          $a0, 0x18($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X18);
    after_79:
    // 0x8020E458: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E45C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020E460: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x8020E464: jal         0x80213C90
    // 0x8020E468: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    func_80213C90_67D670(rdram, ctx);
        goto after_80;
    // 0x8020E468: lw          $a0, 0x18($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X18);
    after_80:
    // 0x8020E46C: b           L_8020E6F4
    // 0x8020E470: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E470: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E474: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_8020E478:
    // 0x8020E478: addiu       $at, $zero, 0x113
    ctx->r1 = ADD32(0, 0X113);
    // 0x8020E47C: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x8020E480: bnel        $t4, $at, L_8020E4BC
    if (ctx->r12 != ctx->r1) {
        // 0x8020E484: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E4BC;
    }
    goto skip_18;
    // 0x8020E484: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_18:
    // 0x8020E488: lw          $a0, 0x18($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X18);
    // 0x8020E48C: jal         0x80213B8C
    // 0x8020E490: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80213B8C_67D56C(rdram, ctx);
        goto after_81;
    // 0x8020E490: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_81:
    // 0x8020E494: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E498: lui         $a1, 0x420C
    ctx->r5 = S32(0X420C << 16);
    // 0x8020E49C: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x8020E4A0: jal         0x80213C90
    // 0x8020E4A4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    func_80213C90_67D670(rdram, ctx);
        goto after_82;
    // 0x8020E4A4: lw          $a0, 0x18($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X18);
    after_82:
    // 0x8020E4A8: jal         0x8003D310
    // 0x8020E4AC: addiu       $a0, $zero, 0x28B
    ctx->r4 = ADD32(0, 0X28B);
    func_8003D310_3DF10(rdram, ctx);
        goto after_83;
    // 0x8020E4AC: addiu       $a0, $zero, 0x28B
    ctx->r4 = ADD32(0, 0X28B);
    after_83:
    // 0x8020E4B0: b           L_8020E6F4
    // 0x8020E4B4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
        goto L_8020E6F4;
    // 0x8020E4B4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E4B8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020E4BC:
    // 0x8020E4BC: addiu       $at, $zero, 0x1C2
    ctx->r1 = ADD32(0, 0X1C2);
    // 0x8020E4C0: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x8020E4C4: bnel        $t8, $at, L_8020E6F4
    if (ctx->r24 != ctx->r1) {
        // 0x8020E4C8: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E6F4;
    }
    goto skip_19;
    // 0x8020E4C8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_19:
    // 0x8020E4CC: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x8020E4D0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E4D4: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8020E4D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8020E4DC: jal         0x8003F5FC
    // 0x8020E4E0: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    func_8003F5FC_401FC(rdram, ctx);
        goto after_84;
    // 0x8020E4E0: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    after_84:
    // 0x8020E4E4: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_8020E4E8:
    // 0x8020E4E8: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8020E4EC: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E4F0: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x8020E4F4: addu        $t4, $t7, $t0
    ctx->r12 = ADD32(ctx->r15, ctx->r8);
    // 0x8020E4F8: lw          $t2, 0x20($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X20);
    // 0x8020E4FC: beql        $t2, $zero, L_8020E524
    if (ctx->r10 == 0) {
        // 0x8020E500: lw          $t9, 0x74($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X74);
            goto L_8020E524;
    }
    goto skip_20;
    // 0x8020E500: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    skip_20:
    // 0x8020E504: jal         0x80034EF8
    // 0x8020E508: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_85;
    // 0x8020E508: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_85:
    // 0x8020E50C: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8020E510: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E514: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x8020E518: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8020E51C: sw          $zero, 0x20($t6)
    MEM_W(0X20, ctx->r14) = 0;
    // 0x8020E520: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_8020E524:
    // 0x8020E524: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8020E528: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8020E52C: bne         $at, $zero, L_8020E4E8
    if (ctx->r1 != 0) {
        // 0x8020E530: sw          $t1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r9;
            goto L_8020E4E8;
    }
    // 0x8020E530: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8020E534: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_8020E538:
    // 0x8020E538: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x8020E53C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E540: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x8020E544: addu        $t2, $t7, $t4
    ctx->r10 = ADD32(ctx->r15, ctx->r12);
    // 0x8020E548: lw          $t8, 0x30($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X30);
    // 0x8020E54C: beql        $t8, $zero, L_8020E574
    if (ctx->r24 == 0) {
        // 0x8020E550: lw          $t1, 0x74($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X74);
            goto L_8020E574;
    }
    goto skip_21;
    // 0x8020E550: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    skip_21:
    // 0x8020E554: jal         0x80034EF8
    // 0x8020E558: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_86;
    // 0x8020E558: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_86:
    // 0x8020E55C: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x8020E560: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E564: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8020E568: addu        $t9, $t3, $t6
    ctx->r25 = ADD32(ctx->r11, ctx->r14);
    // 0x8020E56C: sw          $zero, 0x30($t9)
    MEM_W(0X30, ctx->r25) = 0;
    // 0x8020E570: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
L_8020E574:
    // 0x8020E574: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8020E578: slti        $at, $t0, 0x3
    ctx->r1 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8020E57C: bne         $at, $zero, L_8020E538
    if (ctx->r1 != 0) {
        // 0x8020E580: sw          $t0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r8;
            goto L_8020E538;
    }
    // 0x8020E580: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x8020E584: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E588: lw          $t4, 0x18($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X18);
    // 0x8020E58C: beq         $t4, $zero, L_8020E5A4
    if (ctx->r12 == 0) {
        // 0x8020E590: nop
    
            goto L_8020E5A4;
    }
    // 0x8020E590: nop

    // 0x8020E594: jal         0x80034EF8
    // 0x8020E598: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_87;
    // 0x8020E598: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_87:
    // 0x8020E59C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5A0: sw          $zero, 0x18($t2)
    MEM_W(0X18, ctx->r10) = 0;
L_8020E5A4:
    // 0x8020E5A4: jal         0x80214688
    // 0x8020E5A8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    func_80214688_67E068(rdram, ctx);
        goto after_88;
    // 0x8020E5A8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    after_88:
    // 0x8020E5AC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5B0: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x8020E5B4: sw          $v0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r2;
    // 0x8020E5B8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5BC: jal         0x80012500
    // 0x8020E5C0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_89;
    // 0x8020E5C0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_89:
    // 0x8020E5C4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5C8: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    // 0x8020E5CC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020E5D0: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x8020E5D4: jal         0x800127B8
    // 0x8020E5D8: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_90;
    // 0x8020E5D8: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_90:
    // 0x8020E5DC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5E0: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x8020E5E4: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x8020E5E8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020E5EC: jal         0x80012818
    // 0x8020E5F0: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_91;
    // 0x8020E5F0: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_91:
    // 0x8020E5F4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E5F8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020E5FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E600: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020E604: jal         0x802122D4
    // 0x8020E608: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_92;
    // 0x8020E608: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    after_92:
    // 0x8020E60C: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8020E610: addiu       $t1, $t1, -0x39FC
    ctx->r9 = ADD32(ctx->r9, -0X39FC);
    // 0x8020E614: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x8020E618: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x8020E61C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E620: jal         0x801DAC7C
    // 0x8020E624: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_93;
    // 0x8020E624: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_93:
    // 0x8020E628: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E62C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020E630: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E634: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x8020E638: jal         0x80212BB8
    // 0x8020E63C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BB8_67C598(rdram, ctx);
        goto after_94;
    // 0x8020E63C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_94:
    // 0x8020E640: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E644: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020E648: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020E64C: jal         0x80212A04
    // 0x8020E650: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_95;
    // 0x8020E650: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_95:
    // 0x8020E654: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E658: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8020E65C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020E660: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x8020E664: jal         0x800133E0
    // 0x8020E668: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_96;
    // 0x8020E668: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    after_96:
    // 0x8020E66C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E670: jal         0x80012938
    // 0x8020E674: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_97;
    // 0x8020E674: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_97:
    // 0x8020E678: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8020E67C: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x8020E680: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8020E684: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8020E688: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8020E68C: sw          $v0, -0x51E4($at)
    MEM_W(-0X51E4, ctx->r1) = ctx->r2;
    // 0x8020E690: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E694: jal         0x802122A4
    // 0x8020E698: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_98;
    // 0x8020E698: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_98:
    // 0x8020E69C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E6A0: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x8020E6A4: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020E6A8: jal         0x80212440
    // 0x8020E6AC: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_99;
    // 0x8020E6AC: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_99:
    // 0x8020E6B0: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E6B4: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8020E6B8: jal         0x800124A0
    // 0x8020E6BC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_100;
    // 0x8020E6BC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_100:
    // 0x8020E6C0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E6C4: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x8020E6C8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020E6CC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x8020E6D0: jal         0x80012518
    // 0x8020E6D4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_101;
    // 0x8020E6D4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_101:
    // 0x8020E6D8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E6DC: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020E6E0: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x8020E6E4: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020E6E8: jal         0x80012628
    // 0x8020E6EC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_102;
    // 0x8020E6EC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_102:
    // 0x8020E6F0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020E6F4:
    // 0x8020E6F4: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x8020E6F8: slti        $at, $t7, 0x64
    ctx->r1 = SIGNED(ctx->r15) < 0X64 ? 1 : 0;
    // 0x8020E6FC: bne         $at, $zero, L_8020E7BC
    if (ctx->r1 != 0) {
        // 0x8020E700: slti        $at, $t7, 0xC9
        ctx->r1 = SIGNED(ctx->r15) < 0XC9 ? 1 : 0;
            goto L_8020E7BC;
    }
    // 0x8020E700: slti        $at, $t7, 0xC9
    ctx->r1 = SIGNED(ctx->r15) < 0XC9 ? 1 : 0;
    // 0x8020E704: beq         $at, $zero, L_8020E7BC
    if (ctx->r1 == 0) {
        // 0x8020E708: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8020E7BC;
    }
    // 0x8020E708: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8020E70C: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8020E710: mfhi        $t4
    ctx->r12 = hi;
    // 0x8020E714: bnel        $t4, $zero, L_8020E7C0
    if (ctx->r12 != 0) {
        // 0x8020E718: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E7C0;
    }
    goto skip_22;
    // 0x8020E718: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_22:
    // 0x8020E71C: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x8020E720: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020E724: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020E728: jal         0x802122F4
    // 0x8020E72C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_103;
    // 0x8020E72C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_103:
    // 0x8020E730: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8020E734: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020E738: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020E73C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E740: lwc1        $f8, -0x5874($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5874);
    // 0x8020E744: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8020E748: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8020E74C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8020E750: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8020E754: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020E758: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8020E75C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8020E760: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8020E764: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8020E768: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8020E76C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8020E770: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8020E774: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E778: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020E77C: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020E780: jal         0x80216B30
    // 0x8020E784: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_104;
    // 0x8020E784: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_104:
    // 0x8020E788: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8020E78C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E790: jal         0x8021689C
    // 0x8020E794: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_105;
    // 0x8020E794: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_105:
    // 0x8020E798: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020E79C: jal         0x802168A8
    // 0x8020E7A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_106;
    // 0x8020E7A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_106:
    // 0x8020E7A4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020E7A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020E7AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020E7B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020E7B4: jal         0x802169BC
    // 0x8020E7B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_107;
    // 0x8020E7B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_107:
L_8020E7BC:
    // 0x8020E7BC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020E7C0:
    // 0x8020E7C0: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x8020E7C4: slti        $at, $t1, 0xC3
    ctx->r1 = SIGNED(ctx->r9) < 0XC3 ? 1 : 0;
    // 0x8020E7C8: bne         $at, $zero, L_8020E888
    if (ctx->r1 != 0) {
        // 0x8020E7CC: slti        $at, $t1, 0x128
        ctx->r1 = SIGNED(ctx->r9) < 0X128 ? 1 : 0;
            goto L_8020E888;
    }
    // 0x8020E7CC: slti        $at, $t1, 0x128
    ctx->r1 = SIGNED(ctx->r9) < 0X128 ? 1 : 0;
    // 0x8020E7D0: beq         $at, $zero, L_8020E888
    if (ctx->r1 == 0) {
        // 0x8020E7D4: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8020E888;
    }
    // 0x8020E7D4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8020E7D8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8020E7DC: mfhi        $t7
    ctx->r15 = hi;
    // 0x8020E7E0: bnel        $t7, $zero, L_8020E88C
    if (ctx->r15 != 0) {
        // 0x8020E7E4: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E88C;
    }
    goto skip_23;
    // 0x8020E7E4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_23:
    // 0x8020E7E8: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x8020E7EC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020E7F0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020E7F4: jal         0x80212BD8
    // 0x8020E7F8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_108;
    // 0x8020E7F8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_108:
    // 0x8020E7FC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8020E800: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020E804: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020E808: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020E80C: lwc1        $f4, -0x5870($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5870);
    // 0x8020E810: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020E814: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8020E818: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8020E81C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8020E820: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8020E824: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8020E828: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8020E82C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8020E830: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8020E834: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8020E838: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8020E83C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8020E840: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020E844: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020E848: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020E84C: jal         0x80216B30
    // 0x8020E850: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_109;
    // 0x8020E850: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_109:
    // 0x8020E854: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8020E858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020E85C: jal         0x8021689C
    // 0x8020E860: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_110;
    // 0x8020E860: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_110:
    // 0x8020E864: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020E868: jal         0x802168A8
    // 0x8020E86C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_111;
    // 0x8020E86C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_111:
    // 0x8020E870: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020E874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020E878: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020E87C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020E880: jal         0x802169BC
    // 0x8020E884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_112;
    // 0x8020E884: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_112:
L_8020E888:
    // 0x8020E888: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_8020E88C:
    // 0x8020E88C: lh          $t6, 0x2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X2);
    // 0x8020E890: slti        $at, $t6, 0x64
    ctx->r1 = SIGNED(ctx->r14) < 0X64 ? 1 : 0;
    // 0x8020E894: bne         $at, $zero, L_8020E900
    if (ctx->r1 != 0) {
        // 0x8020E898: slti        $at, $t6, 0xC9
        ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
            goto L_8020E900;
    }
    // 0x8020E898: slti        $at, $t6, 0xC9
    ctx->r1 = SIGNED(ctx->r14) < 0XC9 ? 1 : 0;
    // 0x8020E89C: beq         $at, $zero, L_8020E900
    if (ctx->r1 == 0) {
        // 0x8020E8A0: addiu       $t1, $t6, -0x64
        ctx->r9 = ADD32(ctx->r14, -0X64);
            goto L_8020E900;
    }
    // 0x8020E8A0: addiu       $t1, $t6, -0x64
    ctx->r9 = ADD32(ctx->r14, -0X64);
    // 0x8020E8A4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8020E8A8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8020E8AC: mfhi        $t7
    ctx->r15 = hi;
    // 0x8020E8B0: bnel        $t7, $zero, L_8020E904
    if (ctx->r15 != 0) {
        // 0x8020E8B4: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E904;
    }
    goto skip_24;
    // 0x8020E8B4: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_24:
    // 0x8020E8B8: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    // 0x8020E8BC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020E8C0: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020E8C4: jal         0x802122F4
    // 0x8020E8C8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_113;
    // 0x8020E8C8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_113:
    // 0x8020E8CC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E8D0: jal         0x80012938
    // 0x8020E8D4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_114;
    // 0x8020E8D4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_114:
    // 0x8020E8D8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8020E8DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020E8E0: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020E8E4: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x8020E8E8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020E8EC: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8020E8F0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8020E8F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8020E8F8: jal         0x8000F6E8
    // 0x8020E8FC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_115;
    // 0x8020E8FC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_115:
L_8020E900:
    // 0x8020E900: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020E904:
    // 0x8020E904: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x8020E908: slti        $at, $t0, 0xC3
    ctx->r1 = SIGNED(ctx->r8) < 0XC3 ? 1 : 0;
    // 0x8020E90C: bne         $at, $zero, L_80211D38
    if (ctx->r1 != 0) {
        // 0x8020E910: slti        $at, $t0, 0x128
        ctx->r1 = SIGNED(ctx->r8) < 0X128 ? 1 : 0;
            goto L_80211D38;
    }
    // 0x8020E910: slti        $at, $t0, 0x128
    ctx->r1 = SIGNED(ctx->r8) < 0X128 ? 1 : 0;
    // 0x8020E914: beq         $at, $zero, L_80211D38
    if (ctx->r1 == 0) {
        // 0x8020E918: addiu       $t2, $t0, -0xC3
        ctx->r10 = ADD32(ctx->r8, -0XC3);
            goto L_80211D38;
    }
    // 0x8020E918: addiu       $t2, $t0, -0xC3
    ctx->r10 = ADD32(ctx->r8, -0XC3);
    // 0x8020E91C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8020E920: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8020E924: mfhi        $t8
    ctx->r24 = hi;
    // 0x8020E928: bnel        $t8, $zero, L_80211D3C
    if (ctx->r24 != 0) {
        // 0x8020E92C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_25;
    // 0x8020E92C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_25:
    // 0x8020E930: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    // 0x8020E934: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020E938: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020E93C: jal         0x80212BD8
    // 0x8020E940: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_116;
    // 0x8020E940: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_116:
    // 0x8020E944: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E948: jal         0x80012938
    // 0x8020E94C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_117;
    // 0x8020E94C: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_117:
    // 0x8020E950: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8020E954: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020E958: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020E95C: addiu       $a0, $zero, 0x219
    ctx->r4 = ADD32(0, 0X219);
    // 0x8020E960: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020E964: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8020E968: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8020E96C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8020E970: jal         0x8000F6E8
    // 0x8020E974: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_118;
    // 0x8020E974: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_118:
    // 0x8020E978: b           L_80211D3C
    // 0x8020E97C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020E97C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020E980:
    // 0x8020E980: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E984: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8020E988: lh          $t1, 0x2($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X2);
    // 0x8020E98C: bnel        $t1, $at, L_8020E9C0
    if (ctx->r9 != ctx->r1) {
        // 0x8020E990: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_8020E9C0;
    }
    goto skip_26;
    // 0x8020E990: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_26:
    // 0x8020E994: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x8020E998: jal         0x80212BAC
    // 0x8020E99C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_119;
    // 0x8020E99C: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_119:
    // 0x8020E9A0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E9A4: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020E9A8: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8020E9AC: jal         0x80212CBC
    // 0x8020E9B0: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_80212CBC_67C69C(rdram, ctx);
        goto after_120;
    // 0x8020E9B0: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_120:
    // 0x8020E9B4: b           L_8020EB6C
    // 0x8020E9B8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020E9B8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E9BC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_8020E9C0:
    // 0x8020E9C0: addiu       $at, $zero, 0x140
    ctx->r1 = ADD32(0, 0X140);
    // 0x8020E9C4: lh          $t9, 0x2($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X2);
    // 0x8020E9C8: bnel        $t9, $at, L_8020EA08
    if (ctx->r25 != ctx->r1) {
        // 0x8020E9CC: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EA08;
    }
    goto skip_27;
    // 0x8020E9CC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_27:
    // 0x8020E9D0: jal         0x80038B98
    // 0x8020E9D4: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    func_80038B98_39798(rdram, ctx);
        goto after_121;
    // 0x8020E9D4: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    after_121:
    // 0x8020E9D8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E9DC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020E9E0: jal         0x80212BAC
    // 0x8020E9E4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_122;
    // 0x8020E9E4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_122:
    // 0x8020E9E8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020E9EC: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020E9F0: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8020E9F4: jal         0x80212CBC
    // 0x8020E9F8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    func_80212CBC_67C69C(rdram, ctx);
        goto after_123;
    // 0x8020E9F8: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    after_123:
    // 0x8020E9FC: b           L_8020EB6C
    // 0x8020EA00: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020EA00: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA04: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_8020EA08:
    // 0x8020EA08: addiu       $at, $zero, 0x15E
    ctx->r1 = ADD32(0, 0X15E);
    // 0x8020EA0C: lh          $t4, 0x2($t8)
    ctx->r12 = MEM_H(ctx->r24, 0X2);
    // 0x8020EA10: bnel        $t4, $at, L_8020EA58
    if (ctx->r12 != ctx->r1) {
        // 0x8020EA14: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EA58;
    }
    goto skip_28;
    // 0x8020EA14: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_28:
    // 0x8020EA18: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8020EA1C: jal         0x80212BAC
    // 0x8020EA20: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_124;
    // 0x8020EA20: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_124:
    // 0x8020EA24: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA28: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020EA2C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8020EA30: jal         0x80212CBC
    // 0x8020EA34: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_80212CBC_67C69C(rdram, ctx);
        goto after_125;
    // 0x8020EA34: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_125:
    // 0x8020EA38: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA3C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8020EA40: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020EA44: jal         0x80212A04
    // 0x8020EA48: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_126;
    // 0x8020EA48: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_126:
    // 0x8020EA4C: b           L_8020EB6C
    // 0x8020EA50: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020EA50: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA54: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_8020EA58:
    // 0x8020EA58: addiu       $at, $zero, 0x118
    ctx->r1 = ADD32(0, 0X118);
    // 0x8020EA5C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8020EA60: bnel        $t7, $at, L_8020EABC
    if (ctx->r15 != ctx->r1) {
        // 0x8020EA64: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EABC;
    }
    goto skip_29;
    // 0x8020EA64: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_29:
    // 0x8020EA68: jal         0x80038B98
    // 0x8020EA6C: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    func_80038B98_39798(rdram, ctx);
        goto after_127;
    // 0x8020EA6C: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    after_127:
    // 0x8020EA70: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA74: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020EA78: jal         0x802122A4
    // 0x8020EA7C: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_128;
    // 0x8020EA7C: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_128:
    // 0x8020EA80: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EA84: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x8020EA88: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020EA8C: jal         0x80212440
    // 0x8020EA90: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_129;
    // 0x8020EA90: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    after_129:
    // 0x8020EA94: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8020EA98: addiu       $t0, $t0, -0x39FC
    ctx->r8 = ADD32(ctx->r8, -0X39FC);
    // 0x8020EA9C: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8020EAA0: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x8020EAA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020EAA8: jal         0x801DAC7C
    // 0x8020EAAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_130;
    // 0x8020EAAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_130:
    // 0x8020EAB0: b           L_8020EB6C
    // 0x8020EAB4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020EAB4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EAB8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_8020EABC:
    // 0x8020EABC: addiu       $at, $zero, 0x136
    ctx->r1 = ADD32(0, 0X136);
    // 0x8020EAC0: lh          $t4, 0x2($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X2);
    // 0x8020EAC4: bnel        $t4, $at, L_8020EB14
    if (ctx->r12 != ctx->r1) {
        // 0x8020EAC8: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EB14;
    }
    goto skip_30;
    // 0x8020EAC8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_30:
    // 0x8020EACC: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x8020EAD0: jal         0x802122A4
    // 0x8020EAD4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_131;
    // 0x8020EAD4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_131:
    // 0x8020EAD8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EADC: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x8020EAE0: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020EAE4: jal         0x80212440
    // 0x8020EAE8: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_132;
    // 0x8020EAE8: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    after_132:
    // 0x8020EAEC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x8020EAF0: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x8020EAF4: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x8020EAF8: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x8020EAFC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020EB00: jal         0x801DAC7C
    // 0x8020EB04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_133;
    // 0x8020EB04: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_133:
    // 0x8020EB08: b           L_8020EB6C
    // 0x8020EB0C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020EB0C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EB10: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020EB14:
    // 0x8020EB14: addiu       $at, $zero, 0x154
    ctx->r1 = ADD32(0, 0X154);
    // 0x8020EB18: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8020EB1C: bne         $t6, $at, L_8020EB44
    if (ctx->r14 != ctx->r1) {
        // 0x8020EB20: lui         $t7, 0x8020
        ctx->r15 = S32(0X8020 << 16);
            goto L_8020EB44;
    }
    // 0x8020EB20: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x8020EB24: addiu       $t7, $t7, -0x39FC
    ctx->r15 = ADD32(ctx->r15, -0X39FC);
    // 0x8020EB28: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8020EB2C: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x8020EB30: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020EB34: jal         0x801DAC7C
    // 0x8020EB38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_134;
    // 0x8020EB38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_134:
    // 0x8020EB3C: b           L_8020EB6C
    // 0x8020EB40: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
        goto L_8020EB6C;
    // 0x8020EB40: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_8020EB44:
    // 0x8020EB44: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EB48: lh          $t9, 0x2($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X2);
    // 0x8020EB4C: slti        $at, $t9, 0x169
    ctx->r1 = SIGNED(ctx->r25) < 0X169 ? 1 : 0;
    // 0x8020EB50: bnel        $at, $zero, L_8020EB6C
    if (ctx->r1 != 0) {
        // 0x8020EB54: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EB6C;
    }
    goto skip_31;
    // 0x8020EB54: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_31:
    // 0x8020EB58: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x8020EB5C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EB60: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x8020EB64: sb          $t0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r8;
    // 0x8020EB68: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_8020EB6C:
    // 0x8020EB6C: lh          $t8, 0x2($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X2);
    // 0x8020EB70: slti        $at, $t8, 0x104
    ctx->r1 = SIGNED(ctx->r24) < 0X104 ? 1 : 0;
    // 0x8020EB74: bne         $at, $zero, L_8020EC34
    if (ctx->r1 != 0) {
        // 0x8020EB78: slti        $at, $t8, 0x12D
        ctx->r1 = SIGNED(ctx->r24) < 0X12D ? 1 : 0;
            goto L_8020EC34;
    }
    // 0x8020EB78: slti        $at, $t8, 0x12D
    ctx->r1 = SIGNED(ctx->r24) < 0X12D ? 1 : 0;
    // 0x8020EB7C: beq         $at, $zero, L_8020EC34
    if (ctx->r1 == 0) {
        // 0x8020EB80: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8020EC34;
    }
    // 0x8020EB80: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8020EB84: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8020EB88: mfhi        $t5
    ctx->r13 = hi;
    // 0x8020EB8C: bnel        $t5, $zero, L_8020EC38
    if (ctx->r13 != 0) {
        // 0x8020EB90: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EC38;
    }
    goto skip_32;
    // 0x8020EB90: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_32:
    // 0x8020EB94: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x8020EB98: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020EB9C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020EBA0: jal         0x802122F4
    // 0x8020EBA4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_135;
    // 0x8020EBA4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_135:
    // 0x8020EBA8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EBAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EBB0: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020EBB4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020EBB8: lwc1        $f8, -0x586C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X586C);
    // 0x8020EBBC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8020EBC0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8020EBC4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8020EBC8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8020EBCC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020EBD0: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8020EBD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8020EBD8: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8020EBDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8020EBE0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8020EBE4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8020EBE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8020EBEC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020EBF0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020EBF4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020EBF8: jal         0x80216B30
    // 0x8020EBFC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_136;
    // 0x8020EBFC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_136:
    // 0x8020EC00: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8020EC04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020EC08: jal         0x8021689C
    // 0x8020EC0C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_137;
    // 0x8020EC0C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_137:
    // 0x8020EC10: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020EC14: jal         0x802168A8
    // 0x8020EC18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_138;
    // 0x8020EC18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_138:
    // 0x8020EC1C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020EC20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020EC24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020EC28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020EC2C: jal         0x802169BC
    // 0x8020EC30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_139;
    // 0x8020EC30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_139:
L_8020EC34:
    // 0x8020EC34: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020EC38:
    // 0x8020EC38: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x8020EC3C: slti        $at, $t4, 0x12C
    ctx->r1 = SIGNED(ctx->r12) < 0X12C ? 1 : 0;
    // 0x8020EC40: bne         $at, $zero, L_8020ED00
    if (ctx->r1 != 0) {
        // 0x8020EC44: slti        $at, $t4, 0x155
        ctx->r1 = SIGNED(ctx->r12) < 0X155 ? 1 : 0;
            goto L_8020ED00;
    }
    // 0x8020EC44: slti        $at, $t4, 0x155
    ctx->r1 = SIGNED(ctx->r12) < 0X155 ? 1 : 0;
    // 0x8020EC48: beq         $at, $zero, L_8020ED00
    if (ctx->r1 == 0) {
        // 0x8020EC4C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_8020ED00;
    }
    // 0x8020EC4C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8020EC50: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8020EC54: mfhi        $t8
    ctx->r24 = hi;
    // 0x8020EC58: bnel        $t8, $zero, L_8020ED04
    if (ctx->r24 != 0) {
        // 0x8020EC5C: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_8020ED04;
    }
    goto skip_33;
    // 0x8020EC5C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_33:
    // 0x8020EC60: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8020EC64: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020EC68: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020EC6C: jal         0x80212BD8
    // 0x8020EC70: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_140;
    // 0x8020EC70: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_140:
    // 0x8020EC74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EC78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020EC7C: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020EC80: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020EC84: lwc1        $f4, -0x5868($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5868);
    // 0x8020EC88: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020EC8C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8020EC90: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8020EC94: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8020EC98: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8020EC9C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8020ECA0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8020ECA4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8020ECA8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8020ECAC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8020ECB0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8020ECB4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8020ECB8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020ECBC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020ECC0: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020ECC4: jal         0x80216B30
    // 0x8020ECC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_141;
    // 0x8020ECC8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_141:
    // 0x8020ECCC: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8020ECD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020ECD4: jal         0x8021689C
    // 0x8020ECD8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_142;
    // 0x8020ECD8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_142:
    // 0x8020ECDC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020ECE0: jal         0x802168A8
    // 0x8020ECE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_143;
    // 0x8020ECE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_143:
    // 0x8020ECE8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8020ECEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020ECF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020ECF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020ECF8: jal         0x802169BC
    // 0x8020ECFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_144;
    // 0x8020ECFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_144:
L_8020ED00:
    // 0x8020ED00: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020ED04:
    // 0x8020ED04: lh          $t3, 0x2($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X2);
    // 0x8020ED08: bltz        $t3, L_80211D38
    if (SIGNED(ctx->r11) < 0) {
        // 0x8020ED0C: slti        $at, $t3, 0x12D
        ctx->r1 = SIGNED(ctx->r11) < 0X12D ? 1 : 0;
            goto L_80211D38;
    }
    // 0x8020ED0C: slti        $at, $t3, 0x12D
    ctx->r1 = SIGNED(ctx->r11) < 0X12D ? 1 : 0;
    // 0x8020ED10: beq         $at, $zero, L_80211D38
    if (ctx->r1 == 0) {
        // 0x8020ED14: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80211D38;
    }
    // 0x8020ED14: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8020ED18: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x8020ED1C: mfhi        $t4
    ctx->r12 = hi;
    // 0x8020ED20: bnel        $t4, $zero, L_80211D3C
    if (ctx->r12 != 0) {
        // 0x8020ED24: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_34;
    // 0x8020ED24: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_34:
    // 0x8020ED28: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x8020ED2C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020ED30: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020ED34: jal         0x802122F4
    // 0x8020ED38: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_145;
    // 0x8020ED38: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_145:
    // 0x8020ED3C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020ED40: jal         0x80012938
    // 0x8020ED44: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_146;
    // 0x8020ED44: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_146:
    // 0x8020ED48: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x8020ED4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020ED50: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020ED54: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x8020ED58: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8020ED5C: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x8020ED60: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x8020ED64: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x8020ED68: jal         0x8000F6E8
    // 0x8020ED6C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_147;
    // 0x8020ED6C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_147:
    // 0x8020ED70: b           L_80211D3C
    // 0x8020ED74: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020ED74: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020ED78:
    // 0x8020ED78: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020ED7C: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8020ED80: lh          $t5, 0x2($t0)
    ctx->r13 = MEM_H(ctx->r8, 0X2);
    // 0x8020ED84: bnel        $t5, $at, L_8020EDF4
    if (ctx->r13 != ctx->r1) {
        // 0x8020ED88: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EDF4;
    }
    goto skip_35;
    // 0x8020ED88: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_35:
    // 0x8020ED8C: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8020ED90: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020ED94: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020ED98: jal         0x80212BD8
    // 0x8020ED9C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_148;
    // 0x8020ED9C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_148:
    // 0x8020EDA0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EDA4: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020EDA8: jal         0x802122A4
    // 0x8020EDAC: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_149;
    // 0x8020EDAC: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_149:
    // 0x8020EDB0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EDB4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020EDB8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8020EDBC: jal         0x80212324
    // 0x8020EDC0: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_80212324_67BD04(rdram, ctx);
        goto after_150;
    // 0x8020EDC0: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_150:
    // 0x8020EDC4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x8020EDC8: addiu       $t6, $t6, -0x39FC
    ctx->r14 = ADD32(ctx->r14, -0X39FC);
    // 0x8020EDCC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8020EDD0: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x8020EDD4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020EDD8: jal         0x801DAC7C
    // 0x8020EDDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_151;
    // 0x8020EDDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_151:
    // 0x8020EDE0: jal         0x8003D310
    // 0x8020EDE4: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    func_8003D310_3DF10(rdram, ctx);
        goto after_152;
    // 0x8020EDE4: addiu       $a0, $zero, 0x28C
    ctx->r4 = ADD32(0, 0X28C);
    after_152:
    // 0x8020EDE8: b           L_80211D3C
    // 0x8020EDEC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020EDEC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EDF0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_8020EDF4:
    // 0x8020EDF4: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x8020EDF8: lh          $t3, 0x2($t7)
    ctx->r11 = MEM_H(ctx->r15, 0X2);
    // 0x8020EDFC: bnel        $t3, $at, L_8020EE5C
    if (ctx->r11 != ctx->r1) {
        // 0x8020EE00: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020EE5C;
    }
    goto skip_36;
    // 0x8020EE00: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_36:
    // 0x8020EE04: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x8020EE08: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020EE0C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020EE10: jal         0x802122F4
    // 0x8020EE14: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_153;
    // 0x8020EE14: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_153:
    // 0x8020EE18: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EE1C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8020EE20: jal         0x80212BAC
    // 0x8020EE24: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_154;
    // 0x8020EE24: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    after_154:
    // 0x8020EE28: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EE2C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020EE30: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020EE34: jal         0x80212A04
    // 0x8020EE38: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_155;
    // 0x8020EE38: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_155:
    // 0x8020EE3C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EE40: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020EE44: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8020EE48: jal         0x80212C08
    // 0x8020EE4C: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_80212C08_67C5E8(rdram, ctx);
        goto after_156;
    // 0x8020EE4C: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_156:
    // 0x8020EE50: b           L_80211D3C
    // 0x8020EE54: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020EE54: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EE58: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020EE5C:
    // 0x8020EE5C: addiu       $at, $zero, 0x14A
    ctx->r1 = ADD32(0, 0X14A);
    // 0x8020EE60: lh          $t0, 0x2($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X2);
    // 0x8020EE64: bne         $t0, $at, L_8020EE8C
    if (ctx->r8 != ctx->r1) {
        // 0x8020EE68: lui         $t2, 0x8020
        ctx->r10 = S32(0X8020 << 16);
            goto L_8020EE8C;
    }
    // 0x8020EE68: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8020EE6C: addiu       $t2, $t2, -0x39FC
    ctx->r10 = ADD32(ctx->r10, -0X39FC);
    // 0x8020EE70: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8020EE74: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x8020EE78: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020EE7C: jal         0x801DAC7C
    // 0x8020EE80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_157;
    // 0x8020EE80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_157:
    // 0x8020EE84: b           L_80211D3C
    // 0x8020EE88: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020EE88: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020EE8C:
    // 0x8020EE8C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EE90: addiu       $at, $zero, 0x1FE
    ctx->r1 = ADD32(0, 0X1FE);
    // 0x8020EE94: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8020EE98: bne         $t6, $at, L_8020EEC0
    if (ctx->r14 != ctx->r1) {
        // 0x8020EE9C: lui         $t3, 0x8020
        ctx->r11 = S32(0X8020 << 16);
            goto L_8020EEC0;
    }
    // 0x8020EE9C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x8020EEA0: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x8020EEA4: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8020EEA8: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x8020EEAC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020EEB0: jal         0x801DAC7C
    // 0x8020EEB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_158;
    // 0x8020EEB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_158:
    // 0x8020EEB8: b           L_80211D3C
    // 0x8020EEBC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020EEBC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020EEC0:
    // 0x8020EEC0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EEC4: addiu       $at, $zero, 0x240
    ctx->r1 = ADD32(0, 0X240);
    // 0x8020EEC8: lh          $t4, 0x2($t7)
    ctx->r12 = MEM_H(ctx->r15, 0X2);
    // 0x8020EECC: bnel        $t4, $at, L_80211D3C
    if (ctx->r12 != ctx->r1) {
        // 0x8020EED0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_37;
    // 0x8020EED0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_37:
    // 0x8020EED4: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x8020EED8: beq         $t9, $zero, L_8020EEF0
    if (ctx->r25 == 0) {
        // 0x8020EEDC: nop
    
            goto L_8020EEF0;
    }
    // 0x8020EEDC: nop

    // 0x8020EEE0: jal         0x80034EF8
    // 0x8020EEE4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_159;
    // 0x8020EEE4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_159:
    // 0x8020EEE8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EEEC: sw          $zero, 0x18($t8)
    MEM_W(0X18, ctx->r24) = 0;
L_8020EEF0:
    // 0x8020EEF0: jal         0x8020D8C4
    // 0x8020EEF4: nop

    func_8020D8C4_6772A4(rdram, ctx);
        goto after_160;
    // 0x8020EEF4: nop

    after_160:
    // 0x8020EEF8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EEFC: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020EF00: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020EF04: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020EF08: jal         0x802122F4
    // 0x8020EF0C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_161;
    // 0x8020EF0C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_161:
    // 0x8020EF10: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EF14: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8020EF18: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x8020EF1C: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x8020EF20: jal         0x80212BD8
    // 0x8020EF24: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_162;
    // 0x8020EF24: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_162:
    // 0x8020EF28: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020EF2C: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8020EF30: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020EF34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020EF38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020EF3C: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8020EF40: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020EF44: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EF48: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020EF4C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020EF50: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x8020EF54: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020EF58: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8020EF5C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020EF60: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8020EF64: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x8020EF68: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x8020EF6C: jal         0x800133E0
    // 0x8020EF70: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_163;
    // 0x8020EF70: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    after_163:
    // 0x8020EF74: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EF78: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x8020EF7C: jal         0x80012500
    // 0x8020EF80: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_164;
    // 0x8020EF80: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_164:
    // 0x8020EF84: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EF88: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020EF8C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x8020EF90: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020EF94: jal         0x80012818
    // 0x8020EF98: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_165;
    // 0x8020EF98: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_165:
    // 0x8020EF9C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EFA0: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x8020EFA4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020EFA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020EFAC: jal         0x800127B8
    // 0x8020EFB0: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_166;
    // 0x8020EFB0: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_166:
    // 0x8020EFB4: jal         0x8003D310
    // 0x8020EFB8: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    func_8003D310_3DF10(rdram, ctx);
        goto after_167;
    // 0x8020EFB8: addiu       $a0, $zero, 0x28D
    ctx->r4 = ADD32(0, 0X28D);
    after_167:
    // 0x8020EFBC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EFC0: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8020EFC4: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x8020EFC8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EFCC: b           L_80211D38
    // 0x8020EFD0: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
        goto L_80211D38;
    // 0x8020EFD0: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_8020EFD4:
    // 0x8020EFD4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020EFD8: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8020EFDC: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x8020EFE0: bnel        $t5, $at, L_8020F004
    if (ctx->r13 != ctx->r1) {
        // 0x8020EFE4: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F004;
    }
    goto skip_38;
    // 0x8020EFE4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_38:
    // 0x8020EFE8: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8020EFEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8020EFF0: jal         0x80212A04
    // 0x8020EFF4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_168;
    // 0x8020EFF4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_168:
    // 0x8020EFF8: b           L_80211D3C
    // 0x8020EFFC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020EFFC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F000: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8020F004:
    // 0x8020F004: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x8020F008: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x8020F00C: bnel        $t2, $at, L_8020F030
    if (ctx->r10 != ctx->r1) {
        // 0x8020F010: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F030;
    }
    goto skip_39;
    // 0x8020F010: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_39:
    // 0x8020F014: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8020F018: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020F01C: jal         0x80212A04
    // 0x8020F020: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_169;
    // 0x8020F020: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_169:
    // 0x8020F024: b           L_80211D3C
    // 0x8020F028: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F028: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F02C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F030:
    // 0x8020F030: addiu       $at, $zero, 0x172
    ctx->r1 = ADD32(0, 0X172);
    // 0x8020F034: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8020F038: bne         $t6, $at, L_8020F060
    if (ctx->r14 != ctx->r1) {
        // 0x8020F03C: lui         $t3, 0x8020
        ctx->r11 = S32(0X8020 << 16);
            goto L_8020F060;
    }
    // 0x8020F03C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x8020F040: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x8020F044: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x8020F048: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x8020F04C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020F050: jal         0x801DAC7C
    // 0x8020F054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_170;
    // 0x8020F054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_170:
    // 0x8020F058: b           L_80211D3C
    // 0x8020F05C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F05C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F060:
    // 0x8020F060: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F064: addiu       $at, $zero, 0x276
    ctx->r1 = ADD32(0, 0X276);
    // 0x8020F068: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x8020F06C: bne         $t7, $at, L_8020F094
    if (ctx->r15 != ctx->r1) {
        // 0x8020F070: lui         $t9, 0x8020
        ctx->r25 = S32(0X8020 << 16);
            goto L_8020F094;
    }
    // 0x8020F070: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x8020F074: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x8020F078: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8020F07C: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x8020F080: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8020F084: jal         0x801DAC7C
    // 0x8020F088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_171;
    // 0x8020F088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_171:
    // 0x8020F08C: b           L_80211D3C
    // 0x8020F090: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F090: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F094:
    // 0x8020F094: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F098: addiu       $at, $zero, 0x28A
    ctx->r1 = ADD32(0, 0X28A);
    // 0x8020F09C: lh          $t8, 0x2($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X2);
    // 0x8020F0A0: bnel        $t8, $at, L_8020F0C4
    if (ctx->r24 != ctx->r1) {
        // 0x8020F0A4: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F0C4;
    }
    goto skip_40;
    // 0x8020F0A4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_40:
    // 0x8020F0A8: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    // 0x8020F0AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8020F0B0: jal         0x80212A04
    // 0x8020F0B4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_172;
    // 0x8020F0B4: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_172:
    // 0x8020F0B8: b           L_80211D3C
    // 0x8020F0BC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F0BC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F0C0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_8020F0C4:
    // 0x8020F0C4: addiu       $at, $zero, 0x38E
    ctx->r1 = ADD32(0, 0X38E);
    // 0x8020F0C8: lh          $t0, 0x2($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X2);
    // 0x8020F0CC: bnel        $t0, $at, L_8020F0F0
    if (ctx->r8 != ctx->r1) {
        // 0x8020F0D0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F0F0;
    }
    goto skip_41;
    // 0x8020F0D0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_41:
    // 0x8020F0D4: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    // 0x8020F0D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020F0DC: jal         0x80212A04
    // 0x8020F0E0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_173;
    // 0x8020F0E0: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_173:
    // 0x8020F0E4: b           L_80211D3C
    // 0x8020F0E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F0E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F0EC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F0F0:
    // 0x8020F0F0: addiu       $at, $zero, 0x4A6
    ctx->r1 = ADD32(0, 0X4A6);
    // 0x8020F0F4: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8020F0F8: bnel        $t6, $at, L_80211D3C
    if (ctx->r14 != ctx->r1) {
        // 0x8020F0FC: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_42;
    // 0x8020F0FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_42:
    // 0x8020F100: sh          $zero, 0x2($t1)
    MEM_H(0X2, ctx->r9) = 0;
    // 0x8020F104: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F108: addiu       $t3, $zero, 0xE
    ctx->r11 = ADD32(0, 0XE);
    // 0x8020F10C: addiu       $a0, $zero, 0x251
    ctx->r4 = ADD32(0, 0X251);
    // 0x8020F110: jal         0x80038B98
    // 0x8020F114: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    func_80038B98_39798(rdram, ctx);
        goto after_174;
    // 0x8020F114: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    after_174:
    // 0x8020F118: b           L_80211D3C
    // 0x8020F11C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F11C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F120:
    // 0x8020F120: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F124: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020F128: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020F12C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020F130: jal         0x802122F4
    // 0x8020F134: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_175;
    // 0x8020F134: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    after_175:
    // 0x8020F138: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F13C: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8020F140: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x8020F144: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x8020F148: jal         0x80212BD8
    // 0x8020F14C: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_176;
    // 0x8020F14C: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_176:
    // 0x8020F150: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020F154: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8020F158: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020F15C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020F160: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020F164: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8020F168: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020F16C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F170: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8020F174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8020F178: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020F17C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8020F180: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8020F184: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x8020F188: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x8020F18C: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x8020F190: andi        $t0, $t5, 0x7
    ctx->r8 = ctx->r13 & 0X7;
    // 0x8020F194: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8020F198: addu        $at, $at, $t0
    gpr jr_addend_8020F1A0 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8020F19C: lw          $t0, -0x5864($at)
    ctx->r8 = ADD32(ctx->r1, -0X5864);
    // 0x8020F1A0: jr          $t0
    // 0x8020F1A4: nop

    switch (jr_addend_8020F1A0 >> 2) {
        case 0: goto L_8020F1A8; break;
        case 1: goto L_8020F1A8; break;
        case 2: goto L_8020F1E8; break;
        case 3: goto L_8020F1E8; break;
        case 4: goto L_8020F220; break;
        case 5: goto L_8020F220; break;
        case 6: goto L_8020F1E8; break;
        case 7: goto L_8020F1E8; break;
        default: switch_error(__func__, 0x8020F1A0, 0x8022A79C);
    }
    // 0x8020F1A4: nop

L_8020F1A8:
    // 0x8020F1A8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F1AC: lui         $a2, 0x416B
    ctx->r6 = S32(0X416B << 16);
    // 0x8020F1B0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8020F1B4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020F1B8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020F1BC: jal         0x80012818
    // 0x8020F1C0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_177;
    // 0x8020F1C0: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_177:
    // 0x8020F1C4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F1C8: lui         $a2, 0x411B
    ctx->r6 = S32(0X411B << 16);
    // 0x8020F1CC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8020F1D0: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x8020F1D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020F1D8: jal         0x800127B8
    // 0x8020F1DC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_178;
    // 0x8020F1DC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_178:
    // 0x8020F1E0: b           L_8020F25C
    // 0x8020F1E4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
        goto L_8020F25C;
    // 0x8020F1E4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020F1E8:
    // 0x8020F1E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F1EC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020F1F0: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x8020F1F4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020F1F8: jal         0x80012818
    // 0x8020F1FC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_179;
    // 0x8020F1FC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_179:
    // 0x8020F200: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F204: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x8020F208: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F20C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020F210: jal         0x800127B8
    // 0x8020F214: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_180;
    // 0x8020F214: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_180:
    // 0x8020F218: b           L_8020F25C
    // 0x8020F21C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
        goto L_8020F25C;
    // 0x8020F21C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020F220:
    // 0x8020F220: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F224: lui         $a2, 0x4174
    ctx->r6 = S32(0X4174 << 16);
    // 0x8020F228: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8020F22C: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020F230: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020F234: jal         0x80012818
    // 0x8020F238: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_181;
    // 0x8020F238: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_181:
    // 0x8020F23C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F240: lui         $a2, 0x4124
    ctx->r6 = S32(0X4124 << 16);
    // 0x8020F244: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8020F248: lui         $a1, 0xC348
    ctx->r5 = S32(0XC348 << 16);
    // 0x8020F24C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020F250: jal         0x800127B8
    // 0x8020F254: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_182;
    // 0x8020F254: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_182:
    // 0x8020F258: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020F25C:
    // 0x8020F25C: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    // 0x8020F260: lh          $t8, 0x2($t9)
    ctx->r24 = MEM_H(ctx->r25, 0X2);
    // 0x8020F264: bnel        $t8, $at, L_8020F278
    if (ctx->r24 != ctx->r1) {
        // 0x8020F268: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F278;
    }
    goto skip_43;
    // 0x8020F268: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_43:
    // 0x8020F26C: jal         0x80038B98
    // 0x8020F270: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    func_80038B98_39798(rdram, ctx);
        goto after_183;
    // 0x8020F270: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    after_183:
    // 0x8020F274: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020F278:
    // 0x8020F278: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8020F27C: lh          $t0, 0x2($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X2);
    // 0x8020F280: bne         $t0, $at, L_8020F2C4
    if (ctx->r8 != ctx->r1) {
        // 0x8020F284: lui         $t2, 0x8020
        ctx->r10 = S32(0X8020 << 16);
            goto L_8020F2C4;
    }
    // 0x8020F284: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8020F288: addiu       $t2, $t2, -0x39FC
    ctx->r10 = ADD32(ctx->r10, -0X39FC);
    // 0x8020F28C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x8020F290: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8020F294: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020F298: jal         0x801DAC7C
    // 0x8020F29C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_184;
    // 0x8020F29C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_184:
    // 0x8020F2A0: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F2A4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8020F2A8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x8020F2AC: jal         0x80212A04
    // 0x8020F2B0: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_185;
    // 0x8020F2B0: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_185:
    // 0x8020F2B4: jal         0x8003D310
    // 0x8020F2B8: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    func_8003D310_3DF10(rdram, ctx);
        goto after_186;
    // 0x8020F2B8: addiu       $a0, $zero, 0x28E
    ctx->r4 = ADD32(0, 0X28E);
    after_186:
    // 0x8020F2BC: b           L_80211D3C
    // 0x8020F2C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F2C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F2C4:
    // 0x8020F2C4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F2C8: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x8020F2CC: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x8020F2D0: beql        $t3, $at, L_80211D3C
    if (ctx->r11 == ctx->r1) {
        // 0x8020F2D4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_44;
    // 0x8020F2D4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_44:
    // 0x8020F2D8: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x8020F2DC: addiu       $at, $zero, 0x17C
    ctx->r1 = ADD32(0, 0X17C);
    // 0x8020F2E0: bnel        $t7, $at, L_80211D3C
    if (ctx->r15 != ctx->r1) {
        // 0x8020F2E4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_45;
    // 0x8020F2E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_45:
    // 0x8020F2E8: sh          $zero, 0x2($t1)
    MEM_H(0X2, ctx->r9) = 0;
    // 0x8020F2EC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F2F0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x8020F2F4: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x8020F2F8: sb          $t9, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r25;
    // 0x8020F2FC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F300: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F304: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x8020F308: jal         0x802122D4
    // 0x8020F30C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_187;
    // 0x8020F30C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_187:
    // 0x8020F310: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F314: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020F318: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F31C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x8020F320: jal         0x80212BB8
    // 0x8020F324: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BB8_67C598(rdram, ctx);
        goto after_188;
    // 0x8020F324: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_188:
    // 0x8020F328: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020F32C: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    // 0x8020F330: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F334: jal         0x80214540
    // 0x8020F338: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_80214540_67DF20(rdram, ctx);
        goto after_189;
    // 0x8020F338: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_189:
    // 0x8020F33C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F340: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8020F344: sw          $v0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r2;
    // 0x8020F348: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F34C: jal         0x802142EC
    // 0x8020F350: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    func_802142EC_67DCCC(rdram, ctx);
        goto after_190;
    // 0x8020F350: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    after_190:
    // 0x8020F354: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F358: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x8020F35C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8020F360: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x8020F364: jal         0x80214450
    // 0x8020F368: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    func_80214450_67DE30(rdram, ctx);
        goto after_191;
    // 0x8020F368: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    after_191:
    // 0x8020F36C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F370: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x8020F374: jal         0x80012500
    // 0x8020F378: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_192;
    // 0x8020F378: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_192:
    // 0x8020F37C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F380: lui         $a1, 0x442F
    ctx->r5 = S32(0X442F << 16);
    // 0x8020F384: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020F388: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020F38C: jal         0x80012818
    // 0x8020F390: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_193;
    // 0x8020F390: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_193:
    // 0x8020F394: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F398: lui         $a1, 0xC3A0
    ctx->r5 = S32(0XC3A0 << 16);
    // 0x8020F39C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F3A0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020F3A4: jal         0x800127B8
    // 0x8020F3A8: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_194;
    // 0x8020F3A8: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_194:
    // 0x8020F3AC: jal         0x80038B98
    // 0x8020F3B0: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    func_80038B98_39798(rdram, ctx);
        goto after_195;
    // 0x8020F3B0: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_195:
    // 0x8020F3B4: jal         0x80038B98
    // 0x8020F3B8: addiu       $a0, $zero, 0x253
    ctx->r4 = ADD32(0, 0X253);
    func_80038B98_39798(rdram, ctx);
        goto after_196;
    // 0x8020F3B8: addiu       $a0, $zero, 0x253
    ctx->r4 = ADD32(0, 0X253);
    after_196:
    // 0x8020F3BC: b           L_80211D3C
    // 0x8020F3C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F3C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F3C4:
    // 0x8020F3C4: jal         0x80038B98
    // 0x8020F3C8: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    func_80038B98_39798(rdram, ctx);
        goto after_197;
    // 0x8020F3C8: ori         $a0, $zero, 0x8251
    ctx->r4 = 0 | 0X8251;
    after_197:
    // 0x8020F3CC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F3D0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020F3D4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020F3D8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020F3DC: jal         0x80214368
    // 0x8020F3E0: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_80214368_67DD48(rdram, ctx);
        goto after_198;
    // 0x8020F3E0: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_198:
    // 0x8020F3E4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F3E8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020F3EC: jal         0x800124A0
    // 0x8020F3F0: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_199;
    // 0x8020F3F0: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_199:
    // 0x8020F3F4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8020F3F8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x8020F3FC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8020F400: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020F404: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8020F408: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8020F40C: nop

    // 0x8020F410: bc1f        L_8020F424
    if (!c1cs) {
        // 0x8020F414: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8020F424;
    }
    // 0x8020F414: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020F418: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F41C: nop

    // 0x8020F420: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_8020F424:
    // 0x8020F424: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F428: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8020F42C: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8020F430: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020F434: jal         0x80012628
    // 0x8020F438: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_200;
    // 0x8020F438: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_200:
    // 0x8020F43C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F440: addiu       $at, $zero, 0xEA
    ctx->r1 = ADD32(0, 0XEA);
    // 0x8020F444: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x8020F448: bnel        $t2, $at, L_8020F45C
    if (ctx->r10 != ctx->r1) {
        // 0x8020F44C: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F45C;
    }
    goto skip_46;
    // 0x8020F44C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_46:
    // 0x8020F450: jal         0x80038B98
    // 0x8020F454: addiu       $a0, $zero, 0x254
    ctx->r4 = ADD32(0, 0X254);
    func_80038B98_39798(rdram, ctx);
        goto after_201;
    // 0x8020F454: addiu       $a0, $zero, 0x254
    ctx->r4 = ADD32(0, 0X254);
    after_201:
    // 0x8020F458: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_8020F45C:
    // 0x8020F45C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8020F460: lh          $t1, 0x2($t6)
    ctx->r9 = MEM_H(ctx->r14, 0X2);
    // 0x8020F464: bnel        $t1, $at, L_8020F4AC
    if (ctx->r9 != ctx->r1) {
        // 0x8020F468: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F4AC;
    }
    goto skip_47;
    // 0x8020F468: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_47:
    // 0x8020F46C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x8020F470: jal         0x800124A0
    // 0x8020F474: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_202;
    // 0x8020F474: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_202:
    // 0x8020F478: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F47C: lui         $a1, 0xC370
    ctx->r5 = S32(0XC370 << 16);
    // 0x8020F480: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F484: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020F488: jal         0x80012518
    // 0x8020F48C: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_203;
    // 0x8020F48C: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_203:
    // 0x8020F490: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F494: lui         $a1, 0x44A0
    ctx->r5 = S32(0X44A0 << 16);
    // 0x8020F498: jal         0x800124AC
    // 0x8020F49C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_204;
    // 0x8020F49C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_204:
    // 0x8020F4A0: b           L_80211D3C
    // 0x8020F4A4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F4A4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F4A8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020F4AC:
    // 0x8020F4AC: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x8020F4B0: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x8020F4B4: bnel        $t9, $at, L_8020F58C
    if (ctx->r25 != ctx->r1) {
        // 0x8020F4B8: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F58C;
    }
    goto skip_48;
    // 0x8020F4B8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_48:
    // 0x8020F4BC: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    // 0x8020F4C0: lui         $a1, 0xC47A
    ctx->r5 = S32(0XC47A << 16);
    // 0x8020F4C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F4C8: jal         0x80214450
    // 0x8020F4CC: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    func_80214450_67DE30(rdram, ctx);
        goto after_205;
    // 0x8020F4CC: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_205:
    // 0x8020F4D0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F4D4: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8020F4D8: jal         0x800124A0
    // 0x8020F4DC: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_206;
    // 0x8020F4DC: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_206:
    // 0x8020F4E0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F4E4: lui         $a1, 0xC320
    ctx->r5 = S32(0XC320 << 16);
    // 0x8020F4E8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F4EC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x8020F4F0: jal         0x80012518
    // 0x8020F4F4: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_207;
    // 0x8020F4F4: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_207:
    // 0x8020F4F8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F4FC: lui         $a1, 0x45A0
    ctx->r5 = S32(0X45A0 << 16);
    // 0x8020F500: jal         0x800124AC
    // 0x8020F504: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_800124AC_130AC(rdram, ctx);
        goto after_208;
    // 0x8020F504: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_208:
    // 0x8020F508: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F50C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8020F510: jal         0x802122A4
    // 0x8020F514: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_209;
    // 0x8020F514: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_209:
    // 0x8020F518: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F51C: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    // 0x8020F520: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8020F524: jal         0x80212324
    // 0x8020F528: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_80212324_67BD04(rdram, ctx);
        goto after_210;
    // 0x8020F528: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_210:
    // 0x8020F52C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F530: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8020F534: jal         0x80212BAC
    // 0x8020F538: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_211;
    // 0x8020F538: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_211:
    // 0x8020F53C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F540: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    // 0x8020F544: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8020F548: jal         0x80212C08
    // 0x8020F54C: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    func_80212C08_67C5E8(rdram, ctx);
        goto after_212;
    // 0x8020F54C: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    after_212:
    // 0x8020F550: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F554: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8020F558: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F55C: jal         0x80212A04
    // 0x8020F560: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_213;
    // 0x8020F560: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_213:
    // 0x8020F564: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x8020F568: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x8020F56C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8020F570: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x8020F574: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F578: jal         0x801DAC7C
    // 0x8020F57C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_214;
    // 0x8020F57C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_214:
    // 0x8020F580: b           L_80211D3C
    // 0x8020F584: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F584: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F588: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020F58C:
    // 0x8020F58C: addiu       $at, $zero, 0x424
    ctx->r1 = ADD32(0, 0X424);
    // 0x8020F590: lh          $t8, 0x2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X2);
    // 0x8020F594: bnel        $t8, $at, L_80211D3C
    if (ctx->r24 != ctx->r1) {
        // 0x8020F598: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_49;
    // 0x8020F598: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_49:
    // 0x8020F59C: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x8020F5A0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F5A4: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x8020F5A8: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x8020F5AC: sb          $t5, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r13;
    // 0x8020F5B0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F5B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F5B8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020F5BC: jal         0x802122D4
    // 0x8020F5C0: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_215;
    // 0x8020F5C0: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_215:
    // 0x8020F5C4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F5C8: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x8020F5CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F5D0: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x8020F5D4: jal         0x80212BB8
    // 0x8020F5D8: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_80212BB8_67C598(rdram, ctx);
        goto after_216;
    // 0x8020F5D8: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_216:
    // 0x8020F5DC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F5E0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8020F5E4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8020F5E8: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8020F5EC: jal         0x802122F4
    // 0x8020F5F0: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_217;
    // 0x8020F5F0: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    after_217:
    // 0x8020F5F4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F5F8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8020F5FC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x8020F600: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x8020F604: jal         0x80212BD8
    // 0x8020F608: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_218;
    // 0x8020F608: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    after_218:
    // 0x8020F60C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020F610: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8020F614: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020F618: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020F61C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8020F620: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8020F624: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8020F628: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F62C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8020F630: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020F634: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    // 0x8020F638: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8020F63C: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8020F640: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x8020F644: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x8020F648: jal         0x80012500
    // 0x8020F64C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_219;
    // 0x8020F64C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_219:
    // 0x8020F650: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8020F654: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020F658: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8020F65C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F660: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x8020F664: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8020F668: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8020F66C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x8020F670: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8020F674: jal         0x80012818
    // 0x8020F678: nop

    func_80012818_13418(rdram, ctx);
        goto after_220;
    // 0x8020F678: nop

    after_220:
    // 0x8020F67C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F680: lui         $a1, 0xC3A0
    ctx->r5 = S32(0XC3A0 << 16);
    // 0x8020F684: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8020F688: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x8020F68C: jal         0x800127B8
    // 0x8020F690: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_221;
    // 0x8020F690: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_221:
    // 0x8020F694: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F698: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8020F69C: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020F6A0: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x8020F6A4: jal         0x800133E0
    // 0x8020F6A8: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_222;
    // 0x8020F6A8: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    after_222:
    // 0x8020F6AC: jal         0x80038B98
    // 0x8020F6B0: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    func_80038B98_39798(rdram, ctx);
        goto after_223;
    // 0x8020F6B0: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    after_223:
    // 0x8020F6B4: jal         0x8003D310
    // 0x8020F6B8: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    func_8003D310_3DF10(rdram, ctx);
        goto after_224;
    // 0x8020F6B8: addiu       $a0, $zero, 0x28F
    ctx->r4 = ADD32(0, 0X28F);
    after_224:
    // 0x8020F6BC: b           L_80211D3C
    // 0x8020F6C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F6C0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F6C4:
    // 0x8020F6C4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F6C8: lh          $t0, 0x2($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X2);
    // 0x8020F6CC: slti        $at, $t0, 0x2D1
    ctx->r1 = SIGNED(ctx->r8) < 0X2D1 ? 1 : 0;
    // 0x8020F6D0: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020F6D4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_50;
    // 0x8020F6D4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_50:
    // 0x8020F6D8: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x8020F6DC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F6E0: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x8020F6E4: b           L_80211D38
    // 0x8020F6E8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
        goto L_80211D38;
    // 0x8020F6E8: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
L_8020F6EC:
    // 0x8020F6EC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F6F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F6F4: lh          $t3, 0x2($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X2);
    // 0x8020F6F8: bnel        $t3, $at, L_80211D3C
    if (ctx->r11 != ctx->r1) {
        // 0x8020F6FC: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_51;
    // 0x8020F6FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_51:
    // 0x8020F700: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x8020F704: bnel        $t7, $zero, L_8020F72C
    if (ctx->r15 != 0) {
        // 0x8020F708: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F72C;
    }
    goto skip_52;
    // 0x8020F708: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_52:
    // 0x8020F70C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020F710: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020F714: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F718: jal         0x80214540
    // 0x8020F71C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214540_67DF20(rdram, ctx);
        goto after_225;
    // 0x8020F71C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_225:
    // 0x8020F720: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F724: sw          $v0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r2;
    // 0x8020F728: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_8020F72C:
    // 0x8020F72C: lui         $a3, 0xC422
    ctx->r7 = S32(0XC422 << 16);
    // 0x8020F730: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8020F734: lw          $a0, 0x3C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X3C);
    // 0x8020F738: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8020F73C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020F740: jal         0x80214340
    // 0x8020F744: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    func_80214340_67DD20(rdram, ctx);
        goto after_226;
    // 0x8020F744: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_226:
    // 0x8020F748: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F74C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x8020F750: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8020F754: jal         0x802142F8
    // 0x8020F758: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    func_802142F8_67DCD8(rdram, ctx);
        goto after_227;
    // 0x8020F758: lw          $a0, 0x3C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X3C);
    after_227:
    // 0x8020F75C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F760: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8020F764: jal         0x802142EC
    // 0x8020F768: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    func_802142EC_67DCCC(rdram, ctx);
        goto after_228;
    // 0x8020F768: lw          $a0, 0x3C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X3C);
    after_228:
    // 0x8020F76C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F770: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020F774: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8020F778: lui         $a3, 0xC3AF
    ctx->r7 = S32(0XC3AF << 16);
    // 0x8020F77C: jal         0x80214450
    // 0x8020F780: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    func_80214450_67DE30(rdram, ctx);
        goto after_229;
    // 0x8020F780: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    after_229:
    // 0x8020F784: jal         0x80038B98
    // 0x8020F788: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    func_80038B98_39798(rdram, ctx);
        goto after_230;
    // 0x8020F788: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_230:
    // 0x8020F78C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020F790: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020F794: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x8020F798: jal         0x8021483C
    // 0x8020F79C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8021483C_67E21C(rdram, ctx);
        goto after_231;
    // 0x8020F79C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_231:
    // 0x8020F7A0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7A4: lui         $a1, 0x4440
    ctx->r5 = S32(0X4440 << 16);
    // 0x8020F7A8: sw          $v0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r2;
    // 0x8020F7AC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7B0: jal         0x802147AC
    // 0x8020F7B4: lw          $a0, 0x40($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X40);
    func_802147AC_67E18C(rdram, ctx);
        goto after_232;
    // 0x8020F7B4: lw          $a0, 0x40($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X40);
    after_232:
    // 0x8020F7B8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7BC: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x8020F7C0: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020F7C4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020F7C8: jal         0x800133E0
    // 0x8020F7CC: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_233;
    // 0x8020F7CC: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    after_233:
    // 0x8020F7D0: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7D4: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x8020F7D8: jal         0x80012500
    // 0x8020F7DC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_234;
    // 0x8020F7DC: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_234:
    // 0x8020F7E0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7E4: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x8020F7E8: lui         $a2, 0x43A5
    ctx->r6 = S32(0X43A5 << 16);
    // 0x8020F7EC: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x8020F7F0: jal         0x80012818
    // 0x8020F7F4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_235;
    // 0x8020F7F4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_235:
    // 0x8020F7F8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F7FC: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x8020F800: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x8020F804: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x8020F808: jal         0x800127B8
    // 0x8020F80C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_236;
    // 0x8020F80C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_236:
    // 0x8020F810: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F814: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x8020F818: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020F81C: sh          $zero, 0x2($t8)
    MEM_H(0X2, ctx->r24) = 0;
    // 0x8020F820: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F824: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x8020F828: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F82C: jal         0x800124A0
    // 0x8020F830: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_237;
    // 0x8020F830: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_237:
    // 0x8020F834: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F838: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8020F83C: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x8020F840: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    // 0x8020F844: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8020F848: addiu       $a2, $a2, -0x6270
    ctx->r6 = ADD32(ctx->r6, -0X6270);
    // 0x8020F84C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8020F850: jal         0x800125F0
    // 0x8020F854: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800125F0_131F0(rdram, ctx);
        goto after_238;
    // 0x8020F854: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_238:
    // 0x8020F858: b           L_80211D3C
    // 0x8020F85C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F85C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F860:
    // 0x8020F860: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F864: addiu       $at, $zero, 0x1E4
    ctx->r1 = ADD32(0, 0X1E4);
    // 0x8020F868: lh          $t6, 0x2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X2);
    // 0x8020F86C: bnel        $t6, $at, L_8020F894
    if (ctx->r14 != ctx->r1) {
        // 0x8020F870: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F894;
    }
    goto skip_53;
    // 0x8020F870: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_53:
    // 0x8020F874: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8020F878: jal         0x8020D4EC
    // 0x8020F87C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_239;
    // 0x8020F87C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_239:
    // 0x8020F880: jal         0x80038B98
    // 0x8020F884: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    func_80038B98_39798(rdram, ctx);
        goto after_240;
    // 0x8020F884: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    after_240:
    // 0x8020F888: b           L_80211D3C
    // 0x8020F88C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F88C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F890: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_8020F894:
    // 0x8020F894: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x8020F898: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x8020F89C: bnel        $t9, $at, L_80211D3C
    if (ctx->r25 != ctx->r1) {
        // 0x8020F8A0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_54;
    // 0x8020F8A0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_54:
    // 0x8020F8A4: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x8020F8A8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8AC: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x8020F8B0: sb          $t8, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r24;
    // 0x8020F8B4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8B8: jal         0x80034EF8
    // 0x8020F8BC: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_241;
    // 0x8020F8BC: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
    after_241:
    // 0x8020F8C0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8C4: sw          $zero, 0x40($t5)
    MEM_W(0X40, ctx->r13) = 0;
    // 0x8020F8C8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8CC: jal         0x80034EF8
    // 0x8020F8D0: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_242;
    // 0x8020F8D0: lw          $a0, 0x3C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X3C);
    after_242:
    // 0x8020F8D4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8D8: jal         0x8020D870
    // 0x8020F8DC: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    func_8020D870_677250(rdram, ctx);
        goto after_243;
    // 0x8020F8DC: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    after_243:
    // 0x8020F8E0: b           L_80211D3C
    // 0x8020F8E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020F8E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020F8E8:
    // 0x8020F8E8: jal         0x8020D908
    // 0x8020F8EC: nop

    func_8020D908_6772E8(rdram, ctx);
        goto after_244;
    // 0x8020F8EC: nop

    after_244:
    // 0x8020F8F0: beql        $v0, $zero, L_80211D3C
    if (ctx->r2 == 0) {
        // 0x8020F8F4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_55;
    // 0x8020F8F4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_55:
    // 0x8020F8F8: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F8FC: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x8020F900: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x8020F904: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F908: b           L_80211D38
    // 0x8020F90C: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
        goto L_80211D38;
    // 0x8020F90C: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
L_8020F910:
    // 0x8020F910: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F914: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x8020F918: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x8020F91C: bnel        $t8, $at, L_8020F930
    if (ctx->r24 != ctx->r1) {
        // 0x8020F920: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F930;
    }
    goto skip_56;
    // 0x8020F920: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_56:
    // 0x8020F924: jal         0x80011A9C
    // 0x8020F928: nop

    func_80011A9C_1269C(rdram, ctx);
        goto after_245;
    // 0x8020F928: nop

    after_245:
    // 0x8020F92C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020F930:
    // 0x8020F930: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x8020F934: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x8020F938: bnel        $t0, $at, L_8020F94C
    if (ctx->r8 != ctx->r1) {
        // 0x8020F93C: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020F94C;
    }
    goto skip_57;
    // 0x8020F93C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_57:
    // 0x8020F940: jal         0x80011A9C
    // 0x8020F944: nop

    func_80011A9C_1269C(rdram, ctx);
        goto after_246;
    // 0x8020F944: nop

    after_246:
    // 0x8020F948: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020F94C:
    // 0x8020F94C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8020F950: lh          $t2, 0x2($t5)
    ctx->r10 = MEM_H(ctx->r13, 0X2);
    // 0x8020F954: bnel        $t2, $at, L_8020FAE4
    if (ctx->r10 != ctx->r1) {
        // 0x8020F958: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FAE4;
    }
    goto skip_58;
    // 0x8020F958: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_58:
    // 0x8020F95C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x8020F960: jal         0x8020D4EC
    // 0x8020F964: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_247;
    // 0x8020F964: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_247:
    // 0x8020F968: jal         0x8020D74C
    // 0x8020F96C: nop

    func_8020D74C_67712C(rdram, ctx);
        goto after_248;
    // 0x8020F96C: nop

    after_248:
    // 0x8020F970: jal         0x8020D780
    // 0x8020F974: nop

    func_8020D780_677160(rdram, ctx);
        goto after_249;
    // 0x8020F974: nop

    after_249:
    // 0x8020F978: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F97C: jal         0x80212640
    // 0x8020F980: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_80212640_67C020(rdram, ctx);
        goto after_250;
    // 0x8020F980: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_250:
    // 0x8020F984: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F988: jal         0x80212D78
    // 0x8020F98C: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212D78_67C758(rdram, ctx);
        goto after_251;
    // 0x8020F98C: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_251:
    // 0x8020F990: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8020F994: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020F998: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8020F99C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020F9A0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020F9A4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020F9A8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8020F9AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x8020F9B0: jal         0x802157C0
    // 0x8020F9B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_802157C0_67F1A0(rdram, ctx);
        goto after_252;
    // 0x8020F9B4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_252:
    // 0x8020F9B8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F9BC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020F9C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020F9C4: sw          $v0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r2;
    // 0x8020F9C8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020F9CC: jal         0x80217C64
    // 0x8020F9D0: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    func_80217C64_681644(rdram, ctx);
        goto after_253;
    // 0x8020F9D0: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_253:
    // 0x8020F9D4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F9D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020F9DC: sw          $v0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r2;
    // 0x8020F9E0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F9E4: jal         0x80217B28
    // 0x8020F9E8: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    func_80217B28_681508(rdram, ctx);
        goto after_254;
    // 0x8020F9E8: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    after_254:
    // 0x8020F9EC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020F9F0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8020F9F4: jal         0x80217BA0
    // 0x8020F9F8: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    func_80217BA0_681580(rdram, ctx);
        goto after_255;
    // 0x8020F9F8: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    after_255:
    // 0x8020F9FC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FA04: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FA08: jal         0x80217BAC
    // 0x8020FA0C: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    func_80217BAC_68158C(rdram, ctx);
        goto after_256;
    // 0x8020FA0C: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    after_256:
    // 0x8020FA10: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA14: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FA18: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x8020FA1C: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x8020FA20: jal         0x800133E0
    // 0x8020FA24: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_257;
    // 0x8020FA24: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    after_257:
    // 0x8020FA28: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8020FA30: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8020FA34: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8020FA38: jal         0x80013400
    // 0x8020FA3C: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    func_80013400_14000(rdram, ctx);
        goto after_258;
    // 0x8020FA3C: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    after_258:
    // 0x8020FA40: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020FA48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020FA4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8020FA50: jal         0x80013484
    // 0x8020FA54: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_259;
    // 0x8020FA54: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    after_259:
    // 0x8020FA58: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA5C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x8020FA60: jal         0x80012500
    // 0x8020FA64: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_260;
    // 0x8020FA64: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_260:
    // 0x8020FA68: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA6C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020FA70: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8020FA74: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020FA78: jal         0x80012818
    // 0x8020FA7C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_261;
    // 0x8020FA7C: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_261:
    // 0x8020FA80: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA84: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x8020FA88: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8020FA8C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020FA90: jal         0x800127B8
    // 0x8020FA94: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_262;
    // 0x8020FA94: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_262:
    // 0x8020FA98: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FA9C: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8020FAA0: jal         0x800124A0
    // 0x8020FAA4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_263;
    // 0x8020FAA4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_263:
    // 0x8020FAA8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FAAC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020FAB0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x8020FAB4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    // 0x8020FAB8: jal         0x80012628
    // 0x8020FABC: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_80012628_13228(rdram, ctx);
        goto after_264;
    // 0x8020FABC: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_264:
    // 0x8020FAC0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FAC4: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x8020FAC8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8020FACC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020FAD0: jal         0x80012518
    // 0x8020FAD4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_265;
    // 0x8020FAD4: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_265:
    // 0x8020FAD8: b           L_80211D3C
    // 0x8020FADC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FADC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FAE0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020FAE4:
    // 0x8020FAE4: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x8020FAE8: slti        $at, $t0, 0x1F5
    ctx->r1 = SIGNED(ctx->r8) < 0X1F5 ? 1 : 0;
    // 0x8020FAEC: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x8020FAF0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_59;
    // 0x8020FAF0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_59:
    // 0x8020FAF4: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x8020FAF8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FAFC: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x8020FB00: b           L_80211D38
    // 0x8020FB04: sb          $t2, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r10;
        goto L_80211D38;
    // 0x8020FB04: sb          $t2, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r10;
L_8020FB08:
    // 0x8020FB08: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FB0C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8020FB10: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8020FB14: bnel        $t6, $at, L_8020FB3C
    if (ctx->r14 != ctx->r1) {
        // 0x8020FB18: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FB3C;
    }
    goto skip_60;
    // 0x8020FB18: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_60:
    // 0x8020FB1C: lw          $a0, 0x24($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X24);
    // 0x8020FB20: jal         0x80217B28
    // 0x8020FB24: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80217B28_681508(rdram, ctx);
        goto after_266;
    // 0x8020FB24: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_266:
    // 0x8020FB28: jal         0x8003D310
    // 0x8020FB2C: addiu       $a0, $zero, 0x290
    ctx->r4 = ADD32(0, 0X290);
    func_8003D310_3DF10(rdram, ctx);
        goto after_267;
    // 0x8020FB2C: addiu       $a0, $zero, 0x290
    ctx->r4 = ADD32(0, 0X290);
    after_267:
    // 0x8020FB30: b           L_80211D3C
    // 0x8020FB34: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FB34: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FB38: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_8020FB3C:
    // 0x8020FB3C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x8020FB40: lh          $t9, 0x2($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X2);
    // 0x8020FB44: bnel        $t9, $at, L_8020FC20
    if (ctx->r25 != ctx->r1) {
        // 0x8020FB48: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FC20;
    }
    goto skip_61;
    // 0x8020FB48: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_61:
    // 0x8020FB4C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020FB50: lui         $a1, 0xC170
    ctx->r5 = S32(0XC170 << 16);
    // 0x8020FB54: lui         $a2, 0xC0A0
    ctx->r6 = S32(0XC0A0 << 16);
    // 0x8020FB58: jal         0x80217754
    // 0x8020FB5C: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    func_80217754_681134(rdram, ctx);
        goto after_268;
    // 0x8020FB5C: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_268:
    // 0x8020FB60: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FB64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FB68: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FB6C: sw          $v0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r2;
    // 0x8020FB70: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FB74: jal         0x80217700
    // 0x8020FB78: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    func_80217700_6810E0(rdram, ctx);
        goto after_269;
    // 0x8020FB78: lw          $a0, 0x28($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X28);
    after_269:
    // 0x8020FB7C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FB80: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020FB84: jal         0x80217658
    // 0x8020FB88: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    func_80217658_681038(rdram, ctx);
        goto after_270;
    // 0x8020FB88: lw          $a0, 0x28($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X28);
    after_270:
    // 0x8020FB8C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020FB90: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8020FB94: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8020FB98: jal         0x802179C0
    // 0x8020FB9C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_802179C0_6813A0(rdram, ctx);
        goto after_271;
    // 0x8020FB9C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_271:
    // 0x8020FBA0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBA4: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x8020FBA8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FBAC: sw          $v0, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r2;
    // 0x8020FBB0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBB4: jal         0x80217970
    // 0x8020FBB8: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    func_80217970_681350(rdram, ctx);
        goto after_272;
    // 0x8020FBB8: lw          $a0, 0x2C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X2C);
    after_272:
    // 0x8020FBBC: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBC0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8020FBC4: jal         0x802178BC
    // 0x8020FBC8: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_802178BC_68129C(rdram, ctx);
        goto after_273;
    // 0x8020FBC8: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_273:
    // 0x8020FBCC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBD0: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x8020FBD4: jal         0x80012500
    // 0x8020FBD8: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_274;
    // 0x8020FBD8: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_274:
    // 0x8020FBDC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FBE4: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x8020FBE8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020FBEC: jal         0x80012818
    // 0x8020FBF0: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_275;
    // 0x8020FBF0: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_275:
    // 0x8020FBF4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FBF8: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x8020FBFC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x8020FC00: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x8020FC04: jal         0x800127B8
    // 0x8020FC08: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_276;
    // 0x8020FC08: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_276:
    // 0x8020FC0C: jal         0x8003D310
    // 0x8020FC10: addiu       $a0, $zero, 0x291
    ctx->r4 = ADD32(0, 0X291);
    func_8003D310_3DF10(rdram, ctx);
        goto after_277;
    // 0x8020FC10: addiu       $a0, $zero, 0x291
    ctx->r4 = ADD32(0, 0X291);
    after_277:
    // 0x8020FC14: b           L_80211D3C
    // 0x8020FC18: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FC18: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FC1C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8020FC20:
    // 0x8020FC20: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x8020FC24: lh          $t7, 0x2($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X2);
    // 0x8020FC28: bnel        $t7, $at, L_8020FC48
    if (ctx->r15 != ctx->r1) {
        // 0x8020FC2C: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FC48;
    }
    goto skip_62;
    // 0x8020FC2C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_62:
    // 0x8020FC30: lw          $a0, 0x28($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X28);
    // 0x8020FC34: jal         0x80217658
    // 0x8020FC38: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80217658_681038(rdram, ctx);
        goto after_278;
    // 0x8020FC38: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_278:
    // 0x8020FC3C: b           L_80211D3C
    // 0x8020FC40: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FC40: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FC44: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_8020FC48:
    // 0x8020FC48: addiu       $at, $zero, 0x1E0
    ctx->r1 = ADD32(0, 0X1E0);
    // 0x8020FC4C: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x8020FC50: bnel        $t0, $at, L_8020FC70
    if (ctx->r8 != ctx->r1) {
        // 0x8020FC54: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FC70;
    }
    goto skip_63;
    // 0x8020FC54: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_63:
    // 0x8020FC58: lw          $a0, 0x2C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2C);
    // 0x8020FC5C: jal         0x802178BC
    // 0x8020FC60: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_802178BC_68129C(rdram, ctx);
        goto after_279;
    // 0x8020FC60: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_279:
    // 0x8020FC64: b           L_80211D3C
    // 0x8020FC68: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FC68: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FC6C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_8020FC70:
    // 0x8020FC70: addiu       $at, $zero, 0x1CC
    ctx->r1 = ADD32(0, 0X1CC);
    // 0x8020FC74: lh          $t2, 0x2($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X2);
    // 0x8020FC78: beql        $t2, $at, L_80211D3C
    if (ctx->r10 == ctx->r1) {
        // 0x8020FC7C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_64;
    // 0x8020FC7C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_64:
    // 0x8020FC80: lh          $t6, 0x2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X2);
    // 0x8020FC84: addiu       $at, $zero, 0x2FC
    ctx->r1 = ADD32(0, 0X2FC);
    // 0x8020FC88: bnel        $t6, $at, L_8020FCA8
    if (ctx->r14 != ctx->r1) {
        // 0x8020FC8C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FCA8;
    }
    goto skip_65;
    // 0x8020FC8C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_65:
    // 0x8020FC90: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8020FC94: jal         0x8020D4EC
    // 0x8020FC98: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_280;
    // 0x8020FC98: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_280:
    // 0x8020FC9C: b           L_80211D3C
    // 0x8020FCA0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8020FCA0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FCA4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_8020FCA8:
    // 0x8020FCA8: addiu       $at, $zero, 0x30C
    ctx->r1 = ADD32(0, 0X30C);
    // 0x8020FCAC: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x8020FCB0: bnel        $t3, $at, L_80211D3C
    if (ctx->r11 != ctx->r1) {
        // 0x8020FCB4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_66;
    // 0x8020FCB4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_66:
    // 0x8020FCB8: sh          $zero, 0x2($t1)
    MEM_H(0X2, ctx->r9) = 0;
    // 0x8020FCBC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FCC0: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x8020FCC4: b           L_80211D38
    // 0x8020FCC8: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
        goto L_80211D38;
    // 0x8020FCC8: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_8020FCCC:
    // 0x8020FCCC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FCD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FCD4: jal         0x8020D4EC
    // 0x8020FCD8: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_281;
    // 0x8020FCD8: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_281:
    // 0x8020FCDC: jal         0x8020D84C
    // 0x8020FCE0: nop

    func_8020D84C_67722C(rdram, ctx);
        goto after_282;
    // 0x8020FCE0: nop

    after_282:
    // 0x8020FCE4: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_8020FCE8:
    // 0x8020FCE8: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8020FCEC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FCF0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x8020FCF4: addu        $t6, $t8, $t2
    ctx->r14 = ADD32(ctx->r24, ctx->r10);
    // 0x8020FCF8: lw          $t5, 0x20($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X20);
    // 0x8020FCFC: beql        $t5, $zero, L_8020FD24
    if (ctx->r13 == 0) {
        // 0x8020FD00: lw          $t0, 0x74($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X74);
            goto L_8020FD24;
    }
    goto skip_67;
    // 0x8020FD00: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    skip_67:
    // 0x8020FD04: jal         0x80034EF8
    // 0x8020FD08: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_283;
    // 0x8020FD08: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_283:
    // 0x8020FD0C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8020FD10: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FD14: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x8020FD18: addu        $t9, $t3, $t7
    ctx->r25 = ADD32(ctx->r11, ctx->r15);
    // 0x8020FD1C: sw          $zero, 0x20($t9)
    MEM_W(0X20, ctx->r25) = 0;
    // 0x8020FD20: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
L_8020FD24:
    // 0x8020FD24: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8020FD28: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x8020FD2C: bne         $at, $zero, L_8020FCE8
    if (ctx->r1 != 0) {
        // 0x8020FD30: sw          $t4, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r12;
            goto L_8020FCE8;
    }
    // 0x8020FD30: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
    // 0x8020FD34: jal         0x8020D74C
    // 0x8020FD38: nop

    func_8020D74C_67712C(rdram, ctx);
        goto after_284;
    // 0x8020FD38: nop

    after_284:
    // 0x8020FD3C: jal         0x8020D7B4
    // 0x8020FD40: nop

    func_8020D7B4_677194(rdram, ctx);
        goto after_285;
    // 0x8020FD40: nop

    after_285:
    // 0x8020FD44: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FD48: lw          $t2, 0x3C($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X3C);
    // 0x8020FD4C: bnel        $t2, $zero, L_8020FD74
    if (ctx->r10 != 0) {
        // 0x8020FD50: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_8020FD74;
    }
    goto skip_68;
    // 0x8020FD50: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_68:
    // 0x8020FD54: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020FD58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FD5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FD60: jal         0x80214540
    // 0x8020FD64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214540_67DF20(rdram, ctx);
        goto after_286;
    // 0x8020FD64: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_286:
    // 0x8020FD68: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FD6C: sw          $v0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->r2;
    // 0x8020FD70: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_8020FD74:
    // 0x8020FD74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FD78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FD7C: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    // 0x8020FD80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8020FD84: jal         0x80214340
    // 0x8020FD88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214340_67DD20(rdram, ctx);
        goto after_287;
    // 0x8020FD88: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_287:
    // 0x8020FD8C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FD90: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x8020FD94: jal         0x802142F8
    // 0x8020FD98: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    func_802142F8_67DCD8(rdram, ctx);
        goto after_288;
    // 0x8020FD98: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    after_288:
    // 0x8020FD9C: jal         0x80038B98
    // 0x8020FDA0: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    func_80038B98_39798(rdram, ctx);
        goto after_289;
    // 0x8020FDA0: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_289:
    // 0x8020FDA4: jal         0x80038B98
    // 0x8020FDA8: addiu       $a0, $zero, 0x254
    ctx->r4 = ADD32(0, 0X254);
    func_80038B98_39798(rdram, ctx);
        goto after_290;
    // 0x8020FDA8: addiu       $a0, $zero, 0x254
    ctx->r4 = ADD32(0, 0X254);
    after_290:
    // 0x8020FDAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020FDB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8020FDB4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8020FDB8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8020FDBC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8020FDC0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8020FDC4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8020FDC8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8020FDCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8020FDD0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8020FDD4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8020FDD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FDDC: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x8020FDE0: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x8020FDE4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8020FDE8: jal         0x802154F4
    // 0x8020FDEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_291;
    // 0x8020FDEC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_291:
    // 0x8020FDF0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FDF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FDF8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8020FDFC: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x8020FE00: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FE04: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8020FE08: jal         0x800133E0
    // 0x8020FE0C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_292;
    // 0x8020FE0C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_292:
    // 0x8020FE10: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FE14: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8020FE18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8020FE1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8020FE20: jal         0x80013400
    // 0x8020FE24: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    func_80013400_14000(rdram, ctx);
        goto after_293;
    // 0x8020FE24: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    after_293:
    // 0x8020FE28: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FE2C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x8020FE30: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8020FE34: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x8020FE38: jal         0x80013484
    // 0x8020FE3C: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_294;
    // 0x8020FE3C: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_294:
    // 0x8020FE40: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8020FE44: addiu       $a1, $a1, -0x6204
    ctx->r5 = ADD32(ctx->r5, -0X6204);
    // 0x8020FE48: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8020FE4C: jal         0x800377F4
    // 0x8020FE50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800377F4_383F4(rdram, ctx);
        goto after_295;
    // 0x8020FE50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_295:
    // 0x8020FE54: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FE58: addiu       $a1, $zero, 0xDC0
    ctx->r5 = ADD32(0, 0XDC0);
    // 0x8020FE5C: jal         0x80012500
    // 0x8020FE60: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_296;
    // 0x8020FE60: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_296:
    // 0x8020FE64: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FE68: lui         $a2, 0x42D7
    ctx->r6 = S32(0X42D7 << 16);
    // 0x8020FE6C: lui         $a3, 0xC3AD
    ctx->r7 = S32(0XC3AD << 16);
    // 0x8020FE70: ori         $a3, $a3, 0xD35B
    ctx->r7 = ctx->r7 | 0XD35B;
    // 0x8020FE74: ori         $a2, $a2, 0xBD43
    ctx->r6 = ctx->r6 | 0XBD43;
    // 0x8020FE78: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8020FE7C: jal         0x80012818
    // 0x8020FE80: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_297;
    // 0x8020FE80: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_297:
    // 0x8020FE84: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8020FE88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FE8C: ldc1        $f10, -0x5840($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5840);
    // 0x8020FE90: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8020FE94: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020FE98: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8020FE9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FEA0: ldc1        $f8, -0x5838($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5838);
    // 0x8020FEA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8020FEA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FEAC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8020FEB0: ldc1        $f6, -0x5830($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5830);
    // 0x8020FEB4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FEB8: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    // 0x8020FEBC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8020FEC0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8020FEC4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8020FEC8: lwc1        $f18, 0x54($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020FECC: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x8020FED0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8020FED4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8020FED8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8020FEDC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8020FEE0: jal         0x800127B8
    // 0x8020FEE4: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_298;
    // 0x8020FEE4: nop

    after_298:
    // 0x8020FEE8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FEEC: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x8020FEF0: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x8020FEF4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FEF8: b           L_80211D38
    // 0x8020FEFC: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
        goto L_80211D38;
    // 0x8020FEFC: sb          $t9, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r25;
L_8020FF00:
    // 0x8020FF00: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FF04: lh          $t8, 0x2($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X2);
    // 0x8020FF08: slti        $at, $t8, 0x1F4
    ctx->r1 = SIGNED(ctx->r24) < 0X1F4 ? 1 : 0;
    // 0x8020FF0C: beq         $at, $zero, L_8020FF60
    if (ctx->r1 == 0) {
        // 0x8020FF10: nop
    
            goto L_8020FF60;
    }
    // 0x8020FF10: nop

    // 0x8020FF14: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8020FF18: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FF1C: ldc1        $f6, -0x5828($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5828);
    // 0x8020FF20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8020FF24: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8020FF28: addiu       $a1, $a1, -0x6204
    ctx->r5 = ADD32(ctx->r5, -0X6204);
    // 0x8020FF2C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8020FF30: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8020FF34: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x8020FF38: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8020FF3C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8020FF40: jal         0x800377F4
    // 0x8020FF44: nop

    func_800377F4_383F4(rdram, ctx);
        goto after_299;
    // 0x8020FF44: nop

    after_299:
    // 0x8020FF48: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FF4C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x8020FF50: jal         0x800124A0
    // 0x8020FF54: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_300;
    // 0x8020FF54: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_300:
    // 0x8020FF58: b           L_8020FF88
    // 0x8020FF5C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
        goto L_8020FF88;
    // 0x8020FF5C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
L_8020FF60:
    // 0x8020FF60: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8020FF64: addiu       $a1, $a1, -0x6204
    ctx->r5 = ADD32(ctx->r5, -0X6204);
    // 0x8020FF68: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8020FF6C: jal         0x800377F4
    // 0x8020FF70: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800377F4_383F4(rdram, ctx);
        goto after_301;
    // 0x8020FF70: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_301:
    // 0x8020FF74: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FF78: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x8020FF7C: jal         0x800124A0
    // 0x8020FF80: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_302;
    // 0x8020FF80: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    after_302:
    // 0x8020FF84: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
L_8020FF88:
    // 0x8020FF88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FF8C: ldc1        $f4, -0x5820($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5820);
    // 0x8020FF90: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8020FF94: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020FF98: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x8020FF9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FFA0: ldc1        $f18, -0x5818($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5818);
    // 0x8020FFA4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8020FFA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020FFAC: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8020FFB0: ldc1        $f16, -0x5810($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5810);
    // 0x8020FFB4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FFB8: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    // 0x8020FFBC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8020FFC0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8020FFC4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020FFC8: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8020FFCC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8020FFD0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020FFD4: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x8020FFD8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8020FFDC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x8020FFE0: jal         0x80012518
    // 0x8020FFE4: nop

    func_80012518_13118(rdram, ctx);
        goto after_303;
    // 0x8020FFE4: nop

    after_303:
    // 0x8020FFE8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8020FFEC: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x8020FFF0: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x8020FFF4: bnel        $t3, $at, L_80210008
    if (ctx->r11 != ctx->r1) {
        // 0x8020FFF8: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_80210008;
    }
    goto skip_69;
    // 0x8020FFF8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_69:
    // 0x8020FFFC: jal         0x80038B98
    // 0x80210000: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80038B98_39798(rdram, ctx);
        goto after_304;
    // 0x80210000: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_304:
    // 0x80210004: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_80210008:
    // 0x80210008: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x8021000C: slti        $at, $t9, 0x191
    ctx->r1 = SIGNED(ctx->r25) < 0X191 ? 1 : 0;
    // 0x80210010: bne         $at, $zero, L_80210180
    if (ctx->r1 != 0) {
        // 0x80210014: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80210180;
    }
    // 0x80210014: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80210018: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8021001C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80210020: bnel        $t0, $zero, L_80210184
    if (ctx->r8 != 0) {
        // 0x80210024: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80210184;
    }
    goto skip_70;
    // 0x80210024: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_70:
    // 0x80210028: jal         0x8000DD58
    // 0x8021002C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8000DD58_E958(rdram, ctx);
        goto after_305;
    // 0x8021002C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_305:
    // 0x80210030: addiu       $t4, $v0, -0x28
    ctx->r12 = ADD32(ctx->r2, -0X28);
    // 0x80210034: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x80210038: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x8021003C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80210040: jal         0x8000DD58
    // 0x80210044: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_306;
    // 0x80210044: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_306:
    // 0x80210048: addiu       $t8, $v0, -0x28
    ctx->r24 = ADD32(ctx->r2, -0X28);
    // 0x8021004C: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80210050: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80210054: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210058: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021005C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210060: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80210064: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80210068: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021006C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80210070: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x80210074: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80210078: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    // 0x8021007C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80210080: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80210084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210088: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8021008C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80210090: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80210094: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80210098: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021009C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802100A0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x802100A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802100A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802100AC: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x802100B0: jal         0x802154F4
    // 0x802100B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_307;
    // 0x802100B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_307:
    // 0x802100B8: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x802100BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802100C0: jal         0x80215260
    // 0x802100C4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_308;
    // 0x802100C4: lui         $a1, 0x42F0
    ctx->r5 = S32(0X42F0 << 16);
    after_308:
    // 0x802100C8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802100CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802100D0: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x802100D4: jal         0x802152BC
    // 0x802100D8: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    func_802152BC_67EC9C(rdram, ctx);
        goto after_309;
    // 0x802100D8: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_309:
    // 0x802100DC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802100E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802100E4: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802100E8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802100EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802100F0: jal         0x80215380
    // 0x802100F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_310;
    // 0x802100F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_310:
    // 0x802100F8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802100FC: jal         0x8021526C
    // 0x80210100: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_311;
    // 0x80210100: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_311:
    // 0x80210104: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210108: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8021010C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210110: lw          $a0, 0x30($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X30);
    // 0x80210114: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80210118: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8021011C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80210120: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80210124: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80210128: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021012C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80210130: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80210134: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210138: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x8021013C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80210140: jal         0x802154F4
    // 0x80210144: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_312;
    // 0x80210144: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_312:
    // 0x80210148: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8021014C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210150: jal         0x80215260
    // 0x80210154: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_313;
    // 0x80210154: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_313:
    // 0x80210158: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8021015C: jal         0x8021526C
    // 0x80210160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_314;
    // 0x80210160: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_314:
    // 0x80210164: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80210168: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8021016C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210170: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210174: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210178: jal         0x80215380
    // 0x8021017C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_315;
    // 0x8021017C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_315:
L_80210180:
    // 0x80210180: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80210184:
    // 0x80210184: addiu       $at, $zero, 0x258
    ctx->r1 = ADD32(0, 0X258);
    // 0x80210188: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x8021018C: bnel        $t5, $at, L_80211D3C
    if (ctx->r13 != ctx->r1) {
        // 0x80210190: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_71;
    // 0x80210190: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_71:
    // 0x80210194: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80210198: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8021019C: addiu       $t1, $zero, 0x18
    ctx->r9 = ADD32(0, 0X18);
    // 0x802101A0: b           L_80211D38
    // 0x802101A4: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
        goto L_80211D38;
    // 0x802101A4: sb          $t1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r9;
L_802101A8:
    // 0x802101A8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802101AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802101B0: lh          $t9, 0x2($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X2);
    // 0x802101B4: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x802101B8: mfhi        $t0
    ctx->r8 = hi;
    // 0x802101BC: bne         $t0, $zero, L_802102A8
    if (ctx->r8 != 0) {
        // 0x802101C0: slti        $at, $t9, 0x96
        ctx->r1 = SIGNED(ctx->r25) < 0X96 ? 1 : 0;
            goto L_802102A8;
    }
    // 0x802101C0: slti        $at, $t9, 0x96
    ctx->r1 = SIGNED(ctx->r25) < 0X96 ? 1 : 0;
    // 0x802101C4: beql        $at, $zero, L_802102AC
    if (ctx->r1 == 0) {
        // 0x802101C8: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_802102AC;
    }
    goto skip_72;
    // 0x802101C8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_72:
    // 0x802101CC: jal         0x8000DD58
    // 0x802101D0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8000DD58_E958(rdram, ctx);
        goto after_316;
    // 0x802101D0: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_316:
    // 0x802101D4: addiu       $t4, $v0, -0x28
    ctx->r12 = ADD32(ctx->r2, -0X28);
    // 0x802101D8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x802101DC: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x802101E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802101E4: jal         0x8000DD58
    // 0x802101E8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_317;
    // 0x802101E8: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    after_317:
    // 0x802101EC: addiu       $t8, $v0, -0x28
    ctx->r24 = ADD32(ctx->r2, -0X28);
    // 0x802101F0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x802101F4: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x802101F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802101FC: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210200: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210204: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80210208: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021020C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210210: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80210214: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x80210218: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8021021C: lw          $a0, 0x30($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X30);
    // 0x80210220: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80210224: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80210228: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021022C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80210230: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80210234: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80210238: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x8021023C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80210240: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80210244: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80210248: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8021024C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80210250: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x80210254: jal         0x802154F4
    // 0x80210258: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_318;
    // 0x80210258: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_318:
    // 0x8021025C: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x80210260: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210264: jal         0x80215260
    // 0x80210268: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_319;
    // 0x80210268: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_319:
    // 0x8021026C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210270: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210274: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x80210278: jal         0x802152BC
    // 0x8021027C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    func_802152BC_67EC9C(rdram, ctx);
        goto after_320;
    // 0x8021027C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_320:
    // 0x80210280: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80210284: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80210288: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8021028C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210290: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210294: jal         0x80215380
    // 0x80210298: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_321;
    // 0x80210298: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_321:
    // 0x8021029C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x802102A0: jal         0x8021526C
    // 0x802102A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_322;
    // 0x802102A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_322:
L_802102A8:
    // 0x802102A8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_802102AC:
    // 0x802102AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x802102B0: lh          $t9, 0x2($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X2);
    // 0x802102B4: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x802102B8: mfhi        $t4
    ctx->r12 = hi;
    // 0x802102BC: bne         $t4, $zero, L_80210344
    if (ctx->r12 != 0) {
        // 0x802102C0: slti        $at, $t9, 0xB4
        ctx->r1 = SIGNED(ctx->r25) < 0XB4 ? 1 : 0;
            goto L_80210344;
    }
    // 0x802102C0: slti        $at, $t9, 0xB4
    ctx->r1 = SIGNED(ctx->r25) < 0XB4 ? 1 : 0;
    // 0x802102C4: beql        $at, $zero, L_80210348
    if (ctx->r1 == 0) {
        // 0x802102C8: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80210348;
    }
    goto skip_73;
    // 0x802102C8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_73:
    // 0x802102CC: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x802102D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802102D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802102D8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x802102DC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802102E0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x802102E4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802102E8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802102EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x802102F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802102F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802102F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802102FC: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x80210300: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80210304: jal         0x802154F4
    // 0x80210308: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_323;
    // 0x80210308: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_323:
    // 0x8021030C: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x80210310: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210314: jal         0x80215260
    // 0x80210318: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_324;
    // 0x80210318: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_324:
    // 0x8021031C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210320: jal         0x8021526C
    // 0x80210324: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_325;
    // 0x80210324: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_325:
    // 0x80210328: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8021032C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80210330: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210334: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210338: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8021033C: jal         0x80215380
    // 0x80210340: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_326;
    // 0x80210340: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_326:
L_80210344:
    // 0x80210344: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80210348:
    // 0x80210348: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8021034C: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x80210350: bnel        $t3, $at, L_80210380
    if (ctx->r11 != ctx->r1) {
        // 0x80210354: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_80210380;
    }
    goto skip_74;
    // 0x80210354: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_74:
    // 0x80210358: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    // 0x8021035C: jal         0x80215260
    // 0x80210360: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_327;
    // 0x80210360: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_327:
    // 0x80210364: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210368: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    // 0x8021036C: jal         0x8021526C
    // 0x80210370: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_328;
    // 0x80210370: lw          $a0, 0x30($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X30);
    after_328:
    // 0x80210374: b           L_80211D3C
    // 0x80210378: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210378: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8021037C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_80210380:
    // 0x80210380: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x80210384: lh          $t9, 0x2($t4)
    ctx->r25 = MEM_H(ctx->r12, 0X2);
    // 0x80210388: bnel        $t9, $at, L_802103D0
    if (ctx->r25 != ctx->r1) {
        // 0x8021038C: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_802103D0;
    }
    goto skip_75;
    // 0x8021038C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_75:
    // 0x80210390: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    // 0x80210394: jal         0x80215260
    // 0x80210398: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_329;
    // 0x80210398: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_329:
    // 0x8021039C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x802103A0: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x802103A4: jal         0x8021526C
    // 0x802103A8: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_330;
    // 0x802103A8: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    after_330:
    // 0x802103AC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802103B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802103B4: lui         $a2, 0x42FE
    ctx->r6 = S32(0X42FE << 16);
    // 0x802103B8: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x802103BC: jal         0x802152BC
    // 0x802103C0: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_802152BC_67EC9C(rdram, ctx);
        goto after_331;
    // 0x802103C0: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_331:
    // 0x802103C4: b           L_80211D3C
    // 0x802103C8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x802103C8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802103CC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_802103D0:
    // 0x802103D0: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    // 0x802103D4: lh          $t5, 0x2($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X2);
    // 0x802103D8: bnel        $t5, $at, L_80211D3C
    if (ctx->r13 != ctx->r1) {
        // 0x802103DC: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_76;
    // 0x802103DC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_76:
    // 0x802103E0: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x802103E4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802103E8: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x802103EC: ori         $a0, $zero, 0x8111
    ctx->r4 = 0 | 0X8111;
    // 0x802103F0: jal         0x80038B98
    // 0x802103F4: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
    func_80038B98_39798(rdram, ctx);
        goto after_332;
    // 0x802103F4: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
    after_332:
    // 0x802103F8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802103FC: jal         0x80034EF8
    // 0x80210400: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_333;
    // 0x80210400: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_333:
    // 0x80210404: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210408: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    // 0x8021040C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210410: jal         0x80034EF8
    // 0x80210414: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_334;
    // 0x80210414: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_334:
    // 0x80210418: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8021041C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80210420: sw          $zero, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = 0;
    // 0x80210424: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210428: jal         0x8020D4B8
    // 0x8021042C: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_335;
    // 0x8021042C: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_335:
    // 0x80210430: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210434: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210438: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8021043C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80210440: jal         0x8020D4D0
    // 0x80210444: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_336;
    // 0x80210444: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    after_336:
    // 0x80210448: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8021044C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80210450: jal         0x8020D4EC
    // 0x80210454: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_337;
    // 0x80210454: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    after_337:
    // 0x80210458: b           L_80211D3C
    // 0x8021045C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021045C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80210460:
    // 0x80210460: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210464: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80210468: lh          $t6, 0x2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X2);
    // 0x8021046C: bnel        $t6, $at, L_80210530
    if (ctx->r14 != ctx->r1) {
        // 0x80210470: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80210530;
    }
    goto skip_77;
    // 0x80210470: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_77:
    // 0x80210474: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x80210478: jal         0x8020D4B8
    // 0x8021047C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_338;
    // 0x8021047C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_338:
    // 0x80210480: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80210484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210488: jal         0x8020D4EC
    // 0x8021048C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_339;
    // 0x8021048C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    after_339:
    // 0x80210490: jal         0x8020D74C
    // 0x80210494: nop

    func_8020D74C_67712C(rdram, ctx);
        goto after_340;
    // 0x80210494: nop

    after_340:
    // 0x80210498: jal         0x8020D7B4
    // 0x8021049C: nop

    func_8020D7B4_677194(rdram, ctx);
        goto after_341;
    // 0x8021049C: nop

    after_341:
    // 0x802104A0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802104A4: lw          $t7, 0x40($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X40);
    // 0x802104A8: bnel        $t7, $zero, L_802104D0
    if (ctx->r15 != 0) {
        // 0x802104AC: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_802104D0;
    }
    goto skip_78;
    // 0x802104AC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_78:
    // 0x802104B0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802104B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802104B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802104BC: jal         0x8021483C
    // 0x802104C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_8021483C_67E21C(rdram, ctx);
        goto after_342;
    // 0x802104C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_342:
    // 0x802104C4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x802104C8: sw          $v0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->r2;
    // 0x802104CC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_802104D0:
    // 0x802104D0: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    // 0x802104D4: jal         0x80012500
    // 0x802104D8: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_343;
    // 0x802104D8: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_343:
    // 0x802104DC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x802104E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802104E4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x802104E8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x802104EC: jal         0x80012818
    // 0x802104F0: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_344;
    // 0x802104F0: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_344:
    // 0x802104F4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802104F8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x802104FC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80210500: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x80210504: jal         0x800127B8
    // 0x80210508: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_345;
    // 0x80210508: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_345:
    // 0x8021050C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210510: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210514: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80210518: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8021051C: jal         0x800133E0
    // 0x80210520: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_346;
    // 0x80210520: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    after_346:
    // 0x80210524: b           L_80211D3C
    // 0x80210528: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210528: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8021052C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80210530:
    // 0x80210530: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80210534: lh          $t2, 0x2($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X2);
    // 0x80210538: bnel        $t2, $at, L_80211D3C
    if (ctx->r10 != ctx->r1) {
        // 0x8021053C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_79;
    // 0x8021053C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_79:
    // 0x80210540: jal         0x80038B98
    // 0x80210544: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    func_80038B98_39798(rdram, ctx);
        goto after_347;
    // 0x80210544: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    after_347:
    // 0x80210548: addiu       $t3, $zero, 0x40
    ctx->r11 = ADD32(0, 0X40);
    // 0x8021054C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80210550: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x80210554: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x80210558: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8021055C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80210560: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80210564: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80210568: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8021056C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210570: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210574: jal         0x80215EFC
    // 0x80210578: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_80215EFC_67F8DC(rdram, ctx);
        goto after_348;
    // 0x80210578: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_348:
    // 0x8021057C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210580: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80210584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210588: sw          $v0, 0x30($t4)
    MEM_W(0X30, ctx->r12) = ctx->r2;
    // 0x8021058C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210590: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80210594: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80210598: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x8021059C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802105A0: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x802105A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802105A8: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x802105AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802105B0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802105B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x802105B8: jal         0x80215E08
    // 0x802105BC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_80215E08_67F7E8(rdram, ctx);
        goto after_349;
    // 0x802105BC: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_349:
    // 0x802105C0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802105C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x802105C8: jal         0x80215D54
    // 0x802105CC: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    func_80215D54_67F734(rdram, ctx);
        goto after_350;
    // 0x802105CC: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    after_350:
    // 0x802105D0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802105D4: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x802105D8: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x802105DC: jal         0x80215DB4
    // 0x802105E0: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    func_80215DB4_67F794(rdram, ctx);
        goto after_351;
    // 0x802105E0: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    after_351:
    // 0x802105E4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x802105E8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x802105EC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802105F0: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x802105F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x802105F8: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x802105FC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80210600: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80210604: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210608: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8021060C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210610: jal         0x80215EFC
    // 0x80210614: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_80215EFC_67F8DC(rdram, ctx);
        goto after_352;
    // 0x80210614: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_352:
    // 0x80210618: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8021061C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80210620: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80210624: sw          $v0, 0x34($t7)
    MEM_W(0X34, ctx->r15) = ctx->r2;
    // 0x80210628: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8021062C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80210630: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210634: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80210638: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021063C: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    // 0x80210640: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210644: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210648: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8021064C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80210650: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80210654: jal         0x80215E08
    // 0x80210658: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_80215E08_67F7E8(rdram, ctx);
        goto after_353;
    // 0x80210658: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_353:
    // 0x8021065C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210660: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80210664: jal         0x80215D54
    // 0x80210668: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    func_80215D54_67F734(rdram, ctx);
        goto after_354;
    // 0x80210668: lw          $a0, 0x34($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X34);
    after_354:
    // 0x8021066C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210670: lui         $a1, 0x3D8F
    ctx->r5 = S32(0X3D8F << 16);
    // 0x80210674: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x80210678: jal         0x80215D60
    // 0x8021067C: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    func_80215D60_67F740(rdram, ctx);
        goto after_355;
    // 0x8021067C: lw          $a0, 0x34($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X34);
    after_355:
    // 0x80210680: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210684: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80210688: jal         0x80215D54
    // 0x8021068C: lw          $a0, 0x34($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X34);
    func_80215D54_67F734(rdram, ctx);
        goto after_356;
    // 0x8021068C: lw          $a0, 0x34($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X34);
    after_356:
    // 0x80210690: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210694: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x80210698: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x8021069C: jal         0x80215DB4
    // 0x802106A0: lw          $a0, 0x34($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X34);
    func_80215DB4_67F794(rdram, ctx);
        goto after_357;
    // 0x802106A0: lw          $a0, 0x34($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X34);
    after_357:
    // 0x802106A4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802106A8: addiu       $t2, $zero, 0x1A
    ctx->r10 = ADD32(0, 0X1A);
    // 0x802106AC: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x802106B0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802106B4: b           L_80211D38
    // 0x802106B8: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
        goto L_80211D38;
    // 0x802106B8: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
L_802106BC:
    // 0x802106BC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802106C0: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x802106C4: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x802106C8: bne         $at, $zero, L_80210750
    if (ctx->r1 != 0) {
        // 0x802106CC: andi        $s0, $t7, 0x3
        ctx->r16 = ctx->r15 & 0X3;
            goto L_80210750;
    }
    // 0x802106CC: andi        $s0, $t7, 0x3
    ctx->r16 = ctx->r15 & 0X3;
    // 0x802106D0: beq         $s0, $zero, L_802106F8
    if (ctx->r16 == 0) {
        // 0x802106D4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802106F8;
    }
    // 0x802106D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802106D8: beq         $s0, $at, L_80210718
    if (ctx->r16 == ctx->r1) {
        // 0x802106DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80210718;
    }
    // 0x802106DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802106E0: beq         $s0, $at, L_802106F8
    if (ctx->r16 == ctx->r1) {
        // 0x802106E4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802106F8;
    }
    // 0x802106E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802106E8: beql        $s0, $at, L_8021073C
    if (ctx->r16 == ctx->r1) {
        // 0x802106EC: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_8021073C;
    }
    goto skip_80;
    // 0x802106EC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_80:
    // 0x802106F0: b           L_80210754
    // 0x802106F4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
        goto L_80210754;
    // 0x802106F4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_802106F8:
    // 0x802106F8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x802106FC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80210700: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80210704: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x80210708: jal         0x800127B8
    // 0x8021070C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_358;
    // 0x8021070C: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_358:
    // 0x80210710: b           L_80210754
    // 0x80210714: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
        goto L_80210754;
    // 0x80210714: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_80210718:
    // 0x80210718: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x8021071C: lui         $a1, 0x429E
    ctx->r5 = S32(0X429E << 16);
    // 0x80210720: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80210724: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x80210728: jal         0x800127B8
    // 0x8021072C: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_359;
    // 0x8021072C: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_359:
    // 0x80210730: b           L_80210754
    // 0x80210734: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
        goto L_80210754;
    // 0x80210734: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210738: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_8021073C:
    // 0x8021073C: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    // 0x80210740: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80210744: lui         $a3, 0x429E
    ctx->r7 = S32(0X429E << 16);
    // 0x80210748: jal         0x800127B8
    // 0x8021074C: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_360;
    // 0x8021074C: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    after_360:
L_80210750:
    // 0x80210750: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_80210754:
    // 0x80210754: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80210758: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x8021075C: bnel        $t5, $at, L_80210894
    if (ctx->r13 != ctx->r1) {
        // 0x80210760: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_80210894;
    }
    goto skip_81;
    // 0x80210760: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_81:
    // 0x80210764: jal         0x80038B98
    // 0x80210768: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    func_80038B98_39798(rdram, ctx);
        goto after_361;
    // 0x80210768: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    after_361:
    // 0x8021076C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80210770: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80210774: jal         0x800133D4
    // 0x80210778: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800133D4_13FD4(rdram, ctx);
        goto after_362;
    // 0x80210778: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_362:
    // 0x8021077C: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80210784: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80210788: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021078C: jal         0x800136F8
    // 0x80210790: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    func_800136F8_142F8(rdram, ctx);
        goto after_363;
    // 0x80210790: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    after_363:
    // 0x80210794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210798: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021079C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x802107A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802107A4: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x802107A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x802107AC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x802107B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x802107B4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802107B8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x802107BC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802107C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802107C4: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x802107C8: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x802107CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802107D0: jal         0x802154F4
    // 0x802107D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_364;
    // 0x802107D4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_364:
    // 0x802107D8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x802107DC: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x802107E0: sw          $v0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->r2;
    // 0x802107E4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x802107E8: jal         0x80215260
    // 0x802107EC: lw          $a0, 0x20($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X20);
    func_80215260_67EC40(rdram, ctx);
        goto after_365;
    // 0x802107EC: lw          $a0, 0x20($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X20);
    after_365:
    // 0x802107F0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802107F4: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x802107F8: jal         0x8021526C
    // 0x802107FC: lw          $a0, 0x20($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X20);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_366;
    // 0x802107FC: lw          $a0, 0x20($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X20);
    after_366:
    // 0x80210800: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80210804: lwc1        $f8, -0x5808($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5808);
    // 0x80210808: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8021080C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80210810: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80210814: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80210818: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8021081C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80210820: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80210824: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80210828: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8021082C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210830: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210834: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x80210838: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8021083C: jal         0x802154F4
    // 0x80210840: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_367;
    // 0x80210840: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_367:
    // 0x80210844: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210848: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x8021084C: sw          $v0, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->r2;
    // 0x80210850: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210854: jal         0x80215260
    // 0x80210858: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    func_80215260_67EC40(rdram, ctx);
        goto after_368;
    // 0x80210858: lw          $a0, 0x24($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X24);
    after_368:
    // 0x8021085C: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210860: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80210864: jal         0x8021526C
    // 0x80210868: lw          $a0, 0x24($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X24);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_369;
    // 0x80210868: lw          $a0, 0x24($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X24);
    after_369:
    // 0x8021086C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210870: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210874: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210878: lw          $a0, 0x24($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X24);
    // 0x8021087C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80210880: jal         0x80215380
    // 0x80210884: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_370;
    // 0x80210884: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_370:
    // 0x80210888: b           L_80211D3C
    // 0x8021088C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021088C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210890: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_80210894:
    // 0x80210894: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80210898: lh          $t8, 0x2($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X2);
    // 0x8021089C: bnel        $t8, $at, L_802108EC
    if (ctx->r24 != ctx->r1) {
        // 0x802108A0: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_802108EC;
    }
    goto skip_82;
    // 0x802108A0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_82:
    // 0x802108A4: lw          $a0, 0x30($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X30);
    // 0x802108A8: jal         0x80215D54
    // 0x802108AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_80215D54_67F734(rdram, ctx);
        goto after_371;
    // 0x802108AC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_371:
    // 0x802108B0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802108B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802108B8: jal         0x80215D60
    // 0x802108BC: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    func_80215D60_67F740(rdram, ctx);
        goto after_372;
    // 0x802108BC: lw          $a0, 0x30($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X30);
    after_372:
    // 0x802108C0: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802108C4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x802108C8: jal         0x80215D54
    // 0x802108CC: lw          $a0, 0x34($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X34);
    func_80215D54_67F734(rdram, ctx);
        goto after_373;
    // 0x802108CC: lw          $a0, 0x34($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X34);
    after_373:
    // 0x802108D0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x802108D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802108D8: jal         0x80215D60
    // 0x802108DC: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    func_80215D60_67F740(rdram, ctx);
        goto after_374;
    // 0x802108DC: lw          $a0, 0x34($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X34);
    after_374:
    // 0x802108E0: b           L_80211D3C
    // 0x802108E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x802108E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802108E8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_802108EC:
    // 0x802108EC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x802108F0: lh          $t1, 0x2($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X2);
    // 0x802108F4: bnel        $t1, $at, L_80210924
    if (ctx->r9 != ctx->r1) {
        // 0x802108F8: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_80210924;
    }
    goto skip_83;
    // 0x802108F8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_83:
    // 0x802108FC: lw          $a0, 0x20($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X20);
    // 0x80210900: jal         0x80215260
    // 0x80210904: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_80215260_67EC40(rdram, ctx);
        goto after_375;
    // 0x80210904: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_375:
    // 0x80210908: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8021090C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80210910: jal         0x8021526C
    // 0x80210914: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_376;
    // 0x80210914: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    after_376:
    // 0x80210918: b           L_80211D3C
    // 0x8021091C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021091C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210920: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_80210924:
    // 0x80210924: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80210928: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x8021092C: bnel        $t4, $at, L_80211D3C
    if (ctx->r12 != ctx->r1) {
        // 0x80210930: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_84;
    // 0x80210930: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_84:
    // 0x80210934: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80210938: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8021093C: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x80210940: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
    // 0x80210944: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80210948:
    // 0x80210948: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8021094C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210950: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80210954: addu        $t1, $t5, $t2
    ctx->r9 = ADD32(ctx->r13, ctx->r10);
    // 0x80210958: lw          $t3, 0x30($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X30);
    // 0x8021095C: beql        $t3, $zero, L_80210984
    if (ctx->r11 == 0) {
        // 0x80210960: lw          $t0, 0x74($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X74);
            goto L_80210984;
    }
    goto skip_85;
    // 0x80210960: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    skip_85:
    // 0x80210964: jal         0x80034EF8
    // 0x80210968: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_377;
    // 0x80210968: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_377:
    // 0x8021096C: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x80210970: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210974: sll         $t9, $t4, 2
    ctx->r25 = S32(ctx->r12 << 2);
    // 0x80210978: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8021097C: sw          $zero, 0x30($t8)
    MEM_W(0X30, ctx->r24) = 0;
    // 0x80210980: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
L_80210984:
    // 0x80210984: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x80210988: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8021098C: bne         $at, $zero, L_80210948
    if (ctx->r1 != 0) {
        // 0x80210990: sw          $t6, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r14;
            goto L_80210948;
    }
    // 0x80210990: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x80210994: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80210998:
    // 0x80210998: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x8021099C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802109A0: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x802109A4: addu        $t3, $t5, $t1
    ctx->r11 = ADD32(ctx->r13, ctx->r9);
    // 0x802109A8: lw          $t4, 0x20($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X20);
    // 0x802109AC: beql        $t4, $zero, L_802109D4
    if (ctx->r12 == 0) {
        // 0x802109B0: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_802109D4;
    }
    goto skip_86;
    // 0x802109B0: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    skip_86:
    // 0x802109B4: jal         0x80034EF8
    // 0x802109B8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_378;
    // 0x802109B8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_378:
    // 0x802109BC: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x802109C0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802109C4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x802109C8: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x802109CC: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
    // 0x802109D0: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_802109D4:
    // 0x802109D4: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x802109D8: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x802109DC: bne         $at, $zero, L_80210998
    if (ctx->r1 != 0) {
        // 0x802109E0: sw          $t2, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r10;
            goto L_80210998;
    }
    // 0x802109E0: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x802109E4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802109E8: lw          $t1, 0x40($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X40);
    // 0x802109EC: beql        $t1, $zero, L_80210A08
    if (ctx->r9 == 0) {
        // 0x802109F0: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_80210A08;
    }
    goto skip_87;
    // 0x802109F0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_87:
    // 0x802109F4: jal         0x80034EF8
    // 0x802109F8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_379;
    // 0x802109F8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_379:
    // 0x802109FC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80210A00: sw          $zero, 0x40($t3)
    MEM_W(0X40, ctx->r11) = 0;
    // 0x80210A04: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_80210A08:
    // 0x80210A08: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80210A0C: jal         0x8020D4B8
    // 0x80210A10: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_380;
    // 0x80210A10: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    after_380:
    // 0x80210A14: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210A18: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210A1C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210A20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80210A24: jal         0x8020D4D0
    // 0x80210A28: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_381;
    // 0x80210A28: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    after_381:
    // 0x80210A2C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210A30: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80210A34: jal         0x8020D4EC
    // 0x80210A38: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_382;
    // 0x80210A38: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    after_382:
    // 0x80210A3C: b           L_80211D3C
    // 0x80210A40: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210A40: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80210A44:
    // 0x80210A44: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80210A4C: lh          $t0, 0x2($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X2);
    // 0x80210A50: bnel        $t0, $at, L_80210BA4
    if (ctx->r8 != ctx->r1) {
        // 0x80210A54: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_80210BA4;
    }
    goto skip_88;
    // 0x80210A54: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_88:
    // 0x80210A58: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x80210A5C: jal         0x8020D4B8
    // 0x80210A60: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_383;
    // 0x80210A60: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_383:
    // 0x80210A64: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80210A68: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210A6C: jal         0x8020D4EC
    // 0x80210A70: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_384;
    // 0x80210A70: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    after_384:
    // 0x80210A74: jal         0x8020D92C
    // 0x80210A78: nop

    func_8020D92C_67730C(rdram, ctx);
        goto after_385;
    // 0x80210A78: nop

    after_385:
    // 0x80210A7C: jal         0x8020D94C
    // 0x80210A80: nop

    func_8020D94C_67732C(rdram, ctx);
        goto after_386;
    // 0x80210A80: nop

    after_386:
    // 0x80210A84: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210A88: jal         0x801FADC4
    // 0x80210A8C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801FADC4_5B6CD4(rdram, ctx);
        goto after_387;
    // 0x80210A8C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_387:
    // 0x80210A90: jal         0x8020D780
    // 0x80210A94: nop

    func_8020D780_677160(rdram, ctx);
        goto after_388;
    // 0x80210A94: nop

    after_388:
    // 0x80210A98: jal         0x8020D7E8
    // 0x80210A9C: nop

    func_8020D7E8_6771C8(rdram, ctx);
        goto after_389;
    // 0x80210A9C: nop

    after_389:
    // 0x80210AA0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210AA4: addiu       $a1, $zero, 0xC80
    ctx->r5 = ADD32(0, 0XC80);
    // 0x80210AA8: jal         0x80012500
    // 0x80210AAC: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_390;
    // 0x80210AAC: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_390:
    // 0x80210AB0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210AB4: lui         $a1, 0xC30C
    ctx->r5 = S32(0XC30C << 16);
    // 0x80210AB8: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x80210ABC: lui         $a3, 0xC300
    ctx->r7 = S32(0XC300 << 16);
    // 0x80210AC0: jal         0x80012818
    // 0x80210AC4: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_391;
    // 0x80210AC4: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_391:
    // 0x80210AC8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210ACC: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    // 0x80210AD0: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x80210AD4: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x80210AD8: jal         0x800127B8
    // 0x80210ADC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_392;
    // 0x80210ADC: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_392:
    // 0x80210AE0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80210AE4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80210AE8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80210AEC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80210AF0: jal         0x800133E0
    // 0x80210AF4: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_393;
    // 0x80210AF4: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    after_393:
    // 0x80210AF8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210AFC: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x80210B00: lui         $a2, 0xC290
    ctx->r6 = S32(0XC290 << 16);
    // 0x80210B04: jal         0x8021801C
    // 0x80210B08: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    func_8021801C_6819FC(rdram, ctx);
        goto after_394;
    // 0x80210B08: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    after_394:
    // 0x80210B0C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80210B14: sw          $v0, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->r2;
    // 0x80210B18: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B1C: jal         0x80217F88
    // 0x80210B20: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    func_80217F88_681968(rdram, ctx);
        goto after_395;
    // 0x80210B20: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    after_395:
    // 0x80210B24: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210B28: lui         $a1, 0xC28C
    ctx->r5 = S32(0XC28C << 16);
    // 0x80210B2C: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x80210B30: jal         0x80217E54
    // 0x80210B34: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    func_80217E54_681834(rdram, ctx);
        goto after_396;
    // 0x80210B34: lui         $a3, 0xC28C
    ctx->r7 = S32(0XC28C << 16);
    after_396:
    // 0x80210B38: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B3C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80210B40: sw          $v0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r2;
    // 0x80210B44: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B48: jal         0x80217D8C
    // 0x80210B4C: lw          $a0, 0x24($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X24);
    func_80217D8C_68176C(rdram, ctx);
        goto after_397;
    // 0x80210B4C: lw          $a0, 0x24($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X24);
    after_397:
    // 0x80210B50: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B54: lui         $a1, 0xC1F0
    ctx->r5 = S32(0XC1F0 << 16);
    // 0x80210B58: lui         $a2, 0xC28C
    ctx->r6 = S32(0XC28C << 16);
    // 0x80210B5C: jal         0x80217E04
    // 0x80210B60: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    func_80217E04_6817E4(rdram, ctx);
        goto after_398;
    // 0x80210B60: lw          $a0, 0x24($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X24);
    after_398:
    // 0x80210B64: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210B68: lui         $a1, 0xC270
    ctx->r5 = S32(0XC270 << 16);
    // 0x80210B6C: lui         $a2, 0xC296
    ctx->r6 = S32(0XC296 << 16);
    // 0x80210B70: jal         0x802181E4
    // 0x80210B74: lui         $a3, 0xC296
    ctx->r7 = S32(0XC296 << 16);
    func_802181E4_681BC4(rdram, ctx);
        goto after_399;
    // 0x80210B74: lui         $a3, 0xC296
    ctx->r7 = S32(0XC296 << 16);
    after_399:
    // 0x80210B78: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B7C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80210B80: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x80210B84: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80210B88: jal         0x80218150
    // 0x80210B8C: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_80218150_681B30(rdram, ctx);
        goto after_400;
    // 0x80210B8C: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_400:
    // 0x80210B90: jal         0x80038B98
    // 0x80210B94: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    func_80038B98_39798(rdram, ctx);
        goto after_401;
    // 0x80210B94: addiu       $a0, $zero, 0x46
    ctx->r4 = ADD32(0, 0X46);
    after_401:
    // 0x80210B98: b           L_80211D3C
    // 0x80210B9C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210B9C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210BA0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_80210BA4:
    // 0x80210BA4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80210BA8: lh          $t1, 0x2($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X2);
    // 0x80210BAC: bnel        $t1, $at, L_80210BC8
    if (ctx->r9 != ctx->r1) {
        // 0x80210BB0: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_80210BC8;
    }
    goto skip_89;
    // 0x80210BB0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_89:
    // 0x80210BB4: jal         0x8003D310
    // 0x80210BB8: addiu       $a0, $zero, 0x292
    ctx->r4 = ADD32(0, 0X292);
    func_8003D310_3DF10(rdram, ctx);
        goto after_402;
    // 0x80210BB8: addiu       $a0, $zero, 0x292
    ctx->r4 = ADD32(0, 0X292);
    after_402:
    // 0x80210BBC: b           L_80211D3C
    // 0x80210BC0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210BC0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210BC4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_80210BC8:
    // 0x80210BC8: addiu       $at, $zero, 0x186
    ctx->r1 = ADD32(0, 0X186);
    // 0x80210BCC: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80210BD0: bnel        $t4, $at, L_80210BF0
    if (ctx->r12 != ctx->r1) {
        // 0x80210BD4: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_80210BF0;
    }
    goto skip_90;
    // 0x80210BD4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_90:
    // 0x80210BD8: lw          $a0, 0x24($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X24);
    // 0x80210BDC: jal         0x80217D8C
    // 0x80210BE0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80217D8C_68176C(rdram, ctx);
        goto after_403;
    // 0x80210BE0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_403:
    // 0x80210BE4: b           L_80211D3C
    // 0x80210BE8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210BE8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210BEC: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_80210BF0:
    // 0x80210BF0: addiu       $at, $zero, 0x258
    ctx->r1 = ADD32(0, 0X258);
    // 0x80210BF4: lh          $t7, 0x2($t9)
    ctx->r15 = MEM_H(ctx->r25, 0X2);
    // 0x80210BF8: bnel        $t7, $at, L_80210C80
    if (ctx->r15 != ctx->r1) {
        // 0x80210BFC: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_80210C80;
    }
    goto skip_91;
    // 0x80210BFC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_91:
    // 0x80210C00: jal         0x80038B98
    // 0x80210C04: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    func_80038B98_39798(rdram, ctx);
        goto after_404;
    // 0x80210C04: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_404:
    // 0x80210C08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210C0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80210C10: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80210C14: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x80210C18: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80210C1C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80210C20: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80210C24: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80210C28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80210C2C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80210C30: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210C34: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x80210C38: lui         $a2, 0xC248
    ctx->r6 = S32(0XC248 << 16);
    // 0x80210C3C: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x80210C40: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80210C44: jal         0x802154F4
    // 0x80210C48: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_405;
    // 0x80210C48: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_405:
    // 0x80210C4C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210C50: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80210C54: sw          $v0, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r2;
    // 0x80210C58: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210C5C: jal         0x80215260
    // 0x80210C60: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    func_80215260_67EC40(rdram, ctx);
        goto after_406;
    // 0x80210C60: lw          $a0, 0x30($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X30);
    after_406:
    // 0x80210C64: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210C68: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x80210C6C: jal         0x8021526C
    // 0x80210C70: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_407;
    // 0x80210C70: lw          $a0, 0x30($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X30);
    after_407:
    // 0x80210C74: b           L_80211D3C
    // 0x80210C78: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210C78: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210C7C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_80210C80:
    // 0x80210C80: addiu       $at, $zero, 0x2D0
    ctx->r1 = ADD32(0, 0X2D0);
    // 0x80210C84: lh          $t9, 0x2($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X2);
    // 0x80210C88: bnel        $t9, $at, L_80211D3C
    if (ctx->r25 != ctx->r1) {
        // 0x80210C8C: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_92;
    // 0x80210C8C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_92:
    // 0x80210C90: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80210C94: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210C98: addiu       $t7, $zero, 0x1C
    ctx->r15 = ADD32(0, 0X1C);
    // 0x80210C9C: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x80210CA0: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80210CA4:
    // 0x80210CA4: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x80210CA8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210CAC: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80210CB0: addu        $t5, $t8, $t2
    ctx->r13 = ADD32(ctx->r24, ctx->r10);
    // 0x80210CB4: lw          $t1, 0x30($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X30);
    // 0x80210CB8: beql        $t1, $zero, L_80210CE0
    if (ctx->r9 == 0) {
        // 0x80210CBC: lw          $t0, 0x74($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X74);
            goto L_80210CE0;
    }
    goto skip_93;
    // 0x80210CBC: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    skip_93:
    // 0x80210CC0: jal         0x80034EF8
    // 0x80210CC4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_408;
    // 0x80210CC4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_408:
    // 0x80210CC8: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x80210CCC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210CD0: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80210CD4: addu        $t7, $t4, $t3
    ctx->r15 = ADD32(ctx->r12, ctx->r11);
    // 0x80210CD8: sw          $zero, 0x30($t7)
    MEM_W(0X30, ctx->r15) = 0;
    // 0x80210CDC: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
L_80210CE0:
    // 0x80210CE0: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x80210CE4: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x80210CE8: bne         $at, $zero, L_80210CA4
    if (ctx->r1 != 0) {
        // 0x80210CEC: sw          $t6, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r14;
            goto L_80210CA4;
    }
    // 0x80210CEC: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x80210CF0: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80210CF4:
    // 0x80210CF4: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x80210CF8: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210CFC: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80210D00: addu        $t1, $t8, $t5
    ctx->r9 = ADD32(ctx->r24, ctx->r13);
    // 0x80210D04: lw          $t9, 0x20($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X20);
    // 0x80210D08: beql        $t9, $zero, L_80210D30
    if (ctx->r25 == 0) {
        // 0x80210D0C: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_80210D30;
    }
    goto skip_94;
    // 0x80210D0C: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    skip_94:
    // 0x80210D10: jal         0x80034EF8
    // 0x80210D14: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_409;
    // 0x80210D14: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_409:
    // 0x80210D18: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x80210D1C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210D20: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80210D24: addu        $t0, $t4, $t7
    ctx->r8 = ADD32(ctx->r12, ctx->r15);
    // 0x80210D28: sw          $zero, 0x20($t0)
    MEM_W(0X20, ctx->r8) = 0;
    // 0x80210D2C: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_80210D30:
    // 0x80210D30: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x80210D34: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80210D38: bne         $at, $zero, L_80210CF4
    if (ctx->r1 != 0) {
        // 0x80210D3C: sw          $t2, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r10;
            goto L_80210CF4;
    }
    // 0x80210D3C: sw          $t2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r10;
    // 0x80210D40: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210D44: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80210D48: jal         0x8020D4B8
    // 0x80210D4C: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_410;
    // 0x80210D4C: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    after_410:
    // 0x80210D50: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210D54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210D58: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210D5C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80210D60: jal         0x8020D4D0
    // 0x80210D64: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_411;
    // 0x80210D64: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    after_411:
    // 0x80210D68: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210D6C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80210D70: jal         0x8020D4EC
    // 0x80210D74: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_412;
    // 0x80210D74: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    after_412:
    // 0x80210D78: b           L_80211D3C
    // 0x80210D7C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80210D7C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80210D80:
    // 0x80210D80: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80210D84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80210D88: lh          $t3, 0x2($t9)
    ctx->r11 = MEM_H(ctx->r25, 0X2);
    // 0x80210D8C: bnel        $t3, $at, L_80211000
    if (ctx->r11 != ctx->r1) {
        // 0x80210D90: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80211000;
    }
    goto skip_95;
    // 0x80210D90: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_95:
    // 0x80210D94: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x80210D98: jal         0x8020D4B8
    // 0x80210D9C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_413;
    // 0x80210D9C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_413:
    // 0x80210DA0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80210DA4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210DA8: jal         0x8020D4EC
    // 0x80210DAC: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_414;
    // 0x80210DAC: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    after_414:
    // 0x80210DB0: jal         0x8020D978
    // 0x80210DB4: nop

    func_8020D978_677358(rdram, ctx);
        goto after_415;
    // 0x80210DB4: nop

    after_415:
    // 0x80210DB8: jal         0x8020D84C
    // 0x80210DBC: nop

    func_8020D84C_67722C(rdram, ctx);
        goto after_416;
    // 0x80210DBC: nop

    after_416:
    // 0x80210DC0: jal         0x8020D72C
    // 0x80210DC4: nop

    func_8020D72C_67710C(rdram, ctx);
        goto after_417;
    // 0x80210DC4: nop

    after_417:
    // 0x80210DC8: jal         0x8020D74C
    // 0x80210DCC: nop

    func_8020D74C_67712C(rdram, ctx);
        goto after_418;
    // 0x80210DCC: nop

    after_418:
    // 0x80210DD0: jal         0x8020D7B4
    // 0x80210DD4: nop

    func_8020D7B4_677194(rdram, ctx);
        goto after_419;
    // 0x80210DD4: nop

    after_419:
    // 0x80210DD8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80210DDC: lw          $t0, 0x40($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X40);
    // 0x80210DE0: bnel        $t0, $zero, L_80210E08
    if (ctx->r8 != 0) {
        // 0x80210DE4: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_80210E08;
    }
    goto skip_96;
    // 0x80210DE4: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_96:
    // 0x80210DE8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210DEC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210DF0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80210DF4: jal         0x80214A8C
    // 0x80210DF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214A8C_67E46C(rdram, ctx);
        goto after_420;
    // 0x80210DF8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_420:
    // 0x80210DFC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80210E00: sw          $v0, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->r2;
    // 0x80210E04: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_80210E08:
    // 0x80210E08: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    // 0x80210E0C: jal         0x80012500
    // 0x80210E10: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_421;
    // 0x80210E10: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_421:
    // 0x80210E14: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80210E18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210E1C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210E20: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x80210E24: jal         0x80012818
    // 0x80210E28: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_422;
    // 0x80210E28: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_422:
    // 0x80210E2C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210E30: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80210E34: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x80210E38: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x80210E3C: jal         0x800127B8
    // 0x80210E40: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_423;
    // 0x80210E40: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_423:
    // 0x80210E44: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210E48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210E4C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80210E50: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80210E54: jal         0x800133E0
    // 0x80210E58: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_424;
    // 0x80210E58: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_424:
    // 0x80210E5C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80210E60: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80210E64: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80210E68: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80210E6C: jal         0x80013484
    // 0x80210E70: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_425;
    // 0x80210E70: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    after_425:
    // 0x80210E74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80210E78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80210E7C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80210E80: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80210E84: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80210E88: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80210E8C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80210E90: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80210E94: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80210E98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80210E9C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80210EA0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x80210EA4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80210EA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80210EAC: jal         0x80216B30
    // 0x80210EB0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_426;
    // 0x80210EB0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_426:
    // 0x80210EB4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80210EB8: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x80210EBC: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80210EC0:
    // 0x80210EC0: jal         0x8000DD58
    // 0x80210EC4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_427;
    // 0x80210EC4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_427:
    // 0x80210EC8: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x80210ECC: beq         $at, $zero, L_80210F04
    if (ctx->r1 == 0) {
        // 0x80210ED0: sw          $v0, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r2;
            goto L_80210F04;
    }
    // 0x80210ED0: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x80210ED4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80210ED8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80210EDC: jal         0x8000DD58
    // 0x80210EE0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_428;
    // 0x80210EE0: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    after_428:
    // 0x80210EE4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x80210EE8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80210EEC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80210EF0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80210EF4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210EF8: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x80210EFC: b           L_80210F3C
    // 0x80210F00: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
        goto L_80210F3C;
    // 0x80210F00: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
L_80210F04:
    // 0x80210F04: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80210F08: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80210F0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80210F10: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80210F14: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80210F18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80210F1C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80210F20: jal         0x8000DD58
    // 0x80210F24: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_429;
    // 0x80210F24: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    after_429:
    // 0x80210F28: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80210F2C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80210F30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80210F34: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x80210F38: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
L_80210F3C:
    // 0x80210F3C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80210F40: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80210F44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80210F48: lw          $a0, 0x20($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X20);
    // 0x80210F4C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80210F50: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80210F54: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80210F58: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80210F5C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80210F60: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80210F64: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80210F68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80210F6C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80210F70: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80210F74: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80210F78: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80210F7C: jal         0x80216B30
    // 0x80210F80: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_80216B30_680510(rdram, ctx);
        goto after_430;
    // 0x80210F80: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_430:
    // 0x80210F84: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x80210F88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80210F8C: jal         0x8021689C
    // 0x80210F90: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    func_8021689C_68027C(rdram, ctx);
        goto after_431;
    // 0x80210F90: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    after_431:
    // 0x80210F94: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80210F98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80210F9C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80210FA0: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210FA4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80210FA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80210FAC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80210FB0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80210FB4: jal         0x802168F8
    // 0x80210FB8: nop

    func_802168F8_6802D8(rdram, ctx);
        goto after_432;
    // 0x80210FB8: nop

    after_432:
    // 0x80210FBC: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210FC0: jal         0x802168A8
    // 0x80210FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_802168A8_680288(rdram, ctx);
        goto after_433;
    // 0x80210FC4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_433:
    // 0x80210FC8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x80210FCC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80210FD0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80210FD4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80210FD8: jal         0x802169BC
    // 0x80210FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802169BC_68039C(rdram, ctx);
        goto after_434;
    // 0x80210FDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_434:
    // 0x80210FE0: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80210FE4: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80210FE8: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x80210FEC: bne         $at, $zero, L_80210EC0
    if (ctx->r1 != 0) {
        // 0x80210FF0: sw          $t0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r8;
            goto L_80210EC0;
    }
    // 0x80210FF0: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x80210FF4: b           L_802110CC
    // 0x80210FF8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_802110CC;
    // 0x80210FF8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80210FFC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80211000:
    // 0x80211000: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    // 0x80211004: lh          $t2, 0x2($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X2);
    // 0x80211008: bnel        $t2, $at, L_8021102C
    if (ctx->r10 != ctx->r1) {
        // 0x8021100C: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_8021102C;
    }
    goto skip_97;
    // 0x8021100C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_97:
    // 0x80211010: jal         0x80038B98
    // 0x80211014: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    func_80038B98_39798(rdram, ctx);
        goto after_435;
    // 0x80211014: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_435:
    // 0x80211018: jal         0x8003D310
    // 0x8021101C: addiu       $a0, $zero, 0x293
    ctx->r4 = ADD32(0, 0X293);
    func_8003D310_3DF10(rdram, ctx);
        goto after_436;
    // 0x8021101C: addiu       $a0, $zero, 0x293
    ctx->r4 = ADD32(0, 0X293);
    after_436:
    // 0x80211020: b           L_802110CC
    // 0x80211024: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_802110CC;
    // 0x80211024: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211028: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_8021102C:
    // 0x8021102C: addiu       $at, $zero, 0x1EA
    ctx->r1 = ADD32(0, 0X1EA);
    // 0x80211030: lh          $t5, 0x2($t8)
    ctx->r13 = MEM_H(ctx->r24, 0X2);
    // 0x80211034: bnel        $t5, $at, L_8021107C
    if (ctx->r13 != ctx->r1) {
        // 0x80211038: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_8021107C;
    }
    goto skip_98;
    // 0x80211038: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_98:
    // 0x8021103C: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x80211040: jal         0x8020D4B8
    // 0x80211044: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_437;
    // 0x80211044: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_437:
    // 0x80211048: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8021104C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80211050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80211054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211058: jal         0x8020D4D0
    // 0x8021105C: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_438;
    // 0x8021105C: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    after_438:
    // 0x80211060: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211064: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80211068: jal         0x8020D4EC
    // 0x8021106C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_439;
    // 0x8021106C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    after_439:
    // 0x80211070: b           L_802110CC
    // 0x80211074: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_802110CC;
    // 0x80211074: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211078: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_8021107C:
    // 0x8021107C: addiu       $at, $zero, 0x1FA
    ctx->r1 = ADD32(0, 0X1FA);
    // 0x80211080: lh          $t4, 0x2($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X2);
    // 0x80211084: bnel        $t4, $at, L_802110CC
    if (ctx->r12 != ctx->r1) {
        // 0x80211088: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_802110CC;
    }
    goto skip_99;
    // 0x80211088: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_99:
    // 0x8021108C: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80211090: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211094: addiu       $t7, $zero, 0x1D
    ctx->r15 = ADD32(0, 0X1D);
    // 0x80211098: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x8021109C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802110A0: jal         0x80034EF8
    // 0x802110A4: lw          $a0, 0x40($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X40);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_440;
    // 0x802110A4: lw          $a0, 0x40($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X40);
    after_440:
    // 0x802110A8: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x802110AC: sw          $zero, 0x40($t2)
    MEM_W(0X40, ctx->r10) = 0;
    // 0x802110B0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802110B4: jal         0x80034EF8
    // 0x802110B8: lw          $a0, 0x20($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X20);
    func_80034EF8_35AF8(rdram, ctx);
        goto after_441;
    // 0x802110B8: lw          $a0, 0x20($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X20);
    after_441:
    // 0x802110BC: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802110C0: jal         0x8020D8E4
    // 0x802110C4: sw          $zero, 0x20($t8)
    MEM_W(0X20, ctx->r24) = 0;
    func_8020D8E4_6772C4(rdram, ctx);
        goto after_442;
    // 0x802110C4: sw          $zero, 0x20($t8)
    MEM_W(0X20, ctx->r24) = 0;
    after_442:
    // 0x802110C8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_802110CC:
    // 0x802110CC: lh          $t3, 0x2($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X2);
    // 0x802110D0: slti        $at, $t3, 0xFB
    ctx->r1 = SIGNED(ctx->r11) < 0XFB ? 1 : 0;
    // 0x802110D4: bne         $at, $zero, L_80211D38
    if (ctx->r1 != 0) {
        // 0x802110D8: slti        $at, $t3, 0x190
        ctx->r1 = SIGNED(ctx->r11) < 0X190 ? 1 : 0;
            goto L_80211D38;
    }
    // 0x802110D8: slti        $at, $t3, 0x190
    ctx->r1 = SIGNED(ctx->r11) < 0X190 ? 1 : 0;
    // 0x802110DC: beq         $at, $zero, L_80211D38
    if (ctx->r1 == 0) {
        // 0x802110E0: sll         $t4, $t3, 10
        ctx->r12 = S32(ctx->r11 << 10);
            goto L_80211D38;
    }
    // 0x802110E0: sll         $t4, $t3, 10
    ctx->r12 = S32(ctx->r11 << 10);
    // 0x802110E4: sll         $t9, $t4, 4
    ctx->r25 = S32(ctx->r12 << 4);
    // 0x802110E8: lui         $at, 0xFFC5
    ctx->r1 = S32(0XFFC5 << 16);
    // 0x802110EC: ori         $at, $at, 0x6800
    ctx->r1 = ctx->r1 | 0X6800;
    // 0x802110F0: subu        $t9, $t9, $t4
    ctx->r25 = SUB32(ctx->r25, ctx->r12);
    // 0x802110F4: addu        $t7, $t9, $at
    ctx->r15 = ADD32(ctx->r25, ctx->r1);
    // 0x802110F8: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x802110FC: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80211100: mflo        $a0
    ctx->r4 = lo;
    // 0x80211104: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x80211108: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x8021110C: addiu       $t2, $zero, 0x190
    ctx->r10 = ADD32(0, 0X190);
    // 0x80211110: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80211114: subu        $t5, $t2, $t6
    ctx->r13 = SUB32(ctx->r10, ctx->r14);
    // 0x80211118: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8021111C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80211120: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80211124: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80211128: jal         0x80003E10
    // 0x8021112C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_443;
    // 0x8021112C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    after_443:
    // 0x80211130: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80211134: ldc1        $f8, -0x5800($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5800);
    // 0x80211138: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8021113C: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80211140: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80211144: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80211148: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8021114C: ldc1        $f8, -0x57F8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X57F8);
    // 0x80211150: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211154: lw          $a0, 0x40($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X40);
    // 0x80211158: mul.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8021115C: nop

    // 0x80211160: mul.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f18.d);
    // 0x80211164: add.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f6.d + ctx->f8.d;
    // 0x80211168: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x8021116C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80211170: jal         0x80214994
    // 0x80211174: nop

    func_80214994_67E374(rdram, ctx);
        goto after_444;
    // 0x80211174: nop

    after_444:
    // 0x80211178: b           L_80211D3C
    // 0x8021117C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021117C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80211180:
    // 0x80211180: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80211188: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8021118C: bnel        $t4, $at, L_802112E4
    if (ctx->r12 != ctx->r1) {
        // 0x80211190: lw          $t2, 0x7C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X7C);
            goto L_802112E4;
    }
    goto skip_100;
    // 0x80211190: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    skip_100:
    // 0x80211194: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x80211198: jal         0x8020D4B8
    // 0x8021119C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_445;
    // 0x8021119C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_445:
    // 0x802111A0: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x802111A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802111A8: jal         0x8020D4EC
    // 0x802111AC: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_446;
    // 0x802111AC: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    after_446:
    // 0x802111B0: jal         0x8020D74C
    // 0x802111B4: nop

    func_8020D74C_67712C(rdram, ctx);
        goto after_447;
    // 0x802111B4: nop

    after_447:
    // 0x802111B8: jal         0x8020D780
    // 0x802111BC: nop

    func_8020D780_677160(rdram, ctx);
        goto after_448;
    // 0x802111BC: nop

    after_448:
    // 0x802111C0: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x802111C4: lui         $a1, 0xC170
    ctx->r5 = S32(0XC170 << 16);
    // 0x802111C8: lui         $a2, 0xC0A0
    ctx->r6 = S32(0XC0A0 << 16);
    // 0x802111CC: jal         0x80217754
    // 0x802111D0: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    func_80217754_681134(rdram, ctx);
        goto after_449;
    // 0x802111D0: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    after_449:
    // 0x802111D4: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802111D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802111DC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802111E0: sw          $v0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r2;
    // 0x802111E4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802111E8: jal         0x80217700
    // 0x802111EC: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    func_80217700_6810E0(rdram, ctx);
        goto after_450;
    // 0x802111EC: lw          $a0, 0x28($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X28);
    after_450:
    // 0x802111F0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x802111F4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802111F8: jal         0x80217658
    // 0x802111FC: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    func_80217658_681038(rdram, ctx);
        goto after_451;
    // 0x802111FC: lw          $a0, 0x28($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X28);
    after_451:
    // 0x80211200: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80211204: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80211208: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    // 0x8021120C: jal         0x802179C0
    // 0x80211210: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_802179C0_6813A0(rdram, ctx);
        goto after_452;
    // 0x80211210: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_452:
    // 0x80211214: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80211218: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x8021121C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80211220: sw          $v0, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->r2;
    // 0x80211224: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211228: jal         0x80217970
    // 0x8021122C: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    func_80217970_681350(rdram, ctx);
        goto after_453;
    // 0x8021122C: lw          $a0, 0x2C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X2C);
    after_453:
    // 0x80211230: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211234: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80211238: jal         0x802178BC
    // 0x8021123C: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    func_802178BC_68129C(rdram, ctx);
        goto after_454;
    // 0x8021123C: lw          $a0, 0x2C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X2C);
    after_454:
    // 0x80211240: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211244: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x80211248: jal         0x80012500
    // 0x8021124C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_455;
    // 0x8021124C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_455:
    // 0x80211250: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80211254: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80211258: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x8021125C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x80211260: jal         0x80012818
    // 0x80211264: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_456;
    // 0x80211264: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_456:
    // 0x80211268: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x8021126C: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x80211270: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80211274: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x80211278: jal         0x800127B8
    // 0x8021127C: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_457;
    // 0x8021127C: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_457:
    // 0x80211280: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80211284: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80211288: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    // 0x8021128C: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x80211290: jal         0x800133E0
    // 0x80211294: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_458;
    // 0x80211294: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    after_458:
    // 0x80211298: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8021129C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802112A0: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x802112A4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x802112A8: jal         0x80013400
    // 0x802112AC: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    func_80013400_14000(rdram, ctx);
        goto after_459;
    // 0x802112AC: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_459:
    // 0x802112B0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802112B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802112B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802112BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x802112C0: jal         0x80013484
    // 0x802112C4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_460;
    // 0x802112C4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_460:
    // 0x802112C8: jal         0x80038B98
    // 0x802112CC: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_80038B98_39798(rdram, ctx);
        goto after_461;
    // 0x802112CC: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_461:
    // 0x802112D0: jal         0x8003D310
    // 0x802112D4: addiu       $a0, $zero, 0x294
    ctx->r4 = ADD32(0, 0X294);
    func_8003D310_3DF10(rdram, ctx);
        goto after_462;
    // 0x802112D4: addiu       $a0, $zero, 0x294
    ctx->r4 = ADD32(0, 0X294);
    after_462:
    // 0x802112D8: b           L_80211D3C
    // 0x802112DC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x802112DC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802112E0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
L_802112E4:
    // 0x802112E4: addiu       $at, $zero, 0x1A4
    ctx->r1 = ADD32(0, 0X1A4);
    // 0x802112E8: lh          $t6, 0x2($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X2);
    // 0x802112EC: bnel        $t6, $at, L_80211334
    if (ctx->r14 != ctx->r1) {
        // 0x802112F0: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_80211334;
    }
    goto skip_101;
    // 0x802112F0: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_101:
    // 0x802112F4: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x802112F8: jal         0x8020D4B8
    // 0x802112FC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_463;
    // 0x802112FC: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_463:
    // 0x80211300: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80211308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021130C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80211310: jal         0x8020D4D0
    // 0x80211314: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_464;
    // 0x80211314: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    after_464:
    // 0x80211318: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x8021131C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    // 0x80211320: jal         0x8020D4EC
    // 0x80211324: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_465;
    // 0x80211324: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    after_465:
    // 0x80211328: b           L_80211D3C
    // 0x8021132C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021132C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211330: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_80211334:
    // 0x80211334: addiu       $at, $zero, 0x1B4
    ctx->r1 = ADD32(0, 0X1B4);
    // 0x80211338: lh          $t4, 0x2($t8)
    ctx->r12 = MEM_H(ctx->r24, 0X2);
    // 0x8021133C: bnel        $t4, $at, L_80211D3C
    if (ctx->r12 != ctx->r1) {
        // 0x80211340: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_102;
    // 0x80211340: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_102:
    // 0x80211344: sh          $zero, 0x2($t8)
    MEM_H(0X2, ctx->r24) = 0;
    // 0x80211348: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8021134C: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x80211350: sb          $t3, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r11;
    // 0x80211354: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_80211358:
    // 0x80211358: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8021135C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80211360: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80211364: addu        $t2, $t7, $t6
    ctx->r10 = ADD32(ctx->r15, ctx->r14);
    // 0x80211368: lw          $t5, 0x20($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X20);
    // 0x8021136C: beql        $t5, $zero, L_80211394
    if (ctx->r13 == 0) {
        // 0x80211370: lw          $t9, 0x74($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X74);
            goto L_80211394;
    }
    goto skip_103;
    // 0x80211370: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    skip_103:
    // 0x80211374: jal         0x80034EF8
    // 0x80211378: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_466;
    // 0x80211378: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_466:
    // 0x8021137C: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x80211380: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211384: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80211388: addu        $t3, $t0, $t8
    ctx->r11 = ADD32(ctx->r8, ctx->r24);
    // 0x8021138C: sw          $zero, 0x20($t3)
    MEM_W(0X20, ctx->r11) = 0;
    // 0x80211390: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_80211394:
    // 0x80211394: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80211398: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8021139C: bne         $at, $zero, L_80211358
    if (ctx->r1 != 0) {
        // 0x802113A0: sw          $t1, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r9;
            goto L_80211358;
    }
    // 0x802113A0: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x802113A4: b           L_80211D3C
    // 0x802113A8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x802113A8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_802113AC:
    // 0x802113AC: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802113B0: lh          $t6, 0x2($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X2);
    // 0x802113B4: blez        $t6, L_80211424
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802113B8: slti        $at, $t6, 0x1A4
        ctx->r1 = SIGNED(ctx->r14) < 0X1A4 ? 1 : 0;
            goto L_80211424;
    }
    // 0x802113B8: slti        $at, $t6, 0x1A4
    ctx->r1 = SIGNED(ctx->r14) < 0X1A4 ? 1 : 0;
    // 0x802113BC: beql        $at, $zero, L_80211428
    if (ctx->r1 == 0) {
        // 0x802113C0: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_80211428;
    }
    goto skip_104;
    // 0x802113C0: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_104:
    // 0x802113C4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802113C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802113CC: ldc1        $f8, -0x57F0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X57F0);
    // 0x802113D0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802113D4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802113D8: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x802113DC: addiu       $a1, $a1, -0x61C8
    ctx->r5 = ADD32(ctx->r5, -0X61C8);
    // 0x802113E0: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x802113E4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x802113E8: div.d       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x802113EC: cvt.s.d     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f10.fl = CVT_S_D(ctx->f16.d);
    // 0x802113F0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802113F4: jal         0x800377F4
    // 0x802113F8: nop

    func_800377F4_383F4(rdram, ctx);
        goto after_467;
    // 0x802113F8: nop

    after_467:
    // 0x802113FC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80211400: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80211404: jal         0x800124A0
    // 0x80211408: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    func_800124A0_130A0(rdram, ctx);
        goto after_468;
    // 0x80211408: lw          $a0, 0x8($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X8);
    after_468:
    // 0x8021140C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211410: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80211414: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80211418: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x8021141C: jal         0x80012518
    // 0x80211420: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012518_13118(rdram, ctx);
        goto after_469;
    // 0x80211420: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_469:
L_80211424:
    // 0x80211424: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_80211428:
    // 0x80211428: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021142C: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x80211430: bnel        $t0, $at, L_80211594
    if (ctx->r8 != ctx->r1) {
        // 0x80211434: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80211594;
    }
    goto skip_105;
    // 0x80211434: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_105:
    // 0x80211438: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8021143C: jal         0x8020D4EC
    // 0x80211440: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_470;
    // 0x80211440: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_470:
    // 0x80211444: jal         0x8020D7B4
    // 0x80211448: nop

    func_8020D7B4_677194(rdram, ctx);
        goto after_471;
    // 0x80211448: nop

    after_471:
    // 0x8021144C: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80211450: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80211454: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80211458: jal         0x80214A8C
    // 0x8021145C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214A8C_67E46C(rdram, ctx);
        goto after_472;
    // 0x8021145C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_472:
    // 0x80211460: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211464: lui         $a1, 0x4440
    ctx->r5 = S32(0X4440 << 16);
    // 0x80211468: sw          $v0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r2;
    // 0x8021146C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211470: jal         0x802149AC
    // 0x80211474: lw          $a0, 0x40($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X40);
    func_802149AC_67E38C(rdram, ctx);
        goto after_473;
    // 0x80211474: lw          $a0, 0x40($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X40);
    after_473:
    // 0x80211478: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8021147C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x80211480: jal         0x80012500
    // 0x80211484: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_474;
    // 0x80211484: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_474:
    // 0x80211488: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8021148C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80211490: lui         $a2, 0x43A5
    ctx->r6 = S32(0X43A5 << 16);
    // 0x80211494: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x80211498: jal         0x80012818
    // 0x8021149C: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_475;
    // 0x8021149C: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_475:
    // 0x802114A0: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802114A4: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    // 0x802114A8: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x802114AC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x802114B0: jal         0x800127B8
    // 0x802114B4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_476;
    // 0x802114B4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_476:
    // 0x802114B8: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802114BC: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x802114C0: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802114C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x802114C8: jal         0x800133E0
    // 0x802114CC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_477;
    // 0x802114CC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    after_477:
    // 0x802114D0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x802114D4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802114D8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802114DC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x802114E0: jal         0x80013400
    // 0x802114E4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    func_80013400_14000(rdram, ctx);
        goto after_478;
    // 0x802114E4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    after_478:
    // 0x802114E8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802114EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802114F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802114F4: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x802114F8: jal         0x80013484
    // 0x802114FC: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_479;
    // 0x802114FC: lw          $a0, 0x4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X4);
    after_479:
    // 0x80211500: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211504: lw          $t4, 0x3C($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X3C);
    // 0x80211508: bnel        $t4, $zero, L_80211530
    if (ctx->r12 != 0) {
        // 0x8021150C: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_80211530;
    }
    goto skip_106;
    // 0x8021150C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_106:
    // 0x80211510: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80211514: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80211518: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021151C: jal         0x80214540
    // 0x80211520: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80214540_67DF20(rdram, ctx);
        goto after_480;
    // 0x80211520: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_480:
    // 0x80211524: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211528: sw          $v0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r2;
    // 0x8021152C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_80211530:
    // 0x80211530: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80211534: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80211538: lw          $a0, 0x3C($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X3C);
    // 0x8021153C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80211540: jal         0x80214340
    // 0x80211544: lui         $a3, 0xC3AF
    ctx->r7 = S32(0XC3AF << 16);
    func_80214340_67DD20(rdram, ctx);
        goto after_481;
    // 0x80211544: lui         $a3, 0xC3AF
    ctx->r7 = S32(0XC3AF << 16);
    after_481:
    // 0x80211548: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8021154C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80211550: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80211554: jal         0x802142F8
    // 0x80211558: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    func_802142F8_67DCD8(rdram, ctx);
        goto after_482;
    // 0x80211558: lw          $a0, 0x3C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X3C);
    after_482:
    // 0x8021155C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211560: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80211564: jal         0x802142EC
    // 0x80211568: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    func_802142EC_67DCCC(rdram, ctx);
        goto after_483;
    // 0x80211568: lw          $a0, 0x3C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X3C);
    after_483:
    // 0x8021156C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80211570: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80211574: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80211578: jal         0x8021439C
    // 0x8021157C: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    func_8021439C_67DD7C(rdram, ctx);
        goto after_484;
    // 0x8021157C: lw          $a0, 0x3C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X3C);
    after_484:
    // 0x80211580: jal         0x80038B98
    // 0x80211584: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    func_80038B98_39798(rdram, ctx);
        goto after_485;
    // 0x80211584: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_485:
    // 0x80211588: b           L_80211D3C
    // 0x8021158C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x8021158C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211590: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80211594:
    // 0x80211594: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80211598: lh          $t2, 0x2($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X2);
    // 0x8021159C: bnel        $t2, $at, L_802115D4
    if (ctx->r10 != ctx->r1) {
        // 0x802115A0: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_802115D4;
    }
    goto skip_107;
    // 0x802115A0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_107:
    // 0x802115A4: lw          $a0, 0x3C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X3C);
    // 0x802115A8: jal         0x802142EC
    // 0x802115AC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    func_802142EC_67DCCC(rdram, ctx);
        goto after_486;
    // 0x802115AC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_486:
    // 0x802115B0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802115B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x802115B8: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x802115BC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x802115C0: jal         0x80214450
    // 0x802115C4: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    func_80214450_67DE30(rdram, ctx);
        goto after_487;
    // 0x802115C4: lw          $a0, 0x3C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X3C);
    after_487:
    // 0x802115C8: b           L_80211D3C
    // 0x802115CC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x802115CC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802115D0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_802115D4:
    // 0x802115D4: addiu       $at, $zero, 0x1E0
    ctx->r1 = ADD32(0, 0X1E0);
    // 0x802115D8: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x802115DC: bnel        $t4, $at, L_80211D3C
    if (ctx->r12 != ctx->r1) {
        // 0x802115E0: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_108;
    // 0x802115E0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_108:
    // 0x802115E4: jal         0x8020D7E8
    // 0x802115E8: nop

    func_8020D7E8_6771C8(rdram, ctx);
        goto after_488;
    // 0x802115E8: nop

    after_488:
    // 0x802115EC: jal         0x8020D7B4
    // 0x802115F0: nop

    func_8020D7B4_677194(rdram, ctx);
        goto after_489;
    // 0x802115F0: nop

    after_489:
    // 0x802115F4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x802115F8: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802115FC: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x80211600: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80211604: jal         0x80013484
    // 0x80211608: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_490;
    // 0x80211608: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_490:
    // 0x8021160C: jal         0x80038B98
    // 0x80211610: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    func_80038B98_39798(rdram, ctx);
        goto after_491;
    // 0x80211610: ori         $a0, $zero, 0x8110
    ctx->r4 = 0 | 0X8110;
    after_491:
    // 0x80211614: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211618: lw          $t9, 0x3C($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X3C);
    // 0x8021161C: beql        $t9, $zero, L_80211638
    if (ctx->r25 == 0) {
        // 0x80211620: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_80211638;
    }
    goto skip_109;
    // 0x80211620: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_109:
    // 0x80211624: jal         0x80034EF8
    // 0x80211628: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_492;
    // 0x80211628: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_492:
    // 0x8021162C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211630: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    // 0x80211634: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_80211638:
    // 0x80211638: lw          $t2, 0x40($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X40);
    // 0x8021163C: beql        $t2, $zero, L_80211658
    if (ctx->r10 == 0) {
        // 0x80211640: lw          $t5, 0x7C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X7C);
            goto L_80211658;
    }
    goto skip_110;
    // 0x80211640: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    skip_110:
    // 0x80211644: jal         0x80034EF8
    // 0x80211648: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_493;
    // 0x80211648: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_493:
    // 0x8021164C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80211650: sw          $zero, 0x40($t6)
    MEM_W(0X40, ctx->r14) = 0;
    // 0x80211654: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
L_80211658:
    // 0x80211658: jal         0x80212664
    // 0x8021165C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_80212664_67C044(rdram, ctx);
        goto after_494;
    // 0x8021165C: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_494:
    // 0x80211660: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211664: lui         $a1, 0xC387
    ctx->r5 = S32(0XC387 << 16);
    // 0x80211668: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021166C: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    // 0x80211670: jal         0x802122D4
    // 0x80211674: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    func_802122D4_67BCB4(rdram, ctx);
        goto after_495;
    // 0x80211674: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    after_495:
    // 0x80211678: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x8021167C: addiu       $t4, $t4, -0x39FC
    ctx->r12 = ADD32(ctx->r12, -0X39FC);
    // 0x80211680: lw          $a0, 0x0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X0);
    // 0x80211684: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    // 0x80211688: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8021168C: jal         0x801DAC7C
    // 0x80211690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_496;
    // 0x80211690: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_496:
    // 0x80211694: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211698: jal         0x80212D90
    // 0x8021169C: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_80212D90_67C770(rdram, ctx);
        goto after_497;
    // 0x8021169C: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_497:
    // 0x802116A0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802116A4: lui         $a1, 0xC38C
    ctx->r5 = S32(0XC38C << 16);
    // 0x802116A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802116AC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x802116B0: jal         0x80212BB8
    // 0x802116B4: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    func_80212BB8_67C598(rdram, ctx);
        goto after_498;
    // 0x802116B4: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    after_498:
    // 0x802116B8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x802116BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802116C0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802116C4: jal         0x80212A04
    // 0x802116C8: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_499;
    // 0x802116C8: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_499:
    // 0x802116CC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802116D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802116D4: jal         0x802122A4
    // 0x802116D8: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_500;
    // 0x802116D8: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_500:
    // 0x802116DC: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802116E0: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    // 0x802116E4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x802116E8: jal         0x80212324
    // 0x802116EC: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    func_80212324_67BD04(rdram, ctx);
        goto after_501;
    // 0x802116EC: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    after_501:
    // 0x802116F0: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x802116F4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x802116F8: jal         0x80212BAC
    // 0x802116FC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_502;
    // 0x802116FC: lw          $a0, 0x14($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X14);
    after_502:
    // 0x80211700: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80211704: lui         $a1, 0xC3FA
    ctx->r5 = S32(0XC3FA << 16);
    // 0x80211708: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8021170C: jal         0x80212C08
    // 0x80211710: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212C08_67C5E8(rdram, ctx);
        goto after_503;
    // 0x80211710: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_503:
    // 0x80211714: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211718: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8021171C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211720: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80211724: jal         0x802122F4
    // 0x80211728: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_504;
    // 0x80211728: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_504:
    // 0x8021172C: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211730: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x80211734: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80211738: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x8021173C: jal         0x80212BD8
    // 0x80211740: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_505;
    // 0x80211740: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_505:
    // 0x80211744: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80211748: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8021174C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80211750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80211754: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80211758: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021175C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80211760: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80211764: div.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80211768: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021176C: addiu       $a1, $zero, 0x1400
    ctx->r5 = ADD32(0, 0X1400);
    // 0x80211770: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80211774: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x80211778: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x8021177C: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x80211780: jal         0x80012500
    // 0x80211784: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    func_80012500_13100(rdram, ctx);
        goto after_506;
    // 0x80211784: lw          $a0, 0x8($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X8);
    after_506:
    // 0x80211788: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x8021178C: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80211790: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x80211794: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x80211798: jal         0x80012818
    // 0x8021179C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    func_80012818_13418(rdram, ctx);
        goto after_507;
    // 0x8021179C: lw          $a0, 0x8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X8);
    after_507:
    // 0x802117A0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802117A4: lui         $a1, 0xC3A0
    ctx->r5 = S32(0XC3A0 << 16);
    // 0x802117A8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x802117AC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x802117B0: jal         0x800127B8
    // 0x802117B4: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    func_800127B8_133B8(rdram, ctx);
        goto after_508;
    // 0x802117B4: lw          $a0, 0x8($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X8);
    after_508:
    // 0x802117B8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x802117BC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802117C0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802117C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x802117C8: jal         0x80013400
    // 0x802117CC: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    func_80013400_14000(rdram, ctx);
        goto after_509;
    // 0x802117CC: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    after_509:
    // 0x802117D0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802117D4: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x802117D8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x802117DC: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x802117E0: jal         0x80013484
    // 0x802117E4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    func_80013484_14084(rdram, ctx);
        goto after_510;
    // 0x802117E4: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    after_510:
    // 0x802117E8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x802117EC: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x802117F0: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802117F4: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    // 0x802117F8: jal         0x800133E0
    // 0x802117FC: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    func_800133E0_13FE0(rdram, ctx);
        goto after_511;
    // 0x802117FC: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    after_511:
    // 0x80211800: jal         0x8003D310
    // 0x80211804: addiu       $a0, $zero, 0x295
    ctx->r4 = ADD32(0, 0X295);
    func_8003D310_3DF10(rdram, ctx);
        goto after_512;
    // 0x80211804: addiu       $a0, $zero, 0x295
    ctx->r4 = ADD32(0, 0X295);
    after_512:
    // 0x80211808: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8021180C: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x80211810: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x80211814: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211818: b           L_80211D38
    // 0x8021181C: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
        goto L_80211D38;
    // 0x8021181C: sb          $t6, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r14;
L_80211820:
    // 0x80211820: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211824: addiu       $at, $zero, 0x1B8
    ctx->r1 = ADD32(0, 0X1B8);
    // 0x80211828: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x8021182C: bnel        $t4, $at, L_80211840
    if (ctx->r12 != ctx->r1) {
        // 0x80211830: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_80211840;
    }
    goto skip_111;
    // 0x80211830: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_111:
    // 0x80211834: jal         0x8003D310
    // 0x80211838: addiu       $a0, $zero, 0x296
    ctx->r4 = ADD32(0, 0X296);
    func_8003D310_3DF10(rdram, ctx);
        goto after_513;
    // 0x80211838: addiu       $a0, $zero, 0x296
    ctx->r4 = ADD32(0, 0X296);
    after_513:
    // 0x8021183C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_80211840:
    // 0x80211840: addiu       $at, $zero, 0x28A
    ctx->r1 = ADD32(0, 0X28A);
    // 0x80211844: lh          $t3, 0x2($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X2);
    // 0x80211848: bnel        $t3, $at, L_80211898
    if (ctx->r11 != ctx->r1) {
        // 0x8021184C: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_80211898;
    }
    goto skip_112;
    // 0x8021184C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_112:
    // 0x80211850: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x80211854: jal         0x802122A4
    // 0x80211858: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_514;
    // 0x80211858: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_514:
    // 0x8021185C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80211860: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x80211864: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80211868: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x8021186C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80211870: jal         0x801DAC7C
    // 0x80211874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_515;
    // 0x80211874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_515:
    // 0x80211878: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x8021187C: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x80211880: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80211884: jal         0x80212440
    // 0x80211888: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_516;
    // 0x80211888: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    after_516:
    // 0x8021188C: b           L_80211958
    // 0x80211890: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211958;
    // 0x80211890: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211894: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_80211898:
    // 0x80211898: addiu       $at, $zero, 0x29E
    ctx->r1 = ADD32(0, 0X29E);
    // 0x8021189C: lh          $t2, 0x2($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X2);
    // 0x802118A0: bnel        $t2, $at, L_802118F0
    if (ctx->r10 != ctx->r1) {
        // 0x802118A4: lw          $t0, 0x7C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X7C);
            goto L_802118F0;
    }
    goto skip_113;
    // 0x802118A4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    skip_113:
    // 0x802118A8: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x802118AC: jal         0x802122A4
    // 0x802118B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_802122A4_67BC84(rdram, ctx);
        goto after_517;
    // 0x802118B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_517:
    // 0x802118B4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x802118B8: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x802118BC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802118C0: jal         0x80212440
    // 0x802118C4: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    func_80212440_67BE20(rdram, ctx);
        goto after_518;
    // 0x802118C4: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    after_518:
    // 0x802118C8: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x802118CC: addiu       $t5, $t5, -0x39FC
    ctx->r13 = ADD32(ctx->r13, -0X39FC);
    // 0x802118D0: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x802118D4: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x802118D8: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x802118DC: jal         0x801DAC7C
    // 0x802118E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_519;
    // 0x802118E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_519:
    // 0x802118E4: b           L_80211958
    // 0x802118E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211958;
    // 0x802118E8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x802118EC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
L_802118F0:
    // 0x802118F0: addiu       $at, $zero, 0x2B2
    ctx->r1 = ADD32(0, 0X2B2);
    // 0x802118F4: lh          $t4, 0x2($t0)
    ctx->r12 = MEM_H(ctx->r8, 0X2);
    // 0x802118F8: bnel        $t4, $at, L_80211958
    if (ctx->r12 != ctx->r1) {
        // 0x802118FC: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211958;
    }
    goto skip_114;
    // 0x802118FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_114:
    // 0x80211900: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80211904: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211908: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x8021190C: jal         0x80212BD8
    // 0x80211910: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_520;
    // 0x80211910: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_520:
    // 0x80211914: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211918: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x8021191C: jal         0x802122A4
    // 0x80211920: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_521;
    // 0x80211920: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_521:
    // 0x80211924: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211928: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8021192C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80211930: jal         0x80212324
    // 0x80211934: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    func_80212324_67BD04(rdram, ctx);
        goto after_522;
    // 0x80211934: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    after_522:
    // 0x80211938: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x8021193C: addiu       $t9, $t9, -0x39FC
    ctx->r25 = ADD32(ctx->r25, -0X39FC);
    // 0x80211940: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80211944: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x80211948: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x8021194C: jal         0x801DAC7C
    // 0x80211950: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_523;
    // 0x80211950: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_523:
    // 0x80211954: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80211958:
    // 0x80211958: addiu       $at, $zero, 0x29E
    ctx->r1 = ADD32(0, 0X29E);
    // 0x8021195C: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x80211960: bnel        $t2, $at, L_802119C0
    if (ctx->r10 != ctx->r1) {
        // 0x80211964: lw          $t4, 0x7C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X7C);
            goto L_802119C0;
    }
    goto skip_115;
    // 0x80211964: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    skip_115:
    // 0x80211968: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    // 0x8021196C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211970: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211974: jal         0x802122F4
    // 0x80211978: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_524;
    // 0x80211978: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_524:
    // 0x8021197C: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80211980: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80211984: jal         0x80212BAC
    // 0x80211988: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_525;
    // 0x80211988: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    after_525:
    // 0x8021198C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80211990: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80211994: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80211998: jal         0x80212A04
    // 0x8021199C: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_526;
    // 0x8021199C: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    after_526:
    // 0x802119A0: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x802119A4: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x802119A8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x802119AC: jal         0x80212C08
    // 0x802119B0: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_80212C08_67C5E8(rdram, ctx);
        goto after_527;
    // 0x802119B0: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_527:
    // 0x802119B4: b           L_80211AF4
    // 0x802119B8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
        goto L_80211AF4;
    // 0x802119B8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802119BC: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
L_802119C0:
    // 0x802119C0: addiu       $at, $zero, 0x2E4
    ctx->r1 = ADD32(0, 0X2E4);
    // 0x802119C4: lh          $t0, 0x2($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X2);
    // 0x802119C8: bnel        $t0, $at, L_802119EC
    if (ctx->r8 != ctx->r1) {
        // 0x802119CC: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_802119EC;
    }
    goto skip_116;
    // 0x802119CC: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_116:
    // 0x802119D0: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    // 0x802119D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802119D8: jal         0x80212A04
    // 0x802119DC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_528;
    // 0x802119DC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_528:
    // 0x802119E0: b           L_80211AF4
    // 0x802119E4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
        goto L_80211AF4;
    // 0x802119E4: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x802119E8: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_802119EC:
    // 0x802119EC: addiu       $at, $zero, 0x44C
    ctx->r1 = ADD32(0, 0X44C);
    // 0x802119F0: lh          $t8, 0x2($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X2);
    // 0x802119F4: bnel        $t8, $at, L_80211A18
    if (ctx->r24 != ctx->r1) {
        // 0x802119F8: lw          $t9, 0x7C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X7C);
            goto L_80211A18;
    }
    goto skip_117;
    // 0x802119F8: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    skip_117:
    // 0x802119FC: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    // 0x80211A00: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80211A04: jal         0x80212A04
    // 0x80211A08: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_529;
    // 0x80211A08: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_529:
    // 0x80211A0C: b           L_80211AF4
    // 0x80211A10: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
        goto L_80211AF4;
    // 0x80211A10: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211A14: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
L_80211A18:
    // 0x80211A18: addiu       $at, $zero, 0x49C
    ctx->r1 = ADD32(0, 0X49C);
    // 0x80211A1C: lh          $t2, 0x2($t9)
    ctx->r10 = MEM_H(ctx->r25, 0X2);
    // 0x80211A20: bnel        $t2, $at, L_80211A80
    if (ctx->r10 != ctx->r1) {
        // 0x80211A24: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80211A80;
    }
    goto skip_118;
    // 0x80211A24: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_118:
    // 0x80211A28: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    // 0x80211A2C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211A30: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211A34: jal         0x80212BD8
    // 0x80211A38: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_530;
    // 0x80211A38: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_530:
    // 0x80211A3C: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211A40: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80211A44: jal         0x80212BAC
    // 0x80211A48: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_531;
    // 0x80211A48: lw          $a0, 0x14($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X14);
    after_531:
    // 0x80211A4C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80211A50: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80211A54: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80211A58: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x80211A5C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80211A60: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80211A64: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80211A68: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80211A6C: jal         0x80212C08
    // 0x80211A70: nop

    func_80212C08_67C5E8(rdram, ctx);
        goto after_532;
    // 0x80211A70: nop

    after_532:
    // 0x80211A74: b           L_80211AF4
    // 0x80211A78: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
        goto L_80211AF4;
    // 0x80211A78: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80211A7C: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80211A80:
    // 0x80211A80: addiu       $at, $zero, 0x4C4
    ctx->r1 = ADD32(0, 0X4C4);
    // 0x80211A84: lh          $t5, 0x2($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X2);
    // 0x80211A88: bnel        $t5, $at, L_80211AF4
    if (ctx->r13 != ctx->r1) {
        // 0x80211A8C: lw          $t3, 0x7C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X7C);
            goto L_80211AF4;
    }
    goto skip_119;
    // 0x80211A8C: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    skip_119:
    // 0x80211A90: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x80211A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80211A98: jal         0x80212A04
    // 0x80211A9C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_80212A04_67C3E4(rdram, ctx);
        goto after_533;
    // 0x80211A9C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_533:
    // 0x80211AA0: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211AA4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211AA8: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211AAC: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80211AB0: jal         0x80212BD8
    // 0x80211AB4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_534;
    // 0x80211AB4: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    after_534:
    // 0x80211AB8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80211ABC: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80211AC0: jal         0x80212BAC
    // 0x80211AC4: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    func_80212BAC_67C58C(rdram, ctx);
        goto after_535;
    // 0x80211AC4: lw          $a0, 0x14($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14);
    after_535:
    // 0x80211AC8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80211ACC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80211AD0: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80211AD4: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211AD8: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80211ADC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80211AE0: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x80211AE4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80211AE8: jal         0x80212CBC
    // 0x80211AEC: nop

    func_80212CBC_67C69C(rdram, ctx);
        goto after_536;
    // 0x80211AEC: nop

    after_536:
    // 0x80211AF0: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
L_80211AF4:
    // 0x80211AF4: lh          $t2, 0x2($t3)
    ctx->r10 = MEM_H(ctx->r11, 0X2);
    // 0x80211AF8: slti        $at, $t2, 0x5BF
    ctx->r1 = SIGNED(ctx->r10) < 0X5BF ? 1 : 0;
    // 0x80211AFC: bnel        $at, $zero, L_80211B1C
    if (ctx->r1 != 0) {
        // 0x80211B00: lw          $t7, 0x7C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X7C);
            goto L_80211B1C;
    }
    goto skip_120;
    // 0x80211B00: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    skip_120:
    // 0x80211B04: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80211B08: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211B0C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x80211B10: b           L_80211B64
    // 0x80211B14: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
        goto L_80211B64;
    // 0x80211B14: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x80211B18: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
L_80211B1C:
    // 0x80211B1C: lh          $t5, 0x2($t7)
    ctx->r13 = MEM_H(ctx->r15, 0X2);
    // 0x80211B20: slti        $at, $t5, 0x4C5
    ctx->r1 = SIGNED(ctx->r13) < 0X4C5 ? 1 : 0;
    // 0x80211B24: bnel        $at, $zero, L_80211B68
    if (ctx->r1 != 0) {
        // 0x80211B28: lw          $t8, 0x7C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X7C);
            goto L_80211B68;
    }
    goto skip_121;
    // 0x80211B28: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    skip_121:
    // 0x80211B2C: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x80211B30: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211B34: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211B38: jal         0x80212BD8
    // 0x80211B3C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_537;
    // 0x80211B3C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_537:
    // 0x80211B40: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80211B44: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x80211B48: jal         0x802122A4
    // 0x80211B4C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_538;
    // 0x80211B4C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    after_538:
    // 0x80211B50: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211B54: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x80211B58: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80211B5C: jal         0x80212324
    // 0x80211B60: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    func_80212324_67BD04(rdram, ctx);
        goto after_539;
    // 0x80211B60: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    after_539:
L_80211B64:
    // 0x80211B64: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
L_80211B68:
    // 0x80211B68: addiu       $t4, $zero, 0x4C4
    ctx->r12 = ADD32(0, 0X4C4);
    // 0x80211B6C: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
    // 0x80211B70: lh          $t2, 0x2($t8)
    ctx->r10 = MEM_H(ctx->r24, 0X2);
    // 0x80211B74: slti        $at, $t2, 0x4C4
    ctx->r1 = SIGNED(ctx->r10) < 0X4C4 ? 1 : 0;
    // 0x80211B78: bne         $at, $zero, L_80211D38
    if (ctx->r1 != 0) {
        // 0x80211B7C: addiu       $t3, $t2, -0x4C4
        ctx->r11 = ADD32(ctx->r10, -0X4C4);
            goto L_80211D38;
    }
    // 0x80211B7C: addiu       $t3, $t2, -0x4C4
    ctx->r11 = ADD32(ctx->r10, -0X4C4);
    // 0x80211B80: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80211B84: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x80211B88: mfhi        $t9
    ctx->r25 = hi;
    // 0x80211B8C: bnel        $t9, $zero, L_80211D3C
    if (ctx->r25 != 0) {
        // 0x80211B90: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_122;
    // 0x80211B90: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_122:
    // 0x80211B94: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x80211B98: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211B9C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211BA0: jal         0x80212BD8
    // 0x80211BA4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_80212BD8_67C5B8(rdram, ctx);
        goto after_540;
    // 0x80211BA4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_540:
    // 0x80211BA8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80211BAC: jal         0x80012938
    // 0x80211BB0: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_541;
    // 0x80211BB0: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_541:
    // 0x80211BB4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80211BB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80211BBC: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80211BC0: addiu       $a0, $zero, 0x219
    ctx->r4 = ADD32(0, 0X219);
    // 0x80211BC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80211BC8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80211BCC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80211BD0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80211BD4: jal         0x8000F6E8
    // 0x80211BD8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_542;
    // 0x80211BD8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_542:
    // 0x80211BDC: b           L_80211D3C
    // 0x80211BE0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80211BE0: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80211BE4:
    // 0x80211BE4: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211BE8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x80211BEC: lh          $t7, 0x2($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X2);
    // 0x80211BF0: bnel        $t7, $at, L_80211D3C
    if (ctx->r15 != ctx->r1) {
        // 0x80211BF4: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_123;
    // 0x80211BF4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_123:
    // 0x80211BF8: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x80211BFC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C00: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x80211C04: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211C08: sb          $t6, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r14;
    // 0x80211C0C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C10: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211C14: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x80211C18: jal         0x802122F4
    // 0x80211C1C: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_543;
    // 0x80211C1C: lw          $a0, 0x10($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X10);
    after_543:
    // 0x80211C20: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C24: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80211C28: jal         0x802122A4
    // 0x80211C2C: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    func_802122A4_67BC84(rdram, ctx);
        goto after_544;
    // 0x80211C2C: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    after_544:
    // 0x80211C30: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80211C34: addiu       $t3, $t3, -0x39FC
    ctx->r11 = ADD32(ctx->r11, -0X39FC);
    // 0x80211C38: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x80211C3C: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    // 0x80211C40: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    // 0x80211C44: jal         0x801DAC7C
    // 0x80211C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_545;
    // 0x80211C48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_545:
    // 0x80211C4C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80211C50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80211C54: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80211C58: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C5C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80211C60: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80211C64: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x80211C68: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80211C6C: jal         0x80212440
    // 0x80211C70: nop

    func_80212440_67BE20(rdram, ctx);
        goto after_546;
    // 0x80211C70: nop

    after_546:
    // 0x80211C74: b           L_80211D3C
    // 0x80211C78: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
        goto L_80211D3C;
    // 0x80211C78: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80211C7C:
    // 0x80211C7C: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80211C80: lh          $t1, 0x2($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X2);
    // 0x80211C84: bltz        $t1, L_80211CEC
    if (SIGNED(ctx->r9) < 0) {
        // 0x80211C88: slti        $at, $t1, 0x79
        ctx->r1 = SIGNED(ctx->r9) < 0X79 ? 1 : 0;
            goto L_80211CEC;
    }
    // 0x80211C88: slti        $at, $t1, 0x79
    ctx->r1 = SIGNED(ctx->r9) < 0X79 ? 1 : 0;
    // 0x80211C8C: beq         $at, $zero, L_80211CEC
    if (ctx->r1 == 0) {
        // 0x80211C90: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80211CEC;
    }
    // 0x80211C90: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80211C94: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x80211C98: mfhi        $t7
    ctx->r15 = hi;
    // 0x80211C9C: bnel        $t7, $zero, L_80211CF0
    if (ctx->r15 != 0) {
        // 0x80211CA0: lw          $t6, 0x7C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X7C);
            goto L_80211CF0;
    }
    goto skip_124;
    // 0x80211CA0: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    skip_124:
    // 0x80211CA4: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x80211CA8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80211CAC: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80211CB0: jal         0x802122F4
    // 0x80211CB4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_802122F4_67BCD4(rdram, ctx);
        goto after_547;
    // 0x80211CB4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_547:
    // 0x80211CB8: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80211CBC: jal         0x80012938
    // 0x80211CC0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    func_80012938_13538(rdram, ctx);
        goto after_548;
    // 0x80211CC0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_548:
    // 0x80211CC4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80211CC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80211CCC: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80211CD0: addiu       $a0, $zero, 0x217
    ctx->r4 = ADD32(0, 0X217);
    // 0x80211CD4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80211CD8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80211CDC: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x80211CE0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80211CE4: jal         0x8000F6E8
    // 0x80211CE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000F6E8_102E8(rdram, ctx);
        goto after_549;
    // 0x80211CE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_549:
L_80211CEC:
    // 0x80211CEC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
L_80211CF0:
    // 0x80211CF0: lh          $t0, 0x2($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X2);
    // 0x80211CF4: slti        $at, $t0, 0x79
    ctx->r1 = SIGNED(ctx->r8) < 0X79 ? 1 : 0;
    // 0x80211CF8: bnel        $at, $zero, L_80211D3C
    if (ctx->r1 != 0) {
        // 0x80211CFC: lw          $t1, 0x7C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X7C);
            goto L_80211D3C;
    }
    goto skip_125;
    // 0x80211CFC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    skip_125:
    // 0x80211D00: jal         0x8003F5FC
    // 0x80211D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F5FC_401FC(rdram, ctx);
        goto after_550;
    // 0x80211D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_550:
    // 0x80211D08: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80211D0C: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x80211D10: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80211D14: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80211D18: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80211D1C: sb          $t4, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r12;
    // 0x80211D20: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80211D24: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x80211D28: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80211D2C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80211D30: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80211D34: sb          $t3, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r11;
L_80211D38:
    // 0x80211D38: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
L_80211D3C:
    // 0x80211D3C: lh          $t7, 0x2($t1)
    ctx->r15 = MEM_H(ctx->r9, 0X2);
    // 0x80211D40: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80211D44: sh          $t8, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r24;
    // 0x80211D48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80211D4C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80211D50: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80211D54: jr          $ra
    // 0x80211D58: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80211D58: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80212550_67BF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80212554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212558: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8021255C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80212560: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80212564: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80212568: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x8021256C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80212570: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    // 0x80212574: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80212578: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021257C: bc1f        L_8021259C
    if (!c1cs) {
        // 0x80212580: swc1        $f4, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
            goto L_8021259C;
    }
    // 0x80212580: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    // 0x80212584: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80212588: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021258C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212590: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80212594: b           L_802125A8
    // 0x80212598: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802125A8;
    // 0x80212598: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8021259C:
    // 0x8021259C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802125A0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802125A4: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
L_802125A8:
    // 0x802125A8: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802125AC: lwc1        $f2, 0x1C($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802125B0: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x802125B4: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802125B8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802125BC: nop

    // 0x802125C0: bc1f        L_802125D4
    if (!c1cs) {
        // 0x802125C4: swc1        $f6, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
            goto L_802125D4;
    }
    // 0x802125C4: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x802125C8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802125CC: b           L_802125D8
    // 0x802125D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802125D8;
    // 0x802125D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802125D4:
    // 0x802125D4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802125D8:
    // 0x802125D8: div.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802125DC: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802125E0: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802125E4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802125E8: nop

    // 0x802125EC: bc1f        L_80212600
    if (!c1cs) {
        // 0x802125F0: swc1        $f8, 0x20($v1)
        MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
            goto L_80212600;
    }
    // 0x802125F0: swc1        $f8, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f8.u32l;
    // 0x802125F4: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802125F8: b           L_80212608
    // 0x802125FC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80212608;
    // 0x802125FC: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_80212600:
    // 0x80212600: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80212604: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80212608:
    // 0x80212608: div.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8021260C: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80212610: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80212614: sub.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80212618: swc1        $f10, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f10.u32l;
    // 0x8021261C: jal         0x800040A8
    // 0x80212620: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x80212620: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80212624: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80212628: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021262C: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x80212630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80212634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212638: jr          $ra
    // 0x8021263C: nop

    TRACE_RETURN()
    return;
    // 0x8021263C: nop

;}
RECOMP_FUNC void func_8022833C_691D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022833C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80228340: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228344: sb          $v1, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r3;
    // 0x80228348: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x8022834C: jr          $ra
    // 0x80228350: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80228350: sb          $v1, 0x64($t6)
    MEM_B(0X64, ctx->r14) = ctx->r3;
;}
RECOMP_FUNC void func_8021F908_6892E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F908: jr          $ra
    // 0x8021F90C: nop

    TRACE_RETURN()
    return;
    // 0x8021F90C: nop

;}
RECOMP_FUNC void func_8021B140_684B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B140: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021B144: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x8021B148: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021B14C: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8021B150: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8021B154: jr          $ra
    // 0x8021B158: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B158: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80213EB0_67D890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213EB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80213EB4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80213EB8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80213EBC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80213EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213EC4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80213EC8: bne         $a0, $zero, L_80213ED8
    if (ctx->r4 != 0) {
        // 0x80213ECC: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80213ED8;
    }
    // 0x80213ECC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80213ED0: b           L_80213F88
    // 0x80213ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213F88;
    // 0x80213ED4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213ED8:
    // 0x80213ED8: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x80213EDC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80213EE0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80213EE4: addu        $v1, $t8, $t0
    ctx->r3 = ADD32(ctx->r24, ctx->r8);
    // 0x80213EE8: lw          $a1, 0x84($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X84);
    // 0x80213EEC: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80213EF0: bnel        $a1, $zero, L_80213F04
    if (ctx->r5 != 0) {
        // 0x80213EF4: lbu         $a0, 0x0($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X0);
            goto L_80213F04;
    }
    goto skip_0;
    // 0x80213EF4: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    skip_0:
    // 0x80213EF8: b           L_80213F88
    // 0x80213EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213F88;
    // 0x80213EFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213F00: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_80213F04:
    // 0x80213F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213F08: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80213F0C: bne         $at, $zero, L_80213F84
    if (ctx->r1 != 0) {
        // 0x80213F10: addiu       $t1, $a0, 0x1
        ctx->r9 = ADD32(ctx->r4, 0X1);
            goto L_80213F84;
    }
    // 0x80213F10: addiu       $t1, $a0, 0x1
    ctx->r9 = ADD32(ctx->r4, 0X1);
    // 0x80213F14: lbu         $a3, 0x1($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X1);
    // 0x80213F18: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x80213F1C: addiu       $a0, $a3, 0x1
    ctx->r4 = ADD32(ctx->r7, 0X1);
    // 0x80213F20: andi        $t1, $a0, 0xFF
    ctx->r9 = ctx->r4 & 0XFF;
    // 0x80213F24: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80213F28: addu        $v0, $a1, $t2
    ctx->r2 = ADD32(ctx->r5, ctx->r10);
    // 0x80213F2C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80213F30: addiu       $t4, $a3, 0x1
    ctx->r12 = ADD32(ctx->r7, 0X1);
    // 0x80213F34: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80213F38: lhu         $a2, 0x4($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X4);
    // 0x80213F3C: beq         $a2, $zero, L_80213F7C
    if (ctx->r6 == 0) {
        // 0x80213F40: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80213F7C;
    }
    // 0x80213F40: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80213F44: sb          $t4, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r12;
    // 0x80213F48: jal         0x80014840
    // 0x80213F4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80014840_15440(rdram, ctx);
        goto after_0;
    // 0x80213F4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x80213F50: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x80213F54: lui         $t9, 0x8023
    ctx->r25 = S32(0X8023 << 16);
    // 0x80213F58: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80213F5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80213F60: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80213F64: lw          $t9, -0x5FB8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5FB8);
    // 0x80213F68: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x80213F6C: addu        $t0, $t5, $t8
    ctx->r8 = ADD32(ctx->r13, ctx->r24);
    // 0x80213F70: sw          $v0, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r2;
    // 0x80213F74: b           L_80213F88
    // 0x80213F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80213F88;
    // 0x80213F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80213F7C:
    // 0x80213F7C: b           L_80213F88
    // 0x80213F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213F88;
    // 0x80213F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213F84:
    // 0x80213F84: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
L_80213F88:
    // 0x80213F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213F8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80213F90: jr          $ra
    // 0x80213F94: nop

    TRACE_RETURN()
    return;
    // 0x80213F94: nop

;}
RECOMP_FUNC void func_8021C3F4_685DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C3F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021C3F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021C3FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021C400: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8021C404: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C408: ldc1        $f4, -0x5320($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5320);
    // 0x8021C40C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021C410: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8021C414: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8021C418: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8021C41C: addiu       $t1, $a0, 0x5C
    ctx->r9 = ADD32(ctx->r4, 0X5C);
    // 0x8021C420: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C424: bc1f        L_8021C49C
    if (!c1cs) {
        // 0x8021C428: addiu       $v1, $v1, -0x4CDC
        ctx->r3 = ADD32(ctx->r3, -0X4CDC);
            goto L_8021C49C;
    }
    // 0x8021C428: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8021C42C: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x8021C430: lwc1        $f2, 0x24($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X24);
    // 0x8021C434: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021C438: nop

    // 0x8021C43C: bc1fl       L_8021C454
    if (!c1cs) {
        // 0x8021C440: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021C454;
    }
    goto skip_0;
    // 0x8021C440: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_0:
    // 0x8021C444: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021C448: b           L_8021C454
    // 0x8021C44C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C454;
    // 0x8021C44C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C450: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021C454:
    // 0x8021C454: lwc1        $f14, 0x14($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X14);
    // 0x8021C458: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021C45C: nop

    // 0x8021C460: bc1fl       L_8021C47C
    if (!c1cs) {
        // 0x8021C464: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021C47C;
    }
    goto skip_1;
    // 0x8021C464: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_1:
    // 0x8021C468: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021C46C: swc1        $f12, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f12.u32l;
    // 0x8021C470: b           L_8021C49C
    // 0x8021C474: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
        goto L_8021C49C;
    // 0x8021C474: swc1        $f10, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f10.u32l;
    // 0x8021C478: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021C47C:
    // 0x8021C47C: nop

    // 0x8021C480: bc1fl       L_8021C498
    if (!c1cs) {
        // 0x8021C484: add.s       $f6, $f2, $f14
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021C498;
    }
    goto skip_2;
    // 0x8021C484: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
    skip_2:
    // 0x8021C488: sub.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021C48C: b           L_8021C49C
    // 0x8021C490: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
        goto L_8021C49C;
    // 0x8021C490: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x8021C494: add.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f14.fl;
L_8021C498:
    // 0x8021C498: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
L_8021C49C:
    // 0x8021C49C: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8021C4A0: ldc1        $f16, -0x5318($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5318);
    // 0x8021C4A4: addiu       $t1, $a0, 0x5C
    ctx->r9 = ADD32(ctx->r4, 0X5C);
    // 0x8021C4A8: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8021C4AC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x8021C4B0: lwc1        $f14, 0x10($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X10);
    // 0x8021C4B4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x8021C4B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021C4BC: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8021C4C0: c.lt.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d < ctx->f4.d;
    // 0x8021C4C4: nop

    // 0x8021C4C8: bc1fl       L_8021C568
    if (!c1cs) {
        // 0x8021C4CC: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8021C568;
    }
    goto skip_3;
    // 0x8021C4CC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x8021C4D0: lwc1        $f12, 0xC($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8021C4D4: lwc1        $f2, 0x8($t1)
    ctx->f2.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021C4D8: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021C4DC: nop

    // 0x8021C4E0: bc1fl       L_8021C4F8
    if (!c1cs) {
        // 0x8021C4E4: sub.s       $f0, $f12, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
            goto L_8021C4F8;
    }
    goto skip_4;
    // 0x8021C4E4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    skip_4:
    // 0x8021C4E8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x8021C4EC: b           L_8021C4F8
    // 0x8021C4F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C4F8;
    // 0x8021C4F0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C4F4: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_8021C4F8:
    // 0x8021C4F8: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8021C4FC: nop

    // 0x8021C500: bc1fl       L_8021C51C
    if (!c1cs) {
        // 0x8021C504: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_8021C51C;
    }
    goto skip_5;
    // 0x8021C504: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_5:
    // 0x8021C508: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021C50C: swc1        $f12, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f12.u32l;
    // 0x8021C510: b           L_8021C53C
    // 0x8021C514: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
        goto L_8021C53C;
    // 0x8021C514: swc1        $f8, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f8.u32l;
    // 0x8021C518: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_8021C51C:
    // 0x8021C51C: nop

    // 0x8021C520: bc1fl       L_8021C538
    if (!c1cs) {
        // 0x8021C524: add.s       $f18, $f2, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
            goto L_8021C538;
    }
    goto skip_6;
    // 0x8021C524: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    skip_6:
    // 0x8021C528: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x8021C52C: b           L_8021C53C
    // 0x8021C530: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
        goto L_8021C53C;
    // 0x8021C530: swc1        $f10, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f10.u32l;
    // 0x8021C534: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
L_8021C538:
    // 0x8021C538: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
L_8021C53C:
    // 0x8021C53C: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021C540: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8021C544: c.lt.d      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.d < ctx->f16.d;
    // 0x8021C548: nop

    // 0x8021C54C: bc1fl       L_8021C568
    if (!c1cs) {
        // 0x8021C550: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8021C568;
    }
    goto skip_7;
    // 0x8021C550: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_7:
    // 0x8021C554: jal         0x80034ED4
    // 0x8021C558: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x8021C558: nop

    after_0:
    // 0x8021C55C: b           L_8021C720
    // 0x8021C560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021C720;
    // 0x8021C560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021C564: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_8021C568:
    // 0x8021C568: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8021C56C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021C570: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8021C574: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x8021C578: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021C57C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021C580: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8021C584: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8021C588: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021C58C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021C590: nop

    // 0x8021C594: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021C598: beql        $t9, $zero, L_8021C5E8
    if (ctx->r25 == 0) {
        // 0x8021C59C: mfc1        $t9, $f10
        ctx->r25 = (int32_t)ctx->f10.u32l;
            goto L_8021C5E8;
    }
    goto skip_8;
    // 0x8021C59C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    skip_8:
    // 0x8021C5A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021C5A4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8021C5A8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021C5AC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8021C5B0: nop

    // 0x8021C5B4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8021C5B8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8021C5BC: nop

    // 0x8021C5C0: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8021C5C4: bne         $t9, $zero, L_8021C5DC
    if (ctx->r25 != 0) {
        // 0x8021C5C8: nop
    
            goto L_8021C5DC;
    }
    // 0x8021C5C8: nop

    // 0x8021C5CC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8021C5D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021C5D4: b           L_8021C5F4
    // 0x8021C5D8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8021C5F4;
    // 0x8021C5D8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8021C5DC:
    // 0x8021C5DC: b           L_8021C5F4
    // 0x8021C5E0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8021C5F4;
    // 0x8021C5E0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8021C5E4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
L_8021C5E8:
    // 0x8021C5E8: nop

    // 0x8021C5EC: bltz        $t9, L_8021C5DC
    if (SIGNED(ctx->r25) < 0) {
        // 0x8021C5F0: nop
    
            goto L_8021C5DC;
    }
    // 0x8021C5F0: nop

L_8021C5F4:
    // 0x8021C5F4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8021C5F8: sltiu       $at, $t9, 0xFF
    ctx->r1 = ctx->r25 < 0XFF ? 1 : 0;
    // 0x8021C5FC: bnel        $at, $zero, L_8021C628
    if (ctx->r1 != 0) {
        // 0x8021C600: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_8021C628;
    }
    goto skip_9;
    // 0x8021C600: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_9:
    // 0x8021C604: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C608: lui         $t5, 0x8007
    ctx->r13 = S32(0X8007 << 16);
    // 0x8021C60C: addiu       $t5, $t5, -0x26E0
    ctx->r13 = ADD32(ctx->r13, -0X26E0);
    // 0x8021C610: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x8021C614: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021C618: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8021C61C: b           L_8021C640
    // 0x8021C620: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
        goto L_8021C640;
    // 0x8021C620: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x8021C624: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8021C628:
    // 0x8021C628: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021C62C: addiu       $t8, $t8, -0x6050
    ctx->r24 = ADD32(ctx->r24, -0X6050);
    // 0x8021C630: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8021C634: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021C638: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8021C63C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8021C640:
    // 0x8021C640: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x8021C644: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x8021C648: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8021C64C: addiu       $t9, $a2, 0x8
    ctx->r25 = ADD32(ctx->r6, 0X8);
    // 0x8021C650: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8021C654: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021C658: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8021C65C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021C660: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8021C664: lui         $t2, 0x8FFF
    ctx->r10 = S32(0X8FFF << 16);
    // 0x8021C668: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8021C66C: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8021C670: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021C674: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021C678: nop

    // 0x8021C67C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021C680: beql        $t5, $zero, L_8021C6D0
    if (ctx->r13 == 0) {
        // 0x8021C684: mfc1        $t5, $f6
        ctx->r13 = (int32_t)ctx->f6.u32l;
            goto L_8021C6D0;
    }
    goto skip_10;
    // 0x8021C684: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x8021C688: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C68C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8021C690: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021C694: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8021C698: nop

    // 0x8021C69C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021C6A0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8021C6A4: nop

    // 0x8021C6A8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8021C6AC: bne         $t5, $zero, L_8021C6C4
    if (ctx->r13 != 0) {
        // 0x8021C6B0: nop
    
            goto L_8021C6C4;
    }
    // 0x8021C6B0: nop

    // 0x8021C6B4: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x8021C6B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021C6BC: b           L_8021C6DC
    // 0x8021C6C0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8021C6DC;
    // 0x8021C6C0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8021C6C4:
    // 0x8021C6C4: b           L_8021C6DC
    // 0x8021C6C8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8021C6DC;
    // 0x8021C6C8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8021C6CC: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
L_8021C6D0:
    // 0x8021C6D0: nop

    // 0x8021C6D4: bltz        $t5, L_8021C6C4
    if (SIGNED(ctx->r13) < 0) {
        // 0x8021C6D8: nop
    
            goto L_8021C6C4;
    }
    // 0x8021C6D8: nop

L_8021C6DC:
    // 0x8021C6DC: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8021C6E0: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x8021C6E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021C6E8: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x8021C6EC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8021C6F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8021C6F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8021C6F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8021C6FC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8021C700: lw          $t0, 0x30($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X30);
    // 0x8021C704: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8021C708: subu        $t3, $t2, $t0
    ctx->r11 = SUB32(ctx->r10, ctx->r8);
    // 0x8021C70C: and         $t4, $t9, $t3
    ctx->r12 = ctx->r25 & ctx->r11;
    // 0x8021C710: and         $a1, $t4, $t2
    ctx->r5 = ctx->r12 & ctx->r10;
    // 0x8021C714: jal         0x80040620
    // 0x8021C718: and         $a0, $t0, $t2
    ctx->r4 = ctx->r8 & ctx->r10;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x8021C718: and         $a0, $t0, $t2
    ctx->r4 = ctx->r8 & ctx->r10;
    after_1:
    // 0x8021C71C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021C720:
    // 0x8021C720: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021C724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021C728: jr          $ra
    // 0x8021C72C: nop

    TRACE_RETURN()
    return;
    // 0x8021C72C: nop

;}
RECOMP_FUNC void func_8020D338_676D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020D338: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8020D33C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8020D340: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8020D344: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8020D348: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8020D34C: ldc1        $f4, -0x5940($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5940);
    // 0x8020D350: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8020D354: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D358: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x8020D35C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8020D360: addiu       $t0, $a0, 0x5C
    ctx->r8 = ADD32(ctx->r4, 0X5C);
    // 0x8020D364: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8020D368: bc1fl       L_8020D3E4
    if (!c1cs) {
        // 0x8020D36C: lw          $t6, 0x0($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X0);
            goto L_8020D3E4;
    }
    goto skip_0;
    // 0x8020D36C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8020D370: lwc1        $f2, 0xC($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8020D374: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8020D378: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8020D37C: nop

    // 0x8020D380: bc1fl       L_8020D398
    if (!c1cs) {
        // 0x8020D384: sub.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8020D398;
    }
    goto skip_1;
    // 0x8020D384: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x8020D388: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8020D38C: b           L_8020D398
    // 0x8020D390: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_8020D398;
    // 0x8020D390: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x8020D394: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
L_8020D398:
    // 0x8020D398: lwc1        $f12, 0x10($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X10);
    // 0x8020D39C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8020D3A0: nop

    // 0x8020D3A4: bc1fl       L_8020D3C0
    if (!c1cs) {
        // 0x8020D3A8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_8020D3C0;
    }
    goto skip_2;
    // 0x8020D3A8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_2:
    // 0x8020D3AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8020D3B0: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    // 0x8020D3B4: b           L_8020D3E0
    // 0x8020D3B8: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
        goto L_8020D3E0;
    // 0x8020D3B8: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x8020D3BC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_8020D3C0:
    // 0x8020D3C0: nop

    // 0x8020D3C4: bc1fl       L_8020D3DC
    if (!c1cs) {
        // 0x8020D3C8: add.s       $f18, $f0, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_8020D3DC;
    }
    goto skip_3;
    // 0x8020D3C8: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    skip_3:
    // 0x8020D3CC: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x8020D3D0: b           L_8020D3E0
    // 0x8020D3D4: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
        goto L_8020D3E0;
    // 0x8020D3D4: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
    // 0x8020D3D8: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
L_8020D3DC:
    // 0x8020D3DC: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
L_8020D3E0:
    // 0x8020D3E0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
L_8020D3E4:
    // 0x8020D3E4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8020D3E8: addiu       $t0, $a2, 0x5C
    ctx->r8 = ADD32(ctx->r6, 0X5C);
    // 0x8020D3EC: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x8020D3F0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8020D3F4: jal         0x800108BC
    // 0x8020D3F8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_800108BC_114BC(rdram, ctx);
        goto after_0;
    // 0x8020D3F8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_0:
    // 0x8020D3FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8020D400: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D404: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8020D408: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8020D40C: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8020D410: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8020D414: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8020D418: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8020D41C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8020D420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020D424: c.le.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d <= ctx->f6.d;
    // 0x8020D428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8020D42C: addiu       $t8, $zero, 0xF0
    ctx->r24 = ADD32(0, 0XF0);
    // 0x8020D430: bc1fl       L_8020D47C
    if (!c1cs) {
        // 0x8020D434: lw          $t5, 0x0($v1)
        ctx->r13 = MEM_W(ctx->r3, 0X0);
            goto L_8020D47C;
    }
    goto skip_4;
    // 0x8020D434: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    skip_4:
    // 0x8020D438: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8020D43C: lbu         $t9, 0x14($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X14);
    // 0x8020D440: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8020D444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8020D448: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8020D44C: lbu         $t1, 0x15($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X15);
    // 0x8020D450: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x8020D454: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x8020D458: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8020D45C: lbu         $t2, 0x16($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X16);
    // 0x8020D460: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x8020D464: jal         0x800108E4
    // 0x8020D468: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_800108E4_114E4(rdram, ctx);
        goto after_1;
    // 0x8020D468: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_1:
    // 0x8020D46C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8020D470: addiu       $v1, $v1, -0x4CDC
    ctx->r3 = ADD32(ctx->r3, -0X4CDC);
    // 0x8020D474: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8020D478: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
L_8020D47C:
    // 0x8020D47C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8020D480: lui         $a2, 0x8FFF
    ctx->r6 = S32(0X8FFF << 16);
    // 0x8020D484: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8020D488: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8020D48C: lw          $v0, 0x30($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X30);
    // 0x8020D490: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x8020D494: subu        $t9, $a2, $v0
    ctx->r25 = SUB32(ctx->r6, ctx->r2);
    // 0x8020D498: and         $t1, $t6, $t9
    ctx->r9 = ctx->r14 & ctx->r25;
    // 0x8020D49C: and         $a1, $t1, $a2
    ctx->r5 = ctx->r9 & ctx->r6;
    // 0x8020D4A0: jal         0x80040620
    // 0x8020D4A4: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x8020D4A4: and         $a0, $v0, $a2
    ctx->r4 = ctx->r2 & ctx->r6;
    after_2:
    // 0x8020D4A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8020D4AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8020D4B0: jr          $ra
    // 0x8020D4B4: nop

    TRACE_RETURN()
    return;
    // 0x8020D4B4: nop

;}
RECOMP_FUNC void func_8021C8F4_6862D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C8F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021C8F8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8021C8FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021C900: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8021C904: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021C908: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8021C90C: addiu       $a1, $a1, -0x3C0C
    ctx->r5 = ADD32(ctx->r5, -0X3C0C);
    // 0x8021C910: jal         0x80034E08
    // 0x8021C914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021C914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021C918: bne         $v0, $zero, L_8021C928
    if (ctx->r2 != 0) {
        // 0x8021C91C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021C928;
    }
    // 0x8021C91C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021C920: b           L_8021C98C
    // 0x8021C924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021C98C;
    // 0x8021C924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021C928:
    // 0x8021C928: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021C92C: lwc1        $f0, -0x5310($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5310);
    // 0x8021C930: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021C934: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021C938: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x8021C93C: addiu       $a1, $a1, 0x5B10
    ctx->r5 = ADD32(ctx->r5, 0X5B10);
    // 0x8021C940: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021C944: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021C948: addiu       $t6, $zero, 0x4E1
    ctx->r14 = ADD32(0, 0X4E1);
    // 0x8021C94C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021C950: addiu       $a2, $a2, -0x6050
    ctx->r6 = ADD32(ctx->r6, -0X6050);
    // 0x8021C954: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021C958: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8021C95C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021C960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021C964: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021C968: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021C96C: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x8021C970: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021C974: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021C978: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021C97C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021C980: jal         0x8000DBF0
    // 0x8021C984: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021C984: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021C988: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_8021C98C:
    // 0x8021C98C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021C990: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021C994: jr          $ra
    // 0x8021C998: nop

    TRACE_RETURN()
    return;
    // 0x8021C998: nop

;}
RECOMP_FUNC void func_80217E54_681834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217E54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80217E58: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80217E5C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80217E60: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80217E64: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80217E68: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80217E6C: addiu       $a1, $a1, 0x7D0C
    ctx->r5 = ADD32(ctx->r5, 0X7D0C);
    // 0x80217E70: jal         0x80034E08
    // 0x80217E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80217E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80217E78: bne         $v0, $zero, L_80217E88
    if (ctx->r2 != 0) {
        // 0x80217E7C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80217E88;
    }
    // 0x80217E7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80217E80: b           L_80217EF8
    // 0x80217E84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80217EF8;
    // 0x80217E84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80217E88:
    // 0x80217E88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217E8C: lwc1        $f0, -0x55B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X55B8);
    // 0x80217E90: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80217E94: addiu       $a1, $a1, 0x270
    ctx->r5 = ADD32(ctx->r5, 0X270);
    // 0x80217E98: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217E9C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80217EA0: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x80217EA4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80217EA8: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80217EAC: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x80217EB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80217EB4: or          $t6, $a2, $at
    ctx->r14 = ctx->r6 | ctx->r1;
    // 0x80217EB8: addiu       $t7, $zero, 0x4DB
    ctx->r15 = ADD32(0, 0X4DB);
    // 0x80217EBC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x80217EC0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80217EC4: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80217EC8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80217ECC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80217ED0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80217ED4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80217ED8: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80217EDC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80217EE0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80217EE4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80217EE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80217EEC: jal         0x8000DBF0
    // 0x80217EF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80217EF0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80217EF4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_80217EF8:
    // 0x80217EF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80217EFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80217F00: jr          $ra
    // 0x80217F04: nop

    TRACE_RETURN()
    return;
    // 0x80217F04: nop

;}
RECOMP_FUNC void func_802178BC_68129C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802178BC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802178C0: beq         $a1, $at, L_80217938
    if (ctx->r5 == ctx->r1) {
        // 0x802178C4: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80217938;
    }
    // 0x802178C4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802178C8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802178CC: beq         $a1, $at, L_8021790C
    if (ctx->r5 == ctx->r1) {
        // 0x802178D0: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_8021790C;
    }
    // 0x802178D0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802178D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802178D8: bne         $a1, $at, L_80217964
    if (ctx->r5 != ctx->r1) {
        // 0x802178DC: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80217964;
    }
    // 0x802178DC: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802178E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802178E4: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x802178E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802178EC: lwc1        $f4, -0x55DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55DC);
    // 0x802178F0: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x802178F4: addiu       $t7, $t7, 0xF94
    ctx->r15 = ADD32(ctx->r15, 0XF94);
    // 0x802178F8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802178FC: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80217900: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x80217904: b           L_80217964
    // 0x80217908: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
        goto L_80217964;
    // 0x80217908: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_8021790C:
    // 0x8021790C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x80217910: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x80217914: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217918: lwc1        $f6, -0x55D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55D8);
    // 0x8021791C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80217920: addiu       $t0, $t0, 0x1238
    ctx->r8 = ADD32(ctx->r8, 0X1238);
    // 0x80217924: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217928: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8021792C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80217930: b           L_80217964
    // 0x80217934: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
        goto L_80217964;
    // 0x80217934: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
L_80217938:
    // 0x80217938: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021793C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80217940: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x80217944: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217948: lwc1        $f8, -0x55D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55D4);
    // 0x8021794C: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x80217950: addiu       $t3, $t3, 0x1498
    ctx->r11 = ADD32(ctx->r11, 0X1498);
    // 0x80217954: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217958: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8021795C: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80217960: sw          $t4, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r12;
L_80217964:
    // 0x80217964: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80217968: jr          $ra
    // 0x8021796C: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x8021796C: swc1        $f10, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8021C850_686230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C850: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8021C854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021C858: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8021C85C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021C860: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8021C864: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8021C868: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8021C86C: nop

    // 0x8021C870: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8021C874: beql        $v0, $zero, L_8021C8DC
    if (ctx->r2 == 0) {
        // 0x8021C878: mfc1        $v0, $f6
        ctx->r2 = (int32_t)ctx->f6.u32l;
            goto L_8021C8DC;
    }
    goto skip_0;
    // 0x8021C878: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x8021C87C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021C884: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021C888: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8021C88C: nop

    // 0x8021C890: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8021C894: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8021C898: nop

    // 0x8021C89C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8021C8A0: bnel        $v0, $zero, L_8021C8C8
    if (ctx->r2 != 0) {
        // 0x8021C8A4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8021C8C8;
    }
    goto skip_1;
    // 0x8021C8A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x8021C8A8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8021C8AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021C8B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021C8B4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x8021C8B8: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8021C8BC: jr          $ra
    // 0x8021C8C0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    TRACE_RETURN()
    return;
    // 0x8021C8C0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8021C8C4:
    // 0x8021C8C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8021C8C8:
    // 0x8021C8C8: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8021C8CC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021C8D0: jr          $ra
    // 0x8021C8D4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    TRACE_RETURN()
    return;
    // 0x8021C8D4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x8021C8D8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
L_8021C8DC:
    // 0x8021C8DC: nop

    // 0x8021C8E0: bltz        $v0, L_8021C8C4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8021C8E4: andi        $t7, $v0, 0xFF
        ctx->r15 = ctx->r2 & 0XFF;
            goto L_8021C8C4;
    }
    // 0x8021C8E4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8021C8E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8021C8EC: jr          $ra
    // 0x8021C8F0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    TRACE_RETURN()
    return;
    // 0x8021C8F0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_80225B54_68F534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B54: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80225B58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80225B5C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80225B60: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80225B64: swc1        $f12, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f12.u32l;
    // 0x80225B68: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80225B6C: swc1        $f14, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f14.u32l;
    // 0x80225B70: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80225B74: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80225B78: bc1f        L_80225B98
    if (!c1cs) {
        // 0x80225B7C: swc1        $f4, 0x8C($a0)
        MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
            goto L_80225B98;
    }
    // 0x80225B7C: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    // 0x80225B80: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80225B84: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80225B88: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80225B8C: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80225B90: b           L_80225BA4
    // 0x80225B94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80225BA4;
    // 0x80225B94: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80225B98:
    // 0x80225B98: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80225B9C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80225BA0: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_80225BA4:
    // 0x80225BA4: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80225BA8: lwc1        $f2, 0x24($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80225BAC: lwc1        $f12, 0x20($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80225BB0: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80225BB4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80225BB8: nop

    // 0x80225BBC: bc1f        L_80225BD0
    if (!c1cs) {
        // 0x80225BC0: swc1        $f4, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
            goto L_80225BD0;
    }
    // 0x80225BC0: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x80225BC4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80225BC8: b           L_80225BD4
    // 0x80225BCC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80225BD4;
    // 0x80225BCC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80225BD0:
    // 0x80225BD0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80225BD4:
    // 0x80225BD4: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80225BD8: lwc1        $f2, 0x30($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X30);
    // 0x80225BDC: lwc1        $f12, 0x2C($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80225BE0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80225BE4: nop

    // 0x80225BE8: bc1f        L_80225BFC
    if (!c1cs) {
        // 0x80225BEC: swc1        $f6, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
            goto L_80225BFC;
    }
    // 0x80225BEC: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x80225BF0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80225BF4: b           L_80225C00
    // 0x80225BF8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80225C00;
    // 0x80225BF8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80225BFC:
    // 0x80225BFC: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80225C00:
    // 0x80225C00: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80225C04: jr          $ra
    // 0x80225C08: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80225C08: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80228280_691C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228288: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022828C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80228290: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80228294: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x80228298: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8022829C: swc1        $f12, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f12.u32l;
    // 0x802282A0: swc1        $f14, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f14.u32l;
    // 0x802282A4: bc1fl       L_802282C8
    if (!c1cs) {
        // 0x802282A8: lwc1        $f10, 0x10($v1)
        ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
            goto L_802282C8;
    }
    goto skip_0;
    // 0x802282A8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    skip_0:
    // 0x802282AC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x802282B0: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802282B4: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802282B8: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802282BC: b           L_802282D0
    // 0x802282C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802282D0;
    // 0x802282C0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x802282C4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
L_802282C8:
    // 0x802282C8: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802282CC: sub.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f18.fl;
L_802282D0:
    // 0x802282D0: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802282D4: lwc1        $f2, 0x28($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X28);
    // 0x802282D8: lwc1        $f12, 0x24($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802282DC: div.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802282E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802282E4: nop

    // 0x802282E8: bc1f        L_802282FC
    if (!c1cs) {
        // 0x802282EC: swc1        $f4, 0x14($v1)
        MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
            goto L_802282FC;
    }
    // 0x802282EC: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x802282F0: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802282F4: b           L_80228304
    // 0x802282F8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_80228304;
    // 0x802282F8: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_802282FC:
    // 0x802282FC: sub.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80228300: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_80228304:
    // 0x80228304: div.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80228308: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8022830C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80228310: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80228314: swc1        $f6, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->f6.u32l;
    // 0x80228318: jal         0x800040A8
    // 0x8022831C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8022831C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80228320: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80228324: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x80228328: sh          $t6, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r14;
    // 0x8022832C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80228334: jr          $ra
    // 0x80228338: nop

    TRACE_RETURN()
    return;
    // 0x80228338: nop

;}
RECOMP_FUNC void func_802182CC_681CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802182CC: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x802182D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802182D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802182D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802182DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802182E0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x802182E4: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x802182E8: jal         0x8020D2A0
    // 0x802182EC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    func_8020D2A0_676C80(rdram, ctx);
        goto after_0;
    // 0x802182EC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802182F0: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x802182F4: lbu         $t6, 0x5C($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X5C);
    // 0x802182F8: addiu       $s2, $s2, 0x5C
    ctx->r18 = ADD32(ctx->r18, 0X5C);
    // 0x802182FC: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x80218300: beq         $at, $zero, L_8021A380
    if (ctx->r1 == 0) {
        // 0x80218304: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8021A380;
    }
    // 0x80218304: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80218308: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021830C: addu        $at, $at, $t6
    gpr jr_addend_80218314 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80218310: lw          $t6, -0x5524($at)
    ctx->r14 = ADD32(ctx->r1, -0X5524);
    // 0x80218314: jr          $t6
    // 0x80218318: nop

    switch (jr_addend_80218314 >> 2) {
        case 0: goto L_8021831C; break;
        case 1: goto L_8021872C; break;
        case 2: goto L_80218830; break;
        case 3: goto L_80218BC4; break;
        case 4: goto L_80218D3C; break;
        case 5: goto L_80218F9C; break;
        case 6: goto L_80219338; break;
        case 7: goto L_802196B0; break;
        case 8: goto L_802199F0; break;
        case 9: goto L_80219AF0; break;
        case 10: goto L_80219B78; break;
        case 11: goto L_80219D68; break;
        case 12: goto L_80219FD8; break;
        case 13: goto L_8021A29C; break;
        default: switch_error(__func__, 0x80218314, 0x8022AADC);
    }
    // 0x80218318: nop

L_8021831C:
    // 0x8021831C: jal         0x802182A0
    // 0x80218320: nop

    func_802182A0_681C80(rdram, ctx);
        goto after_1;
    // 0x80218320: nop

    after_1:
    // 0x80218324: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x80218328: addiu       $s0, $s0, -0x3A28
    ctx->r16 = ADD32(ctx->r16, -0X3A28);
    // 0x8021832C: jal         0x8021F330
    // 0x80218330: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8021F330_688D10(rdram, ctx);
        goto after_2;
    // 0x80218330: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x80218334: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218338: jal         0x8020D4B8
    // 0x8021833C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_3;
    // 0x8021833C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_3:
    // 0x80218340: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80218344: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80218348: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x8021834C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x80218350: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80218354: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x80218358: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x8021835C: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80218360: beq         $at, $zero, L_8021A380
    if (ctx->r1 == 0) {
        // 0x80218364: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8021A380;
    }
    // 0x80218364: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80218368: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021836C: addu        $at, $at, $t9
    gpr jr_addend_80218374 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80218370: lw          $t9, -0x54EC($at)
    ctx->r25 = ADD32(ctx->r1, -0X54EC);
    // 0x80218374: jr          $t9
    // 0x80218378: nop

    switch (jr_addend_80218374 >> 2) {
        case 0: goto L_8021837C; break;
        case 1: goto L_80218504; break;
        case 2: goto L_802185F0; break;
        case 3: goto L_802186FC; break;
        case 4: goto L_80218708; break;
        case 5: goto L_80218714; break;
        case 6: goto L_80218720; break;
        default: switch_error(__func__, 0x80218374, 0x8022AB14);
    }
    // 0x80218378: nop

L_8021837C:
    // 0x8021837C: jal         0x8021F864
    // 0x80218380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8021F864_689244(rdram, ctx);
        goto after_4;
    // 0x80218380: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80218384: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218388: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021838C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80218390: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80218394: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218398: jal         0x8021F3BC
    // 0x8021839C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8021F3BC_688D9C(rdram, ctx);
        goto after_5;
    // 0x8021839C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x802183A0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x802183A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802183A8: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x802183AC: lui         $a2, 0x44A6
    ctx->r6 = S32(0X44A6 << 16);
    // 0x802183B0: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x802183B4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802183B8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802183BC: lui         $a3, 0x432A
    ctx->r7 = S32(0X432A << 16);
    // 0x802183C0: jal         0x8021F22C
    // 0x802183C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021F22C_688C0C(rdram, ctx);
        goto after_6;
    // 0x802183C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x802183C8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802183CC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x802183D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802183D4: jal         0x8021E8A0
    // 0x802183D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8021E8A0_688280(rdram, ctx);
        goto after_7;
    // 0x802183D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x802183DC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x802183E0: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x802183E4: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x802183E8: jal         0x8021EED0
    // 0x802183EC: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_8;
    // 0x802183EC: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_8:
    // 0x802183F0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802183F4: jal         0x80012500
    // 0x802183F8: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_9;
    // 0x802183F8: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_9:
    // 0x802183FC: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x80218400: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80218404: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80218408: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8021840C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80218410: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218414: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218418: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8021841C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218420: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80218424: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80218428: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8021842C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80218430: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80218434: jal         0x800127B8
    // 0x80218438: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_10;
    // 0x80218438: nop

    after_10:
    // 0x8021843C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80218440: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80218444: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218448: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021844C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218450: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80218454: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218458: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8021845C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80218460: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80218464: jal         0x80012818
    // 0x80218468: nop

    func_80012818_13418(rdram, ctx);
        goto after_11;
    // 0x80218468: nop

    after_11:
    // 0x8021846C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80218470: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80218474: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80218478: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021847C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218480: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80218484: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x80218488: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8021848C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80218490: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80218494: jal         0x8021EEB0
    // 0x80218498: nop

    func_8021EEB0_688890(rdram, ctx);
        goto after_12;
    // 0x80218498: nop

    after_12:
    // 0x8021849C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x802184A0: jal         0x8021EE84
    // 0x802184A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_13;
    // 0x802184A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x802184A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802184AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802184B0: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802184B4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x802184B8: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802184BC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802184C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802184C4: jal         0x8021EF00
    // 0x802184C8: nop

    func_8021EF00_6888E0(rdram, ctx);
        goto after_14;
    // 0x802184C8: nop

    after_14:
    // 0x802184CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802184D0: lwc1        $f6, -0x54D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X54D0);
    // 0x802184D4: lui         $at, 0x4324
    ctx->r1 = S32(0X4324 << 16);
    // 0x802184D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802184DC: lui         $at, 0xC330
    ctx->r1 = S32(0XC330 << 16);
    // 0x802184E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802184E4: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    // 0x802184E8: swc1        $f6, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f6.u32l;
    // 0x802184EC: swc1        $f8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f8.u32l;
    // 0x802184F0: jal         0x80038B98
    // 0x802184F4: swc1        $f10, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f10.u32l;
    func_80038B98_39798(rdram, ctx);
        goto after_15;
    // 0x802184F4: swc1        $f10, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f10.u32l;
    after_15:
    // 0x802184F8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802184FC: b           L_8021A380
    // 0x80218500: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
        goto L_8021A380;
    // 0x80218500: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
L_80218504:
    // 0x80218504: jal         0x8021F864
    // 0x80218508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8021F864_689244(rdram, ctx);
        goto after_16;
    // 0x80218508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_16:
    // 0x8021850C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218510: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80218514: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80218518: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021851C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218520: jal         0x8021F3BC
    // 0x80218524: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8021F3BC_688D9C(rdram, ctx);
        goto after_17;
    // 0x80218524: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_17:
    // 0x80218528: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x8021852C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80218530: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x80218534: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80218538: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021853C: lui         $a2, 0xC1F8
    ctx->r6 = S32(0XC1F8 << 16);
    // 0x80218540: lui         $a3, 0xC348
    ctx->r7 = S32(0XC348 << 16);
    // 0x80218544: jal         0x8021F22C
    // 0x80218548: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8021F22C_688C0C(rdram, ctx);
        goto after_18;
    // 0x80218548: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_18:
    // 0x8021854C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80218550: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80218554: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218558: jal         0x8021E8A0
    // 0x8021855C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8021E8A0_688280(rdram, ctx);
        goto after_19;
    // 0x8021855C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_19:
    // 0x80218560: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218564: jal         0x80012500
    // 0x80218568: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    func_80012500_13100(rdram, ctx);
        goto after_20;
    // 0x80218568: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_20:
    // 0x8021856C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218570: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218574: lui         $a1, 0xC292
    ctx->r5 = S32(0XC292 << 16);
    // 0x80218578: jal         0x800127B8
    // 0x8021857C: lui         $a2, 0xC34F
    ctx->r6 = S32(0XC34F << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_21;
    // 0x8021857C: lui         $a2, 0xC34F
    ctx->r6 = S32(0XC34F << 16);
    after_21:
    // 0x80218580: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218584: lui         $a1, 0xC1F8
    ctx->r5 = S32(0XC1F8 << 16);
    // 0x80218588: lui         $a2, 0xC336
    ctx->r6 = S32(0XC336 << 16);
    // 0x8021858C: jal         0x80012818
    // 0x80218590: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_22;
    // 0x80218590: lui         $a3, 0xC0E0
    ctx->r7 = S32(0XC0E0 << 16);
    after_22:
    // 0x80218594: lui         $at, 0xC1F8
    ctx->r1 = S32(0XC1F8 << 16);
    // 0x80218598: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021859C: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x802185A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802185A4: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x802185A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802185AC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x802185B0: swc1        $f18, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f18.u32l;
    // 0x802185B4: swc1        $f4, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f4.u32l;
    // 0x802185B8: swc1        $f6, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f6.u32l;
    // 0x802185BC: lhu         $t1, 0x7ABC($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7ABC);
    // 0x802185C0: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x802185C4: bne         $t1, $at, L_802185DC
    if (ctx->r9 != ctx->r1) {
        // 0x802185C8: nop
    
            goto L_802185DC;
    }
    // 0x802185C8: nop

    // 0x802185CC: jal         0x80038B98
    // 0x802185D0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80038B98_39798(rdram, ctx);
        goto after_23;
    // 0x802185D0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_23:
    // 0x802185D4: b           L_802185E8
    // 0x802185D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_802185E8;
    // 0x802185D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_802185DC:
    // 0x802185DC: jal         0x80038B98
    // 0x802185E0: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    func_80038B98_39798(rdram, ctx);
        goto after_24;
    // 0x802185E0: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    after_24:
    // 0x802185E4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_802185E8:
    // 0x802185E8: b           L_8021A380
    // 0x802185EC: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
        goto L_8021A380;
    // 0x802185EC: sb          $t2, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r10;
L_802185F0:
    // 0x802185F0: jal         0x8021F864
    // 0x802185F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8021F864_689244(rdram, ctx);
        goto after_25;
    // 0x802185F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_25:
    // 0x802185F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802185FC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80218600: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80218604: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80218608: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021860C: jal         0x8021F3BC
    // 0x80218610: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8021F3BC_688D9C(rdram, ctx);
        goto after_26;
    // 0x80218610: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_26:
    // 0x80218614: lui         $at, 0xC188
    ctx->r1 = S32(0XC188 << 16);
    // 0x80218618: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021861C: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x80218620: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80218624: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80218628: lui         $a2, 0x42EA
    ctx->r6 = S32(0X42EA << 16);
    // 0x8021862C: lui         $a3, 0xC30C
    ctx->r7 = S32(0XC30C << 16);
    // 0x80218630: jal         0x8021F22C
    // 0x80218634: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8021F22C_688C0C(rdram, ctx);
        goto after_27;
    // 0x80218634: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_27:
    // 0x80218638: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021863C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80218640: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218644: jal         0x8021E8A0
    // 0x80218648: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8021E8A0_688280(rdram, ctx);
        goto after_28;
    // 0x80218648: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_28:
    // 0x8021864C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218650: jal         0x80012500
    // 0x80218654: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    func_80012500_13100(rdram, ctx);
        goto after_29;
    // 0x80218654: addiu       $a1, $zero, 0x12C0
    ctx->r5 = ADD32(0, 0X12C0);
    after_29:
    // 0x80218658: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021865C: lui         $a1, 0x4286
    ctx->r5 = S32(0X4286 << 16);
    // 0x80218660: lui         $a2, 0xC30A
    ctx->r6 = S32(0XC30A << 16);
    // 0x80218664: jal         0x800127B8
    // 0x80218668: lui         $a3, 0xC21C
    ctx->r7 = S32(0XC21C << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_30;
    // 0x80218668: lui         $a3, 0xC21C
    ctx->r7 = S32(0XC21C << 16);
    after_30:
    // 0x8021866C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218670: lui         $a1, 0x42E4
    ctx->r5 = S32(0X42E4 << 16);
    // 0x80218674: lui         $a2, 0xC2EE
    ctx->r6 = S32(0XC2EE << 16);
    // 0x80218678: jal         0x80012818
    // 0x8021867C: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_31;
    // 0x8021867C: lui         $a3, 0xC170
    ctx->r7 = S32(0XC170 << 16);
    after_31:
    // 0x80218680: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80218684: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80218688: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8021868C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80218690: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80218694: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80218698: jal         0x800133E0
    // 0x8021869C: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_32;
    // 0x8021869C: nop

    after_32:
    // 0x802186A0: lui         $at, 0x42EA
    ctx->r1 = S32(0X42EA << 16);
    // 0x802186A4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802186A8: lui         $at, 0xC30C
    ctx->r1 = S32(0XC30C << 16);
    // 0x802186AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802186B0: lui         $at, 0xC188
    ctx->r1 = S32(0XC188 << 16);
    // 0x802186B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802186B8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x802186BC: swc1        $f10, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->f10.u32l;
    // 0x802186C0: swc1        $f16, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->f16.u32l;
    // 0x802186C4: swc1        $f18, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f18.u32l;
    // 0x802186C8: lhu         $t3, 0x7ABC($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X7ABC);
    // 0x802186CC: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
    // 0x802186D0: bne         $t3, $at, L_802186E8
    if (ctx->r11 != ctx->r1) {
        // 0x802186D4: nop
    
            goto L_802186E8;
    }
    // 0x802186D4: nop

    // 0x802186D8: jal         0x80038B98
    // 0x802186DC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80038B98_39798(rdram, ctx);
        goto after_33;
    // 0x802186DC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_33:
    // 0x802186E0: b           L_802186F4
    // 0x802186E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_802186F4;
    // 0x802186E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_802186E8:
    // 0x802186E8: jal         0x80038B98
    // 0x802186EC: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    func_80038B98_39798(rdram, ctx);
        goto after_34;
    // 0x802186EC: addiu       $a0, $zero, 0x14A
    ctx->r4 = ADD32(0, 0X14A);
    after_34:
    // 0x802186F0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_802186F4:
    // 0x802186F4: b           L_8021A380
    // 0x802186F8: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
        goto L_8021A380;
    // 0x802186F8: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
L_802186FC:
    // 0x802186FC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80218700: b           L_8021A380
    // 0x80218704: sb          $t5, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r13;
        goto L_8021A380;
    // 0x80218704: sb          $t5, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r13;
L_80218708:
    // 0x80218708: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8021870C: b           L_8021A380
    // 0x80218710: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
        goto L_8021A380;
    // 0x80218710: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
L_80218714:
    // 0x80218714: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80218718: b           L_8021A380
    // 0x8021871C: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
        goto L_8021A380;
    // 0x8021871C: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
L_80218720:
    // 0x80218720: addiu       $t8, $zero, 0xD
    ctx->r24 = ADD32(0, 0XD);
    // 0x80218724: b           L_8021A380
    // 0x80218728: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
        goto L_8021A380;
    // 0x80218728: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
L_8021872C:
    // 0x8021872C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218730: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218734: bnel        $s0, $at, L_8021875C
    if (ctx->r16 != ctx->r1) {
        // 0x80218738: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_8021875C;
    }
    goto skip_0;
    // 0x80218738: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    skip_0:
    // 0x8021873C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218740: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218744: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218748: jal         0x8020D4EC
    // 0x8021874C: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_35;
    // 0x8021874C: nop

    after_35:
    // 0x80218750: b           L_8021A384
    // 0x80218754: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218754: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218758: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
L_8021875C:
    // 0x8021875C: bnel        $s0, $at, L_802187DC
    if (ctx->r16 != ctx->r1) {
        // 0x80218760: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_802187DC;
    }
    goto skip_1;
    // 0x80218760: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    skip_1:
    // 0x80218764: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218768: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x8021876C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218770: jal         0x8021EED0
    // 0x80218774: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_36;
    // 0x80218774: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_36:
    // 0x80218778: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8021877C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80218780: jal         0x8021E8A0
    // 0x80218784: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_8021E8A0_688280(rdram, ctx);
        goto after_37;
    // 0x80218784: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_37:
    // 0x80218788: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021878C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80218790: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80218794: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218798: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8021879C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802187A0: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802187A4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x802187A8: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x802187AC: addiu       $s0, $s0, -0x3A28
    ctx->r16 = ADD32(ctx->r16, -0X3A28);
    // 0x802187B0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802187B4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x802187B8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x802187BC: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x802187C0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x802187C4: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x802187C8: jal         0x8021A578
    // 0x802187CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021A578_683F58(rdram, ctx);
        goto after_38;
    // 0x802187CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_38:
    // 0x802187D0: b           L_8021A380
    // 0x802187D4: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
        goto L_8021A380;
    // 0x802187D4: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x802187D8: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
L_802187DC:
    // 0x802187DC: bnel        $s0, $at, L_802187F8
    if (ctx->r16 != ctx->r1) {
        // 0x802187E0: slti        $at, $s0, 0x79
        ctx->r1 = SIGNED(ctx->r16) < 0X79 ? 1 : 0;
            goto L_802187F8;
    }
    goto skip_2;
    // 0x802187E0: slti        $at, $s0, 0x79
    ctx->r1 = SIGNED(ctx->r16) < 0X79 ? 1 : 0;
    skip_2:
    // 0x802187E4: jal         0x80038B98
    // 0x802187E8: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    func_80038B98_39798(rdram, ctx);
        goto after_39;
    // 0x802187E8: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_39:
    // 0x802187EC: b           L_8021A384
    // 0x802187F0: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x802187F0: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x802187F4: slti        $at, $s0, 0x79
    ctx->r1 = SIGNED(ctx->r16) < 0X79 ? 1 : 0;
L_802187F8:
    // 0x802187F8: bnel        $at, $zero, L_8021A384
    if (ctx->r1 != 0) {
        // 0x802187FC: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_3;
    // 0x802187FC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_3:
    // 0x80218800: jal         0x8021EE90
    // 0x80218804: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021EE90_688870(rdram, ctx);
        goto after_40;
    // 0x80218804: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_40:
    // 0x80218808: bnel        $v0, $zero, L_8021A384
    if (ctx->r2 != 0) {
        // 0x8021880C: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_4;
    // 0x8021880C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_4:
    // 0x80218810: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218814: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80218818: jal         0x8021E8A0
    // 0x8021881C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_8021E8A0_688280(rdram, ctx);
        goto after_41;
    // 0x8021881C: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_41:
    // 0x80218820: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80218824: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80218828: b           L_8021A380
    // 0x8021882C: sb          $t9, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r25;
        goto L_8021A380;
    // 0x8021882C: sb          $t9, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r25;
L_80218830:
    // 0x80218830: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218838: bne         $s0, $at, L_80218A38
    if (ctx->r16 != ctx->r1) {
        // 0x8021883C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80218A38;
    }
    // 0x8021883C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80218840: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80218844:
    // 0x80218844: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80218848: beql        $a0, $zero, L_80218860
    if (ctx->r4 == 0) {
        // 0x8021884C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80218860;
    }
    goto skip_5;
    // 0x8021884C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_5:
    // 0x80218850: jal         0x80034EF8
    // 0x80218854: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_42;
    // 0x80218854: nop

    after_42:
    // 0x80218858: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8021885C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80218860:
    // 0x80218860: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80218864: bne         $s1, $at, L_80218844
    if (ctx->r17 != ctx->r1) {
        // 0x80218868: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80218844;
    }
    // 0x80218868: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021886C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218870: lw          $a1, 0xC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC);
    // 0x80218874: lw          $a2, 0x10($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X10);
    // 0x80218878: jal         0x8021EEB0
    // 0x8021887C: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    func_8021EEB0_688890(rdram, ctx);
        goto after_43;
    // 0x8021887C: lw          $a3, 0x14($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X14);
    after_43:
    // 0x80218880: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218884: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218888: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x8021888C: jal         0x8021EED0
    // 0x80218890: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_44;
    // 0x80218890: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_44:
    // 0x80218894: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218898: jal         0x8021EE84
    // 0x8021889C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_45;
    // 0x8021889C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_45:
    // 0x802188A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802188A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802188A8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802188AC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x802188B0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802188B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802188B8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x802188BC: jal         0x8021EF00
    // 0x802188C0: nop

    func_8021EF00_6888E0(rdram, ctx);
        goto after_46;
    // 0x802188C0: nop

    after_46:
    // 0x802188C4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802188C8: jal         0x80012500
    // 0x802188CC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    func_80012500_13100(rdram, ctx);
        goto after_47;
    // 0x802188CC: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    after_47:
    // 0x802188D0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802188D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802188D8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802188DC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802188E0: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802188E4: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802188E8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802188EC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802188F0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802188F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802188F8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802188FC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80218900: jal         0x80012818
    // 0x80218904: nop

    func_80012818_13418(rdram, ctx);
        goto after_48;
    // 0x80218904: nop

    after_48:
    // 0x80218908: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8021890C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80218910: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80218914: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80218918: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021891C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80218920: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80218924: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218928: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021892C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80218930: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80218934: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218938: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021893C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80218940: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80218944: jal         0x800127B8
    // 0x80218948: nop

    func_800127B8_133B8(rdram, ctx);
        goto after_49;
    // 0x80218948: nop

    after_49:
    // 0x8021894C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80218950: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80218954: lui         $at, 0x43BE
    ctx->r1 = S32(0X43BE << 16);
    // 0x80218958: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021895C: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218960: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218964: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80218968: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021896C: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218970: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x80218974: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80218978: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8021897C: jal         0x8021B34C
    // 0x80218980: nop

    func_8021B34C_684D2C(rdram, ctx);
        goto after_50;
    // 0x80218980: nop

    after_50:
    // 0x80218984: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x80218988: lw          $a2, 0x78($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X78);
    // 0x8021898C: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218990: jal         0x8021B01C
    // 0x80218994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8021B01C_6849FC(rdram, ctx);
        goto after_51;
    // 0x80218994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_51:
    // 0x80218998: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x8021899C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802189A0: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802189A4: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x802189A8: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x802189AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802189B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802189B4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802189B8: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x802189BC: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x802189C0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802189C4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x802189C8: jal         0x8021BA38
    // 0x802189CC: nop

    func_8021BA38_685418(rdram, ctx);
        goto after_52;
    // 0x802189CC: nop

    after_52:
    // 0x802189D0: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x802189D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802189D8: jal         0x8021B8D8
    // 0x802189DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021B8D8_6852B8(rdram, ctx);
        goto after_53;
    // 0x802189DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_53:
    // 0x802189E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802189E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802189E8: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x802189EC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x802189F0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x802189F4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802189F8: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x802189FC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80218A00: jal         0x8021B98C
    // 0x80218A04: nop

    func_8021B98C_68536C(rdram, ctx);
        goto after_54;
    // 0x80218A04: nop

    after_54:
    // 0x80218A08: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80218A0C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80218A10: jal         0x8021B8E4
    // 0x80218A14: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021B8E4_6852C4(rdram, ctx);
        goto after_55;
    // 0x80218A14: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_55:
    // 0x80218A18: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218A1C: jal         0x8021B8D8
    // 0x80218A20: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8021B8D8_6852B8(rdram, ctx);
        goto after_56;
    // 0x80218A20: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_56:
    // 0x80218A24: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218A28: jal         0x8021B938
    // 0x80218A2C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8021B938_685318(rdram, ctx);
        goto after_57;
    // 0x80218A2C: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_57:
    // 0x80218A30: b           L_8021A384
    // 0x80218A34: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218A34: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_80218A38:
    // 0x80218A38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80218A3C: beq         $s0, $at, L_8021A380
    if (ctx->r16 == ctx->r1) {
        // 0x80218A40: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_8021A380;
    }
    // 0x80218A40: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x80218A44: bnel        $s0, $at, L_80218A78
    if (ctx->r16 != ctx->r1) {
        // 0x80218A48: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_80218A78;
    }
    goto skip_6;
    // 0x80218A48: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    skip_6:
    // 0x80218A4C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218A50: jal         0x8021B8D8
    // 0x80218A54: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021B8D8_6852B8(rdram, ctx);
        goto after_58;
    // 0x80218A54: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_58:
    // 0x80218A58: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218A5C: jal         0x8021B8E4
    // 0x80218A60: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8021B8E4_6852C4(rdram, ctx);
        goto after_59;
    // 0x80218A60: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_59:
    // 0x80218A64: jal         0x80038B98
    // 0x80218A68: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    func_80038B98_39798(rdram, ctx);
        goto after_60;
    // 0x80218A68: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    after_60:
    // 0x80218A6C: b           L_8021A384
    // 0x80218A70: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218A70: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218A74: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
L_80218A78:
    // 0x80218A78: bnel        $s0, $at, L_80218B34
    if (ctx->r16 != ctx->r1) {
        // 0x80218A7C: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_80218B34;
    }
    goto skip_7;
    // 0x80218A7C: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    skip_7:
    // 0x80218A80: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218A84: jal         0x8021EE84
    // 0x80218A88: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_61;
    // 0x80218A88: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    after_61:
    // 0x80218A8C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218A90: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218A94: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218A98: jal         0x8021EED0
    // 0x80218A9C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_62;
    // 0x80218A9C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_62:
    // 0x80218AA0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80218AA4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80218AA8: lui         $at, 0x43D2
    ctx->r1 = S32(0X43D2 << 16);
    // 0x80218AAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80218AB0: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218AB4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218AB8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218ABC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80218AC0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218AC4: add.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x80218AC8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80218ACC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80218AD0: jal         0x8021F110
    // 0x80218AD4: nop

    func_8021F110_688AF0(rdram, ctx);
        goto after_63;
    // 0x80218AD4: nop

    after_63:
    // 0x80218AD8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218ADC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x80218AE0: jal         0x8021E8A0
    // 0x80218AE4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8021E8A0_688280(rdram, ctx);
        goto after_64;
    // 0x80218AE4: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_64:
    // 0x80218AE8: jal         0x80038B98
    // 0x80218AEC: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    func_80038B98_39798(rdram, ctx);
        goto after_65;
    // 0x80218AEC: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    after_65:
    // 0x80218AF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80218AF4: lhu         $v0, 0x7ABC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7ABC);
    // 0x80218AF8: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x80218AFC: bnel        $v0, $at, L_80218B18
    if (ctx->r2 != ctx->r1) {
        // 0x80218B00: addiu       $at, $zero, 0xC1
        ctx->r1 = ADD32(0, 0XC1);
            goto L_80218B18;
    }
    goto skip_8;
    // 0x80218B00: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
    skip_8:
    // 0x80218B04: jal         0x80038B98
    // 0x80218B08: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038B98_39798(rdram, ctx);
        goto after_66;
    // 0x80218B08: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_66:
    // 0x80218B0C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80218B10: lhu         $v0, 0x7ABC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7ABC);
    // 0x80218B14: addiu       $at, $zero, 0xC1
    ctx->r1 = ADD32(0, 0XC1);
L_80218B18:
    // 0x80218B18: bnel        $v0, $at, L_8021A384
    if (ctx->r2 != ctx->r1) {
        // 0x80218B1C: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_9;
    // 0x80218B1C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_9:
    // 0x80218B20: jal         0x80038B98
    // 0x80218B24: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038B98_39798(rdram, ctx);
        goto after_67;
    // 0x80218B24: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_67:
    // 0x80218B28: b           L_8021A384
    // 0x80218B2C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218B2C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218B30: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
L_80218B34:
    // 0x80218B34: bnel        $s0, $at, L_8021A384
    if (ctx->r16 != ctx->r1) {
        // 0x80218B38: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_10;
    // 0x80218B38: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_10:
    // 0x80218B3C: jal         0x8003D310
    // 0x80218B40: addiu       $a0, $zero, 0x307
    ctx->r4 = ADD32(0, 0X307);
    func_8003D310_3DF10(rdram, ctx);
        goto after_68;
    // 0x80218B40: addiu       $a0, $zero, 0x307
    ctx->r4 = ADD32(0, 0X307);
    after_68:
    // 0x80218B44: jal         0x80038B98
    // 0x80218B48: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_80038B98_39798(rdram, ctx);
        goto after_69;
    // 0x80218B48: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_69:
    // 0x80218B4C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218B50: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218B54: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218B58: jal         0x8021EED0
    // 0x80218B5C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_70;
    // 0x80218B5C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_70:
    // 0x80218B60: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80218B64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80218B68: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80218B6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80218B70: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218B74: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218B78: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218B7C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80218B80: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218B84: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80218B88: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80218B8C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80218B90: jal         0x80012818
    // 0x80218B94: nop

    func_80012818_13418(rdram, ctx);
        goto after_71;
    // 0x80218B94: nop

    after_71:
    // 0x80218B98: jal         0x8021F368
    // 0x80218B9C: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    func_8021F368_688D48(rdram, ctx);
        goto after_72;
    // 0x80218B9C: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    after_72:
    // 0x80218BA0: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80218BA4: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80218BA8: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80218BAC: jal         0x800133E0
    // 0x80218BB0: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_73;
    // 0x80218BB0: lui         $a3, 0xC2C8
    ctx->r7 = S32(0XC2C8 << 16);
    after_73:
    // 0x80218BB4: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80218BB8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80218BBC: b           L_8021A380
    // 0x80218BC0: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
        goto L_8021A380;
    // 0x80218BC0: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
L_80218BC4:
    // 0x80218BC4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218BC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218BCC: bnel        $s0, $at, L_80218BF8
    if (ctx->r16 != ctx->r1) {
        // 0x80218BD0: slti        $at, $s0, 0xF0
        ctx->r1 = SIGNED(ctx->r16) < 0XF0 ? 1 : 0;
            goto L_80218BF8;
    }
    goto skip_11;
    // 0x80218BD0: slti        $at, $s0, 0xF0
    ctx->r1 = SIGNED(ctx->r16) < 0XF0 ? 1 : 0;
    skip_11:
    // 0x80218BD4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218BD8: jal         0x8021EE84
    // 0x80218BDC: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_74;
    // 0x80218BDC: lui         $a1, 0x438C
    ctx->r5 = S32(0X438C << 16);
    after_74:
    // 0x80218BE0: lui         $a1, 0x3A83
    ctx->r5 = S32(0X3A83 << 16);
    // 0x80218BE4: ori         $a1, $a1, 0x126F
    ctx->r5 = ctx->r5 | 0X126F;
    // 0x80218BE8: jal         0x8021F0BC
    // 0x80218BEC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F0BC_688A9C(rdram, ctx);
        goto after_75;
    // 0x80218BEC: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_75:
    // 0x80218BF0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218BF4: slti        $at, $s0, 0xF0
    ctx->r1 = SIGNED(ctx->r16) < 0XF0 ? 1 : 0;
L_80218BF8:
    // 0x80218BF8: beql        $at, $zero, L_80218CA0
    if (ctx->r1 == 0) {
        // 0x80218BFC: addiu       $at, $zero, 0xF0
        ctx->r1 = ADD32(0, 0XF0);
            goto L_80218CA0;
    }
    goto skip_12;
    // 0x80218BFC: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
    skip_12:
    // 0x80218C00: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218C04: jal         0x800124A0
    // 0x80218C08: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_76;
    // 0x80218C08: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_76:
    // 0x80218C0C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218C10: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218C14: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218C18: jal         0x8021EED0
    // 0x80218C1C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_77;
    // 0x80218C1C: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_77:
    // 0x80218C20: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218C24: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80218C28: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80218C2C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218C30: bgez        $s0, L_80218C40
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80218C34: sra         $t2, $s0, 2
        ctx->r10 = S32(SIGNED(ctx->r16) >> 2);
            goto L_80218C40;
    }
    // 0x80218C34: sra         $t2, $s0, 2
    ctx->r10 = S32(SIGNED(ctx->r16) >> 2);
    // 0x80218C38: addiu       $at, $s0, 0x3
    ctx->r1 = ADD32(ctx->r16, 0X3);
    // 0x80218C3C: sra         $t2, $at, 2
    ctx->r10 = S32(SIGNED(ctx->r1) >> 2);
L_80218C40:
    // 0x80218C40: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80218C44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80218C48: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80218C4C: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x80218C50: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80218C54: mflo        $t3
    ctx->r11 = lo;
    // 0x80218C58: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80218C5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80218C60: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80218C64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80218C68: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80218C6C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80218C70: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80218C74: nop

    // 0x80218C78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80218C7C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80218C80: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80218C84: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80218C88: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80218C8C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80218C90: jal         0x80012628
    // 0x80218C94: nop

    func_80012628_13228(rdram, ctx);
        goto after_78;
    // 0x80218C94: nop

    after_78:
    // 0x80218C98: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218C9C: addiu       $at, $zero, 0xF0
    ctx->r1 = ADD32(0, 0XF0);
L_80218CA0:
    // 0x80218CA0: bnel        $s0, $at, L_80218CDC
    if (ctx->r16 != ctx->r1) {
        // 0x80218CA4: addiu       $at, $zero, 0x104
        ctx->r1 = ADD32(0, 0X104);
            goto L_80218CDC;
    }
    goto skip_13;
    // 0x80218CA4: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
    skip_13:
    // 0x80218CA8: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218CAC: jal         0x8021B8D8
    // 0x80218CB0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021B8D8_6852B8(rdram, ctx);
        goto after_79;
    // 0x80218CB0: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_79:
    // 0x80218CB4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218CB8: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80218CBC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218CC0: jal         0x8021B8E4
    // 0x80218CC4: nop

    func_8021B8E4_6852C4(rdram, ctx);
        goto after_80;
    // 0x80218CC4: nop

    after_80:
    // 0x80218CC8: jal         0x80038B98
    // 0x80218CCC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    func_80038B98_39798(rdram, ctx);
        goto after_81;
    // 0x80218CCC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    after_81:
    // 0x80218CD0: b           L_8021A384
    // 0x80218CD4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218CD4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218CD8: addiu       $at, $zero, 0x104
    ctx->r1 = ADD32(0, 0X104);
L_80218CDC:
    // 0x80218CDC: bnel        $s0, $at, L_80218CFC
    if (ctx->r16 != ctx->r1) {
        // 0x80218CE0: addiu       $at, $zero, 0x118
        ctx->r1 = ADD32(0, 0X118);
            goto L_80218CFC;
    }
    goto skip_14;
    // 0x80218CE0: addiu       $at, $zero, 0x118
    ctx->r1 = ADD32(0, 0X118);
    skip_14:
    // 0x80218CE4: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80218CE8: jal         0x8021AF0C
    // 0x80218CEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8021AF0C_6848EC(rdram, ctx);
        goto after_82;
    // 0x80218CEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_82:
    // 0x80218CF0: b           L_8021A384
    // 0x80218CF4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218CF4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218CF8: addiu       $at, $zero, 0x118
    ctx->r1 = ADD32(0, 0X118);
L_80218CFC:
    // 0x80218CFC: bnel        $s0, $at, L_80218D28
    if (ctx->r16 != ctx->r1) {
        // 0x80218D00: addiu       $at, $zero, 0x128
        ctx->r1 = ADD32(0, 0X128);
            goto L_80218D28;
    }
    goto skip_15;
    // 0x80218D00: addiu       $at, $zero, 0x128
    ctx->r1 = ADD32(0, 0X128);
    skip_15:
    // 0x80218D04: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218D08: jal         0x8020D4B8
    // 0x80218D0C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_83;
    // 0x80218D0C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_83:
    // 0x80218D10: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218D14: jal         0x8020D4EC
    // 0x80218D18: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_84;
    // 0x80218D18: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_84:
    // 0x80218D1C: b           L_8021A384
    // 0x80218D20: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218D20: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218D24: addiu       $at, $zero, 0x128
    ctx->r1 = ADD32(0, 0X128);
L_80218D28:
    // 0x80218D28: bne         $s0, $at, L_8021A380
    if (ctx->r16 != ctx->r1) {
        // 0x80218D2C: addiu       $t4, $zero, 0x4
        ctx->r12 = ADD32(0, 0X4);
            goto L_8021A380;
    }
    // 0x80218D2C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80218D30: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80218D34: b           L_8021A380
    // 0x80218D38: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
        goto L_8021A380;
    // 0x80218D38: sb          $t4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r12;
L_80218D3C:
    // 0x80218D3C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218D40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218D44: bnel        $s0, $at, L_80218EE4
    if (ctx->r16 != ctx->r1) {
        // 0x80218D48: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80218EE4;
    }
    goto skip_16;
    // 0x80218D48: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    skip_16:
    // 0x80218D4C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218D50: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218D54: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218D58: jal         0x8020D4EC
    // 0x80218D5C: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_85;
    // 0x80218D5C: nop

    after_85:
    // 0x80218D60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80218D64: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80218D68:
    // 0x80218D68: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80218D6C: beql        $a0, $zero, L_80218D84
    if (ctx->r4 == 0) {
        // 0x80218D70: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80218D84;
    }
    goto skip_17;
    // 0x80218D70: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_17:
    // 0x80218D74: jal         0x80034EF8
    // 0x80218D78: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_86;
    // 0x80218D78: nop

    after_86:
    // 0x80218D7C: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80218D80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80218D84:
    // 0x80218D84: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x80218D88: bne         $at, $zero, L_80218D68
    if (ctx->r1 != 0) {
        // 0x80218D8C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80218D68;
    }
    // 0x80218D8C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80218D90: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80218D94: beql        $a0, $zero, L_80218DAC
    if (ctx->r4 == 0) {
        // 0x80218D98: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_80218DAC;
    }
    goto skip_18;
    // 0x80218D98: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_18:
    // 0x80218D9C: jal         0x80034EF8
    // 0x80218DA0: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_87;
    // 0x80218DA0: nop

    after_87:
    // 0x80218DA4: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x80218DA8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_80218DAC:
    // 0x80218DAC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80218DB0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218DB4: jal         0x8021BEC8
    // 0x80218DB8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    func_8021BEC8_6858A8(rdram, ctx);
        goto after_88;
    // 0x80218DB8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    after_88:
    // 0x80218DBC: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x80218DC0: addiu       $s1, $zero, 0x48
    ctx->r17 = ADD32(0, 0X48);
    // 0x80218DC4: addiu       $s0, $zero, 0xAA
    ctx->r16 = ADD32(0, 0XAA);
L_80218DC8:
    // 0x80218DC8: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80218DCC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218DD0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218DD4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80218DD8: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80218DDC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80218DE0: jal         0x8021BEC8
    // 0x80218DE4: nop

    func_8021BEC8_6858A8(rdram, ctx);
        goto after_89;
    // 0x80218DE4: nop

    after_89:
    // 0x80218DE8: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80218DEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80218DF0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80218DF4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80218DF8: jal         0x8021BE38
    // 0x80218DFC: nop

    func_8021BE38_685818(rdram, ctx);
        goto after_90;
    // 0x80218DFC: nop

    after_90:
    // 0x80218E00: addiu       $s0, $s0, 0xAA
    ctx->r16 = ADD32(ctx->r16, 0XAA);
    // 0x80218E04: addiu       $at, $zero, 0xD48
    ctx->r1 = ADD32(0, 0XD48);
    // 0x80218E08: bne         $s0, $at, L_80218DC8
    if (ctx->r16 != ctx->r1) {
        // 0x80218E0C: addiu       $s1, $s1, 0x48
        ctx->r17 = ADD32(ctx->r17, 0X48);
            goto L_80218DC8;
    }
    // 0x80218E0C: addiu       $s1, $s1, 0x48
    ctx->r17 = ADD32(ctx->r17, 0X48);
    // 0x80218E10: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80218E14: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E18: jal         0x8021E8A0
    // 0x80218E1C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8021E8A0_688280(rdram, ctx);
        goto after_91;
    // 0x80218E1C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_91:
    // 0x80218E20: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E24: jal         0x8021EE84
    // 0x80218E28: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_92;
    // 0x80218E28: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_92:
    // 0x80218E2C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80218E30: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80218E34: jal         0x8021F0BC
    // 0x80218E38: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F0BC_688A9C(rdram, ctx);
        goto after_93;
    // 0x80218E38: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_93:
    // 0x80218E3C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E40: jal         0x8021EE84
    // 0x80218E44: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_94;
    // 0x80218E44: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_94:
    // 0x80218E48: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218E4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218E50: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E54: jal         0x8021EEB0
    // 0x80218E58: lui         $a2, 0x4507
    ctx->r6 = S32(0X4507 << 16);
    func_8021EEB0_688890(rdram, ctx);
        goto after_95;
    // 0x80218E58: lui         $a2, 0x4507
    ctx->r6 = S32(0X4507 << 16);
    after_95:
    // 0x80218E5C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218E60: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80218E64: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E68: jal         0x8021F110
    // 0x80218E6C: lui         $a2, 0xC434
    ctx->r6 = S32(0XC434 << 16);
    func_8021F110_688AF0(rdram, ctx);
        goto after_96;
    // 0x80218E6C: lui         $a2, 0xC434
    ctx->r6 = S32(0XC434 << 16);
    after_96:
    // 0x80218E70: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218E74: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218E78: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218E7C: jal         0x8021EED0
    // 0x80218E80: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_97;
    // 0x80218E80: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_97:
    // 0x80218E84: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218E88: jal         0x80012500
    // 0x80218E8C: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_98;
    // 0x80218E8C: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_98:
    // 0x80218E90: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218E94: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218E98: lui         $a2, 0x4434
    ctx->r6 = S32(0X4434 << 16);
    // 0x80218E9C: jal         0x800127B8
    // 0x80218EA0: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_99;
    // 0x80218EA0: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_99:
    // 0x80218EA4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218EA8: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218EAC: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x80218EB0: jal         0x80012818
    // 0x80218EB4: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    func_80012818_13418(rdram, ctx);
        goto after_100;
    // 0x80218EB4: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    after_100:
    // 0x80218EB8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218EBC: jal         0x800124A0
    // 0x80218EC0: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_101;
    // 0x80218EC0: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_101:
    // 0x80218EC4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218EC8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218ECC: lui         $a2, 0x4434
    ctx->r6 = S32(0X4434 << 16);
    // 0x80218ED0: jal         0x80012518
    // 0x80218ED4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_102;
    // 0x80218ED4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_102:
    // 0x80218ED8: b           L_80218F2C
    // 0x80218EDC: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80218F2C;
    // 0x80218EDC: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218EE0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_80218EE4:
    // 0x80218EE4: bne         $at, $zero, L_80218F2C
    if (ctx->r1 != 0) {
        // 0x80218EE8: slti        $at, $s0, 0x97
        ctx->r1 = SIGNED(ctx->r16) < 0X97 ? 1 : 0;
            goto L_80218F2C;
    }
    // 0x80218EE8: slti        $at, $s0, 0x97
    ctx->r1 = SIGNED(ctx->r16) < 0X97 ? 1 : 0;
    // 0x80218EEC: beql        $at, $zero, L_80218F30
    if (ctx->r1 == 0) {
        // 0x80218EF0: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_80218F30;
    }
    goto skip_19;
    // 0x80218EF0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_19:
    // 0x80218EF4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80218EF8: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80218EFC: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80218F00: jal         0x8021EED0
    // 0x80218F04: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_103;
    // 0x80218F04: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_103:
    // 0x80218F08: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218F0C: jal         0x800124A0
    // 0x80218F10: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_104;
    // 0x80218F10: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_104:
    // 0x80218F14: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218F18: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80218F1C: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x80218F20: jal         0x80012628
    // 0x80218F24: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    func_80012628_13228(rdram, ctx);
        goto after_105;
    // 0x80218F24: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    after_105:
    // 0x80218F28: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_80218F2C:
    // 0x80218F2C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_80218F30:
    // 0x80218F30: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x80218F34: bnel        $s0, $at, L_80218F68
    if (ctx->r16 != ctx->r1) {
        // 0x80218F38: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_80218F68;
    }
    goto skip_20;
    // 0x80218F38: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    skip_20:
    // 0x80218F3C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218F40: jal         0x800124A0
    // 0x80218F44: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_106;
    // 0x80218F44: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_106:
    // 0x80218F48: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218F4C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80218F50: lui         $a2, 0x4434
    ctx->r6 = S32(0X4434 << 16);
    // 0x80218F54: jal         0x80012518
    // 0x80218F58: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_107;
    // 0x80218F58: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    after_107:
    // 0x80218F5C: b           L_8021A384
    // 0x80218F60: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218F60: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218F64: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
L_80218F68:
    // 0x80218F68: bnel        $s0, $at, L_80218F88
    if (ctx->r16 != ctx->r1) {
        // 0x80218F6C: addiu       $at, $zero, 0x92
        ctx->r1 = ADD32(0, 0X92);
            goto L_80218F88;
    }
    goto skip_21;
    // 0x80218F6C: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
    skip_21:
    // 0x80218F70: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218F74: jal         0x8020D4EC
    // 0x80218F78: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_108;
    // 0x80218F78: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_108:
    // 0x80218F7C: b           L_8021A384
    // 0x80218F80: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80218F80: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80218F84: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
L_80218F88:
    // 0x80218F88: bne         $s0, $at, L_8021A380
    if (ctx->r16 != ctx->r1) {
        // 0x80218F8C: addiu       $t5, $zero, 0x5
        ctx->r13 = ADD32(0, 0X5);
            goto L_8021A380;
    }
    // 0x80218F8C: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80218F90: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80218F94: b           L_8021A380
    // 0x80218F98: sb          $t5, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r13;
        goto L_8021A380;
    // 0x80218F98: sb          $t5, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r13;
L_80218F9C:
    // 0x80218F9C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80218FA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218FA4: bnel        $s0, $at, L_80219080
    if (ctx->r16 != ctx->r1) {
        // 0x80218FA8: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80219080;
    }
    goto skip_22;
    // 0x80218FA8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    skip_22:
    // 0x80218FAC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80218FB0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80218FB4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80218FB8: jal         0x8020D4EC
    // 0x80218FBC: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_109;
    // 0x80218FBC: nop

    after_109:
    // 0x80218FC0: jal         0x8021F200
    // 0x80218FC4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_110;
    // 0x80218FC4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_110:
    // 0x80218FC8: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80218FCC: beql        $a0, $zero, L_80218FE4
    if (ctx->r4 == 0) {
        // 0x80218FD0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80218FE4;
    }
    goto skip_23;
    // 0x80218FD0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_23:
    // 0x80218FD4: jal         0x80034EF8
    // 0x80218FD8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_111;
    // 0x80218FD8: nop

    after_111:
    // 0x80218FDC: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x80218FE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80218FE4:
    // 0x80218FE4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80218FE8:
    // 0x80218FE8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80218FEC: beql        $a0, $zero, L_80219004
    if (ctx->r4 == 0) {
        // 0x80218FF0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80219004;
    }
    goto skip_24;
    // 0x80218FF0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_24:
    // 0x80218FF4: jal         0x80034EF8
    // 0x80218FF8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_112;
    // 0x80218FF8: nop

    after_112:
    // 0x80218FFC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219000: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80219004:
    // 0x80219004: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80219008: bne         $s1, $at, L_80218FE8
    if (ctx->r17 != ctx->r1) {
        // 0x8021900C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80218FE8;
    }
    // 0x8021900C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219010: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219014: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219018: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x8021901C: jal         0x800133E0
    // 0x80219020: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_113;
    // 0x80219020: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_113:
    // 0x80219024: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219028: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8021902C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80219030: jal         0x80013484
    // 0x80219034: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_114;
    // 0x80219034: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_114:
    // 0x80219038: jal         0x80012470
    // 0x8021903C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_115;
    // 0x8021903C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_115:
    // 0x80219040: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219044: jal         0x80012500
    // 0x80219048: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    func_80012500_13100(rdram, ctx);
        goto after_116;
    // 0x80219048: addiu       $a1, $zero, 0xF00
    ctx->r5 = ADD32(0, 0XF00);
    after_116:
    // 0x8021904C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219050: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219054: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80219058: jal         0x800127B8
    // 0x8021905C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_117;
    // 0x8021905C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_117:
    // 0x80219060: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219064: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219068: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021906C: jal         0x80012818
    // 0x80219070: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_118;
    // 0x80219070: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_118:
    // 0x80219074: b           L_802192B8
    // 0x80219078: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x80219078: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x8021907C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_80219080:
    // 0x80219080: bnel        $s0, $at, L_802190CC
    if (ctx->r16 != ctx->r1) {
        // 0x80219084: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_802190CC;
    }
    goto skip_25;
    // 0x80219084: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    skip_25:
    // 0x80219088: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021908C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219090: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80219094: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219098: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021909C: jal         0x8021C330
    // 0x802190A0: nop

    func_8021C330_685D10(rdram, ctx);
        goto after_119;
    // 0x802190A0: nop

    after_119:
    // 0x802190A4: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x802190A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802190AC: jal         0x8021C264
    // 0x802190B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8021C264_685C44(rdram, ctx);
        goto after_120;
    // 0x802190B0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_120:
    // 0x802190B4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802190B8: jal         0x8021C2DC
    // 0x802190BC: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    func_8021C2DC_685CBC(rdram, ctx);
        goto after_121;
    // 0x802190BC: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    after_121:
    // 0x802190C0: b           L_802192B8
    // 0x802190C4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x802190C4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802190C8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_802190CC:
    // 0x802190CC: bnel        $s0, $at, L_8021911C
    if (ctx->r16 != ctx->r1) {
        // 0x802190D0: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_8021911C;
    }
    goto skip_26;
    // 0x802190D0: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    skip_26:
    // 0x802190D4: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x802190D8: jal         0x8021C270
    // 0x802190DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8021C270_685C50(rdram, ctx);
        goto after_122;
    // 0x802190DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_122:
    // 0x802190E0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802190E4: jal         0x800124A0
    // 0x802190E8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_123;
    // 0x802190E8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_123:
    // 0x802190EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802190F0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802190F4: lui         $a2, 0x4180
    ctx->r6 = S32(0X4180 << 16);
    // 0x802190F8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802190FC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219100: jal         0x80012628
    // 0x80219104: nop

    func_80012628_13228(rdram, ctx);
        goto after_124;
    // 0x80219104: nop

    after_124:
    // 0x80219108: jal         0x80011A9C
    // 0x8021910C: nop

    func_80011A9C_1269C(rdram, ctx);
        goto after_125;
    // 0x8021910C: nop

    after_125:
    // 0x80219110: b           L_802192B8
    // 0x80219114: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x80219114: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219118: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
L_8021911C:
    // 0x8021911C: bnel        $s0, $at, L_80219188
    if (ctx->r16 != ctx->r1) {
        // 0x80219120: addiu       $at, $zero, 0xC8
        ctx->r1 = ADD32(0, 0XC8);
            goto L_80219188;
    }
    goto skip_27;
    // 0x80219120: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    skip_27:
    // 0x80219124: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219128: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021912C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219130: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219134: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219138: jal         0x8021C8F4
    // 0x8021913C: nop

    func_8021C8F4_6862D4(rdram, ctx);
        goto after_126;
    // 0x8021913C: nop

    after_126:
    // 0x80219140: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x80219144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219148: jal         0x8021C730
    // 0x8021914C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021C730_686110(rdram, ctx);
        goto after_127;
    // 0x8021914C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_127:
    // 0x80219150: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80219154: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219158: jal         0x8021C78C
    // 0x8021915C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021C78C_68616C(rdram, ctx);
        goto after_128;
    // 0x8021915C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_128:
    // 0x80219160: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219164: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219168: jal         0x8021C73C
    // 0x8021916C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021C73C_68611C(rdram, ctx);
        goto after_129;
    // 0x8021916C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_129:
    // 0x80219170: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219174: jal         0x8021C7A4
    // 0x80219178: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021C7A4_686184(rdram, ctx);
        goto after_130;
    // 0x80219178: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_130:
    // 0x8021917C: b           L_802192B8
    // 0x80219180: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x80219180: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219184: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
L_80219188:
    // 0x80219188: bnel        $s0, $at, L_802191C8
    if (ctx->r16 != ctx->r1) {
        // 0x8021918C: addiu       $at, $zero, 0xDC
        ctx->r1 = ADD32(0, 0XDC);
            goto L_802191C8;
    }
    goto skip_28;
    // 0x8021918C: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
    skip_28:
    // 0x80219190: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219194: jal         0x8020D4B8
    // 0x80219198: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_131;
    // 0x80219198: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_131:
    // 0x8021919C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802191A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802191A4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802191A8: jal         0x8020D4D0
    // 0x802191AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_132;
    // 0x802191AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_132:
    // 0x802191B0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802191B4: jal         0x8020D4EC
    // 0x802191B8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_133;
    // 0x802191B8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_133:
    // 0x802191BC: b           L_802192B8
    // 0x802191C0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x802191C0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802191C4: addiu       $at, $zero, 0xDC
    ctx->r1 = ADD32(0, 0XDC);
L_802191C8:
    // 0x802191C8: bnel        $s0, $at, L_80219260
    if (ctx->r16 != ctx->r1) {
        // 0x802191CC: addiu       $at, $zero, 0xFA
        ctx->r1 = ADD32(0, 0XFA);
            goto L_80219260;
    }
    goto skip_29;
    // 0x802191CC: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
    skip_29:
    // 0x802191D0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802191D4: jal         0x8020D4B8
    // 0x802191D8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_134;
    // 0x802191D8: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_134:
    // 0x802191DC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802191E0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802191E4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802191E8: jal         0x8020D4EC
    // 0x802191EC: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_135;
    // 0x802191EC: nop

    after_135:
    // 0x802191F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802191F4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802191F8:
    // 0x802191F8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802191FC: beql        $a0, $zero, L_80219214
    if (ctx->r4 == 0) {
        // 0x80219200: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80219214;
    }
    goto skip_30;
    // 0x80219200: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_30:
    // 0x80219204: jal         0x80034EF8
    // 0x80219208: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_136;
    // 0x80219208: nop

    after_136:
    // 0x8021920C: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219210: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80219214:
    // 0x80219214: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80219218: bne         $s1, $at, L_802191F8
    if (ctx->r17 != ctx->r1) {
        // 0x8021921C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802191F8;
    }
    // 0x8021921C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219220: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219224: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219228: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021922C: jal         0x8021C8F4
    // 0x80219230: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    func_8021C8F4_6862D4(rdram, ctx);
        goto after_137;
    // 0x80219230: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    after_137:
    // 0x80219234: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219238: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x8021923C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219240: jal         0x8021C78C
    // 0x80219244: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8021C78C_68616C(rdram, ctx);
        goto after_138;
    // 0x80219244: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_138:
    // 0x80219248: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8021924C: jal         0x8021C818
    // 0x80219250: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8021C818_6861F8(rdram, ctx);
        goto after_139;
    // 0x80219250: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_139:
    // 0x80219254: b           L_802192B8
    // 0x80219258: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x80219258: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x8021925C: addiu       $at, $zero, 0xFA
    ctx->r1 = ADD32(0, 0XFA);
L_80219260:
    // 0x80219260: bnel        $s0, $at, L_802192A0
    if (ctx->r16 != ctx->r1) {
        // 0x80219264: addiu       $at, $zero, 0x10A
        ctx->r1 = ADD32(0, 0X10A);
            goto L_802192A0;
    }
    goto skip_31;
    // 0x80219264: addiu       $at, $zero, 0x10A
    ctx->r1 = ADD32(0, 0X10A);
    skip_31:
    // 0x80219268: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8021926C: jal         0x8020D4B8
    // 0x80219270: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_140;
    // 0x80219270: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_140:
    // 0x80219274: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219278: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021927C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80219280: jal         0x8020D4D0
    // 0x80219284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_141;
    // 0x80219284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_141:
    // 0x80219288: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8021928C: jal         0x8020D4EC
    // 0x80219290: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_142;
    // 0x80219290: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_142:
    // 0x80219294: b           L_802192B8
    // 0x80219298: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802192B8;
    // 0x80219298: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x8021929C: addiu       $at, $zero, 0x10A
    ctx->r1 = ADD32(0, 0X10A);
L_802192A0:
    // 0x802192A0: bnel        $s0, $at, L_802192BC
    if (ctx->r16 != ctx->r1) {
        // 0x802192A4: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_802192BC;
    }
    goto skip_32;
    // 0x802192A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_32:
    // 0x802192A8: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x802192AC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x802192B0: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
    // 0x802192B4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_802192B8:
    // 0x802192B8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_802192BC:
    // 0x802192BC: slti        $at, $s0, 0xA1
    ctx->r1 = SIGNED(ctx->r16) < 0XA1 ? 1 : 0;
    // 0x802192C0: bne         $at, $zero, L_8021A380
    if (ctx->r1 != 0) {
        // 0x802192C4: slti        $at, $s0, 0xB0
        ctx->r1 = SIGNED(ctx->r16) < 0XB0 ? 1 : 0;
            goto L_8021A380;
    }
    // 0x802192C4: slti        $at, $s0, 0xB0
    ctx->r1 = SIGNED(ctx->r16) < 0XB0 ? 1 : 0;
    // 0x802192C8: beq         $at, $zero, L_8021A380
    if (ctx->r1 == 0) {
        // 0x802192CC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8021A380;
    }
    // 0x802192CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802192D0: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x802192D4: mfhi        $t7
    ctx->r15 = hi;
    // 0x802192D8: bnel        $t7, $zero, L_8021A384
    if (ctx->r15 != 0) {
        // 0x802192DC: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_33;
    // 0x802192DC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_33:
    // 0x802192E0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802192E4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802192E8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802192EC: jal         0x8021C8F4
    // 0x802192F0: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021C8F4_6862D4(rdram, ctx);
        goto after_143;
    // 0x802192F0: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_143:
    // 0x802192F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802192F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802192FC: jal         0x8021C730
    // 0x80219300: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021C730_686110(rdram, ctx);
        goto after_144;
    // 0x80219300: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_144:
    // 0x80219304: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80219308: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8021930C: jal         0x8021C78C
    // 0x80219310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021C78C_68616C(rdram, ctx);
        goto after_145;
    // 0x80219310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_145:
    // 0x80219314: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219318: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8021931C: jal         0x8021C73C
    // 0x80219320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021C73C_68611C(rdram, ctx);
        goto after_146;
    // 0x80219320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_146:
    // 0x80219324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80219328: jal         0x8021C7A4
    // 0x8021932C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021C7A4_686184(rdram, ctx);
        goto after_147;
    // 0x8021932C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_147:
    // 0x80219330: b           L_8021A384
    // 0x80219334: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219334: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_80219338:
    // 0x80219338: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x8021933C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80219340: bnel        $s0, $at, L_80219434
    if (ctx->r16 != ctx->r1) {
        // 0x80219344: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_80219434;
    }
    goto skip_34;
    // 0x80219344: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    skip_34:
    // 0x80219348: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021934C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219350: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219354: jal         0x8020D4EC
    // 0x80219358: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_148;
    // 0x80219358: nop

    after_148:
    // 0x8021935C: jal         0x8021F200
    // 0x80219360: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_149;
    // 0x80219360: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_149:
    // 0x80219364: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80219368: beql        $a0, $zero, L_80219380
    if (ctx->r4 == 0) {
        // 0x8021936C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80219380;
    }
    goto skip_35;
    // 0x8021936C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_35:
    // 0x80219370: jal         0x80034EF8
    // 0x80219374: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_150;
    // 0x80219374: nop

    after_150:
    // 0x80219378: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x8021937C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80219380:
    // 0x80219380: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80219384:
    // 0x80219384: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219388: beql        $a0, $zero, L_802193A0
    if (ctx->r4 == 0) {
        // 0x8021938C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802193A0;
    }
    goto skip_36;
    // 0x8021938C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_36:
    // 0x80219390: jal         0x80034EF8
    // 0x80219394: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_151;
    // 0x80219394: nop

    after_151:
    // 0x80219398: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8021939C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802193A0:
    // 0x802193A0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802193A4: bne         $s1, $at, L_80219384
    if (ctx->r17 != ctx->r1) {
        // 0x802193A8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80219384;
    }
    // 0x802193A8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802193AC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802193B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802193B4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802193B8: jal         0x8021CC48
    // 0x802193BC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    func_8021CC48_686628(rdram, ctx);
        goto after_152;
    // 0x802193BC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    after_152:
    // 0x802193C0: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x802193C4: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x802193C8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x802193CC: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x802193D0: jal         0x800133E0
    // 0x802193D4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_153;
    // 0x802193D4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_153:
    // 0x802193D8: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x802193DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802193E0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802193E4: jal         0x80013484
    // 0x802193E8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_154;
    // 0x802193E8: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_154:
    // 0x802193EC: jal         0x80012470
    // 0x802193F0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_155;
    // 0x802193F0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_155:
    // 0x802193F4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802193F8: jal         0x80012500
    // 0x802193FC: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    func_80012500_13100(rdram, ctx);
        goto after_156;
    // 0x802193FC: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    after_156:
    // 0x80219400: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219404: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219408: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021940C: jal         0x80012818
    // 0x80219410: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_157;
    // 0x80219410: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_157:
    // 0x80219414: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219418: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021941C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80219420: jal         0x800127B8
    // 0x80219424: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_158;
    // 0x80219424: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_158:
    // 0x80219428: b           L_802195D0
    // 0x8021942C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802195D0;
    // 0x8021942C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219430: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
L_80219434:
    // 0x80219434: bnel        $s0, $at, L_802194A0
    if (ctx->r16 != ctx->r1) {
        // 0x80219438: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_802194A0;
    }
    goto skip_37;
    // 0x80219438: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    skip_37:
    // 0x8021943C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219440: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219444: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    // 0x80219448: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021944C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219450: jal         0x8021D250
    // 0x80219454: nop

    func_8021D250_686C30(rdram, ctx);
        goto after_159;
    // 0x80219454: nop

    after_159:
    // 0x80219458: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x8021945C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219460: jal         0x8021D13C
    // 0x80219464: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021D13C_686B1C(rdram, ctx);
        goto after_160;
    // 0x80219464: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_160:
    // 0x80219468: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8021946C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80219470: jal         0x8021D198
    // 0x80219474: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021D198_686B78(rdram, ctx);
        goto after_161;
    // 0x80219474: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_161:
    // 0x80219478: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x8021947C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219480: jal         0x8021D148
    // 0x80219484: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021D148_686B28(rdram, ctx);
        goto after_162;
    // 0x80219484: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_162:
    // 0x80219488: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x8021948C: jal         0x8021D1B0
    // 0x80219490: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021D1B0_686B90(rdram, ctx);
        goto after_163;
    // 0x80219490: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_163:
    // 0x80219494: b           L_802195D0
    // 0x80219498: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802195D0;
    // 0x80219498: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x8021949C: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
L_802194A0:
    // 0x802194A0: bnel        $s0, $at, L_802194E0
    if (ctx->r16 != ctx->r1) {
        // 0x802194A4: addiu       $at, $zero, 0xC8
        ctx->r1 = ADD32(0, 0XC8);
            goto L_802194E0;
    }
    goto skip_38;
    // 0x802194A4: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    skip_38:
    // 0x802194A8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802194AC: jal         0x8020D4B8
    // 0x802194B0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_164;
    // 0x802194B0: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_164:
    // 0x802194B4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802194B8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x802194BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x802194C0: jal         0x8020D4D0
    // 0x802194C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_165;
    // 0x802194C4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_165:
    // 0x802194C8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802194CC: jal         0x8020D4EC
    // 0x802194D0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_166;
    // 0x802194D0: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_166:
    // 0x802194D4: b           L_802195D0
    // 0x802194D8: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802195D0;
    // 0x802194D8: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802194DC: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
L_802194E0:
    // 0x802194E0: bnel        $s0, $at, L_80219578
    if (ctx->r16 != ctx->r1) {
        // 0x802194E4: addiu       $at, $zero, 0xE6
        ctx->r1 = ADD32(0, 0XE6);
            goto L_80219578;
    }
    goto skip_39;
    // 0x802194E4: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
    skip_39:
    // 0x802194E8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802194EC: jal         0x8020D4B8
    // 0x802194F0: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_167;
    // 0x802194F0: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_167:
    // 0x802194F4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802194F8: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802194FC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219500: jal         0x8020D4EC
    // 0x80219504: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_168;
    // 0x80219504: nop

    after_168:
    // 0x80219508: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021950C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80219510:
    // 0x80219510: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219514: beql        $a0, $zero, L_8021952C
    if (ctx->r4 == 0) {
        // 0x80219518: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021952C;
    }
    goto skip_40;
    // 0x80219518: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_40:
    // 0x8021951C: jal         0x80034EF8
    // 0x80219520: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_169;
    // 0x80219520: nop

    after_169:
    // 0x80219524: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219528: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8021952C:
    // 0x8021952C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80219530: bne         $s1, $at, L_80219510
    if (ctx->r17 != ctx->r1) {
        // 0x80219534: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80219510;
    }
    // 0x80219534: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219538: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021953C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219540: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219544: jal         0x8021D250
    // 0x80219548: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    func_8021D250_686C30(rdram, ctx);
        goto after_170;
    // 0x80219548: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    after_170:
    // 0x8021954C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219550: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x80219554: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219558: jal         0x8021D198
    // 0x8021955C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8021D198_686B78(rdram, ctx);
        goto after_171;
    // 0x8021955C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_171:
    // 0x80219560: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80219564: jal         0x8021D224
    // 0x80219568: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8021D224_686C04(rdram, ctx);
        goto after_172;
    // 0x80219568: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_172:
    // 0x8021956C: b           L_802195D0
    // 0x80219570: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802195D0;
    // 0x80219570: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219574: addiu       $at, $zero, 0xE6
    ctx->r1 = ADD32(0, 0XE6);
L_80219578:
    // 0x80219578: bnel        $s0, $at, L_802195B8
    if (ctx->r16 != ctx->r1) {
        // 0x8021957C: addiu       $at, $zero, 0xF6
        ctx->r1 = ADD32(0, 0XF6);
            goto L_802195B8;
    }
    goto skip_41;
    // 0x8021957C: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
    skip_41:
    // 0x80219580: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219584: jal         0x8020D4B8
    // 0x80219588: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_173;
    // 0x80219588: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_173:
    // 0x8021958C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80219594: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80219598: jal         0x8020D4D0
    // 0x8021959C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_174;
    // 0x8021959C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_174:
    // 0x802195A0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802195A4: jal         0x8020D4EC
    // 0x802195A8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_175;
    // 0x802195A8: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_175:
    // 0x802195AC: b           L_802195D0
    // 0x802195B0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_802195D0;
    // 0x802195B0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802195B4: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
L_802195B8:
    // 0x802195B8: bnel        $s0, $at, L_802195D4
    if (ctx->r16 != ctx->r1) {
        // 0x802195BC: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_802195D4;
    }
    goto skip_42;
    // 0x802195BC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_42:
    // 0x802195C0: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x802195C4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x802195C8: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
    // 0x802195CC: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_802195D0:
    // 0x802195D0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_802195D4:
    // 0x802195D4: slti        $at, $s0, 0x8D
    ctx->r1 = SIGNED(ctx->r16) < 0X8D ? 1 : 0;
    // 0x802195D8: bne         $at, $zero, L_8021964C
    if (ctx->r1 != 0) {
        // 0x802195DC: slti        $at, $s0, 0x9C
        ctx->r1 = SIGNED(ctx->r16) < 0X9C ? 1 : 0;
            goto L_8021964C;
    }
    // 0x802195DC: slti        $at, $s0, 0x9C
    ctx->r1 = SIGNED(ctx->r16) < 0X9C ? 1 : 0;
    // 0x802195E0: beq         $at, $zero, L_8021964C
    if (ctx->r1 == 0) {
        // 0x802195E4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8021964C;
    }
    // 0x802195E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802195E8: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x802195EC: mfhi        $t9
    ctx->r25 = hi;
    // 0x802195F0: bnel        $t9, $zero, L_80219650
    if (ctx->r25 != 0) {
        // 0x802195F4: slti        $at, $s0, 0x78
        ctx->r1 = SIGNED(ctx->r16) < 0X78 ? 1 : 0;
            goto L_80219650;
    }
    goto skip_43;
    // 0x802195F4: slti        $at, $s0, 0x78
    ctx->r1 = SIGNED(ctx->r16) < 0X78 ? 1 : 0;
    skip_43:
    // 0x802195F8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802195FC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219600: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219604: jal         0x8021D250
    // 0x80219608: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    func_8021D250_686C30(rdram, ctx);
        goto after_176;
    // 0x80219608: lui         $a2, 0xC160
    ctx->r6 = S32(0XC160 << 16);
    after_176:
    // 0x8021960C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80219610: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219614: jal         0x8021D13C
    // 0x80219618: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021D13C_686B1C(rdram, ctx);
        goto after_177;
    // 0x80219618: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_177:
    // 0x8021961C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80219620: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80219624: jal         0x8021D198
    // 0x80219628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021D198_686B78(rdram, ctx);
        goto after_178;
    // 0x80219628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_178:
    // 0x8021962C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219630: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219634: jal         0x8021D148
    // 0x80219638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021D148_686B28(rdram, ctx);
        goto after_179;
    // 0x80219638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_179:
    // 0x8021963C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80219640: jal         0x8021D1B0
    // 0x80219644: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021D1B0_686B90(rdram, ctx);
        goto after_180;
    // 0x80219644: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_180:
    // 0x80219648: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_8021964C:
    // 0x8021964C: slti        $at, $s0, 0x78
    ctx->r1 = SIGNED(ctx->r16) < 0X78 ? 1 : 0;
L_80219650:
    // 0x80219650: beql        $at, $zero, L_80219698
    if (ctx->r1 == 0) {
        // 0x80219654: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_80219698;
    }
    goto skip_44;
    // 0x80219654: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    skip_44:
    // 0x80219658: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021965C: jal         0x800124A0
    // 0x80219660: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_181;
    // 0x80219660: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_181:
    // 0x80219664: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219668: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021966C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219670: jal         0x80012628
    // 0x80219674: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_182;
    // 0x80219674: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    after_182:
    // 0x80219678: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021967C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219680: lui         $a2, 0xC1F0
    ctx->r6 = S32(0XC1F0 << 16);
    // 0x80219684: jal         0x80012518
    // 0x80219688: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_183;
    // 0x80219688: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_183:
    // 0x8021968C: b           L_8021A384
    // 0x80219690: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219690: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80219694: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
L_80219698:
    // 0x80219698: bnel        $s0, $at, L_8021A384
    if (ctx->r16 != ctx->r1) {
        // 0x8021969C: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_45;
    // 0x8021969C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_45:
    // 0x802196A0: jal         0x80012470
    // 0x802196A4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_184;
    // 0x802196A4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_184:
    // 0x802196A8: b           L_8021A384
    // 0x802196AC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x802196AC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_802196B0:
    // 0x802196B0: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802196B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802196B8: bnel        $s0, $at, L_802197BC
    if (ctx->r16 != ctx->r1) {
        // 0x802196BC: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_802197BC;
    }
    goto skip_46;
    // 0x802196BC: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    skip_46:
    // 0x802196C0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802196C4: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x802196C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802196CC: jal         0x8020D4EC
    // 0x802196D0: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_185;
    // 0x802196D0: nop

    after_185:
    // 0x802196D4: jal         0x8021F200
    // 0x802196D8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_186;
    // 0x802196D8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_186:
    // 0x802196DC: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x802196E0: beql        $a0, $zero, L_802196F8
    if (ctx->r4 == 0) {
        // 0x802196E4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_802196F8;
    }
    goto skip_47;
    // 0x802196E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_47:
    // 0x802196E8: jal         0x80034EF8
    // 0x802196EC: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_187;
    // 0x802196EC: nop

    after_187:
    // 0x802196F0: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x802196F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_802196F8:
    // 0x802196F8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802196FC:
    // 0x802196FC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219700: beql        $a0, $zero, L_80219718
    if (ctx->r4 == 0) {
        // 0x80219704: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80219718;
    }
    goto skip_48;
    // 0x80219704: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_48:
    // 0x80219708: jal         0x80034EF8
    // 0x8021970C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_188;
    // 0x8021970C: nop

    after_188:
    // 0x80219710: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219714: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80219718:
    // 0x80219718: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8021971C: bne         $s1, $at, L_802196FC
    if (ctx->r17 != ctx->r1) {
        // 0x80219720: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802196FC;
    }
    // 0x80219720: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219724: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219728: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021972C: lui         $a2, 0xC080
    ctx->r6 = S32(0XC080 << 16);
    // 0x80219730: jal         0x8021D52C
    // 0x80219734: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    func_8021D52C_686F0C(rdram, ctx);
        goto after_189;
    // 0x80219734: lui         $a3, 0xC1F0
    ctx->r7 = S32(0XC1F0 << 16);
    after_189:
    // 0x80219738: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x8021973C: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219740: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80219744: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80219748: jal         0x800133E0
    // 0x8021974C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_190;
    // 0x8021974C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_190:
    // 0x80219750: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219754: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80219758: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8021975C: jal         0x80013484
    // 0x80219760: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_191;
    // 0x80219760: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_191:
    // 0x80219764: jal         0x80012470
    // 0x80219768: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_192;
    // 0x80219768: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_192:
    // 0x8021976C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219770: jal         0x80012500
    // 0x80219774: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_80012500_13100(rdram, ctx);
        goto after_193;
    // 0x80219774: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_193:
    // 0x80219778: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021977C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80219780: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219784: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219788: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021978C: jal         0x80012818
    // 0x80219790: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012818_13418(rdram, ctx);
        goto after_194;
    // 0x80219790: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_194:
    // 0x80219794: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80219798: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021979C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802197A0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x802197A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x802197A8: jal         0x800127B8
    // 0x802197AC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_195;
    // 0x802197AC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_195:
    // 0x802197B0: b           L_80219964
    // 0x802197B4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80219964;
    // 0x802197B4: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x802197B8: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
L_802197BC:
    // 0x802197BC: bnel        $s0, $at, L_80219834
    if (ctx->r16 != ctx->r1) {
        // 0x802197C0: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_80219834;
    }
    goto skip_49;
    // 0x802197C0: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    skip_49:
    // 0x802197C4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802197C8: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802197CC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x802197D0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802197D4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802197D8: jal         0x8021B34C
    // 0x802197DC: nop

    func_8021B34C_684D2C(rdram, ctx);
        goto after_196;
    // 0x802197DC: nop

    after_196:
    // 0x802197E0: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x802197E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802197E8: jal         0x8021B134
    // 0x802197EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021B134_684B14(rdram, ctx);
        goto after_197;
    // 0x802197EC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_197:
    // 0x802197F0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x802197F4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x802197F8: jal         0x8021B1BC
    // 0x802197FC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_198;
    // 0x802197FC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_198:
    // 0x80219800: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80219804: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219808: jal         0x8021B15C
    // 0x8021980C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021B15C_684B3C(rdram, ctx);
        goto after_199;
    // 0x8021980C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_199:
    // 0x80219810: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219814: jal         0x8021B270
    // 0x80219818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021B270_684C50(rdram, ctx);
        goto after_200;
    // 0x80219818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_200:
    // 0x8021981C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219820: jal         0x8021B1FC
    // 0x80219824: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021B1FC_684BDC(rdram, ctx);
        goto after_201;
    // 0x80219824: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_201:
    // 0x80219828: b           L_80219964
    // 0x8021982C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80219964;
    // 0x8021982C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219830: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
L_80219834:
    // 0x80219834: bnel        $s0, $at, L_80219874
    if (ctx->r16 != ctx->r1) {
        // 0x80219838: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_80219874;
    }
    goto skip_50;
    // 0x80219838: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    skip_50:
    // 0x8021983C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219840: jal         0x8020D4B8
    // 0x80219844: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_202;
    // 0x80219844: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_202:
    // 0x80219848: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8021984C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80219850: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80219854: jal         0x8020D4D0
    // 0x80219858: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_203;
    // 0x80219858: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_203:
    // 0x8021985C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219860: jal         0x8020D4EC
    // 0x80219864: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_204;
    // 0x80219864: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_204:
    // 0x80219868: b           L_80219964
    // 0x8021986C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80219964;
    // 0x8021986C: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219870: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
L_80219874:
    // 0x80219874: bnel        $s0, $at, L_8021990C
    if (ctx->r16 != ctx->r1) {
        // 0x80219878: addiu       $at, $zero, 0xD2
        ctx->r1 = ADD32(0, 0XD2);
            goto L_8021990C;
    }
    goto skip_51;
    // 0x80219878: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    skip_51:
    // 0x8021987C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219880: jal         0x8020D4B8
    // 0x80219884: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_205;
    // 0x80219884: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_205:
    // 0x80219888: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021988C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219890: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219894: jal         0x8020D4EC
    // 0x80219898: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_206;
    // 0x80219898: nop

    after_206:
    // 0x8021989C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x802198A0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_802198A4:
    // 0x802198A4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x802198A8: beql        $a0, $zero, L_802198C0
    if (ctx->r4 == 0) {
        // 0x802198AC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_802198C0;
    }
    goto skip_52;
    // 0x802198AC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_52:
    // 0x802198B0: jal         0x80034EF8
    // 0x802198B4: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_207;
    // 0x802198B4: nop

    after_207:
    // 0x802198B8: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x802198BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_802198C0:
    // 0x802198C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802198C4: bne         $s1, $at, L_802198A4
    if (ctx->r17 != ctx->r1) {
        // 0x802198C8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_802198A4;
    }
    // 0x802198C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802198CC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x802198D0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x802198D4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x802198D8: jal         0x8021B34C
    // 0x802198DC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_8021B34C_684D2C(rdram, ctx);
        goto after_208;
    // 0x802198DC: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_208:
    // 0x802198E0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x802198E4: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x802198E8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802198EC: jal         0x8021B1BC
    // 0x802198F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_209;
    // 0x802198F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_209:
    // 0x802198F4: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x802198F8: jal         0x8021B270
    // 0x802198FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8021B270_684C50(rdram, ctx);
        goto after_210;
    // 0x802198FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_210:
    // 0x80219900: b           L_80219964
    // 0x80219904: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80219964;
    // 0x80219904: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219908: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
L_8021990C:
    // 0x8021990C: bnel        $s0, $at, L_8021994C
    if (ctx->r16 != ctx->r1) {
        // 0x80219910: addiu       $at, $zero, 0xE2
        ctx->r1 = ADD32(0, 0XE2);
            goto L_8021994C;
    }
    goto skip_53;
    // 0x80219910: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
    skip_53:
    // 0x80219914: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219918: jal         0x8020D4B8
    // 0x8021991C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8020D4B8_676E98(rdram, ctx);
        goto after_211;
    // 0x8021991C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_211:
    // 0x80219920: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80219928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021992C: jal         0x8020D4D0
    // 0x80219930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8020D4D0_676EB0(rdram, ctx);
        goto after_212;
    // 0x80219930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_212:
    // 0x80219934: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219938: jal         0x8020D4EC
    // 0x8021993C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_213;
    // 0x8021993C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_213:
    // 0x80219940: b           L_80219964
    // 0x80219944: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
        goto L_80219964;
    // 0x80219944: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219948: addiu       $at, $zero, 0xE2
    ctx->r1 = ADD32(0, 0XE2);
L_8021994C:
    // 0x8021994C: bnel        $s0, $at, L_80219968
    if (ctx->r16 != ctx->r1) {
        // 0x80219950: mtc1        $zero, $f20
        ctx->f20.u32l = 0;
            goto L_80219968;
    }
    goto skip_54;
    // 0x80219950: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    skip_54:
    // 0x80219954: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80219958: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8021995C: sb          $t0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r8;
    // 0x80219960: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_80219964:
    // 0x80219964: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_80219968:
    // 0x80219968: slti        $at, $s0, 0x79
    ctx->r1 = SIGNED(ctx->r16) < 0X79 ? 1 : 0;
    // 0x8021996C: bne         $at, $zero, L_8021A380
    if (ctx->r1 != 0) {
        // 0x80219970: slti        $at, $s0, 0x88
        ctx->r1 = SIGNED(ctx->r16) < 0X88 ? 1 : 0;
            goto L_8021A380;
    }
    // 0x80219970: slti        $at, $s0, 0x88
    ctx->r1 = SIGNED(ctx->r16) < 0X88 ? 1 : 0;
    // 0x80219974: beq         $at, $zero, L_8021A380
    if (ctx->r1 == 0) {
        // 0x80219978: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8021A380;
    }
    // 0x80219978: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8021997C: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x80219980: mfhi        $t1
    ctx->r9 = hi;
    // 0x80219984: bnel        $t1, $zero, L_8021A384
    if (ctx->r9 != 0) {
        // 0x80219988: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_55;
    // 0x80219988: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_55:
    // 0x8021998C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219990: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219994: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219998: jal         0x8021B34C
    // 0x8021999C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_8021B34C_684D2C(rdram, ctx);
        goto after_214;
    // 0x8021999C: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_214:
    // 0x802199A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x802199A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802199A8: jal         0x8021B134
    // 0x802199AC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021B134_684B14(rdram, ctx);
        goto after_215;
    // 0x802199AC: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_215:
    // 0x802199B0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x802199B4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x802199B8: jal         0x8021B1BC
    // 0x802199BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_216;
    // 0x802199BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_216:
    // 0x802199C0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x802199C4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x802199C8: jal         0x8021B15C
    // 0x802199CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021B15C_684B3C(rdram, ctx);
        goto after_217;
    // 0x802199CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_217:
    // 0x802199D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802199D4: jal         0x8021B270
    // 0x802199D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021B270_684C50(rdram, ctx);
        goto after_218;
    // 0x802199D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_218:
    // 0x802199DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802199E0: jal         0x8021B1FC
    // 0x802199E4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8021B1FC_684BDC(rdram, ctx);
        goto after_219;
    // 0x802199E4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_219:
    // 0x802199E8: b           L_8021A384
    // 0x802199EC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x802199EC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_802199F0:
    // 0x802199F0: lh          $t2, 0x2($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X2);
    // 0x802199F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802199F8: bnel        $t2, $at, L_8021A384
    if (ctx->r10 != ctx->r1) {
        // 0x802199FC: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_56;
    // 0x802199FC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_56:
    // 0x80219A00: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219A04: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219A08: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219A0C: jal         0x8020D4EC
    // 0x80219A10: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_220;
    // 0x80219A10: nop

    after_220:
    // 0x80219A14: jal         0x8021F200
    // 0x80219A18: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_221;
    // 0x80219A18: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_221:
    // 0x80219A1C: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80219A20: beql        $a0, $zero, L_80219A38
    if (ctx->r4 == 0) {
        // 0x80219A24: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80219A38;
    }
    goto skip_57;
    // 0x80219A24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_57:
    // 0x80219A28: jal         0x80034EF8
    // 0x80219A2C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_222;
    // 0x80219A2C: nop

    after_222:
    // 0x80219A30: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x80219A34: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80219A38:
    // 0x80219A38: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_80219A3C:
    // 0x80219A3C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219A40: beql        $a0, $zero, L_80219A58
    if (ctx->r4 == 0) {
        // 0x80219A44: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80219A58;
    }
    goto skip_58;
    // 0x80219A44: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_58:
    // 0x80219A48: jal         0x80034EF8
    // 0x80219A4C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_223;
    // 0x80219A4C: nop

    after_223:
    // 0x80219A50: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219A54: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80219A58:
    // 0x80219A58: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80219A5C: bne         $s1, $at, L_80219A3C
    if (ctx->r17 != ctx->r1) {
        // 0x80219A60: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80219A3C;
    }
    // 0x80219A60: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219A64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219A68: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219A6C: lui         $a2, 0xC100
    ctx->r6 = S32(0XC100 << 16);
    // 0x80219A70: jal         0x8021DA38
    // 0x80219A74: lui         $a3, 0xC1B0
    ctx->r7 = S32(0XC1B0 << 16);
    func_8021DA38_687418(rdram, ctx);
        goto after_224;
    // 0x80219A74: lui         $a3, 0xC1B0
    ctx->r7 = S32(0XC1B0 << 16);
    after_224:
    // 0x80219A78: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x80219A7C: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219A80: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x80219A84: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80219A88: jal         0x800133E0
    // 0x80219A8C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800133E0_13FE0(rdram, ctx);
        goto after_225;
    // 0x80219A8C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_225:
    // 0x80219A90: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80219A94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80219A98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80219A9C: jal         0x80013484
    // 0x80219AA0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_226;
    // 0x80219AA0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_226:
    // 0x80219AA4: jal         0x80012470
    // 0x80219AA8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_227;
    // 0x80219AA8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_227:
    // 0x80219AAC: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219AB0: jal         0x80012500
    // 0x80219AB4: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    func_80012500_13100(rdram, ctx);
        goto after_228;
    // 0x80219AB4: addiu       $a1, $zero, 0x3C0
    ctx->r5 = ADD32(0, 0X3C0);
    after_228:
    // 0x80219AB8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219ABC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219AC0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219AC4: jal         0x80012818
    // 0x80219AC8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012818_13418(rdram, ctx);
        goto after_229;
    // 0x80219AC8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_229:
    // 0x80219ACC: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219AD0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x80219AD4: lui         $a2, 0xC2F0
    ctx->r6 = S32(0XC2F0 << 16);
    // 0x80219AD8: jal         0x800127B8
    // 0x80219ADC: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_230;
    // 0x80219ADC: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_230:
    // 0x80219AE0: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80219AE4: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80219AE8: b           L_8021A380
    // 0x80219AEC: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
        goto L_8021A380;
    // 0x80219AEC: sb          $t3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r11;
L_80219AF0:
    // 0x80219AF0: lh          $t4, 0x2($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X2);
    // 0x80219AF4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80219AF8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80219AFC: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80219B00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80219B04: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80219B08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80219B0C: addiu       $a1, $a1, -0x5E60
    ctx->r5 = ADD32(ctx->r5, -0X5E60);
    // 0x80219B10: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80219B14: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80219B18: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x80219B1C: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x80219B20: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80219B24: jal         0x800377F4
    // 0x80219B28: nop

    func_800377F4_383F4(rdram, ctx);
        goto after_231;
    // 0x80219B28: nop

    after_231:
    // 0x80219B2C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80219B30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80219B34: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219B38: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80219B3C: jal         0x800124A0
    // 0x80219B40: nop

    func_800124A0_130A0(rdram, ctx);
        goto after_232;
    // 0x80219B40: nop

    after_232:
    // 0x80219B44: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219B48: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80219B4C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x80219B50: jal         0x80012518
    // 0x80219B54: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    func_80012518_13118(rdram, ctx);
        goto after_233;
    // 0x80219B54: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_233:
    // 0x80219B58: lh          $t5, 0x2($s2)
    ctx->r13 = MEM_H(ctx->r18, 0X2);
    // 0x80219B5C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80219B60: bne         $t5, $at, L_8021A380
    if (ctx->r13 != ctx->r1) {
        // 0x80219B64: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_8021A380;
    }
    // 0x80219B64: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80219B68: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80219B6C: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x80219B70: b           L_8021A380
    // 0x80219B74: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
        goto L_8021A380;
    // 0x80219B74: sb          $t6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r14;
L_80219B78:
    // 0x80219B78: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219B7C: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80219B80: bne         $s0, $at, L_80219C18
    if (ctx->r16 != ctx->r1) {
        // 0x80219B84: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_80219C18;
    }
    // 0x80219B84: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x80219B88: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
L_80219B8C:
    // 0x80219B8C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219B90: beql        $a0, $zero, L_80219BA8
    if (ctx->r4 == 0) {
        // 0x80219B94: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80219BA8;
    }
    goto skip_59;
    // 0x80219B94: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_59:
    // 0x80219B98: jal         0x80034EF8
    // 0x80219B9C: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_234;
    // 0x80219B9C: nop

    after_234:
    // 0x80219BA0: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80219BA4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80219BA8:
    // 0x80219BA8: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x80219BAC: bne         $s1, $at, L_80219B8C
    if (ctx->r17 != ctx->r1) {
        // 0x80219BB0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80219B8C;
    }
    // 0x80219BB0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80219BB4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219BB8: lui         $a2, 0xC19C
    ctx->r6 = S32(0XC19C << 16);
    // 0x80219BBC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80219BC0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219BC4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219BC8: jal         0x8021B34C
    // 0x80219BCC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    func_8021B34C_684D2C(rdram, ctx);
        goto after_235;
    // 0x80219BCC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    after_235:
    // 0x80219BD0: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x80219BD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219BD8: jal         0x8021AF0C
    // 0x80219BDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8021AF0C_6848EC(rdram, ctx);
        goto after_236;
    // 0x80219BDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_236:
    // 0x80219BE0: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x80219BE4: ori         $a1, $a1, 0xF1AA
    ctx->r5 = ctx->r5 | 0XF1AA;
    // 0x80219BE8: jal         0x8021B1BC
    // 0x80219BEC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_237;
    // 0x80219BEC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    after_237:
    // 0x80219BF0: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219BF4: jal         0x8021B270
    // 0x80219BF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8021B270_684C50(rdram, ctx);
        goto after_238;
    // 0x80219BF8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_238:
    // 0x80219BFC: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219C00: jal         0x8021B318
    // 0x80219C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021B318_684CF8(rdram, ctx);
        goto after_239;
    // 0x80219C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_239:
    // 0x80219C08: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80219C0C: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x80219C10: sb          $t7, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r15;
    // 0x80219C14: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
L_80219C18:
    // 0x80219C18: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219C1C: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
    // 0x80219C20: bne         $at, $zero, L_8021A380
    if (ctx->r1 != 0) {
        // 0x80219C24: slti        $at, $s0, 0x38
        ctx->r1 = SIGNED(ctx->r16) < 0X38 ? 1 : 0;
            goto L_8021A380;
    }
    // 0x80219C24: slti        $at, $s0, 0x38
    ctx->r1 = SIGNED(ctx->r16) < 0X38 ? 1 : 0;
    // 0x80219C28: beq         $at, $zero, L_8021A380
    if (ctx->r1 == 0) {
        // 0x80219C2C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8021A380;
    }
    // 0x80219C2C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80219C30: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x80219C34: mfhi        $t8
    ctx->r24 = hi;
    // 0x80219C38: bnel        $t8, $zero, L_8021A384
    if (ctx->r24 != 0) {
        // 0x80219C3C: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_60;
    // 0x80219C3C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_60:
    // 0x80219C40: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x80219C44: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219C48: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219C4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80219C50: sw          $v1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r3;
    // 0x80219C54: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219C58: jal         0x8021B34C
    // 0x80219C5C: lui         $a2, 0xC21C
    ctx->r6 = S32(0XC21C << 16);
    func_8021B34C_684D2C(rdram, ctx);
        goto after_240;
    // 0x80219C5C: lui         $a2, 0xC21C
    ctx->r6 = S32(0XC21C << 16);
    after_240:
    // 0x80219C60: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x80219C64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219C68: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80219C6C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80219C70: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x80219C74: jal         0x8021AF0C
    // 0x80219C78: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    func_8021AF0C_6848EC(rdram, ctx);
        goto after_241;
    // 0x80219C78: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    after_241:
    // 0x80219C7C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219C80: jal         0x8021B134
    // 0x80219C84: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    func_8021B134_684B14(rdram, ctx);
        goto after_242;
    // 0x80219C84: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    after_242:
    // 0x80219C88: lh          $t0, 0x4($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X4);
    // 0x80219C8C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80219C90: ldc1        $f4, -0x54C8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X54C8);
    // 0x80219C94: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80219C98: lui         $at, 0xC033
    ctx->r1 = S32(0XC033 << 16);
    // 0x80219C9C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80219CA0: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80219CA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80219CA8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219CAC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219CB0: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219CB4: mul.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80219CB8: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80219CBC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80219CC0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80219CC4: jal         0x8021B068
    // 0x80219CC8: nop

    func_8021B068_684A48(rdram, ctx);
        goto after_243;
    // 0x80219CC8: nop

    after_243:
    // 0x80219CCC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80219CD0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80219CD4: jal         0x8021B1BC
    // 0x80219CD8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8021B1BC_684B9C(rdram, ctx);
        goto after_244;
    // 0x80219CD8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_244:
    // 0x80219CDC: lh          $t1, 0x4($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X4);
    // 0x80219CE0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80219CE4: ldc1        $f6, -0x54C0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X54C0);
    // 0x80219CE8: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80219CEC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80219CF0: ldc1        $f10, -0x54B8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X54B8);
    // 0x80219CF4: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80219CF8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219CFC: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80219D00: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80219D04: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80219D08: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80219D0C: jal         0x8021B15C
    // 0x80219D10: nop

    func_8021B15C_684B3C(rdram, ctx);
        goto after_245;
    // 0x80219D10: nop

    after_245:
    // 0x80219D14: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219D18: jal         0x8021B270
    // 0x80219D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021B270_684C50(rdram, ctx);
        goto after_246;
    // 0x80219D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_246:
    // 0x80219D20: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219D24: jal         0x8021B318
    // 0x80219D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021B318_684CF8(rdram, ctx);
        goto after_247;
    // 0x80219D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_247:
    // 0x80219D2C: lh          $a1, 0x4($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X4);
    // 0x80219D30: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80219D34: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x80219D38: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80219D3C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80219D40: addu        $t2, $t2, $a1
    ctx->r10 = ADD32(ctx->r10, ctx->r5);
    // 0x80219D44: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80219D48: addiu       $a1, $t2, 0x80
    ctx->r5 = ADD32(ctx->r10, 0X80);
    // 0x80219D4C: andi        $t3, $a1, 0xFF
    ctx->r11 = ctx->r5 & 0XFF;
    // 0x80219D50: jal         0x8021B1FC
    // 0x80219D54: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_8021B1FC_684BDC(rdram, ctx);
        goto after_248;
    // 0x80219D54: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_248:
    // 0x80219D58: lh          $t4, 0x4($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X4);
    // 0x80219D5C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80219D60: b           L_8021A380
    // 0x80219D64: sh          $t5, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r13;
        goto L_8021A380;
    // 0x80219D64: sh          $t5, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r13;
L_80219D68:
    // 0x80219D68: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219D6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80219D70: bnel        $s0, $at, L_80219DD4
    if (ctx->r16 != ctx->r1) {
        // 0x80219D74: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_80219DD4;
    }
    goto skip_61;
    // 0x80219D74: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    skip_61:
    // 0x80219D78: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219D7C: jal         0x800124A0
    // 0x80219D80: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_249;
    // 0x80219D80: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_249:
    // 0x80219D84: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219D88: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219D8C: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x80219D90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219D94: jal         0x80012628
    // 0x80219D98: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    func_80012628_13228(rdram, ctx);
        goto after_250;
    // 0x80219D98: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    after_250:
    // 0x80219D9C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80219DA0: lui         $a1, 0xC100
    ctx->r5 = S32(0XC100 << 16);
    // 0x80219DA4: lui         $a2, 0xC000
    ctx->r6 = S32(0XC000 << 16);
    // 0x80219DA8: jal         0x80012518
    // 0x80219DAC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_251;
    // 0x80219DAC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_251:
    // 0x80219DB0: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80219DB4: jal         0x8021D9B8
    // 0x80219DB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8021D9B8_687398(rdram, ctx);
        goto after_252;
    // 0x80219DB8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_252:
    // 0x80219DBC: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80219DC0: jal         0x8021D9C4
    // 0x80219DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021D9C4_6873A4(rdram, ctx);
        goto after_253;
    // 0x80219DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_253:
    // 0x80219DC8: b           L_8021A384
    // 0x80219DCC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219DCC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80219DD0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
L_80219DD4:
    // 0x80219DD4: bnel        $s0, $at, L_80219F14
    if (ctx->r16 != ctx->r1) {
        // 0x80219DD8: addiu       $at, $zero, 0x96
        ctx->r1 = ADD32(0, 0X96);
            goto L_80219F14;
    }
    goto skip_62;
    // 0x80219DD8: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    skip_62:
    // 0x80219DDC: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x80219DE0: beq         $a0, $zero, L_80219DF4
    if (ctx->r4 == 0) {
        // 0x80219DE4: nop
    
            goto L_80219DF4;
    }
    // 0x80219DE4: nop

    // 0x80219DE8: jal         0x80034EF8
    // 0x80219DEC: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_254;
    // 0x80219DEC: nop

    after_254:
    // 0x80219DF0: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_80219DF4:
    // 0x80219DF4: jal         0x8021F218
    // 0x80219DF8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F218_688BF8(rdram, ctx);
        goto after_255;
    // 0x80219DF8: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_255:
    // 0x80219DFC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219E00: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E04: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80219E08: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80219E0C: jal         0x8021E8A0
    // 0x80219E10: nop

    func_8021E8A0_688280(rdram, ctx);
        goto after_256;
    // 0x80219E10: nop

    after_256:
    // 0x80219E14: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80219E18: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E1C: lui         $a1, 0xC0D0
    ctx->r5 = S32(0XC0D0 << 16);
    // 0x80219E20: jal         0x8021EEB0
    // 0x80219E24: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    func_8021EEB0_688890(rdram, ctx);
        goto after_257;
    // 0x80219E24: lui         $a2, 0xC188
    ctx->r6 = S32(0XC188 << 16);
    after_257:
    // 0x80219E28: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E2C: jal         0x8021EE84
    // 0x80219E30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_258;
    // 0x80219E30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_258:
    // 0x80219E34: lui         $a1, 0x3CF5
    ctx->r5 = S32(0X3CF5 << 16);
    // 0x80219E38: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x80219E3C: jal         0x8021F0BC
    // 0x80219E40: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F0BC_688A9C(rdram, ctx);
        goto after_259;
    // 0x80219E40: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_259:
    // 0x80219E44: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80219E48: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80219E4C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E50: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80219E54: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219E58: jal         0x8021EF00
    // 0x80219E5C: nop

    func_8021EF00_6888E0(rdram, ctx);
        goto after_260;
    // 0x80219E5C: nop

    after_260:
    // 0x80219E60: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E64: jal         0x8021EE84
    // 0x80219E68: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8021EE84_688864(rdram, ctx);
        goto after_261;
    // 0x80219E68: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_261:
    // 0x80219E6C: lui         $at, 0xC0D0
    ctx->r1 = S32(0XC0D0 << 16);
    // 0x80219E70: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80219E74: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E78: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x80219E7C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80219E80: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80219E84: jal         0x8021F110
    // 0x80219E88: nop

    func_8021F110_688AF0(rdram, ctx);
        goto after_262;
    // 0x80219E88: nop

    after_262:
    // 0x80219E8C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219E90: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219E94: jal         0x8021EF00
    // 0x80219E98: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_8021EF00_6888E0(rdram, ctx);
        goto after_263;
    // 0x80219E98: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_263:
    // 0x80219E9C: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219EA0: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80219EA4: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80219EA8: jal         0x8021EED0
    // 0x80219EAC: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_264;
    // 0x80219EAC: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_264:
    // 0x80219EB0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80219EB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80219EB8: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219EBC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219EC0: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80219EC4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80219EC8: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    // 0x80219ECC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80219ED0: jal         0x8021E314
    // 0x80219ED4: nop

    func_8021E314_687CF4(rdram, ctx);
        goto after_265;
    // 0x80219ED4: nop

    after_265:
    // 0x80219ED8: sw          $v0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r2;
    // 0x80219EDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80219EE0: jal         0x8021E2B4
    // 0x80219EE4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8021E2B4_687C94(rdram, ctx);
        goto after_266;
    // 0x80219EE4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_266:
    // 0x80219EE8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80219EEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80219EF0: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219EF4: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x80219EF8: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80219EFC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80219F00: jal         0x8021E2C0
    // 0x80219F04: nop

    func_8021E2C0_687CA0(rdram, ctx);
        goto after_267;
    // 0x80219F04: nop

    after_267:
    // 0x80219F08: b           L_8021A384
    // 0x80219F0C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219F0C: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80219F10: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
L_80219F14:
    // 0x80219F14: bnel        $s0, $at, L_80219F40
    if (ctx->r16 != ctx->r1) {
        // 0x80219F18: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_80219F40;
    }
    goto skip_63;
    // 0x80219F18: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    skip_63:
    // 0x80219F1C: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219F20: jal         0x8021B134
    // 0x80219F24: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    func_8021B134_684B14(rdram, ctx);
        goto after_268;
    // 0x80219F24: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_268:
    // 0x80219F28: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x80219F2C: jal         0x8021B29C
    // 0x80219F30: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_8021B29C_684C7C(rdram, ctx);
        goto after_269;
    // 0x80219F30: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_269:
    // 0x80219F34: b           L_8021A384
    // 0x80219F38: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219F38: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80219F3C: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
L_80219F40:
    // 0x80219F40: bnel        $s0, $at, L_80219FC4
    if (ctx->r16 != ctx->r1) {
        // 0x80219F44: addiu       $at, $zero, 0xBE
        ctx->r1 = ADD32(0, 0XBE);
            goto L_80219FC4;
    }
    goto skip_64;
    // 0x80219F44: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
    skip_64:
    // 0x80219F48: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80219F4C: addiu       $a1, $sp, 0x80
    ctx->r5 = ADD32(ctx->r29, 0X80);
    // 0x80219F50: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80219F54: jal         0x8021EED0
    // 0x80219F58: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8021EED0_6888B0(rdram, ctx);
        goto after_270;
    // 0x80219F58: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_270:
    // 0x80219F5C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80219F60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80219F64: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219F68: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80219F6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80219F70: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219F74: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80219F78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219F7C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80219F80: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80219F84: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80219F88: lwc1        $f4, -0x54B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X54B0);
    // 0x80219F8C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80219F90: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80219F94: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80219F98: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80219F9C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80219FA0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80219FA4: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x80219FA8: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80219FAC: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80219FB0: jal         0x8000EEAC
    // 0x80219FB4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000EEAC_FAAC(rdram, ctx);
        goto after_271;
    // 0x80219FB4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_271:
    // 0x80219FB8: b           L_8021A384
    // 0x80219FBC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x80219FBC: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x80219FC0: addiu       $at, $zero, 0xBE
    ctx->r1 = ADD32(0, 0XBE);
L_80219FC4:
    // 0x80219FC4: bne         $s0, $at, L_8021A380
    if (ctx->r16 != ctx->r1) {
        // 0x80219FC8: addiu       $t8, $zero, 0xC
        ctx->r24 = ADD32(0, 0XC);
            goto L_8021A380;
    }
    // 0x80219FC8: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x80219FCC: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80219FD0: b           L_8021A380
    // 0x80219FD4: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
        goto L_8021A380;
    // 0x80219FD4: sb          $t8, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r24;
L_80219FD8:
    // 0x80219FD8: lh          $s0, 0x2($s2)
    ctx->r16 = MEM_H(ctx->r18, 0X2);
    // 0x80219FDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80219FE0: bnel        $s0, $at, L_8021A128
    if (ctx->r16 != ctx->r1) {
        // 0x80219FE4: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_8021A128;
    }
    goto skip_65;
    // 0x80219FE4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    skip_65:
    // 0x80219FE8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219FEC: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80219FF0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80219FF4: jal         0x8020D4EC
    // 0x80219FF8: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_272;
    // 0x80219FF8: nop

    after_272:
    // 0x80219FFC: jal         0x8021F200
    // 0x8021A000: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_273;
    // 0x8021A000: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_273:
    // 0x8021A004: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x8021A008: beql        $a0, $zero, L_8021A020
    if (ctx->r4 == 0) {
        // 0x8021A00C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021A020;
    }
    goto skip_66;
    // 0x8021A00C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_66:
    // 0x8021A010: jal         0x80034EF8
    // 0x8021A014: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_274;
    // 0x8021A014: nop

    after_274:
    // 0x8021A018: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x8021A01C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021A020:
    // 0x8021A020: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8021A024:
    // 0x8021A024: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x8021A028: beql        $a0, $zero, L_8021A040
    if (ctx->r4 == 0) {
        // 0x8021A02C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021A040;
    }
    goto skip_67;
    // 0x8021A02C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_67:
    // 0x8021A030: jal         0x80034EF8
    // 0x8021A034: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_275;
    // 0x8021A034: nop

    after_275:
    // 0x8021A038: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8021A03C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8021A040:
    // 0x8021A040: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8021A044: bne         $s1, $at, L_8021A024
    if (ctx->r17 != ctx->r1) {
        // 0x8021A048: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8021A024;
    }
    // 0x8021A048: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021A04C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A050: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021A054: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021A058: jal         0x8021DF94
    // 0x8021A05C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    func_8021DF94_687974(rdram, ctx);
        goto after_276;
    // 0x8021A05C: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    after_276:
    // 0x8021A060: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A064: sw          $v0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r2;
    // 0x8021A068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021A06C: jal         0x8021DE84
    // 0x8021A070: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    func_8021DE84_687864(rdram, ctx);
        goto after_277;
    // 0x8021A070: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_277:
    // 0x8021A074: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8021A078: jal         0x8021DE78
    // 0x8021A07C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8021DE78_687858(rdram, ctx);
        goto after_278;
    // 0x8021A07C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_278:
    // 0x8021A080: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8021A084: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021A088: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8021A08C: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8021A090: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021A094: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021A098: jal         0x800133E0
    // 0x8021A09C: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_279;
    // 0x8021A09C: nop

    after_279:
    // 0x8021A0A0: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8021A0A4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8021A0A8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8021A0AC: jal         0x80013484
    // 0x8021A0B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_280;
    // 0x8021A0B0: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_280:
    // 0x8021A0B4: jal         0x80012470
    // 0x8021A0B8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_281;
    // 0x8021A0B8: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_281:
    // 0x8021A0BC: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A0C0: jal         0x80012500
    // 0x8021A0C4: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    func_80012500_13100(rdram, ctx);
        goto after_282;
    // 0x8021A0C4: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    after_282:
    // 0x8021A0C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A0CC: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021A0D0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A0D4: jal         0x80012818
    // 0x8021A0D8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    func_80012818_13418(rdram, ctx);
        goto after_283;
    // 0x8021A0D8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_283:
    // 0x8021A0DC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A0E0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A0E4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8021A0E8: jal         0x800127B8
    // 0x8021A0EC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_284;
    // 0x8021A0EC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_284:
    // 0x8021A0F0: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A0F4: jal         0x800124A0
    // 0x8021A0F8: lui         $a1, 0x4298
    ctx->r5 = S32(0X4298 << 16);
    func_800124A0_130A0(rdram, ctx);
        goto after_285;
    // 0x8021A0F8: lui         $a1, 0x4298
    ctx->r5 = S32(0X4298 << 16);
    after_285:
    // 0x8021A0FC: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A100: jal         0x800124AC
    // 0x8021A104: lui         $a1, 0x4596
    ctx->r5 = S32(0X4596 << 16);
    func_800124AC_130AC(rdram, ctx);
        goto after_286;
    // 0x8021A104: lui         $a1, 0x4596
    ctx->r5 = S32(0X4596 << 16);
    after_286:
    // 0x8021A108: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A10C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021A110: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A114: jal         0x80012518
    // 0x8021A118: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    func_80012518_13118(rdram, ctx);
        goto after_287;
    // 0x8021A118: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    after_287:
    // 0x8021A11C: b           L_8021A384
    // 0x8021A120: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A120: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x8021A124: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
L_8021A128:
    // 0x8021A128: bnel        $s0, $at, L_8021A148
    if (ctx->r16 != ctx->r1) {
        // 0x8021A12C: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_8021A148;
    }
    goto skip_68;
    // 0x8021A12C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_68:
    // 0x8021A130: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8021A134: jal         0x8021DE30
    // 0x8021A138: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8021DE30_687810(rdram, ctx);
        goto after_288;
    // 0x8021A138: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_288:
    // 0x8021A13C: b           L_8021A384
    // 0x8021A140: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A140: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x8021A144: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_8021A148:
    // 0x8021A148: bnel        $s0, $at, L_8021A1DC
    if (ctx->r16 != ctx->r1) {
        // 0x8021A14C: addiu       $at, $zero, 0x56
        ctx->r1 = ADD32(0, 0X56);
            goto L_8021A1DC;
    }
    goto skip_69;
    // 0x8021A14C: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    skip_69:
    // 0x8021A150: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8021A154: jal         0x8021DE78
    // 0x8021A158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021DE78_687858(rdram, ctx);
        goto after_289;
    // 0x8021A158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_289:
    // 0x8021A15C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021A160: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021A164: lwc1        $f6, -0x54AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X54AC);
    // 0x8021A168: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8021A16C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8021A170: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8021A174: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8021A178: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8021A17C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A180: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8021A184: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8021A188: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8021A18C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8021A190: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8021A194: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021A198: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8021A19C: lui         $a3, 0xC220
    ctx->r7 = S32(0XC220 << 16);
    // 0x8021A1A0: jal         0x802154F4
    // 0x8021A1A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_802154F4_67EED4(rdram, ctx);
        goto after_290;
    // 0x8021A1A4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_290:
    // 0x8021A1A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021A1AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021A1B0: sw          $v0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r2;
    // 0x8021A1B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021A1B8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021A1BC: jal         0x80215260
    // 0x8021A1C0: nop

    func_80215260_67EC40(rdram, ctx);
        goto after_291;
    // 0x8021A1C0: nop

    after_291:
    // 0x8021A1C4: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x8021A1C8: jal         0x8021526C
    // 0x8021A1CC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_8021526C_67EC4C(rdram, ctx);
        goto after_292;
    // 0x8021A1CC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_292:
    // 0x8021A1D0: b           L_8021A384
    // 0x8021A1D4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A1D4: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x8021A1D8: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
L_8021A1DC:
    // 0x8021A1DC: bnel        $s0, $at, L_8021A24C
    if (ctx->r16 != ctx->r1) {
        // 0x8021A1E0: addiu       $at, $zero, 0xB0
        ctx->r1 = ADD32(0, 0XB0);
            goto L_8021A24C;
    }
    goto skip_70;
    // 0x8021A1E0: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    skip_70:
    // 0x8021A1E4: lw          $a0, 0x30($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X30);
    // 0x8021A1E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021A1EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8021A1F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8021A1F4: jal         0x80215380
    // 0x8021A1F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80215380_67ED60(rdram, ctx);
        goto after_293;
    // 0x8021A1F8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_293:
    // 0x8021A1FC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021A200: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021A204: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x8021A208: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A20C: jal         0x8021E154
    // 0x8021A210: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    func_8021E154_687B34(rdram, ctx);
        goto after_294;
    // 0x8021A210: lui         $a3, 0xC270
    ctx->r7 = S32(0XC270 << 16);
    after_294:
    // 0x8021A214: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021A218: addiu       $s1, $zero, 0x3FC
    ctx->r17 = ADD32(0, 0X3FC);
    // 0x8021A21C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_8021A220:
    // 0x8021A220: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x8021A224: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x8021A228: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x8021A22C: jal         0x8021E490
    // 0x8021A230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8021E490_687E70(rdram, ctx);
        goto after_295;
    // 0x8021A230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_295:
    // 0x8021A234: addiu       $s0, $s0, 0x66
    ctx->r16 = ADD32(ctx->r16, 0X66);
    // 0x8021A238: bnel        $s0, $s1, L_8021A220
    if (ctx->r16 != ctx->r17) {
        // 0x8021A23C: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_8021A220;
    }
    goto skip_71;
    // 0x8021A23C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_71:
    // 0x8021A240: b           L_8021A384
    // 0x8021A244: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A244: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x8021A248: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
L_8021A24C:
    // 0x8021A24C: bnel        $s0, $at, L_8021A26C
    if (ctx->r16 != ctx->r1) {
        // 0x8021A250: addiu       $at, $zero, 0xC4
        ctx->r1 = ADD32(0, 0XC4);
            goto L_8021A26C;
    }
    goto skip_72;
    // 0x8021A250: addiu       $at, $zero, 0xC4
    ctx->r1 = ADD32(0, 0XC4);
    skip_72:
    // 0x8021A254: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8021A258: jal         0x8020D4EC
    // 0x8021A25C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    func_8020D4EC_676ECC(rdram, ctx);
        goto after_296;
    // 0x8021A25C: lui         $a1, 0x437F
    ctx->r5 = S32(0X437F << 16);
    after_296:
    // 0x8021A260: b           L_8021A384
    // 0x8021A264: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A264: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    // 0x8021A268: addiu       $at, $zero, 0xC4
    ctx->r1 = ADD32(0, 0XC4);
L_8021A26C:
    // 0x8021A26C: bne         $s0, $at, L_8021A380
    if (ctx->r16 != ctx->r1) {
        // 0x8021A270: lui         $t4, 0x8016
        ctx->r12 = S32(0X8016 << 16);
            goto L_8021A380;
    }
    // 0x8021A270: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8021A274: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x8021A278: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8021A27C: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x8021A280: lhu         $a0, -0x520C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X520C);
    // 0x8021A284: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x8021A288: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x8021A28C: jal         0x800374AC
    // 0x8021A290: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_800374AC_380AC(rdram, ctx);
        goto after_297;
    // 0x8021A290: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_297:
    // 0x8021A294: b           L_8021A384
    // 0x8021A298: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
        goto L_8021A384;
    // 0x8021A298: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_8021A29C:
    // 0x8021A29C: lh          $t6, 0x2($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X2);
    // 0x8021A2A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8021A2A4: bnel        $t6, $at, L_8021A384
    if (ctx->r14 != ctx->r1) {
        // 0x8021A2A8: lh          $t7, 0x2($s2)
        ctx->r15 = MEM_H(ctx->r18, 0X2);
            goto L_8021A384;
    }
    goto skip_73;
    // 0x8021A2A8: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
    skip_73:
    // 0x8021A2AC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021A2B0: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x8021A2B4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A2B8: jal         0x8020D4EC
    // 0x8021A2BC: nop

    func_8020D4EC_676ECC(rdram, ctx);
        goto after_298;
    // 0x8021A2BC: nop

    after_298:
    // 0x8021A2C0: jal         0x8021F200
    // 0x8021A2C4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    func_8021F200_688BE0(rdram, ctx);
        goto after_299;
    // 0x8021A2C4: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    after_299:
    // 0x8021A2C8: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x8021A2CC: beql        $a0, $zero, L_8021A2E4
    if (ctx->r4 == 0) {
        // 0x8021A2D0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021A2E4;
    }
    goto skip_74;
    // 0x8021A2D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    skip_74:
    // 0x8021A2D4: jal         0x80034EF8
    // 0x8021A2D8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_300;
    // 0x8021A2D8: nop

    after_300:
    // 0x8021A2DC: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x8021A2E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8021A2E4:
    // 0x8021A2E4: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8021A2E8:
    // 0x8021A2E8: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x8021A2EC: beql        $a0, $zero, L_8021A304
    if (ctx->r4 == 0) {
        // 0x8021A2F0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021A304;
    }
    goto skip_75;
    // 0x8021A2F0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    skip_75:
    // 0x8021A2F4: jal         0x80034EF8
    // 0x8021A2F8: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_301;
    // 0x8021A2F8: nop

    after_301:
    // 0x8021A2FC: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8021A300: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8021A304:
    // 0x8021A304: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8021A308: bne         $s1, $at, L_8021A2E8
    if (ctx->r17 != ctx->r1) {
        // 0x8021A30C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8021A2E8;
    }
    // 0x8021A30C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021A310: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8021A314: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021A318: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8021A31C: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x8021A320: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021A324: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021A328: jal         0x800133E0
    // 0x8021A32C: nop

    func_800133E0_13FE0(rdram, ctx);
        goto after_302;
    // 0x8021A32C: nop

    after_302:
    // 0x8021A330: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8021A334: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8021A338: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8021A33C: jal         0x80013484
    // 0x8021A340: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80013484_14084(rdram, ctx);
        goto after_303;
    // 0x8021A340: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_303:
    // 0x8021A344: jal         0x80012470
    // 0x8021A348: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012470_13070(rdram, ctx);
        goto after_304;
    // 0x8021A348: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_304:
    // 0x8021A34C: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A350: jal         0x80012500
    // 0x8021A354: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    func_80012500_13100(rdram, ctx);
        goto after_305;
    // 0x8021A354: addiu       $a1, $zero, 0x640
    ctx->r5 = ADD32(0, 0X640);
    after_305:
    // 0x8021A358: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A35C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021A360: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021A364: jal         0x80012818
    // 0x8021A368: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    func_80012818_13418(rdram, ctx);
        goto after_306;
    // 0x8021A368: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    after_306:
    // 0x8021A36C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8021A370: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8021A374: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8021A378: jal         0x800127B8
    // 0x8021A37C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_800127B8_133B8(rdram, ctx);
        goto after_307;
    // 0x8021A37C: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_307:
L_8021A380:
    // 0x8021A380: lh          $t7, 0x2($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X2);
L_8021A384:
    // 0x8021A384: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8021A388: sh          $t8, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r24;
    // 0x8021A38C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8021A390: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8021A394: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8021A398: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8021A39C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x8021A3A0: jr          $ra
    // 0x8021A3A4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x8021A3A4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8022598C_68F36C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022598C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80225990: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80225994: swc1        $f12, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f12.u32l;
    // 0x80225998: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x8022599C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802259A0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802259A4: nop

    // 0x802259A8: bc1fl       L_802259C8
    if (!c1cs) {
        // 0x802259AC: lwc1        $f6, 0xC($v0)
        ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
            goto L_802259C8;
    }
    goto skip_0;
    // 0x802259AC: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x802259B0: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x802259B4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802259B8: sub.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x802259BC: b           L_802259CC
    // 0x802259C0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_802259CC;
    // 0x802259C0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x802259C4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
L_802259C8:
    // 0x802259C8: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_802259CC:
    // 0x802259CC: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802259D0: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x802259D4: jr          $ra
    // 0x802259D8: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x802259D8: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_8021F964_689344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021F968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021F96C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021F970: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F974: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021F978: sb          $t6, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = ctx->r14;
    // 0x8021F97C: jal         0x80013AC4
    // 0x8021F980: addiu       $a0, $a0, -0x5BA0
    ctx->r4 = ADD32(ctx->r4, -0X5BA0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021F980: addiu       $a0, $a0, -0x5BA0
    ctx->r4 = ADD32(ctx->r4, -0X5BA0);
    after_0:
    // 0x8021F984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021F988: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8021F98C: sb          $zero, -0x3A2C($at)
    MEM_B(-0X3A2C, ctx->r1) = 0;
    // 0x8021F990: jr          $ra
    // 0x8021F994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8021F994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80212E90_67C870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80212E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80212E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80212E98: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80212E9C: lwc1        $f6, 0x60($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80212EA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80212EA4: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80212EA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80212EAC: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x80212EB0: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x80212EB4: lh          $t6, 0x66($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X66);
    // 0x80212EB8: beql        $t6, $zero, L_80212EE4
    if (ctx->r14 == 0) {
        // 0x80212EBC: lwc1        $f10, 0x28($a1)
        ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
            goto L_80212EE4;
    }
    goto skip_0;
    // 0x80212EBC: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    skip_0:
    // 0x80212EC0: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x80212EC4: lh          $t8, 0xC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0XC);
    // 0x80212EC8: lh          $t1, 0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0XA);
    // 0x80212ECC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80212ED0: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80212ED4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80212ED8: sh          $t0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r8;
    // 0x80212EDC: sh          $t2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r10;
    // 0x80212EE0: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
L_80212EE4:
    // 0x80212EE4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80212EE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212EEC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80212EF0: lhu         $t3, 0x64($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X64);
    // 0x80212EF4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80212EF8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80212EFC: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x80212F00: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80212F04: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x80212F08: jal         0x8001B5AC
    // 0x80212F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001B5AC_1C1AC(rdram, ctx);
        goto after_0;
    // 0x80212F0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80212F10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80212F14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80212F18: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80212F1C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x80212F20: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x80212F24: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80212F28: nop

    // 0x80212F2C: bc1fl       L_80212F44
    if (!c1cs) {
        // 0x80212F30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80212F44;
    }
    goto skip_1;
    // 0x80212F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80212F34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80212F38: nop

    // 0x80212F3C: swc1        $f18, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f18.u32l;
    // 0x80212F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80212F44:
    // 0x80212F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80212F48: jr          $ra
    // 0x80212F4C: nop

    TRACE_RETURN()
    return;
    // 0x80212F4C: nop

;}
RECOMP_FUNC void func_8022727C_690C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022727C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x80227280: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80227284: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80227288: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x8022728C: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80227290: jr          $ra
    // 0x80227294: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80227294: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80214994_67E374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214994: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80214998: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021499C: swc1        $f12, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f12.u32l;
    // 0x802149A0: swc1        $f12, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f12.u32l;
    // 0x802149A4: jr          $ra
    // 0x802149A8: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x802149A8: swc1        $f12, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8021B01C_6849FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021B020: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8021B024: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8021B028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B02C: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x8021B030: lwc1        $f6, 0x6C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8021B034: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021B038: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021B03C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8021B040: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021B044: jal         0x800040A8
    // 0x8021B048: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x8021B048: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_0:
    // 0x8021B04C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021B050: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x8021B054: sh          $t6, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r14;
    // 0x8021B058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021B060: jr          $ra
    // 0x8021B064: nop

    TRACE_RETURN()
    return;
    // 0x8021B064: nop

;}
RECOMP_FUNC void func_8022819C_691B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022819C: lwc1        $f4, 0x68($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X68);
    // 0x802281A0: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x802281A4: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x802281A8: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x802281AC: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802281B0: jr          $ra
    // 0x802281B4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x802281B4: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802245E0_68DFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802245E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802245E4: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x802245E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802245EC: ldc1        $f4, -0x4F30($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4F30);
    // 0x802245F0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802245F4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x802245F8: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x802245FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80224600: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80224604: bc1fl       L_80224680
    if (!c1cs) {
        // 0x80224608: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80224680;
    }
    goto skip_0;
    // 0x80224608: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    skip_0:
    // 0x8022460C: lwc1        $f2, 0x1C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80224610: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80224614: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80224618: nop

    // 0x8022461C: bc1fl       L_80224634
    if (!c1cs) {
        // 0x80224620: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_80224634;
    }
    goto skip_1;
    // 0x80224620: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x80224624: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80224628: b           L_80224634
    // 0x8022462C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80224634;
    // 0x8022462C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80224630: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80224634:
    // 0x80224634: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80224638: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8022463C: nop

    // 0x80224640: bc1fl       L_8022465C
    if (!c1cs) {
        // 0x80224644: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_8022465C;
    }
    goto skip_2;
    // 0x80224644: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_2:
    // 0x80224648: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8022464C: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80224650: b           L_8022467C
    // 0x80224654: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
        goto L_8022467C;
    // 0x80224654: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x80224658: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_8022465C:
    // 0x8022465C: nop

    // 0x80224660: bc1fl       L_80224678
    if (!c1cs) {
        // 0x80224664: add.s       $f18, $f12, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
            goto L_80224678;
    }
    goto skip_3;
    // 0x80224664: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
    skip_3:
    // 0x80224668: sub.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x8022466C: b           L_8022467C
    // 0x80224670: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
        goto L_8022467C;
    // 0x80224670: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x80224674: add.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f12.fl + ctx->f14.fl;
L_80224678:
    // 0x80224678: swc1        $f18, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f18.u32l;
L_8022467C:
    // 0x8022467C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
L_80224680:
    // 0x80224680: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80224684: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80224688: nop

    // 0x8022468C: bc1fl       L_802246A8
    if (!c1cs) {
        // 0x80224690: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802246A8;
    }
    goto skip_4;
    // 0x80224690: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_4:
    // 0x80224694: lw          $t7, 0x24($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X24);
    // 0x80224698: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8022469C: b           L_802246DC
    // 0x802246A0: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
        goto L_802246DC;
    // 0x802246A0: sb          $t6, 0x2C($t7)
    MEM_B(0X2C, ctx->r15) = ctx->r14;
    // 0x802246A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802246A8:
    // 0x802246A8: nop

    // 0x802246AC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802246B0: nop

    // 0x802246B4: bc1fl       L_802246CC
    if (!c1cs) {
        // 0x802246B8: trunc.w.s   $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
            goto L_802246CC;
    }
    goto skip_5;
    // 0x802246B8: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    skip_5:
    // 0x802246BC: lw          $t8, 0x24($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X24);
    // 0x802246C0: b           L_802246DC
    // 0x802246C4: sb          $zero, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = 0;
        goto L_802246DC;
    // 0x802246C4: sb          $zero, 0x2C($t8)
    MEM_B(0X2C, ctx->r24) = 0;
    // 0x802246C8: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
L_802246CC:
    // 0x802246CC: lw          $t1, 0x24($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X24);
    // 0x802246D0: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x802246D4: nop

    // 0x802246D8: sb          $t0, 0x2C($t1)
    MEM_B(0X2C, ctx->r9) = ctx->r8;
L_802246DC:
    // 0x802246DC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802246E0: blezl       $v1, L_80224714
    if (SIGNED(ctx->r3) <= 0) {
        // 0x802246E4: lwc1        $f10, 0x4($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80224714;
    }
    goto skip_6;
    // 0x802246E4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    skip_6:
    // 0x802246E8: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802246EC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802246F0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802246F4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802246F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802246FC: addiu       $t2, $v1, -0x1
    ctx->r10 = ADD32(ctx->r3, -0X1);
    // 0x80224700: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x80224704: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80224708: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x8022470C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80224710: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
L_80224714:
    // 0x80224714: lw          $t3, 0x24($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X24);
    // 0x80224718: swc1        $f10, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->f10.u32l;
    // 0x8022471C: lw          $t4, 0x24($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X24);
    // 0x80224720: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224724: jr          $ra
    // 0x80224728: swc1        $f16, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x80224728: swc1        $f16, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_80217B28_681508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217B28: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80217B2C: beq         $a1, $at, L_80217B6C
    if (ctx->r5 == ctx->r1) {
        // 0x80217B30: lw          $v1, 0x18($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X18);
            goto L_80217B6C;
    }
    // 0x80217B30: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80217B34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80217B38: bne         $a1, $at, L_80217B94
    if (ctx->r5 != ctx->r1) {
        // 0x80217B3C: addiu       $v0, $a0, 0x5C
        ctx->r2 = ADD32(ctx->r4, 0X5C);
            goto L_80217B94;
    }
    // 0x80217B3C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217B40: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80217B44: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x80217B48: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217B4C: lwc1        $f4, -0x55CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55CC);
    // 0x80217B50: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x80217B54: addiu       $t7, $t7, 0x1754
    ctx->r15 = ADD32(ctx->r15, 0X1754);
    // 0x80217B58: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217B5C: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80217B60: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80217B64: b           L_80217B94
    // 0x80217B68: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
        goto L_80217B94;
    // 0x80217B68: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
L_80217B6C:
    // 0x80217B6C: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217B70: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x80217B74: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80217B78: lwc1        $f6, -0x55C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55C8);
    // 0x80217B7C: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80217B80: addiu       $t9, $t9, 0x1B64
    ctx->r25 = ADD32(ctx->r25, 0X1B64);
    // 0x80217B84: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x80217B88: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x80217B8C: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80217B90: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
L_80217B94:
    // 0x80217B94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80217B98: jr          $ra
    // 0x80217B9C: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80217B9C: swc1        $f8, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8021B98C_68536C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B98C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021B990: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021B994: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8021B998: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021B99C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021B9A0: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x8021B9A4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8021B9A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8021B9AC: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x8021B9B0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021B9B4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8021B9B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8021B9BC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x8021B9C0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x8021B9C4: lwc1        $f10, 0x64($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X64);
    // 0x8021B9C8: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x8021B9CC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8021B9D0: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x8021B9D4: lwc1        $f6, 0x68($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X68);
    // 0x8021B9D8: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8021B9DC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8021B9E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021B9E4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    // 0x8021B9E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8021B9EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8021B9F0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8021B9F4: jal         0x8001DB04
    // 0x8021B9F8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    func_8001DB04_1E704(rdram, ctx);
        goto after_0;
    // 0x8021B9F8: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8021B9FC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8021BA00: lhu         $t7, 0x28($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X28);
    // 0x8021BA04: lw          $t8, 0x94($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X94);
    // 0x8021BA08: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x8021BA0C: sh          $t7, 0x14($t8)
    MEM_H(0X14, ctx->r24) = ctx->r15;
    // 0x8021BA10: lhu         $t9, 0x2A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X2A);
    // 0x8021BA14: lw          $t0, 0x38($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X38);
    // 0x8021BA18: sh          $t9, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r25;
    // 0x8021BA1C: lhu         $t1, 0x2C($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2C);
    // 0x8021BA20: lw          $t2, 0x38($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X38);
    // 0x8021BA24: sh          $t1, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r9;
    // 0x8021BA28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BA2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8021BA30: jr          $ra
    // 0x8021BA34: nop

    TRACE_RETURN()
    return;
    // 0x8021BA34: nop

;}
RECOMP_FUNC void func_80217268_680C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80217268: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8021726C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80217270: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    // 0x80217274: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80217278: swc1        $f12, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f12.u32l;
    // 0x8021727C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80217280: swc1        $f14, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f14.u32l;
    // 0x80217284: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80217288: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x8021728C: bc1f        L_802172AC
    if (!c1cs) {
        // 0x80217290: swc1        $f4, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
            goto L_802172AC;
    }
    // 0x80217290: swc1        $f4, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f4.u32l;
    // 0x80217294: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80217298: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021729C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802172A0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x802172A4: b           L_802172B8
    // 0x802172A8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802172B8;
    // 0x802172A8: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802172AC:
    // 0x802172AC: lwc1        $f16, 0x34($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X34);
    // 0x802172B0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802172B4: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_802172B8:
    // 0x802172B8: lwc1        $f14, 0x30($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X30);
    // 0x802172BC: lwc1        $f2, 0x3C($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x802172C0: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802172C4: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802172C8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802172CC: nop

    // 0x802172D0: bc1f        L_802172E4
    if (!c1cs) {
        // 0x802172D4: swc1        $f4, 0x38($v0)
        MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
            goto L_802172E4;
    }
    // 0x802172D4: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x802172D8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x802172DC: b           L_802172E8
    // 0x802172E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_802172E8;
    // 0x802172E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_802172E4:
    // 0x802172E4: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_802172E8:
    // 0x802172E8: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x802172EC: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x802172F0: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802172F4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x802172F8: nop

    // 0x802172FC: bc1f        L_80217310
    if (!c1cs) {
        // 0x80217300: swc1        $f6, 0x40($v0)
        MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
            goto L_80217310;
    }
    // 0x80217300: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x80217304: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80217308: b           L_80217314
    // 0x8021730C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80217314;
    // 0x8021730C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80217310:
    // 0x80217310: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_80217314:
    // 0x80217314: div.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80217318: jr          $ra
    // 0x8021731C: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x8021731C: swc1        $f8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80213188_67CB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213188: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021318C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80213190: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80213194: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80213198: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021319C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x802131A0: addiu       $a1, $a1, 0x3100
    ctx->r5 = ADD32(ctx->r5, 0X3100);
    // 0x802131A4: jal         0x80034E08
    // 0x802131A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x802131A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802131AC: bne         $v0, $zero, L_802131BC
    if (ctx->r2 != 0) {
        // 0x802131B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802131BC;
    }
    // 0x802131B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802131B4: b           L_80213254
    // 0x802131B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80213254;
    // 0x802131B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802131BC:
    // 0x802131BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802131C0: lwc1        $f2, -0x5750($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5750);
    // 0x802131C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802131C8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x802131CC: addiu       $a1, $a1, 0x960
    ctx->r5 = ADD32(ctx->r5, 0X960);
    // 0x802131D0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x802131D4: lui         $a2, 0x8007
    ctx->r6 = S32(0X8007 << 16);
    // 0x802131D8: addiu       $t6, $zero, 0x273
    ctx->r14 = ADD32(0, 0X273);
    // 0x802131DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x802131E0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x802131E4: addiu       $a2, $a2, -0x2768
    ctx->r6 = ADD32(ctx->r6, -0X2768);
    // 0x802131E8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802131EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x802131F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802131F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802131F8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x802131FC: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80213200: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x80213204: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x80213208: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x8021320C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80213210: jal         0x8000DBF0
    // 0x80213214: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x80213214: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80213218: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021321C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80213220: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x80213224: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x80213228: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8021322C: lui         $at, 0xF800
    ctx->r1 = S32(0XF800 << 16);
    // 0x80213230: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x80213234: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80213238: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021323C: addiu       $t9, $t9, 0x25B0
    ctx->r25 = ADD32(ctx->r25, 0X25B0);
    // 0x80213240: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x80213244: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80213248: sw          $t0, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r8;
    // 0x8021324C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80213250: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80213254:
    // 0x80213254: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80213258: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8021325C: jr          $ra
    // 0x80213260: nop

    TRACE_RETURN()
    return;
    // 0x80213260: nop

;}
RECOMP_FUNC void func_8021CC48_686628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021CC48: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8021CC4C: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x8021CC50: mtc1        $a1, $f28
    ctx->f28.u32l = ctx->r5;
    // 0x8021CC54: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x8021CC58: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x8021CC5C: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x8021CC60: mtc1        $a3, $f30
    ctx->f30.u32l = ctx->r7;
    // 0x8021CC64: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8021CC68: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021CC6C: sw          $s5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r21;
    // 0x8021CC70: sw          $s4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r20;
    // 0x8021CC74: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
    // 0x8021CC78: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x8021CC7C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8021CC80: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x8021CC84: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x8021CC88: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8021CC8C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8021CC90: addiu       $a1, $a1, -0x3664
    ctx->r5 = ADD32(ctx->r5, -0X3664);
    // 0x8021CC94: jal         0x80034E08
    // 0x8021CC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021CC98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021CC9C: bne         $v0, $zero, L_8021CCAC
    if (ctx->r2 != 0) {
        // 0x8021CCA0: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8021CCAC;
    }
    // 0x8021CCA0: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8021CCA4: b           L_8021CDC4
    // 0x8021CCA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021CDC4;
    // 0x8021CCA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021CCAC:
    // 0x8021CCAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021CCB0: lwc1        $f20, -0x5308($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5308);
    // 0x8021CCB4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021CCB8: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x8021CCBC: addiu       $s2, $s2, -0x5D90
    ctx->r18 = ADD32(ctx->r18, -0X5D90);
    // 0x8021CCC0: addiu       $a1, $a1, 0x10C4
    ctx->r5 = ADD32(ctx->r5, 0X10C4);
    // 0x8021CCC4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021CCC8: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021CCCC: addiu       $t6, $zero, 0x300
    ctx->r14 = ADD32(0, 0X300);
    // 0x8021CCD0: addiu       $t7, $zero, 0x4E1
    ctx->r15 = ADD32(0, 0X4E1);
    // 0x8021CCD4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8021CCD8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8021CCDC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021CCE0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021CCE4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8021CCE8: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x8021CCEC: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021CCF0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021CCF4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021CCF8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021CCFC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD00: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD04: jal         0x8000DBF0
    // 0x8021CD08: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021CD08: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    after_1:
    // 0x8021CD0C: lui         $s3, 0x800
    ctx->r19 = S32(0X800 << 16);
    // 0x8021CD10: addiu       $s3, $s3, 0xBDC
    ctx->r19 = ADD32(ctx->r19, 0XBDC);
    // 0x8021CD14: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021CD18: addu        $s3, $s3, $at
    ctx->r19 = ADD32(ctx->r19, ctx->r1);
    // 0x8021CD1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8021CD20: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8021CD24: lui         $at, 0x4032
    ctx->r1 = S32(0X4032 << 16);
    // 0x8021CD28: cvt.d.s     $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f22.d = CVT_D_S(ctx->f24.fl);
    // 0x8021CD2C: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8021CD30: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x8021CD34: sw          $v0, 0x7C($s5)
    MEM_W(0X7C, ctx->r21) = ctx->r2;
    // 0x8021CD38: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8021CD3C: addiu       $s1, $s5, 0x60
    ctx->r17 = ADD32(ctx->r21, 0X60);
    // 0x8021CD40: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_8021CD44:
    // 0x8021CD44: addiu       $t8, $s0, -0x1
    ctx->r24 = ADD32(ctx->r16, -0X1);
    // 0x8021CD48: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8021CD4C: mfc1        $a3, $f28
    ctx->r7 = (int32_t)ctx->f28.u32l;
    // 0x8021CD50: addiu       $t9, $zero, 0x300
    ctx->r25 = ADD32(0, 0X300);
    // 0x8021CD54: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8021CD58: addiu       $t0, $zero, 0x4E1
    ctx->r8 = ADD32(0, 0X4E1);
    // 0x8021CD5C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8021CD60: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8021CD64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8021CD68: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x8021CD6C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8021CD70: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021CD74: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021CD78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021CD7C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021CD80: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD84: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD88: add.d       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f22.d + ctx->f8.d;
    // 0x8021CD8C: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x8021CD90: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021CD94: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021CD98: jal         0x8000DBF0
    // 0x8021CD9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x8021CD9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x8021CDA0: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x8021CDA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021CDA8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8021CDAC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8021CDB0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8021CDB4: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8021CDB8: bne         $s0, $s4, L_8021CD44
    if (ctx->r16 != ctx->r20) {
        // 0x8021CDBC: swc1        $f6, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
            goto L_8021CD44;
    }
    // 0x8021CDBC: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x8021CDC0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_8021CDC4:
    // 0x8021CDC4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8021CDC8: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x8021CDCC: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8021CDD0: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x8021CDD4: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x8021CDD8: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x8021CDDC: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x8021CDE0: lw          $s0, 0x6C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X6C);
    // 0x8021CDE4: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x8021CDE8: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x8021CDEC: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x8021CDF0: lw          $s4, 0x7C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X7C);
    // 0x8021CDF4: lw          $s5, 0x80($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X80);
    // 0x8021CDF8: jr          $ra
    // 0x8021CDFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x8021CDFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_802242DC_68DCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802242DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802242E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802242E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802242E8: lbu         $v0, 0x5D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5D);
    // 0x802242EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x802242F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802242F4: beql        $v0, $zero, L_80224310
    if (ctx->r2 == 0) {
        // 0x802242F8: addiu       $v0, $a3, 0x5C
        ctx->r2 = ADD32(ctx->r7, 0X5C);
            goto L_80224310;
    }
    goto skip_0;
    // 0x802242F8: addiu       $v0, $a3, 0x5C
    ctx->r2 = ADD32(ctx->r7, 0X5C);
    skip_0:
    // 0x802242FC: beql        $v0, $at, L_80224364
    if (ctx->r2 == ctx->r1) {
        // 0x80224300: lw          $a0, 0x7C($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X7C);
            goto L_80224364;
    }
    goto skip_1;
    // 0x80224300: lw          $a0, 0x7C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X7C);
    skip_1:
    // 0x80224304: b           L_80224374
    // 0x80224308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80224374;
    // 0x80224308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022430C: addiu       $v0, $a3, 0x5C
    ctx->r2 = ADD32(ctx->r7, 0X5C);
L_80224310:
    // 0x80224310: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80224314: blezl       $v1, L_80224348
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80224318: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80224348;
    }
    goto skip_2;
    // 0x80224318: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x8022431C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80224320: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80224324: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80224328: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8022432C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80224330: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80224334: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x80224338: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8022433C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80224340: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80224344: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_80224348:
    // 0x80224348: lw          $t7, 0x20($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X20);
    // 0x8022434C: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x80224350: lw          $t8, 0x20($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X20);
    // 0x80224354: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80224358: b           L_80224370
    // 0x8022435C: swc1        $f6, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f6.u32l;
        goto L_80224370;
    // 0x8022435C: swc1        $f6, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f6.u32l;
    // 0x80224360: lw          $a0, 0x7C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X7C);
L_80224364:
    // 0x80224364: lhu         $a1, 0x10($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X10);
    // 0x80224368: jal         0x801F8670
    // 0x8022436C: lhu         $a2, 0x12($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X12);
    func_801F8670_5B4580(rdram, ctx);
        goto after_0;
    // 0x8022436C: lhu         $a2, 0x12($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X12);
    after_0:
L_80224370:
    // 0x80224370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80224374:
    // 0x80224374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80224378: jr          $ra
    // 0x8022437C: nop

    TRACE_RETURN()
    return;
    // 0x8022437C: nop

;}
RECOMP_FUNC void func_80218194_681B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80218198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021819C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802181A0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802181A4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802181A8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802181AC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802181B0: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802181B4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802181B8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802181BC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x802181C0: jal         0x800040A8
    // 0x802181C4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_0;
    // 0x802181C4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x802181C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802181CC: andi        $t6, $v0, 0x3FF
    ctx->r14 = ctx->r2 & 0X3FF;
    // 0x802181D0: sh          $t6, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r14;
    // 0x802181D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802181D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802181DC: jr          $ra
    // 0x802181E0: nop

    TRACE_RETURN()
    return;
    // 0x802181E0: nop

;}
RECOMP_FUNC void func_8021B34C_684D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B34C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8021B350: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8021B354: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021B358: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8021B35C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021B360: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8021B364: addiu       $a1, $a1, -0x5970
    ctx->r5 = ADD32(ctx->r5, -0X5970);
    // 0x8021B368: jal         0x80034E08
    // 0x8021B36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8021B36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8021B370: bne         $v0, $zero, L_8021B380
    if (ctx->r2 != 0) {
        // 0x8021B374: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8021B380;
    }
    // 0x8021B374: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8021B378: b           L_8021B480
    // 0x8021B37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021B480;
    // 0x8021B37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021B380:
    // 0x8021B380: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021B384: lwc1        $f0, -0x534C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X534C);
    // 0x8021B388: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021B38C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021B390: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021B394: addiu       $a1, $a1, 0x37C
    ctx->r5 = ADD32(ctx->r5, 0X37C);
    // 0x8021B398: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021B39C: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021B3A0: addiu       $t6, $zero, 0x4AD
    ctx->r14 = ADD32(0, 0X4AD);
    // 0x8021B3A4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8021B3A8: addiu       $a2, $a2, -0x5D00
    ctx->r6 = ADD32(ctx->r6, -0X5D00);
    // 0x8021B3AC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021B3B0: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x8021B3B4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021B3B8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021B3BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021B3C0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021B3C4: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x8021B3C8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021B3CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021B3D0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021B3D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8021B3D8: jal         0x8000DBF0
    // 0x8021B3DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x8021B3DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8021B3E0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8021B3E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8021B3E8: lwc1        $f0, -0x5348($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5348);
    // 0x8021B3EC: addiu       $v1, $a0, 0x5C
    ctx->r3 = ADD32(ctx->r4, 0X5C);
    // 0x8021B3F0: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
    // 0x8021B3F4: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021B3F8: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021B3FC: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x8021B400: addiu       $a1, $a1, 0x3C8
    ctx->r5 = ADD32(ctx->r5, 0X3C8);
    // 0x8021B404: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8021B408: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8021B40C: addiu       $t7, $zero, 0x4AD
    ctx->r15 = ADD32(0, 0X4AD);
    // 0x8021B410: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8021B414: addiu       $a2, $a2, -0x5D00
    ctx->r6 = ADD32(ctx->r6, -0X5D00);
    // 0x8021B418: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8021B41C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x8021B420: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8021B424: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8021B428: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8021B42C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8021B430: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x8021B434: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8021B438: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x8021B43C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8021B440: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x8021B444: jal         0x8000DBF0
    // 0x8021B448: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_2;
    // 0x8021B448: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8021B44C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8021B450: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8021B454: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x8021B458: sw          $v0, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r2;
    // 0x8021B45C: lwc1        $f16, 0x54($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8021B460: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021B464: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8021B468: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
    // 0x8021B46C: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8021B470: swc1        $f18, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f18.u32l;
    // 0x8021B474: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8021B478: swc1        $f6, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f6.u32l;
    // 0x8021B47C: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
L_8021B480:
    // 0x8021B480: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021B484: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8021B488: jr          $ra
    // 0x8021B48C: nop

    TRACE_RETURN()
    return;
    // 0x8021B48C: nop

;}
