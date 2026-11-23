#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F99F0_624DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F99F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F99F4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F99F8: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F99FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9A00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9A04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F9A08: lbu         $t6, 0x2C1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2C1);
    // 0x801F9A0C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801F9A10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F9A14: bne         $t6, $at, L_801F9ABC
    if (ctx->r14 != ctx->r1) {
        // 0x801F9A18: addiu       $v0, $v1, 0xA0
        ctx->r2 = ADD32(ctx->r3, 0XA0);
            goto L_801F9ABC;
    }
    // 0x801F9A18: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x801F9A1C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F9A20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F9A24: ldc1        $f8, -0x1760($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1760);
    // 0x801F9A28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F9A2C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F9A30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F9A34: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x801F9A38: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F9A3C: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x801F9A40: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801F9A44: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801F9A48: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801F9A4C: nop

    // 0x801F9A50: bc1fl       L_801F9A68
    if (!c1cs) {
        // 0x801F9A54: lwc1        $f10, 0x10($v0)
        ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801F9A68;
    }
    goto skip_0;
    // 0x801F9A54: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x801F9A58: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F9A5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F9A60: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x801F9A64: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
L_801F9A68:
    // 0x801F9A68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F9A6C: ldc1        $f18, -0x1758($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X1758);
    // 0x801F9A70: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801F9A74: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x801F9A78: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x801F9A7C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F9A80: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801F9A84: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801F9A88: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F9A8C: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x801F9A90: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801F9A94: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801F9A98: c.le.d      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.d <= ctx->f10.d;
    // 0x801F9A9C: nop

    // 0x801F9AA0: bc1fl       L_801F9AC0
    if (!c1cs) {
        // 0x801F9AA4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F9AC0;
    }
    goto skip_1;
    // 0x801F9AA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_1:
    // 0x801F9AA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F9AAC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x801F9AB0: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x801F9AB4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801F9AB8: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
L_801F9ABC:
    // 0x801F9ABC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_801F9AC0:
    // 0x801F9AC0: bne         $a0, $at, L_801F9AD0
    if (ctx->r4 != ctx->r1) {
        // 0x801F9AC4: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801F9AD0;
    }
    // 0x801F9AC4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9AC8: jal         0x8003521C
    // 0x801F9ACC: addiu       $a0, $a0, -0x6520
    ctx->r4 = ADD32(ctx->r4, -0X6520);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F9ACC: addiu       $a0, $a0, -0x6520
    ctx->r4 = ADD32(ctx->r4, -0X6520);
    after_0:
L_801F9AD0:
    // 0x801F9AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9AD8: jr          $ra
    // 0x801F9ADC: nop

    TRACE_RETURN()
    return;
    // 0x801F9ADC: nop

;}
RECOMP_FUNC void func_802035D0_62E9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802035D0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x802035D4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x802035D8: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x802035DC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x802035E0: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x802035E4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802035E8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x802035EC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x802035F0: lw          $t0, 0x1D8($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X1D8);
    // 0x802035F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802035F8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802035FC: lw          $s1, 0x18($t0)
    ctx->r17 = MEM_W(ctx->r8, 0X18);
    // 0x80203600: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80203604: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80203608: addiu       $t9, $t9, -0x4AA8
    ctx->r25 = ADD32(ctx->r25, -0X4AA8);
    // 0x8020360C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80203610: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80203614: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80203618: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8020361C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80203620: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203624: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80203628: addiu       $t2, $sp, 0x54
    ctx->r10 = ADD32(ctx->r29, 0X54);
    // 0x8020362C: addiu       $t3, $sp, 0x50
    ctx->r11 = ADD32(ctx->r29, 0X50);
    // 0x80203630: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x80203634: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x80203638: lwc1        $f16, 0x20($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X20);
    // 0x8020363C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80203640: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x80203644: lwc1        $f6, 0x24($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80203648: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8020364C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80203650: lhu         $a2, 0x18($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X18);
    // 0x80203654: lhu         $a1, 0x16($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X16);
    // 0x80203658: lhu         $a0, 0x14($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X14);
    // 0x8020365C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80203660: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80203664: jal         0x8000E808
    // 0x80203668: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x80203668: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_0:
    // 0x8020366C: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80203670: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80203674: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80203678: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x8020367C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80203680: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80203684: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x80203688: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x8020368C: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x80203690: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80203694: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80203698: lui         $a1, 0x802
    ctx->r5 = S32(0X802 << 16);
    // 0x8020369C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802036A0: addiu       $a1, $a1, -0x6CB0
    ctx->r5 = ADD32(ctx->r5, -0X6CB0);
    // 0x802036A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802036A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802036AC: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x802036B0: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802036B4: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x802036B8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x802036BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802036C0: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x802036C4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x802036C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x802036CC: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x802036D0: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x802036D4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802036D8: addiu       $t7, $zero, 0x4B5
    ctx->r15 = ADD32(0, 0X4B5);
    // 0x802036DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x802036E0: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802036E4: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x802036E8: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x802036EC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x802036F0: lwc1        $f10, 0x20($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802036F4: addiu       $a0, $a0, 0x396C
    ctx->r4 = ADD32(ctx->r4, 0X396C);
    // 0x802036F8: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x802036FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x80203700: lwc1        $f16, 0x24($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X24);
    // 0x80203704: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80203708: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8020370C: jal         0x80035854
    // 0x80203710: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x80203710: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80203714: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80203718: beq         $v0, $zero, L_80203858
    if (ctx->r2 == 0) {
        // 0x8020371C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80203858;
    }
    // 0x8020371C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80203720: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80203724: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80203728: lwc1        $f18, 0x1C($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x8020372C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80203730: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80203734: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80203738: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8020373C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80203740: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80203744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203748: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8020374C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x80203750: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80203754: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80203758: jal         0x801E006C
    // 0x8020375C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x8020375C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80203760: lbu         $t1, 0x77($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X77);
    // 0x80203764: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x80203768: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8020376C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80203770: sb          $t8, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r24;
    // 0x80203774: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80203778: addiu       $t3, $t3, -0x4B08
    ctx->r11 = ADD32(ctx->r11, -0X4B08);
    // 0x8020377C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80203780: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x80203784: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x80203788: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x8020378C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80203790: lui         $at, 0x4039
    ctx->r1 = S32(0X4039 << 16);
    // 0x80203794: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80203798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8020379C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x802037A0: addiu       $t4, $s0, 0x74
    ctx->r12 = ADD32(ctx->r16, 0X74);
    // 0x802037A4: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x802037A8: addiu       $t5, $s0, 0x78
    ctx->r13 = ADD32(ctx->r16, 0X78);
    // 0x802037AC: addiu       $a3, $s0, 0x70
    ctx->r7 = ADD32(ctx->r16, 0X70);
    // 0x802037B0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x802037B4: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x802037B8: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x802037BC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802037C0: div.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f16.d, ctx->f0.d);
    // 0x802037C4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802037C8: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x802037CC: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x802037D0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802037D4: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x802037D8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x802037DC: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x802037E0: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x802037E4: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x802037E8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x802037EC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x802037F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x802037F4: jal         0x8000E808
    // 0x802037F8: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    func_8000E808_F408(rdram, ctx);
        goto after_3;
    // 0x802037F8: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    after_3:
    // 0x802037FC: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
    // 0x80203800: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80203804: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80203808: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x8020380C: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80203810: addiu       $t2, $zero, -0x28
    ctx->r10 = ADD32(0, -0X28);
    // 0x80203814: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x80203818: sw          $t7, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r15;
    // 0x8020381C: sb          $t8, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r24;
    // 0x80203820: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80203824: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80203828: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x8020382C: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
    // 0x80203830: sh          $t9, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r25;
    // 0x80203834: sh          $t2, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r10;
    // 0x80203838: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8020383C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80203840: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80203844: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80203848: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8020384C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x80203850: jal         0x8000F3D8
    // 0x80203854: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x80203854: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_80203858:
    // 0x80203858: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8020385C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x80203860: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80203864: jr          $ra
    // 0x80203868: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80203868: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801E0660_60BA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0660: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E0664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0668: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x801E066C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E0670: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801E0674: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801E0678: andi        $v0, $t7, 0xFFFF
    ctx->r2 = ctx->r15 & 0XFFFF;
    // 0x801E067C: slti        $at, $v0, 0x400
    ctx->r1 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x801E0680: sh          $t7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r15;
    // 0x801E0684: bne         $at, $zero, L_801E0694
    if (ctx->r1 != 0) {
        // 0x801E0688: addiu       $a2, $a2, 0x140
        ctx->r6 = ADD32(ctx->r6, 0X140);
            goto L_801E0694;
    }
    // 0x801E0688: addiu       $a2, $a2, 0x140
    ctx->r6 = ADD32(ctx->r6, 0X140);
    // 0x801E068C: addiu       $t8, $v0, -0x400
    ctx->r24 = ADD32(ctx->r2, -0X400);
    // 0x801E0690: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
L_801E0694:
    // 0x801E0694: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x801E0698: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801E069C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E06A0: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801E06A4: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x801E06A8: lwc1        $f4, 0x98($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X98);
    // 0x801E06AC: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E06B0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E06B4: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801E06B8: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x801E06BC: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E06C0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801E06C4: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x801E06C8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801E06CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E06D0: jal         0x801E07A0
    // 0x801E06D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801E07A0_60BB80(rdram, ctx);
        goto after_0;
    // 0x801E06D4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801E06D8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E06DC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E06E0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x801E06E4: lbu         $t9, 0xE($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0XE);
    // 0x801E06E8: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x801E06EC: bnel        $at, $zero, L_801E0794
    if (ctx->r1 != 0) {
        // 0x801E06F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0794;
    }
    goto skip_0;
    // 0x801E06F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E06F4: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801E06F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E06FC: ldc1        $f2, -0x2408($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X2408);
    // 0x801E0700: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E0704: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801E0708: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x801E070C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0710: ldc1        $f12, -0x2400($at)
    CHECK_FR(ctx, 12);
    ctx->f12.u64 = LD(ctx->r1, -0X2400);
    // 0x801E0714: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E0718: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E071C: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801E0720: add.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f6.d + ctx->f2.d;
    // 0x801E0724: swc1        $f18, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f18.u32l;
    // 0x801E0728: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E072C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E0730: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x801E0734: swc1        $f10, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f10.u32l;
    // 0x801E0738: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E073C: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x801E0740: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801E0744: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x801E0748: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E074C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E0750: add.d       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f10.d + ctx->f12.d;
    // 0x801E0754: add.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f6.d + ctx->f12.d;
    // 0x801E0758: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E075C: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x801E0760: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E0764: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x801E0768: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E076C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E0770: swc1        $f10, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f10.u32l;
    // 0x801E0774: add.d       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f18.d + ctx->f12.d;
    // 0x801E0778: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801E077C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E0780: bc1f        L_801E0790
    if (!c1cs) {
        // 0x801E0784: swc1        $f6, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
            goto L_801E0790;
    }
    // 0x801E0784: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x801E0788: jal         0x80034ED4
    // 0x801E078C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x801E078C: nop

    after_1:
L_801E0790:
    // 0x801E0790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0794:
    // 0x801E0794: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E0798: jr          $ra
    // 0x801E079C: nop

    TRACE_RETURN()
    return;
    // 0x801E079C: nop

;}
RECOMP_FUNC void func_801F1340_61C720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1344: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F134C: jal         0x801F76D0
    // 0x801F1350: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F1350: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F1354: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F1358: jal         0x801D2F40
    // 0x801F135C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_1;
    // 0x801F135C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_1:
    // 0x801F1360: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F1364: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F1368: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x801F136C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F1370: nop

    // 0x801F1374: bc1fl       L_801F1388
    if (!c1cs) {
        // 0x801F1378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F1388;
    }
    goto skip_0;
    // 0x801F1378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F137C: jal         0x801F1394
    // 0x801F1380: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_801F1394_61C774(rdram, ctx);
        goto after_2;
    // 0x801F1380: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_2:
    // 0x801F1384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1388:
    // 0x801F1388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F138C: jr          $ra
    // 0x801F1390: nop

    TRACE_RETURN()
    return;
    // 0x801F1390: nop

;}
RECOMP_FUNC void func_80209870_634C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80209870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80209874: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80209878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020987C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80209880: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80209884: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80209888: jal         0x801D2F40
    // 0x8020988C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x8020988C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80209890: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80209894: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80209898: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8020989C: nop

    // 0x802098A0: bc1fl       L_8020999C
    if (!c1cs) {
        // 0x802098A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020999C;
    }
    goto skip_0;
    // 0x802098A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802098A8: lw          $t6, 0x90($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X90);
    // 0x802098AC: addiu       $a0, $zero, 0x14E
    ctx->r4 = ADD32(0, 0X14E);
    // 0x802098B0: bnel        $t6, $zero, L_802098D0
    if (ctx->r14 != 0) {
        // 0x802098B4: lwc1        $f6, 0x74($a2)
        ctx->f6.u32l = MEM_W(ctx->r6, 0X74);
            goto L_802098D0;
    }
    goto skip_1;
    // 0x802098B4: lwc1        $f6, 0x74($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X74);
    skip_1:
    // 0x802098B8: jal         0x80038BC8
    // 0x802098BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x802098BC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x802098C0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802098C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x802098C8: sw          $t7, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->r15;
    // 0x802098CC: lwc1        $f6, 0x74($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X74);
L_802098D0:
    // 0x802098D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802098D4: ldc1        $f10, -0x1148($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X1148);
    // 0x802098D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802098DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802098E0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802098E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802098E8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802098EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802098F0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802098F4: swc1        $f18, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f18.u32l;
    // 0x802098F8: lwc1        $f4, 0x74($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X74);
    // 0x802098FC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80209900: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x80209904: nop

    // 0x80209908: bc1fl       L_80209920
    if (!c1cs) {
        // 0x8020990C: lwc1        $f16, 0x78($a2)
        ctx->f16.u32l = MEM_W(ctx->r6, 0X78);
            goto L_80209920;
    }
    goto skip_2;
    // 0x8020990C: lwc1        $f16, 0x78($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X78);
    skip_2:
    // 0x80209910: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209914: nop

    // 0x80209918: swc1        $f10, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f10.u32l;
    // 0x8020991C: lwc1        $f16, 0x78($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X78);
L_80209920:
    // 0x80209920: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80209924: ldc1        $f4, -0x1140($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X1140);
    // 0x80209928: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8020992C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80209930: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80209934: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80209938: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8020993C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80209940: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80209944: swc1        $f8, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f8.u32l;
    // 0x80209948: lwc1        $f10, 0x78($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X78);
    // 0x8020994C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80209950: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x80209954: nop

    // 0x80209958: bc1f        L_8020996C
    if (!c1cs) {
        // 0x8020995C: nop
    
            goto L_8020996C;
    }
    // 0x8020995C: nop

    // 0x80209960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80209964: nop

    // 0x80209968: swc1        $f4, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f4.u32l;
L_8020996C:
    // 0x8020996C: jal         0x801D614C
    // 0x80209970: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_2;
    // 0x80209970: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80209974: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80209978: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8020997C: lwc1        $f8, 0x10($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80209980: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80209984: nop

    // 0x80209988: bc1fl       L_8020999C
    if (!c1cs) {
        // 0x8020998C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8020999C;
    }
    goto skip_3;
    // 0x8020998C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80209990: jal         0x80034ED4
    // 0x80209994: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80209994: nop

    after_3:
    // 0x80209998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8020999C:
    // 0x8020999C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802099A0: jr          $ra
    // 0x802099A4: nop

    TRACE_RETURN()
    return;
    // 0x802099A4: nop

;}
RECOMP_FUNC void func_802045F4_62F9D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802045F4: addiu       $t6, $zero, 0x5A
    ctx->r14 = ADD32(0, 0X5A);
    // 0x802045F8: jr          $ra
    // 0x802045FC: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x802045FC: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801CFAC0_5FAEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFAC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CFAC4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801CFAC8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801CFACC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801CFAD0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801CFAD4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x801CFAD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CFADC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CFAE0: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x801CFAE4: lw          $v0, 0x18($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X18);
    // 0x801CFAE8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CFAEC: lwc1        $f20, 0x1C($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801CFAF0: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x801CFAF4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CFAF8: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x801CFAFC: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CFB00: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x801CFB04: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x801CFB08: bne         $v1, $at, L_801CFB7C
    if (ctx->r3 != ctx->r1) {
        // 0x801CFB0C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFB7C;
    }
    // 0x801CFB0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFB10: lwc1        $f10, -0x2EA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2EA0);
    // 0x801CFB14: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801CFB18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFB1C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFB20: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CFB24: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CFB28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFB2C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CFB30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801CFB34: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFB38: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFB3C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFB40: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801CFB44: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CFB48: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFB4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFB50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801CFB54: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFB58: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CFB5C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFB60: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801CFB64: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801CFB68: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801CFB6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFB70: jal         0x801E006C
    // 0x801CFB74: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_0;
    // 0x801CFB74: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801CFB78: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CFB7C:
    // 0x801CFB7C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801CFB80: bne         $v1, $at, L_801CFBF4
    if (ctx->r3 != ctx->r1) {
        // 0x801CFB84: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFBF4;
    }
    // 0x801CFB84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFB88: lwc1        $f16, -0x2E9C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E9C);
    // 0x801CFB8C: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CFB90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFB94: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFB98: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CFB9C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CFBA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CFBA4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CFBA8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CFBAC: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CFBB0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFBB4: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFBB8: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801CFBBC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CFBC0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFBC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFBC8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFBCC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CFBD0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CFBD4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CFBD8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801CFBDC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CFBE0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801CFBE4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CFBE8: jal         0x801E006C
    // 0x801CFBEC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_1;
    // 0x801CFBEC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801CFBF0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CFBF4:
    // 0x801CFBF4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CFBF8: bne         $v1, $at, L_801CFC6C
    if (ctx->r3 != ctx->r1) {
        // 0x801CFBFC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFC6C;
    }
    // 0x801CFBFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFC00: lwc1        $f18, -0x2E98($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E98);
    // 0x801CFC04: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801CFC08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFC0C: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFC10: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CFC14: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFC18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFC1C: lui         $at, 0xC260
    ctx->r1 = S32(0XC260 << 16);
    // 0x801CFC20: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CFC24: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CFC28: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFC2C: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFC30: lui         $a1, 0x3E6B
    ctx->r5 = S32(0X3E6B << 16);
    // 0x801CFC34: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x801CFC38: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFC3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFC40: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFC44: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFC48: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CFC4C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFC50: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801CFC54: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801CFC58: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x801CFC5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFC60: jal         0x801E006C
    // 0x801CFC64: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801CFC64: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x801CFC68: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CFC6C:
    // 0x801CFC6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CFC70: bne         $v1, $at, L_801CFCE4
    if (ctx->r3 != ctx->r1) {
        // 0x801CFC74: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFCE4;
    }
    // 0x801CFC74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFC78: lwc1        $f4, -0x2E94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E94);
    // 0x801CFC7C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801CFC80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFC84: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFC88: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CFC8C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CFC90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFC94: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801CFC98: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CFC9C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CFCA0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFCA4: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFCA8: lui         $a1, 0x3E8F
    ctx->r5 = S32(0X3E8F << 16);
    // 0x801CFCAC: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x801CFCB0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CFCB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CFCB8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFCBC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFCC0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CFCC4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CFCC8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801CFCCC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CFCD0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801CFCD4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CFCD8: jal         0x801E006C
    // 0x801CFCDC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x801CFCDC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x801CFCE0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CFCE4:
    // 0x801CFCE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801CFCE8: bne         $v1, $at, L_801CFD5C
    if (ctx->r3 != ctx->r1) {
        // 0x801CFCEC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFD5C;
    }
    // 0x801CFCEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFCF0: lwc1        $f6, -0x2E90($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E90);
    // 0x801CFCF4: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CFCF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFCFC: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFD00: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801CFD04: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFD08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFD0C: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CFD10: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801CFD14: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFD18: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFD1C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFD20: lui         $a1, 0x3E8F
    ctx->r5 = S32(0X3E8F << 16);
    // 0x801CFD24: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x801CFD28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFD2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFD30: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFD34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFD38: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801CFD3C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CFD40: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x801CFD44: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801CFD48: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801CFD4C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFD50: jal         0x801E006C
    // 0x801CFD54: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_4;
    // 0x801CFD54: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801CFD58: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
