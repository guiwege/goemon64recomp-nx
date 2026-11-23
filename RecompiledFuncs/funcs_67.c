#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801EF42C_61A80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF42C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EF430: lw          $t6, -0x10D0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10D0);
    // 0x801EF434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF43C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EF444: sb          $v0, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r2;
    // 0x801EF448: sb          $v0, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r2;
    // 0x801EF44C: jal         0x801F701C
    // 0x801EF450: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F701C_6223FC(rdram, ctx);
        goto after_0;
    // 0x801EF450: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EF454: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801EF458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF45C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801EF460: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF464: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EF468: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801EF46C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EF470: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF474: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801EF478: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801EF47C: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801EF480: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF484: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EF488: addiu       $t9, $zero, 0x300
    ctx->r25 = ADD32(0, 0X300);
    // 0x801EF48C: lbu         $t8, 0x2C1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C1);
    // 0x801EF490: bnel        $t8, $at, L_801EF4C8
    if (ctx->r24 != ctx->r1) {
        // 0x801EF494: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF4C8;
    }
    goto skip_0;
    // 0x801EF494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801EF498: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801EF49C: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801EF4A0: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801EF4A4: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x801EF4A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EF4AC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x801EF4B0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF4B4: addiu       $a0, $a0, -0xB2C
    ctx->r4 = ADD32(ctx->r4, -0XB2C);
    // 0x801EF4B8: swc1        $f10, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->f10.u32l;
    // 0x801EF4BC: jal         0x8003521C
    // 0x801EF4C0: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EF4C0: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    after_1:
    // 0x801EF4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EF4C8:
    // 0x801EF4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF4CC: jr          $ra
    // 0x801EF4D0: nop

    TRACE_RETURN()
    return;
    // 0x801EF4D0: nop

;}
RECOMP_FUNC void func_80208D3C_63411C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208D3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80208D40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80208D44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80208D48: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80208D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208D50: sb          $zero, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = 0;
    // 0x80208D54: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    // 0x80208D58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80208D5C: jal         0x801EE658
    // 0x80208D60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x80208D60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80208D64: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80208D68: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80208D6C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80208D70: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80208D74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80208D78: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x80208D7C: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x80208D80: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80208D84: bne         $t7, $at, L_80208DB4
    if (ctx->r15 != ctx->r1) {
        // 0x80208D88: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80208DB4;
    }
    // 0x80208D88: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80208D8C: sb          $v1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r3;
    // 0x80208D90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80208D94: jal         0x8003F1D8
    // 0x80208D98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_1;
    // 0x80208D98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80208D9C: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x80208DA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80208DA4: bne         $v0, $zero, L_80208DC8
    if (ctx->r2 != 0) {
        // 0x80208DA8: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80208DC8;
    }
    // 0x80208DA8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80208DAC: b           L_80208DC8
    // 0x80208DB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80208DC8;
    // 0x80208DB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80208DB4:
    // 0x80208DB4: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x80208DB8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80208DBC: bgtz        $t9, L_80208DC8
    if (SIGNED(ctx->r25) > 0) {
        // 0x80208DC0: sw          $t9, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r25;
            goto L_80208DC8;
    }
    // 0x80208DC0: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x80208DC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80208DC8:
    // 0x80208DC8: beql        $v1, $zero, L_80208EE8
    if (ctx->r3 == 0) {
        // 0x80208DCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80208EE8;
    }
    goto skip_0;
    // 0x80208DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80208DD0: lw          $t1, 0x7C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X7C);
    // 0x80208DD4: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80208DD8: addiu       $a2, $zero, 0xBB8
    ctx->r6 = ADD32(0, 0XBB8);
    // 0x80208DDC: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
    // 0x80208DE0: bgtz        $v0, L_80208EC0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80208DE4: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_80208EC0;
    }
    // 0x80208DE4: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x80208DE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80208DEC: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80208DF0: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x80208DF4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80208DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80208DFC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80208E00: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x80208E04: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80208E08: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208E0C: lui         $at, 0x3FF1
    ctx->r1 = S32(0X3FF1 << 16);
    // 0x80208E10: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80208E14: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x80208E18: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80208E1C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x80208E20: nop

    // 0x80208E24: bc1fl       L_80208E38
    if (!c1cs) {
        // 0x80208E28: swc1        $f0, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
            goto L_80208E38;
    }
    goto skip_1;
    // 0x80208E28: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    skip_1:
    // 0x80208E2C: swc1        $f2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f2.u32l;
    // 0x80208E30: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80208E34: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
L_80208E38:
    // 0x80208E38: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80208E3C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80208E40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80208E44: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80208E48: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80208E4C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80208E50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80208E54: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80208E58: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x80208E5C: lwc1        $f2, 0x94($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80208E60: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x80208E64: nop

    // 0x80208E68: bc1fl       L_80208E7C
    if (!c1cs) {
        // 0x80208E6C: swc1        $f2, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
            goto L_80208E7C;
    }
    goto skip_2;
    // 0x80208E6C: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
    skip_2:
    // 0x80208E70: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x80208E74: lwc1        $f2, 0x94($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80208E78: swc1        $f2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f2.u32l;
L_80208E7C:
    // 0x80208E7C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208E80: lwc1        $f16, 0x98($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80208E84: lui         $at, 0x3FE8
    ctx->r1 = S32(0X3FE8 << 16);
    // 0x80208E88: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80208E8C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80208E90: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80208E94: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80208E98: swc1        $f8, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f8.u32l;
    // 0x80208E9C: lwc1        $f0, 0x98($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80208EA0: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80208EA4: nop

    // 0x80208EA8: bc1fl       L_80208EBC
    if (!c1cs) {
        // 0x80208EAC: swc1        $f0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
            goto L_80208EBC;
    }
    goto skip_3;
    // 0x80208EAC: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    skip_3:
    // 0x80208EB0: swc1        $f12, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f12.u32l;
    // 0x80208EB4: lwc1        $f0, 0x98($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X98);
    // 0x80208EB8: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
L_80208EBC:
    // 0x80208EBC: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_80208EC0:
    // 0x80208EC0: addiu       $at, $zero, -0x55
    ctx->r1 = ADD32(0, -0X55);
    // 0x80208EC4: bne         $v0, $at, L_80208EE4
    if (ctx->r2 != ctx->r1) {
        // 0x80208EC8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80208EE4;
    }
    // 0x80208EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80208ECC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80208ED0: jal         0x801DDAF8
    // 0x80208ED4: lwc1        $f12, -0x1158($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1158);
    func_801DDAF8_608ED8(rdram, ctx);
        goto after_2;
    // 0x80208ED4: lwc1        $f12, -0x1158($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1158);
    after_2:
    // 0x80208ED8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208EDC: jal         0x8003521C
    // 0x80208EE0: addiu       $a0, $a0, -0x710C
    ctx->r4 = ADD32(ctx->r4, -0X710C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80208EE0: addiu       $a0, $a0, -0x710C
    ctx->r4 = ADD32(ctx->r4, -0X710C);
    after_3:
L_80208EE4:
    // 0x80208EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80208EE8:
    // 0x80208EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80208EEC: jr          $ra
    // 0x80208EF0: nop

    TRACE_RETURN()
    return;
    // 0x80208EF0: nop

;}
RECOMP_FUNC void func_801E1B30_60CF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1B30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E1B34: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1B38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1B3C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E1B40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E1B44: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801E1B48: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E1B4C: jal         0x80036260
    // 0x801E1B50: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x801E1B50: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E1B54: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E1B58: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E1B5C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E1B60: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801E1B64: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x801E1B68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1B6C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1B70: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1B74: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1B78: addiu       $t9, $zero, 0x4A9
    ctx->r25 = ADD32(0, 0X4A9);
    // 0x801E1B7C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801E1B80: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E1B84: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E1B88: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801E1B8C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E1B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1B94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E1B98: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801E1B9C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E1BA0: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801E1BA4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1BA8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1BAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E1BB0: jal         0x8000DBF0
    // 0x801E1BB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E1BB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801E1BB8: beq         $v0, $zero, L_801E1C2C
    if (ctx->r2 == 0) {
        // 0x801E1BBC: lui         $t0, 0x8021
        ctx->r8 = S32(0X8021 << 16);
            goto L_801E1C2C;
    }
    // 0x801E1BBC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E1BC0: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801E1BC4: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1BC8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1BCC: addiu       $t0, $t0, -0x4FF4
    ctx->r8 = ADD32(ctx->r8, -0X4FF4);
    // 0x801E1BD0: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801E1BD4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1BD8: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E1BDC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E1BE0: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801E1BE4: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1BE8: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E1BEC: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x801E1BF0: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801E1BF4: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x801E1BF8: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
    // 0x801E1BFC: sw          $t1, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r9;
    // 0x801E1C00: sw          $t2, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r10;
    // 0x801E1C04: sw          $t3, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r11;
    // 0x801E1C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E1C0C: jal         0x801E18E4
    // 0x801E1C10: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_2;
    // 0x801E1C10: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    after_2:
    // 0x801E1C14: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1C18: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E1C1C: jal         0x8003522C
    // 0x801E1C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801E1C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E1C24: b           L_801E1C38
    // 0x801E1C28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_801E1C38;
    // 0x801E1C28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E1C2C:
    // 0x801E1C2C: jal         0x80034EF8
    // 0x801E1C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_4;
    // 0x801E1C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E1C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E1C38:
    // 0x801E1C38: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1C3C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E1C40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E1C44: jr          $ra
    // 0x801E1C48: nop

    TRACE_RETURN()
    return;
    // 0x801E1C48: nop

;}
RECOMP_FUNC void func_801E4068_60F448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4068: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E406C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E4070: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E4074: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x801E4078: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E407C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801E4080: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E4084: beq         $t6, $zero, L_801E4094
    if (ctx->r14 == 0) {
        // 0x801E4088: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_801E4094;
    }
    // 0x801E4088: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801E408C: b           L_801E40C0
    // 0x801E4090: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
        goto L_801E40C0;
    // 0x801E4090: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
L_801E4094:
    // 0x801E4094: lw          $t7, 0x9C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X9C);
    // 0x801E4098: beql        $t7, $zero, L_801E40C4
    if (ctx->r15 == 0) {
        // 0x801E409C: lwc1        $f4, 0x0($v1)
        ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
            goto L_801E40C4;
    }
    goto skip_0;
    // 0x801E409C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x801E40A0: lw          $t8, 0x9C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X9C);
    // 0x801E40A4: addiu       $t9, $t8, -0x8
    ctx->r25 = ADD32(ctx->r24, -0X8);
    // 0x801E40A8: bgtz        $t9, L_801E40C0
    if (SIGNED(ctx->r25) > 0) {
        // 0x801E40AC: sw          $t9, 0x9C($a0)
        MEM_W(0X9C, ctx->r4) = ctx->r25;
            goto L_801E40C0;
    }
    // 0x801E40AC: sw          $t9, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r25;
    // 0x801E40B0: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x801E40B4: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x801E40B8: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801E40BC: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
L_801E40C0:
    // 0x801E40C0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
L_801E40C4:
    // 0x801E40C4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801E40C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E40CC: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801E40D0: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E40D4: addiu       $t1, $s0, 0x8
    ctx->r9 = ADD32(ctx->r16, 0X8);
    // 0x801E40D8: addiu       $t2, $s0, 0xC
    ctx->r10 = ADD32(ctx->r16, 0XC);
    // 0x801E40DC: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801E40E0: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E40E4: addiu       $t3, $s0, 0x10
    ctx->r11 = ADD32(ctx->r16, 0X10);
    // 0x801E40E8: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801E40EC: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x801E40F0: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    // 0x801E40F4: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E40F8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801E40FC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801E4100: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801E4104: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E4108: jal         0x8000E4E4
    // 0x801E410C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E410C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x801E4110: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801E4114: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E4118: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801E411C: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801E4120: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E4124: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4128: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E412C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E4130: addiu       $a1, $a1, -0x5D30
    ctx->r5 = ADD32(ctx->r5, -0X5D30);
    // 0x801E4134: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801E4138: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801E413C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E4140: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801E4144: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E4148: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E414C: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801E4150: lw          $t4, 0x98($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X98);
    // 0x801E4154: lw          $a3, 0x94($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X94);
    // 0x801E4158: lw          $a2, 0x90($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X90);
    // 0x801E415C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E4160: lw          $t5, 0x9C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X9C);
    // 0x801E4164: jal         0x8000DF10
    // 0x801E4168: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E4168: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
    // 0x801E416C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E4170: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x801E4174: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E4178: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801E417C: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x801E4180: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801E4184: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E4188: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801E418C: jr          $ra
    // 0x801E4190: nop

    TRACE_RETURN()
    return;
    // 0x801E4190: nop

;}
RECOMP_FUNC void func_801FFE2C_62B20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE2C: jr          $ra
    // 0x801FFE30: nop

    TRACE_RETURN()
    return;
    // 0x801FFE30: nop

;}
RECOMP_FUNC void func_801D367C_5FEA5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D367C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x801D3680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3684: beq         $v1, $zero, L_801D3694
    if (ctx->r3 == 0) {
        // 0x801D3688: nop
    
            goto L_801D3694;
    }
    // 0x801D3688: nop

    // 0x801D368C: jr          $ra
    // 0x801D3690: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    TRACE_RETURN()
    return;
    // 0x801D3690: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
L_801D3694:
    // 0x801D3694: jr          $ra
    // 0x801D3698: nop

    TRACE_RETURN()
    return;
    // 0x801D3698: nop

;}
RECOMP_FUNC void func_801EAA78_615E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAA78: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801EAA7C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EAA80: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801EAA84: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x801EAA88: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EAA8C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAA90: ldc1        $f8, -0x1EC8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1EC8);
    // 0x801EAA94: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EAA98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAA9C: addiu       $t7, $sp, 0x60
    ctx->r15 = ADD32(ctx->r29, 0X60);
    // 0x801EAAA0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EAAA4: addiu       $t8, $sp, 0x5C
    ctx->r24 = ADD32(ctx->r29, 0X5C);
    // 0x801EAAA8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801EAAAC: ldc1        $f6, -0x1EC0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1EC0);
    // 0x801EAAB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAAB4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801EAAB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801EAABC: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801EAAC0: lwc1        $f18, 0x20($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801EAAC4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801EAAC8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801EAACC: ldc1        $f4, -0x1EB8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1EB8);
    // 0x801EAAD0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EAAD4: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x801EAAD8: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801EAADC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801EAAE0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801EAAE4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801EAAE8: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x801EAAEC: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801EAAF0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801EAAF4: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801EAAF8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801EAAFC: jal         0x8000E808
    // 0x801EAB00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801EAB00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x801EAB04: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EAB08: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801EAB0C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EAB10: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EAB14: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EAB18: addiu       $a1, $a1, -0xC50
    ctx->r5 = ADD32(ctx->r5, -0XC50);
    // 0x801EAB1C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EAB20: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801EAB24: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801EAB28: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EAB2C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EAB30: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801EAB34: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801EAB38: addiu       $t2, $zero, 0x4B0
    ctx->r10 = ADD32(0, 0X4B0);
    // 0x801EAB3C: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801EAB40: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801EAB44: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x801EAB48: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EAB4C: addiu       $a0, $a0, -0x53B4
    ctx->r4 = ADD32(ctx->r4, -0X53B4);
    // 0x801EAB50: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801EAB54: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EAB58: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x801EAB5C: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801EAB60: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x801EAB64: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801EAB68: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EAB6C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801EAB70: jal         0x80035854
    // 0x801EAB74: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EAB74: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801EAB78: beq         $v0, $zero, L_801EAC38
    if (ctx->r2 == 0) {
        // 0x801EAB7C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801EAC38;
    }
    // 0x801EAB7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EAB80: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801EAB84: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801EAB88: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801EAB8C: addiu       $t5, $zero, 0x50
    ctx->r13 = ADD32(0, 0X50);
    // 0x801EAB90: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x801EAB94: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x801EAB98: sb          $t3, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r11;
    // 0x801EAB9C: sw          $t4, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r12;
    // 0x801EABA0: sb          $t5, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r13;
    // 0x801EABA4: sh          $t6, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r14;
    // 0x801EABA8: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x801EABAC: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
    // 0x801EABB0: sw          $s0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r16;
    // 0x801EABB4: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801EABB8: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801EABBC: sw          $t7, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r15;
    // 0x801EABC0: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801EABC4: sb          $t8, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r24;
    // 0x801EABC8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EABCC: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801EABD0: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x801EABD4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EABD8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EABDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EABE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EABE4: jal         0x8000DF10
    // 0x801EABE8: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801EABE8: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    after_2:
    // 0x801EABEC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EABF0: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x801EABF4: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801EABF8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EABFC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801EAC00: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801EAC04: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x801EAC08: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801EAC0C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EAC10: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EAC14: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801EAC18: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801EAC1C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EAC20: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EAC24: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x801EAC28: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EAC2C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EAC30: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EAC34: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
