#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801DC7DC_607BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC7DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC7E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DC7E8: jal         0x801D614C
    // 0x801DC7EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801DC7EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DC7F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DC7F4: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801DC7F8: slti        $v1, $v0, 0x4
    ctx->r3 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x801DC7FC: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801DC800: bne         $v1, $zero, L_801DC83C
    if (ctx->r3 != 0) {
        // 0x801DC804: sw          $t6, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r14;
            goto L_801DC83C;
    }
    // 0x801DC804: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x801DC808: lwc1        $f4, 0x70($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801DC80C: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801DC810: lwc1        $f16, 0x78($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801DC814: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801DC818: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x801DC81C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801DC820: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x801DC824: swc1        $f10, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f10.u32l;
    // 0x801DC828: jal         0x801DCB5C
    // 0x801DC82C: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    func_801DCB5C_607F3C(rdram, ctx);
        goto after_1;
    // 0x801DC82C: swc1        $f18, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f18.u32l;
    after_1:
    // 0x801DC830: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC834: jal         0x8003521C
    // 0x801DC838: addiu       $a0, $a0, -0x37B4
    ctx->r4 = ADD32(ctx->r4, -0X37B4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801DC838: addiu       $a0, $a0, -0x37B4
    ctx->r4 = ADD32(ctx->r4, -0X37B4);
    after_2:
L_801DC83C:
    // 0x801DC83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC844: jr          $ra
    // 0x801DC848: nop

    TRACE_RETURN()
    return;
    // 0x801DC848: nop

;}
RECOMP_FUNC void func_801E2DD8_60E1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2DD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E2DDC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E2DE0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2DE8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E2DEC: bne         $a1, $zero, L_801E2E04
    if (ctx->r5 != 0) {
        // 0x801E2DF0: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E2E04;
    }
    // 0x801E2DF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2DF4: jal         0x80034ED4
    // 0x801E2DF8: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2DF8: nop

    after_0:
    // 0x801E2DFC: b           L_801E2EE8
    // 0x801E2E00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E2EE8;
    // 0x801E2E00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2E04:
    // 0x801E2E04: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x801E2E08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2E0C: lwc1        $f6, 0x94($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X94);
    // 0x801E2E10: lwc1        $f10, 0x28($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E2E14: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E2E18: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E2E1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2E20: lw          $t6, 0xA0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XA0);
    // 0x801E2E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2E28: sb          $t6, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r14;
    // 0x801E2E2C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E2E30: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801E2E34: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E2E38: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801E2E3C: nop

    // 0x801E2E40: bgezl       $v0, L_801E2E50
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E2E44: lw          $t8, 0x98($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X98);
            goto L_801E2E50;
    }
    goto skip_0;
    // 0x801E2E44: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    skip_0:
    // 0x801E2E48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E2E4C: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
L_801E2E50:
    // 0x801E2E50: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x801E2E54: lw          $a2, 0x90($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X90);
    // 0x801E2E58: lw          $a3, 0x94($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X94);
    // 0x801E2E5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E2E60: jal         0x8000DF10
    // 0x801E2E64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E2E64: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x801E2E68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2E6C: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801E2E70: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E2E74: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801E2E78: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x801E2E7C: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
    // 0x801E2E80: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801E2E84: jal         0x801D6508
    // 0x801E2E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801E2E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E2E8C: jal         0x801D60E4
    // 0x801E2E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_3;
    // 0x801E2E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E2E94: lw          $t1, 0xA4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XA4);
    // 0x801E2E98: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E2E9C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2EA0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801E2EA4: bgez        $t1, L_801E2EB8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801E2EA8: cvt.s.w     $f8, $f8
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801E2EB8;
    }
    // 0x801E2EA8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801E2EAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2EB0: nop

    // 0x801E2EB4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801E2EB8:
    // 0x801E2EB8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801E2EBC: jal         0x801D2F40
    // 0x801E2EC0: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_4;
    // 0x801E2EC0: nop

    after_4:
    // 0x801E2EC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E2EC8: nop

    // 0x801E2ECC: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x801E2ED0: nop

    // 0x801E2ED4: bc1fl       L_801E2EE8
    if (!c1cs) {
        // 0x801E2ED8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E2EE8;
    }
    goto skip_1;
    // 0x801E2ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801E2EDC: jal         0x80034ED4
    // 0x801E2EE0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801E2EE0: nop

    after_5:
    // 0x801E2EE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2EE8:
    // 0x801E2EE8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2EEC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E2EF0: jr          $ra
    // 0x801E2EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E2EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E9E10_6151F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E9E14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E9E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E9E1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E9E20: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801E9E24: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9E28: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E9E2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E9E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9E34: jal         0x801D34D0
    // 0x801E9E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_0;
    // 0x801E9E38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x801E9E3C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9E40: addiu       $a1, $a1, -0x4E78
    ctx->r5 = ADD32(ctx->r5, -0X4E78);
    // 0x801E9E44: jal         0x801D2EE4
    // 0x801E9E48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E9E48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801E9E4C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9E50: jal         0x8003521C
    // 0x801E9E54: addiu       $a0, $a0, -0x6198
    ctx->r4 = ADD32(ctx->r4, -0X6198);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E9E54: addiu       $a0, $a0, -0x6198
    ctx->r4 = ADD32(ctx->r4, -0X6198);
    after_2:
    // 0x801E9E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E9E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E9E60: jr          $ra
    // 0x801E9E64: nop

    TRACE_RETURN()
    return;
    // 0x801E9E64: nop

;}
RECOMP_FUNC void func_801EAF84_616364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EAF84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EAF88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EAF8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801EAF90: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801EAF94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EAF98: ldc1        $f0, -0x1E98($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X1E98);
    // 0x801EAF9C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EAFA0: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801EAFA4: add.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d + ctx->f0.d;
    // 0x801EAFA8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EAFAC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EAFB0: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801EAFB4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EAFB8: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801EAFBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EAFC0: add.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d + ctx->f0.d;
    // 0x801EAFC4: swc1        $f10, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f10.u32l;
    // 0x801EAFC8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801EAFCC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801EAFD0: add.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d + ctx->f0.d;
    // 0x801EAFD4: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x801EAFD8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801EAFDC: swc1        $f18, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f18.u32l;
    // 0x801EAFE0: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x801EAFE4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EAFE8: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801EAFEC: addiu       $v0, $t6, -0xF
    ctx->r2 = ADD32(ctx->r14, -0XF);
    // 0x801EAFF0: bgtz        $v0, L_801EB008
    if (SIGNED(ctx->r2) > 0) {
        // 0x801EAFF4: sw          $v0, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->r2;
            goto L_801EB008;
    }
    // 0x801EAFF4: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x801EAFF8: jal         0x80034ED4
    // 0x801EAFFC: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801EAFFC: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    after_0:
    // 0x801EB000: b           L_801EB02C
    // 0x801EB004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EB02C;
    // 0x801EB004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EB008:
    // 0x801EB008: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EB00C: jal         0x8000DF10
    // 0x801EB010: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801EB010: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x801EB014: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EB018: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801EB01C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EB020: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801EB024: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    // 0x801EB028: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EB02C:
    // 0x801EB02C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801EB030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EB034: jr          $ra
    // 0x801EB038: nop

    TRACE_RETURN()
    return;
    // 0x801EB038: nop

;}
RECOMP_FUNC void func_801F9AE0_624EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9AE0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F9AE4: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x801F9AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9AEC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F9AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9AF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9AFC: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x801F9B00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F9B04: lwc1        $f4, 0xA0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801F9B08: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F9B0C: ldc1        $f8, -0x1750($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1750);
    // 0x801F9B10: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F9B14: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801F9B18: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x801F9B1C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801F9B20: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F9B24: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x801F9B28: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801F9B2C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x801F9B30: nop

    // 0x801F9B34: bc1fl       L_801F9B68
    if (!c1cs) {
        // 0x801F9B38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F9B68;
    }
    goto skip_0;
    // 0x801F9B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F9B3C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801F9B40: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801F9B44: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x801F9B48: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x801F9B4C: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801F9B50: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    // 0x801F9B54: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x801F9B58: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9B5C: jal         0x8003521C
    // 0x801F9B60: addiu       $a0, $a0, -0x648C
    ctx->r4 = ADD32(ctx->r4, -0X648C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F9B60: addiu       $a0, $a0, -0x648C
    ctx->r4 = ADD32(ctx->r4, -0X648C);
    after_0:
    // 0x801F9B64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9B68:
    // 0x801F9B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9B6C: jr          $ra
    // 0x801F9B70: nop

    TRACE_RETURN()
    return;
    // 0x801F9B70: nop

;}
RECOMP_FUNC void func_801E7134_612514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E713C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E7140: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801E7144: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7148: ldc1        $f8, -0x1F28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1F28);
    // 0x801E714C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E7150: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E7154: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E7158: swc1        $f16, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f16.u32l;
    // 0x801E715C: jal         0x801D603C
    // 0x801E7160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D603C_60141C(rdram, ctx);
        goto after_0;
    // 0x801E7160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E7164: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7168: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801E716C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E7170: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E7174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E7178: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801E717C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801E7180: nop

    // 0x801E7184: bc1fl       L_801E71DC
    if (!c1cs) {
        // 0x801E7188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E71DC;
    }
    goto skip_0;
    // 0x801E7188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E718C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E7190: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E7194: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
    // 0x801E7198: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E719C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801E71A0: swc1        $f6, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f6.u32l;
    // 0x801E71A4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E71A8: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x801E71AC: addiu       $t7, $zero, -0x190
    ctx->r15 = ADD32(0, -0X190);
    // 0x801E71B0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801E71B4: nop

    // 0x801E71B8: bc1fl       L_801E71CC
    if (!c1cs) {
        // 0x801E71BC: sw          $t7, 0x98($a0)
        MEM_W(0X98, ctx->r4) = ctx->r15;
            goto L_801E71CC;
    }
    goto skip_1;
    // 0x801E71BC: sw          $t7, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r15;
    skip_1:
    // 0x801E71C0: b           L_801E71CC
    // 0x801E71C4: sw          $t6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r14;
        goto L_801E71CC;
    // 0x801E71C4: sw          $t6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r14;
    // 0x801E71C8: sw          $t7, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r15;
L_801E71CC:
    // 0x801E71CC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E71D0: jal         0x8003521C
    // 0x801E71D4: addiu       $a0, $a0, 0x71E8
    ctx->r4 = ADD32(ctx->r4, 0X71E8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E71D4: addiu       $a0, $a0, 0x71E8
    ctx->r4 = ADD32(ctx->r4, 0X71E8);
    after_1:
    // 0x801E71D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E71DC:
    // 0x801E71DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E71E0: jr          $ra
    // 0x801E71E4: nop

    TRACE_RETURN()
    return;
    // 0x801E71E4: nop

;}
RECOMP_FUNC void func_801F7034_622414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7034: jr          $ra
    // 0x801F7038: nop

    TRACE_RETURN()
    return;
    // 0x801F7038: nop

;}
RECOMP_FUNC void func_801ED9E8_618DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED9E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801ED9EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801ED9F0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801ED9F4: addiu       $s0, $s0, -0x1130
    ctx->r16 = ADD32(ctx->r16, -0X1130);
    // 0x801ED9F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801ED9FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EDA00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EDA04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801EDA08: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801EDA0C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801EDA10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EDA14: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x801EDA18: swc1        $f0, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f0.u32l;
    // 0x801EDA1C: swc1        $f0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f0.u32l;
    // 0x801EDA20: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x801EDA24: swc1        $f0, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f0.u32l;
    // 0x801EDA28: swc1        $f4, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->f4.u32l;
    // 0x801EDA2C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA30: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801EDA34: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801EDA38: sw          $t6, 0x1EC($t7)
    MEM_W(0X1EC, ctx->r15) = ctx->r14;
    // 0x801EDA3C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA40: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x801EDA44: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x801EDA48: sw          $t8, 0x1F4($t9)
    MEM_W(0X1F4, ctx->r25) = ctx->r24;
    // 0x801EDA4C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA50: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801EDA54: sw          $t0, 0x1F0($t1)
    MEM_W(0X1F0, ctx->r9) = ctx->r8;
    // 0x801EDA58: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA5C: jal         0x8003D428
    // 0x801EDA60: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x801EDA60: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    after_0:
    // 0x801EDA64: jal         0x8000C838
    // 0x801EDA68: nop

    func_8000C838_D438(rdram, ctx);
        goto after_1;
    // 0x801EDA68: nop

    after_1:
    // 0x801EDA6C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA70: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801EDA74: addiu       $a1, $a1, 0x4BF4
    ctx->r5 = ADD32(ctx->r5, 0X4BF4);
    // 0x801EDA78: sb          $zero, 0x2C1($t4)
    MEM_B(0X2C1, ctx->r12) = 0;
    // 0x801EDA7C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA80: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x801EDA84: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA88: sb          $zero, 0x2C3($t6)
    MEM_B(0X2C3, ctx->r14) = 0;
    // 0x801EDA8C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801EDA90: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EDA94: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x801EDA98: jal         0x8003522C
    // 0x801EDA9C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801EDA9C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_2:
    // 0x801EDAA0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801EDAA4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EDAA8: addiu       $a1, $a1, -0x4E90
    ctx->r5 = ADD32(ctx->r5, -0X4E90);
    // 0x801EDAAC: jal         0x801D31CC
    // 0x801EDAB0: lw          $a0, 0x1D8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1D8);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801EDAB0: lw          $a0, 0x1D8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1D8);
    after_3:
    // 0x801EDAB4: lui         $at, 0xC2D4
    ctx->r1 = S32(0XC2D4 << 16);
    // 0x801EDAB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EDABC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x801EDAC0: jal         0x80034ED4
    // 0x801EDAC4: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x801EDAC4: swc1        $f6, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f6.u32l;
    after_4:
    // 0x801EDAC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EDACC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EDAD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EDAD4: jr          $ra
    // 0x801EDAD8: nop

    TRACE_RETURN()
    return;
    // 0x801EDAD8: nop