L_801CFD5C:
    // 0x801CFD5C: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x801CFD60: bne         $t8, $zero, L_801CFD70
    if (ctx->r24 != 0) {
        // 0x801CFD64: sw          $t8, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r24;
            goto L_801CFD70;
    }
    // 0x801CFD64: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x801CFD68: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801CFD6C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
L_801CFD70:
    // 0x801CFD70: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x801CFD74: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x801CFD78: bne         $v1, $at, L_801CFDEC
    if (ctx->r3 != ctx->r1) {
        // 0x801CFD7C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFDEC;
    }
    // 0x801CFD7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFD80: lwc1        $f8, -0x2E8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E8C);
    // 0x801CFD84: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801CFD88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CFD8C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFD90: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CFD94: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CFD98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFD9C: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x801CFDA0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801CFDA4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CFDA8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFDAC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFDB0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801CFDB4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801CFDB8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CFDBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFDC0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFDC4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CFDC8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801CFDCC: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CFDD0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CFDD4: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801CFDD8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CFDDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFDE0: jal         0x801E006C
    // 0x801CFDE4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801CFDE4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x801CFDE8: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801CFDEC:
    // 0x801CFDEC: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x801CFDF0: bne         $v1, $at, L_801CFE64
    if (ctx->r3 != ctx->r1) {
        // 0x801CFDF4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFE64;
    }
    // 0x801CFDF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFDF8: lwc1        $f10, -0x2E88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E88);
    // 0x801CFDFC: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801CFE00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFE04: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFE08: lui         $at, 0xC1E0
    ctx->r1 = S32(0XC1E0 << 16);
    // 0x801CFE0C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CFE10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFE14: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CFE18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801CFE1C: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFE20: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFE24: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFE28: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801CFE2C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801CFE30: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFE34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFE38: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFE3C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFE40: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801CFE44: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFE48: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801CFE4C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801CFE50: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CFE54: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFE58: jal         0x801E006C
    // 0x801CFE5C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_6;
    // 0x801CFE5C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x801CFE60: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801CFE64:
    // 0x801CFE64: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x801CFE68: bne         $v1, $at, L_801CFED8
    if (ctx->r3 != ctx->r1) {
        // 0x801CFE6C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFED8;
    }
    // 0x801CFE6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE70: lwc1        $f16, -0x2E84($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E84);
    // 0x801CFE74: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x801CFE78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFE7C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFE80: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CFE84: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CFE88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CFE8C: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x801CFE90: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801CFE94: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CFE98: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFE9C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFEA0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFEA4: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x801CFEA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFEAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFEB0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CFEB4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CFEB8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801CFEBC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CFEC0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CFEC4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x801CFEC8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CFECC: jal         0x801E006C
    // 0x801CFED0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801CFED0: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x801CFED4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801CFED8:
    // 0x801CFED8: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x801CFEDC: bne         $v1, $at, L_801CFF4C
    if (ctx->r3 != ctx->r1) {
        // 0x801CFEE0: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFF4C;
    }
    // 0x801CFEE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFEE4: lwc1        $f18, -0x2E80($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E80);
    // 0x801CFEE8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801CFEEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFEF0: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFEF4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CFEF8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFEFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CFF00: lui         $at, 0xC282
    ctx->r1 = S32(0XC282 << 16);
    // 0x801CFF04: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801CFF08: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CFF0C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFF10: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFF14: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFF18: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x801CFF1C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CFF20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFF24: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801CFF28: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CFF2C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801CFF30: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFF34: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CFF38: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801CFF3C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFF40: jal         0x801E006C
    // 0x801CFF44: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801CFF44: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x801CFF48: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801CFF4C:
    // 0x801CFF4C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x801CFF50: bne         $v1, $at, L_801CFFC4
    if (ctx->r3 != ctx->r1) {
        // 0x801CFF54: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CFFC4;
    }
    // 0x801CFF54: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFF58: lwc1        $f4, -0x2E7C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E7C);
    // 0x801CFF5C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801CFF60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFF64: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFF68: lui         $at, 0xC1D8
    ctx->r1 = S32(0XC1D8 << 16);
    // 0x801CFF6C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801CFF70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CFF74: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x801CFF78: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801CFF7C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801CFF80: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFF84: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CFF88: lui         $a1, 0x3D75
    ctx->r5 = S32(0X3D75 << 16);
    // 0x801CFF8C: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x801CFF90: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801CFF94: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CFF98: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801CFF9C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CFFA0: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801CFFA4: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801CFFA8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x801CFFAC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CFFB0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801CFFB4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CFFB8: jal         0x801E006C
    // 0x801CFFBC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801CFFBC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x801CFFC0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801CFFC4:
    // 0x801CFFC4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x801CFFC8: bne         $v1, $at, L_801D003C
    if (ctx->r3 != ctx->r1) {
        // 0x801CFFCC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D003C;
    }
    // 0x801CFFCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFFD0: lwc1        $f6, -0x2E78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E78);
    // 0x801CFFD4: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801CFFD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CFFDC: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CFFE0: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x801CFFE4: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801CFFE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CFFEC: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x801CFFF0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801CFFF4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801CFFF8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801CFFFC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D0000: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801D0004: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801D0008: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D000C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D0010: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0014: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D0018: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D001C: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801D0020: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x801D0024: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801D0028: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801D002C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D0030: jal         0x801E006C
    // 0x801D0034: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801D0034: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x801D0038: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801D003C:
    // 0x801D003C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x801D0040: bne         $v1, $at, L_801D00B4
    if (ctx->r3 != ctx->r1) {
        // 0x801D0044: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D00B4;
    }
    // 0x801D0044: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0048: lwc1        $f8, -0x2E74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E74);
    // 0x801D004C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D0050: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0054: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D0058: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801D005C: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x801D0060: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D0064: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801D0068: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801D006C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x801D0070: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D0074: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D0078: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801D007C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D0080: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D0084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D0088: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801D008C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D0090: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801D0094: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x801D0098: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801D009C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801D00A0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801D00A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D00A8: jal         0x801E006C
    // 0x801D00AC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801D00AC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x801D00B0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801D00B4:
    // 0x801D00B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801D00B8: bne         $v1, $at, L_801D012C
    if (ctx->r3 != ctx->r1) {
        // 0x801D00BC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D012C;
    }
    // 0x801D00BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D00C0: lwc1        $f10, -0x2E70($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E70);
    // 0x801D00C4: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801D00C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D00CC: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D00D0: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801D00D4: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801D00D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D00DC: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801D00E0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D00E4: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x801D00E8: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D00EC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D00F0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801D00F4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D00F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D00FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D0100: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0104: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D0108: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801D010C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x801D0110: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    // 0x801D0114: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801D0118: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x801D011C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D0120: jal         0x801E006C
    // 0x801D0124: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801D0124: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x801D0128: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
L_801D012C:
    // 0x801D012C: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x801D0130: bne         $t1, $zero, L_801D0154
    if (ctx->r9 != 0) {
        // 0x801D0134: sw          $t1, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r9;
            goto L_801D0154;
    }
    // 0x801D0134: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x801D0138: jal         0x8000DD58
    // 0x801D013C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801D013C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_13:
    // 0x801D0140: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801D0144: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801D0148: mflo        $t3
    ctx->r11 = lo;
    // 0x801D014C: addiu       $t4, $t3, 0x50
    ctx->r12 = ADD32(ctx->r11, 0X50);
    // 0x801D0150: sw          $t4, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r12;
L_801D0154:
    // 0x801D0154: lw          $t5, 0x94($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X94);
    // 0x801D0158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D015C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x801D0160: bne         $t6, $zero, L_801D018C
    if (ctx->r14 != 0) {
        // 0x801D0164: sw          $t6, 0x94($s0)
        MEM_W(0X94, ctx->r16) = ctx->r14;
            goto L_801D018C;
    }
    // 0x801D0164: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x801D0168: jal         0x801CF3DC
    // 0x801D016C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_14;
    // 0x801D016C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_14:
    // 0x801D0170: jal         0x8000DD58
    // 0x801D0174: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_15;
    // 0x801D0174: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_15:
    // 0x801D0178: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801D017C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801D0180: mflo        $t8
    ctx->r24 = lo;
    // 0x801D0184: addiu       $t9, $t8, 0x14
    ctx->r25 = ADD32(ctx->r24, 0X14);
    // 0x801D0188: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
L_801D018C:
    // 0x801D018C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D0190: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801D0194: lbu         $t1, 0x2C1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X2C1);
    // 0x801D0198: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x801D019C: beql        $at, $zero, L_801D0218
    if (ctx->r1 == 0) {
        // 0x801D01A0: lw          $t1, 0x9C($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X9C);
            goto L_801D0218;
    }
    goto skip_0;
    // 0x801D01A0: lw          $t1, 0x9C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X9C);
    skip_0:
    // 0x801D01A4: lw          $t2, 0x98($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X98);
    // 0x801D01A8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801D01AC: bne         $t3, $zero, L_801D01D8
    if (ctx->r11 != 0) {
        // 0x801D01B0: sw          $t3, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r11;
            goto L_801D01D8;
    }
    // 0x801D01B0: sw          $t3, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r11;
    // 0x801D01B4: jal         0x8000DD58
    // 0x801D01B8: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_16;
    // 0x801D01B8: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_16:
    // 0x801D01BC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801D01C0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801D01C4: mflo        $t5
    ctx->r13 = lo;
    // 0x801D01C8: addiu       $t6, $t5, 0x14
    ctx->r14 = ADD32(ctx->r13, 0X14);
    // 0x801D01CC: sw          $t6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r14;
    // 0x801D01D0: jal         0x80038BC8
    // 0x801D01D4: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    func_80038BC8_397C8(rdram, ctx);
        goto after_17;
    // 0x801D01D4: addiu       $a0, $zero, 0x242
    ctx->r4 = ADD32(0, 0X242);
    after_17:
L_801D01D8:
    // 0x801D01D8: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x801D01DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D01E0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x801D01E4: bne         $t8, $zero, L_801D024C
    if (ctx->r24 != 0) {
        // 0x801D01E8: sw          $t8, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->r24;
            goto L_801D024C;
    }
    // 0x801D01E8: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x801D01EC: jal         0x80037C9C
    // 0x801D01F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_18;
    // 0x801D01F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_18:
    // 0x801D01F4: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x801D01F8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x801D01FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D0200: jal         0x80037C20
    // 0x801D0204: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_19;
    // 0x801D0204: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x801D0208: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x801D020C: b           L_801D024C
    // 0x801D0210: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
        goto L_801D024C;
    // 0x801D0210: sw          $t0, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r8;
    // 0x801D0214: lw          $t1, 0x9C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X9C);
L_801D0218:
    // 0x801D0218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D021C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x801D0220: bne         $t2, $zero, L_801D024C
    if (ctx->r10 != 0) {
        // 0x801D0224: sw          $t2, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = ctx->r10;
            goto L_801D024C;
    }
    // 0x801D0224: sw          $t2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r10;
    // 0x801D0228: jal         0x80037C9C
    // 0x801D022C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80037C9C_3889C(rdram, ctx);
        goto after_20;
    // 0x801D022C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_20:
    // 0x801D0230: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801D0234: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801D0238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D023C: jal         0x80037C20
    // 0x801D0240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_21;
    // 0x801D0240: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x801D0244: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x801D0248: sw          $t4, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r12;
L_801D024C:
    // 0x801D024C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D0250: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801D0254: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801D0258: jr          $ra
    // 0x801D025C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801D025C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801FCAB4_627E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCAB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FCAB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FCABC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FCAC0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FCAC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FCAC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FCACC: jal         0x801D3F00
    // 0x801FCAD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801FCAD0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x801FCAD4: beq         $v0, $zero, L_801FCB74
    if (ctx->r2 == 0) {
        // 0x801FCAD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FCB74;
    }
    // 0x801FCAD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FCADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FCAE0: jal         0x801D3E90
    // 0x801FCAE4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3E90_5FF270(rdram, ctx);
        goto after_1;
    // 0x801FCAE4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x801FCAE8: beq         $v0, $zero, L_801FCB74
    if (ctx->r2 == 0) {
        // 0x801FCAEC: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_801FCB74;
    }
    // 0x801FCAEC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801FCAF0: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801FCAF4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FCAF8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCAFC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801FCB00: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801FCB04: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCB08: bc1fl       L_801FCB3C
    if (!c1cs) {
        // 0x801FCB0C: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801FCB3C;
    }
    goto skip_0;
    // 0x801FCB0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801FCB10: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCB14: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FCB18: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801FCB1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCB20: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801FCB24: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCB28: jal         0x8000E39C
    // 0x801FCB2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801FCB2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801FCB30: b           L_801FCB4C
    // 0x801FCB34: nop

        goto L_801FCB4C;
    // 0x801FCB34: nop

    // 0x801FCB38: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801FCB3C:
    // 0x801FCB3C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FCB40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCB44: jal         0x8000E39C
    // 0x801FCB48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801FCB48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_801FCB4C:
    // 0x801FCB4C: jal         0x8000DD58
    // 0x801FCB50: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801FCB50: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_4:
    // 0x801FCB54: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FCB58: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801FCB5C: mflo        $t7
    ctx->r15 = lo;
    // 0x801FCB60: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x801FCB64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCB68: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
    // 0x801FCB6C: jal         0x8003521C
    // 0x801FCB70: addiu       $a0, $a0, -0x3478
    ctx->r4 = ADD32(ctx->r4, -0X3478);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FCB70: addiu       $a0, $a0, -0x3478
    ctx->r4 = ADD32(ctx->r4, -0X3478);
    after_5:
L_801FCB74:
    // 0x801FCB74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FCB78: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FCB7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FCB80: jr          $ra
    // 0x801FCB84: nop

    TRACE_RETURN()
    return;
    // 0x801FCB84: nop

;}
RECOMP_FUNC void func_801F3714_61EAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3714: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F371C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3720: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F3724: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801F3728: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F372C: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F3730: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3734: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x801F3738: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F373C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F3740: jal         0x801D3B18
    // 0x801F3744: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x801F3744: nop

    after_0:
    // 0x801F3748: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F374C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801F3750: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F3754: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801F3758: lbu         $t8, 0x14E($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X14E);
    // 0x801F375C: beql        $t8, $at, L_801F37E0
    if (ctx->r24 == ctx->r1) {
        // 0x801F3760: sw          $zero, 0x80($s0)
        MEM_W(0X80, ctx->r16) = 0;
            goto L_801F37E0;
    }
    goto skip_0;
    // 0x801F3760: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    skip_0:
    // 0x801F3764: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x801F3768: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x801F376C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801F3770: addiu       $t4, $zero, 0x3FE
    ctx->r12 = ADD32(0, 0X3FE);
    // 0x801F3774: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x801F3778: andi        $t2, $t1, 0x3FF
    ctx->r10 = ctx->r9 & 0X3FF;
    // 0x801F377C: sltiu       $at, $t2, 0x280
    ctx->r1 = ctx->r10 < 0X280 ? 1 : 0;
    // 0x801F3780: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x801F3784: beq         $at, $zero, L_801F3794
    if (ctx->r1 == 0) {
        // 0x801F3788: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_801F3794;
    }
    // 0x801F3788: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x801F378C: sw          $t3, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r11;
    // 0x801F3790: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_801F3794:
    // 0x801F3794: sltiu       $at, $v0, 0x381
    ctx->r1 = ctx->r2 < 0X381 ? 1 : 0;
    // 0x801F3798: bnel        $at, $zero, L_801F37AC
    if (ctx->r1 != 0) {
        // 0x801F379C: lw          $t5, 0x98($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X98);
            goto L_801F37AC;
    }
    goto skip_1;
    // 0x801F379C: lw          $t5, 0x98($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X98);
    skip_1:
    // 0x801F37A0: sw          $t4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r12;
    // 0x801F37A4: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x801F37A8: lw          $t5, 0x98($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X98);
L_801F37AC:
    // 0x801F37AC: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F37B0: addiu       $a2, $v1, 0x8
    ctx->r6 = ADD32(ctx->r3, 0X8);
    // 0x801F37B4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801F37B8: addiu       $a3, $v1, 0x10
    ctx->r7 = ADD32(ctx->r3, 0X10);
    // 0x801F37BC: jal         0x8000E630
    // 0x801F37C0: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801F37C0: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_1:
    // 0x801F37C4: jal         0x801F703C
    // 0x801F37C8: nop

    func_801F703C_62241C(rdram, ctx);
        goto after_2;
    // 0x801F37C8: nop

    after_2:
    // 0x801F37CC: jal         0x801F1BA8
    // 0x801F37D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F1BA8_61CF88(rdram, ctx);
        goto after_3;
    // 0x801F37D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F37D4: b           L_801F37E4
    // 0x801F37D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F37E4;
    // 0x801F37D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F37DC: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
L_801F37E0:
    // 0x801F37E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F37E4:
    // 0x801F37E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F37E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F37EC: jr          $ra
    // 0x801F37F0: nop

    TRACE_RETURN()
    return;
    // 0x801F37F0: nop

;}
RECOMP_FUNC void func_801FB67C_626A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB67C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB684: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801FB688: jal         0x801FC3FC
    // 0x801FB68C: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_0;
    // 0x801FB68C: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    after_0:
    // 0x801FB690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB698: jr          $ra
    // 0x801FB69C: nop

    TRACE_RETURN()
    return;
    // 0x801FB69C: nop

;}
RECOMP_FUNC void func_801D825C_60363C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D825C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D8260: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x801D8264: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D8268: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D826C: bne         $t6, $t7, L_801D8284
    if (ctx->r14 != ctx->r15) {
        // 0x801D8270: nop
    
            goto L_801D8284;
    }
    // 0x801D8270: nop

    // 0x801D8274: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x801D8278: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x801D827C: b           L_801D8284
    // 0x801D8280: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_801D8284;
    // 0x801D8280: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801D8284:
    // 0x801D8284: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x801D8288: jr          $ra
    // 0x801D828C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D828C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F1FA4_61D384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1FAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F1FB0: lw          $t7, 0xD0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD0);
    // 0x801F1FB4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F1FB8: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x801F1FBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F1FC0: sw          $a2, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r6;
    // 0x801F1FC4: sw          $t8, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r24;
    // 0x801F1FC8: beq         $at, $zero, L_801F1FE8
    if (ctx->r1 == 0) {
        // 0x801F1FCC: sw          $t6, 0xD8($a0)
        MEM_W(0XD8, ctx->r4) = ctx->r14;
            goto L_801F1FE8;
    }
    // 0x801F1FCC: sw          $t6, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r14;
    // 0x801F1FD0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801F1FD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F1FD8: addu        $at, $at, $t9
    gpr jr_addend_801F1FE0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801F1FDC: lw          $t9, -0x1A0C($at)
    ctx->r25 = ADD32(ctx->r1, -0X1A0C);
    // 0x801F1FE0: jr          $t9
    // 0x801F1FE4: nop

    switch (jr_addend_801F1FE0 >> 2) {
        case 0: goto L_801F1FE8; break;
        case 1: goto L_801F1FF8; break;
        case 2: goto L_801F200C; break;
        case 3: goto L_801F2020; break;
        case 4: goto L_801F2034; break;
        case 5: goto L_801F205C; break;
        case 6: goto L_801F2070; break;
        case 7: goto L_801F1FE8; break;
        case 8: goto L_801F1FE8; break;
        case 9: goto L_801F1FE8; break;
        case 10: goto L_801F1FE8; break;
        case 11: goto L_801F1FE8; break;
        case 12: goto L_801F1FE8; break;
        case 13: goto L_801F1FE8; break;
        case 14: goto L_801F1FE8; break;
        case 15: goto L_801F1FE8; break;
        case 16: goto L_801F1FE8; break;
        case 17: goto L_801F1FE8; break;
        case 18: goto L_801F1FE8; break;
        case 19: goto L_801F1FE8; break;
        case 20: goto L_801F2048; break;
        case 21: goto L_801F1FE8; break;
        case 22: goto L_801F2084; break;
        case 23: goto L_801F2098; break;
        default: switch_error(__func__, 0x801F1FE0, 0x8020E5F4);
    }
    // 0x801F1FE4: nop