L_801EAC38:
    // 0x801EAC38: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EAC3C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801EAC40: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801EAC44: jr          $ra
    // 0x801EAC48: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    TRACE_RETURN()
    return;
    // 0x801EAC48: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_801FF528_62A908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF528: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801FF52C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FF530: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FF534: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801FF538: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801FF53C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801FF540: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x801FF544: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801FF548: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801FF54C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801FF550: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FF554: ldc1        $f8, -0x1540($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1540);
    // 0x801FF558: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FF55C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x801FF560: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801FF564: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FF568: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801FF56C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FF570: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FF574: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801FF578: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801FF57C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FF580: swc1        $f16, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f16.u32l;
    // 0x801FF584: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801FF588: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x801FF58C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801FF590: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801FF594: nop

    // 0x801FF598: bc1f        L_801FF5AC
    if (!c1cs) {
        // 0x801FF59C: nop
    
            goto L_801FF5AC;
    }
    // 0x801FF59C: nop

    // 0x801FF5A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FF5A4: nop

    // 0x801FF5A8: swc1        $f8, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f8.u32l;
L_801FF5AC:
    // 0x801FF5AC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FF5B0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801FF5B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FF5B8: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FF5BC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x801FF5C0: lw          $v0, 0xDC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XDC);
    // 0x801FF5C4: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x801FF5C8: addiu       $t0, $sp, 0x44
    ctx->r8 = ADD32(ctx->r29, 0X44);
    // 0x801FF5CC: lw          $s1, 0x18($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X18);
    // 0x801FF5D0: lwc1        $f14, 0x70($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X70);
    // 0x801FF5D4: lw          $a2, 0x74($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X74);
    // 0x801FF5D8: lw          $a3, 0x78($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X78);
    // 0x801FF5DC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801FF5E0: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801FF5E4: jal         0x8000E4E4
    // 0x801FF5E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801FF5E8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801FF5EC: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801FF5F0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801FF5F4: lui         $at, 0xC382
    ctx->r1 = S32(0XC382 << 16);
    // 0x801FF5F8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x801FF5FC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801FF600: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801FF604: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FF608: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801FF60C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801FF610: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801FF614: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801FF618: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801FF61C: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x801FF620: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FF624: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801FF628: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x801FF62C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801FF630: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801FF634: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x801FF638: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x801FF63C: lw          $t1, -0x3A38($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3A38);
    // 0x801FF640: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801FF644: lh          $t2, -0x5250($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X5250);
    // 0x801FF648: beq         $t2, $zero, L_801FF658
    if (ctx->r10 == 0) {
        // 0x801FF64C: nop
    
            goto L_801FF658;
    }
    // 0x801FF64C: nop

    // 0x801FF650: b           L_801FF658
    // 0x801FF654: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801FF658;
    // 0x801FF654: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801FF658:
    // 0x801FF658: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801FF65C: jal         0x80003EA0
    // 0x801FF660: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_1;
    // 0x801FF660: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_1:
    // 0x801FF664: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x801FF668: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801FF66C: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801FF670: nop

    // 0x801FF674: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801FF678: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801FF67C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801FF680: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801FF684: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    // 0x801FF688: jal         0x80003E10
    // 0x801FF68C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801FF68C: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x801FF690: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801FF694: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801FF698: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801FF69C: mul.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801FF6A0: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801FF6A4: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801FF6A8: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801FF6AC: jal         0x8000E9F4
    // 0x801FF6B0: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_3;
    // 0x801FF6B0: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    after_3:
    // 0x801FF6B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x801FF6B8: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801FF6BC: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801FF6C0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x801FF6C4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801FF6C8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FF6CC: lbu         $t4, 0xE($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XE);
    // 0x801FF6D0: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x801FF6D4: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    // 0x801FF6D8: bne         $t4, $at, L_801FF710
    if (ctx->r12 != ctx->r1) {
        // 0x801FF6DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FF710;
    }
    // 0x801FF6DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF6E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FF6E4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FF6E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FF6EC: sw          $v0, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r2;
    // 0x801FF6F0: sw          $v0, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r2;
    // 0x801FF6F4: swc1        $f0, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f0.u32l;
    // 0x801FF6F8: swc1        $f0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f0.u32l;
    // 0x801FF6FC: jal         0x801D2EE4
    // 0x801FF700: swc1        $f18, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f18.u32l;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801FF700: swc1        $f18, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f18.u32l;
    after_4:
    // 0x801FF704: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF708: jal         0x8003521C
    // 0x801FF70C: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FF70C: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    after_5:
L_801FF710:
    // 0x801FF710: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FF714: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801FF718: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801FF71C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801FF720: jr          $ra
    // 0x801FF724: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801FF724: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801E2C20_60E000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2C28: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801E2C2C: bne         $a1, $zero, L_801E2C44
    if (ctx->r5 != 0) {
        // 0x801E2C30: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_801E2C44;
    }
    // 0x801E2C30: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E2C34: jal         0x80034ED4
    // 0x801E2C38: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2C38: nop

    after_0:
    // 0x801E2C3C: b           L_801E2CBC
    // 0x801E2C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E2CBC;
    // 0x801E2C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2C44:
    // 0x801E2C44: lw          $t6, 0xA0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XA0);
    // 0x801E2C48: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E2C4C: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801E2C50: sb          $t6, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r14;
    // 0x801E2C54: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E2C58: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E2C5C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2C60: lwc1        $f6, 0x180($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X180);
    // 0x801E2C64: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801E2C68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E2C6C: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x801E2C70: lw          $t7, 0xA4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XA4);
    // 0x801E2C74: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801E2C78: bgez        $t7, L_801E2C8C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E2C7C: cvt.s.w     $f10, $f10
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801E2C8C;
    }
    // 0x801E2C7C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801E2C80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E2C84: nop

    // 0x801E2C88: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801E2C8C:
    // 0x801E2C8C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801E2C90: jal         0x801D2F40
    // 0x801E2C94: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801E2C94: nop

    after_1:
    // 0x801E2C98: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E2C9C: nop

    // 0x801E2CA0: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x801E2CA4: nop

    // 0x801E2CA8: bc1fl       L_801E2CBC
    if (!c1cs) {
        // 0x801E2CAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E2CBC;
    }
    goto skip_0;
    // 0x801E2CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E2CB0: jal         0x80034ED4
    // 0x801E2CB4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_2;
    // 0x801E2CB4: nop

    after_2:
    // 0x801E2CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E2CBC:
    // 0x801E2CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2CC0: jr          $ra
    // 0x801E2CC4: nop

    TRACE_RETURN()
    return;
    // 0x801E2CC4: nop

;}
RECOMP_FUNC void func_801CCF44_5F8324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCF44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CCF48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801CCF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCF50: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x801CCF54: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCF58: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CCF5C: jal         0x8003521C
    // 0x801CCF60: addiu       $a0, $a0, -0x308C
    ctx->r4 = ADD32(ctx->r4, -0X308C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CCF60: addiu       $a0, $a0, -0x308C
    ctx->r4 = ADD32(ctx->r4, -0X308C);
    after_0:
    // 0x801CCF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CCF68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CCF6C: jr          $ra
    // 0x801CCF70: nop

    TRACE_RETURN()
    return;
    // 0x801CCF70: nop

;}
RECOMP_FUNC void func_801E006C_60B44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E006C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E0070: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E0074: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E0078: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801E007C: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x801E0080: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801E0084: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E0088: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x801E008C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x801E0090: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801E0094: bc1t        L_801E00E4
    if (c1cs) {
        // 0x801E0098: swc1        $f0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
            goto L_801E00E4;
    }
    // 0x801E0098: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801E009C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801E00A0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x801E00A4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E00A8: addiu       $t7, $t7, -0x6038
    ctx->r15 = ADD32(ctx->r15, -0X6038);
    // 0x801E00AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x801E00B0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801E00B4: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x801E00B8: addiu       $t9, $sp, 0x40
    ctx->r25 = ADD32(ctx->r29, 0X40);
    // 0x801E00BC: addiu       $t0, $sp, 0x3C
    ctx->r8 = ADD32(ctx->r29, 0X3C);
    // 0x801E00C0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801E00C4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E00C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E00CC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801E00D0: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    // 0x801E00D4: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801E00D8: jal         0x8000E4E4
    // 0x801E00DC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801E00DC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E00E0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
L_801E00E4:
    // 0x801E00E4: lbu         $t1, 0x5F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5F);
    // 0x801E00E8: sltiu       $at, $t1, 0xA
    ctx->r1 = ctx->r9 < 0XA ? 1 : 0;
    // 0x801E00EC: beq         $at, $zero, L_801E0108
    if (ctx->r1 == 0) {
        // 0x801E00F0: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801E0108;
    }
    // 0x801E00F0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801E00F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E00F8: addu        $at, $at, $t1
    gpr jr_addend_801E0100 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801E00FC: lw          $t1, -0x2440($at)
    ctx->r9 = ADD32(ctx->r1, -0X2440);
    // 0x801E0100: jr          $t1
    // 0x801E0104: nop

    switch (jr_addend_801E0100 >> 2) {
        case 0: goto L_801E0108; break;
        case 1: goto L_801E0140; break;
        case 2: goto L_801E0190; break;
        case 3: goto L_801E01C8; break;
        case 4: goto L_801E0218; break;
        case 5: goto L_801E0268; break;
        case 6: goto L_801E02A0; break;
        case 7: goto L_801E02F0; break;
        case 8: goto L_801E0340; break;
        case 9: goto L_801E0390; break;
        default: switch_error(__func__, 0x801E0100, 0x8020DBC0);
    }
    // 0x801E0104: nop

L_801E0108:
    // 0x801E0108: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E010C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0110: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E0114: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0118: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E011C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0120: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E0124: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E0128: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E012C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E0130: jal         0x801E1958
    // 0x801E0134: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_1;
    // 0x801E0134: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801E0138: b           L_801E03E4
    // 0x801E013C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E013C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0140:
    // 0x801E0140: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E0144: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0148: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E014C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0150: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801E0154: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801E0158: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801E015C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x801E0160: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x801E0164: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x801E0168: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E016C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0170: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E0174: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E0178: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E017C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801E0180: jal         0x801E1E24
    // 0x801E0184: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_2;
    // 0x801E0184: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801E0188: b           L_801E03E4
    // 0x801E018C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E018C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0190:
    // 0x801E0190: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E0194: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0198: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E019C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E01A0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E01A4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E01A8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E01AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E01B0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E01B4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E01B8: jal         0x801E2324
    // 0x801E01BC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E2324_60D704(rdram, ctx);
        goto after_3;
    // 0x801E01BC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801E01C0: b           L_801E03E4
    // 0x801E01C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E01C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E01C8:
    // 0x801E01C8: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E01CC: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E01D0: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E01D4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E01D8: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x801E01DC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801E01E0: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801E01E4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x801E01E8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x801E01EC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801E01F0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E01F4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E01F8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E01FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E0200: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E0204: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E0208: jal         0x801E1E24
    // 0x801E020C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_4;
    // 0x801E020C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801E0210: b           L_801E03E4
    // 0x801E0214: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E0214: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0218:
    // 0x801E0218: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E021C: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0220: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E0224: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0228: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801E022C: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801E0230: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x801E0234: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x801E0238: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801E023C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E0240: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E0244: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0248: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E024C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E0250: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E0254: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801E0258: jal         0x801E1E24
    // 0x801E025C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_5;
    // 0x801E025C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801E0260: b           L_801E03E4
    // 0x801E0264: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E0264: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0268:
    // 0x801E0268: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E026C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0270: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E0274: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0278: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E027C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0280: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E0284: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E0288: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E028C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E0290: jal         0x801E2410
    // 0x801E0294: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E2410_60D7F0(rdram, ctx);
        goto after_6;
    // 0x801E0294: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801E0298: b           L_801E03E4
    // 0x801E029C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E029C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E02A0:
    // 0x801E02A0: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E02A4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E02A8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E02AC: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E02B0: addiu       $t1, $zero, 0xE0
    ctx->r9 = ADD32(0, 0XE0);
    // 0x801E02B4: addiu       $t2, $zero, 0xD0
    ctx->r10 = ADD32(0, 0XD0);
    // 0x801E02B8: addiu       $t3, $zero, 0xB0
    ctx->r11 = ADD32(0, 0XB0);
    // 0x801E02BC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801E02C0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801E02C4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801E02C8: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E02CC: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E02D0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E02D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E02D8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E02DC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E02E0: jal         0x801E1E24
    // 0x801E02E4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E1E24_60D204(rdram, ctx);
        goto after_7;
    // 0x801E02E4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801E02E8: b           L_801E03E4
    // 0x801E02EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E02EC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E02F0:
    // 0x801E02F0: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E02F4: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E02F8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E02FC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0300: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x801E0304: addiu       $t5, $zero, 0x30
    ctx->r13 = ADD32(0, 0X30);
    // 0x801E0308: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x801E030C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801E0310: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x801E0314: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x801E0318: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E031C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0320: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E0324: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801E0328: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E032C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801E0330: jal         0x801E1F1C
    // 0x801E0334: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E1F1C_60D2FC(rdram, ctx);
        goto after_8;
    // 0x801E0334: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x801E0338: b           L_801E03E4
    // 0x801E033C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E033C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0340:
    // 0x801E0340: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E0344: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E0348: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E034C: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E0350: addiu       $t7, $zero, 0xC0
    ctx->r15 = ADD32(0, 0XC0);
    // 0x801E0354: addiu       $t8, $zero, 0xC0
    ctx->r24 = ADD32(0, 0XC0);
    // 0x801E0358: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801E035C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x801E0360: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E0364: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E0368: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E036C: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x801E0370: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x801E0374: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E0378: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E037C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801E0380: jal         0x801E1F1C
    // 0x801E0384: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E1F1C_60D2FC(rdram, ctx);
        goto after_9;
    // 0x801E0384: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x801E0388: b           L_801E03E4
    // 0x801E038C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_801E03E4;
    // 0x801E038C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E0390:
    // 0x801E0390: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E0394: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E0398: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801E039C: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801E03A0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E03A4: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x801E03A8: addiu       $t1, $zero, 0x60
    ctx->r9 = ADD32(0, 0X60);
    // 0x801E03AC: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x801E03B0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x801E03B4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x801E03B8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x801E03BC: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801E03C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x801E03C4: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x801E03C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E03CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801E03D0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801E03D4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x801E03D8: jal         0x801E2014
    // 0x801E03DC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    func_801E2014_60D3F4(rdram, ctx);
        goto after_10;
    // 0x801E03DC: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x801E03E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E03E4:
    // 0x801E03E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801E03E8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E03EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E03F0: jr          $ra
    // 0x801E03F4: nop

    TRACE_RETURN()
    return;
    // 0x801E03F4: nop