;}
RECOMP_FUNC void func_80201B38_62CF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201B38: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80201B3C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80201B40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80201B44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80201B48: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x80201B4C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80201B50: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80201B54: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80201B58: lw          $t8, 0x80($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X80);
    // 0x80201B5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80201B60: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80201B64: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80201B68: bne         $t9, $zero, L_80201BE4
    if (ctx->r25 != 0) {
        // 0x80201B6C: sw          $t9, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r25;
            goto L_80201BE4;
    }
    // 0x80201B6C: sw          $t9, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r25;
    // 0x80201B70: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80201B74: sw          $t1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r9;
    // 0x80201B78: jal         0x8000DD58
    // 0x80201B7C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80201B7C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_0:
    // 0x80201B80: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80201B84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80201B88: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80201B8C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80201B90: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80201B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201B98: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x80201B9C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80201BA0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80201BA4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80201BA8: jal         0x801E1958
    // 0x80201BAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_1;
    // 0x80201BAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80201BB0: beq         $v0, $zero, L_80201BE4
    if (ctx->r2 == 0) {
        // 0x80201BB4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80201BE4;
    }
    // 0x80201BB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80201BB8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80201BBC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80201BC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201BC4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x80201BC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80201BCC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80201BD0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80201BD4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80201BD8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80201BDC: jal         0x801D5F34
    // 0x80201BE0: nop

    func_801D5F34_601314(rdram, ctx);
        goto after_2;
    // 0x80201BE0: nop

    after_2:
L_80201BE4:
    // 0x80201BE4: lw          $t3, 0x7C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X7C);
    // 0x80201BE8: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80201BEC: bgtz        $t4, L_80201C68
    if (SIGNED(ctx->r12) > 0) {
        // 0x80201BF0: sw          $t4, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r12;
            goto L_80201C68;
    }
    // 0x80201BF0: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x80201BF4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80201BF8: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80201BFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80201C00: lbu         $t7, 0xE($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XE);
    // 0x80201C04: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80201C08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80201C0C: bnel        $t7, $zero, L_80201C6C
    if (ctx->r15 != 0) {
        // 0x80201C10: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80201C6C;
    }
    goto skip_0;
    // 0x80201C10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80201C14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80201C18: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80201C1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80201C20: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x80201C24: sh          $zero, 0x16($s1)
    MEM_H(0X16, ctx->r17) = 0;
    // 0x80201C28: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x80201C2C: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x80201C30: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x80201C34: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x80201C38: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x80201C3C: addiu       $a0, $a0, 0x1C7C
    ctx->r4 = ADD32(ctx->r4, 0X1C7C);
    // 0x80201C40: jal         0x8003521C
    // 0x80201C44: sb          $t8, 0x2C4($t9)
    MEM_B(0X2C4, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80201C44: sb          $t8, 0x2C4($t9)
    MEM_B(0X2C4, ctx->r25) = ctx->r24;
    after_3:
    // 0x80201C48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201C4C: jal         0x80037C9C
    // 0x80201C50: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_80037C9C_3889C(rdram, ctx);
        goto after_4;
    // 0x80201C50: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_4:
    // 0x80201C54: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x80201C58: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80201C5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80201C60: jal         0x80037C20
    // 0x80201C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_5;
    // 0x80201C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80201C68:
    // 0x80201C68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80201C6C:
    // 0x80201C6C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80201C70: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80201C74: jr          $ra
    // 0x80201C78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80201C78: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801CB460_5F6840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CB464: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CB468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB46C: addiu       $t6, $t6, -0x65B0
    ctx->r14 = ADD32(ctx->r14, -0X65B0);
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
RECOMP_FUNC void func_801E7C50_613030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E7C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E7C58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E7C5C: jal         0x801EF268
    // 0x801E7C60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF268_61A648(rdram, ctx);
        goto after_0;
    // 0x801E7C60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E7C64: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7C68: addiu       $a1, $a1, -0x4E50
    ctx->r5 = ADD32(ctx->r5, -0X4E50);
    // 0x801E7C6C: jal         0x801D31CC
    // 0x801E7C70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E7C70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E7C74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E7C78: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E7C7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E7C80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E7C84: jal         0x801D34D0
    // 0x801E7C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E7C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E7C8C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7C90: jal         0x8003521C
    // 0x801E7C94: addiu       $a0, $a0, 0x7CA8
    ctx->r4 = ADD32(ctx->r4, 0X7CA8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E7C94: addiu       $a0, $a0, 0x7CA8
    ctx->r4 = ADD32(ctx->r4, 0X7CA8);
    after_3:
    // 0x801E7C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E7C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E7CA0: jr          $ra
    // 0x801E7CA4: nop

    TRACE_RETURN()
    return;
    // 0x801E7CA4: nop

;}
RECOMP_FUNC void func_801E33A4_60E784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E33A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E33A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E33AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E33B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E33B4: addiu       $a0, $a0, 0x341C
    ctx->r4 = ADD32(ctx->r4, 0X341C);
    // 0x801E33B8: jal         0x80034DD8
    // 0x801E33BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801E33BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801E33C0: beq         $v0, $zero, L_801E33E4
    if (ctx->r2 == 0) {
        // 0x801E33C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E33E4;
    }
    // 0x801E33C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E33C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E33CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E33D0: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x801E33D4: sw          $v0, -0x10FC($at)
    MEM_W(-0X10FC, ctx->r1) = ctx->r2;
    // 0x801E33D8: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x801E33DC: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    // 0x801E33E0: sw          $t6, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r14;
L_801E33E4:
    // 0x801E33E4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E33E8: addiu       $a0, $a0, 0x3F78
    ctx->r4 = ADD32(ctx->r4, 0X3F78);
    // 0x801E33EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E33F0: jal         0x80034DD8
    // 0x801E33F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801E33F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801E33F8: beq         $v0, $zero, L_801E3408
    if (ctx->r2 == 0) {
        // 0x801E33FC: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_801E3408;
    }
    // 0x801E33FC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3400: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E3404: sw          $v0, -0x10F8($at)
    MEM_W(-0X10F8, ctx->r1) = ctx->r2;
L_801E3408:
    // 0x801E3408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E340C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E3410: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E3414: jr          $ra
    // 0x801E3418: nop

    TRACE_RETURN()
    return;
    // 0x801E3418: nop

;}
RECOMP_FUNC void func_801D4C58_600038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4C58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D4C5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D4C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D4C68: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D4C6C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801D4C70: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801D4C74: jal         0x80003EA0
    // 0x801D4C78: lhu         $a0, 0x16($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_0;
    // 0x801D4C78: lhu         $a0, 0x16($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X16);
    after_0:
    // 0x801D4C7C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D4C80: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D4C84: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D4C88: jal         0x80003E10
    // 0x801D4C8C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801D4C8C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_1:
    // 0x801D4C90: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D4C94: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801D4C98: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D4C9C: jal         0x80003E10
    // 0x801D4CA0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    func_80003E10_4A10(rdram, ctx);
        goto after_2;
    // 0x801D4CA0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_2:
    // 0x801D4CA4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D4CA8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D4CAC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801D4CB0: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D4CB4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D4CB8: jal         0x80003EA0
    // 0x801D4CBC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_3;
    // 0x801D4CBC: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    after_3:
    // 0x801D4CC0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D4CC4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801D4CC8: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x801D4CCC: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801D4CD0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4CD4: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801D4CD8: jal         0x801D4BF4
    // 0x801D4CDC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_4;
    // 0x801D4CDC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x801D4CE0: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x801D4CE4: jal         0x801D4BF4
    // 0x801D4CE8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_5;
    // 0x801D4CE8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_5:
    // 0x801D4CEC: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x801D4CF0: jal         0x801D4BF4
    // 0x801D4CF4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_6;
    // 0x801D4CF4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x801D4CF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D4CFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D4D00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D4D04: jr          $ra
    // 0x801D4D08: nop

    TRACE_RETURN()
    return;
    // 0x801D4D08: nop

;}
RECOMP_FUNC void func_801DC73C_607B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC73C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801DC740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DC744: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801DC748: lhu         $a2, 0x96($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X96);
    // 0x801DC74C: lhu         $a1, 0x92($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X92);
    // 0x801DC750: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801DC754: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DC758: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x801DC75C: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x801DC760: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DC764: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DC768: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801DC76C: jal         0x8000E68C
    // 0x801DC770: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801DC770: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x801DC774: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x801DC778: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DC77C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801DC780: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DC784: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x801DC788: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801DC78C: jal         0x8000E39C
    // 0x801DC790: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801DC790: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x801DC794: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801DC798: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801DC79C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801DC7A0: jal         0x8000EB50
    // 0x801DC7A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    func_8000EB50_F750(rdram, ctx);
        goto after_2;
    // 0x801DC7A4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x801DC7A8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x801DC7AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DC7B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DC7B4: sw          $zero, 0x7C($t9)
    MEM_W(0X7C, ctx->r25) = 0;
    // 0x801DC7B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801DC7BC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DC7C0: addiu       $a0, $a0, -0x3824
    ctx->r4 = ADD32(ctx->r4, -0X3824);
    // 0x801DC7C4: jal         0x8003521C
    // 0x801DC7C8: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801DC7C8: swc1        $f4, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f4.u32l;
    after_3:
    // 0x801DC7CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DC7D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801DC7D4: jr          $ra
    // 0x801DC7D8: nop

    TRACE_RETURN()
    return;
    // 0x801DC7D8: nop

;}
RECOMP_FUNC void func_801E1D38_60D118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1D38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E1D3C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1D40: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1D44: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1D48: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E1D4C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1D50: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1D54: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1D58: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E1D5C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1D60: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1D64: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1D68: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E1D6C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1D70: addiu       $t9, $zero, 0x4A9
    ctx->r25 = ADD32(0, 0X4A9);
    // 0x801E1D74: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1D78: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E1D7C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1D80: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1D84: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1D88: addiu       $a1, $a1, 0x2934
    ctx->r5 = ADD32(ctx->r5, 0X2934);
    // 0x801E1D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E1D90: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1D94: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1D98: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1D9C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1DA0: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1DA4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E1DA8: jal         0x800358E8
    // 0x801E1DAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1DAC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1DB0: beq         $v0, $zero, L_801E1E10
    if (ctx->r2 == 0) {
        // 0x801E1DB4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E1E10;
    }
    // 0x801E1DB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E1DB8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E1DBC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E1DC0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E1DC4: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E1DC8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E1DCC: addiu       $t0, $t0, -0x4FF4
    ctx->r8 = ADD32(ctx->r8, -0X4FF4);
    // 0x801E1DD0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E1DD4: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E1DD8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E1DDC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E1DE0: addiu       $t3, $t3, -0x5288
    ctx->r11 = ADD32(ctx->r11, -0X5288);
    // 0x801E1DE4: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E1DE8: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E1DEC: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E1DF0: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E1DF4: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E1DF8: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E1DFC: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E1E00: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1E04: jal         0x801E18E4
    // 0x801E1E08: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1E08: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1E0C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E1E10:
    // 0x801E1E10: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1E14: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E1E18: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E1E1C: jr          $ra
    // 0x801E1E20: nop

    TRACE_RETURN()
    return;
    // 0x801E1E20: nop

;}
RECOMP_FUNC void func_801D11D4_5FC5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D11D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D11D8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D11DC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D11E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D11E4: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D11E8: addiu       $a1, $a1, 0x41C
    ctx->r5 = ADD32(ctx->r5, 0X41C);
    // 0x801D11EC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D11F0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D11F4: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x801D11F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D11FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1200: lwc1        $f6, -0x2DCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DCC);
    // 0x801D1204: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D1208: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D120C: addiu       $t6, $zero, 0x4B4
    ctx->r14 = ADD32(0, 0X4B4);
    // 0x801D1210: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801D1214: addiu       $a2, $a2, -0x5430
    ctx->r6 = ADD32(ctx->r6, -0X5430);
    // 0x801D1218: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D121C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D1220: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D1224: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D1228: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801D122C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D1230: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D1234: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1238: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D123C: jal         0x8000DBF0
    // 0x801D1240: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801D1240: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D1244: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D1248: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801D124C: jal         0x8003521C
    // 0x801D1250: addiu       $a0, $a0, 0x1264
    ctx->r4 = ADD32(ctx->r4, 0X1264);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D1250: addiu       $a0, $a0, 0x1264
    ctx->r4 = ADD32(ctx->r4, 0X1264);
    after_1:
    // 0x801D1254: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1258: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D125C: jr          $ra
    // 0x801D1260: nop

    TRACE_RETURN()
    return;
    // 0x801D1260: nop