L_801F1FE8:
    // 0x801F1FE8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x801F1FEC: sw          $zero, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = 0;
    // 0x801F1FF0: b           L_801F20A4
    // 0x801F1FF4: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
        goto L_801F20A4;
    // 0x801F1FF4: sw          $t0, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r8;
L_801F1FF8:
    // 0x801F1FF8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F1FFC: jal         0x8003522C
    // 0x801F2000: addiu       $a1, $a1, 0x28A4
    ctx->r5 = ADD32(ctx->r5, 0X28A4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_0;
    // 0x801F2000: addiu       $a1, $a1, 0x28A4
    ctx->r5 = ADD32(ctx->r5, 0X28A4);
    after_0:
    // 0x801F2004: b           L_801F20A8
    // 0x801F2008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F200C:
    // 0x801F200C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2010: jal         0x8003522C
    // 0x801F2014: addiu       $a1, $a1, 0x2438
    ctx->r5 = ADD32(ctx->r5, 0X2438);
    func_8003522C_35E2C(rdram, ctx);
        goto after_1;
    // 0x801F2014: addiu       $a1, $a1, 0x2438
    ctx->r5 = ADD32(ctx->r5, 0X2438);
    after_1:
    // 0x801F2018: b           L_801F20A8
    // 0x801F201C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F201C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2020:
    // 0x801F2020: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2024: jal         0x8003522C
    // 0x801F2028: addiu       $a1, $a1, 0x20B4
    ctx->r5 = ADD32(ctx->r5, 0X20B4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801F2028: addiu       $a1, $a1, 0x20B4
    ctx->r5 = ADD32(ctx->r5, 0X20B4);
    after_2:
    // 0x801F202C: b           L_801F20A8
    // 0x801F2030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2034:
    // 0x801F2034: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2038: jal         0x8003522C
    // 0x801F203C: addiu       $a1, $a1, 0x2C70
    ctx->r5 = ADD32(ctx->r5, 0X2C70);
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801F203C: addiu       $a1, $a1, 0x2C70
    ctx->r5 = ADD32(ctx->r5, 0X2C70);
    after_3:
    // 0x801F2040: b           L_801F20A8
    // 0x801F2044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2048:
    // 0x801F2048: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F204C: jal         0x8003522C
    // 0x801F2050: addiu       $a1, $a1, 0x300C
    ctx->r5 = ADD32(ctx->r5, 0X300C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_4;
    // 0x801F2050: addiu       $a1, $a1, 0x300C
    ctx->r5 = ADD32(ctx->r5, 0X300C);
    after_4:
    // 0x801F2054: b           L_801F20A8
    // 0x801F2058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F205C:
    // 0x801F205C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2060: jal         0x8003522C
    // 0x801F2064: addiu       $a1, $a1, 0x3AC8
    ctx->r5 = ADD32(ctx->r5, 0X3AC8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_5;
    // 0x801F2064: addiu       $a1, $a1, 0x3AC8
    ctx->r5 = ADD32(ctx->r5, 0X3AC8);
    after_5:
    // 0x801F2068: b           L_801F20A8
    // 0x801F206C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F206C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2070:
    // 0x801F2070: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2074: jal         0x8003522C
    // 0x801F2078: addiu       $a1, $a1, 0x3E24
    ctx->r5 = ADD32(ctx->r5, 0X3E24);
    func_8003522C_35E2C(rdram, ctx);
        goto after_6;
    // 0x801F2078: addiu       $a1, $a1, 0x3E24
    ctx->r5 = ADD32(ctx->r5, 0X3E24);
    after_6:
    // 0x801F207C: b           L_801F20A8
    // 0x801F2080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2084:
    // 0x801F2084: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F2088: jal         0x8003522C
    // 0x801F208C: addiu       $a1, $a1, 0x37F4
    ctx->r5 = ADD32(ctx->r5, 0X37F4);
    func_8003522C_35E2C(rdram, ctx);
        goto after_7;
    // 0x801F208C: addiu       $a1, $a1, 0x37F4
    ctx->r5 = ADD32(ctx->r5, 0X37F4);
    after_7:
    // 0x801F2090: b           L_801F20A8
    // 0x801F2094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F20A8;
    // 0x801F2094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2098:
    // 0x801F2098: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F209C: jal         0x8003522C
    // 0x801F20A0: addiu       $a1, $a1, 0x3A34
    ctx->r5 = ADD32(ctx->r5, 0X3A34);
    func_8003522C_35E2C(rdram, ctx);
        goto after_8;
    // 0x801F20A0: addiu       $a1, $a1, 0x3A34
    ctx->r5 = ADD32(ctx->r5, 0X3A34);
    after_8:
L_801F20A4:
    // 0x801F20A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F20A8:
    // 0x801F20A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F20AC: jr          $ra
    // 0x801F20B0: nop

    TRACE_RETURN()
    return;
    // 0x801F20B0: nop

;}
RECOMP_FUNC void func_801FBD44_627124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBD44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FBD48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FBD4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FBD50: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FBD54: jal         0x801D3018
    // 0x801FBD58: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FBD58: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FBD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FBD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FBD64: jr          $ra
    // 0x801FBD68: nop

    TRACE_RETURN()
    return;
    // 0x801FBD68: nop

;}
RECOMP_FUNC void func_801F16E0_61CAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F16E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F16E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F16E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F16EC: jal         0x801F76D0
    // 0x801F16F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F16F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F16F4: jal         0x801D603C
    // 0x801F16F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801F16F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F16FC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F1700: jal         0x801D2F40
    // 0x801F1704: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F1704: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_2:
    // 0x801F1708: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F170C: nop

    // 0x801F1710: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F1714: nop

    // 0x801F1718: bc1fl       L_801F172C
    if (!c1cs) {
        // 0x801F171C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F172C;
    }
    goto skip_0;
    // 0x801F171C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F1720: jal         0x801F0540
    // 0x801F1724: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F1724: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801F1728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F172C:
    // 0x801F172C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1730: jr          $ra
    // 0x801F1734: nop

    TRACE_RETURN()
    return;
    // 0x801F1734: nop

;}
RECOMP_FUNC void func_801FE470_629850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE470: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FE474: jr          $ra
    // 0x801FE478: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801FE478: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801D9730_604B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9730: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D9734: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D9738: lui         $at, 0x4475
    ctx->r1 = S32(0X4475 << 16);
    // 0x801D973C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D9740: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9744: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801D9748: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801D974C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x801D9750: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801D9754: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801D9758: lwc1        $f6, 0x28($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D975C: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801D9760: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D9764: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D9768: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D976C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9770: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D9774: swc1        $f10, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f10.u32l;
    // 0x801D9778: lwc1        $f18, 0x28($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801D977C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801D9780: nop

    // 0x801D9784: bc1f        L_801D9924
    if (!c1cs) {
        // 0x801D9788: nop
    
            goto L_801D9924;
    }
    // 0x801D9788: nop

    // 0x801D978C: jal         0x801D9030
    // 0x801D9790: nop

    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801D9790: nop

    after_0:
    // 0x801D9794: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801D9798: addiu       $a1, $a1, 0x248
    ctx->r5 = ADD32(ctx->r5, 0X248);
    // 0x801D979C: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D97A0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D97A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D97A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D97AC: jal         0x8000E100
    // 0x801D97B0: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    func_8000E100_ED00(rdram, ctx);
        goto after_1;
    // 0x801D97B0: addiu       $a3, $zero, 0x4A8
    ctx->r7 = ADD32(0, 0X4A8);
    after_1:
    // 0x801D97B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D97B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D97BC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D97C0: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D97C4: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D97C8: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801D97CC: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x801D97D0: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x801D97D4: addiu       $t8, $sp, 0x2C
    ctx->r24 = ADD32(ctx->r29, 0X2C);
    // 0x801D97D8: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x801D97DC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D97E0: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801D97E4: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801D97E8: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x801D97EC: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x801D97F0: sw          $t6, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r14;
    // 0x801D97F4: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D97F8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D97FC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D9800: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D9804: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D9808: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801D980C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D9810: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801D9814: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x801D9818: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D981C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D9820: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x801D9824: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D9828: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801D982C: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801D9830: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D9834: jal         0x8000E808
    // 0x801D9838: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x801D9838: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x801D983C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D9840: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D9844: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x801D9848: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D984C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D9850: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D9854: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D9858: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801D985C: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x801D9860: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D9864: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D9868: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801D986C: addiu       $t4, $zero, 0x51
    ctx->r12 = ADD32(0, 0X51);
    // 0x801D9870: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D9874: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x801D9878: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x801D987C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801D9880: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x801D9884: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D9888: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D988C: addiu       $t7, $a0, 0xA4
    ctx->r15 = ADD32(ctx->r4, 0XA4);
    // 0x801D9890: addiu       $a1, $a1, -0x6258
    ctx->r5 = ADD32(ctx->r5, -0X6258);
    // 0x801D9894: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D9898: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801D989C: lhu         $t9, 0x14($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X14);
    // 0x801D98A0: sh          $t9, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r25;
    // 0x801D98A4: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x801D98A8: sh          $t0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r8;
    // 0x801D98AC: lhu         $t1, 0x18($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X18);
    // 0x801D98B0: sh          $t1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r9;
    // 0x801D98B4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D98B8: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x801D98BC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D98C0: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x801D98C4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801D98C8: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x801D98CC: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x801D98D0: sw          $v1, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r3;
    // 0x801D98D4: sw          $s1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r17;
    // 0x801D98D8: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x801D98DC: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x801D98E0: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x801D98E4: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x801D98E8: sw          $v1, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r3;
    // 0x801D98EC: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x801D98F0: sw          $t3, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r11;
    // 0x801D98F4: sb          $t4, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = ctx->r12;
    // 0x801D98F8: sh          $t5, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r13;
    // 0x801D98FC: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
    // 0x801D9900: sh          $t6, 0x52($a0)
    MEM_H(0X52, ctx->r4) = ctx->r14;
    // 0x801D9904: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x801D9908: swc1        $f2, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f2.u32l;
    // 0x801D990C: swc1        $f2, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f2.u32l;
    // 0x801D9910: jal         0x8003522C
    // 0x801D9914: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801D9914: swc1        $f2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f2.u32l;
    after_3:
    // 0x801D9918: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D991C: jal         0x8003521C
    // 0x801D9920: addiu       $a0, $a0, -0x66C0
    ctx->r4 = ADD32(ctx->r4, -0X66C0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801D9920: addiu       $a0, $a0, -0x66C0
    ctx->r4 = ADD32(ctx->r4, -0X66C0);
    after_4:
L_801D9924:
    // 0x801D9924: jal         0x801D9030
    // 0x801D9928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D9030_604410(rdram, ctx);
        goto after_5;
    // 0x801D9928: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801D992C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D9930: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D9934: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D9938: jr          $ra
    // 0x801D993C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801D993C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801D61E8_6015C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D61E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D61EC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801D61F0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D61F4: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801D61F8: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801D61FC: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x801D6200: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801D6204: jr          $ra
    // 0x801D6208: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6208: swc1        $f10, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_801E0D80_60C160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0D80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E0D84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E0D88: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E0D8C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801E0D90: beq         $a0, $zero, L_801E0DA0
    if (ctx->r4 == 0) {
        // 0x801E0D94: sw          $a3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r7;
            goto L_801E0DA0;
    }
    // 0x801E0D94: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x801E0D98: lw          $t0, 0x18($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X18);
    // 0x801E0D9C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_801E0DA0:
    // 0x801E0DA0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801E0DA4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E0DA8: addiu       $a1, $a1, -0x54E0
    ctx->r5 = ADD32(ctx->r5, -0X54E0);
    // 0x801E0DAC: beql        $t0, $zero, L_801E0DC0
    if (ctx->r8 == 0) {
        // 0x801E0DB0: lhu         $v1, 0x4E($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0X4E);
            goto L_801E0DC0;
    }
    goto skip_0;
    // 0x801E0DB0: lhu         $v1, 0x4E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X4E);
    skip_0:
    // 0x801E0DB4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x801E0DB8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x801E0DBC: lhu         $v1, 0x4E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X4E);
L_801E0DC0:
    // 0x801E0DC0: lhu         $a2, 0x36($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X36);
    // 0x801E0DC4: lhu         $a3, 0x3A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3A);
    // 0x801E0DC8: bgtz        $v1, L_801E0DD4
    if (SIGNED(ctx->r3) > 0) {
        // 0x801E0DCC: lhu         $t7, 0x3E($sp)
        ctx->r15 = MEM_HU(ctx->r29, 0X3E);
            goto L_801E0DD4;
    }
    // 0x801E0DCC: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x801E0DD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801E0DD4:
    // 0x801E0DD4: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x801E0DD8: bnel        $at, $zero, L_801E0DE8
    if (ctx->r1 != 0) {
        // 0x801E0DDC: sw          $t7, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r15;
            goto L_801E0DE8;
    }
    goto skip_1;
    // 0x801E0DDC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    skip_1:
    // 0x801E0DE0: addiu       $v1, $zero, 0xC8
    ctx->r3 = ADD32(0, 0XC8);
    // 0x801E0DE4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
L_801E0DE8:
    // 0x801E0DE8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x801E0DEC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801E0DF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801E0DF4: jal         0x8000DF10
    // 0x801E0DF8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_8000DF10_EB10(rdram, ctx);
        goto after_0;
    // 0x801E0DF8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E0DFC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801E0E00: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801E0E04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801E0E08: beq         $t0, $zero, L_801E0E24
    if (ctx->r8 == 0) {
        // 0x801E0E0C: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801E0E24;
    }
    // 0x801E0E0C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E0E10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0E14: or          $t8, $v0, $at
    ctx->r24 = ctx->r2 | ctx->r1;
    // 0x801E0E18: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0E1C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801E0E20: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
L_801E0E24:
    // 0x801E0E24: lhu         $t1, 0x4A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X4A);
    // 0x801E0E28: addiu       $a1, $a1, -0x5288
    ctx->r5 = ADD32(ctx->r5, -0X5288);
    // 0x801E0E2C: lhu         $a2, 0x42($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X42);
    // 0x801E0E30: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x801E0E34: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E0E38: bgez        $v1, L_801E0E48
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801E0E3C: sra         $t2, $v1, 1
        ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
            goto L_801E0E48;
    }
    // 0x801E0E3C: sra         $t2, $v1, 1
    ctx->r10 = S32(SIGNED(ctx->r3) >> 1);
    // 0x801E0E40: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x801E0E44: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_801E0E48:
    // 0x801E0E48: jal         0x8000DFA0
    // 0x801E0E4C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_8000DFA0_EBA0(rdram, ctx);
        goto after_1;
    // 0x801E0E4C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_1:
    // 0x801E0E50: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x801E0E54: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E0E58: or          $t3, $v0, $at
    ctx->r11 = ctx->r2 | ctx->r1;
    // 0x801E0E5C: beq         $v1, $zero, L_801E0E6C
    if (ctx->r3 == 0) {
        // 0x801E0E60: lui         $at, 0x2000
        ctx->r1 = S32(0X2000 << 16);
            goto L_801E0E6C;
    }
    // 0x801E0E60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0E64: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x801E0E68: sw          $t4, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r12;
L_801E0E6C:
    // 0x801E0E6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0E70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801E0E74: jr          $ra
    // 0x801E0E78: nop

    TRACE_RETURN()
    return;
    // 0x801E0E78: nop

;}
RECOMP_FUNC void func_801F9CA0_625080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F9CA4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F9CA8: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x801F9CAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F9CB0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x801F9CB4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F9CB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F9CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9CC0: addiu       $a1, $a0, 0x178
    ctx->r5 = ADD32(ctx->r4, 0X178);
    // 0x801F9CC4: addiu       $v0, $a0, 0xA0
    ctx->r2 = ADD32(ctx->r4, 0XA0);
    // 0x801F9CC8: swc1        $f0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f0.u32l;
    // 0x801F9CCC: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801F9CD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F9CD4: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801F9CD8: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x801F9CDC: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801F9CE0: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x801F9CE4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801F9CE8: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x801F9CEC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801F9CF0: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801F9CF4: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801F9CF8: sw          $t6, 0x1EC($t7)
    MEM_W(0X1EC, ctx->r15) = ctx->r14;
    // 0x801F9CFC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D00: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x801F9D04: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x801F9D08: sw          $t8, 0x1F4($t9)
    MEM_W(0X1F4, ctx->r25) = ctx->r24;
    // 0x801F9D0C: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D10: sw          $t0, 0x1F0($t1)
    MEM_W(0X1F0, ctx->r9) = ctx->r8;
    // 0x801F9D14: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D18: jal         0x8003D428
    // 0x801F9D1C: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x801F9D1C: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    after_0:
    // 0x801F9D20: jal         0x8000C838
    // 0x801F9D24: nop

    func_8000C838_D438(rdram, ctx);
        goto after_1;
    // 0x801F9D24: nop

    after_1:
    // 0x801F9D28: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F9D2C: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x801F9D30: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D34: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F9D38: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F9D3C: sb          $zero, 0x2C1($t4)
    MEM_B(0X2C1, ctx->r12) = 0;
    // 0x801F9D40: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D44: addiu       $a1, $a1, -0x7B4
    ctx->r5 = ADD32(ctx->r5, -0X7B4);
    // 0x801F9D48: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x801F9D4C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D50: sb          $zero, 0x2C3($t6)
    MEM_B(0X2C3, ctx->r14) = 0;
    // 0x801F9D54: lw          $t7, -0x10D0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10D0);
    // 0x801F9D58: sb          $zero, 0xC($t7)
    MEM_B(0XC, ctx->r15) = 0;
    // 0x801F9D5C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801F9D60: lw          $a0, 0x1D8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1D8);
    // 0x801F9D64: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F9D68: jal         0x8003522C
    // 0x801F9D6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801F9D6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x801F9D70: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801F9D74: lui         $at, 0xC2B0
    ctx->r1 = S32(0XC2B0 << 16);
    // 0x801F9D78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F9D7C: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801F9D80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F9D84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F9D88: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x801F9D8C: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x801F9D90: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x801F9D94: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x801F9D98: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801F9D9C: jal         0x80034ED4
    // 0x801F9DA0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801F9DA0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_3:
    // 0x801F9DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9DA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9DAC: jr          $ra
    // 0x801F9DB0: nop

    TRACE_RETURN()
    return;
    // 0x801F9DB0: nop