;}
RECOMP_FUNC void func_801F443C_61F81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F443C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F4440: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F4444: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4448: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F444C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F4450: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F4454: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4458: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F445C: jal         0x801D365C
    // 0x801F4460: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_0;
    // 0x801F4460: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F4464: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F4468: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F446C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801F4470: lw          $t8, 0x1CC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F4474: bne         $v0, $t8, L_801F44AC
    if (ctx->r2 != ctx->r24) {
        // 0x801F4478: nop
    
            goto L_801F44AC;
    }
    // 0x801F4478: nop

    // 0x801F447C: lbu         $t0, 0xE($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XE);
    // 0x801F4480: bne         $t0, $zero, L_801F44AC
    if (ctx->r8 != 0) {
        // 0x801F4484: nop
    
            goto L_801F44AC;
    }
    // 0x801F4484: nop

    // 0x801F4488: lbu         $t1, 0x2C5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F448C: bne         $t1, $zero, L_801F44AC
    if (ctx->r9 != 0) {
        // 0x801F4490: nop
    
            goto L_801F44AC;
    }
    // 0x801F4490: nop

    // 0x801F4494: lbu         $t2, 0x30($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X30);
    // 0x801F4498: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801F449C: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x801F44A0: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x801F44A4: jal         0x80038BC8
    // 0x801F44A8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801F44A8: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    after_1:
L_801F44AC:
    // 0x801F44AC: jal         0x801D36C4
    // 0x801F44B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_2;
    // 0x801F44B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F44B4: lw          $t4, 0x7C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X7C);
    // 0x801F44B8: lui         $at, 0xC008
    ctx->r1 = S32(0XC008 << 16);
    // 0x801F44BC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801F44C0: bne         $t5, $zero, L_801F4528
    if (ctx->r13 != 0) {
        // 0x801F44C4: sw          $t5, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r13;
            goto L_801F4528;
    }
    // 0x801F44C4: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801F44C8: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F44CC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801F44D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F44D4: lwc1        $f18, 0x78($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801F44D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F44DC: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x801F44E0: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x801F44E4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F44E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F44EC: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x801F44F0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F44F4: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801F44F8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801F44FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4500: swc1        $f16, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f16.u32l;
    // 0x801F4504: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x801F4508: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801F450C: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x801F4510: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801F4514: jal         0x801D36C4
    // 0x801F4518: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_3;
    // 0x801F4518: swc1        $f8, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x801F451C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4520: jal         0x8003521C
    // 0x801F4524: addiu       $a0, $a0, 0x453C
    ctx->r4 = ADD32(ctx->r4, 0X453C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F4524: addiu       $a0, $a0, 0x453C
    ctx->r4 = ADD32(ctx->r4, 0X453C);
    after_4:
L_801F4528:
    // 0x801F4528: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F452C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F4534: jr          $ra
    // 0x801F4538: nop

    TRACE_RETURN()
    return;
    // 0x801F4538: nop

;}
RECOMP_FUNC void func_801CCA5C_5F7E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCA5C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CCA60: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CCA64: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CCA68: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801CCA6C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801CCA70: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CCA74: lbu         $t6, 0x2C2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2C2);
    // 0x801CCA78: bnel        $t6, $zero, L_801CCC00
    if (ctx->r14 != 0) {
        // 0x801CCA7C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_801CCC00;
    }
    goto skip_0;
    // 0x801CCA7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x801CCA80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CCA84: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801CCA88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCA8C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801CCA90: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801CCA94: lwc1        $f4, -0x30BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X30BC);
    // 0x801CCA98: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x801CCA9C: jal         0x801D614C
    // 0x801CCAA0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801CCAA0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_0:
    // 0x801CCAA4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801CCAA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCAAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CCAB0: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x801CCAB4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CCAB8: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x801CCABC: ldc1        $f6, -0x30B8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X30B8);
    // 0x801CCAC0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801CCAC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCAC8: c.le.d      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.d <= ctx->f6.d;
    // 0x801CCACC: nop

    // 0x801CCAD0: bc1f        L_801CCBF4
    if (!c1cs) {
        // 0x801CCAD4: nop
    
            goto L_801CCBF4;
    }
    // 0x801CCAD4: nop

    // 0x801CCAD8: lwc1        $f16, -0x30B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X30B0);
    // 0x801CCADC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCAE0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CCAE4: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x801CCAE8: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x801CCAEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCAF0: addiu       $a1, $a1, -0x5E20
    ctx->r5 = ADD32(ctx->r5, -0X5E20);
    // 0x801CCAF4: bne         $t7, $zero, L_801CCB54
    if (ctx->r15 != 0) {
        // 0x801CCAF8: addiu       $a0, $a0, -0x30BC
        ctx->r4 = ADD32(ctx->r4, -0X30BC);
            goto L_801CCB54;
    }
    // 0x801CCAF8: addiu       $a0, $a0, -0x30BC
    ctx->r4 = ADD32(ctx->r4, -0X30BC);
    // 0x801CCAFC: lwc1        $f2, -0x30AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X30AC);
    // 0x801CCB00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCB04: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCB08: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CCB0C: addiu       $t8, $zero, 0x4A8
    ctx->r24 = ADD32(0, 0X4A8);
    // 0x801CCB10: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801CCB14: addiu       $a2, $a2, -0x58D8
    ctx->r6 = ADD32(ctx->r6, -0X58D8);
    // 0x801CCB18: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CCB1C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CCB20: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CCB24: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CCB28: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CCB2C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCB30: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CCB34: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801CCB38: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CCB3C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CCB40: jal         0x80035854
    // 0x801CCB44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801CCB44: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801CCB48: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801CCB4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CCB50: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_801CCB54:
    // 0x801CCB54: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801CCB58: lw          $t9, -0x3A28($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A28);
    // 0x801CCB5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCB60: lwc1        $f2, -0x30A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X30A4);
    // 0x801CCB64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CCB68: bne         $t9, $at, L_801CCBD8
    if (ctx->r25 != ctx->r1) {
        // 0x801CCB6C: lw          $a1, 0x0($v1)
        ctx->r5 = MEM_W(ctx->r3, 0X0);
            goto L_801CCBD8;
    }
    // 0x801CCB6C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x801CCB70: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x801CCB74: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCB78: addiu       $a0, $a0, -0x2D48
    ctx->r4 = ADD32(ctx->r4, -0X2D48);
    // 0x801CCB7C: bne         $t0, $zero, L_801CCBD8
    if (ctx->r8 != 0) {
        // 0x801CCB80: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_801CCBD8;
    }
    // 0x801CCB80: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CCB84: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801CCB88: addiu       $a1, $a1, -0x5D50
    ctx->r5 = ADD32(ctx->r5, -0X5D50);
    // 0x801CCB8C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801CCB90: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801CCB94: addiu       $t1, $zero, 0x4A8
    ctx->r9 = ADD32(0, 0X4A8);
    // 0x801CCB98: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801CCB9C: addiu       $a2, $a2, -0x58D8
    ctx->r6 = ADD32(ctx->r6, -0X58D8);
    // 0x801CCBA0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801CCBA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBA8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801CCBAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CCBB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801CCBB4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801CCBB8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801CCBBC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x801CCBC0: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801CCBC4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801CCBC8: jal         0x80035854
    // 0x801CCBCC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    func_80035854_36454(rdram, ctx);
        goto after_2;
    // 0x801CCBCC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_2:
    // 0x801CCBD0: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801CCBD4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_801CCBD8:
    // 0x801CCBD8: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x801CCBDC: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CCBE0: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801CCBE4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CCBE8: addiu       $a0, $a0, -0x33F4
    ctx->r4 = ADD32(ctx->r4, -0X33F4);
    // 0x801CCBEC: jal         0x8003521C
    // 0x801CCBF0: sb          $zero, 0x2C0($t2)
    MEM_B(0X2C0, ctx->r10) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801CCBF0: sb          $zero, 0x2C0($t2)
    MEM_B(0X2C0, ctx->r10) = 0;
    after_3:
L_801CCBF4:
    // 0x801CCBF4: jal         0x801D2178
    // 0x801CCBF8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_801D2178_5FD558(rdram, ctx);
        goto after_4;
    // 0x801CCBF8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_4:
    // 0x801CCBFC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801CCC00:
    // 0x801CCC00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801CCC04: jr          $ra
    // 0x801CCC08: nop

    TRACE_RETURN()
    return;
    // 0x801CCC08: nop

;}
RECOMP_FUNC void func_801F0AD4_61BEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0AD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F0AD8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F0ADC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F0AE0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F0AE4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F0AE8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F0AEC: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801F0AF0: lw          $t7, 0x1CC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1CC);
    // 0x801F0AF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0AF8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F0AFC: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    // 0x801F0B00: jal         0x8000EDB0
    // 0x801F0B04: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    func_8000EDB0_F9B0(rdram, ctx);
        goto after_0;
    // 0x801F0B04: lw          $a1, 0x18($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X18);
    after_0:
    // 0x801F0B08: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801F0B0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0B10: nop

    // 0x801F0B14: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F0B18: nop

    // 0x801F0B1C: bc1f        L_801F0B84
    if (!c1cs) {
        // 0x801F0B20: nop
    
            goto L_801F0B84;
    }
    // 0x801F0B20: nop

    // 0x801F0B24: jal         0x801F703C
    // 0x801F0B28: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_1;
    // 0x801F0B28: nop

    after_1:
    // 0x801F0B2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F0B30: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F0B34: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F0B38: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x801F0B3C: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F0B40: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801F0B44: addiu       $t8, $s0, 0x70
    ctx->r24 = ADD32(ctx->r16, 0X70);
    // 0x801F0B48: addiu       $t9, $s0, 0x74
    ctx->r25 = ADD32(ctx->r16, 0X74);
    // 0x801F0B4C: swc1        $f6, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f6.u32l;
    // 0x801F0B50: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    // 0x801F0B54: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801F0B58: lwc1        $f14, 0x8($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F0B5C: addiu       $t0, $s0, 0x78
    ctx->r8 = ADD32(ctx->r16, 0X78);
    // 0x801F0B60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801F0B64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801F0B68: jal         0x8000E4E4
    // 0x801F0B6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_2;
    // 0x801F0B6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x801F0B70: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0B74: jal         0x8003521C
    // 0x801F0B78: addiu       $a0, $a0, 0xBF4
    ctx->r4 = ADD32(ctx->r4, 0XBF4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F0B78: addiu       $a0, $a0, 0xBF4
    ctx->r4 = ADD32(ctx->r4, 0XBF4);
    after_3:
    // 0x801F0B7C: b           L_801F0BE4
    // 0x801F0B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_801F0BE4;
    // 0x801F0B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F0B84:
    // 0x801F0B84: jal         0x801F703C
    // 0x801F0B88: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_4;
    // 0x801F0B88: nop

    after_4:
    // 0x801F0B8C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F0B90: addiu       $a1, $a1, -0x4D80
    ctx->r5 = ADD32(ctx->r5, -0X4D80);
    // 0x801F0B94: jal         0x801D31CC
    // 0x801F0B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_5;
    // 0x801F0B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F0B9C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F0BA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F0BA4: nop

    // 0x801F0BA8: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    // 0x801F0BAC: jal         0x80003E10
    // 0x801F0BB0: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_6;
    // 0x801F0BB0: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_6:
    // 0x801F0BB4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801F0BB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F0BBC: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
    // 0x801F0BC0: jal         0x80003EA0
    // 0x801F0BC4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_7;
    // 0x801F0BC4: lhu         $a0, 0x16($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X16);
    after_7:
    // 0x801F0BC8: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801F0BCC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0BD0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801F0BD4: addiu       $a0, $a0, 0xCF8
    ctx->r4 = ADD32(ctx->r4, 0XCF8);
    // 0x801F0BD8: jal         0x8003521C
    // 0x801F0BDC: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F0BDC: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_8:
    // 0x801F0BE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F0BE4:
    // 0x801F0BE4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F0BE8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F0BEC: jr          $ra
    // 0x801F0BF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801F0BF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801FDB70_628F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDB70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FDB74: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FDB78: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801FDB7C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801FDB80: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x801FDB84: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x801FDB88: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801FDB8C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801FDB90: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801FDB94: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801FDB98: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x801FDB9C: lhu         $a1, 0x92($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X92);
    // 0x801FDBA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FDBA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801FDBA8: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x801FDBAC: jal         0x8000E630
    // 0x801FDBB0: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801FDBB0: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    after_0:
    // 0x801FDBB4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801FDBB8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801FDBBC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801FDBC0: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x801FDBC4: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
    // 0x801FDBC8: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x801FDBCC: bgtz        $t1, L_801FDC70
    if (SIGNED(ctx->r9) > 0) {
        // 0x801FDBD0: sw          $t1, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r9;
            goto L_801FDC70;
    }
    // 0x801FDBD0: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
    // 0x801FDBD4: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801FDBD8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FDBDC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FDBE0: ldc1        $f8, -0x1558($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1558);
    // 0x801FDBE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FDBE8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801FDBEC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801FDBF0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801FDBF4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x801FDBF8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801FDBFC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FDC00: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801FDC04: jal         0x8000E39C
    // 0x801FDC08: nop

    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801FDC08: nop

    after_1:
    // 0x801FDC0C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801FDC10: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801FDC14: addiu       $t3, $s0, 0x14
    ctx->r11 = ADD32(ctx->r16, 0X14);
    // 0x801FDC18: lwc1        $f12, 0x70($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801FDC1C: lwc1        $f14, 0x74($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801FDC20: lw          $a2, 0x78($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X78);
    // 0x801FDC24: addiu       $t4, $s0, 0x16
    ctx->r12 = ADD32(ctx->r16, 0X16);
    // 0x801FDC28: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801FDC2C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801FDC30: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x801FDC34: jal         0x8000EC04
    // 0x801FDC38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_2;
    // 0x801FDC38: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x801FDC3C: jal         0x801FFE34
    // 0x801FDC40: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    func_801FFE34_62B214(rdram, ctx);
        goto after_3;
    // 0x801FDC40: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    after_3:
    // 0x801FDC44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FDC48: addiu       $a1, $a1, -0x4BD0
    ctx->r5 = ADD32(ctx->r5, -0X4BD0);
    // 0x801FDC4C: jal         0x801D2EE4
    // 0x801FDC50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_4;
    // 0x801FDC50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FDC54: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FDC58: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FDC5C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801FDC60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FDC64: addiu       $a0, $a0, -0x237C
    ctx->r4 = ADD32(ctx->r4, -0X237C);
    // 0x801FDC68: jal         0x8003521C
    // 0x801FDC6C: sb          $t5, 0x816($t6)
    MEM_B(0X816, ctx->r14) = ctx->r13;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FDC6C: sb          $t5, 0x816($t6)
    MEM_B(0X816, ctx->r14) = ctx->r13;
    after_5:
L_801FDC70:
    // 0x801FDC70: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FDC74: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801FDC78: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801FDC7C: jr          $ra
    // 0x801FDC80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801FDC80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801E493C_60FD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E493C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4944: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4948: jal         0x801EF280
    // 0x801E494C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF280_61A660(rdram, ctx);
        goto after_0;
    // 0x801E494C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E4950: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E4954: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E4958: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801E495C: sb          $zero, 0x2C1($t6)
    MEM_B(0X2C1, ctx->r14) = 0;
    // 0x801E4960: jal         0x801D326C
    // 0x801E4964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_1;
    // 0x801E4964: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E4968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E496C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4970: jr          $ra
    // 0x801E4974: nop

    TRACE_RETURN()
    return;
    // 0x801E4974: nop

;}
RECOMP_FUNC void func_801F7214_6225F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7214: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F7218: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F721C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F7220: lwc1        $f6, 0x178($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X178);
    // 0x801F7224: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F7228: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F722C: addiu       $v0, $v0, 0x178
    ctx->r2 = ADD32(ctx->r2, 0X178);
    // 0x801F7230: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F7234: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F7238: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x801F723C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F7240: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7244: swc1        $f18, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f18.u32l;
    // 0x801F7248: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F724C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F7250: jr          $ra
    // 0x801F7254: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801F7254: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801ED6C4_618AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED6C8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801ED6CC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801ED6D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED6D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801ED6D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED6DC: lbu         $t7, 0x2C1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C1);
    // 0x801ED6E0: bnel        $t7, $zero, L_801ED730
    if (ctx->r15 != 0) {
        // 0x801ED6E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801ED730;
    }
    goto skip_0;
    // 0x801ED6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801ED6E8: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801ED6EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x801ED6F0: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x801ED6F4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x801ED6F8: bgtz        $v0, L_801ED72C
    if (SIGNED(ctx->r2) > 0) {
        // 0x801ED6FC: sw          $t8, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r24;
            goto L_801ED72C;
    }
    // 0x801ED6FC: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801ED700: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801ED704: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ED708: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x801ED70C: swc1        $f4, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f4.u32l;
    // 0x801ED710: lwc1        $f6, -0x1DEC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1DEC);
    // 0x801ED714: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801ED718: sw          $t0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r8;
    // 0x801ED71C: swc1        $f6, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f6.u32l;
    // 0x801ED720: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ED724: jal         0x8003521C
    // 0x801ED728: addiu       $a0, $a0, -0x28C4
    ctx->r4 = ADD32(ctx->r4, -0X28C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801ED728: addiu       $a0, $a0, -0x28C4
    ctx->r4 = ADD32(ctx->r4, -0X28C4);
    after_0:
L_801ED72C:
    // 0x801ED72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801ED730:
    // 0x801ED730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED734: jr          $ra
    // 0x801ED738: nop

    TRACE_RETURN()
    return;
    // 0x801ED738: nop

;}
RECOMP_FUNC void func_80200434_62B814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020043C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80200440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80200444: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80200448: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8020044C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80200450: nop

    // 0x80200454: bc1f        L_802004B8
    if (!c1cs) {
        // 0x80200458: nop
    
            goto L_802004B8;
    }
    // 0x80200458: nop

    // 0x8020045C: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80200460: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80200464: ldc1        $f16, -0x1390($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1390);
    // 0x80200468: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8020046C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80200470: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80200474: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80200478: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x8020047C: lwc1        $f6, 0x74($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80200480: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    // 0x80200484: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80200488: nop

    // 0x8020048C: bc1f        L_802004B8
    if (!c1cs) {
        // 0x80200490: nop
    
            goto L_802004B8;
    }
    // 0x80200490: nop

    // 0x80200494: jal         0x8003D310
    // 0x80200498: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x80200498: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8020049C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802004A0: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x802004A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802004A8: addiu       $a0, $a0, 0x4D0
    ctx->r4 = ADD32(ctx->r4, 0X4D0);
    // 0x802004AC: jal         0x8003521C
    // 0x802004B0: sw          $t6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802004B0: sw          $t6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r14;
    after_1:
    // 0x802004B4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_802004B8:
    // 0x802004B8: jal         0x801D603C
    // 0x802004BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D603C_60141C(rdram, ctx);
        goto after_2;
    // 0x802004BC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x802004C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802004C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802004C8: jr          $ra
    // 0x802004CC: nop

    TRACE_RETURN()
    return;
    // 0x802004CC: nop