;}
RECOMP_FUNC void func_801D3894_5FEC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3894: jr          $ra
    // 0x801D3898: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801D3898: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801E3600_60E9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3604: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E3608: swc1        $f0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f0.u32l;
    // 0x801E360C: jr          $ra
    // 0x801E3610: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3610: swc1        $f0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_801D35FC_5FE9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D35FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D3600: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D3604: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801D3608: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x801D360C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x801D3610: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D3614: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801D3618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D361C: beq         $a0, $zero, L_801D362C
    if (ctx->r4 == 0) {
        // 0x801D3620: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_801D362C;
    }
    // 0x801D3620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D3624: jal         0x801D34D0
    // 0x801D3628: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_0;
    // 0x801D3628: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    after_0:
L_801D362C:
    // 0x801D362C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D3634: jr          $ra
    // 0x801D3638: nop

    TRACE_RETURN()
    return;
    // 0x801D3638: nop

;}
RECOMP_FUNC void func_801EE740_619B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE740: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EE744: addiu       $a2, $a2, -0x1130
    ctx->r6 = ADD32(ctx->r6, -0X1130);
    // 0x801EE748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EE74C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801EE750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EE754: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EE758: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EE75C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801EE760: lwc1        $f0, 0xAC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XAC);
    // 0x801EE764: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x801EE768: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801EE76C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801EE770: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EE774: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x801EE778: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801EE77C: bc1f        L_801EE7B0
    if (!c1cs) {
        // 0x801EE780: swc1        $f2, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
            goto L_801EE7B0;
    }
    // 0x801EE780: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801EE784: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EE788: nop

    // 0x801EE78C: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801EE790: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801EE794: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE798: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801EE79C: nop

    // 0x801EE7A0: bc1fl       L_801EE7B4
    if (!c1cs) {
        // 0x801EE7A4: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801EE7B4;
    }
    goto skip_0;
    // 0x801EE7A4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_0:
    // 0x801EE7A8: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x801EE7AC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_801EE7B0:
    // 0x801EE7B0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801EE7B4:
    // 0x801EE7B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801EE7B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EE7BC: bc1fl       L_801EE7E8
    if (!c1cs) {
        // 0x801EE7C0: lwc1        $f0, 0x10($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801EE7E8;
    }
    goto skip_1;
    // 0x801EE7C0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x801EE7C4: sub.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801EE7C8: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801EE7CC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE7D0: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x801EE7D4: nop

    // 0x801EE7D8: bc1fl       L_801EE7E8
    if (!c1cs) {
        // 0x801EE7DC: lwc1        $f0, 0x10($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801EE7E8;
    }
    goto skip_2;
    // 0x801EE7DC: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    skip_2:
    // 0x801EE7E0: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x801EE7E4: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
L_801EE7E8:
    // 0x801EE7E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801EE7EC: nop

    // 0x801EE7F0: bc1fl       L_801EE820
    if (!c1cs) {
        // 0x801EE7F4: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801EE820;
    }
    goto skip_3;
    // 0x801EE7F4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_3:
    // 0x801EE7F8: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x801EE7FC: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801EE800: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE804: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801EE808: nop

    // 0x801EE80C: bc1fl       L_801EE820
    if (!c1cs) {
        // 0x801EE810: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801EE820;
    }
    goto skip_4;
    // 0x801EE810: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_4:
    // 0x801EE814: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x801EE818: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE81C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801EE820:
    // 0x801EE820: nop

    // 0x801EE824: bc1fl       L_801EE850
    if (!c1cs) {
        // 0x801EE828: lhu         $v1, 0x1A($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X1A);
            goto L_801EE850;
    }
    goto skip_5;
    // 0x801EE828: lhu         $v1, 0x1A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1A);
    skip_5:
    // 0x801EE82C: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801EE830: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x801EE834: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE838: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x801EE83C: nop

    // 0x801EE840: bc1fl       L_801EE850
    if (!c1cs) {
        // 0x801EE844: lhu         $v1, 0x1A($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X1A);
            goto L_801EE850;
    }
    goto skip_6;
    // 0x801EE844: lhu         $v1, 0x1A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1A);
    skip_6:
    // 0x801EE848: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x801EE84C: lhu         $v1, 0x1A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X1A);
L_801EE850:
    // 0x801EE850: slti        $at, $v1, 0x1380
    ctx->r1 = SIGNED(ctx->r3) < 0X1380 ? 1 : 0;
    // 0x801EE854: beq         $at, $zero, L_801EE878
    if (ctx->r1 == 0) {
        // 0x801EE858: addiu       $t6, $v1, 0xA
        ctx->r14 = ADD32(ctx->r3, 0XA);
            goto L_801EE878;
    }
    // 0x801EE858: addiu       $t6, $v1, 0xA
    ctx->r14 = ADD32(ctx->r3, 0XA);
    // 0x801EE85C: andi        $v1, $t6, 0xFFFF
    ctx->r3 = ctx->r14 & 0XFFFF;
    // 0x801EE860: slti        $at, $v1, 0x1380
    ctx->r1 = SIGNED(ctx->r3) < 0X1380 ? 1 : 0;
    // 0x801EE864: bne         $at, $zero, L_801EE878
    if (ctx->r1 != 0) {
        // 0x801EE868: sh          $t6, 0x1A($v0)
        MEM_H(0X1A, ctx->r2) = ctx->r14;
            goto L_801EE878;
    }
    // 0x801EE868: sh          $t6, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r14;
    // 0x801EE86C: addiu       $t7, $zero, 0x1380
    ctx->r15 = ADD32(0, 0X1380);
    // 0x801EE870: sh          $t7, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r15;
    // 0x801EE874: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
L_801EE878:
    // 0x801EE878: slti        $at, $v1, 0x1381
    ctx->r1 = SIGNED(ctx->r3) < 0X1381 ? 1 : 0;
    // 0x801EE87C: bne         $at, $zero, L_801EE89C
    if (ctx->r1 != 0) {
        // 0x801EE880: addiu       $t8, $v1, -0xA
        ctx->r24 = ADD32(ctx->r3, -0XA);
            goto L_801EE89C;
    }
    // 0x801EE880: addiu       $t8, $v1, -0xA
    ctx->r24 = ADD32(ctx->r3, -0XA);
    // 0x801EE884: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801EE888: slti        $at, $t9, 0x1381
    ctx->r1 = SIGNED(ctx->r25) < 0X1381 ? 1 : 0;
    // 0x801EE88C: beq         $at, $zero, L_801EE89C
    if (ctx->r1 == 0) {
        // 0x801EE890: sh          $t8, 0x1A($v0)
        MEM_H(0X1A, ctx->r2) = ctx->r24;
            goto L_801EE89C;
    }
    // 0x801EE890: sh          $t8, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r24;
    // 0x801EE894: addiu       $t0, $zero, 0x1380
    ctx->r8 = ADD32(0, 0X1380);
    // 0x801EE898: sh          $t0, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r8;
L_801EE89C:
    // 0x801EE89C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE8A0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x801EE8A4: nop

    // 0x801EE8A8: bc1fl       L_801EE8F8
    if (!c1cs) {
        // 0x801EE8AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EE8F8;
    }
    goto skip_7;
    // 0x801EE8AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_7:
    // 0x801EE8B0: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE8B4: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x801EE8B8: nop

    // 0x801EE8BC: bc1fl       L_801EE8F8
    if (!c1cs) {
        // 0x801EE8C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EE8F8;
    }
    goto skip_8;
    // 0x801EE8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_8:
    // 0x801EE8C4: lhu         $t1, 0x1A($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X1A);
    // 0x801EE8C8: addiu       $at, $zero, 0x1380
    ctx->r1 = ADD32(0, 0X1380);
    // 0x801EE8CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EE8D0: bne         $t1, $at, L_801EE8F4
    if (ctx->r9 != ctx->r1) {
        // 0x801EE8D4: addiu       $t4, $zero, 0x12C
        ctx->r12 = ADD32(0, 0X12C);
            goto L_801EE8F4;
    }
    // 0x801EE8D4: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x801EE8D8: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x801EE8DC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EE8E0: addiu       $a0, $a0, -0x16FC
    ctx->r4 = ADD32(ctx->r4, -0X16FC);
    // 0x801EE8E4: sb          $t2, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = ctx->r10;
    // 0x801EE8E8: sw          $t4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r12;
    // 0x801EE8EC: jal         0x8003521C
    // 0x801EE8F0: swc1        $f2, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f2.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801EE8F0: swc1        $f2, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f2.u32l;
    after_0:
L_801EE8F4:
    // 0x801EE8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801EE8F8:
    // 0x801EE8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EE8FC: jr          $ra
    // 0x801EE900: nop

    TRACE_RETURN()
    return;
    // 0x801EE900: nop

;}
RECOMP_FUNC void func_801F1AEC_61CECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1AEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F1AF0: jr          $ra
    // 0x801F1AF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801F1AF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_802096AC_634A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802096AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802096B0: jr          $ra
    // 0x802096B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802096B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DCB5C_607F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCB5C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801DCB60: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801DCB64: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801DCB68: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DCB6C: lw          $a0, 0x9C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X9C);
    // 0x801DCB70: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801DCB74: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DCB78: addiu       $a2, $a2, 0xB4
    ctx->r6 = ADD32(ctx->r6, 0XB4);
    // 0x801DCB7C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DCB80: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DCB84: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DCB88: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801DCB8C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801DCB90: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801DCB94: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DCB98: addiu       $t0, $zero, 0x4A8
    ctx->r8 = ADD32(0, 0X4A8);
    // 0x801DCB9C: addiu       $a3, $a3, -0x5A48
    ctx->r7 = ADD32(ctx->r7, -0X5A48);
    // 0x801DCBA0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801DCBA4: lhu         $t7, 0x14($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X14);
    // 0x801DCBA8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801DCBAC: addiu       $a1, $a1, -0x3390
    ctx->r5 = ADD32(ctx->r5, -0X3390);
    // 0x801DCBB0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801DCBB4: lhu         $t8, 0x16($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X16);
    // 0x801DCBB8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801DCBBC: lhu         $t9, 0x18($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X18);
    // 0x801DCBC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801DCBC4: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801DCBC8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801DCBCC: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801DCBD0: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801DCBD4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801DCBD8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801DCBDC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801DCBE0: jal         0x800358E8
    // 0x801DCBE4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801DCBE4: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801DCBE8: bne         $v0, $zero, L_801DCBF8
    if (ctx->r2 != 0) {
        // 0x801DCBEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801DCBF8;
    }
    // 0x801DCBEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801DCBF0: b           L_801DCC60
    // 0x801DCBF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCC60;
    // 0x801DCBF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCBF8:
    // 0x801DCBF8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801DCBFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DCC00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DCC04: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801DCC08: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x801DCC0C: swc1        $f4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f4.u32l;
    // 0x801DCC10: addiu       $t2, $zero, 0x19
    ctx->r10 = ADD32(0, 0X19);
    // 0x801DCC14: addiu       $t3, $zero, 0xE0
    ctx->r11 = ADD32(0, 0XE0);
    // 0x801DCC18: sw          $t2, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r10;
    // 0x801DCC1C: sw          $t3, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r11;
    // 0x801DCC20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DCC24: addiu       $t4, $zero, 0xE0
    ctx->r12 = ADD32(0, 0XE0);
    // 0x801DCC28: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DCC2C: addiu       $a1, $a1, -0x5A48
    ctx->r5 = ADD32(ctx->r5, -0X5A48);
    // 0x801DCC30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801DCC34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801DCC38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801DCC3C: jal         0x8000DF10
    // 0x801DCC40: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801DCC40: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801DCC44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DCC48: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x801DCC4C: or          $t5, $v0, $at
    ctx->r13 = ctx->r2 | ctx->r1;
    // 0x801DCC50: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DCC54: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x801DCC58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801DCC5C: sw          $t6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r14;
L_801DCC60:
    // 0x801DCC60: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801DCC64: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801DCC68: jr          $ra
    // 0x801DCC6C: nop

    TRACE_RETURN()
    return;
    // 0x801DCC6C: nop

;}
RECOMP_FUNC void func_801E0F68_60C348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0F68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E0F6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E0F70: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E0F74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E0F78: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801E0F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E0F80: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E0F84: addiu       $t7, $t6, 0xC
    ctx->r15 = ADD32(ctx->r14, 0XC);
    // 0x801E0F88: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801E0F8C: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801E0F90: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E0F94: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801E0F98: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801E0F9C: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801E0FA0: jal         0x8000EE50
    // 0x801E0FA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000EE50_FA50(rdram, ctx);
        goto after_0;
    // 0x801E0FA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x801E0FA8: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801E0FAC: lui         $at, 0x4038
    ctx->r1 = S32(0X4038 << 16);
    // 0x801E0FB0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E0FB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E0FB8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E0FBC: lwc1        $f10, 0x1C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801E0FC0: div.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801E0FC4: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801E0FC8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801E0FCC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E0FD0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E0FD4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E0FD8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E0FDC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E0FE0: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801E0FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0FE8: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x801E0FEC: add.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f8.d + ctx->f0.d;
    // 0x801E0FF0: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E0FF4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E0FF8: swc1        $f4, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f4.u32l;
    // 0x801E0FFC: swc1        $f16, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f16.u32l;
    // 0x801E1000: lwc1        $f18, 0x90($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E1004: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E1008: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E100C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801E1010: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E1014: swc1        $f10, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f10.u32l;
    // 0x801E1018: lwc1        $f2, 0x90($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E101C: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801E1020: nop

    // 0x801E1024: bc1fl       L_801E1040
    if (!c1cs) {
        // 0x801E1028: trunc.w.s   $f18, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
            goto L_801E1040;
    }
    goto skip_0;
    // 0x801E1028: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
    skip_0:
    // 0x801E102C: jal         0x80034ED4
    // 0x801E1030: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801E1030: nop

    after_1:
    // 0x801E1034: b           L_801E1074
    // 0x801E1038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E1074;
    // 0x801E1038: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E103C: trunc.w.s   $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = TRUNC_W_S(ctx->f2.fl);