;}
RECOMP_FUNC void func_801EFD04_61B0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EFD04: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EFD08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EFD0C: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801EFD10: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801EFD14: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EFD18: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EFD1C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x801EFD20: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801EFD24: jal         0x801F76D0
    // 0x801EFD28: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801EFD28: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    after_0:
    // 0x801EFD2C: lwc1        $f4, 0x74($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801EFD30: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EFD34: lui         $at, 0x405E
    ctx->r1 = S32(0X405E << 16);
    // 0x801EFD38: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801EFD3C: nop

    // 0x801EFD40: bc1fl       L_801EFDB4
    if (!c1cs) {
        // 0x801EFD44: lwc1        $f18, 0x94($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
            goto L_801EFDB4;
    }
    goto skip_0;
    // 0x801EFD44: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x801EFD48: lwc1        $f8, 0x94($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801EFD4C: lui         $at, 0x4054
    ctx->r1 = S32(0X4054 << 16);
    // 0x801EFD50: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801EFD54: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801EFD58: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801EFD5C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801EFD60: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x801EFD64: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x801EFD68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EFD6C: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x801EFD70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EFD74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801EFD78: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EFD7C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801EFD80: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x801EFD84: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801EFD88: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x801EFD8C: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801EFD90: nop

    // 0x801EFD94: bc1f        L_801EFDA8
    if (!c1cs) {
        // 0x801EFD98: nop
    
            goto L_801EFDA8;
    }
    // 0x801EFD98: nop

    // 0x801EFD9C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801EFDA0: nop

    // 0x801EFDA4: swc1        $f24, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f24.u32l;
L_801EFDA8:
    // 0x801EFDA8: b           L_801EFE10
    // 0x801EFDAC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
        goto L_801EFE10;
    // 0x801EFDAC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EFDB0: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
L_801EFDB4:
    // 0x801EFDB4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801EFDB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801EFDBC: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x801EFDC0: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801EFDC4: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x801EFDC8: lui         $at, 0x4018
    ctx->r1 = S32(0X4018 << 16);
    // 0x801EFDCC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EFDD0: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x801EFDD4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801EFDD8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801EFDDC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EFDE0: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x801EFDE4: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x801EFDE8: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801EFDEC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801EFDF0: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801EFDF4: nop

    // 0x801EFDF8: bc1fl       L_801EFE10
    if (!c1cs) {
        // 0x801EFDFC: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_801EFE10;
    }
    goto skip_1;
    // 0x801EFDFC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    skip_1:
    // 0x801EFE00: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801EFE04: nop

    // 0x801EFE08: swc1        $f22, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f22.u32l;
    // 0x801EFE0C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
L_801EFE10:
    // 0x801EFE10: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801EFE14: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801EFE18: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801EFE1C: jal         0x801D606C
    // 0x801EFE20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D606C_60144C(rdram, ctx);
        goto after_1;
    // 0x801EFE20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801EFE24: lui         $a1, 0xBE19
    ctx->r5 = S32(0XBE19 << 16);
    // 0x801EFE28: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801EFE2C: jal         0x801D6508
    // 0x801EFE30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801EFE30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801EFE34: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x801EFE38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801EFE3C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFE40: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EFE44: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801EFE48: nop

    // 0x801EFE4C: bc1fl       L_801F009C
    if (!c1cs) {
        // 0x801EFE50: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801F009C;
    }
    goto skip_2;
    // 0x801EFE50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x801EFE54: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EFE58: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801EFE5C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801EFE60: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801EFE64: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFE68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801EFE6C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFE70: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFE74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFE78: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x801EFE7C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFE80: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFE84: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFE88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFE8C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFE90: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFE94: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFE98: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFE9C: jal         0x801E006C
    // 0x801EFEA0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_3;
    // 0x801EFEA0: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801EFEA4: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFEA8: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFEAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFEB0: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFEB4: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x801EFEB8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFEBC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFEC0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFEC4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFEC8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFECC: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFED0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFED4: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFED8: jal         0x801E006C
    // 0x801EFEDC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_4;
    // 0x801EFEDC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x801EFEE0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFEE4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFEE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFEEC: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFEF0: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x801EFEF4: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFEF8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFEFC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFF00: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFF04: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFF08: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFF0C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFF10: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFF14: jal         0x801E006C
    // 0x801EFF18: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_5;
    // 0x801EFF18: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801EFF1C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFF20: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFF24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFF28: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFF2C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801EFF30: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFF34: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFF38: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFF3C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFF40: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFF44: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFF48: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFF4C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFF50: jal         0x801E006C
    // 0x801EFF54: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_6;
    // 0x801EFF54: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801EFF58: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFF5C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFF60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFF64: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFF68: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x801EFF6C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFF70: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFF74: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFF78: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFF7C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFF80: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFF84: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFF88: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFF8C: jal         0x801E006C
    // 0x801EFF90: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801EFF90: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x801EFF94: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFF98: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFF9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFFA0: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFFA4: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x801EFFA8: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFFAC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFFB0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFFB4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFFB8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFFBC: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFFC0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801EFFC4: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EFFC8: jal         0x801E006C
    // 0x801EFFCC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801EFFCC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x801EFFD0: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EFFD4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801EFFD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EFFDC: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801EFFE0: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x801EFFE4: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801EFFE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EFFEC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801EFFF0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801EFFF4: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801EFFF8: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801EFFFC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F0000: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F0004: jal         0x801E006C
    // 0x801F0008: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801F0008: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x801F000C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F0010: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F0014: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F0018: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801F001C: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x801F0020: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F0024: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801F0028: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F002C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801F0030: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F0034: add.s       $f16, $f6, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x801F0038: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x801F003C: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F0040: jal         0x801E006C
    // 0x801F0044: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801F0044: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x801F0048: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x801F004C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F0050: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F0054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F0058: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x801F005C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801F0060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F0064: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F0068: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F006C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F0070: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F0074: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F0078: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F007C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F0080: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F0084: jal         0x801E006C
    // 0x801F0088: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801F0088: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x801F008C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F0090: jal         0x8003521C
    // 0x801F0094: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_12;
    // 0x801F0094: addiu       $a0, $a0, 0xB8
    ctx->r4 = ADD32(ctx->r4, 0XB8);
    after_12:
    // 0x801F0098: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801F009C:
    // 0x801F009C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801F00A0: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801F00A4: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x801F00A8: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801F00AC: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801F00B0: jr          $ra
    // 0x801F00B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F00B4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801FCDAC_62818C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCDAC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FCDB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FCDB4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FCDB8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FCDBC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FCDC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FCDC4: jal         0x801D3F00
    // 0x801FCDC8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_0;
    // 0x801FCDC8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x801FCDCC: beq         $v0, $zero, L_801FCE60
    if (ctx->r2 == 0) {
        // 0x801FCDD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801FCE60;
    }
    // 0x801FCDD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FCDD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FCDD8: jal         0x801D3E90
    // 0x801FCDDC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3E90_5FF270(rdram, ctx);
        goto after_1;
    // 0x801FCDDC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x801FCDE0: beq         $v0, $zero, L_801FCE60
    if (ctx->r2 == 0) {
        // 0x801FCDE4: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_801FCE60;
    }
    // 0x801FCDE4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x801FCDE8: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x801FCDEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FCDF0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCDF4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801FCDF8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801FCDFC: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCE00: bc1fl       L_801FCE34
    if (!c1cs) {
        // 0x801FCE04: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801FCE34;
    }
    goto skip_0;
    // 0x801FCE04: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801FCE08: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FCE0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FCE10: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801FCE14: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCE18: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x801FCE1C: lui         $a3, 0xC448
    ctx->r7 = S32(0XC448 << 16);
    // 0x801FCE20: jal         0x8000E39C
    // 0x801FCE24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801FCE24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801FCE28: b           L_801FCE44
    // 0x801FCE2C: nop

        goto L_801FCE44;
    // 0x801FCE2C: nop

    // 0x801FCE30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801FCE34:
    // 0x801FCE34: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FCE38: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801FCE3C: jal         0x8000E39C
    // 0x801FCE40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801FCE40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_801FCE44:
    // 0x801FCE44: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCE48: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    // 0x801FCE4C: jal         0x801D31CC
    // 0x801FCE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_4;
    // 0x801FCE50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FCE54: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCE58: jal         0x8003521C
    // 0x801FCE5C: addiu       $a0, $a0, -0x318C
    ctx->r4 = ADD32(ctx->r4, -0X318C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FCE5C: addiu       $a0, $a0, -0x318C
    ctx->r4 = ADD32(ctx->r4, -0X318C);
    after_5:
L_801FCE60:
    // 0x801FCE60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FCE64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FCE68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FCE6C: jr          $ra
    // 0x801FCE70: nop

    TRACE_RETURN()
    return;
    // 0x801FCE70: nop

;}
RECOMP_FUNC void func_80202264_62D644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80202268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020226C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80202270: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80202274: jal         0x80203F88
    // 0x80202278: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80202278: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8020227C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80202280: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80202284: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x80202288: beq         $t7, $zero, L_8020238C
    if (ctx->r15 == 0) {
        // 0x8020228C: nop
    
            goto L_8020238C;
    }
    // 0x8020228C: nop

    // 0x80202290: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x80202294: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80202298: bgtz        $t9, L_8020238C
    if (SIGNED(ctx->r25) > 0) {
        // 0x8020229C: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_8020238C;
    }
    // 0x8020229C: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x802022A0: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x802022A4: sltiu       $at, $t1, 0x6
    ctx->r1 = ctx->r9 < 0X6 ? 1 : 0;
    // 0x802022A8: beq         $at, $zero, L_802022C4
    if (ctx->r1 == 0) {
        // 0x802022AC: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_802022C4;
    }
    // 0x802022AC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802022B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802022B4: addu        $at, $at, $t1
    gpr jr_addend_802022BC = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x802022B8: lw          $t1, -0x1354($at)
    ctx->r9 = ADD32(ctx->r1, -0X1354);
    // 0x802022BC: jr          $t1
    // 0x802022C0: nop

    switch (jr_addend_802022BC >> 2) {
        case 0: goto L_802022C4; break;
        case 1: goto L_802022E4; break;
        case 2: goto L_80202308; break;
        case 3: goto L_8020232C; break;
        case 4: goto L_80202350; break;
        case 5: goto L_80202374; break;
        default: switch_error(__func__, 0x802022BC, 0x8020ECAC);
    }
    // 0x802022C0: nop

L_802022C4:
    // 0x802022C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802022C8: jal         0x80203BC0
    // 0x802022CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_1;
    // 0x802022CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x802022D0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802022D4: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x802022D8: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x802022DC: b           L_8020238C
    // 0x802022E0: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
        goto L_8020238C;
    // 0x802022E0: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
L_802022E4:
    // 0x802022E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802022E8: jal         0x80203BC0
    // 0x802022EC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_2;
    // 0x802022EC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x802022F0: lw          $t4, 0x90($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X90);
    // 0x802022F4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x802022F8: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x802022FC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80202300: b           L_8020238C
    // 0x80202304: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
        goto L_8020238C;
    // 0x80202304: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
L_80202308:
    // 0x80202308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020230C: jal         0x80203BC0
    // 0x80202310: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_3;
    // 0x80202310: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_3:
    // 0x80202314: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x80202318: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8020231C: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x80202320: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80202324: b           L_8020238C
    // 0x80202328: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
        goto L_8020238C;
    // 0x80202328: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_8020232C:
    // 0x8020232C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202330: jal         0x80203BC0
    // 0x80202334: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_4;
    // 0x80202334: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_4:
    // 0x80202338: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x8020233C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80202340: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x80202344: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80202348: b           L_8020238C
    // 0x8020234C: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
        goto L_8020238C;
    // 0x8020234C: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
L_80202350:
    // 0x80202350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202354: jal         0x80203BC0
    // 0x80202358: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_5;
    // 0x80202358: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_5:
    // 0x8020235C: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x80202360: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x80202364: sw          $t5, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r13;
    // 0x80202368: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8020236C: b           L_8020238C
    // 0x80202370: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
        goto L_8020238C;
    // 0x80202370: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
L_80202374:
    // 0x80202374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80202378: jal         0x80203BC0
    // 0x8020237C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_6;
    // 0x8020237C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_6:
    // 0x80202380: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80202384: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x80202388: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_8020238C:
    // 0x8020238C: jal         0x802043E4
    // 0x80202390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802043E4_62F7C4(rdram, ctx);
        goto after_7;
    // 0x80202390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80202394: beq         $v0, $zero, L_802023C8
    if (ctx->r2 == 0) {
        // 0x80202398: addiu       $t7, $zero, 0x8
        ctx->r15 = ADD32(0, 0X8);
            goto L_802023C8;
    }
    // 0x80202398: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8020239C: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802023A0: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x802023A4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802023A8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802023AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802023B0: sw          $zero, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = 0;
    // 0x802023B4: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x802023B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802023BC: addiu       $a0, $a0, 0x23DC
    ctx->r4 = ADD32(ctx->r4, 0X23DC);
    // 0x802023C0: jal         0x8003521C
    // 0x802023C4: sb          $t9, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r25;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x802023C4: sb          $t9, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r25;
    after_8:
L_802023C8:
    // 0x802023C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802023CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802023D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802023D4: jr          $ra
    // 0x802023D8: nop

    TRACE_RETURN()
    return;
    // 0x802023D8: nop

;}
RECOMP_FUNC void func_801F39A8_61ED88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F39A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F39AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F39B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F39B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F39B8: lw          $t6, 0x98($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X98);
    // 0x801F39BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F39C0: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x801F39C4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x801F39C8: slti        $at, $t7, 0x1F4
    ctx->r1 = SIGNED(ctx->r15) < 0X1F4 ? 1 : 0;
    // 0x801F39CC: bne         $at, $zero, L_801F39F8
    if (ctx->r1 != 0) {
        // 0x801F39D0: sw          $t7, 0x98($a0)
        MEM_W(0X98, ctx->r4) = ctx->r15;
            goto L_801F39F8;
    }
    // 0x801F39D0: sw          $t7, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r15;
    // 0x801F39D4: sw          $t9, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r25;
    // 0x801F39D8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801F39DC: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801F39E0: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x801F39E4: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F39E8: lw          $t2, 0x1D8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X1D8);
    // 0x801F39EC: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, 0X3634);
    // 0x801F39F0: jal         0x8003521C
    // 0x801F39F4: sw          $t0, 0xD8($t2)
    MEM_W(0XD8, ctx->r10) = ctx->r8;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801F39F4: sw          $t0, 0xD8($t2)
    MEM_W(0XD8, ctx->r10) = ctx->r8;
    after_0:
L_801F39F8:
    // 0x801F39F8: jal         0x801F732C
    // 0x801F39FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_1;
    // 0x801F39FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F3A00: lw          $t3, 0x98($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X98);
    // 0x801F3A04: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x801F3A08: lhu         $a1, 0x92($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X92);
    // 0x801F3A0C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801F3A10: addiu       $a2, $t4, 0x8
    ctx->r6 = ADD32(ctx->r12, 0X8);
    // 0x801F3A14: addiu       $a3, $t4, 0x10
    ctx->r7 = ADD32(ctx->r12, 0X10);
    // 0x801F3A18: jal         0x8000E630
    // 0x801F3A1C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x801F3A1C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_2:
    // 0x801F3A20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3A24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3A2C: jr          $ra
    // 0x801F3A30: nop

    TRACE_RETURN()
    return;
    // 0x801F3A30: nop

;}
RECOMP_FUNC void func_801F5190_620570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5190: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801F5194: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F5198: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801F519C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801F51A0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801F51A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F51A8: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x801F51AC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x801F51B0: jal         0x801F76D0
    // 0x801F51B4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F51B4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    after_0:
    // 0x801F51B8: lwc1        $f4, 0x94($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801F51BC: lui         $at, 0x404E
    ctx->r1 = S32(0X404E << 16);
    // 0x801F51C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801F51C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801F51C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F51CC: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F51D0: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801F51D4: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801F51D8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F51DC: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x801F51E0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F51E4: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801F51E8: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801F51EC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801F51F0: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x801F51F4: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801F51F8: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801F51FC: c.le.d      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.d <= ctx->f16.d;
    // 0x801F5200: nop

    // 0x801F5204: bc1f        L_801F5218
    if (!c1cs) {
        // 0x801F5208: nop
    
            goto L_801F5218;
    }
    // 0x801F5208: nop

    // 0x801F520C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F5210: nop

    // 0x801F5214: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
L_801F5218:
    // 0x801F5218: jal         0x801D60E4
    // 0x801F521C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_1;
    // 0x801F521C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801F5220: lui         $a1, 0xBE61
    ctx->r5 = S32(0XBE61 << 16);
    // 0x801F5224: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x801F5228: jal         0x801D6508
    // 0x801F522C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801F522C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x801F5230: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F5234: lwc1        $f6, 0x74($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F5238: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F523C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F5240: nop

    // 0x801F5244: bc1fl       L_801F5534
    if (!c1cs) {
        // 0x801F5248: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801F5534;
    }
    goto skip_0;
    // 0x801F5248: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x801F524C: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5250: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F5254: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5258: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801F525C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801F5260: jal         0x801D4408
    // 0x801F5264: nop

    func_801D4408_5FF7E8(rdram, ctx);
        goto after_3;
    // 0x801F5264: nop

    after_3:
    // 0x801F5268: beql        $v0, $zero, L_801F5534
    if (ctx->r2 == 0) {
        // 0x801F526C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_801F5534;
    }
    goto skip_1;
    // 0x801F526C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x801F5270: jal         0x80038BC8
    // 0x801F5274: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F5274: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_4:
    // 0x801F5278: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F527C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x801F5280: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F5284: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F5288: lwc1        $f10, 0x74($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F528C: lwc1        $f16, 0x70($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X70);
    // 0x801F5290: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801F5294: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801F5298: lwc1        $f10, 0x78($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X78);
    // 0x801F529C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F52A0: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801F52A4: div.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f24.fl);
    // 0x801F52A8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801F52AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F52B0: swc1        $f8, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f8.u32l;
    // 0x801F52B4: lwc1        $f8, 0x74($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X74);
    // 0x801F52B8: div.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x801F52BC: swc1        $f18, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f18.u32l;
    // 0x801F52C0: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801F52C4: c.lt.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d < ctx->f16.d;
    // 0x801F52C8: nop

    // 0x801F52CC: bc1f        L_801F52E4
    if (!c1cs) {
        // 0x801F52D0: swc1        $f4, 0x78($s1)
        MEM_W(0X78, ctx->r17) = ctx->f4.u32l;
            goto L_801F52E4;
    }
    // 0x801F52D0: swc1        $f4, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f4.u32l;
    // 0x801F52D4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F52D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F52DC: b           L_801F52FC
    // 0x801F52E0: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
        goto L_801F52FC;
    // 0x801F52E0: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_801F52E4:
    // 0x801F52E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F52E8: jal         0x801D3A18
    // 0x801F52EC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_5;
    // 0x801F52EC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    after_5:
    // 0x801F52F0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F52F4: jal         0x8003521C
    // 0x801F52F8: addiu       $a0, $a0, 0x5550
    ctx->r4 = ADD32(ctx->r4, 0X5550);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F52F8: addiu       $a0, $a0, 0x5550
    ctx->r4 = ADD32(ctx->r4, 0X5550);
    after_6:
L_801F52FC:
    // 0x801F52FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801F5300: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801F5304: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F5308: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801F530C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5310: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F5314: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5318: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F531C: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x801F5320: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5324: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5328: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F532C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F5330: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5334: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F5338: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F533C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5340: jal         0x801E006C
    // 0x801F5344: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_7;
    // 0x801F5344: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801F5348: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F534C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F5350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5354: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F5358: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x801F535C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5360: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5364: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5368: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F536C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5370: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F5374: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F5378: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F537C: jal         0x801E006C
    // 0x801F5380: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_8;
    // 0x801F5380: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x801F5384: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5388: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F538C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5390: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F5394: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x801F5398: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F539C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F53A0: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F53A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F53A8: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F53AC: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F53B0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F53B4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F53B8: jal         0x801E006C
    // 0x801F53BC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_9;
    // 0x801F53BC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x801F53C0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F53C4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F53C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F53CC: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F53D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x801F53D4: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F53D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F53DC: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F53E0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F53E4: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F53E8: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F53EC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F53F0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F53F4: jal         0x801E006C
    // 0x801F53F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_10;
    // 0x801F53F8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x801F53FC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5400: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F5404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5408: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F540C: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    // 0x801F5410: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5414: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5418: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F541C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F5420: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5424: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F5428: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F542C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5430: jal         0x801E006C
    // 0x801F5434: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_11;
    // 0x801F5434: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x801F5438: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F543C: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F5440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5444: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F5448: addiu       $a2, $zero, 0x22
    ctx->r6 = ADD32(0, 0X22);
    // 0x801F544C: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F5450: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5454: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5458: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F545C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F5460: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F5464: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F5468: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F546C: jal         0x801E006C
    // 0x801F5470: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_12;
    // 0x801F5470: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x801F5474: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F5478: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F547C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F5480: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F5484: addiu       $a2, $zero, 0x23
    ctx->r6 = ADD32(0, 0X23);
    // 0x801F5488: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F548C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F5490: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5494: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F5498: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F549C: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F54A0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F54A4: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F54A8: jal         0x801E006C
    // 0x801F54AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_13;
    // 0x801F54AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x801F54B0: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F54B4: mfc1        $a1, $f24
    ctx->r5 = (int32_t)ctx->f24.u32l;
    // 0x801F54B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F54BC: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801F54C0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x801F54C4: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F54C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801F54CC: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F54D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F54D4: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F54D8: add.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f20.fl;
    // 0x801F54DC: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801F54E0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F54E4: jal         0x801E006C
    // 0x801F54E8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_14;
    // 0x801F54E8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x801F54EC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F54F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F54F4: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F54F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F54FC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x801F5500: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801F5504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F5508: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    // 0x801F550C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801F5510: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F5514: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801F5518: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F551C: add.s       $f10, $f18, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x801F5520: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801F5524: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F5528: jal         0x801E006C
    // 0x801F552C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_15;
    // 0x801F552C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x801F5530: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_801F5534:
    // 0x801F5534: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801F5538: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x801F553C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x801F5540: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801F5544: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801F5548: jr          $ra
    // 0x801F554C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801F554C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801EEA6C_619E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEA6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EEA70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EEA74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EEA78: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EEA7C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x801EEA80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801EEA84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801EEA88: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x801EEA8C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801EEA90: jal         0x801D15BC
    // 0x801EEA94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_0;
    // 0x801EEA94: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x801EEA98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EEA9C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EEAA0: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    // 0x801EEAA4: jal         0x801D5064
    // 0x801EEAA8: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    func_801D5064_600444(rdram, ctx);
        goto after_1;
    // 0x801EEAA8: addiu       $a2, $zero, 0x63
    ctx->r6 = ADD32(0, 0X63);
    after_1:
    // 0x801EEAAC: beq         $v0, $zero, L_801EEB20
    if (ctx->r2 == 0) {
        // 0x801EEAB0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801EEB20;
    }
    // 0x801EEAB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EEAB4: jal         0x80037C9C
    // 0x801EEAB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801EEAB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x801EEABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EEAC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EEAC4: jal         0x80037C20
    // 0x801EEAC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801EEAC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801EEACC: jal         0x80038BC8
    // 0x801EEAD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801EEAD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x801EEAD4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801EEAD8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801EEADC: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801EEAE0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801EEAE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801EEAE8: lbu         $t8, -0x521C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X521C);
    // 0x801EEAEC: bne         $t8, $at, L_801EEB0C
    if (ctx->r24 != ctx->r1) {
        // 0x801EEAF0: nop
    
            goto L_801EEB0C;
    }
    // 0x801EEAF0: nop

    // 0x801EEAF4: jal         0x801D3AA4
    // 0x801EEAF8: nop

    func_801D3AA4_5FEE84(rdram, ctx);
        goto after_5;
    // 0x801EEAF8: nop

    after_5:
    // 0x801EEAFC: jal         0x800374EC
    // 0x801EEB00: nop

    func_800374EC_380EC(rdram, ctx);
        goto after_6;
    // 0x801EEB00: nop

    after_6:
    // 0x801EEB04: b           L_801EEB14
    // 0x801EEB08: nop

        goto L_801EEB14;
    // 0x801EEB08: nop

L_801EEB0C:
    // 0x801EEB0C: jal         0x80037090
    // 0x801EEB10: nop

    func_80037090_37C90(rdram, ctx);
        goto after_7;
    // 0x801EEB10: nop

    after_7:
L_801EEB14:
    // 0x801EEB14: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EEB18: jal         0x8003521C
    // 0x801EEB1C: addiu       $a0, $a0, -0x14D0
    ctx->r4 = ADD32(ctx->r4, -0X14D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801EEB1C: addiu       $a0, $a0, -0x14D0
    ctx->r4 = ADD32(ctx->r4, -0X14D0);
    after_8:
L_801EEB20:
    // 0x801EEB20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EEB24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EEB28: jr          $ra
    // 0x801EEB2C: nop

    TRACE_RETURN()
    return;
    // 0x801EEB2C: nop

;}
RECOMP_FUNC void func_801D6EE0_6022C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6EE0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D6EE4: lw          $a2, -0x1130($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X1130);
    // 0x801D6EE8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D6EEC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801D6EF0: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x801D6EF4: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x801D6EF8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D6EFC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D6F00: addiu       $v1, $a2, 0x100
    ctx->r3 = ADD32(ctx->r6, 0X100);
    // 0x801D6F04: addiu       $a3, $a2, 0x118
    ctx->r7 = ADD32(ctx->r6, 0X118);
    // 0x801D6F08: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x801D6F0C: addu        $t3, $v1, $t0
    ctx->r11 = ADD32(ctx->r3, ctx->r8);
    // 0x801D6F10: lb          $t4, 0x0($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X0);
    // 0x801D6F14: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x801D6F18: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x801D6F1C: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x801D6F20: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801D6F24: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801D6F28: beq         $at, $zero, L_801D6F58
    if (ctx->r1 == 0) {
        // 0x801D6F2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6F58;
    }
    // 0x801D6F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D6F30: subu        $t9, $t4, $t8
    ctx->r25 = SUB32(ctx->r12, ctx->r24);
    // 0x801D6F34: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
    // 0x801D6F38: lb          $t5, 0x0($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X0);
    // 0x801D6F3C: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x801D6F40: slt         $at, $t2, $t5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x801D6F44: bnel        $at, $zero, L_801D6F90
    if (ctx->r1 != 0) {
        // 0x801D6F48: lb          $v1, 0x1($t1)
        ctx->r3 = MEM_B(ctx->r9, 0X1);
            goto L_801D6F90;
    }
    goto skip_0;
    // 0x801D6F48: lb          $v1, 0x1($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X1);
    skip_0:
    // 0x801D6F4C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x801D6F50: b           L_801D6F8C
    // 0x801D6F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6F8C;
    // 0x801D6F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6F58:
    // 0x801D6F58: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801D6F5C: beq         $at, $zero, L_801D6F88
    if (ctx->r1 == 0) {
        // 0x801D6F60: addu        $t6, $t4, $a1
        ctx->r14 = ADD32(ctx->r12, ctx->r5);
            goto L_801D6F88;
    }
    // 0x801D6F60: addu        $t6, $t4, $a1
    ctx->r14 = ADD32(ctx->r12, ctx->r5);
    // 0x801D6F64: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
    // 0x801D6F68: lb          $t7, 0x0($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X0);
    // 0x801D6F6C: lb          $t2, 0x0($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X0);
    // 0x801D6F70: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x801D6F74: bnel        $at, $zero, L_801D6F90
    if (ctx->r1 != 0) {
        // 0x801D6F78: lb          $v1, 0x1($t1)
        ctx->r3 = MEM_B(ctx->r9, 0X1);
            goto L_801D6F90;
    }
    goto skip_1;
    // 0x801D6F78: lb          $v1, 0x1($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X1);
    skip_1:
    // 0x801D6F7C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x801D6F80: b           L_801D6F8C
    // 0x801D6F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6F8C;
    // 0x801D6F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6F88:
    // 0x801D6F88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6F8C:
    // 0x801D6F8C: lb          $v1, 0x1($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X1);
L_801D6F90:
    // 0x801D6F90: lb          $a0, 0x1($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X1);
    // 0x801D6F94: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D6F98: beq         $at, $zero, L_801D6FC4
    if (ctx->r1 == 0) {
        // 0x801D6F9C: subu        $t8, $a0, $a1
        ctx->r24 = SUB32(ctx->r4, ctx->r5);
            goto L_801D6FC4;
    }
    // 0x801D6F9C: subu        $t8, $a0, $a1
    ctx->r24 = SUB32(ctx->r4, ctx->r5);
    // 0x801D6FA0: sb          $t8, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r24;
    // 0x801D6FA4: lb          $t9, 0x1($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X1);
    // 0x801D6FA8: lb          $v1, 0x1($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X1);
    // 0x801D6FAC: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801D6FB0: bnel        $at, $zero, L_801D6FFC
    if (ctx->r1 != 0) {
        // 0x801D6FB4: lb          $v1, 0x2($t1)
        ctx->r3 = MEM_B(ctx->r9, 0X2);
            goto L_801D6FFC;
    }
    goto skip_2;
    // 0x801D6FB4: lb          $v1, 0x2($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X2);
    skip_2:
    // 0x801D6FB8: sb          $v1, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r3;
    // 0x801D6FBC: b           L_801D6FF8
    // 0x801D6FC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6FF8;
    // 0x801D6FC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6FC4:
    // 0x801D6FC4: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6FC8: beq         $at, $zero, L_801D6FF4
    if (ctx->r1 == 0) {
        // 0x801D6FCC: addu        $t5, $a0, $a1
        ctx->r13 = ADD32(ctx->r4, ctx->r5);
            goto L_801D6FF4;
    }
    // 0x801D6FCC: addu        $t5, $a0, $a1
    ctx->r13 = ADD32(ctx->r4, ctx->r5);
    // 0x801D6FD0: sb          $t5, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r13;
    // 0x801D6FD4: lb          $t6, 0x1($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X1);
    // 0x801D6FD8: lb          $v1, 0x1($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X1);
    // 0x801D6FDC: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D6FE0: bnel        $at, $zero, L_801D6FFC
    if (ctx->r1 != 0) {
        // 0x801D6FE4: lb          $v1, 0x2($t1)
        ctx->r3 = MEM_B(ctx->r9, 0X2);
            goto L_801D6FFC;
    }
    goto skip_3;
    // 0x801D6FE4: lb          $v1, 0x2($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X2);
    skip_3:
    // 0x801D6FE8: sb          $v1, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r3;
    // 0x801D6FEC: b           L_801D6FF8
    // 0x801D6FF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D6FF8;
    // 0x801D6FF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6FF4:
    // 0x801D6FF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D6FF8:
    // 0x801D6FF8: lb          $v1, 0x2($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X2);
L_801D6FFC:
    // 0x801D6FFC: lb          $a0, 0x2($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X2);
    // 0x801D7000: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D7004: beq         $at, $zero, L_801D7030
    if (ctx->r1 == 0) {
        // 0x801D7008: subu        $t7, $a0, $a1
        ctx->r15 = SUB32(ctx->r4, ctx->r5);
            goto L_801D7030;
    }
    // 0x801D7008: subu        $t7, $a0, $a1
    ctx->r15 = SUB32(ctx->r4, ctx->r5);
    // 0x801D700C: sb          $t7, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r15;
    // 0x801D7010: lb          $t8, 0x2($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X2);
    // 0x801D7014: lb          $v1, 0x2($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X2);
    // 0x801D7018: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801D701C: bnel        $at, $zero, L_801D7068
    if (ctx->r1 != 0) {
        // 0x801D7020: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D7068;
    }
    goto skip_4;
    // 0x801D7020: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_4:
    // 0x801D7024: sb          $v1, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r3;
    // 0x801D7028: b           L_801D7064
    // 0x801D702C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D7064;
    // 0x801D702C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D7030:
    // 0x801D7030: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D7034: beq         $at, $zero, L_801D7060
    if (ctx->r1 == 0) {
        // 0x801D7038: addu        $t9, $a0, $a1
        ctx->r25 = ADD32(ctx->r4, ctx->r5);
            goto L_801D7060;
    }
    // 0x801D7038: addu        $t9, $a0, $a1
    ctx->r25 = ADD32(ctx->r4, ctx->r5);
    // 0x801D703C: sb          $t9, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r25;
    // 0x801D7040: lb          $t5, 0x2($t3)
    ctx->r13 = MEM_B(ctx->r11, 0X2);
    // 0x801D7044: lb          $v1, 0x2($t1)
    ctx->r3 = MEM_B(ctx->r9, 0X2);
    // 0x801D7048: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D704C: bnel        $at, $zero, L_801D7068
    if (ctx->r1 != 0) {
        // 0x801D7050: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801D7068;
    }
    goto skip_5;
    // 0x801D7050: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_5:
    // 0x801D7054: sb          $v1, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r3;
    // 0x801D7058: b           L_801D7064
    // 0x801D705C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D7064;
    // 0x801D705C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D7060:
    // 0x801D7060: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D7064:
    // 0x801D7064: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_801D7068:
    // 0x801D7068: bnel        $v0, $at, L_801D707C
    if (ctx->r2 != ctx->r1) {
        // 0x801D706C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D707C;
    }
    goto skip_6;
    // 0x801D706C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_6:
    // 0x801D7070: jr          $ra
    // 0x801D7074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D7074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D7078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D707C:
    // 0x801D707C: jr          $ra
    // 0x801D7080: nop

    TRACE_RETURN()
    return;
    // 0x801D7080: nop

;}
RECOMP_FUNC void func_801D7BC8_602FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7BC8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D7BCC: lw          $t0, -0x1130($v0)
    ctx->r8 = MEM_W(ctx->r2, -0X1130);
    // 0x801D7BD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D7BD4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D7BD8: sltiu       $at, $t6, 0x48
    ctx->r1 = ctx->r14 < 0X48 ? 1 : 0;
    // 0x801D7BDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7BE0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D7BE4: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x801D7BE8: beq         $at, $zero, L_801D8170
    if (ctx->r1 == 0) {
        // 0x801D7BEC: addiu       $v1, $t0, 0x140
        ctx->r3 = ADD32(ctx->r8, 0X140);
            goto L_801D8170;
    }
    // 0x801D7BEC: addiu       $v1, $t0, 0x140
    ctx->r3 = ADD32(ctx->r8, 0X140);
    // 0x801D7BF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D7BF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7BF8: addu        $at, $at, $t7
    gpr jr_addend_801D7C00 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D7BFC: lw          $t7, -0x285C($at)
    ctx->r15 = ADD32(ctx->r1, -0X285C);
    // 0x801D7C00: jr          $t7
    // 0x801D7C04: nop

    switch (jr_addend_801D7C00 >> 2) {
        case 0: goto L_801D8170; break;
        case 1: goto L_801D8170; break;
        case 2: goto L_801D8170; break;
        case 3: goto L_801D8170; break;
        case 4: goto L_801D8170; break;
        case 5: goto L_801D8170; break;
        case 6: goto L_801D8170; break;
        case 7: goto L_801D8170; break;
        case 8: goto L_801D8170; break;
        case 9: goto L_801D8170; break;
        case 10: goto L_801D7C08; break;
        case 11: goto L_801D7C78; break;
        case 12: goto L_801D7CE4; break;
        case 13: goto L_801D7D50; break;
        case 14: goto L_801D8170; break;
        case 15: goto L_801D8170; break;
        case 16: goto L_801D8170; break;
        case 17: goto L_801D8170; break;
        case 18: goto L_801D8170; break;
        case 19: goto L_801D8170; break;
        case 20: goto L_801D7DBC; break;
        case 21: goto L_801D7E18; break;
        case 22: goto L_801D8170; break;
        case 23: goto L_801D8170; break;
        case 24: goto L_801D8170; break;
        case 25: goto L_801D8170; break;
        case 26: goto L_801D8170; break;
        case 27: goto L_801D8170; break;
        case 28: goto L_801D8170; break;
        case 29: goto L_801D8170; break;
        case 30: goto L_801D7E68; break;
        case 31: goto L_801D7EB0; break;
        case 32: goto L_801D7EF8; break;
        case 33: goto L_801D8170; break;
        case 34: goto L_801D8170; break;
        case 35: goto L_801D8170; break;
        case 36: goto L_801D8170; break;
        case 37: goto L_801D8170; break;
        case 38: goto L_801D8170; break;
        case 39: goto L_801D8170; break;
        case 40: goto L_801D7F40; break;
        case 41: goto L_801D7F78; break;
        case 42: goto L_801D8170; break;
        case 43: goto L_801D8170; break;
        case 44: goto L_801D8170; break;
        case 45: goto L_801D8170; break;
        case 46: goto L_801D8170; break;
        case 47: goto L_801D8170; break;
        case 48: goto L_801D8170; break;
        case 49: goto L_801D8170; break;
        case 50: goto L_801D7FB0; break;
        case 51: goto L_801D801C; break;
        case 52: goto L_801D8170; break;
        case 53: goto L_801D8170; break;
        case 54: goto L_801D8170; break;
        case 55: goto L_801D8170; break;
        case 56: goto L_801D8170; break;
        case 57: goto L_801D8170; break;
        case 58: goto L_801D8170; break;
        case 59: goto L_801D8170; break;
        case 60: goto L_801D8088; break;
        case 61: goto L_801D8170; break;
        case 62: goto L_801D8170; break;
        case 63: goto L_801D8170; break;
        case 64: goto L_801D8170; break;
        case 65: goto L_801D8170; break;
        case 66: goto L_801D8170; break;
        case 67: goto L_801D8170; break;
        case 68: goto L_801D8170; break;
        case 69: goto L_801D8170; break;
        case 70: goto L_801D80B8; break;
        case 71: goto L_801D813C; break;
        default: switch_error(__func__, 0x801D7C00, 0x8020D7A4);
    }
    // 0x801D7C04: nop