;}
RECOMP_FUNC void func_801E03F8_60B7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E03F8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E03FC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E0400: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E0404: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801E0408: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E040C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E0410: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E0414: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E0418: addiu       $a2, $a2, -0x4C20
    ctx->r6 = ADD32(ctx->r6, -0X4C20);
    // 0x801E041C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E0420: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E0424: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0428: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E042C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E0430: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E0434: addiu       $t6, $zero, 0x4A8
    ctx->r14 = ADD32(0, 0X4A8);
    // 0x801E0438: addiu       $a1, $a1, 0x530
    ctx->r5 = ADD32(ctx->r5, 0X530);
    // 0x801E043C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801E0440: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E0444: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x801E0448: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E044C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x801E0450: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801E0454: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E0458: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E045C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E0460: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x801E0464: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801E0468: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E046C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E0470: jal         0x800358E8
    // 0x801E0474: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E0474: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801E0478: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E047C: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x801E0480: beq         $v0, $zero, L_801E051C
    if (ctx->r2 == 0) {
        // 0x801E0484: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E051C;
    }
    // 0x801E0484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E0488: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x801E048C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E0490: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E0494: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801E0498: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x801E049C: sw          $v1, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r3;
    // 0x801E04A0: swc1        $f18, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f18.u32l;
    // 0x801E04A4: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E04A8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E04AC: addiu       $t1, $zero, 0x4A8
    ctx->r9 = ADD32(0, 0X4A8);
    // 0x801E04B0: swc1        $f4, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f4.u32l;
    // 0x801E04B4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E04B8: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801E04BC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x801E04C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801E04C4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E04C8: addiu       $a2, $a2, -0x5288
    ctx->r6 = ADD32(ctx->r6, -0X5288);
    // 0x801E04CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801E04D0: lhu         $t8, 0x14($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X14);
    // 0x801E04D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E04D8: lhu         $t9, 0x16($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X16);
    // 0x801E04DC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E04E0: lhu         $t0, 0x18($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X18);
    // 0x801E04E4: sw          $a0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r4;
    // 0x801E04E8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E04EC: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801E04F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E04F4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E04F8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E04FC: jal         0x8000DBF0
    // 0x801E0500: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E0500: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_1:
    // 0x801E0504: bne         $v0, $zero, L_801E051C
    if (ctx->r2 != 0) {
        // 0x801E0508: lw          $a0, 0x5C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X5C);
            goto L_801E051C;
    }
    // 0x801E0508: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801E050C: jal         0x80034EF8
    // 0x801E0510: nop

    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801E0510: nop

    after_2:
    // 0x801E0514: b           L_801E0520
    // 0x801E0518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E0520;
    // 0x801E0518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E051C:
    // 0x801E051C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_801E0520:
    // 0x801E0520: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E0524: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801E0528: jr          $ra
    // 0x801E052C: nop

    TRACE_RETURN()
    return;
    // 0x801E052C: nop

;}
RECOMP_FUNC void func_801F05BC_61B99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F05BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F05C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F05C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F05C8: jal         0x801F7074
    // 0x801F05CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F05CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F05D0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F05D4: addiu       $a1, $a1, -0x4D98
    ctx->r5 = ADD32(ctx->r5, -0X4D98);
    // 0x801F05D8: jal         0x801D31CC
    // 0x801F05DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801F05DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F05E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F05E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F05E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F05EC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F05F0: addiu       $a0, $a0, 0x60C
    ctx->r4 = ADD32(ctx->r4, 0X60C);
    // 0x801F05F4: jal         0x8003521C
    // 0x801F05F8: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F05F8: swc1        $f4, 0x74($t6)
    MEM_W(0X74, ctx->r14) = ctx->f4.u32l;
    after_2:
    // 0x801F05FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0604: jr          $ra
    // 0x801F0608: nop

    TRACE_RETURN()
    return;
    // 0x801F0608: nop

;}
RECOMP_FUNC void func_801F701C_6223FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F701C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F7020: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801F7024: addiu       $t6, $zero, 0x1042
    ctx->r14 = ADD32(0, 0X1042);
    // 0x801F7028: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801F702C: jr          $ra
    // 0x801F7030: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801F7030: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801F9150_624530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9150: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801F9154: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F9158: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801F915C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F9160: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F9164: lui         $at, 0x43D7
    ctx->r1 = S32(0X43D7 << 16);
    // 0x801F9168: lwc1        $f4, 0x1C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801F916C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F9170: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801F9174: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F9178: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F917C: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801F9180: addiu       $t8, $sp, 0x44
    ctx->r24 = ADD32(ctx->r29, 0X44);
    // 0x801F9184: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    // 0x801F9188: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801F918C: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801F9190: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F9194: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801F9198: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801F919C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F91A0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x801F91A4: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x801F91A8: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x801F91AC: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x801F91B0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801F91B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801F91B8: jal         0x8000E808
    // 0x801F91BC: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801F91BC: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_0:
    // 0x801F91C0: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x801F91C4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F91C8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F91CC: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F91D0: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801F91D4: addiu       $a1, $a1, -0xA60
    ctx->r5 = ADD32(ctx->r5, -0XA60);
    // 0x801F91D8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F91DC: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801F91E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F91E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F91E8: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801F91EC: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F91F0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801F91F4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F91F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F91FC: addiu       $t2, $zero, 0x4B2
    ctx->r10 = ADD32(0, 0X4B2);
    // 0x801F9200: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801F9204: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F9208: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801F920C: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F9210: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F9214: addiu       $a0, $a0, -0x6D30
    ctx->r4 = ADD32(ctx->r4, -0X6D30);
    // 0x801F9218: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F921C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x801F9220: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801F9224: lhu         $t9, 0x14($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X14);
    // 0x801F9228: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801F922C: lhu         $t0, 0x16($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X16);
    // 0x801F9230: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x801F9234: lhu         $t1, 0x18($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X18);
    // 0x801F9238: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x801F923C: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x801F9240: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801F9244: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801F9248: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F924C: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x801F9250: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F9254: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x801F9258: jal         0x80035854
    // 0x801F925C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801F925C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801F9260: beq         $v0, $zero, L_801F92C0
    if (ctx->r2 == 0) {
        // 0x801F9264: addiu       $t6, $zero, 0x5B
        ctx->r14 = ADD32(0, 0X5B);
            goto L_801F92C0;
    }
    // 0x801F9264: addiu       $t6, $zero, 0x5B
    ctx->r14 = ADD32(0, 0X5B);
    // 0x801F9268: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801F926C: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801F9270: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F9274: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F9278: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x801F927C: addiu       $t5, $zero, 0x46
    ctx->r13 = ADD32(0, 0X46);
    // 0x801F9280: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x801F9284: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801F9288: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x801F928C: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801F9290: bc1f        L_801F92A4
    if (!c1cs) {
        // 0x801F9294: sb          $t3, 0x5($v1)
        MEM_B(0X5, ctx->r3) = ctx->r11;
            goto L_801F92A4;
    }
    // 0x801F9294: sb          $t3, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r11;
    // 0x801F9298: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x801F929C: b           L_801F92A8
    // 0x801F92A0: sb          $t4, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r12;
        goto L_801F92A8;
    // 0x801F92A0: sb          $t4, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r12;
L_801F92A4:
    // 0x801F92A4: sb          $t5, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r13;
L_801F92A8:
    // 0x801F92A8: sh          $t6, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = ctx->r14;
    // 0x801F92AC: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
    // 0x801F92B0: sw          $t8, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r24;
    // 0x801F92B4: sh          $t9, 0x4E($v0)
    MEM_H(0X4E, ctx->r2) = ctx->r25;
    // 0x801F92B8: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x801F92BC: sh          $zero, 0x52($v0)
    MEM_H(0X52, ctx->r2) = 0;
L_801F92C0:
    // 0x801F92C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F92C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801F92C8: jr          $ra
    // 0x801F92CC: nop

    TRACE_RETURN()
    return;
    // 0x801F92CC: nop

;}
RECOMP_FUNC void func_801E46FC_60FADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E46FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4704: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4708: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E470C: addiu       $t6, $zero, 0x5DC
    ctx->r14 = ADD32(0, 0X5DC);
    // 0x801E4710: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801E4714: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4718: jal         0x8003521C
    // 0x801E471C: addiu       $a0, $a0, 0x4730
    ctx->r4 = ADD32(ctx->r4, 0X4730);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801E471C: addiu       $a0, $a0, 0x4730
    ctx->r4 = ADD32(ctx->r4, 0X4730);
    after_0:
    // 0x801E4720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4728: jr          $ra
    // 0x801E472C: nop

    TRACE_RETURN()
    return;
    // 0x801E472C: nop

;}
RECOMP_FUNC void func_801E4C5C_61003C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4C64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4C68: jal         0x801EF280
    // 0x801E4C6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF280_61A660(rdram, ctx);
        goto after_0;
    // 0x801E4C6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E4C70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4C74: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E4C78: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4C7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4C80: jal         0x801D34D0
    // 0x801E4C84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E4C84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E4C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4C90: jr          $ra
    // 0x801E4C94: nop

    TRACE_RETURN()
    return;
    // 0x801E4C94: nop

;}
RECOMP_FUNC void func_801FAEB0_626290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FAEB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801FAEB4: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FAEB8: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FAEBC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801FAEC0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801FAEC4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801FAEC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FAECC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801FAED0: sb          $t6, 0x2C6($t7)
    MEM_B(0X2C6, ctx->r15) = ctx->r14;
    // 0x801FAED4: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801FAED8: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801FAEDC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801FAEE0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801FAEE4: lbu         $t9, -0x521C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X521C);
    // 0x801FAEE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FAEEC: bne         $t9, $at, L_801FAF14
    if (ctx->r25 != ctx->r1) {
        // 0x801FAEF0: nop
    
            goto L_801FAF14;
    }
    // 0x801FAEF0: nop

    // 0x801FAEF4: jal         0x8003767C
    // 0x801FAEF8: nop

    func_8003767C_3827C(rdram, ctx);
        goto after_0;
    // 0x801FAEF8: nop

    after_0:
    // 0x801FAEFC: bne         $v0, $zero, L_801FAF1C
    if (ctx->r2 != 0) {
        // 0x801FAF00: nop
    
            goto L_801FAF1C;
    }
    // 0x801FAF00: nop

    // 0x801FAF04: jal         0x80038BC8
    // 0x801FAF08: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FAF08: addiu       $a0, $zero, 0x16A
    ctx->r4 = ADD32(0, 0X16A);
    after_1:
    // 0x801FAF0C: b           L_801FAF1C
    // 0x801FAF10: nop

        goto L_801FAF1C;
    // 0x801FAF10: nop

L_801FAF14:
    // 0x801FAF14: jal         0x80038BC8
    // 0x801FAF18: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801FAF18: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    after_2:
L_801FAF1C:
    // 0x801FAF1C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801FAF20: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801FAF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FAF28: jal         0x800351B4
    // 0x801FAF2C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_800351B4_35DB4(rdram, ctx);
        goto after_3;
    // 0x801FAF2C: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_3:
    // 0x801FAF30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FAF34: lwc1        $f0, -0x1634($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1634);
    // 0x801FAF38: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801FAF3C: addiu       $a1, $a1, 0xE9C
    ctx->r5 = ADD32(ctx->r5, 0XE9C);
    // 0x801FAF40: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801FAF44: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801FAF48: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x801FAF4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FAF50: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FAF54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FAF58: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801FAF5C: addiu       $t1, $zero, 0x4B5
    ctx->r9 = ADD32(0, 0X4B5);
    // 0x801FAF60: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x801FAF64: addiu       $a2, $a2, -0x5430
    ctx->r6 = ADD32(ctx->r6, -0X5430);
    // 0x801FAF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FAF6C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801FAF70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801FAF74: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801FAF78: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801FAF7C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801FAF80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801FAF84: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801FAF88: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801FAF8C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FAF90: jal         0x8000DBF0
    // 0x801FAF94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_4;
    // 0x801FAF94: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801FAF98: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801FAF9C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801FAFA0: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801FAFA4: lw          $t2, -0x1130($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1130);
    // 0x801FAFA8: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x801FAFAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FAFB0: sw          $v0, 0x1E0($t2)
    MEM_W(0X1E0, ctx->r10) = ctx->r2;
    // 0x801FAFB4: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x801FAFB8: addiu       $t5, $zero, 0x1F4
    ctx->r13 = ADD32(0, 0X1F4);
    // 0x801FAFBC: sh          $v1, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r3;
    // 0x801FAFC0: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x801FAFC4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801FAFC8: sh          $t4, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r12;
    // 0x801FAFCC: sh          $t5, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r13;
    // 0x801FAFD0: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801FAFD4: sw          $v1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r3;
    // 0x801FAFD8: jal         0x801FFE6C
    // 0x801FAFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_5;
    // 0x801FAFDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801FAFE0: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x801FAFE4: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x801FAFE8: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801FAFEC: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x801FAFF0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801FAFF4: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x801FAFF8: sw          $t6, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r14;
    // 0x801FAFFC: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x801FB000: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801FB004: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801FB008: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    // 0x801FB00C: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x801FB010: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FB014: addiu       $a1, $a1, -0x4C10
    ctx->r5 = ADD32(ctx->r5, -0X4C10);
    // 0x801FB018: jal         0x801D2EE4
    // 0x801FB01C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_6;
    // 0x801FB01C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_6:
    // 0x801FB020: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB024: addiu       $a0, $a0, 0x5FC8
    ctx->r4 = ADD32(ctx->r4, 0X5FC8);
    // 0x801FB028: jal         0x80034DD8
    // 0x801FB02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_7;
    // 0x801FB02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x801FB030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB034: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801FB038: jal         0x802060D8
    // 0x801FB03C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_802060D8_6314B8(rdram, ctx);
        goto after_8;
    // 0x801FB03C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_8:
    // 0x801FB040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB044: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x801FB048: jal         0x802060D8
    // 0x801FB04C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_802060D8_6314B8(rdram, ctx);
        goto after_9;
    // 0x801FB04C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_9:
    // 0x801FB050: jal         0x80206480
    // 0x801FB054: nop

    func_80206480_631860(rdram, ctx);
        goto after_10;
    // 0x801FB054: nop

    after_10:
    // 0x801FB058: jal         0x80206990
    // 0x801FB05C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80206990_631D70(rdram, ctx);
        goto after_11;
    // 0x801FB05C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801FB060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB064: jal         0x80206BEC
    // 0x801FB068: addiu       $a1, $zero, 0x155
    ctx->r5 = ADD32(0, 0X155);
    func_80206BEC_631FCC(rdram, ctx);
        goto after_12;
    // 0x801FB068: addiu       $a1, $zero, 0x155
    ctx->r5 = ADD32(0, 0X155);
    after_12:
    // 0x801FB06C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB070: jal         0x80206BEC
    // 0x801FB074: addiu       $a1, $zero, 0x2AA
    ctx->r5 = ADD32(0, 0X2AA);
    func_80206BEC_631FCC(rdram, ctx);
        goto after_13;
    // 0x801FB074: addiu       $a1, $zero, 0x2AA
    ctx->r5 = ADD32(0, 0X2AA);
    after_13:
    // 0x801FB078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB07C: jal         0x80206BEC
    // 0x801FB080: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    func_80206BEC_631FCC(rdram, ctx);
        goto after_14;
    // 0x801FB080: addiu       $a1, $zero, 0x3FF
    ctx->r5 = ADD32(0, 0X3FF);
    after_14:
    // 0x801FB084: jal         0x802099A8
    // 0x801FB088: nop

    func_802099A8_634D88(rdram, ctx);
        goto after_15;
    // 0x801FB088: nop

    after_15:
    // 0x801FB08C: jal         0x801FFE14
    // 0x801FB090: nop

    func_801FFE14_62B1F4(rdram, ctx);
        goto after_16;
    // 0x801FB090: nop

    after_16:
    // 0x801FB094: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x801FB098: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FB09C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB0A0: addiu       $t7, $zero, 0x7D0
    ctx->r15 = ADD32(0, 0X7D0);
    // 0x801FB0A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB0A8: sw          $t7, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->r15;
    // 0x801FB0AC: addiu       $a0, $a0, -0x4F34
    ctx->r4 = ADD32(ctx->r4, -0X4F34);
    // 0x801FB0B0: jal         0x8003521C
    // 0x801FB0B4: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_17;
    // 0x801FB0B4: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_17:
    // 0x801FB0B8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801FB0BC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801FB0C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801FB0C4: jr          $ra
    // 0x801FB0C8: nop

    TRACE_RETURN()
    return;
    // 0x801FB0C8: nop

;}
RECOMP_FUNC void func_801DF5C4_60A9A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF5C4: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x801DF5C8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801DF5CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801DF5D0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801DF5D4: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DF5D8: bgez        $t6, L_801DF5F4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DF5DC: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_801DF5F4;
    }
    // 0x801DF5DC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801DF5E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801DF5E4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DF5E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DF5EC: nop

    // 0x801DF5F0: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801DF5F4:
    // 0x801DF5F4: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DF5F8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801DF5FC: nop

    // 0x801DF600: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x801DF604: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DF608: jr          $ra
    // 0x801DF60C: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801DF60C: swc1        $f18, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_801E6778_611B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E677C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6780: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E6784: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E6788: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801E678C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801E6790: bgtz        $t7, L_801E67C4
    if (SIGNED(ctx->r15) > 0) {
        // 0x801E6794: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801E67C4;
    }
    // 0x801E6794: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E6798: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801E679C: jal         0x801D31F0
    // 0x801E67A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E67A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E67A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E67A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E67AC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E67B0: nop

    // 0x801E67B4: bc1fl       L_801E67C8
    if (!c1cs) {
        // 0x801E67B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E67C8;
    }
    goto skip_0;
    // 0x801E67B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E67BC: jal         0x801E599C
    // 0x801E67C0: nop

    func_801E599C_610D7C(rdram, ctx);
        goto after_1;
    // 0x801E67C0: nop

    after_1:
L_801E67C4:
    // 0x801E67C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E67C8:
    // 0x801E67C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E67CC: jr          $ra
    // 0x801E67D0: nop

    TRACE_RETURN()
    return;
    // 0x801E67D0: nop

;}
RECOMP_FUNC void func_80206BEC_631FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206BEC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80206BF0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80206BF4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80206BF8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80206BFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80206C00: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80206C04: lhu         $a1, 0x66($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X66);
    // 0x80206C08: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x80206C0C: jal         0x8000E630
    // 0x80206C10: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x80206C10: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x80206C14: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x80206C18: addiu       $a2, $a2, 0x170
    ctx->r6 = ADD32(ctx->r6, 0X170);
    // 0x80206C1C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206C20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80206C24: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80206C28: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80206C2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80206C30: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80206C34: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80206C38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80206C3C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80206C40: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80206C44: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80206C48: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80206C4C: addiu       $t9, $zero, 0x4AE
    ctx->r25 = ADD32(0, 0X4AE);
    // 0x80206C50: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80206C54: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80206C58: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80206C5C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80206C60: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x80206C64: addiu       $a1, $a1, 0x6D38
    ctx->r5 = ADD32(ctx->r5, 0X6D38);
    // 0x80206C68: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80206C6C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80206C70: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80206C74: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80206C78: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80206C7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80206C80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80206C84: jal         0x800358E8
    // 0x80206C88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_1;
    // 0x80206C88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80206C8C: beq         $v0, $zero, L_80206D28
    if (ctx->r2 == 0) {
        // 0x80206C90: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80206D28;
    }
    // 0x80206C90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80206C94: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x80206C98: lhu         $t0, 0x66($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X66);
    // 0x80206C9C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80206CA0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80206CA4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80206CA8: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x80206CAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80206CB0: sw          $t0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r8;
    // 0x80206CB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80206CB8: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80206CBC: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x80206CC0: swc1        $f0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f0.u32l;
    // 0x80206CC4: swc1        $f0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f0.u32l;
    // 0x80206CC8: swc1        $f10, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f10.u32l;
    // 0x80206CCC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80206CD0: addiu       $t2, $zero, 0xB2
    ctx->r10 = ADD32(0, 0XB2);
    // 0x80206CD4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80206CD8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80206CDC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80206CE0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80206CE4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80206CE8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x80206CEC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x80206CF0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80206CF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80206CF8: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80206CFC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80206D00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80206D04: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80206D08: jal         0x8000E030
    // 0x80206D0C: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_8000E030_EC30(rdram, ctx);
        goto after_2;
    // 0x80206D0C: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_2:
    // 0x80206D10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206D14: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80206D18: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x80206D1C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80206D20: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80206D24: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
L_80206D28:
    // 0x80206D28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80206D2C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80206D30: jr          $ra
    // 0x80206D34: nop

    TRACE_RETURN()
    return;
    // 0x80206D34: nop

;}
RECOMP_FUNC void func_801E52D8_6106B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E52D8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E52DC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E52E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E52E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E52E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E52EC: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801E52F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E52F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E52F8: jal         0x801EF268
    // 0x801E52FC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E52FC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E5300: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E5304: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801E5308: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801E530C: jal         0x801D39A0
    // 0x801E5310: sw          $t8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r24;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_1;
    // 0x801E5310: sw          $t8, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r24;
    after_1:
    // 0x801E5314: beq         $v0, $zero, L_801E532C
    if (ctx->r2 == 0) {
        // 0x801E5318: lui         $a0, 0x801E
        ctx->r4 = S32(0X801E << 16);
            goto L_801E532C;
    }
    // 0x801E5318: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E531C: jal         0x8003521C
    // 0x801E5320: addiu       $a0, $a0, 0x4FD4
    ctx->r4 = ADD32(ctx->r4, 0X4FD4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E5320: addiu       $a0, $a0, 0x4FD4
    ctx->r4 = ADD32(ctx->r4, 0X4FD4);
    after_2:
    // 0x801E5324: b           L_801E5440
    // 0x801E5328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E5440;
    // 0x801E5328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E532C:
    // 0x801E532C: jal         0x801D3A18
    // 0x801E5330: nop

    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_3;
    // 0x801E5330: nop

    after_3:
    // 0x801E5334: beq         $v0, $zero, L_801E5350
    if (ctx->r2 == 0) {
        // 0x801E5338: lw          $t1, 0x2C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X2C);
            goto L_801E5350;
    }
    // 0x801E5338: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801E533C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E5340: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801E5344: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E5348: b           L_801E543C
    // 0x801E534C: sb          $t9, 0x2C4($t0)
    MEM_B(0X2C4, ctx->r8) = ctx->r25;
        goto L_801E543C;
    // 0x801E534C: sb          $t9, 0x2C4($t0)
    MEM_B(0X2C4, ctx->r8) = ctx->r25;
L_801E5350:
    // 0x801E5350: lbu         $t2, 0xE($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XE);
    // 0x801E5354: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E5358: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E535C: bne         $t2, $at, L_801E5374
    if (ctx->r10 != ctx->r1) {
        // 0x801E5360: nop
    
            goto L_801E5374;
    }
    // 0x801E5360: nop

    // 0x801E5364: jal         0x8003521C
    // 0x801E5368: addiu       $a0, $a0, 0x6024
    ctx->r4 = ADD32(ctx->r4, 0X6024);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E5368: addiu       $a0, $a0, 0x6024
    ctx->r4 = ADD32(ctx->r4, 0X6024);
    after_4:
    // 0x801E536C: b           L_801E5440
    // 0x801E5370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E5440;
    // 0x801E5370: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E5374:
    // 0x801E5374: jal         0x801E5450
    // 0x801E5378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E5450_610830(rdram, ctx);
        goto after_5;
    // 0x801E5378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801E537C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E5380: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801E5384: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801E5388: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801E538C: sb          $t3, 0x190($v1)
    MEM_B(0X190, ctx->r3) = ctx->r11;
    // 0x801E5390: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801E5394: jal         0x801D3018
    // 0x801E5398: addiu       $v1, $v1, 0x178
    ctx->r3 = ADD32(ctx->r3, 0X178);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_6;
    // 0x801E5398: addiu       $v1, $v1, 0x178
    ctx->r3 = ADD32(ctx->r3, 0X178);
    after_6:
    // 0x801E539C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E53A0: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E53A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E53A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E53AC: jal         0x801D35FC
    // 0x801E53B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D35FC_5FE9DC(rdram, ctx);
        goto after_7;
    // 0x801E53B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x801E53B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E53B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E53BC: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801E53C0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801E53C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E53C8: lui         $a1, 0xC396
    ctx->r5 = S32(0XC396 << 16);
    // 0x801E53CC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801E53D0: jal         0x801D655C
    // 0x801E53D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_8;
    // 0x801E53D4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x801E53D8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E53DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E53E0: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x801E53E4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801E53E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E53EC: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x801E53F0: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x801E53F4: jal         0x801D67FC
    // 0x801E53F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_9;
    // 0x801E53F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x801E53FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5400: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801E5404: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    // 0x801E5408: jal         0x801D5D98
    // 0x801E540C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_10;
    // 0x801E540C: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    after_10:
    // 0x801E5410: lw          $t4, 0xB4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XB4);
    // 0x801E5414: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801E5418: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801E541C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5420: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801E5424: jal         0x801D5C30
    // 0x801E5428: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_801D5C30_601010(rdram, ctx);
        goto after_11;
    // 0x801E5428: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_11:
    // 0x801E542C: jal         0x801EEE54
    // 0x801E5430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEE54_61A234(rdram, ctx);
        goto after_12;
    // 0x801E5430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801E5434: jal         0x801EEEA0
    // 0x801E5438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_13;
    // 0x801E5438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_801E543C:
    // 0x801E543C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E5440:
    // 0x801E5440: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5444: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E5448: jr          $ra
    // 0x801E544C: nop

    TRACE_RETURN()
    return;
    // 0x801E544C: nop

;}
RECOMP_FUNC void func_801E52CC_6106AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E52CC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E52D0: jr          $ra
    // 0x801E52D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E52D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801EC908_617CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC908: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EC90C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EC910: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EC914: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EC918: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EC91C: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801EC920: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC924: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801EC928: jal         0x801ECEDC
    // 0x801EC92C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801EC92C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x801EC930: bnel        $v0, $zero, L_801ECA64
    if (ctx->r2 != 0) {
        // 0x801EC934: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801ECA64;
    }
    goto skip_0;
    // 0x801EC934: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EC938: jal         0x801ECE48
    // 0x801EC93C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801ECE48_618228(rdram, ctx);
        goto after_1;
    // 0x801EC93C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EC940: bne         $v0, $zero, L_801ECA60
    if (ctx->r2 != 0) {
        // 0x801EC944: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_801ECA60;
    }
    // 0x801EC944: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EC948: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EC94C: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x801EC950: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801EC954: lw          $t8, 0x1CC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X1CC);
    // 0x801EC958: bnel        $t8, $t9, L_801EC9A0
    if (ctx->r24 != ctx->r25) {
        // 0x801EC95C: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801EC9A0;
    }
    goto skip_1;
    // 0x801EC95C: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_1:
    // 0x801EC960: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x801EC964: bnel        $t1, $zero, L_801EC9A0
    if (ctx->r9 != 0) {
        // 0x801EC968: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801EC9A0;
    }
    goto skip_2;
    // 0x801EC968: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_2:
    // 0x801EC96C: lbu         $t2, 0x2C5($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2C5);
    // 0x801EC970: bnel        $t2, $zero, L_801EC9A0
    if (ctx->r10 != 0) {
        // 0x801EC974: lw          $t7, 0x80($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X80);
            goto L_801EC9A0;
    }
    goto skip_3;
    // 0x801EC974: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
    skip_3:
    // 0x801EC978: lbu         $t3, 0x30($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X30);
    // 0x801EC97C: lw          $t5, 0xB4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XB4);
    // 0x801EC980: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801EC984: andi        $t4, $t3, 0xFFFD
    ctx->r12 = ctx->r11 & 0XFFFD;
    // 0x801EC988: bne         $t5, $zero, L_801EC99C
    if (ctx->r13 != 0) {
        // 0x801EC98C: sb          $t4, 0x30($s0)
        MEM_B(0X30, ctx->r16) = ctx->r12;
            goto L_801EC99C;
    }
    // 0x801EC98C: sb          $t4, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r12;
    // 0x801EC990: sw          $t6, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r14;
    // 0x801EC994: jal         0x80038BC8
    // 0x801EC998: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801EC998: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_2:
L_801EC99C:
    // 0x801EC99C: lw          $t7, 0x80($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X80);
L_801EC9A0:
    // 0x801EC9A0: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x801EC9A4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801EC9A8: bgez        $t8, L_801ECA30
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801EC9AC: sw          $t8, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r24;
            goto L_801ECA30;
    }
    // 0x801EC9AC: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801EC9B0: lbu         $t0, 0x30($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X30);
    // 0x801EC9B4: sb          $t2, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r10;
    // 0x801EC9B8: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x801EC9BC: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x801EC9C0: sb          $t1, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r9;
    // 0x801EC9C4: jal         0x801D2F40
    // 0x801EC9C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801EC9C8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x801EC9CC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x801EC9D0: lui         $at, 0x403D
    ctx->r1 = S32(0X403D << 16);
    // 0x801EC9D4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801EC9D8: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x801EC9DC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801EC9E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EC9E4: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801EC9E8: nop

    // 0x801EC9EC: bc1fl       L_801ECA34
    if (!c1cs) {
        // 0x801EC9F0: lw          $t8, 0x2C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X2C);
            goto L_801ECA34;
    }
    goto skip_4;
    // 0x801EC9F0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x801EC9F4: lbu         $t4, 0x30($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X30);
    // 0x801EC9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC9FC: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x801ECA00: jal         0x801D36C4
    // 0x801ECA04: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_4;
    // 0x801ECA04: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    after_4:
    // 0x801ECA08: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x801ECA0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801ECA10: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801ECA14: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x801ECA18: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801ECA1C: swc1        $f10, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f10.u32l;
    // 0x801ECA20: sw          $t7, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r15;
    // 0x801ECA24: sw          $zero, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = 0;
    // 0x801ECA28: jal         0x8003521C
    // 0x801ECA2C: addiu       $a0, $a0, -0x358C
    ctx->r4 = ADD32(ctx->r4, -0X358C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801ECA2C: addiu       $a0, $a0, -0x358C
    ctx->r4 = ADD32(ctx->r4, -0X358C);
    after_5:
L_801ECA30:
    // 0x801ECA30: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_801ECA34:
    // 0x801ECA34: lui         $at, 0x4036
    ctx->r1 = S32(0X4036 << 16);
    // 0x801ECA38: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801ECA3C: lwc1        $f16, 0x28($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801ECA40: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801ECA44: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801ECA48: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801ECA4C: c.le.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d <= ctx->f18.d;
    // 0x801ECA50: nop

    // 0x801ECA54: bc1fl       L_801ECA64
    if (!c1cs) {
        // 0x801ECA58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801ECA64;
    }
    goto skip_5;
    // 0x801ECA58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x801ECA5C: sb          $t9, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r25;
L_801ECA60:
    // 0x801ECA60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801ECA64:
    // 0x801ECA64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801ECA68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801ECA6C: jr          $ra
    // 0x801ECA70: nop

    TRACE_RETURN()
    return;
    // 0x801ECA70: nop

;}
RECOMP_FUNC void func_801DB734_606B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DB738: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB73C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DB740: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801DB744: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DB748: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DB74C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801DB750: addiu       $t9, $t7, -0xA
    ctx->r25 = ADD32(ctx->r15, -0XA);
    // 0x801DB754: sltiu       $at, $t9, 0x51
    ctx->r1 = ctx->r25 < 0X51 ? 1 : 0;
    // 0x801DB758: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801DB75C: beq         $at, $zero, L_801DB82C
    if (ctx->r1 == 0) {
        // 0x801DB760: addiu       $v0, $v0, 0x140
        ctx->r2 = ADD32(ctx->r2, 0X140);
            goto L_801DB82C;
    }
    // 0x801DB760: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801DB764: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x801DB768: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DB76C: addu        $at, $at, $t9
    gpr jr_addend_801DB774 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801DB770: lw          $t9, -0x269C($at)
    ctx->r25 = ADD32(ctx->r1, -0X269C);
    // 0x801DB774: jr          $t9
    // 0x801DB778: nop

    switch (jr_addend_801DB774 >> 2) {
        case 0: goto L_801DB77C; break;
        case 1: goto L_801DB82C; break;
        case 2: goto L_801DB82C; break;
        case 3: goto L_801DB82C; break;
        case 4: goto L_801DB82C; break;
        case 5: goto L_801DB82C; break;
        case 6: goto L_801DB82C; break;
        case 7: goto L_801DB82C; break;
        case 8: goto L_801DB82C; break;
        case 9: goto L_801DB82C; break;
        case 10: goto L_801DB790; break;
        case 11: goto L_801DB82C; break;
        case 12: goto L_801DB82C; break;
        case 13: goto L_801DB82C; break;
        case 14: goto L_801DB82C; break;
        case 15: goto L_801DB82C; break;
        case 16: goto L_801DB82C; break;
        case 17: goto L_801DB82C; break;
        case 18: goto L_801DB82C; break;
        case 19: goto L_801DB82C; break;
        case 20: goto L_801DB7A4; break;
        case 21: goto L_801DB82C; break;
        case 22: goto L_801DB82C; break;
        case 23: goto L_801DB82C; break;
        case 24: goto L_801DB82C; break;
        case 25: goto L_801DB82C; break;
        case 26: goto L_801DB82C; break;
        case 27: goto L_801DB82C; break;
        case 28: goto L_801DB82C; break;
        case 29: goto L_801DB82C; break;
        case 30: goto L_801DB7B8; break;
        case 31: goto L_801DB82C; break;
        case 32: goto L_801DB82C; break;
        case 33: goto L_801DB82C; break;
        case 34: goto L_801DB82C; break;
        case 35: goto L_801DB82C; break;
        case 36: goto L_801DB82C; break;
        case 37: goto L_801DB82C; break;
        case 38: goto L_801DB82C; break;
        case 39: goto L_801DB82C; break;
        case 40: goto L_801DB7CC; break;
        case 41: goto L_801DB82C; break;
        case 42: goto L_801DB82C; break;
        case 43: goto L_801DB82C; break;
        case 44: goto L_801DB82C; break;
        case 45: goto L_801DB82C; break;
        case 46: goto L_801DB82C; break;
        case 47: goto L_801DB82C; break;
        case 48: goto L_801DB82C; break;
        case 49: goto L_801DB82C; break;
        case 50: goto L_801DB7E0; break;
        case 51: goto L_801DB82C; break;
        case 52: goto L_801DB82C; break;
        case 53: goto L_801DB82C; break;
        case 54: goto L_801DB82C; break;
        case 55: goto L_801DB82C; break;
        case 56: goto L_801DB82C; break;
        case 57: goto L_801DB82C; break;
        case 58: goto L_801DB82C; break;
        case 59: goto L_801DB82C; break;
        case 60: goto L_801DB7F4; break;
        case 61: goto L_801DB82C; break;
        case 62: goto L_801DB82C; break;
        case 63: goto L_801DB82C; break;
        case 64: goto L_801DB82C; break;
        case 65: goto L_801DB82C; break;
        case 66: goto L_801DB82C; break;
        case 67: goto L_801DB82C; break;
        case 68: goto L_801DB82C; break;
        case 69: goto L_801DB82C; break;
        case 70: goto L_801DB808; break;
        case 71: goto L_801DB82C; break;
        case 72: goto L_801DB82C; break;
        case 73: goto L_801DB82C; break;
        case 74: goto L_801DB82C; break;
        case 75: goto L_801DB82C; break;
        case 76: goto L_801DB82C; break;
        case 77: goto L_801DB82C; break;
        case 78: goto L_801DB82C; break;
        case 79: goto L_801DB82C; break;
        case 80: goto L_801DB81C; break;
        default: switch_error(__func__, 0x801DB774, 0x8020D964);
    }
    // 0x801DB778: nop

L_801DB77C:
    // 0x801DB77C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801DB780: jal         0x801DB83C
    // 0x801DB784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DB83C_606C1C(rdram, ctx);
        goto after_0;
    // 0x801DB784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801DB788: b           L_801DB830
    // 0x801DB78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB790:
    // 0x801DB790: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x801DB794: jal         0x801DB83C
    // 0x801DB798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_1;
    // 0x801DB798: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x801DB79C: b           L_801DB830
    // 0x801DB7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB7A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB7A4:
    // 0x801DB7A4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801DB7A8: jal         0x801DB83C
    // 0x801DB7AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_2;
    // 0x801DB7AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x801DB7B0: b           L_801DB830
    // 0x801DB7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB7B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB7B8:
    // 0x801DB7B8: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x801DB7BC: jal         0x801DB83C
    // 0x801DB7C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_3;
    // 0x801DB7C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x801DB7C4: b           L_801DB830
    // 0x801DB7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB7CC:
    // 0x801DB7CC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801DB7D0: jal         0x801DB83C
    // 0x801DB7D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_4;
    // 0x801DB7D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x801DB7D8: b           L_801DB830
    // 0x801DB7DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB7DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB7E0:
    // 0x801DB7E0: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x801DB7E4: jal         0x801DB83C
    // 0x801DB7E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_5;
    // 0x801DB7E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801DB7EC: b           L_801DB830
    // 0x801DB7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB7F4:
    // 0x801DB7F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801DB7F8: jal         0x801DB83C
    // 0x801DB7FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_6;
    // 0x801DB7FC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x801DB800: b           L_801DB830
    // 0x801DB804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB808:
    // 0x801DB808: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801DB80C: jal         0x801DB83C
    // 0x801DB810: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801DB83C_606C1C(rdram, ctx);
        goto after_7;
    // 0x801DB810: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_7:
    // 0x801DB814: b           L_801DB830
    // 0x801DB818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB830;
    // 0x801DB818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB81C:
    // 0x801DB81C: jal         0x80035020
    // 0x801DB820: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80035020_35C20(rdram, ctx);
        goto after_8;
    // 0x801DB820: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_8:
    // 0x801DB824: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801DB828: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
L_801DB82C:
    // 0x801DB82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB830:
    // 0x801DB830: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DB834: jr          $ra
    // 0x801DB838: nop

    TRACE_RETURN()
    return;
    // 0x801DB838: nop

;}
RECOMP_FUNC void func_801E8DF8_6141D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E8E00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E8E04: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E8E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8E0C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8E10: jal         0x801D2EE4
    // 0x801E8E14: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_0;
    // 0x801E8E14: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    after_0:
    // 0x801E8E18: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E8E1C: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E8E20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E8E28: jal         0x801D34D0
    // 0x801E8E2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E8E2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E8E30: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E8E34: jal         0x8003521C
    // 0x801E8E38: addiu       $a0, $a0, -0x71A8
    ctx->r4 = ADD32(ctx->r4, -0X71A8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E8E38: addiu       $a0, $a0, -0x71A8
    ctx->r4 = ADD32(ctx->r4, -0X71A8);
    after_2:
    // 0x801E8E3C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801E8E40: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E8E44: sw          $zero, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = 0;
    // 0x801E8E48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E8E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8E50: jr          $ra
    // 0x801E8E54: nop

    TRACE_RETURN()
    return;
    // 0x801E8E54: nop

;}
RECOMP_FUNC void func_801D0808_5FBBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0810: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D0814: jal         0x801D2C24
    // 0x801D0818: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801D2C24_5FE004(rdram, ctx);
        goto after_0;
    // 0x801D0818: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D081C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D0820: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D0824: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D0828: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801D082C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D0830: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0834: swc1        $f0, 0x178($v1)
    MEM_W(0X178, ctx->r3) = ctx->f0.u32l;
    // 0x801D0838: swc1        $f0, 0x17C($v1)
    MEM_W(0X17C, ctx->r3) = ctx->f0.u32l;
    // 0x801D083C: swc1        $f0, 0x180($v1)
    MEM_W(0X180, ctx->r3) = ctx->f0.u32l;
    // 0x801D0840: swc1        $f0, 0x184($v1)
    MEM_W(0X184, ctx->r3) = ctx->f0.u32l;
    // 0x801D0844: swc1        $f4, 0x188($v1)
    MEM_W(0X188, ctx->r3) = ctx->f4.u32l;
    // 0x801D0848: lwc1        $f6, -0x2E30($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D084C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x801D0850: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0854: addiu       $a0, $a0, 0xAA4
    ctx->r4 = ADD32(ctx->r4, 0XAA4);
    // 0x801D0858: addiu       $v1, $v1, 0x178
    ctx->r3 = ADD32(ctx->r3, 0X178);
    // 0x801D085C: sb          $t6, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r14;
    // 0x801D0860: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x801D0864: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x801D0868: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D086C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D0870: jal         0x80034DD8
    // 0x801D0874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801D0874: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801D0878: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D087C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D0880: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801D0884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0888: jal         0x80034DD8
    // 0x801D088C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801D088C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    after_2:
    // 0x801D0890: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D0894: addiu       $t7, $zero, -0x44C
    ctx->r15 = ADD32(0, -0X44C);
    // 0x801D0898: sw          $t7, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r15;
    // 0x801D089C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D08A0: addiu       $a0, $a0, 0x8BC
    ctx->r4 = ADD32(ctx->r4, 0X8BC);
    // 0x801D08A4: jal         0x8003521C
    // 0x801D08A8: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801D08A8: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    after_3:
    // 0x801D08AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D08B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D08B4: jr          $ra
    // 0x801D08B8: nop

    TRACE_RETURN()
    return;
    // 0x801D08B8: nop

;}
RECOMP_FUNC void func_801DC890_607C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DC89C: jal         0x80034ED4
    // 0x801DC8A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801DC8A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DC8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC8AC: jr          $ra
    // 0x801DC8B0: nop

    TRACE_RETURN()
    return;
    // 0x801DC8B0: nop

;}
RECOMP_FUNC void func_801D1424_5FC804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1424: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1428: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D142C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D1430: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D1434: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D1438: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D143C: addiu       $t0, $v0, 0x1B0
    ctx->r8 = ADD32(ctx->r2, 0X1B0);
    // 0x801D1440: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x801D1444: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D1448: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D144C: beq         $t6, $zero, L_801D145C
    if (ctx->r14 == 0) {
        // 0x801D1450: addiu       $v1, $v0, 0xA0
        ctx->r3 = ADD32(ctx->r2, 0XA0);
            goto L_801D145C;
    }
    // 0x801D1450: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x801D1454: b           L_801D1484
    // 0x801D1458: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
        goto L_801D1484;
    // 0x801D1458: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
L_801D145C:
    // 0x801D145C: addiu       $t7, $t7, -0x6344
    ctx->r15 = ADD32(ctx->r15, -0X6344);
    // 0x801D1460: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801D1464: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x801D1468: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x801D146C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x801D1470: swl         $t9, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r25);
    // 0x801D1474: swr         $t9, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r25);
    // 0x801D1478: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801D147C: swl         $at, 0x8($t0)
    do_swl(rdram, 0X8, ctx->r8, ctx->r1);
    // 0x801D1480: swr         $at, 0xB($t0)
    do_swr(rdram, 0XB, ctx->r8, ctx->r1);