L_801E1040:
    // 0x801E1040: addiu       $t9, $zero, 0xB2
    ctx->r25 = ADD32(0, 0XB2);
    // 0x801E1044: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801E1048: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801E104C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x801E1050: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801E1054: jal         0x8000DF10
    // 0x801E1058: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_8000DF10_EB10(rdram, ctx);
        goto after_2;
    // 0x801E1058: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x801E105C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1060: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801E1064: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E1068: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801E106C: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
    // 0x801E1070: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E1074:
    // 0x801E1074: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E1078: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E107C: jr          $ra
    // 0x801E1080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E1080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D3A44_5FEE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3A44: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D3A48: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D3A4C: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x801D3A50: bgtz        $v1, L_801D3A60
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D3A54: nop
    
            goto L_801D3A60;
    }
    // 0x801D3A54: nop

    // 0x801D3A58: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x801D3A5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D3A60:
    // 0x801D3A60: jr          $ra
    // 0x801D3A64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3A64: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80200D4C_62C12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200D4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80200D50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80200D54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80200D58: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80200D5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200D60: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80200D64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80200D68: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80200D6C: nop

    // 0x80200D70: bc1f        L_80200D84
    if (!c1cs) {
        // 0x80200D74: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80200D84;
    }
    // 0x80200D74: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80200D78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80200D7C: b           L_80200E2C
    // 0x80200D80: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_80200E2C;
    // 0x80200D80: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
L_80200D84:
    // 0x80200D84: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80200D88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80200D8C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200D90: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80200D94: nop

    // 0x80200D98: bc1fl       L_80200DB4
    if (!c1cs) {
        // 0x80200D9C: lwc1        $f0, 0x70($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
            goto L_80200DB4;
    }
    goto skip_0;
    // 0x80200D9C: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    skip_0:
    // 0x80200DA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200DA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80200DA8: b           L_80200E2C
    // 0x80200DAC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
        goto L_80200E2C;
    // 0x80200DAC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x80200DB0: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
L_80200DB4:
    // 0x80200DB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80200DB8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80200DBC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80200DC0: nop

    // 0x80200DC4: bc1fl       L_80200DD8
    if (!c1cs) {
        // 0x80200DC8: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80200DD8;
    }
    goto skip_1;
    // 0x80200DC8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x80200DCC: b           L_80200DD8
    // 0x80200DD0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80200DD8;
    // 0x80200DD0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80200DD4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80200DD8:
    // 0x80200DD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80200DDC: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x80200DE0: c.eq.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d == ctx->f18.d;
    // 0x80200DE4: nop

    // 0x80200DE8: bc1t        L_80200E2C
    if (c1cs) {
        // 0x80200DEC: nop
    
            goto L_80200E2C;
    }
    // 0x80200DEC: nop

    // 0x80200DF0: jal         0x8000DDC0
    // 0x80200DF4: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x80200DF4: nop

    after_0:
    // 0x80200DF8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200DFC: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80200E00: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80200E04: beq         $v0, $zero, L_80200E24
    if (ctx->r2 == 0) {
        // 0x80200E08: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_80200E24;
    }
    // 0x80200E08: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80200E0C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80200E10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80200E14: nop

    // 0x80200E18: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80200E1C: b           L_80200E2C
    // 0x80200E20: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
        goto L_80200E2C;
    // 0x80200E20: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80200E24:
    // 0x80200E24: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x80200E28: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
L_80200E2C:
    // 0x80200E2C: jal         0x801D600C
    // 0x80200E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x80200E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80200E34: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x80200E38: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x80200E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200E40: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80200E44: bne         $t7, $at, L_80200E78
    if (ctx->r15 != ctx->r1) {
        // 0x80200E48: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_80200E78;
    }
    // 0x80200E48: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80200E4C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200E50: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80200E54: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    // 0x80200E58: jal         0x802053B0
    // 0x80200E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_802053B0_630790(rdram, ctx);
        goto after_2;
    // 0x80200E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80200E60: beq         $v0, $zero, L_80200E78
    if (ctx->r2 == 0) {
        // 0x80200E64: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200E78;
    }
    // 0x80200E64: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200E68: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200E6C: lbu         $t9, 0x12($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X12);
    // 0x80200E70: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80200E74: sb          $t0, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r8;
L_80200E78:
    // 0x80200E78: lw          $t1, 0x7C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X7C);
    // 0x80200E7C: addiu       $at, $zero, 0x30C
    ctx->r1 = ADD32(0, 0X30C);
    // 0x80200E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200E84: bne         $t1, $at, L_80200EB8
    if (ctx->r9 != ctx->r1) {
        // 0x80200E88: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_80200EB8;
    }
    // 0x80200E88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200E8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80200E90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80200E94: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    // 0x80200E98: jal         0x802053B0
    // 0x80200E9C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_802053B0_630790(rdram, ctx);
        goto after_3;
    // 0x80200E9C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_3:
    // 0x80200EA0: beq         $v0, $zero, L_80200EB8
    if (ctx->r2 == 0) {
        // 0x80200EA4: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200EB8;
    }
    // 0x80200EA4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200EA8: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200EAC: lbu         $t3, 0x12($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X12);
    // 0x80200EB0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80200EB4: sb          $t4, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r12;
L_80200EB8:
    // 0x80200EB8: lw          $t5, 0x7C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X7C);
    // 0x80200EBC: addiu       $at, $zero, 0x2F8
    ctx->r1 = ADD32(0, 0X2F8);
    // 0x80200EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200EC4: bne         $t5, $at, L_80200EF8
    if (ctx->r13 != ctx->r1) {
        // 0x80200EC8: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_80200EF8;
    }
    // 0x80200EC8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200ECC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80200ED0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80200ED4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x80200ED8: jal         0x802053B0
    // 0x80200EDC: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    func_802053B0_630790(rdram, ctx);
        goto after_4;
    // 0x80200EDC: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    after_4:
    // 0x80200EE0: beq         $v0, $zero, L_80200EF8
    if (ctx->r2 == 0) {
        // 0x80200EE4: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200EF8;
    }
    // 0x80200EE4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200EE8: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200EEC: lbu         $t7, 0x12($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X12);
    // 0x80200EF0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80200EF4: sb          $t8, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r24;
L_80200EF8:
    // 0x80200EF8: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    // 0x80200EFC: addiu       $at, $zero, 0x2E4
    ctx->r1 = ADD32(0, 0X2E4);
    // 0x80200F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200F04: bne         $t9, $at, L_80200F38
    if (ctx->r25 != ctx->r1) {
        // 0x80200F08: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_80200F38;
    }
    // 0x80200F08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200F0C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80200F10: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80200F14: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x80200F18: jal         0x802053B0
    // 0x80200F1C: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    func_802053B0_630790(rdram, ctx);
        goto after_5;
    // 0x80200F1C: lui         $a3, 0x437A
    ctx->r7 = S32(0X437A << 16);
    after_5:
    // 0x80200F20: beq         $v0, $zero, L_80200F38
    if (ctx->r2 == 0) {
        // 0x80200F24: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200F38;
    }
    // 0x80200F24: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200F28: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200F2C: lbu         $t1, 0x12($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X12);
    // 0x80200F30: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80200F34: sb          $t2, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r10;
L_80200F38:
    // 0x80200F38: lw          $t3, 0x7C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X7C);
    // 0x80200F3C: addiu       $at, $zero, 0x2D0
    ctx->r1 = ADD32(0, 0X2D0);
    // 0x80200F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200F44: bne         $t3, $at, L_80200F78
    if (ctx->r11 != ctx->r1) {
        // 0x80200F48: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_80200F78;
    }
    // 0x80200F48: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200F4C: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80200F50: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80200F54: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80200F58: jal         0x802053B0
    // 0x80200F5C: lui         $a3, 0x4361
    ctx->r7 = S32(0X4361 << 16);
    func_802053B0_630790(rdram, ctx);
        goto after_6;
    // 0x80200F5C: lui         $a3, 0x4361
    ctx->r7 = S32(0X4361 << 16);
    after_6:
    // 0x80200F60: beq         $v0, $zero, L_80200F78
    if (ctx->r2 == 0) {
        // 0x80200F64: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200F78;
    }
    // 0x80200F64: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200F68: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200F6C: lbu         $t5, 0x12($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X12);
    // 0x80200F70: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80200F74: sb          $t6, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r14;
L_80200F78:
    // 0x80200F78: lw          $t7, 0x7C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X7C);
    // 0x80200F7C: addiu       $at, $zero, 0x2BC
    ctx->r1 = ADD32(0, 0X2BC);
    // 0x80200F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200F84: bne         $t7, $at, L_80200FB8
    if (ctx->r15 != ctx->r1) {
        // 0x80200F88: addiu       $a1, $zero, 0x0
        ctx->r5 = ADD32(0, 0X0);
            goto L_80200FB8;
    }
    // 0x80200F88: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80200F8C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80200F90: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80200F94: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80200F98: jal         0x802053B0
    // 0x80200F9C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    func_802053B0_630790(rdram, ctx);
        goto after_7;
    // 0x80200F9C: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    after_7:
    // 0x80200FA0: beq         $v0, $zero, L_80200FB8
    if (ctx->r2 == 0) {
        // 0x80200FA4: lui         $v0, 0x8021
        ctx->r2 = S32(0X8021 << 16);
            goto L_80200FB8;
    }
    // 0x80200FA4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80200FA8: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80200FAC: lbu         $t9, 0x12($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X12);
    // 0x80200FB0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80200FB4: sb          $t0, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r8;
L_80200FB8:
    // 0x80200FB8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x80200FBC: addiu       $at, $zero, 0x15E
    ctx->r1 = ADD32(0, 0X15E);
    // 0x80200FC0: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80200FC4: bnel        $v0, $at, L_80200FDC
    if (ctx->r2 != ctx->r1) {
        // 0x80200FC8: addiu       $at, $zero, 0x154
        ctx->r1 = ADD32(0, 0X154);
            goto L_80200FDC;
    }
    goto skip_2;
    // 0x80200FC8: addiu       $at, $zero, 0x154
    ctx->r1 = ADD32(0, 0X154);
    skip_2:
    // 0x80200FCC: lw          $t1, -0x10C0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X10C0);
    // 0x80200FD0: sb          $zero, 0x5($t1)
    MEM_B(0X5, ctx->r9) = 0;
    // 0x80200FD4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x80200FD8: addiu       $at, $zero, 0x154
    ctx->r1 = ADD32(0, 0X154);
L_80200FDC:
    // 0x80200FDC: bne         $v0, $at, L_80200FFC
    if (ctx->r2 != ctx->r1) {
        // 0x80200FE0: nop
    
            goto L_80200FFC;
    }
    // 0x80200FE0: nop

    // 0x80200FE4: jal         0x80200684
    // 0x80200FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_8;
    // 0x80200FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80200FEC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80200FF0: lw          $t3, -0x10C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10C0);
    // 0x80200FF4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80200FF8: sb          $t2, 0x11($t3)
    MEM_B(0X11, ctx->r11) = ctx->r10;
L_80200FFC:
    // 0x80200FFC: jal         0x8020407C
    // 0x80201000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_9;
    // 0x80201000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80201004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80201008: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8020100C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201010: jr          $ra
    // 0x80201014: nop

    TRACE_RETURN()
    return;
    // 0x80201014: nop