L_801D7C08:
    // 0x801D7C08: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801D7C0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D7C10: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801D7C14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D7C18: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801D7C1C: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x801D7C20: addiu       $t8, $zero, 0x3D
    ctx->r24 = ADD32(0, 0X3D);
    // 0x801D7C24: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D7C28: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D7C2C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801D7C30: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801D7C34: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D7C38: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7C3C: jal         0x801D8878
    // 0x801D7C40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D8878_603C58(rdram, ctx);
        goto after_0;
    // 0x801D7C40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D7C44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7C48: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7C4C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7C4C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7C50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D7C54: sb          $t9, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r25;
    // 0x801D7C58: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801D7C5C: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x801D7C60: jal         0x80038BC8
    // 0x801D7C64: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801D7C64: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    after_1:
    // 0x801D7C68: jal         0x801CEE80
    // 0x801D7C6C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_2;
    // 0x801D7C6C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x801D7C70: b           L_801D8174
    // 0x801D7C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7C74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7C78:
    // 0x801D7C78: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801D7C7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D7C80: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D7C84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7C88: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801D7C8C: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x801D7C90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D7C94: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D7C98: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D7C9C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801D7CA0: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x801D7CA4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7CA8: jal         0x801D8878
    // 0x801D7CAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D8878_603C58(rdram, ctx);
        goto after_3;
    // 0x801D7CAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801D7CB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7CB4: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7CB8: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7CB8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7CBC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D7CC0: sb          $t3, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r11;
    // 0x801D7CC4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D7CC8: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
    // 0x801D7CCC: jal         0x80038BC8
    // 0x801D7CD0: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801D7CD0: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    after_4:
    // 0x801D7CD4: jal         0x801CEE80
    // 0x801D7CD8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_5;
    // 0x801D7CD8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x801D7CDC: b           L_801D8174
    // 0x801D7CE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7CE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7CE4:
    // 0x801D7CE4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801D7CE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D7CEC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D7CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D7CF4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801D7CF8: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x801D7CFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D7D00: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D7D04: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D7D08: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801D7D0C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x801D7D10: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7D14: jal         0x801D8878
    // 0x801D7D18: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801D8878_603C58(rdram, ctx);
        goto after_6;
    // 0x801D7D18: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x801D7D1C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7D20: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7D24: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7D24: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7D28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D7D2C: sb          $t6, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r14;
    // 0x801D7D30: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x801D7D34: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x801D7D38: jal         0x80038BC8
    // 0x801D7D3C: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801D7D3C: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    after_7:
    // 0x801D7D40: jal         0x801CEE80
    // 0x801D7D44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_8;
    // 0x801D7D44: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x801D7D48: b           L_801D8174
    // 0x801D7D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7D50:
    // 0x801D7D50: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x801D7D54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D7D58: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801D7D5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D7D60: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801D7D64: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x801D7D68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D7D6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D7D70: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D7D74: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801D7D78: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D7D7C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7D80: jal         0x801D8878
    // 0x801D7D84: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801D8878_603C58(rdram, ctx);
        goto after_9;
    // 0x801D7D84: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x801D7D88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7D8C: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7D90: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7D90: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7D94: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D7D98: sb          $t9, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r25;
    // 0x801D7D9C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D7DA0: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x801D7DA4: jal         0x80038BC8
    // 0x801D7DA8: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    func_80038BC8_397C8(rdram, ctx);
        goto after_10;
    // 0x801D7DA8: addiu       $a0, $zero, 0x229
    ctx->r4 = ADD32(0, 0X229);
    after_10:
    // 0x801D7DAC: jal         0x801CEE80
    // 0x801D7DB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_11;
    // 0x801D7DB0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_11:
    // 0x801D7DB4: b           L_801D8174
    // 0x801D7DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7DB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7DBC:
    // 0x801D7DBC: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D7DC0: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801D7DC4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801D7DC8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D7DCC: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D7DD0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7DD4: jal         0x801D9474
    // 0x801D7DD8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_801D9474_604854(rdram, ctx);
        goto after_12;
    // 0x801D7DD8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_12:
    // 0x801D7DDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7DE0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7DE4: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7DE8: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_801D8170;
    }
    // 0x801D7DE8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D7DEC: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x801D7DF0: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x801D7DF4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D7DF8: sb          $t3, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r11;
    // 0x801D7DFC: sw          $zero, 0x70($t0)
    MEM_W(0X70, ctx->r8) = 0;
    // 0x801D7E00: jal         0x80038BC8
    // 0x801D7E04: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_13;
    // 0x801D7E04: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_13:
    // 0x801D7E08: jal         0x801CEE80
    // 0x801D7E0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_14;
    // 0x801D7E0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x801D7E10: b           L_801D8174
    // 0x801D7E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7E14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7E18:
    // 0x801D7E18: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D7E1C: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801D7E20: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801D7E24: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D7E28: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D7E2C: jal         0x801DA720
    // 0x801D7E30: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DA720_605B00(rdram, ctx);
        goto after_15;
    // 0x801D7E30: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_15:
    // 0x801D7E34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7E38: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7E3C: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7E3C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7E40: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x801D7E44: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
    // 0x801D7E48: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801D7E4C: sb          $t5, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r13;
    // 0x801D7E50: jal         0x80038BC8
    // 0x801D7E54: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_16;
    // 0x801D7E54: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_16:
    // 0x801D7E58: jal         0x801CEE80
    // 0x801D7E5C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_17;
    // 0x801D7E5C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_17:
    // 0x801D7E60: b           L_801D8174
    // 0x801D7E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7E68:
    // 0x801D7E68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7E6C: lwc1        $f12, -0x273C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X273C);
    // 0x801D7E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D7E74: jal         0x801DD5D8
    // 0x801D7E78: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DD5D8_6089B8(rdram, ctx);
        goto after_18;
    // 0x801D7E78: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_18:
    // 0x801D7E7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7E80: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7E84: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7E84: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7E88: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x801D7E8C: sb          $t6, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r14;
    // 0x801D7E90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D7E94: sb          $t7, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r15;
    // 0x801D7E98: jal         0x80038BC8
    // 0x801D7E9C: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_19;
    // 0x801D7E9C: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_19:
    // 0x801D7EA0: jal         0x801CEE80
    // 0x801D7EA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_20;
    // 0x801D7EA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_20:
    // 0x801D7EA8: b           L_801D8174
    // 0x801D7EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7EAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7EB0:
    // 0x801D7EB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7EB4: lwc1        $f12, -0x2738($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2738);
    // 0x801D7EB8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801D7EBC: jal         0x801DD5D8
    // 0x801D7EC0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DD5D8_6089B8(rdram, ctx);
        goto after_21;
    // 0x801D7EC0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_21:
    // 0x801D7EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7EC8: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7ECC: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7ECC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7ED0: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x801D7ED4: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
    // 0x801D7ED8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D7EDC: sb          $t9, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r25;
    // 0x801D7EE0: jal         0x80038BC8
    // 0x801D7EE4: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_22;
    // 0x801D7EE4: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_22:
    // 0x801D7EE8: jal         0x801CEE80
    // 0x801D7EEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_23;
    // 0x801D7EEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_23:
    // 0x801D7EF0: b           L_801D8174
    // 0x801D7EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7EF8:
    // 0x801D7EF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7EFC: lwc1        $f12, -0x2734($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2734);
    // 0x801D7F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7F04: jal         0x801DD5D8
    // 0x801D7F08: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DD5D8_6089B8(rdram, ctx);
        goto after_24;
    // 0x801D7F08: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_24:
    // 0x801D7F0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7F10: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7F14: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7F14: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7F18: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x801D7F1C: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
    // 0x801D7F20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801D7F24: sb          $t2, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r10;
    // 0x801D7F28: jal         0x80038BC8
    // 0x801D7F2C: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_25;
    // 0x801D7F2C: addiu       $a0, $zero, 0x22B
    ctx->r4 = ADD32(0, 0X22B);
    after_25:
    // 0x801D7F30: jal         0x801CEE80
    // 0x801D7F34: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_26;
    // 0x801D7F34: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_26:
    // 0x801D7F38: b           L_801D8174
    // 0x801D7F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D7F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7F40:
    // 0x801D7F40: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7F44: lwc1        $f12, -0x2730($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2730);
    // 0x801D7F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D7F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D7F50: jal         0x801DDAF8
    // 0x801D7F54: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DDAF8_608ED8(rdram, ctx);
        goto after_27;
    // 0x801D7F54: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_27:
    // 0x801D7F58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7F5C: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7F60: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7F60: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7F64: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x801D7F68: sb          $t3, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r11;
    // 0x801D7F6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D7F70: b           L_801D8170
    // 0x801D7F74: sb          $t4, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r12;
        goto L_801D8170;
    // 0x801D7F74: sb          $t4, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r12;
L_801D7F78:
    // 0x801D7F78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7F7C: lwc1        $f12, -0x272C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X272C);
    // 0x801D7F80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D7F84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D7F88: jal         0x801DDAF8
    // 0x801D7F8C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_801DDAF8_608ED8(rdram, ctx);
        goto after_28;
    // 0x801D7F8C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_28:
    // 0x801D7F90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7F94: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D7F98: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D7F98: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7F9C: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x801D7FA0: sb          $t5, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r13;
    // 0x801D7FA4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D7FA8: b           L_801D8170
    // 0x801D7FAC: sb          $t6, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r14;
        goto L_801D8170;
    // 0x801D7FAC: sb          $t6, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r14;
L_801D7FB0:
    // 0x801D7FB0: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D7FB4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D7FB8: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D7FBC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7FC0: jal         0x801DCE24
    // 0x801D7FC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_801DCE24_608204(rdram, ctx);
        goto after_29;
    // 0x801D7FC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_29:
    // 0x801D7FC8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7FCC: beq         $v0, $zero, L_801D8170
    if (ctx->r2 == 0) {
        // 0x801D7FD0: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_801D8170;
    }
    // 0x801D7FD0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D7FD4: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D7FD8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D7FDC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x801D7FE0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D7FE4: jal         0x801DCE24
    // 0x801D7FE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_801DCE24_608204(rdram, ctx);
        goto after_30;
    // 0x801D7FE8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_30:
    // 0x801D7FEC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D7FF0: beq         $v0, $zero, L_801D800C
    if (ctx->r2 == 0) {
        // 0x801D7FF4: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_801D800C;
    }
    // 0x801D7FF4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801D7FF8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801D7FFC: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x801D8000: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D8004: b           L_801D8170
    // 0x801D8008: sb          $t8, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r24;
        goto L_801D8170;
    // 0x801D8008: sb          $t8, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r24;
L_801D800C:
    // 0x801D800C: jal         0x80034EF8
    // 0x801D8010: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_31;
    // 0x801D8010: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_31:
    // 0x801D8014: b           L_801D8174
    // 0x801D8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D801C:
    // 0x801D801C: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D8020: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D8024: addiu       $a0, $zero, -0x32
    ctx->r4 = ADD32(0, -0X32);
    // 0x801D8028: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D802C: jal         0x801DCE24
    // 0x801D8030: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_801DCE24_608204(rdram, ctx);
        goto after_32;
    // 0x801D8030: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_32:
    // 0x801D8034: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D8038: beq         $v0, $zero, L_801D8170
    if (ctx->r2 == 0) {
        // 0x801D803C: lw          $a1, 0x3C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X3C);
            goto L_801D8170;
    }
    // 0x801D803C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D8040: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x801D8044: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801D8048: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x801D804C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D8050: jal         0x801DCE24
    // 0x801D8054: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_801DCE24_608204(rdram, ctx);
        goto after_33;
    // 0x801D8054: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_33:
    // 0x801D8058: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D805C: beq         $v0, $zero, L_801D8078
    if (ctx->r2 == 0) {
        // 0x801D8060: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_801D8078;
    }
    // 0x801D8060: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x801D8064: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x801D8068: sb          $t9, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r25;
    // 0x801D806C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x801D8070: b           L_801D8170
    // 0x801D8074: sb          $t1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r9;
        goto L_801D8170;
    // 0x801D8074: sb          $t1, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r9;
L_801D8078:
    // 0x801D8078: jal         0x80034EF8
    // 0x801D807C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_34;
    // 0x801D807C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_34:
    // 0x801D8080: b           L_801D8174
    // 0x801D8084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D8174;
    // 0x801D8084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D8088:
    // 0x801D8088: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D808C: addiu       $a0, $a0, -0x3E6C
    ctx->r4 = ADD32(ctx->r4, -0X3E6C);
    // 0x801D8090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D8094: jal         0x80034DD8
    // 0x801D8098: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80034DD8_359D8(rdram, ctx);
        goto after_35;
    // 0x801D8098: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_35:
    // 0x801D809C: beq         $v0, $zero, L_801D8170
    if (ctx->r2 == 0) {
        // 0x801D80A0: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D80A0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D80A4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x801D80A8: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x801D80AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D80B0: b           L_801D8170
    // 0x801D80B4: sb          $t3, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r11;
        goto L_801D8170;
    // 0x801D80B4: sb          $t3, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r11;
L_801D80B8:
    // 0x801D80B8: lw          $t4, 0x64($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X64);
    // 0x801D80BC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x801D80C0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801D80C4: blezl       $t4, L_801D8174
    if (SIGNED(ctx->r12) <= 0) {
        // 0x801D80C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D8174;
    }
    goto skip_0;
    // 0x801D80C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801D80CC: lw          $t5, 0x2C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2C);
    // 0x801D80D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801D80D4: bne         $t5, $zero, L_801D80E4
    if (ctx->r13 != 0) {
        // 0x801D80D8: nop
    
            goto L_801D80E4;
    }
    // 0x801D80D8: nop

    // 0x801D80DC: b           L_801D80E4
    // 0x801D80E0: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
        goto L_801D80E4;
    // 0x801D80E0: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
L_801D80E4:
    // 0x801D80E4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x801D80E8: jal         0x801DAFCC
    // 0x801D80EC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_801DAFCC_6063AC(rdram, ctx);
        goto after_36;
    // 0x801D80EC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_36:
    // 0x801D80F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D80F4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D80F8: bne         $v0, $at, L_801D8170
    if (ctx->r2 != ctx->r1) {
        // 0x801D80FC: lw          $t0, 0x30($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X30);
            goto L_801D8170;
    }
    // 0x801D80FC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D8100: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D8104: sb          $t6, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r14;
    // 0x801D8108: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x801D810C: addiu       $a0, $zero, 0x22D
    ctx->r4 = ADD32(0, 0X22D);
    // 0x801D8110: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x801D8114: sw          $t8, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r24;
    // 0x801D8118: jal         0x80038BC8
    // 0x801D811C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_80038BC8_397C8(rdram, ctx);
        goto after_37;
    // 0x801D811C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_37:
    // 0x801D8120: jal         0x801CEE80
    // 0x801D8124: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_38;
    // 0x801D8124: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_38:
    // 0x801D8128: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801D812C: lw          $t9, 0x64($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X64);
    // 0x801D8130: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x801D8134: b           L_801D8170
    // 0x801D8138: sw          $t1, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r9;
        goto L_801D8170;
    // 0x801D8138: sw          $t1, 0x64($t0)
    MEM_W(0X64, ctx->r8) = ctx->r9;
L_801D813C:
    // 0x801D813C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D8140: addiu       $a0, $a0, -0x48FC
    ctx->r4 = ADD32(ctx->r4, -0X48FC);
    // 0x801D8144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D8148: jal         0x80034DD8
    // 0x801D814C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80034DD8_359D8(rdram, ctx);
        goto after_39;
    // 0x801D814C: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_39:
    // 0x801D8150: beq         $v0, $zero, L_801D8170
    if (ctx->r2 == 0) {
        // 0x801D8154: lw          $v1, 0x34($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X34);
            goto L_801D8170;
    }
    // 0x801D8154: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801D8158: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x801D815C: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x801D8160: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D8164: sb          $t3, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r11;
    // 0x801D8168: jal         0x801CEE80
    // 0x801D816C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_40;
    // 0x801D816C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_40:
L_801D8170:
    // 0x801D8170: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D8174:
    // 0x801D8174: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x801D8178: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D817C: jr          $ra
    // 0x801D8180: nop

    TRACE_RETURN()
    return;
    // 0x801D8180: nop

;}
RECOMP_FUNC void func_801D2BF0_5FDFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2BF0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2BF4: sw          $zero, -0x70A0($at)
    MEM_W(-0X70A0, ctx->r1) = 0;
    // 0x801D2BF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2BFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x801D2C00: addiu       $v0, $v0, -0x1120
    ctx->r2 = ADD32(ctx->r2, -0X1120);
    // 0x801D2C04: sw          $zero, -0x709C($at)
    MEM_W(-0X709C, ctx->r1) = 0;
    // 0x801D2C08: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x801D2C0C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x801D2C10: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x801D2C14: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x801D2C18: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x801D2C1C: jr          $ra
    // 0x801D2C20: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x801D2C20: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
;}
RECOMP_FUNC void func_801D1F4C_5FD32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1F4C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D1F50: jr          $ra
    // 0x801D1F54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801D1F54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FE288_629668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FE288: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FE28C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FE290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FE294: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FE298: jal         0x801FFE6C
    // 0x801FE29C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FE29C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FE2A0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FE2A4: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x801FE2A8: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801FE2AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FE2B0: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FE2B4: addiu       $v0, $zero, 0x92
    ctx->r2 = ADD32(0, 0X92);
    // 0x801FE2B8: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801FE2BC: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801FE2C0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FE2C4: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801FE2C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801FE2CC: jal         0x801D2EE4
    // 0x801FE2D0: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801FE2D0: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    after_1:
    // 0x801FE2D4: jal         0x80038BC8
    // 0x801FE2D8: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801FE2D8: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    after_2:
    // 0x801FE2DC: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x801FE2E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FE2E4: addiu       $a0, $a0, -0x1CF8
    ctx->r4 = ADD32(ctx->r4, -0X1CF8);
    // 0x801FE2E8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801FE2EC: jal         0x8003521C
    // 0x801FE2F0: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FE2F0: sw          $t8, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r24;
    after_3:
    // 0x801FE2F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FE2F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FE2FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FE300: jr          $ra
    // 0x801FE304: nop

    TRACE_RETURN()
    return;
    // 0x801FE304: nop

;}
RECOMP_FUNC void func_801F9464_624844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9468: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F946C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F9470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F9478: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F947C: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F9480: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801F9484: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801F9488: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F948C: beql        $t8, $at, L_801F94A8
    if (ctx->r24 == ctx->r1) {
        // 0x801F9490: lw          $t9, 0x7C($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X7C);
            goto L_801F94A8;
    }
    goto skip_0;
    // 0x801F9490: lw          $t9, 0x7C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X7C);
    skip_0:
    // 0x801F9494: jal         0x80034ED4
    // 0x801F9498: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F9498: nop

    after_0:
    // 0x801F949C: b           L_801F94FC
    // 0x801F94A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F94FC;
    // 0x801F94A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F94A4: lw          $t9, 0x7C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X7C);
L_801F94A8:
    // 0x801F94A8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801F94AC: bne         $t0, $zero, L_801F94F8
    if (ctx->r8 != 0) {
        // 0x801F94B0: sw          $t0, 0x7C($a1)
        MEM_W(0X7C, ctx->r5) = ctx->r8;
            goto L_801F94F8;
    }
    // 0x801F94B0: sw          $t0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r8;
    // 0x801F94B4: lw          $t2, 0x90($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X90);
    // 0x801F94B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F94BC: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x801F94C0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801F94C4: beq         $t3, $at, L_801F94E8
    if (ctx->r11 == ctx->r1) {
        // 0x801F94C8: sw          $t3, 0x90($a1)
        MEM_W(0X90, ctx->r5) = ctx->r11;
            goto L_801F94E8;
    }
    // 0x801F94C8: sw          $t3, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->r11;
    // 0x801F94CC: jal         0x801D36C4
    // 0x801F94D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x801F94D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x801F94D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F94D8: jal         0x8003521C
    // 0x801F94DC: addiu       $a0, $a0, -0x6D30
    ctx->r4 = ADD32(ctx->r4, -0X6D30);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F94DC: addiu       $a0, $a0, -0x6D30
    ctx->r4 = ADD32(ctx->r4, -0X6D30);
    after_2:
    // 0x801F94E0: b           L_801F94FC
    // 0x801F94E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F94FC;
    // 0x801F94E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F94E8:
    // 0x801F94E8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F94EC: sw          $t5, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r13;
    // 0x801F94F0: jal         0x8003521C
    // 0x801F94F4: addiu       $a0, $a0, -0x6AF8
    ctx->r4 = ADD32(ctx->r4, -0X6AF8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F94F4: addiu       $a0, $a0, -0x6AF8
    ctx->r4 = ADD32(ctx->r4, -0X6AF8);
    after_3:
L_801F94F8:
    // 0x801F94F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F94FC:
    // 0x801F94FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9500: jr          $ra
    // 0x801F9504: nop

    TRACE_RETURN()
    return;
    // 0x801F9504: nop

;}
RECOMP_FUNC void func_801FF9EC_62ADCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF9EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FF9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FF9F4: jal         0x801FFE6C
    // 0x801FF9F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FF9F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FF9FC: jal         0x801FFE34
    // 0x801FFA00: nop

    func_801FFE34_62B214(rdram, ctx);
        goto after_1;
    // 0x801FFA00: nop

    after_1:
    // 0x801FFA04: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FFA08: addiu       $a1, $a1, -0x4BD0
    ctx->r5 = ADD32(ctx->r5, -0X4BD0);
    // 0x801FFA0C: jal         0x801D2EE4
    // 0x801FFA10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801FFA10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801FFA14: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FFA18: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FFA1C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FFA20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FFA24: addiu       $a0, $a0, -0x5C0
    ctx->r4 = ADD32(ctx->r4, -0X5C0);
    // 0x801FFA28: jal         0x8003521C
    // 0x801FFA2C: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FFA2C: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    after_3:
    // 0x801FFA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FFA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FFA38: jr          $ra
    // 0x801FFA3C: nop

    TRACE_RETURN()
    return;
    // 0x801FFA3C: nop