L_801D1484:
    // 0x801D1484: lbu         $t1, 0xB($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XB);
    // 0x801D1488: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x801D148C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D1490: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x801D1494: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D1498: addiu       $t2, $s0, 0x8
    ctx->r10 = ADD32(ctx->r16, 0X8);
    // 0x801D149C: addiu       $t3, $s0, 0xC
    ctx->r11 = ADD32(ctx->r16, 0XC);
    // 0x801D14A0: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x801D14A4: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D14A8: addiu       $t4, $s0, 0x10
    ctx->r12 = ADD32(ctx->r16, 0X10);
    // 0x801D14AC: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x801D14B0: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D14B4: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x801D14B8: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x801D14BC: lw          $a2, 0x10($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X10);
    // 0x801D14C0: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D14C4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801D14C8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x801D14CC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801D14D0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801D14D4: jal         0x8000E4E4
    // 0x801D14D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801D14D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x801D14DC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x801D14E0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D14E4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D14E8: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D14EC: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D14F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D14F4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D14F8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D14FC: addiu       $a1, $a1, -0x5050
    ctx->r5 = ADD32(ctx->r5, -0X5050);
    // 0x801D1500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D1504: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x801D1508: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801D150C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1510: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D1514: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D1518: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x801D151C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D1520: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D1524: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801D1528: lbu         $t5, 0xA($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0XA);
    // 0x801D152C: bne         $t5, $zero, L_801D1564
    if (ctx->r13 != 0) {
        // 0x801D1530: nop
    
            goto L_801D1564;
    }
    // 0x801D1530: nop

    // 0x801D1534: lhu         $t6, 0x6($t0)
    ctx->r14 = MEM_HU(ctx->r8, 0X6);
    // 0x801D1538: lhu         $a2, 0x2($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X2);
    // 0x801D153C: lhu         $a3, 0x4($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X4);
    // 0x801D1540: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D1544: lhu         $t8, 0x8($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X8);
    // 0x801D1548: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D154C: addiu       $a1, $a1, -0x5D30
    ctx->r5 = ADD32(ctx->r5, -0X5D30);
    // 0x801D1550: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D1554: jal         0x8000DF10
    // 0x801D1558: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801D1558: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_1:
    // 0x801D155C: b           L_801D1598
    // 0x801D1560: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
        goto L_801D1598;
    // 0x801D1560: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_801D1564:
    // 0x801D1564: jal         0x801D33D8
    // 0x801D1568: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_801D33D8_5FE7B8(rdram, ctx);
        goto after_2;
    // 0x801D1568: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_2:
    // 0x801D156C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D1570: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D1574: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D1578: lhu         $t7, 0x8($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X8);
    // 0x801D157C: addiu       $a1, $a1, -0x5CC8
    ctx->r5 = ADD32(ctx->r5, -0X5CC8);
    // 0x801D1580: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D1584: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D158C: jal         0x8000DF10
    // 0x801D1590: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8000DF10_EB10(rdram, ctx);
        goto after_3;
    // 0x801D1590: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_3:
    // 0x801D1594: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_801D1598:
    // 0x801D1598: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801D159C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D15A0: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x801D15A4: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x801D15A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D15AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D15B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D15B4: jr          $ra
    // 0x801D15B8: nop

    TRACE_RETURN()
    return;
    // 0x801D15B8: nop

;}
RECOMP_FUNC void func_801CC06C_5F744C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC06C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC070: jr          $ra
    // 0x801CC074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801CC074: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FD1D0_6285B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD1D0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801FD1D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801FD1D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801FD1DC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801FD1E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FD1E4: jal         0x801D31F0
    // 0x801FD1E8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801FD1E8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_0:
    // 0x801FD1EC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x801FD1F0: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801FD1F4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FD1F8: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801FD1FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FD200: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FD204: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FD208: addiu       $v1, $v1, -0x10C0
    ctx->r3 = ADD32(ctx->r3, -0X10C0);
    // 0x801FD20C: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801FD210: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FD214: bc1fl       L_801FD22C
    if (!c1cs) {
        // 0x801FD218: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_801FD22C;
    }
    goto skip_0;
    // 0x801FD218: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x801FD21C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801FD220: nop

    // 0x801FD224: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x801FD228: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_801FD22C:
    // 0x801FD22C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FD230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FD234: lbu         $t6, 0x817($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X817);
    // 0x801FD238: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x801FD23C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801FD240: sb          $t7, 0x817($v0)
    MEM_B(0X817, ctx->r2) = ctx->r15;
    // 0x801FD244: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801FD248: jal         0x801E4194
    // 0x801FD24C: lbu         $a3, 0x817($t8)
    ctx->r7 = MEM_BU(ctx->r24, 0X817);
    func_801E4194_60F574(rdram, ctx);
        goto after_1;
    // 0x801FD24C: lbu         $a3, 0x817($t8)
    ctx->r7 = MEM_BU(ctx->r24, 0X817);
    after_1:
    // 0x801FD250: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x801FD254: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801FD258: bne         $t0, $zero, L_801FD2C0
    if (ctx->r8 != 0) {
        // 0x801FD25C: sw          $t0, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r8;
            goto L_801FD2C0;
    }
    // 0x801FD25C: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x801FD260: jal         0x8000DD58
    // 0x801FD264: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801FD264: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_2:
    // 0x801FD268: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801FD26C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD270: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801FD274: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x801FD278: jal         0x8000E630
    // 0x801FD27C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801FD27C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x801FD280: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FD284: lwc1        $f16, -0x1564($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1564);
    // 0x801FD288: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FD28C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801FD290: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FD294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD298: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x801FD29C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801FD2A0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x801FD2A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801FD2A8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801FD2AC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801FD2B0: jal         0x80207838
    // 0x801FD2B4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_80207838_632C18(rdram, ctx);
        goto after_4;
    // 0x801FD2B4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x801FD2B8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801FD2BC: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
L_801FD2C0:
    // 0x801FD2C0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801FD2C4: lw          $t3, -0x10C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10C0);
    // 0x801FD2C8: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x801FD2CC: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x801FD2D0: lbu         $t4, 0x817($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X817);
    // 0x801FD2D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FD2D8: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x801FD2DC: bne         $t4, $at, L_801FD2F8
    if (ctx->r12 != ctx->r1) {
        // 0x801FD2E0: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801FD2F8;
    }
    // 0x801FD2E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD2E4: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x801FD2E8: sw          $t6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r14;
    // 0x801FD2EC: sw          $t7, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r15;
    // 0x801FD2F0: jal         0x8003521C
    // 0x801FD2F4: addiu       $a0, $a0, -0x2CF4
    ctx->r4 = ADD32(ctx->r4, -0X2CF4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FD2F4: addiu       $a0, $a0, -0x2CF4
    ctx->r4 = ADD32(ctx->r4, -0X2CF4);
    after_5:
L_801FD2F8:
    // 0x801FD2F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD2FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801FD300: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801FD304: jr          $ra
    // 0x801FD308: nop

    TRACE_RETURN()
    return;
    // 0x801FD308: nop

;}
RECOMP_FUNC void func_801E6FC4_6123A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6FC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6FCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E6FD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6FD4: jal         0x801D31F0
    // 0x801E6FD8: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E6FD8: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    after_0:
    // 0x801E6FDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E6FE0: nop

    // 0x801E6FE4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E6FE8: nop

    // 0x801E6FEC: bc1fl       L_801E7000
    if (!c1cs) {
        // 0x801E6FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E7000;
    }
    goto skip_0;
    // 0x801E6FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E6FF4: jal         0x801E599C
    // 0x801E6FF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E599C_610D7C(rdram, ctx);
        goto after_1;
    // 0x801E6FF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E6FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E7000:
    // 0x801E7000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7004: jr          $ra
    // 0x801E7008: nop

    TRACE_RETURN()
    return;
    // 0x801E7008: nop

;}
RECOMP_FUNC void func_801D3FCC_5FF3AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3FCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D3FD0: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D3FD4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D3FD8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801D3FDC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801D3FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3FE4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801D3FE8: bne         $t6, $zero, L_801D3FF8
    if (ctx->r14 != 0) {
        // 0x801D3FEC: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801D3FF8;
    }
    // 0x801D3FEC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D3FF0: b           L_801D4090
    // 0x801D3FF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4090;
    // 0x801D3FF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3FF8:
    // 0x801D3FF8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D3FFC: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D4000: bne         $t7, $zero, L_801D4010
    if (ctx->r15 != 0) {
        // 0x801D4004: nop
    
            goto L_801D4010;
    }
    // 0x801D4004: nop

    // 0x801D4008: b           L_801D4090
    // 0x801D400C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4090;
    // 0x801D400C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4010:
    // 0x801D4010: bne         $a2, $zero, L_801D4020
    if (ctx->r6 != 0) {
        // 0x801D4014: nop
    
            goto L_801D4020;
    }
    // 0x801D4014: nop

    // 0x801D4018: b           L_801D4090
    // 0x801D401C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4090;
    // 0x801D401C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D4020:
    // 0x801D4020: bnel        $a3, $zero, L_801D4034
    if (ctx->r7 != 0) {
        // 0x801D4024: lw          $v0, 0x18($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X18);
            goto L_801D4034;
    }
    goto skip_0;
    // 0x801D4024: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x801D4028: b           L_801D4090
    // 0x801D402C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4090;
    // 0x801D402C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4030: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
L_801D4034:
    // 0x801D4034: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D4038: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D403C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D4040: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D4044: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801D4048: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801D404C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D4050: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801D4054: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D4058: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801D405C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D4060: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D4064: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D4068: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801D406C: jal         0x8002A7BC
    // 0x801D4070: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_8002A7BC_2B3BC(rdram, ctx);
        goto after_0;
    // 0x801D4070: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801D4074: lh          $t8, 0x54($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X54);
    // 0x801D4078: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D407C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4080: bne         $t8, $at, L_801D4090
    if (ctx->r24 != ctx->r1) {
        // 0x801D4084: nop
    
            goto L_801D4090;
    }
    // 0x801D4084: nop

    // 0x801D4088: b           L_801D4090
    // 0x801D408C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D4090;
    // 0x801D408C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D4090:
    // 0x801D4090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D4094: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D4098: jr          $ra
    // 0x801D409C: nop

    TRACE_RETURN()
    return;
    // 0x801D409C: nop

;}
RECOMP_FUNC void func_801D35B0_5FE990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D35B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D35B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D35B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801D35BC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D35C0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D35C4: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D35C8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D35CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D35D0: bne         $a0, $zero, L_801D35E0
    if (ctx->r4 != 0) {
        // 0x801D35D4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801D35E0;
    }
    // 0x801D35D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D35D8: b           L_801D35EC
    // 0x801D35DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D35EC;
    // 0x801D35DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D35E0:
    // 0x801D35E0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x801D35E4: jal         0x801D33D8
    // 0x801D35E8: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    func_801D33D8_5FE7B8(rdram, ctx);
        goto after_0;
    // 0x801D35E8: lw          $a0, 0x18($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X18);
    after_0:
L_801D35EC:
    // 0x801D35EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D35F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D35F4: jr          $ra
    // 0x801D35F8: nop

    TRACE_RETURN()
    return;
    // 0x801D35F8: nop

;}
RECOMP_FUNC void func_801FF294_62A674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF294: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FF298: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FF29C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FF2A0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FF2A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FF2A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801FF2AC: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FF2B0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FF2B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FF2B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801FF2BC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801FF2C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FF2C4: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x801FF2C8: jal         0x801D6330
    // 0x801FF2CC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    func_801D6330_601710(rdram, ctx);
        goto after_0;
    // 0x801FF2CC: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801FF2D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FF2D4: jal         0x801D3018
    // 0x801FF2D8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801FF2D8: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_1:
    // 0x801FF2DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801FF2E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FF2E4: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801FF2E8: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801FF2EC: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801FF2F0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801FF2F4: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x801FF2F8: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801FF2FC: jal         0x8000E630
    // 0x801FF300: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801FF300: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    after_2:
    // 0x801FF304: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FF308: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801FF30C: jal         0x8000E9F4
    // 0x801FF310: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_3;
    // 0x801FF310: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_3:
    // 0x801FF314: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801FF318: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FF31C: jal         0x801D3018
    // 0x801FF320: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_4;
    // 0x801FF320: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_4:
    // 0x801FF324: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801FF328: lw          $t9, 0x34($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X34);
    // 0x801FF32C: bnel        $t9, $zero, L_801FF370
    if (ctx->r25 != 0) {
        // 0x801FF330: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FF370;
    }
    goto skip_0;
    // 0x801FF330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FF334: lw          $t0, 0xE4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE4);
    // 0x801FF338: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801FF33C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x801FF340: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x801FF344: bnel        $at, $zero, L_801FF358
    if (ctx->r1 != 0) {
        // 0x801FF348: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_801FF358;
    }
    goto skip_1;
    // 0x801FF348: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    skip_1:
    // 0x801FF34C: b           L_801FF358
    // 0x801FF350: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
        goto L_801FF358;
    // 0x801FF350: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x801FF354: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
L_801FF358:
    // 0x801FF358: jal         0x801FFDFC
    // 0x801FF35C: nop

    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_5;
    // 0x801FF35C: nop

    after_5:
    // 0x801FF360: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF364: jal         0x8003521C
    // 0x801FF368: addiu       $a0, $a0, -0xC80
    ctx->r4 = ADD32(ctx->r4, -0XC80);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FF368: addiu       $a0, $a0, -0xC80
    ctx->r4 = ADD32(ctx->r4, -0XC80);
    after_6:
    // 0x801FF36C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FF370:
    // 0x801FF370: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801FF374: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801FF378: jr          $ra
    // 0x801FF37C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FF37C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801EC488_617868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EC48C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EC490: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EC494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC498: jal         0x801ECEDC
    // 0x801EC49C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801EC49C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EC4A0: bne         $v0, $zero, L_801EC608
    if (ctx->r2 != 0) {
        // 0x801EC4A4: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_801EC608;
    }
    // 0x801EC4A4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801EC4A8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801EC4AC: lwc1        $f0, 0x90($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC4B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EC4B4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801EC4B8: nop

    // 0x801EC4BC: bc1fl       L_801EC4F4
    if (!c1cs) {
        // 0x801EC4C0: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_801EC4F4;
    }
    goto skip_0;
    // 0x801EC4C0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_0:
    // 0x801EC4C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EC4C8: nop

    // 0x801EC4CC: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801EC4D0: swc1        $f4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f4.u32l;
    // 0x801EC4D4: lwc1        $f0, 0x90($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC4D8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801EC4DC: nop

    // 0x801EC4E0: bc1fl       L_801EC4F4
    if (!c1cs) {
        // 0x801EC4E4: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_801EC4F4;
    }
    goto skip_1;
    // 0x801EC4E4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x801EC4E8: swc1        $f2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f2.u32l;
    // 0x801EC4EC: lwc1        $f0, 0x90($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC4F0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_801EC4F4:
    // 0x801EC4F4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EC4F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EC4FC: bc1fl       L_801EC528
    if (!c1cs) {
        // 0x801EC500: lwc1        $f10, 0xA0($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801EC528;
    }
    goto skip_2;
    // 0x801EC500: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    skip_2:
    // 0x801EC504: add.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801EC508: swc1        $f6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f6.u32l;
    // 0x801EC50C: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC510: c.le.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl <= ctx->f8.fl;
    // 0x801EC514: nop

    // 0x801EC518: bc1fl       L_801EC528
    if (!c1cs) {
        // 0x801EC51C: lwc1        $f10, 0xA0($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801EC528;
    }
    goto skip_3;
    // 0x801EC51C: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
    skip_3:
    // 0x801EC520: swc1        $f2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f2.u32l;
    // 0x801EC524: lwc1        $f10, 0xA0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA0);