;}
RECOMP_FUNC void func_801F74E4_6228C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F74E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801F74E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F74EC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801F74F0: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801F74F4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801F74F8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801F74FC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801F7500: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x801F7504: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801F7508: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801F750C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801F7510: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F7514: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F7518: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x801F751C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801F7520: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F7524: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x801F7528: addiu       $t9, $sp, 0x48
    ctx->r25 = ADD32(ctx->r29, 0X48);
    // 0x801F752C: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801F7530: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F7534: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F7538: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F753C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801F7540: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801F7544: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801F7548: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801F754C: jal         0x8000E4E4
    // 0x801F7550: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_0;
    // 0x801F7550: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801F7554: jal         0x801F7168
    // 0x801F7558: nop

    func_801F7168_622548(rdram, ctx);
        goto after_1;
    // 0x801F7558: nop

    after_1:
    // 0x801F755C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F7560: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F7564: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F7568: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F756C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7570: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7574: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x801F7578: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801F757C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F7580: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801F7584: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801F7588: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801F758C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801F7590: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x801F7594: jal         0x801E26A4
    // 0x801F7598: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    func_801E26A4_60DA84(rdram, ctx);
        goto after_2;
    // 0x801F7598: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    after_2:
    // 0x801F759C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F75A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801F75A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F75A8: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x801F75AC: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F75B0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F75B4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F75B8: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x801F75BC: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F75C0: addiu       $t0, $sp, 0x50
    ctx->r8 = ADD32(ctx->r29, 0X50);
    // 0x801F75C4: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x801F75C8: addiu       $t2, $sp, 0x48
    ctx->r10 = ADD32(ctx->r29, 0X48);
    // 0x801F75CC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x801F75D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801F75D4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801F75D8: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801F75DC: jal         0x8000E4E4
    // 0x801F75E0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_3;
    // 0x801F75E0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801F75E4: jal         0x801F7168
    // 0x801F75E8: nop

    func_801F7168_622548(rdram, ctx);
        goto after_4;
    // 0x801F75E8: nop

    after_4:
    // 0x801F75EC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F75F0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F75F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F75F8: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F75FC: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7600: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F7604: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x801F7608: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801F760C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7610: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801F7614: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801F7618: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801F761C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801F7620: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x801F7624: jal         0x801E26A4
    // 0x801F7628: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    func_801E26A4_60DA84(rdram, ctx);
        goto after_5;
    // 0x801F7628: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    after_5:
    // 0x801F762C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F7630: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801F7634: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F7638: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x801F763C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F7640: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801F7644: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x801F7648: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x801F764C: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F7650: addiu       $t3, $sp, 0x50
    ctx->r11 = ADD32(ctx->r29, 0X50);
    // 0x801F7654: addiu       $t4, $sp, 0x4C
    ctx->r12 = ADD32(ctx->r29, 0X4C);
    // 0x801F7658: addiu       $t5, $sp, 0x48
    ctx->r13 = ADD32(ctx->r29, 0X48);
    // 0x801F765C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801F7660: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801F7664: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801F7668: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x801F766C: jal         0x8000E4E4
    // 0x801F7670: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_6;
    // 0x801F7670: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x801F7674: jal         0x801F7168
    // 0x801F7678: nop

    func_801F7168_622548(rdram, ctx);
        goto after_7;
    // 0x801F7678: nop

    after_7:
    // 0x801F767C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F7680: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F7684: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801F7688: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F768C: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7690: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7694: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x801F7698: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x801F769C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F76A0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801F76A4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x801F76A8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801F76AC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801F76B0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x801F76B4: jal         0x801E26A4
    // 0x801F76B8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    func_801E26A4_60DA84(rdram, ctx);
        goto after_8;
    // 0x801F76B8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_8:
    // 0x801F76BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F76C0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801F76C4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801F76C8: jr          $ra
    // 0x801F76CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x801F76CC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802085B0_633990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802085B0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802085B4: lw          $a3, -0x1130($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1130);
    // 0x802085B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802085BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802085C0: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x802085C4: lw          $t6, 0x1C4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1C4);
    // 0x802085C8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802085CC: addiu       $t7, $t7, -0x5310
    ctx->r15 = ADD32(ctx->r15, -0X5310);
    // 0x802085D0: lw          $t0, 0x18($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X18);
    // 0x802085D4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802085D8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x802085DC: lw          $t0, 0x0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X0);
    // 0x802085E0: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x802085E4: addiu       $t2, $zero, 0x136
    ctx->r10 = ADD32(0, 0X136);
    // 0x802085E8: sw          $t7, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r15;
    // 0x802085EC: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x802085F0: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x802085F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802085F8: addiu       $v0, $a3, 0xA0
    ctx->r2 = ADD32(ctx->r7, 0XA0);
    // 0x802085FC: sb          $t1, 0x2C0($a3)
    MEM_B(0X2C0, ctx->r7) = ctx->r9;
    // 0x80208600: sb          $zero, 0x2C1($a3)
    MEM_B(0X2C1, ctx->r7) = 0;
    // 0x80208604: sb          $t1, 0x2C2($a3)
    MEM_B(0X2C2, ctx->r7) = ctx->r9;
    // 0x80208608: sb          $zero, 0x2C3($a3)
    MEM_B(0X2C3, ctx->r7) = 0;
    // 0x8020860C: sw          $t8, 0x1EC($a3)
    MEM_W(0X1EC, ctx->r7) = ctx->r24;
    // 0x80208610: sw          $t9, 0x1F0($a3)
    MEM_W(0X1F0, ctx->r7) = ctx->r25;
    // 0x80208614: sw          $t2, 0x1F4($a3)
    MEM_W(0X1F4, ctx->r7) = ctx->r10;
    // 0x80208618: sw          $t3, 0x1F8($a3)
    MEM_W(0X1F8, ctx->r7) = ctx->r11;
    // 0x8020861C: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x80208620: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80208624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208628: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x8020862C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80208630: addiu       $t4, $zero, 0x1380
    ctx->r12 = ADD32(0, 0X1380);
    // 0x80208634: sh          $t4, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r12;
    // 0x80208638: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x8020863C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80208640: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x80208644: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80208648: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8020864C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80208650: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80208654: lw          $a0, 0x1C4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C4);
    // 0x80208658: addiu       $a1, $a1, -0x7874
    ctx->r5 = ADD32(ctx->r5, -0X7874);
    // 0x8020865C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80208660: jal         0x80034E08
    // 0x80208664: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x80208664: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80208668: jal         0x801D38E0
    // 0x8020866C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    func_801D38E0_5FECC0(rdram, ctx);
        goto after_1;
    // 0x8020866C: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    after_1:
    // 0x80208670: jal         0x801D3A68
    // 0x80208674: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_2;
    // 0x80208674: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x80208678: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8020867C: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80208680: addiu       $a1, $a1, -0x35A4
    ctx->r5 = ADD32(ctx->r5, -0X35A4);
    // 0x80208684: jal         0x8003522C
    // 0x80208688: lw          $a0, 0x1C0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C0);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x80208688: lw          $a0, 0x1C0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C0);
    after_3:
    // 0x8020868C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80208690: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80208694: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80208698: lw          $t6, 0x1C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1C);
    // 0x8020869C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802086A0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x802086A4: swc1        $f10, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f10.u32l;
    // 0x802086A8: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x802086AC: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x802086B0: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x802086B4: sb          $zero, 0x2C4($t7)
    MEM_B(0X2C4, ctx->r15) = 0;
    // 0x802086B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802086BC: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x802086C0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802086C4: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x802086C8: lhu         $t9, 0x2DF4($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2DF4);
    // 0x802086CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802086D0: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x802086D4: sh          $t2, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r10;
    // 0x802086D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802086DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x802086E0: addu        $t3, $v0, $a0
    ctx->r11 = ADD32(ctx->r2, ctx->r4);
    // 0x802086E4: lhu         $t4, 0x2DF2($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2DF2);
    // 0x802086E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802086EC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802086F0: sh          $t5, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r13;
    // 0x802086F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802086F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802086FC: jr          $ra
    // 0x80208700: nop

    TRACE_RETURN()
    return;
    // 0x80208700: nop

;}
RECOMP_FUNC void func_801F8710_623AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8710: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801F8714: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801F8718: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801F871C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801F8720: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F8724: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801F8728: addiu       $a1, $a1, -0x170
    ctx->r5 = ADD32(ctx->r5, -0X170);
    // 0x801F872C: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801F8730: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x801F8734: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8738: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F873C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F8740: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F8744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F8748: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F874C: lwc1        $f8, -0x178C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X178C);
    // 0x801F8750: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F8754: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F8758: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x801F875C: addiu       $t8, $zero, 0x4B2
    ctx->r24 = ADD32(0, 0X4B2);
    // 0x801F8760: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801F8764: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801F8768: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801F876C: addiu       $a0, $a0, -0x77D0
    ctx->r4 = ADD32(ctx->r4, -0X77D0);
    // 0x801F8770: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F8774: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F8778: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801F877C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F8780: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801F8784: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801F8788: jal         0x80035854
    // 0x801F878C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801F878C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801F8790: beq         $v0, $zero, L_801F8820
    if (ctx->r2 == 0) {
        // 0x801F8794: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801F8820;
    }
    // 0x801F8794: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F8798: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801F879C: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801F87A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F87A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F87A8: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F87AC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801F87B0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x801F87B4: sw          $t9, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r25;
    // 0x801F87B8: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801F87BC: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x801F87C0: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x801F87C4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801F87C8: swc1        $f10, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f10.u32l;
    // 0x801F87CC: swc1        $f16, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f16.u32l;
    // 0x801F87D0: swc1        $f18, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f18.u32l;
    // 0x801F87D4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x801F87D8: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x801F87DC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F87E0: lw          $t3, 0x94($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X94);
    // 0x801F87E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F87E8: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801F87EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F87F0: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x801F87F4: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801F87F8: jal         0x8000DF10
    // 0x801F87FC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801F87FC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x801F8800: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F8804: or          $t4, $v0, $at
    ctx->r12 = ctx->r2 | ctx->r1;
    // 0x801F8808: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801F880C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F8810: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801F8814: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    // 0x801F8818: jal         0x80038BC8
    // 0x801F881C: sw          $t5, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r13;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F881C: sw          $t5, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r13;
    after_2:
L_801F8820:
    // 0x801F8820: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801F8824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801F8828: jr          $ra
    // 0x801F882C: nop

    TRACE_RETURN()
    return;
    // 0x801F882C: nop

;}
RECOMP_FUNC void func_801EF2C8_61A6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF2C8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF2CC: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF2D0: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x801EF2D4: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EF2D8: jr          $ra
    // 0x801EF2DC: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF2DC: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801DB604_6069E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB604: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DB608: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DB60C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DB610: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801DB614: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801DB618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DB61C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DB620: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x801DB624: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801DB628: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801DB62C: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x801DB630: jal         0x8000F3D8
    // 0x801DB634: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_0;
    // 0x801DB634: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_0:
    // 0x801DB638: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801DB63C: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801DB640: lwc1        $f2, 0x78($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801DB644: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801DB648: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x801DB64C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801DB650: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DB654: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801DB658: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DB65C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801DB660: jal         0x8000DD58
    // 0x801DB664: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801DB664: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DB668: addiu       $a1, $v0, 0x80
    ctx->r5 = ADD32(ctx->r2, 0X80);
    // 0x801DB66C: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801DB670: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801DB674: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801DB678: addiu       $a2, $s0, 0x70
    ctx->r6 = ADD32(ctx->r16, 0X70);
    // 0x801DB67C: jal         0x8000E630
    // 0x801DB680: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801DB680: addiu       $a3, $s0, 0x74
    ctx->r7 = ADD32(ctx->r16, 0X74);
    after_2:
    // 0x801DB684: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x801DB688: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x801DB68C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801DB690: lwc1        $f16, 0x78($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X78);
    // 0x801DB694: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801DB698: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x801DB69C: addiu       $a1, $a1, -0x4940
    ctx->r5 = ADD32(ctx->r5, -0X4940);
    // 0x801DB6A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DB6A4: jal         0x8003522C
    // 0x801DB6A8: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801DB6A8: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x801DB6AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DB6B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DB6B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DB6B8: jr          $ra
    // 0x801DB6BC: nop

    TRACE_RETURN()
    return;
    // 0x801DB6BC: nop