;}
RECOMP_FUNC void func_801D6CB0_602090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6CB0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D6CB4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D6CB8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D6CBC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x801D6CC0: nop

    // 0x801D6CC4: bc1fl       L_801D6CD8
    if (!c1cs) {
        // 0x801D6CC8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_801D6CD8;
    }
    goto skip_0;
    // 0x801D6CC8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_0:
    // 0x801D6CCC: jr          $ra
    // 0x801D6CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D6CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6CD4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_801D6CD8:
    // 0x801D6CD8: nop

    // 0x801D6CDC: bc1fl       L_801D6D10
    if (!c1cs) {
        // 0x801D6CE0: add.s       $f8, $f0, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_801D6D10;
    }
    goto skip_1;
    // 0x801D6CE0: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    skip_1:
    // 0x801D6CE4: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x801D6CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6CEC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x801D6CF0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D6CF4: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x801D6CF8: nop

    // 0x801D6CFC: bc1fl       L_801D6D38
    if (!c1cs) {
        // 0x801D6D00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6D38;
    }
    goto skip_2;
    // 0x801D6D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801D6D04: jr          $ra
    // 0x801D6D08: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6D08: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x801D6D0C: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
L_801D6D10:
    // 0x801D6D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D6D14: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x801D6D18: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D6D1C: c.le.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl <= ctx->f10.fl;
    // 0x801D6D20: nop

    // 0x801D6D24: bc1fl       L_801D6D38
    if (!c1cs) {
        // 0x801D6D28: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6D38;
    }
    goto skip_3;
    // 0x801D6D28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x801D6D2C: jr          $ra
    // 0x801D6D30: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6D30: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x801D6D34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D6D38:
    // 0x801D6D38: jr          $ra
    // 0x801D6D3C: nop

    TRACE_RETURN()
    return;
    // 0x801D6D3C: nop

;}
RECOMP_FUNC void func_801D8F20_604300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8F20: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8F24: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D8F28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D8F2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D8F30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D8F34: lw          $t6, 0x1D8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1D8);
    // 0x801D8F38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8F3C: addiu       $a0, $zero, 0x231
    ctx->r4 = ADD32(0, 0X231);
    // 0x801D8F40: bnel        $a1, $t6, L_801D8FB0
    if (ctx->r5 != ctx->r14) {
        // 0x801D8F44: lw          $t8, 0x64($a1)
        ctx->r24 = MEM_W(ctx->r5, 0X64);
            goto L_801D8FB0;
    }
    goto skip_0;
    // 0x801D8F44: lw          $t8, 0x64($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X64);
    skip_0:
    // 0x801D8F48: lwc1        $f4, 0xD8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x801D8F4C: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8F50: lw          $a3, 0xD4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8F54: addiu       $a1, $v0, 0xA0
    ctx->r5 = ADD32(ctx->r2, 0XA0);
    // 0x801D8F58: jal         0x8000F280
    // 0x801D8F5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8000F280_FE80(rdram, ctx);
        goto after_0;
    // 0x801D8F5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D8F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8F64: jal         0x80037C9C
    // 0x801D8F68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x801D8F68: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x801D8F6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D8F74: jal         0x80037C20
    // 0x801D8F78: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x801D8F78: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x801D8F7C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D8F80: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801D8F84: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8F88: lwc1        $f6, -0x2700($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2700);
    // 0x801D8F8C: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8F90: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8F94: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801D8F98: lw          $a0, 0x1C8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C8);
    // 0x801D8F9C: jal         0x801DF868
    // 0x801D8FA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_3;
    // 0x801D8FA0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x801D8FA4: b           L_801D9020
    // 0x801D8FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D9020;
    // 0x801D8FA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D8FAC: lw          $t8, 0x64($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X64);
L_801D8FB0:
    // 0x801D8FB0: addiu       $a1, $v0, 0xA0
    ctx->r5 = ADD32(ctx->r2, 0XA0);
    // 0x801D8FB4: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    // 0x801D8FB8: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x801D8FBC: beql        $t9, $zero, L_801D8FDC
    if (ctx->r25 == 0) {
        // 0x801D8FC0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_801D8FDC;
    }
    goto skip_1;
    // 0x801D8FC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_1:
    // 0x801D8FC4: lwc1        $f8, 0xD8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XD8);
    // 0x801D8FC8: lw          $a2, 0xD0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD0);
    // 0x801D8FCC: lw          $a3, 0xD4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD4);
    // 0x801D8FD0: jal         0x8000F280
    // 0x801D8FD4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8000F280_FE80(rdram, ctx);
        goto after_4;
    // 0x801D8FD4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x801D8FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_801D8FDC:
    // 0x801D8FDC: jal         0x80037C9C
    // 0x801D8FE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80037C9C_3889C(rdram, ctx);
        goto after_5;
    // 0x801D8FE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x801D8FE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D8FE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D8FEC: jal         0x80037C20
    // 0x801D8FF0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_6;
    // 0x801D8FF0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x801D8FF4: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801D8FF8: lw          $t0, -0x1130($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1130);
    // 0x801D8FFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D9000: lwc1        $f10, -0x26FC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X26FC);
    // 0x801D9004: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801D9008: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x801D900C: lw          $a3, 0xD8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XD8);
    // 0x801D9010: lw          $a0, 0x1C8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C8);
    // 0x801D9014: jal         0x801DF868
    // 0x801D9018: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801DF868_60AC48(rdram, ctx);
        goto after_7;
    // 0x801D9018: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x801D901C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9020:
    // 0x801D9020: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D9024: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D9028: jr          $ra
    // 0x801D902C: nop

    TRACE_RETURN()
    return;
    // 0x801D902C: nop

;}
RECOMP_FUNC void func_801F76D0_622AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F76D0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F76D4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F76D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F76DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F76E0: lw          $t6, 0x2C8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C8);
    // 0x801F76E4: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801F76E8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801F76EC: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x801F76F0: bne         $t7, $zero, L_801F77DC
    if (ctx->r15 != 0) {
        // 0x801F76F4: addiu       $t0, $v0, 0x178
        ctx->r8 = ADD32(ctx->r2, 0X178);
            goto L_801F77DC;
    }
    // 0x801F76F4: addiu       $t0, $v0, 0x178
    ctx->r8 = ADD32(ctx->r2, 0X178);
    // 0x801F76F8: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F76FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F7700: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x801F7704: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F7708: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x801F770C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7710: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F7714: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x801F7718: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801F771C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801F7720: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x801F7724: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801F7728: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801F772C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801F7730: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F7734: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x801F7738: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801F773C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801F7740: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801F7744: jal         0x801DFB90
    // 0x801F7748: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_0;
    // 0x801F7748: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801F774C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7750: addiu       $a1, $a1, -0x10D0
    ctx->r5 = ADD32(ctx->r5, -0X10D0);
    // 0x801F7754: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801F7758: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x801F775C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F7760: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x801F7764: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801F7768: sw          $t9, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r25;
    // 0x801F776C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801F7770: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x801F7774: bgezl       $t1, L_801F77E0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801F7778: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F77E0;
    }
    goto skip_0;
    // 0x801F7778: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801F777C: beq         $v0, $zero, L_801F77DC
    if (ctx->r2 == 0) {
        // 0x801F7780: lui         $at, 0x4079
        ctx->r1 = S32(0X4079 << 16);
            goto L_801F77DC;
    }
    // 0x801F7780: lui         $at, 0x4079
    ctx->r1 = S32(0X4079 << 16);
    // 0x801F7784: lwc1        $f8, 0x10($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X10);
    // 0x801F7788: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801F778C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F7790: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801F7794: c.eq.d      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.d == ctx->f16.d;
    // 0x801F7798: nop

    // 0x801F779C: bc1fl       L_801F77E0
    if (!c1cs) {
        // 0x801F77A0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F77E0;
    }
    goto skip_1;
    // 0x801F77A0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x801F77A4: lbu         $t2, 0xC($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XC);
    // 0x801F77A8: bnel        $t2, $zero, L_801F77E0
    if (ctx->r10 != 0) {
        // 0x801F77AC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801F77E0;
    }
    goto skip_2;
    // 0x801F77AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x801F77B0: jal         0x801F77EC
    // 0x801F77B4: nop

    func_801F77EC_622BCC(rdram, ctx);
        goto after_1;
    // 0x801F77B4: nop

    after_1:
    // 0x801F77B8: jal         0x8000DD58
    // 0x801F77BC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801F77BC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
    // 0x801F77C0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801F77C4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801F77C8: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801F77CC: lw          $t5, -0x10D0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10D0);
    // 0x801F77D0: mflo        $t3
    ctx->r11 = lo;
    // 0x801F77D4: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x801F77D8: sw          $t4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r12;
L_801F77DC:
    // 0x801F77DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801F77E0:
    // 0x801F77E0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F77E4: jr          $ra
    // 0x801F77E8: nop

    TRACE_RETURN()
    return;
    // 0x801F77E8: nop

;}
RECOMP_FUNC void func_80206ED8_6322B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206ED8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80206EDC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80206EE0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x80206EE4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80206EE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80206EEC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80206EF0: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80206EF4: jal         0x8000DD58
    // 0x80206EF8: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x80206EF8: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_0:
    // 0x80206EFC: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80206F00: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x80206F04: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x80206F08: jal         0x8000E630
    // 0x80206F0C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x80206F0C: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    after_1:
    // 0x80206F10: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80206F14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80206F18: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80206F1C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80206F20: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80206F24: addiu       $a1, $a1, 0x70C0
    ctx->r5 = ADD32(ctx->r5, 0X70C0);
    // 0x80206F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80206F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80206F34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80206F38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80206F3C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80206F40: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x80206F44: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80206F48: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x80206F4C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80206F50: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80206F54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80206F58: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80206F5C: jal         0x800358E8
    // 0x80206F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_2;
    // 0x80206F60: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80206F64: beq         $v0, $zero, L_802070AC
    if (ctx->r2 == 0) {
        // 0x80206F68: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802070AC;
    }
    // 0x80206F68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80206F6C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80206F70: addiu       $a1, $a1, 0x5C0
    ctx->r5 = ADD32(ctx->r5, 0X5C0);
    // 0x80206F74: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206F78: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x80206F7C: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80206F80: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80206F84: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80206F88: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80206F8C: addiu       $t6, $zero, 0x4B6
    ctx->r14 = ADD32(0, 0X4B6);
    // 0x80206F90: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x80206F94: addiu       $a2, $a2, -0x5198
    ctx->r6 = ADD32(ctx->r6, -0X5198);
    // 0x80206F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206F9C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x80206FA0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80206FA4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80206FA8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80206FAC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80206FB0: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x80206FB4: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80206FB8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80206FBC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80206FC0: jal         0x8000DBF0
    // 0x80206FC4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x80206FC4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80206FC8: bne         $v0, $zero, L_80206FE0
    if (ctx->r2 != 0) {
        // 0x80206FCC: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_80206FE0;
    }
    // 0x80206FCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80206FD0: jal         0x80034EF8
    // 0x80206FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_4;
    // 0x80206FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80206FD8: b           L_802070AC
    // 0x80206FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802070AC;
    // 0x80206FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80206FE0:
    // 0x80206FE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80206FE4: lwc1        $f18, -0x117C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X117C);
    // 0x80206FE8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80206FEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80206FF0: addiu       $t7, $sp, 0x64
    ctx->r15 = ADD32(ctx->r29, 0X64);
    // 0x80206FF4: addiu       $t8, $sp, 0x60
    ctx->r24 = ADD32(ctx->r29, 0X60);
    // 0x80206FF8: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x80206FFC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80207000: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80207004: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80207008: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8020700C: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x80207010: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    // 0x80207014: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80207018: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x8020701C: jal         0x8000E4E4
    // 0x80207020: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_5;
    // 0x80207020: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80207024: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80207028: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8020702C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80207030: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x80207034: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80207038: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8020703C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80207040: addiu       $t3, $zero, 0x34
    ctx->r11 = ADD32(0, 0X34);
    // 0x80207044: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x80207048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020704C: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x80207050: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80207054: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x80207058: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8020705C: sw          $t0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r8;
    // 0x80207060: sb          $t1, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r9;
    // 0x80207064: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x80207068: sb          $t3, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r11;
    // 0x8020706C: sh          $t4, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r12;
    // 0x80207070: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80207074: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x80207078: jal         0x801D36C4
    // 0x8020707C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_6;
    // 0x8020707C: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    after_6:
    // 0x80207080: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x80207084: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x80207088: addiu       $t7, $zero, -0x11
    ctx->r15 = ADD32(0, -0X11);
    // 0x8020708C: addiu       $t8, $zero, 0x242
    ctx->r24 = ADD32(0, 0X242);
    // 0x80207090: sh          $t5, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r13;
    // 0x80207094: sh          $t6, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r14;
    // 0x80207098: sh          $t7, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r15;
    // 0x8020709C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    // 0x802070A0: sw          $t8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r24;
    // 0x802070A4: jal         0x801D3894
    // 0x802070A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_7;
    // 0x802070A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_802070AC:
    // 0x802070AC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802070B0: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x802070B4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x802070B8: jr          $ra
    // 0x802070BC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x802070BC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_801D3924_642774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3924: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D3928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D392C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D3930: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D3934: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D3938: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D393C: bgezl       $t6, L_801D3964
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D3940: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D3964;
    }
    goto skip_0;
    // 0x801D3940: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D3944: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D3948: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D394C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D3950: jal         0x800352EC
    // 0x801D3954: addiu       $a0, $a0, 0x3C04
    ctx->r4 = ADD32(ctx->r4, 0X3C04);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D3954: addiu       $a0, $a0, 0x3C04
    ctx->r4 = ADD32(ctx->r4, 0X3C04);
    after_0:
    // 0x801D3958: b           L_801D3A44
    // 0x801D395C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D3A44;
    // 0x801D395C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D3960: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801D3964:
    // 0x801D3964: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D3968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D396C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D3970: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D3974: lw          $t9, -0x7540($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7540);
    // 0x801D3978: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D397C: jalr        $t9
    // 0x801D3980: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D3980: nop

    after_1:
    // 0x801D3984: jal         0x801CD504
    // 0x801D3988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D3988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D398C: beq         $v0, $zero, L_801D39A4
    if (ctx->r2 == 0) {
        // 0x801D3990: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801D39A4;
    }
    // 0x801D3990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D3994: jal         0x801D2B90
    // 0x801D3998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D3998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D399C: b           L_801D3A44
    // 0x801D39A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D3A44;
    // 0x801D39A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D39A4:
    // 0x801D39A4: lw          $t0, 0xA0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XA0);
    // 0x801D39A8: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x801D39AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D39B0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801D39B4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D39B8: ldc1        $f8, -0xF70($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF70);
    // 0x801D39BC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D39C0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D39C4: ldc1        $f4, -0xF68($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XF68);
    // 0x801D39C8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801D39CC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D39D0: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801D39D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D39D8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D39DC: neg.d       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = -ctx->f10.d;
    // 0x801D39E0: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    // 0x801D39E4: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x801D39E8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x801D39EC: lwc1        $f18, 0x28($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801D39F0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D39F4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801D39F8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801D39FC: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801D3A00: add.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = ctx->f4.d + ctx->f16.d;
    // 0x801D3A04: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x801D3A08: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D3A0C: nop

    // 0x801D3A10: bc1f        L_801D3A2C
    if (!c1cs) {
        // 0x801D3A14: nop
    
            goto L_801D3A2C;
    }
    // 0x801D3A14: nop

    // 0x801D3A18: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_801D3A1C:
    // 0x801D3A1C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D3A20: nop

    // 0x801D3A24: bc1tl       L_801D3A1C
    if (c1cs) {
        // 0x801D3A28: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801D3A1C;
    }
    goto skip_1;
    // 0x801D3A28: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
L_801D3A2C:
    // 0x801D3A2C: jal         0x801CD634
    // 0x801D3A30: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    func_801CD634_63C484(rdram, ctx);
        goto after_4;
    // 0x801D3A30: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    after_4:
    // 0x801D3A34: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D3A38: jal         0x801CD780
    // 0x801D3A3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_5;
    // 0x801D3A3C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x801D3A40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D3A44:
    // 0x801D3A44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D3A48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D3A4C: jr          $ra
    // 0x801D3A50: nop

    TRACE_RETURN()
    return;
    // 0x801D3A50: nop

;}
RECOMP_FUNC void func_801CC148_63AF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC148: lwc1        $f4, 0x378($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X378);
    // 0x801CC14C: lwc1        $f6, 0x320($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X320);
    // 0x801CC150: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801CC154: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CC158: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801CC15C: swc1        $f10, 0x334($a0)
    MEM_W(0X334, ctx->r4) = ctx->f10.u32l;
    // 0x801CC160: jr          $ra
    // 0x801CC164: swc1        $f8, 0x338($a0)
    MEM_W(0X338, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801CC164: swc1        $f8, 0x338($a0)
    MEM_W(0X338, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801DB2B8_64A108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB2B8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DB2BC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DB2C0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DB2C4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DB2C8: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DB2CC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DB2D0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DB2D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB2D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DB2DC: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DB2E0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DB2E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DB2E8: lui         $at, 0x403B
    ctx->r1 = S32(0X403B << 16);
    // 0x801DB2EC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB2F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DB2F4: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DB2F8: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DB2FC: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DB300: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DB304: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DB308: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DB30C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DB310: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DB314: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DB318: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DB31C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DB320: nop

    // 0x801DB324: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DB328: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DB32C: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DB330: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DB334: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DB338: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DB33C: nop

    // 0x801DB340: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DB344: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DB348: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DB34C: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DB350: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DB354: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DB358: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DB35C: jal         0x80033898
    // 0x801DB360: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DB360: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DB364: addiu       $t8, $zero, 0x77
    ctx->r24 = ADD32(0, 0X77);
    // 0x801DB368: addiu       $t9, $zero, 0x3E
    ctx->r25 = ADD32(0, 0X3E);
    // 0x801DB36C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x801DB370: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DB374: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DB378: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DB37C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DB380: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DB384: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB388: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB38C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB390: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DB394: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB398: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB39C: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DB3A0: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DB3A4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DB3A8: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB3AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB3B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB3B4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DB3B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB3BC: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DB3C0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DB3C4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DB3C8: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB3CC: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DB3D0: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DB3D4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB3D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DB3DC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DB3E0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DB3E4: jal         0x801CDA88
    // 0x801DB3E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DB3E8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DB3EC: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DB3F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DB3F4: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB3F8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB3FC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB404: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB408: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB40C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB414: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DB418: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB41C: lui         $a2, 0x42A5
    ctx->r6 = S32(0X42A5 << 16);
    // 0x801DB420: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DB424: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DB428: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DB42C: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB430: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB434: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB438: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB43C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB440: jal         0x801DF9EC
    // 0x801DB444: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DB444: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DB448: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB44C: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB450: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DB454: bnel        $t6, $zero, L_801DB4AC
    if (ctx->r14 != 0) {
        // 0x801DB458: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DB4AC;
    }
    goto skip_0;
    // 0x801DB458: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DB45C: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DB460: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DB464: bne         $t7, $at, L_801DB484
    if (ctx->r15 != ctx->r1) {
        // 0x801DB468: nop
    
            goto L_801DB484;
    }
    // 0x801DB468: nop

    // 0x801DB46C: jal         0x80038B98
    // 0x801DB470: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DB470: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DB474: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB478: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DB47C: b           L_801DB498
    // 0x801DB480: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DB498;
    // 0x801DB480: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DB484:
    // 0x801DB484: jal         0x80038B98
    // 0x801DB488: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DB488: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DB48C: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB490: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DB494: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DB498:
    // 0x801DB498: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB49C: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB4A0: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DB4A4: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DB4A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DB4AC:
    // 0x801DB4AC: jal         0x801E8850
    // 0x801DB4B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DB4B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x801DB4B4: jal         0x801D8BF0
    // 0x801DB4B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801DB4B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801DB4BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DB4C0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DB4C4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DB4C8: jr          $ra
    // 0x801DB4CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DB4CC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D2124_640F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2124: lbu         $v0, 0x315($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X315);
    // 0x801D2128: slti        $t6, $v0, 0x6
    ctx->r14 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x801D212C: xori        $t6, $t6, 0x1
    ctx->r14 = ctx->r14 ^ 0X1;
    // 0x801D2130: jr          $ra
    // 0x801D2134: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    TRACE_RETURN()
    return;
    // 0x801D2134: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
;}
RECOMP_FUNC void func_801D5144_643F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5144: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5148: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D514C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D5150: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5154: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D5158: lwc1        $f16, 0x5C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x801D515C: lh          $v1, 0xB8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XB8);
    // 0x801D5160: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5164: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D5168: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D516C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D5170: sh          $t7, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r15;
    // 0x801D5174: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D5178: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D517C: bne         $t7, $zero, L_801D51A0
    if (ctx->r15 != 0) {
        // 0x801D5180: swc1        $f18, 0x5C($a0)
        MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
            goto L_801D51A0;
    }
    // 0x801D5180: swc1        $f18, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f18.u32l;
    // 0x801D5184: lw          $v1, 0xA4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA4);
    // 0x801D5188: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D518C: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D5190: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x801D5194: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x801D5198: sw          $v1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r3;
    // 0x801D519C: sw          $t9, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r25;