L_801EC528:
    // 0x801EC528: lwc1        $f16, 0xA8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA8);
    // 0x801EC52C: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x801EC530: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EC534: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801EC538: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x801EC53C: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801EC540: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801EC544: nop

    // 0x801EC548: bc1fl       L_801EC5AC
    if (!c1cs) {
        // 0x801EC54C: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_801EC5AC;
    }
    goto skip_4;
    // 0x801EC54C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_4:
    // 0x801EC550: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC554: swc1        $f0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f0.u32l;
    // 0x801EC558: swc1        $f12, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f12.u32l;
    // 0x801EC55C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801EC560: nop

    // 0x801EC564: bc1fl       L_801EC5AC
    if (!c1cs) {
        // 0x801EC568: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_801EC5AC;
    }
    goto skip_5;
    // 0x801EC568: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x801EC56C: jal         0x8000DD58
    // 0x801EC570: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801EC570: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x801EC574: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x801EC578: bne         $at, $zero, L_801EC590
    if (ctx->r1 != 0) {
        // 0x801EC57C: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801EC590;
    }
    // 0x801EC57C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EC580: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801EC584: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EC588: b           L_801EC5A0
    // 0x801EC58C: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
        goto L_801EC5A0;
    // 0x801EC58C: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
L_801EC590:
    // 0x801EC590: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801EC594: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801EC598: nop

    // 0x801EC59C: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
L_801EC5A0:
    // 0x801EC5A0: jal         0x8003521C
    // 0x801EC5A4: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801EC5A4: addiu       $a0, $a0, -0x39E4
    ctx->r4 = ADD32(ctx->r4, -0X39E4);
    after_2:
    // 0x801EC5A8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_801EC5AC:
    // 0x801EC5AC: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC5B0: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801EC5B4: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801EC5B8: jal         0x8000E630
    // 0x801EC5BC: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801EC5BC: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    after_3:
    // 0x801EC5C0: addiu       $t6, $zero, 0xA1
    ctx->r14 = ADD32(0, 0XA1);
    // 0x801EC5C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EC5C8: lwc1        $f16, 0xA0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801EC5CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EC5D0: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801EC5D4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801EC5D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC5DC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x801EC5E0: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    // 0x801EC5E4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801EC5E8: jal         0x8000DF10
    // 0x801EC5EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_4;
    // 0x801EC5EC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_4:
    // 0x801EC5F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EC5F4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801EC5F8: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801EC5FC: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EC600: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801EC604: sw          $t0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r8;
L_801EC608:
    // 0x801EC608: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EC60C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EC610: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EC614: jr          $ra
    // 0x801EC618: nop

    TRACE_RETURN()
    return;
    // 0x801EC618: nop

;}
RECOMP_FUNC void func_801F3634_61EA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F363C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801F3640: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801F3644: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x801F3648: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F364C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F3650: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F3654: bne         $t7, $zero, L_801F366C
    if (ctx->r15 != 0) {
        // 0x801F3658: sw          $t7, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->r15;
            goto L_801F366C;
    }
    // 0x801F3658: sw          $t7, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r15;
    // 0x801F365C: jal         0x801F0540
    // 0x801F3660: nop

    func_801F0540_61B920(rdram, ctx);
        goto after_0;
    // 0x801F3660: nop

    after_0:
    // 0x801F3664: b           L_801F3704
    // 0x801F3668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F3704;
    // 0x801F3668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F366C:
    // 0x801F366C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F3670: jal         0x801D3018
    // 0x801F3674: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801F3674: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x801F3678: jal         0x801F76D0
    // 0x801F367C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_2;
    // 0x801F367C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F3680: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3684: lwc1        $f12, 0x8($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801F3688: lwc1        $f14, 0x10($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F368C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F3690: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F3694: jal         0x8000E28C
    // 0x801F3698: nop

    func_8000E28C_EE8C(rdram, ctx);
        goto after_3;
    // 0x801F3698: nop

    after_3:
    // 0x801F369C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801F36A0: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x801F36A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F36A8: sw          $v0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r2;
    // 0x801F36AC: sw          $t9, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r25;
    // 0x801F36B0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F36B4: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801F36B8: jal         0x8000E630
    // 0x801F36BC: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_4;
    // 0x801F36BC: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x801F36C0: jal         0x8000DDC0
    // 0x801F36C4: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_5;
    // 0x801F36C4: nop

    after_5:
    // 0x801F36C8: beq         $v0, $zero, L_801F36DC
    if (ctx->r2 == 0) {
        // 0x801F36CC: addiu       $t1, $zero, 0x3FE
        ctx->r9 = ADD32(0, 0X3FE);
            goto L_801F36DC;
    }
    // 0x801F36CC: addiu       $t1, $zero, 0x3FE
    ctx->r9 = ADD32(0, 0X3FE);
    // 0x801F36D0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801F36D4: b           L_801F36E0
    // 0x801F36D8: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
        goto L_801F36E0;
    // 0x801F36D8: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
L_801F36DC:
    // 0x801F36DC: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
L_801F36E0:
    // 0x801F36E0: jal         0x8000DD58
    // 0x801F36E4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801F36E4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_6:
    // 0x801F36E8: addiu       $t2, $v0, 0x50
    ctx->r10 = ADD32(ctx->r2, 0X50);
    // 0x801F36EC: jal         0x801F703C
    // 0x801F36F0: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
    func_801F703C_62241C(rdram, ctx);
        goto after_7;
    // 0x801F36F0: sw          $t2, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r10;
    after_7:
    // 0x801F36F4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F36F8: jal         0x8003521C
    // 0x801F36FC: addiu       $a0, $a0, 0x3714
    ctx->r4 = ADD32(ctx->r4, 0X3714);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F36FC: addiu       $a0, $a0, 0x3714
    ctx->r4 = ADD32(ctx->r4, 0X3714);
    after_8:
    // 0x801F3700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F3704:
    // 0x801F3704: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801F3708: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801F370C: jr          $ra
    // 0x801F3710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801F3710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802027BC_62DB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802027BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802027C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802027C4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802027C8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x802027CC: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x802027D0: addiu       $a2, $a2, 0x37C0
    ctx->r6 = ADD32(ctx->r6, 0X37C0);
    // 0x802027D4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802027D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802027DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802027E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802027E4: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x802027E8: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802027EC: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x802027F0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802027F4: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x802027F8: addiu       $a3, $a3, -0x5430
    ctx->r7 = ADD32(ctx->r7, -0X5430);
    // 0x802027FC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80202800: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80202804: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80202808: addiu       $a1, $a1, 0x2904
    ctx->r5 = ADD32(ctx->r5, 0X2904);
    // 0x8020280C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80202810: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80202814: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80202818: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x8020281C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80202820: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80202824: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80202828: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x8020282C: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80202830: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80202834: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80202838: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8020283C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80202840: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    // 0x80202844: jal         0x800358E8
    // 0x80202848: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80202848: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8020284C: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x80202850: beq         $v0, $zero, L_802028F0
    if (ctx->r2 == 0) {
        // 0x80202854: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802028F0;
    }
    // 0x80202854: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80202858: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x8020285C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80202860: addiu       $t1, $zero, 0x9A
    ctx->r9 = ADD32(0, 0X9A);
    // 0x80202864: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80202868: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x8020286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202870: lui         $a2, 0x432E
    ctx->r6 = S32(0X432E << 16);
    // 0x80202874: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x80202878: sh          $t1, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r9;
    // 0x8020287C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80202880: lui         $a3, 0xC210
    ctx->r7 = S32(0XC210 << 16);
    // 0x80202884: jal         0x80203F5C
    // 0x80202888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80202888: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8020288C: jal         0x80203F88
    // 0x80202890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80202894: jal         0x80202D7C
    // 0x80202898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80202D7C_62E15C(rdram, ctx);
        goto after_3;
    // 0x80202898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8020289C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802028A0: jal         0x802032E8
    // 0x802028A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802032E8_62E6C8(rdram, ctx);
        goto after_4;
    // 0x802028A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x802028A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802028AC: jal         0x802032E8
    // 0x802028B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_802032E8_62E6C8(rdram, ctx);
        goto after_5;
    // 0x802028B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x802028B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802028B8: jal         0x802032E8
    // 0x802028BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_802032E8_62E6C8(rdram, ctx);
        goto after_6;
    // 0x802028BC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x802028C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802028C4: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    // 0x802028C8: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x802028CC: lui         $a3, 0xC3E1
    ctx->r7 = S32(0XC3E1 << 16);
    // 0x802028D0: jal         0x802046F0
    // 0x802028D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802046F0_62FAD0(rdram, ctx);
        goto after_7;
    // 0x802028D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x802028D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802028DC: lui         $a1, 0xC250
    ctx->r5 = S32(0XC250 << 16);
    // 0x802028E0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x802028E4: lui         $a3, 0xC3C8
    ctx->r7 = S32(0XC3C8 << 16);
    // 0x802028E8: jal         0x802046F0
    // 0x802028EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802046F0_62FAD0(rdram, ctx);
        goto after_8;
    // 0x802028EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
L_802028F0:
    // 0x802028F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802028F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x802028F8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802028FC: jr          $ra
    // 0x80202900: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80202900: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801DAEC8_6062A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAEC8: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x801DAECC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DAED0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801DAED4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DAED8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DAEDC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DAEE0: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801DAEE4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x801DAEE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DAEEC: lhu         $t0, -0x4F84($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X4F84);
    // 0x801DAEF0: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x801DAEF4: beq         $t1, $zero, L_801DAF08
    if (ctx->r9 == 0) {
        // 0x801DAEF8: nop
    
            goto L_801DAF08;
    }
    // 0x801DAEF8: nop

    // 0x801DAEFC: lw          $t2, 0xA0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0XA0);
    // 0x801DAF00: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801DAF04: sw          $t3, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r11;
L_801DAF08:
    // 0x801DAF08: jr          $ra
    // 0x801DAF0C: nop

    TRACE_RETURN()
    return;
    // 0x801DAF0C: nop

;}
RECOMP_FUNC void func_801D61D4_6015B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D61D4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D61D8: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801D61DC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D61E0: jr          $ra
    // 0x801D61E4: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801D61E4: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_801FE0C4_6294A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE0C4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE0C8: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FE0CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FE0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FE0D4: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FE0D8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801FE0DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FE0E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FE0E4: lwc1        $f6, 0x94($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801FE0E8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801FE0EC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801FE0F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801FE0F4: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801FE0F8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FE0FC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801FE100: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801FE104: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x801FE108: nop

    // 0x801FE10C: bc1fl       L_801FE148
    if (!c1cs) {
        // 0x801FE110: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801FE148;
    }
    goto skip_0;
    // 0x801FE110: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_0:
    // 0x801FE114: lw          $t8, 0xE4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XE4);
    // 0x801FE118: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x801FE11C: beql        $at, $zero, L_801FE148
    if (ctx->r1 == 0) {
        // 0x801FE120: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801FE148;
    }
    goto skip_1;
    // 0x801FE120: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_1:
    // 0x801FE124: lw          $t9, 0x174($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X174);
    // 0x801FE128: bnel        $t9, $zero, L_801FE148
    if (ctx->r25 != 0) {
        // 0x801FE12C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801FE148;
    }
    goto skip_2;
    // 0x801FE12C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    skip_2:
    // 0x801FE130: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FE134: jal         0x801FFDFC
    // 0x801FE138: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_0;
    // 0x801FE138: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE13C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801FE140: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801FE144: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
L_801FE148:
    // 0x801FE148: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801FE14C: jal         0x801D5B70
    // 0x801FE150: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801D5B70_600F50(rdram, ctx);
        goto after_1;
    // 0x801FE150: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x801FE154: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801FE158: jal         0x801D2F40
    // 0x801FE15C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801FE15C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_2:
    // 0x801FE160: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FE164: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801FE168: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE16C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x801FE170: nop

    // 0x801FE174: bc1fl       L_801FE1DC
    if (!c1cs) {
        // 0x801FE178: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FE1DC;
    }
    goto skip_3;
    // 0x801FE178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x801FE17C: lw          $t1, 0x34($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X34);
    // 0x801FE180: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE184: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x801FE188: bne         $a2, $t1, L_801FE1A0
    if (ctx->r6 != ctx->r9) {
        // 0x801FE18C: addiu       $a0, $a0, -0x174C
        ctx->r4 = ADD32(ctx->r4, -0X174C);
            goto L_801FE1A0;
    }
    // 0x801FE18C: addiu       $a0, $a0, -0x174C
    ctx->r4 = ADD32(ctx->r4, -0X174C);
    // 0x801FE190: jal         0x8003521C
    // 0x801FE194: sw          $t2, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FE194: sw          $t2, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = ctx->r10;
    after_3:
    // 0x801FE198: b           L_801FE1DC
    // 0x801FE19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FE1DC;
    // 0x801FE19C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE1A0:
    // 0x801FE1A0: lw          $t3, 0xE4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XE4);
    // 0x801FE1A4: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x801FE1A8: bne         $at, $zero, L_801FE1D0
    if (ctx->r1 != 0) {
        // 0x801FE1AC: nop
    
            goto L_801FE1D0;
    }
    // 0x801FE1AC: nop

    // 0x801FE1B0: sw          $zero, 0xE4($a2)
    MEM_W(0XE4, ctx->r6) = 0;
    // 0x801FE1B4: jal         0x801FFE34
    // 0x801FE1B8: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    func_801FFE34_62B214(rdram, ctx);
        goto after_4;
    // 0x801FE1B8: sw          $zero, 0xE0($a2)
    MEM_W(0XE0, ctx->r6) = 0;
    after_4:
    // 0x801FE1BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE1C0: jal         0x8003521C
    // 0x801FE1C4: addiu       $a0, $a0, -0x8D0
    ctx->r4 = ADD32(ctx->r4, -0X8D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FE1C4: addiu       $a0, $a0, -0x8D0
    ctx->r4 = ADD32(ctx->r4, -0X8D0);
    after_5:
    // 0x801FE1C8: b           L_801FE1DC
    // 0x801FE1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801FE1DC;
    // 0x801FE1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE1D0:
    // 0x801FE1D0: jal         0x801FC3FC
    // 0x801FE1D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_6;
    // 0x801FE1D4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x801FE1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FE1DC:
    // 0x801FE1DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FE1E0: jr          $ra
    // 0x801FE1E4: nop

    TRACE_RETURN()
    return;
    // 0x801FE1E4: nop

;}
RECOMP_FUNC void func_801E4C98_610078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4CA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E4CA4: jal         0x801EF280
    // 0x801E4CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF280_61A660(rdram, ctx);
        goto after_0;
    // 0x801E4CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E4CAC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801E4CB0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4CB4: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E4CB8: sw          $zero, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = 0;
    // 0x801E4CBC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4CC4: jal         0x801D34D0
    // 0x801E4CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_1;
    // 0x801E4CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x801E4CCC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4CD0: jal         0x8003521C
    // 0x801E4CD4: addiu       $a0, $a0, 0x4CE8
    ctx->r4 = ADD32(ctx->r4, 0X4CE8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E4CD4: addiu       $a0, $a0, 0x4CE8
    ctx->r4 = ADD32(ctx->r4, 0X4CE8);
    after_2:
    // 0x801E4CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4CE0: jr          $ra
    // 0x801E4CE4: nop

    TRACE_RETURN()
    return;
    // 0x801E4CE4: nop

;}