;}
RECOMP_FUNC void func_801D9D10_6050F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9D18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D9D1C: jal         0x801D614C
    // 0x801D9D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x801D9D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D9D24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D9D28: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801D9D2C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801D9D30: bne         $t7, $zero, L_801D9D54
    if (ctx->r15 != 0) {
        // 0x801D9D34: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801D9D54;
    }
    // 0x801D9D34: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801D9D38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D9D3C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9D40: jal         0x801D9030
    // 0x801D9D44: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    func_801D9030_604410(rdram, ctx);
        goto after_1;
    // 0x801D9D44: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    after_1:
    // 0x801D9D48: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9D4C: jal         0x8003521C
    // 0x801D9D50: addiu       $a0, $a0, -0x629C
    ctx->r4 = ADD32(ctx->r4, -0X629C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801D9D50: addiu       $a0, $a0, -0x629C
    ctx->r4 = ADD32(ctx->r4, -0X629C);
    after_2:
L_801D9D54:
    // 0x801D9D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9D5C: jr          $ra
    // 0x801D9D60: nop

    TRACE_RETURN()
    return;
    // 0x801D9D60: nop

;}
RECOMP_FUNC void func_801F3878_61EC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3878: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F387C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3888: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F388C: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x801F3890: jal         0x801F76D0
    // 0x801F3894: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F3894: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F3898: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F389C: jal         0x801D6330
    // 0x801F38A0: lui         $a1, 0xC2F0
    ctx->r5 = S32(0XC2F0 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_1;
    // 0x801F38A0: lui         $a1, 0xC2F0
    ctx->r5 = S32(0XC2F0 << 16);
    after_1:
    // 0x801F38A4: beq         $v0, $zero, L_801F38CC
    if (ctx->r2 == 0) {
        // 0x801F38A8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F38CC;
    }
    // 0x801F38A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F38AC: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x801F38B0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F38B4: sw          $t6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r14;
    // 0x801F38B8: jal         0x801D31CC
    // 0x801F38BC: addiu       $a1, $a1, -0x4D60
    ctx->r5 = ADD32(ctx->r5, -0X4D60);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F38BC: addiu       $a1, $a1, -0x4D60
    ctx->r5 = ADD32(ctx->r5, -0X4D60);
    after_2:
    // 0x801F38C0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F38C4: jal         0x8003521C
    // 0x801F38C8: addiu       $a0, $a0, 0x38DC
    ctx->r4 = ADD32(ctx->r4, 0X38DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F38C8: addiu       $a0, $a0, 0x38DC
    ctx->r4 = ADD32(ctx->r4, 0X38DC);
    after_3:
L_801F38CC:
    // 0x801F38CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F38D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F38D4: jr          $ra
    // 0x801F38D8: nop

    TRACE_RETURN()
    return;
    // 0x801F38D8: nop

;}
RECOMP_FUNC void func_801DA07C_60545C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA07C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DA080: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DA084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DA088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA08C: sw          $zero, 0x174($v0)
    MEM_W(0X174, ctx->r2) = 0;
    // 0x801DA090: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DA094: sb          $zero, 0x30($a0)
    MEM_B(0X30, ctx->r4) = 0;
    // 0x801DA098: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x801DA09C: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    // 0x801DA0A0: jal         0x80038BC8
    // 0x801DA0A4: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801DA0A4: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    after_0:
    // 0x801DA0A8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DA0AC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x801DA0B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA0B4: lwc1        $f4, 0x70($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801DA0B8: lwc1        $f8, 0x74($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X74);
    // 0x801DA0BC: lwc1        $f16, 0x78($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X78);
    // 0x801DA0C0: lw          $t6, 0x80($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X80);
    // 0x801DA0C4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801DA0C8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x801DA0CC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801DA0D0: lw          $v0, 0x90($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X90);
    // 0x801DA0D4: swc1        $f6, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f6.u32l;
    // 0x801DA0D8: swc1        $f10, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->f10.u32l;
    // 0x801DA0DC: swc1        $f18, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f18.u32l;
    // 0x801DA0E0: sw          $t6, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r14;
    // 0x801DA0E4: addiu       $a0, $a0, -0x5F00
    ctx->r4 = ADD32(ctx->r4, -0X5F00);
    // 0x801DA0E8: jal         0x8003521C
    // 0x801DA0EC: sw          $t7, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801DA0EC: sw          $t7, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r15;
    after_1:
    // 0x801DA0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA0F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DA0F8: jr          $ra
    // 0x801DA0FC: nop

    TRACE_RETURN()
    return;
    // 0x801DA0FC: nop

;}
RECOMP_FUNC void func_801F7054_622434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7054: jr          $ra
    // 0x801F7058: nop

    TRACE_RETURN()
    return;
    // 0x801F7058: nop

;}
RECOMP_FUNC void func_801D3770_5FEB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3770: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x801D3774: beql        $v0, $zero, L_801D384C
    if (ctx->r2 == 0) {
        // 0x801D3778: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D384C;
    }
    goto skip_0;
    // 0x801D3778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801D377C: lbu         $t6, 0x4C($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4C);
    // 0x801D3780: addiu       $t7, $t6, -0x32
    ctx->r15 = ADD32(ctx->r14, -0X32);
    // 0x801D3784: sltiu       $at, $t7, 0x2B
    ctx->r1 = ctx->r15 < 0X2B ? 1 : 0;
    // 0x801D3788: beq         $at, $zero, L_801D383C
    if (ctx->r1 == 0) {
        // 0x801D378C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801D383C;
    }
    // 0x801D378C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801D3790: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D3794: addu        $at, $at, $t7
    gpr jr_addend_801D379C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D3798: lw          $t7, -0x2A5C($at)
    ctx->r15 = ADD32(ctx->r1, -0X2A5C);
    // 0x801D379C: jr          $t7
    // 0x801D37A0: nop

    switch (jr_addend_801D379C >> 2) {
        case 0: goto L_801D37A4; break;
        case 1: goto L_801D37AC; break;
        case 2: goto L_801D37B4; break;
        case 3: goto L_801D383C; break;
        case 4: goto L_801D383C; break;
        case 5: goto L_801D383C; break;
        case 6: goto L_801D383C; break;
        case 7: goto L_801D383C; break;
        case 8: goto L_801D383C; break;
        case 9: goto L_801D383C; break;
        case 10: goto L_801D37BC; break;
        case 11: goto L_801D37C4; break;
        case 12: goto L_801D37CC; break;
        case 13: goto L_801D383C; break;
        case 14: goto L_801D383C; break;
        case 15: goto L_801D383C; break;
        case 16: goto L_801D383C; break;
        case 17: goto L_801D383C; break;
        case 18: goto L_801D383C; break;
        case 19: goto L_801D383C; break;
        case 20: goto L_801D37D4; break;
        case 21: goto L_801D37DC; break;
        case 22: goto L_801D37E4; break;
        case 23: goto L_801D383C; break;
        case 24: goto L_801D383C; break;
        case 25: goto L_801D383C; break;
        case 26: goto L_801D383C; break;
        case 27: goto L_801D383C; break;
        case 28: goto L_801D383C; break;
        case 29: goto L_801D383C; break;
        case 30: goto L_801D37EC; break;
        case 31: goto L_801D37F4; break;
        case 32: goto L_801D37FC; break;
        case 33: goto L_801D3804; break;
        case 34: goto L_801D380C; break;
        case 35: goto L_801D3814; break;
        case 36: goto L_801D381C; break;
        case 37: goto L_801D383C; break;
        case 38: goto L_801D383C; break;
        case 39: goto L_801D383C; break;
        case 40: goto L_801D3824; break;
        case 41: goto L_801D382C; break;
        case 42: goto L_801D3834; break;
        default: switch_error(__func__, 0x801D379C, 0x8020D5A4);
    }
    // 0x801D37A0: nop

L_801D37A4:
    // 0x801D37A4: jr          $ra
    // 0x801D37A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    TRACE_RETURN()
    return;
    // 0x801D37A8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_801D37AC:
    // 0x801D37AC: jr          $ra
    // 0x801D37B0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    TRACE_RETURN()
    return;
    // 0x801D37B0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_801D37B4:
    // 0x801D37B4: jr          $ra
    // 0x801D37B8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D37B8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_801D37BC:
    // 0x801D37BC: jr          $ra
    // 0x801D37C0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D37C0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_801D37C4:
    // 0x801D37C4: jr          $ra
    // 0x801D37C8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    TRACE_RETURN()
    return;
    // 0x801D37C8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_801D37CC:
    // 0x801D37CC: jr          $ra
    // 0x801D37D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    TRACE_RETURN()
    return;
    // 0x801D37D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_801D37D4:
    // 0x801D37D4: jr          $ra
    // 0x801D37D8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D37D8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_801D37DC:
    // 0x801D37DC: jr          $ra
    // 0x801D37E0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    TRACE_RETURN()
    return;
    // 0x801D37E0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_801D37E4:
    // 0x801D37E4: jr          $ra
    // 0x801D37E8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    TRACE_RETURN()
    return;
    // 0x801D37E8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_801D37EC:
    // 0x801D37EC: jr          $ra
    // 0x801D37F0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    TRACE_RETURN()
    return;
    // 0x801D37F0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_801D37F4:
    // 0x801D37F4: jr          $ra
    // 0x801D37F8: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    TRACE_RETURN()
    return;
    // 0x801D37F8: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_801D37FC:
    // 0x801D37FC: jr          $ra
    // 0x801D3800: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D3800: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_801D3804:
    // 0x801D3804: jr          $ra
    // 0x801D3808: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    TRACE_RETURN()
    return;
    // 0x801D3808: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_801D380C:
    // 0x801D380C: jr          $ra
    // 0x801D3810: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D3810: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_801D3814:
    // 0x801D3814: jr          $ra
    // 0x801D3818: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    TRACE_RETURN()
    return;
    // 0x801D3818: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_801D381C:
    // 0x801D381C: jr          $ra
    // 0x801D3820: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D3820: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_801D3824:
    // 0x801D3824: jr          $ra
    // 0x801D3828: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    TRACE_RETURN()
    return;
    // 0x801D3828: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_801D382C:
    // 0x801D382C: jr          $ra
    // 0x801D3830: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    TRACE_RETURN()
    return;
    // 0x801D3830: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_801D3834:
    // 0x801D3834: jr          $ra
    // 0x801D3838: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    TRACE_RETURN()
    return;
    // 0x801D3838: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_801D383C:
    // 0x801D383C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D3840: jr          $ra
    // 0x801D3844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3844: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801D3848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D384C:
    // 0x801D384C: jr          $ra
    // 0x801D3850: nop

    TRACE_RETURN()
    return;
    // 0x801D3850: nop

;}
RECOMP_FUNC void func_801FA1F0_6255D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA1F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA1F4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FA1F8: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FA1FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA200: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FA204: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA208: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801FA20C: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x801FA210: jal         0x801EE658
    // 0x801FA214: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x801FA214: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x801FA218: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801FA21C: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801FA220: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FA224: lbu         $t0, 0x2C1($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X2C1);
    // 0x801FA228: bnel        $t0, $at, L_801FA2B4
    if (ctx->r8 != ctx->r1) {
        // 0x801FA22C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FA2B4;
    }
    goto skip_0;
    // 0x801FA22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FA230: jal         0x80038BC8
    // 0x801FA234: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FA234: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x801FA238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FA23C: jal         0x80037C9C
    // 0x801FA240: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801FA240: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    after_2:
    // 0x801FA244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FA248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801FA24C: jal         0x80037C20
    // 0x801FA250: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801FA250: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x801FA254: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801FA258: lw          $t2, -0x10D0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X10D0);
    // 0x801FA25C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA260: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801FA264: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x801FA268: sb          $t1, 0xC($t2)
    MEM_B(0XC, ctx->r10) = ctx->r9;
    // 0x801FA26C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801FA270: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801FA274: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801FA278: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    // 0x801FA27C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801FA280: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x801FA284: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x801FA288: jal         0x801E0950
    // 0x801FA28C: nop

    func_801E0950_60BD30(rdram, ctx);
        goto after_4;
    // 0x801FA28C: nop

    after_4:
    // 0x801FA290: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801FA294: lw          $t3, 0x18($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X18);
    // 0x801FA298: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FA29C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA2A0: addiu       $a0, $a0, -0x5D40
    ctx->r4 = ADD32(ctx->r4, -0X5D40);
    // 0x801FA2A4: sw          $t3, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->r11;
    // 0x801FA2A8: jal         0x8003521C
    // 0x801FA2AC: swc1        $f10, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FA2AC: swc1        $f10, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f10.u32l;
    after_5:
    // 0x801FA2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FA2B4:
    // 0x801FA2B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA2B8: jr          $ra
    // 0x801FA2BC: nop

    TRACE_RETURN()
    return;
    // 0x801FA2BC: nop

;}
RECOMP_FUNC void func_802074EC_6328CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802074EC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802074F0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802074F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802074F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802074FC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80207500: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80207504: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x80207508: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x8020750C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80207510: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80207514: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x80207518: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8020751C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80207520: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x80207524: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80207528: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
    // 0x8020752C: lwc1        $f16, 0x20($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80207530: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
    // 0x80207534: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80207538: bgez        $t6, L_8020754C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8020753C: swc1        $f18, 0x24($v1)
        MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
            goto L_8020754C;
    }
    // 0x8020753C: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
    // 0x80207540: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80207544: nop

    // 0x80207548: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8020754C:
    // 0x8020754C: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80207550: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80207554: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80207558: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8020755C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80207560: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80207564: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80207568: nop

    // 0x8020756C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80207570: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80207574: nop

    // 0x80207578: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8020757C: beql        $t8, $zero, L_802075CC
    if (ctx->r24 == 0) {
        // 0x80207580: mfc1        $t8, $f4
        ctx->r24 = (int32_t)ctx->f4.u32l;
            goto L_802075CC;
    }
    goto skip_0;
    // 0x80207580: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x80207584: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80207588: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8020758C: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80207590: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80207594: nop

    // 0x80207598: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8020759C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802075A0: nop

    // 0x802075A4: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x802075A8: bne         $t8, $zero, L_802075C0
    if (ctx->r24 != 0) {
        // 0x802075AC: nop
    
            goto L_802075C0;
    }
    // 0x802075AC: nop

    // 0x802075B0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x802075B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802075B8: b           L_802075D8
    // 0x802075BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_802075D8;
    // 0x802075BC: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_802075C0:
    // 0x802075C0: b           L_802075D8
    // 0x802075C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_802075D8;
    // 0x802075C4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x802075C8: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
L_802075CC:
    // 0x802075CC: nop

    // 0x802075D0: bltz        $t8, L_802075C0
    if (SIGNED(ctx->r24) < 0) {
        // 0x802075D4: nop
    
            goto L_802075C0;
    }
    // 0x802075D4: nop