L_801D51A0:
    // 0x801D51A0: jr          $ra
    // 0x801D51A4: nop

    TRACE_RETURN()
    return;
    // 0x801D51A4: nop

;}
RECOMP_FUNC void func_801CD7C0_63C610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD7C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CD7C4: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x801CD7C8: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801CD7CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CD7D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CD7D4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801CD7D8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801CD7DC: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x801CD7E0: sb          $a3, 0x85($v0)
    MEM_B(0X85, ctx->r2) = ctx->r7;
    // 0x801CD7E4: sb          $zero, 0x84($v0)
    MEM_B(0X84, ctx->r2) = 0;
    // 0x801CD7E8: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x801CD7EC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x801CD7F0: sb          $t0, 0x87($v0)
    MEM_B(0X87, ctx->r2) = ctx->r8;
    // 0x801CD7F4: lbu         $v1, 0x33($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X33);
    // 0x801CD7F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x801CD7FC: bnel        $v1, $zero, L_801CD80C
    if (ctx->r3 != 0) {
        // 0x801CD800: sb          $v1, 0x86($v0)
        MEM_B(0X86, ctx->r2) = ctx->r3;
            goto L_801CD80C;
    }
    goto skip_0;
    // 0x801CD800: sb          $v1, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r3;
    skip_0:
    // 0x801CD804: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
    // 0x801CD808: sb          $v1, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r3;
L_801CD80C:
    // 0x801CD80C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x801CD810: lbu         $t4, 0x3F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X3F);
    // 0x801CD814: lhu         $a3, 0x3A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X3A);
    // 0x801CD818: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x801CD81C: jal         0x801CD8E4
    // 0x801CD820: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_801CD8E4_63C734(rdram, ctx);
        goto after_0;
    // 0x801CD820: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x801CD824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CD82C: jr          $ra
    // 0x801CD830: nop

    TRACE_RETURN()
    return;
    // 0x801CD830: nop

;}
RECOMP_FUNC void func_801CFBE8_63EA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFBE8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CFBEC: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CFBF0: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CFBF4: ldc1        $f8, -0x1138($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1138);
    // 0x801CFBF8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CFBFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CFC00: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CFC04: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CFC08: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CFC0C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CFC10: nop

    // 0x801CFC14: slti        $at, $v0, 0x6D60
    ctx->r1 = SIGNED(ctx->r2) < 0X6D60 ? 1 : 0;
    // 0x801CFC18: bne         $at, $zero, L_801CFC24
    if (ctx->r1 != 0) {
        // 0x801CFC1C: nop
    
            goto L_801CFC24;
    }
    // 0x801CFC1C: nop

    // 0x801CFC20: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
L_801CFC24:
    // 0x801CFC24: jr          $ra
    // 0x801CFC28: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801CFC28: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E027C_64F0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E027C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801E0280: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801E0284: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E0288: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E028C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0290: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801E0294: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801E0298: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E029C: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E02A0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E02A4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E02A8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E02AC: ldc1        $f16, -0xC60($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XC60);
    // 0x801E02B0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801E02B4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801E02B8: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x801E02BC: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x801E02C0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x801E02C4: lw          $v1, 0xEC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XEC);
    // 0x801E02C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E02CC: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E02D0: lw          $a0, 0xD4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XD4);
    // 0x801E02D4: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E02D8: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E02DC: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x801E02E0: addiu       $t1, $zero, 0x4AB
    ctx->r9 = ADD32(0, 0X4AB);
    // 0x801E02E4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x801E02E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801E02EC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E02F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E02F4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E02F8: addiu       $a1, $a1, -0x170
    ctx->r5 = ADD32(ctx->r5, -0X170);
    // 0x801E02FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E0300: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x801E0304: swc1        $f2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f2.u32l;
    // 0x801E0308: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x801E030C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801E0310: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801E0314: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801E0318: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x801E031C: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x801E0320: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E0324: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E0328: jal         0x800358E8
    // 0x801E032C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E032C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801E0330: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x801E0334: beq         $v0, $zero, L_801E047C
    if (ctx->r2 == 0) {
        // 0x801E0338: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E047C;
    }
    // 0x801E0338: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E033C: sw          $v1, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r3;
    // 0x801E0340: jal         0x801CDF74
    // 0x801E0344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801CDF74_63CDC4(rdram, ctx);
        goto after_1;
    // 0x801E0344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801E0348: bne         $v0, $zero, L_801E0360
    if (ctx->r2 != 0) {
        // 0x801E034C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E0360;
    }
    // 0x801E034C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E0350: jal         0x80034EF8
    // 0x801E0354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_2;
    // 0x801E0354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801E0358: b           L_801E0480
    // 0x801E035C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E0480;
    // 0x801E035C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E0360:
    // 0x801E0360: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x801E0364: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x801E0368: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E036C: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x801E0370: lhu         $t2, 0x76($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X76);
    // 0x801E0374: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x801E0378: or          $t4, $v1, $at
    ctx->r12 = ctx->r3 | ctx->r1;
    // 0x801E037C: sh          $t2, 0x70($s0)
    MEM_H(0X70, ctx->r16) = ctx->r10;
    // 0x801E0380: lbu         $t3, 0x67($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X67);
    // 0x801E0384: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E0388: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x801E038C: sb          $t3, 0x6A($s0)
    MEM_B(0X6A, ctx->r16) = ctx->r11;
    // 0x801E0390: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E0394: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E0398: lui         $t7, 0x801F
    ctx->r15 = S32(0X801F << 16);
    // 0x801E039C: swc1        $f4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f4.u32l;
    // 0x801E03A0: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801E03A4: addiu       $t7, $t7, -0x16C0
    ctx->r15 = ADD32(ctx->r15, -0X16C0);
    // 0x801E03A8: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x801E03AC: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x801E03B0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E03B4: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x801E03B8: lui         $t8, 0xFB00
    ctx->r24 = S32(0XFB00 << 16);
    // 0x801E03BC: swc1        $f8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f8.u32l;
    // 0x801E03C0: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E03C4: addiu       $v1, $t0, 0x8
    ctx->r3 = ADD32(ctx->r8, 0X8);
    // 0x801E03C8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801E03CC: swc1        $f10, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f10.u32l;
    // 0x801E03D0: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E03D4: addiu       $a1, $a1, -0x2110
    ctx->r5 = ADD32(ctx->r5, -0X2110);
    // 0x801E03D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E03DC: swc1        $f16, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f16.u32l;
    // 0x801E03E0: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E03E4: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801E03E8: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x801E03EC: sw          $t5, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r13;
    // 0x801E03F0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x801E03F4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x801E03F8: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x801E03FC: lbu         $t4, 0x77($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X77);
    // 0x801E0400: lbu         $t1, 0x73($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X73);
    // 0x801E0404: lbu         $t8, 0x7B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7B);
    // 0x801E0408: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x801E040C: lbu         $t4, 0x7F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X7F);
    // 0x801E0410: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x801E0414: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x801E0418: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x801E041C: or          $t1, $t6, $t9
    ctx->r9 = ctx->r14 | ctx->r25;
    // 0x801E0420: or          $t2, $t1, $t4
    ctx->r10 = ctx->r9 | ctx->r12;
    // 0x801E0424: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x801E0428: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x801E042C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x801E0430: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x801E0434: lbu         $t7, 0x6F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X6F);
    // 0x801E0438: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801E043C: addiu       $t8, $zero, 0x4AB
    ctx->r24 = ADD32(0, 0X4AB);
    // 0x801E0440: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E0444: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E0448: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E044C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801E0450: jal         0x801CD7C0
    // 0x801E0454: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_801CD7C0_63C610(rdram, ctx);
        goto after_3;
    // 0x801E0454: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x801E0458: lbu         $t9, 0x67($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X67);
    // 0x801E045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0460: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x801E0464: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x801E0468: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E046C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x801E0470: lw          $t9, -0x20D0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X20D0);
    // 0x801E0474: jalr        $t9
    // 0x801E0478: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x801E0478: nop

    after_4:
L_801E047C:
    // 0x801E047C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E0480:
    // 0x801E0480: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801E0484: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801E0488: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x801E048C: jr          $ra
    // 0x801E0490: nop

    TRACE_RETURN()
    return;
    // 0x801E0490: nop

;}
RECOMP_FUNC void func_801E29FC_65184C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E29FC: lhu         $v0, 0x62($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X62);
    // 0x801E2A00: lhu         $v1, 0x60($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X60);
    // 0x801E2A04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801E2A08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x801E2A0C: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x801E2A10: addiu       $t7, $t6, -0x420
    ctx->r15 = ADD32(ctx->r14, -0X420);
    // 0x801E2A14: sltiu       $at, $t7, 0x7C1
    ctx->r1 = ctx->r15 < 0X7C1 ? 1 : 0;
    // 0x801E2A18: beq         $at, $zero, L_801E2A28
    if (ctx->r1 == 0) {
        // 0x801E2A1C: sh          $t6, 0x62($a0)
        MEM_H(0X62, ctx->r4) = ctx->r14;
            goto L_801E2A28;
    }
    // 0x801E2A1C: sh          $t6, 0x62($a0)
    MEM_H(0X62, ctx->r4) = ctx->r14;
    // 0x801E2A20: jr          $ra
    // 0x801E2A24: sb          $t8, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801E2A24: sb          $t8, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r24;
L_801E2A28:
    // 0x801E2A28: lb          $t9, 0x5F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X5F);
    // 0x801E2A2C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x801E2A30: sh          $t0, 0x60($a0)
    MEM_H(0X60, ctx->r4) = ctx->r8;
    // 0x801E2A34: jr          $ra
    // 0x801E2A38: nop

    TRACE_RETURN()
    return;
    // 0x801E2A38: nop

;}
RECOMP_FUNC void func_801CE8CC_63D71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE8CC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CE8D0: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CE8D4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE8D8: ldc1        $f8, -0x11B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X11B8);
    // 0x801CE8DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CE8E0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CE8E4: ori         $t1, $zero, 0x8CA0
    ctx->r9 = 0 | 0X8CA0;
    // 0x801CE8E8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CE8EC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CE8F0: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CE8F4: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CE8F8: nop

    // 0x801CE8FC: slti        $at, $v0, 0x2328
    ctx->r1 = SIGNED(ctx->r2) < 0X2328 ? 1 : 0;
    // 0x801CE900: bne         $at, $zero, L_801CE91C
    if (ctx->r1 != 0) {
        // 0x801CE904: nop
    
            goto L_801CE91C;
    }
    // 0x801CE904: nop

    // 0x801CE908: lb          $t9, 0x9F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X9F);
    // 0x801CE90C: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801CE910: sw          $t1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r9;
    // 0x801CE914: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801CE918: sb          $t0, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r8;
L_801CE91C:
    // 0x801CE91C: jr          $ra
    // 0x801CE920: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801CE920: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801E28D4_651724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E28D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E28D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E28DC: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E28E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E28E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E28E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801E28EC: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x801E28F0: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E28F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E28F8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x801E28FC: lw          $t9, -0x1E10($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1E10);
    // 0x801E2900: jalr        $t9
    // 0x801E2904: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E2904: nop

    after_0:
    // 0x801E2908: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801E290C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E2910: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E2914: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x801E2918: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x801E291C: beql        $t0, $zero, L_801E29AC
    if (ctx->r8 == 0) {
        // 0x801E2920: lhu         $v0, 0x64($a0)
        ctx->r2 = MEM_HU(ctx->r4, 0X64);
            goto L_801E29AC;
    }
    goto skip_0;
    // 0x801E2920: lhu         $v0, 0x64($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X64);
    skip_0:
    // 0x801E2924: lbu         $a3, 0x317($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X317);
    // 0x801E2928: lbu         $a2, 0x5D($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X5D);
    // 0x801E292C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x801E2930: beq         $at, $zero, L_801E29A8
    if (ctx->r1 == 0) {
        // 0x801E2934: addiu       $t1, $a2, 0x1
        ctx->r9 = ADD32(ctx->r6, 0X1);
            goto L_801E29A8;
    }
    // 0x801E2934: addiu       $t1, $a2, 0x1
    ctx->r9 = ADD32(ctx->r6, 0X1);
    // 0x801E2938: sb          $t1, 0x5D($a0)
    MEM_B(0X5D, ctx->r4) = ctx->r9;
    // 0x801E293C: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x801E2940: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x801E2944: mtc1        $a3, $f4
    ctx->f4.u32l = ctx->r7;
    // 0x801E2948: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E294C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x801E2950: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801E2954: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E2958: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801E295C: beql        $v0, $zero, L_801E2978
    if (ctx->r2 == 0) {
        // 0x801E2960: sw          $a1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r5;
            goto L_801E2978;
    }
    goto skip_1;
    // 0x801E2960: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    skip_1:
    // 0x801E2964: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801E2968:
    // 0x801E2968: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801E296C: bnel        $v0, $zero, L_801E2968
    if (ctx->r2 != 0) {
        // 0x801E2970: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E2968;
    }
    goto skip_2;
    // 0x801E2970: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    skip_2:
    // 0x801E2974: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
L_801E2978:
    // 0x801E2978: bgez        $a3, L_801E2990
    if (SIGNED(ctx->r7) >= 0) {
        // 0x801E297C: sw          $zero, 0x0($a1)
        MEM_W(0X0, ctx->r5) = 0;
            goto L_801E2990;
    }
    // 0x801E297C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x801E2980: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E2984: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E2988: nop

    // 0x801E298C: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801E2990:
    // 0x801E2990: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E2994: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E2998: nop

    // 0x801E299C: mul.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x801E29A0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E29A4: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
L_801E29A8:
    // 0x801E29A8: lhu         $v0, 0x64($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X64);
L_801E29AC:
    // 0x801E29AC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E29B0: andi        $t2, $v0, 0x7FF
    ctx->r10 = ctx->r2 & 0X7FF;
    // 0x801E29B4: lhu         $v0, 0x66($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X66);
    // 0x801E29B8: sh          $t2, 0x64($a0)
    MEM_H(0X64, ctx->r4) = ctx->r10;
    // 0x801E29BC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E29C0: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x801E29C4: lhu         $v0, 0x68($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X68);
    // 0x801E29C8: sh          $t3, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r11;
    // 0x801E29CC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x801E29D0: andi        $t4, $v0, 0x7FF
    ctx->r12 = ctx->r2 & 0X7FF;
    // 0x801E29D4: lhu         $v0, 0x6A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6A);
    // 0x801E29D8: sh          $t4, 0x68($a0)
    MEM_H(0X68, ctx->r4) = ctx->r12;
    // 0x801E29DC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x801E29E0: andi        $t5, $v0, 0x3FF
    ctx->r13 = ctx->r2 & 0X3FF;
    // 0x801E29E4: jal         0x801E2A84
    // 0x801E29E8: sh          $t5, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r13;
    func_801E2A84_6518D4(rdram, ctx);
        goto after_1;
    // 0x801E29E8: sh          $t5, 0x6A($a0)
    MEM_H(0X6A, ctx->r4) = ctx->r13;
    after_1:
    // 0x801E29EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E29F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E29F4: jr          $ra
    // 0x801E29F8: nop

    TRACE_RETURN()
    return;
    // 0x801E29F8: nop

;}
RECOMP_FUNC void func_801D17C0_640610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D17C0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D17C4: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x801D17C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801D17CC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x801D17D0: beq         $t7, $zero, L_801D17E0
    if (ctx->r15 == 0) {
        // 0x801D17D4: nop
    
            goto L_801D17E0;
    }
    // 0x801D17D4: nop

    // 0x801D17D8: jr          $ra
    // 0x801D17DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801D17DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D17E0:
    // 0x801D17E0: jr          $ra
    // 0x801D17E4: nop

    TRACE_RETURN()
    return;
    // 0x801D17E4: nop

;}
RECOMP_FUNC void func_801DF998_64E7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF998: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x801DF99C: lwc1        $f10, 0x88($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801DF9A0: lwc1        $f4, 0x5C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X5C);
    // 0x801DF9A4: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x801DF9A8: lwc1        $f6, 0x60($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X60);
    // 0x801DF9AC: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801DF9B0: lwc1        $f8, 0x64($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801DF9B4: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801DF9B8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801DF9BC: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x801DF9C0: sh          $t6, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r14;
    // 0x801DF9C4: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x801DF9C8: sh          $t7, 0x74($a0)
    MEM_H(0X74, ctx->r4) = ctx->r15;
    // 0x801DF9CC: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x801DF9D0: sh          $t8, 0x76($a0)
    MEM_H(0X76, ctx->r4) = ctx->r24;
    // 0x801DF9D4: swc1        $f10, 0x88($a1)
    MEM_W(0X88, ctx->r5) = ctx->f10.u32l;
    // 0x801DF9D8: lwc1        $f16, 0x8C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801DF9DC: swc1        $f16, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->f16.u32l;
    // 0x801DF9E0: lwc1        $f18, 0x90($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801DF9E4: jr          $ra
    // 0x801DF9E8: swc1        $f18, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801DF9E8: swc1        $f18, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_801D7DB0_646C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7DB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D7DB4: lw          $v0, 0xBC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XBC);
    // 0x801D7DB8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D7DBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D7DC0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D7DC4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D7DC8: lh          $v1, 0xAA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XAA);
    // 0x801D7DCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D7DD0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801D7DD4: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D7DD8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D7DDC: sh          $t7, 0xAA($a0)
    MEM_H(0XAA, ctx->r4) = ctx->r15;
    // 0x801D7DE0: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D7DE4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D7DE8: bne         $t7, $zero, L_801D7E04
    if (ctx->r15 != 0) {
        // 0x801D7DEC: swc1        $f18, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
            goto L_801D7E04;
    }
    // 0x801D7DEC: swc1        $f18, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f18.u32l;
    // 0x801D7DF0: lw          $t9, 0xC0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC0);
    // 0x801D7DF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D7DF8: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D7DFC: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x801D7E00: sw          $t0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r8;
L_801D7E04:
    // 0x801D7E04: jr          $ra
    // 0x801D7E08: nop

    TRACE_RETURN()
    return;
    // 0x801D7E08: nop

;}