L_802075D8:
    // 0x802075D8: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x802075DC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802075E0: sh          $t8, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r24;
    // 0x802075E4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802075E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802075EC: bgez        $t9, L_80207600
    if (SIGNED(ctx->r25) >= 0) {
        // 0x802075F0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80207600;
    }
    // 0x802075F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802075F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802075F8: nop

    // 0x802075FC: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_80207600:
    // 0x80207600: lwc1        $f16, 0x74($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X74);
    // 0x80207604: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80207608: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8020760C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80207610: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80207614: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80207618: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8020761C: nop

    // 0x80207620: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80207624: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80207628: nop

    // 0x8020762C: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x80207630: beql        $t1, $zero, L_80207680
    if (ctx->r9 == 0) {
        // 0x80207634: mfc1        $t1, $f8
        ctx->r9 = (int32_t)ctx->f8.u32l;
            goto L_80207680;
    }
    goto skip_1;
    // 0x80207634: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    skip_1:
    // 0x80207638: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8020763C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80207640: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80207644: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80207648: nop

    // 0x8020764C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80207650: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80207654: nop

    // 0x80207658: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x8020765C: bne         $t1, $zero, L_80207674
    if (ctx->r9 != 0) {
        // 0x80207660: nop
    
            goto L_80207674;
    }
    // 0x80207660: nop

    // 0x80207664: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x80207668: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8020766C: b           L_8020768C
    // 0x80207670: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_8020768C;
    // 0x80207670: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_80207674:
    // 0x80207674: b           L_8020768C
    // 0x80207678: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_8020768C;
    // 0x80207678: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8020767C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
L_80207680:
    // 0x80207680: nop

    // 0x80207684: bltz        $t1, L_80207674
    if (SIGNED(ctx->r9) < 0) {
        // 0x80207688: nop
    
            goto L_80207674;
    }
    // 0x80207688: nop

L_8020768C:
    // 0x8020768C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80207690: jr          $ra
    // 0x80207694: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80207694: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
;}
RECOMP_FUNC void func_801EA060_615440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA060: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801EA064: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801EA068: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801EA06C: jr          $ra
    // 0x801EA070: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801EA070: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
;}
RECOMP_FUNC void func_801F04E0_61B8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F04E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F04E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F04E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F04EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F04F0: jal         0x801D3018
    // 0x801F04F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F04F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F04F8: lui         $a1, 0x3CA3
    ctx->r5 = S32(0X3CA3 << 16);
    // 0x801F04FC: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F0500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0504: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F0508: jal         0x801F72B4
    // 0x801F050C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_801F72B4_622694(rdram, ctx);
        goto after_1;
    // 0x801F050C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_1:
    // 0x801F0510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F0514: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801F0518: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F051C: bgtz        $t7, L_801F0530
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F0520: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_801F0530;
    }
    // 0x801F0520: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801F0524: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0528: jal         0x8003521C
    // 0x801F052C: addiu       $a0, $a0, 0x12F8
    ctx->r4 = ADD32(ctx->r4, 0X12F8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F052C: addiu       $a0, $a0, 0x12F8
    ctx->r4 = ADD32(ctx->r4, 0X12F8);
    after_2:
L_801F0530:
    // 0x801F0530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F0534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F0538: jr          $ra
    // 0x801F053C: nop

    TRACE_RETURN()
    return;
    // 0x801F053C: nop

;}
RECOMP_FUNC void func_80203DFC_62F1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203DFC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80203E00: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80203E04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80203E08: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203E0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80203E10: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x80203E14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80203E18: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80203E1C: jal         0x801D614C
    // 0x80203E20: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    func_801D614C_60152C(rdram, ctx);
        goto after_0;
    // 0x80203E20: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    after_0:
    // 0x80203E24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80203E28: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80203E2C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80203E30: nop

    // 0x80203E34: bc1f        L_80203E4C
    if (!c1cs) {
        // 0x80203E38: nop
    
            goto L_80203E4C;
    }
    // 0x80203E38: nop

    // 0x80203E3C: jal         0x80035020
    // 0x80203E40: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x80203E40: nop

    after_1:
    // 0x80203E44: b           L_80203F4C
    // 0x80203E48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80203F4C;
    // 0x80203E48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203E4C:
    // 0x80203E4C: jal         0x801D365C
    // 0x80203E50: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_2;
    // 0x80203E50: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x80203E54: bne         $v0, $zero, L_80203E6C
    if (ctx->r2 != 0) {
        // 0x80203E58: nop
    
            goto L_80203E6C;
    }
    // 0x80203E58: nop

    // 0x80203E5C: jal         0x801D36CC
    // 0x80203E60: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_3;
    // 0x80203E60: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x80203E64: beql        $v0, $zero, L_80203F4C
    if (ctx->r2 == 0) {
        // 0x80203E68: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80203F4C;
    }
    goto skip_0;
    // 0x80203E68: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_80203E6C:
    // 0x80203E6C: jal         0x801D3854
    // 0x80203E70: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D3854_5FEC34(rdram, ctx);
        goto after_4;
    // 0x80203E70: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x80203E74: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80203E78: bne         $at, $zero, L_80203E9C
    if (ctx->r1 != 0) {
        // 0x80203E7C: nop
    
            goto L_80203E9C;
    }
    // 0x80203E7C: nop

    // 0x80203E80: jal         0x801D3A68
    // 0x80203E84: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_5;
    // 0x80203E84: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x80203E88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80203E8C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80203E90: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x80203E94: jal         0x801D7438
    // 0x80203E98: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_6;
    // 0x80203E98: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_6:
L_80203E9C:
    // 0x80203E9C: jal         0x801D365C
    // 0x80203EA0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_7;
    // 0x80203EA0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_7:
    // 0x80203EA4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80203EA8: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x80203EAC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80203EB0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80203EB4: lw          $t8, 0x1CC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1CC);
    // 0x80203EB8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80203EBC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80203EC0: bne         $v0, $t8, L_80203EFC
    if (ctx->r2 != ctx->r24) {
        // 0x80203EC4: addiu       $a1, $v1, 0xA0
        ctx->r5 = ADD32(ctx->r3, 0XA0);
            goto L_80203EFC;
    }
    // 0x80203EC4: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x80203EC8: lbu         $t0, 0xE($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XE);
    // 0x80203ECC: bne         $t0, $zero, L_80203F04
    if (ctx->r8 != 0) {
        // 0x80203ED0: nop
    
            goto L_80203F04;
    }
    // 0x80203ED0: nop

    // 0x80203ED4: lbu         $t1, 0x2C5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2C5);
    // 0x80203ED8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80203EDC: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x80203EE0: bne         $t1, $zero, L_80203F04
    if (ctx->r9 != 0) {
        // 0x80203EE4: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_80203F04;
    }
    // 0x80203EE4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80203EE8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80203EEC: jal         0x8000F3D8
    // 0x80203EF0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_8;
    // 0x80203EF0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_8:
    // 0x80203EF4: b           L_80203F04
    // 0x80203EF8: nop

        goto L_80203F04;
    // 0x80203EF8: nop

L_80203EFC:
    // 0x80203EFC: jal         0x8000F3D8
    // 0x80203F00: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_9;
    // 0x80203F00: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_9:
L_80203F04:
    // 0x80203F04: jal         0x801CEE80
    // 0x80203F08: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_10;
    // 0x80203F08: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_10:
    // 0x80203F0C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80203F10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80203F14: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80203F18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80203F1C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80203F20: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80203F24: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80203F28: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80203F2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80203F30: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80203F34: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80203F38: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80203F3C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80203F40: jal         0x801E1B30
    // 0x80203F44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_11;
    // 0x80203F44: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x80203F48: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203F4C:
    // 0x80203F4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80203F50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80203F54: jr          $ra
    // 0x80203F58: nop

    TRACE_RETURN()
    return;
    // 0x80203F58: nop

;}
RECOMP_FUNC void func_801DDABC_608E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDABC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DDAC0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DDAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDAC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DDACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDAD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DDAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DDAD8: addiu       $v1, $v0, 0x140
    ctx->r3 = ADD32(ctx->r2, 0X140);
    // 0x801DDADC: swc1        $f4, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f4.u32l;
    // 0x801DDAE0: jal         0x80034ED4
    // 0x801DDAE4: sb          $zero, 0xB($v1)
    MEM_B(0XB, ctx->r3) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801DDAE4: sb          $zero, 0xB($v1)
    MEM_B(0XB, ctx->r3) = 0;
    after_0:
    // 0x801DDAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDAF0: jr          $ra
    // 0x801DDAF4: nop

    TRACE_RETURN()
    return;
    // 0x801DDAF4: nop

;}
RECOMP_FUNC void func_801EBCB4_617094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBCB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EBCB8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EBCBC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EBCC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EBCC4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801EBCC8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801EBCCC: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EBCD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EBCD4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EBCD8: lw          $t7, 0xD8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD8);
    // 0x801EBCDC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801EBCE0: beql        $t7, $at, L_801EBD04
    if (ctx->r15 == ctx->r1) {
        // 0x801EBCE4: lwc1        $f4, 0x90($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801EBD04;
    }
    goto skip_0;
    // 0x801EBCE4: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    skip_0:
    // 0x801EBCE8: jal         0x80038BC8
    // 0x801EBCEC: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801EBCEC: ori         $a0, $zero, 0x8122
    ctx->r4 = 0 | 0X8122;
    after_0:
    // 0x801EBCF0: jal         0x80034ED4
    // 0x801EBCF4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801EBCF4: nop

    after_1:
    // 0x801EBCF8: b           L_801EBDB0
    // 0x801EBCFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EBDB0;
    // 0x801EBCFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EBD00: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
L_801EBD04:
    // 0x801EBD04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EBD08: swc1        $f4, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f4.u32l;
    // 0x801EBD0C: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EBD10: swc1        $f6, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f6.u32l;
    // 0x801EBD14: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EBD18: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
    // 0x801EBD1C: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801EBD20: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801EBD24: nop

    // 0x801EBD28: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801EBD2C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x801EBD30: jal         0x801D3018
    // 0x801EBD34: nop

    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x801EBD34: nop

    after_2:
    // 0x801EBD38: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x801EBD3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EBD40: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801EBD44: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801EBD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBD4C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801EBD50: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EBD54: bc1fl       L_801EBD7C
    if (!c1cs) {
        // 0x801EBD58: trunc.w.s   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801EBD7C;
    }
    goto skip_1;
    // 0x801EBD58: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_1:
    // 0x801EBD5C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801EBD60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801EBD64: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x801EBD68: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x801EBD6C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801EBD70: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    // 0x801EBD74: lwc1        $f0, 0x98($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801EBD78: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
L_801EBD7C:
    // 0x801EBD7C: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801EBD80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EBD84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EBD88: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x801EBD8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EBD90: jal         0x8000DF10
    // 0x801EBD94: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_3;
    // 0x801EBD94: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x801EBD98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EBD9C: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x801EBDA0: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EBDA4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x801EBDA8: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
    // 0x801EBDAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EBDB0:
    // 0x801EBDB0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBDB4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801EBDB8: jr          $ra
    // 0x801EBDBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801EBDBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E4194_60F574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4194: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E4198: addiu       $v0, $v0, -0x10F8
    ctx->r2 = ADD32(ctx->r2, -0X10F8);
    // 0x801E419C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x801E41A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E41A4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801E41A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E41AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801E41B0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801E41B4: sw          $t6, 0x90($t0)
    MEM_W(0X90, ctx->r8) = ctx->r14;
    // 0x801E41B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801E41BC: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801E41C0: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x801E41C4: sw          $t7, 0x94($t1)
    MEM_W(0X94, ctx->r9) = ctx->r15;
    // 0x801E41C8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801E41CC: andi        $t9, $a3, 0xFFFF
    ctx->r25 = ctx->r7 & 0XFFFF;
    // 0x801E41D0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801E41D4: sw          $t8, 0x98($t2)
    MEM_W(0X98, ctx->r10) = ctx->r24;
    // 0x801E41D8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801E41DC: sw          $t9, 0x9C($t3)
    MEM_W(0X9C, ctx->r11) = ctx->r25;
    // 0x801E41E0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801E41E4: jr          $ra
    // 0x801E41E8: sw          $t4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x801E41E8: sw          $t4, 0x84($t5)
    MEM_W(0X84, ctx->r13) = ctx->r12;
;}
RECOMP_FUNC void func_801FB814_626BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB814: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FB818: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801FB81C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801FB820: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801FB824: lw          $t6, 0x80($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X80);
    // 0x801FB828: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FB82C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FB830: bgtz        $t7, L_801FB85C
    if (SIGNED(ctx->r15) > 0) {
        // 0x801FB834: sw          $t7, 0x80($a0)
        MEM_W(0X80, ctx->r4) = ctx->r15;
            goto L_801FB85C;
    }
    // 0x801FB834: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x801FB838: jal         0x80038BC8
    // 0x801FB83C: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801FB83C: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    after_0:
    // 0x801FB840: jal         0x8000DD58
    // 0x801FB844: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801FB844: addiu       $a0, $zero, 0x320
    ctx->r4 = ADD32(0, 0X320);
    after_1:
    // 0x801FB848: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FB84C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801FB850: mflo        $t9
    ctx->r25 = lo;
    // 0x801FB854: addiu       $t0, $t9, 0x7
    ctx->r8 = ADD32(ctx->r25, 0X7);
    // 0x801FB858: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
L_801FB85C:
    // 0x801FB85C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801FB860: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FB864: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FB868: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x801FB86C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801FB870: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FB874: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801FB878: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801FB87C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FB880: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x801FB884: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801FB888: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801FB88C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801FB890: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FB894: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801FB898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FB89C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801FB8A0: lwc1        $f16, 0x10($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X10);
    // 0x801FB8A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FB8A8: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x801FB8AC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x801FB8B0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x801FB8B4: jal         0x801DFB90
    // 0x801FB8B8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_2;
    // 0x801FB8B8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801FB8BC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801FB8C0: jal         0x801D2F40
    // 0x801FB8C4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801FB8C4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_3:
    // 0x801FB8C8: lw          $t2, 0x7C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X7C);
    // 0x801FB8CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801FB8D0: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801FB8D4: addiu       $v0, $t2, -0x1
    ctx->r2 = ADD32(ctx->r10, -0X1);
    // 0x801FB8D8: bne         $v0, $at, L_801FB8F0
    if (ctx->r2 != ctx->r1) {
        // 0x801FB8DC: sw          $v0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r2;
            goto L_801FB8F0;
    }
    // 0x801FB8DC: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801FB8E0: lw          $t5, -0x1130($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1130);
    // 0x801FB8E4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801FB8E8: sb          $t4, 0x2C1($t5)
    MEM_B(0X2C1, ctx->r13) = ctx->r12;
    // 0x801FB8EC: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801FB8F0:
    // 0x801FB8F0: bne         $v0, $zero, L_801FB920
    if (ctx->r2 != 0) {
        // 0x801FB8F4: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801FB920;
    }
    // 0x801FB8F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FB8F8: jal         0x8003521C
    // 0x801FB8FC: addiu       $a0, $a0, -0x46CC
    ctx->r4 = ADD32(ctx->r4, -0X46CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FB8FC: addiu       $a0, $a0, -0x46CC
    ctx->r4 = ADD32(ctx->r4, -0X46CC);
    after_4:
    // 0x801FB900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FB904: jal         0x80037C9C
    // 0x801FB908: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801FB908: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_5:
    // 0x801FB90C: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801FB910: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801FB914: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801FB918: jal         0x80037C20
    // 0x801FB91C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801FB91C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_801FB920:
    // 0x801FB920: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801FB924: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801FB928: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801FB92C: jr          $ra
    // 0x801FB930: nop

    TRACE_RETURN()
    return;
    // 0x801FB930: nop

;}
RECOMP_FUNC void func_801FBBBC_626F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBBBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBBC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBBC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FBBC8: jal         0x801FFE6C
    // 0x801FBBCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FBBCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FBBD0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FBBD4: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x801FBBD8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801FBBDC: ori         $a0, $zero, 0x8152
    ctx->r4 = 0 | 0X8152;
    // 0x801FBBE0: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FBBE4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801FBBE8: jal         0x80038BC8
    // 0x801FBBEC: sb          $zero, 0x817($t7)
    MEM_B(0X817, ctx->r15) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FBBEC: sb          $zero, 0x817($t7)
    MEM_B(0X817, ctx->r15) = 0;
    after_1:
    // 0x801FBBF0: jal         0x801FFE14
    // 0x801FBBF4: nop

    func_801FFE14_62B1F4(rdram, ctx);
        goto after_2;
    // 0x801FBBF4: nop

    after_2:
    // 0x801FBBF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FBBFC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FBC00: addiu       $a1, $a1, -0x4C10
    ctx->r5 = ADD32(ctx->r5, -0X4C10);
    // 0x801FBC04: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x801FBC08: jal         0x801D31CC
    // 0x801FBC0C: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FBC0C: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    after_3:
    // 0x801FBC10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBC14: jal         0x8003521C
    // 0x801FBC18: addiu       $a0, $a0, -0x43D4
    ctx->r4 = ADD32(ctx->r4, -0X43D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FBC18: addiu       $a0, $a0, -0x43D4
    ctx->r4 = ADD32(ctx->r4, -0X43D4);
    after_4:
    // 0x801FBC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FBC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBC24: jr          $ra
    // 0x801FBC28: nop

    TRACE_RETURN()
    return;
    // 0x801FBC28: nop

;}
RECOMP_FUNC void func_802081EC_6335CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802081EC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802081F0: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x802081F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802081F8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802081FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80208200: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80208204: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80208208: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020820C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208210: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x80208214: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x80208218: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x8020821C: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x80208220: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x80208224: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80208228: jal         0x801D4EB8
    // 0x8020822C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D4EB8_600298(rdram, ctx);
        goto after_0;
    // 0x8020822C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x80208230: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80208234: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80208238: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8020823C: lhu         $a0, 0x1A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X1A);
    // 0x80208240: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x80208244: beq         $at, $zero, L_80208268
    if (ctx->r1 == 0) {
        // 0x80208248: addiu       $t6, $a0, 0xA
        ctx->r14 = ADD32(ctx->r4, 0XA);
            goto L_80208268;
    }
    // 0x80208248: addiu       $t6, $a0, 0xA
    ctx->r14 = ADD32(ctx->r4, 0XA);
    // 0x8020824C: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x80208250: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x80208254: bne         $at, $zero, L_80208268
    if (ctx->r1 != 0) {
        // 0x80208258: sh          $t6, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r14;
            goto L_80208268;
    }
    // 0x80208258: sh          $t6, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r14;
    // 0x8020825C: addiu       $t7, $zero, 0x1380
    ctx->r15 = ADD32(0, 0X1380);
    // 0x80208260: sh          $t7, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r15;
    // 0x80208264: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
L_80208268:
    // 0x80208268: slti        $at, $a0, 0x1381
    ctx->r1 = SIGNED(ctx->r4) < 0X1381 ? 1 : 0;
    // 0x8020826C: bne         $at, $zero, L_8020828C
    if (ctx->r1 != 0) {
        // 0x80208270: addiu       $t8, $a0, -0xA
        ctx->r24 = ADD32(ctx->r4, -0XA);
            goto L_8020828C;
    }
    // 0x80208270: addiu       $t8, $a0, -0xA
    ctx->r24 = ADD32(ctx->r4, -0XA);
    // 0x80208274: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80208278: slti        $at, $t9, 0x1381
    ctx->r1 = SIGNED(ctx->r25) < 0X1381 ? 1 : 0;
    // 0x8020827C: beq         $at, $zero, L_8020828C
    if (ctx->r1 == 0) {
        // 0x80208280: sh          $t8, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r24;
            goto L_8020828C;
    }
    // 0x80208280: sh          $t8, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r24;
    // 0x80208284: addiu       $t0, $zero, 0x1380
    ctx->r8 = ADD32(0, 0X1380);
    // 0x80208288: sh          $t0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r8;
L_8020828C:
    // 0x8020828C: beql        $v0, $zero, L_802082CC
    if (ctx->r2 == 0) {
        // 0x80208290: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802082CC;
    }
    goto skip_0;
    // 0x80208290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80208294: lhu         $t1, 0x1A($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X1A);
    // 0x80208298: addiu       $at, $zero, 0x1380
    ctx->r1 = ADD32(0, 0X1380);
    // 0x8020829C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802082A0: bne         $t1, $at, L_802082C8
    if (ctx->r9 != ctx->r1) {
        // 0x802082A4: lui         $t3, 0x8021
        ctx->r11 = S32(0X8021 << 16);
            goto L_802082C8;
    }
    // 0x802082A4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802082A8: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x802082AC: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x802082B0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802082B4: sb          $t2, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = ctx->r10;
    // 0x802082B8: sw          $t4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r12;
    // 0x802082BC: swc1        $f14, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f14.u32l;
    // 0x802082C0: jal         0x8003521C
    // 0x802082C4: addiu       $a0, $a0, -0x7D28
    ctx->r4 = ADD32(ctx->r4, -0X7D28);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802082C4: addiu       $a0, $a0, -0x7D28
    ctx->r4 = ADD32(ctx->r4, -0X7D28);
    after_1:
L_802082C8:
    // 0x802082C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802082CC:
    // 0x802082CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802082D0: jr          $ra
    // 0x802082D4: nop

    TRACE_RETURN()
    return;
    // 0x802082D4: nop

;}
RECOMP_FUNC void func_801FCF68_628348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCF68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FCF6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FCF70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FCF74: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FCF78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FCF7C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FCF80: jal         0x801D2F40
    // 0x801FCF84: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FCF84: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x801FCF88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FCF8C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCF90: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FCF94: nop

    // 0x801FCF98: bc1fl       L_801FD01C
    if (!c1cs) {
        // 0x801FCF9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FD01C;
    }
    goto skip_0;
    // 0x801FCF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FCFA0: lhu         $t6, 0x16($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X16);
    // 0x801FCFA4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x801FCFA8: addiu       $t8, $t6, 0x40
    ctx->r24 = ADD32(ctx->r14, 0X40);
    // 0x801FCFAC: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801FCFB0: sh          $t8, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r24;
    // 0x801FCFB4: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801FCFB8: bne         $t0, $zero, L_801FCFD0
    if (ctx->r8 != 0) {
        // 0x801FCFBC: sh          $t9, 0x16($a2)
        MEM_H(0X16, ctx->r6) = ctx->r25;
            goto L_801FCFD0;
    }
    // 0x801FCFBC: sh          $t9, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r25;
    // 0x801FCFC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FCFC4: jal         0x8020003C
    // 0x801FCFC8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8020003C_62B41C(rdram, ctx);
        goto after_1;
    // 0x801FCFC8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x801FCFCC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
L_801FCFD0:
    // 0x801FCFD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FCFD4: jal         0x801D614C
    // 0x801FCFD8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x801FCFD8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_2:
    // 0x801FCFDC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCFE0: lui         $at, 0xC352
    ctx->r1 = S32(0XC352 << 16);
    // 0x801FCFE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FCFE8: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801FCFEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801FCFF0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCFF4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x801FCFF8: nop

    // 0x801FCFFC: bc1fl       L_801FD01C
    if (!c1cs) {
        // 0x801FD000: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FD01C;
    }
    goto skip_1;
    // 0x801FD000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801FD004: jal         0x801D31CC
    // 0x801FD008: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FD008: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    after_3:
    // 0x801FD00C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD010: jal         0x8003521C
    // 0x801FD014: addiu       $a0, $a0, -0x2FD8
    ctx->r4 = ADD32(ctx->r4, -0X2FD8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801FD014: addiu       $a0, $a0, -0x2FD8
    ctx->r4 = ADD32(ctx->r4, -0X2FD8);
    after_4:
    // 0x801FD018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FD01C:
    // 0x801FD01C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FD020: jr          $ra
    // 0x801FD024: nop

    TRACE_RETURN()
    return;
    // 0x801FD024: nop

;}
RECOMP_FUNC void func_801EC0D4_6174B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC0D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EC0D8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EC0DC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EC0E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801EC0E4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801EC0E8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801EC0EC: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x801EC0F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EC0F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC0F8: lw          $t7, 0xD8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XD8);
    // 0x801EC0FC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801EC100: beql        $t7, $at, L_801EC11C
    if (ctx->r15 == ctx->r1) {
        // 0x801EC104: lwc1        $f2, 0x90($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X90);
            goto L_801EC11C;
    }
    goto skip_0;
    // 0x801EC104: lwc1        $f2, 0x90($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X90);
    skip_0:
    // 0x801EC108: jal         0x80034ED4
    // 0x801EC10C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801EC10C: nop

    after_0:
    // 0x801EC110: b           L_801EC1C8
    // 0x801EC114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801EC1C8;
    // 0x801EC114: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801EC118: lwc1        $f2, 0x90($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X90);
L_801EC11C:
    // 0x801EC11C: lwc1        $f12, 0x1C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EC120: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801EC124: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x801EC128: nop

    // 0x801EC12C: bc1f        L_801EC170
    if (!c1cs) {
        // 0x801EC130: nop
    
            goto L_801EC170;
    }
    // 0x801EC130: nop

    // 0x801EC134: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EC138: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801EC13C: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801EC140: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x801EC144: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801EC148: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801EC14C: lwc1        $f10, 0x90($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC150: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801EC154: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801EC158: swc1        $f18, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f18.u32l;
    // 0x801EC15C: lwc1        $f6, 0x90($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC160: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801EC164: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801EC168: b           L_801EC178
    // 0x801EC16C: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
        goto L_801EC178;
    // 0x801EC16C: swc1        $f8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f8.u32l;
L_801EC170:
    // 0x801EC170: jal         0x801D614C
    // 0x801EC174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801EC174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_801EC178:
    // 0x801EC178: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x801EC17C: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801EC180: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801EC184: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x801EC188: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x801EC18C: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x801EC190: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801EC194: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801EC198: jal         0x8000EE50
    // 0x801EC19C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000EE50_FA50(rdram, ctx);
        goto after_2;
    // 0x801EC19C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801EC1A0: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EC1A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801EC1A8: nop

    // 0x801EC1AC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801EC1B0: nop

    // 0x801EC1B4: bc1fl       L_801EC1C8
    if (!c1cs) {
        // 0x801EC1B8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801EC1C8;
    }
    goto skip_1;
    // 0x801EC1B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801EC1BC: jal         0x80034ED4
    // 0x801EC1C0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801EC1C0: nop

    after_3:
    // 0x801EC1C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801EC1C8:
    // 0x801EC1C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801EC1CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801EC1D0: jr          $ra
    // 0x801EC1D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801EC1D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801FFE14_62B1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE14: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FFE18: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801FFE1C: addiu       $t6, $zero, 0x1042
    ctx->r14 = ADD32(0, 0X1042);
    // 0x801FFE20: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801FFE24: jr          $ra
    // 0x801FFE28: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801FFE28: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
