#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D96E4_5955F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D96E4: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801D96E8: addiu       $t1, $t1, -0x39D4
    ctx->r9 = ADD32(ctx->r9, -0X39D4);
    // 0x801D96EC: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x801D96F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D96F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D96F8: lhu         $a2, 0x80($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X80);
    // 0x801D96FC: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801D9700: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801D9704: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x801D9708: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D970C: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x801D9710: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x801D9714: slti        $at, $t9, 0x201
    ctx->r1 = SIGNED(ctx->r25) < 0X201 ? 1 : 0;
    // 0x801D9718: bne         $at, $zero, L_801D9728
    if (ctx->r1 != 0) {
        // 0x801D971C: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_801D9728;
    }
    // 0x801D971C: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x801D9720: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x801D9724: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
L_801D9728:
    // 0x801D9728: slti        $at, $t0, -0x200
    ctx->r1 = SIGNED(ctx->r8) < -0X200 ? 1 : 0;
    // 0x801D972C: beql        $at, $zero, L_801D973C
    if (ctx->r1 == 0) {
        // 0x801D9730: lhu         $t2, 0x82($v1)
        ctx->r10 = MEM_HU(ctx->r3, 0X82);
            goto L_801D973C;
    }
    goto skip_0;
    // 0x801D9730: lhu         $t2, 0x82($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X82);
    skip_0:
    // 0x801D9734: ori         $a3, $zero, 0xFE00
    ctx->r7 = 0 | 0XFE00;
    // 0x801D9738: lhu         $t2, 0x82($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X82);
L_801D973C:
    // 0x801D973C: addu        $t5, $a2, $a3
    ctx->r13 = ADD32(ctx->r6, ctx->r7);
    // 0x801D9740: subu        $v0, $a1, $t2
    ctx->r2 = SUB32(ctx->r5, ctx->r10);
    // 0x801D9744: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x801D9748: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x801D974C: sra         $t4, $t0, 16
    ctx->r12 = S32(SIGNED(ctx->r8) >> 16);
    // 0x801D9750: slti        $at, $t4, 0x101
    ctx->r1 = SIGNED(ctx->r12) < 0X101 ? 1 : 0;
    // 0x801D9754: bne         $at, $zero, L_801D9764
    if (ctx->r1 != 0) {
        // 0x801D9758: or          $t0, $t4, $zero
        ctx->r8 = ctx->r12 | 0;
            goto L_801D9764;
    }
    // 0x801D9758: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
    // 0x801D975C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x801D9760: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
L_801D9764:
    // 0x801D9764: slti        $at, $t0, -0x100
    ctx->r1 = SIGNED(ctx->r8) < -0X100 ? 1 : 0;
    // 0x801D9768: beql        $at, $zero, L_801D9778
    if (ctx->r1 == 0) {
        // 0x801D976C: sh          $t5, 0x80($v1)
        MEM_H(0X80, ctx->r3) = ctx->r13;
            goto L_801D9778;
    }
    goto skip_1;
    // 0x801D976C: sh          $t5, 0x80($v1)
    MEM_H(0X80, ctx->r3) = ctx->r13;
    skip_1:
    // 0x801D9770: ori         $a0, $zero, 0xFF00
    ctx->r4 = 0 | 0XFF00;
    // 0x801D9774: sh          $t5, 0x80($v1)
    MEM_H(0X80, ctx->r3) = ctx->r13;
L_801D9778:
    // 0x801D9778: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x801D977C: lhu         $t6, 0x82($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X82);
    // 0x801D9780: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x801D9784: jr          $ra
    // 0x801D9788: sh          $t7, 0x82($v1)
    MEM_H(0X82, ctx->r3) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D9788: sh          $t7, 0x82($v1)
    MEM_H(0X82, ctx->r3) = ctx->r15;
;}
RECOMP_FUNC void func_801E8C44_5A4B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8C44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8C48: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x801E8C4C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E8C50: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8C54: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x801E8C58: beq         $a2, $zero, L_801E8C90
    if (ctx->r6 == 0) {
        // 0x801E8C5C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_801E8C90;
    }
    // 0x801E8C5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E8C60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E8C64: lhu         $t7, 0x20($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X20);
L_801E8C68:
    // 0x801E8C68: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801E8C6C: beq         $at, $zero, L_801E8C90
    if (ctx->r1 == 0) {
        // 0x801E8C70: nop
    
            goto L_801E8C90;
    }
    // 0x801E8C70: nop

    // 0x801E8C74: lbu         $t8, 0x64($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X64);
    // 0x801E8C78: bnel        $a1, $t8, L_801E8C88
    if (ctx->r5 != ctx->r24) {
        // 0x801E8C7C: lw          $a2, 0x0($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X0);
            goto L_801E8C88;
    }
    goto skip_0;
    // 0x801E8C7C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    skip_0:
    // 0x801E8C80: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801E8C84: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
L_801E8C88:
    // 0x801E8C88: bnel        $a2, $zero, L_801E8C68
    if (ctx->r6 != 0) {
        // 0x801E8C8C: lhu         $t7, 0x20($a2)
        ctx->r15 = MEM_HU(ctx->r6, 0X20);
            goto L_801E8C68;
    }
    goto skip_1;
    // 0x801E8C8C: lhu         $t7, 0x20($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X20);
    skip_1:
L_801E8C90:
    // 0x801E8C90: jr          $ra
    // 0x801E8C94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801E8C94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801CC424_588334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC424: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC428: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x801CC42C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC430: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    // 0x801CC434: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC438: sh          $zero, 0x2($t7)
    MEM_H(0X2, ctx->r15) = 0;
    // 0x801CC43C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC440: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x801CC444: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC448: sh          $zero, 0x34($t9)
    MEM_H(0X34, ctx->r25) = 0;
    // 0x801CC44C: jr          $ra
    // 0x801CC450: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801CC450: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801F8670_5B4580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8670: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F8674: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801F8678: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801F867C: lui         $t7, 0xD
    ctx->r15 = S32(0XD << 16);
    // 0x801F8680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F8684: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801F8688: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F868C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801F8690: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801F8694: lbu         $t7, -0x774($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X774);
    // 0x801F8698: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F869C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F86A0: bne         $t7, $at, L_801F86D8
    if (ctx->r15 != ctx->r1) {
        // 0x801F86A4: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_801F86D8;
    }
    // 0x801F86A4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801F86A8: lw          $a0, -0x39FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39FC);
    // 0x801F86AC: beq         $a0, $zero, L_801F86D8
    if (ctx->r4 == 0) {
        // 0x801F86B0: nop
    
            goto L_801F86D8;
    }
    // 0x801F86B0: nop

    // 0x801F86B4: jal         0x801D23C0
    // 0x801F86B8: nop

    func_801D23C0_58E2D0(rdram, ctx);
        goto after_0;
    // 0x801F86B8: nop

    after_0:
    // 0x801F86BC: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801F86C0: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801F86C4: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801F86C8: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x801F86CC: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x801F86D0: b           L_801F86DC
    // 0x801F86D4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_801F86DC;
    // 0x801F86D4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_801F86D8:
    // 0x801F86D8: lw          $v1, 0x7ADC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7ADC);
L_801F86DC:
    // 0x801F86DC: beql        $v1, $zero, L_801F8784
    if (ctx->r3 == 0) {
        // 0x801F86E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F8784;
    }
    goto skip_0;
    // 0x801F86E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F86E4: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801F86E8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801F86EC: lhu         $t9, 0x46($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X46);
    // 0x801F86F0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x801F86F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F86F8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x801F86FC: lhu         $t0, 0x4A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4A);
    // 0x801F8700: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F8704: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x801F8708: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801F870C: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801F8710: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801F8714: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x801F8718: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x801F871C: lwc1        $f6, 0x14($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14);
    // 0x801F8720: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801F8724: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801F8728: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801F872C: bgez        $t9, L_801F8740
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801F8730: swc1        $f8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
            goto L_801F8740;
    }
    // 0x801F8730: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x801F8734: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F8738: nop

    // 0x801F873C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_801F8740:
    // 0x801F8740: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801F8744: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801F8748: bgez        $t0, L_801F8760
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801F874C: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801F8760;
    }
    // 0x801F874C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801F8750: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801F8754: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F8758: nop

    // 0x801F875C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_801F8760:
    // 0x801F8760: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x801F8764: jal         0x801FB018
    // 0x801F8768: nop

    func_801FB018_5B6F28(rdram, ctx);
        goto after_1;
    // 0x801F8768: nop

    after_1:
    // 0x801F876C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F8770: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x801F8774: swc1        $f6, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f6.u32l;
    // 0x801F8778: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801F877C: swc1        $f8, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f8.u32l;
    // 0x801F8780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F8784:
    // 0x801F8784: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801F8788: jr          $ra
    // 0x801F878C: nop

    TRACE_RETURN()
    return;
    // 0x801F878C: nop

;}
RECOMP_FUNC void func_801DE59C_59A4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE5A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE5A4: jal         0x801E43B0
    // 0x801DE5A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E43B0_5A02C0(rdram, ctx);
        goto after_0;
    // 0x801DE5A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE5B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE5B4: jr          $ra
    // 0x801DE5B8: nop

    TRACE_RETURN()
    return;
    // 0x801DE5B8: nop

;}
RECOMP_FUNC void func_801EF6B8_5AB5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF6B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EF6BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EF6C0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x801EF6C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EF6C8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801EF6CC: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x801EF6D0: addiu       $t7, $t6, 0x6
    ctx->r15 = ADD32(ctx->r14, 0X6);
    // 0x801EF6D4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801EF6D8: jal         0x801E8890
    // 0x801EF6DC: addiu       $a3, $t6, 0x4
    ctx->r7 = ADD32(ctx->r14, 0X4);
    func_801E8890_5A47A0(rdram, ctx);
        goto after_0;
    // 0x801EF6DC: addiu       $a3, $t6, 0x4
    ctx->r7 = ADD32(ctx->r14, 0X4);
    after_0:
    // 0x801EF6E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF6E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EF6E8: jr          $ra
    // 0x801EF6EC: nop

    TRACE_RETURN()
    return;
    // 0x801EF6EC: nop

;}
RECOMP_FUNC void func_801D8634_594544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8634: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801D8638: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D863C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D8640: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x801D8644: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x801D8648: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x801D864C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D8650: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D8654: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D8658: lw          $t7, 0x2C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X2C);
    // 0x801D865C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D8660: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801D8664: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x801D8668: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D866C: lwc1        $f6, -0x2E34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D8670: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D8674: sw          $t8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r24;
    // 0x801D8678: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x801D867C: sh          $a1, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r5;
    // 0x801D8680: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x801D8684: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x801D8688: jal         0x80003CC8
    // 0x801D868C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_80003CC8_48C8(rdram, ctx);
        goto after_0;
    // 0x801D868C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801D8690: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8694: lwc1        $f18, -0x2E34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D8698: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D869C: ldc1        $f10, -0x5310($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X5310);
    // 0x801D86A0: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x801D86A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D86A8: lhu         $a1, 0x7E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X7E);
    // 0x801D86AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D86B0: cvt.d.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.d = CVT_D_S(ctx->f16.fl);
    // 0x801D86B4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801D86B8: nop

    // 0x801D86BC: bc1f        L_801D86C8
    if (!c1cs) {
        // 0x801D86C0: nop
    
            goto L_801D86C8;
    }
    // 0x801D86C0: nop

    // 0x801D86C4: lwc1        $f16, -0x5308($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5308);
L_801D86C8:
    // 0x801D86C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D86CC: lwc1        $f0, -0x2E3C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D86D0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D86D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801D86D8: nop

    // 0x801D86DC: bc1fl       L_801D86F0
    if (!c1cs) {
        // 0x801D86E0: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_801D86F0;
    }
    goto skip_0;
    // 0x801D86E0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x801D86E4: b           L_801D86F0
    // 0x801D86E8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_801D86F0;
    // 0x801D86E8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x801D86EC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_801D86F0:
    // 0x801D86F0: lwc1        $f12, -0x2E30($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D86F4: sub.s       $f2, $f18, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x801D86F8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D86FC: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D8700: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x801D8704: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801D8708: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D870C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D8710: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D8714: c.eq.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl == ctx->f8.fl;
    // 0x801D8718: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x801D871C: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D8720: bc1tl       L_801D8828
    if (c1cs) {
        // 0x801D8724: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801D8828;
    }
    goto skip_1;
    // 0x801D8724: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x801D8728: sub.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x801D872C: addiu       $t9, $a1, -0x4000
    ctx->r25 = ADD32(ctx->r5, -0X4000);
    // 0x801D8730: mul.s       $f8, $f18, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D8734: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x801D8738: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801D873C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8740: bc1f        L_801D87B4
    if (!c1cs) {
        // 0x801D8744: nop
    
            goto L_801D87B4;
    }
    // 0x801D8744: nop

    // 0x801D8748: lwc1        $f2, -0x2E4C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E4C);
    // 0x801D874C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D8750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D8754: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x801D8758: nop

    // 0x801D875C: bc1f        L_801D876C
    if (!c1cs) {
        // 0x801D8760: nop
    
            goto L_801D876C;
    }
    // 0x801D8760: nop

    // 0x801D8764: b           L_801D876C
    // 0x801D8768: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
        goto L_801D876C;
    // 0x801D8768: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
L_801D876C:
    // 0x801D876C: bne         $v0, $t0, L_801D87B4
    if (ctx->r2 != ctx->r8) {
        // 0x801D8770: nop
    
            goto L_801D87B4;
    }
    // 0x801D8770: nop

    // 0x801D8774: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D8778: nop

    // 0x801D877C: bc1fl       L_801D87B4
    if (!c1cs) {
        // 0x801D8780: sub.s       $f20, $f16, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
            goto L_801D87B4;
    }
    goto skip_2;
    // 0x801D8780: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
    skip_2:
    // 0x801D8784: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D8788: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D878C: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x801D8790: nop

    // 0x801D8794: bc1f        L_801D87A8
    if (!c1cs) {
        // 0x801D8798: nop
    
            goto L_801D87A8;
    }
    // 0x801D8798: nop

    // 0x801D879C: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x801D87A0: b           L_801D87B4
    // 0x801D87A4: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
        goto L_801D87B4;
    // 0x801D87A4: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
L_801D87A8:
    // 0x801D87A8: b           L_801D87B4
    // 0x801D87AC: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
        goto L_801D87B4;
    // 0x801D87AC: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x801D87B0: sub.s       $f20, $f16, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f0.fl;
L_801D87B4:
    // 0x801D87B4: mul.s       $f2, $f20, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801D87B8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801D87BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D87C0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D87C4: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x801D87C8: sh          $a1, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r5;
    // 0x801D87CC: div.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x801D87D0: sub.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D87D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D87D8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D87DC: mul.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x801D87E0: nop

    // 0x801D87E4: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801D87E8: div.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801D87EC: div.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D87F0: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x801D87F4: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801D87F8: jal         0x80003CC8
    // 0x801D87FC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    func_80003CC8_48C8(rdram, ctx);
        goto after_1;
    // 0x801D87FC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801D8800: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D8804: lhu         $a0, 0x7E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X7E);
    // 0x801D8808: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x801D880C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801D8810: jal         0x80003D28
    // 0x801D8814: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    func_80003D28_4928(rdram, ctx);
        goto after_2;
    // 0x801D8814: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801D8818: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801D881C: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801D8820: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801D8824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_801D8828:
    // 0x801D8828: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D882C: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8830: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8834: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x801D8838: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801D883C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x801D8840: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D8844: bc1f        L_801D8850
    if (!c1cs) {
        // 0x801D8848: nop
    
            goto L_801D8850;
    }
    // 0x801D8848: nop

    // 0x801D884C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_801D8850:
    // 0x801D8850: lwc1        $f0, -0x5304($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5304);
    // 0x801D8854: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D8858: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801D885C: nop

    // 0x801D8860: bc1f        L_801D886C
    if (!c1cs) {
        // 0x801D8864: nop
    
            goto L_801D886C;
    }
    // 0x801D8864: nop

    // 0x801D8868: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
L_801D886C:
    // 0x801D886C: jal         0x8001D5B8
    // 0x801D8870: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    func_8001D5B8_1E1B8(rdram, ctx);
        goto after_3;
    // 0x801D8870: addiu       $a2, $a2, -0x2E50
    ctx->r6 = ADD32(ctx->r6, -0X2E50);
    after_3:
    // 0x801D8874: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D8878: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x801D887C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D8880: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D8884: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D8888: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D888C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801D8890: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D8894: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8898: addiu       $t2, $zero, 0x3F00
    ctx->r10 = ADD32(0, 0X3F00);
    // 0x801D889C: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801D88A0: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x801D88A4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D88A8: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D88AC: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x801D88B0: sh          $t1, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r9;
    // 0x801D88B4: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D88B8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801D88BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D88C0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    // 0x801D88C4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x801D88C8: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x801D88CC: jal         0x801D56D0
    // 0x801D88D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_4;
    // 0x801D88D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x801D88D4: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x801D88D8: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x801D88DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801D88E0: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801D88E4: addiu       $t3, $t3, 0x6710
    ctx->r11 = ADD32(ctx->r11, 0X6710);
    // 0x801D88E8: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x801D88EC: beq         $t3, $t5, L_801D894C
    if (ctx->r11 == ctx->r13) {
        // 0x801D88F0: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_801D894C;
    }
    // 0x801D88F0: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D88F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D88F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D88FC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D8900: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x801D8904: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801D8908: bc1fl       L_801D891C
    if (!c1cs) {
        // 0x801D890C: mov.s       $f14, $f20
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
            goto L_801D891C;
    }
    goto skip_3;
    // 0x801D890C: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    skip_3:
    // 0x801D8910: b           L_801D891C
    // 0x801D8914: neg.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = -ctx->f20.fl;
        goto L_801D891C;
    // 0x801D8914: neg.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = -ctx->f20.fl;
    // 0x801D8918: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
L_801D891C:
    // 0x801D891C: ldc1        $f6, -0x5300($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5300);
    // 0x801D8920: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x801D8924: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801D8928: nop

    // 0x801D892C: bc1tl       L_801D894C
    if (c1cs) {
        // 0x801D8930: sb          $t8, 0xA2($s0)
        MEM_B(0XA2, ctx->r16) = ctx->r24;
            goto L_801D894C;
    }
    goto skip_4;
    // 0x801D8930: sb          $t8, 0xA2($s0)
    MEM_B(0XA2, ctx->r16) = ctx->r24;
    skip_4:
    // 0x801D8934: lhu         $t6, -0x2E2A($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2E2A);
    // 0x801D8938: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801D893C: sh          $t6, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r14;
    // 0x801D8940: lhu         $t7, -0x2E2C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X2E2C);
    // 0x801D8944: sh          $t7, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r15;
    // 0x801D8948: sb          $t8, 0xA2($s0)
    MEM_B(0XA2, ctx->r16) = ctx->r24;
L_801D894C:
    // 0x801D894C: lbu         $t0, -0x2E5E($t9)
    ctx->r8 = MEM_BU(ctx->r25, -0X2E5E);
    // 0x801D8950: sb          $t0, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r8;
    // 0x801D8954: sb          $t0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r8;
    // 0x801D8958: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801D895C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D8960: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x801D8964: jr          $ra
    // 0x801D8968: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801D8968: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801F97D4_5B56E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F97D4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801F97D8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801F97DC: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F97E0: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x801F97E4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x801F97E8: sh          $zero, 0x2E41($at)
    MEM_H(0X2E41, ctx->r1) = 0;
    // 0x801F97EC: sw          $zero, 0x2E45($at)
    MEM_W(0X2E45, ctx->r1) = 0;
    // 0x801F97F0: sw          $zero, 0x2E49($at)
    MEM_W(0X2E49, ctx->r1) = 0;
    // 0x801F97F4: sw          $zero, 0x2E4D($at)
    MEM_W(0X2E4D, ctx->r1) = 0;
    // 0x801F97F8: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x801F97FC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x801F9800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F9804: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
L_801F9808:
    // 0x801F9808: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801F980C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801F9810: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801F9814: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x801F9818: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801F981C: mflo        $t6
    ctx->r14 = lo;
    // 0x801F9820: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801F9824: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x801F9828: sh          $zero, 0x2E50($v1)
    MEM_H(0X2E50, ctx->r3) = 0;
    // 0x801F982C: sw          $zero, 0x2E54($v1)
    MEM_W(0X2E54, ctx->r3) = 0;
    // 0x801F9830: sw          $zero, 0x2E5C($v1)
    MEM_W(0X2E5C, ctx->r3) = 0;
    // 0x801F9834: sw          $zero, 0x2E64($v1)
    MEM_W(0X2E64, ctx->r3) = 0;
    // 0x801F9838: sw          $zero, 0x2E58($v1)
    MEM_W(0X2E58, ctx->r3) = 0;
    // 0x801F983C: sw          $zero, 0x2E60($v1)
    MEM_W(0X2E60, ctx->r3) = 0;
    // 0x801F9840: sw          $zero, 0x2E68($v1)
    MEM_W(0X2E68, ctx->r3) = 0;
    // 0x801F9844: sw          $zero, 0x2E6C($v1)
    MEM_W(0X2E6C, ctx->r3) = 0;
    // 0x801F9848: sw          $zero, 0x2E70($v1)
    MEM_W(0X2E70, ctx->r3) = 0;
    // 0x801F984C: bne         $at, $zero, L_801F9808
    if (ctx->r1 != 0) {
        // 0x801F9850: sw          $zero, 0x2E74($v1)
        MEM_W(0X2E74, ctx->r3) = 0;
            goto L_801F9808;
    }
    // 0x801F9850: sw          $zero, 0x2E74($v1)
    MEM_W(0X2E74, ctx->r3) = 0;
    // 0x801F9854: jr          $ra
    // 0x801F9858: nop

    TRACE_RETURN()
    return;
    // 0x801F9858: nop

;}
RECOMP_FUNC void func_801F4528_5B0438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F452C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4530: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4534: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    // 0x801F4538: jal         0x801F4AA4
    // 0x801F453C: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    func_801F4AA4_5B09B4(rdram, ctx);
        goto after_0;
    // 0x801F453C: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    after_0:
    // 0x801F4540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4548: jr          $ra
    // 0x801F454C: nop

    TRACE_RETURN()
    return;
    // 0x801F454C: nop

;}
RECOMP_FUNC void func_801F07F8_5AC708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F07F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F07FC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x801F0800: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0804: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F0808: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F080C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801F0810: beq         $t6, $zero, L_801F0838
    if (ctx->r14 == 0) {
        // 0x801F0814: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_801F0838;
    }
    // 0x801F0814: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x801F0818: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F081C: beq         $t6, $at, L_801F0874
    if (ctx->r14 == ctx->r1) {
        // 0x801F0820: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_801F0874;
    }
    // 0x801F0820: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801F0824: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F0828: beq         $t6, $at, L_801F08AC
    if (ctx->r14 == ctx->r1) {
        // 0x801F082C: addiu       $a0, $zero, 0x3C0
        ctx->r4 = ADD32(0, 0X3C0);
            goto L_801F08AC;
    }
    // 0x801F082C: addiu       $a0, $zero, 0x3C0
    ctx->r4 = ADD32(0, 0X3C0);
    // 0x801F0830: b           L_801F08E0
    // 0x801F0834: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
        goto L_801F08E0;
    // 0x801F0834: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_801F0838:
    // 0x801F0838: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801F083C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x801F0840: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0844: sll         $t7, $a1, 6
    ctx->r15 = S32(ctx->r5 << 6);
    // 0x801F0848: addiu       $a1, $t7, 0x3C0
    ctx->r5 = ADD32(ctx->r15, 0X3C0);
    // 0x801F084C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801F0850: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801F0854: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F0858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F085C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F0860: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801F0864: jal         0x80033898
    // 0x801F0868: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801F0868: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_0:
    // 0x801F086C: b           L_801F08E0
    // 0x801F0870: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
        goto L_801F08E0;
    // 0x801F0870: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_801F0874:
    // 0x801F0874: sll         $t1, $a0, 6
    ctx->r9 = S32(ctx->r4 << 6);
    // 0x801F0878: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x801F087C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x801F0880: addiu       $a0, $t1, 0x3C0
    ctx->r4 = ADD32(ctx->r9, 0X3C0);
    // 0x801F0884: andi        $t2, $a0, 0xFFFF
    ctx->r10 = ctx->r4 & 0XFFFF;
    // 0x801F0888: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x801F088C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F0890: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F0894: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F0898: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801F089C: jal         0x80033898
    // 0x801F08A0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801F08A0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_1:
    // 0x801F08A4: b           L_801F08E0
    // 0x801F08A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
        goto L_801F08E0;
    // 0x801F08A8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_801F08AC:
    // 0x801F08AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801F08B0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x801F08B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801F08B8: sll         $t5, $a1, 6
    ctx->r13 = S32(ctx->r5 << 6);
    // 0x801F08BC: addiu       $a1, $t5, 0x3C0
    ctx->r5 = ADD32(ctx->r13, 0X3C0);
    // 0x801F08C0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801F08C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F08C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F08CC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F08D0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801F08D4: jal         0x80033898
    // 0x801F08D8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801F08D8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_2:
    // 0x801F08DC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_801F08E0:
    // 0x801F08E0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801F08E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801F08E8: lhu         $a0, 0x14($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X14);
    // 0x801F08EC: lhu         $a1, 0x16($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X16);
    // 0x801F08F0: lhu         $a2, 0x18($t9)
    ctx->r6 = MEM_HU(ctx->r25, 0X18);
    // 0x801F08F4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801F08F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801F08FC: jal         0x80033898
    // 0x801F0900: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801F0900: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_3:
    // 0x801F0904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F0908: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F090C: jr          $ra
    // 0x801F0910: nop

    TRACE_RETURN()
    return;
    // 0x801F0910: nop

;}
RECOMP_FUNC void func_801E305C_59EF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E305C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3064: jal         0x801E3008
    // 0x801E3068: nop

    func_801E3008_59EF18(rdram, ctx);
        goto after_0;
    // 0x801E3068: nop

    after_0:
    // 0x801E306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E3070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E3074: jr          $ra
    // 0x801E3078: nop

    TRACE_RETURN()
    return;
    // 0x801E3078: nop

;}
RECOMP_FUNC void func_801E4260_5A0170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E4264: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E4268: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E426C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E4270: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801E4274: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4278: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801E427C: jal         0x801DD720
    // 0x801E4280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801DD720_599630(rdram, ctx);
        goto after_0;
    // 0x801E4280: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x801E4284: lui         $v0, 0x8002
    ctx->r2 = S32(0X8002 << 16);
    // 0x801E4288: addiu       $v0, $v0, -0x4A54
    ctx->r2 = ADD32(ctx->r2, -0X4A54);
    // 0x801E428C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801E4290: jalr        $v0
    // 0x801E4294: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x801E4294: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801E4298: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E429C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E42A0: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E42A4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E42A8: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E42AC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E42B0: nop

    // 0x801E42B4: bc1f        L_801E42DC
    if (!c1cs) {
        // 0x801E42B8: nop
    
            goto L_801E42DC;
    }
    // 0x801E42B8: nop

    // 0x801E42BC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801E42C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E42C4: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    // 0x801E42C8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801E42CC: jal         0x801DACDC
    // 0x801E42D0: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E42D0: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    after_2:
    // 0x801E42D4: b           L_801E439C
    // 0x801E42D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E439C;
    // 0x801E42D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E42DC:
    // 0x801E42DC: lw          $t7, -0x39FC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X39FC);
    // 0x801E42E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E42E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E42E8: bnel        $t7, $at, L_801E432C
    if (ctx->r15 != ctx->r1) {
        // 0x801E42EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E432C;
    }
    goto skip_0;
    // 0x801E42EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801E42F0: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    // 0x801E42F4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E42F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E42FC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801E4300: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E4304: lw          $t0, -0x3954($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3954);
    // 0x801E4308: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x801E430C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x801E4310: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801E4314: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x801E4318: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x801E431C: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x801E4320: jal         0x801E8078
    // 0x801E4324: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_3;
    // 0x801E4324: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_3:
    // 0x801E4328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E432C:
    // 0x801E432C: jal         0x801E3B9C
    // 0x801E4330: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_4;
    // 0x801E4330: lui         $a1, 0xBF00
    ctx->r5 = S32(0XBF00 << 16);
    after_4:
    // 0x801E4334: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801E4338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E433C: jalr        $t9
    // 0x801E4340: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801E4340: nop

    after_5:
    // 0x801E4344: lwc1        $f2, 0xD0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XD0);
    // 0x801E4348: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E434C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E4350: div.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x801E4354: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E4358: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E435C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4360: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801E4364: lwc1        $f10, 0x28($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X28);
    // 0x801E4368: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801E436C: div.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x801E4370: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801E4374: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x801E4378: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E437C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x801E4380: nop

    // 0x801E4384: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801E4388: bnel        $at, $zero, L_801E439C
    if (ctx->r1 != 0) {
        // 0x801E438C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E439C;
    }
    goto skip_1;
    // 0x801E438C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E4390: jal         0x801E3D04
    // 0x801E4394: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_801E3D04_59FC14(rdram, ctx);
        goto after_6;
    // 0x801E4394: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_6:
    // 0x801E4398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E439C:
    // 0x801E439C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E43A0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E43A4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E43A8: jr          $ra
    // 0x801E43AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E43AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801EF364_5AB274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF364: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EF368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EF36C: beq         $a1, $zero, L_801EF388
    if (ctx->r5 == 0) {
        // 0x801EF370: lw          $a3, 0x18($a0)
        ctx->r7 = MEM_W(ctx->r4, 0X18);
            goto L_801EF388;
    }
    // 0x801EF370: lw          $a3, 0x18($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X18);
    // 0x801EF374: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801EF378: beql        $a1, $v1, L_801EF3AC
    if (ctx->r5 == ctx->r3) {
        // 0x801EF37C: lbu         $v0, 0x67($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X67);
            goto L_801EF3AC;
    }
    goto skip_0;
    // 0x801EF37C: lbu         $v0, 0x67($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X67);
    skip_0:
    // 0x801EF380: b           L_801EF49C
    // 0x801EF384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF384: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF388:
    // 0x801EF388: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EF38C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EF390: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801EF394: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EF398: jal         0x801F1F34
    // 0x801EF39C: nop

    func_801F1F34_5ADE44(rdram, ctx);
        goto after_0;
    // 0x801EF39C: nop

    after_0:
    // 0x801EF3A0: b           L_801EF49C
    // 0x801EF3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF3A8: lbu         $v0, 0x67($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X67);
L_801EF3AC:
    // 0x801EF3AC: beql        $v0, $zero, L_801EF3D4
    if (ctx->r2 == 0) {
        // 0x801EF3B0: lbu         $a1, 0x61($a0)
        ctx->r5 = MEM_BU(ctx->r4, 0X61);
            goto L_801EF3D4;
    }
    goto skip_1;
    // 0x801EF3B0: lbu         $a1, 0x61($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X61);
    skip_1:
    // 0x801EF3B4: beq         $v0, $v1, L_801EF434
    if (ctx->r2 == ctx->r3) {
        // 0x801EF3B8: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_801EF434;
    }
    // 0x801EF3B8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EF3BC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EF3C0: beq         $v0, $at, L_801EF450
    if (ctx->r2 == ctx->r1) {
        // 0x801EF3C4: lui         $a1, 0x40C0
        ctx->r5 = S32(0X40C0 << 16);
            goto L_801EF450;
    }
    // 0x801EF3C4: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    // 0x801EF3C8: b           L_801EF49C
    // 0x801EF3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF3CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF3D0: lbu         $a1, 0x61($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X61);
L_801EF3D4:
    // 0x801EF3D4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801EF3D8: jal         0x801EF4A8
    // 0x801EF3DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801EF4A8_5AB3B8(rdram, ctx);
        goto after_1;
    // 0x801EF3DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x801EF3E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801EF3E4: beq         $v0, $zero, L_801EF410
    if (ctx->r2 == 0) {
        // 0x801EF3E8: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801EF410;
    }
    // 0x801EF3E8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801EF3EC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EF3F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EF3F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801EF3F8: sb          $t6, 0x67($a0)
    MEM_B(0X67, ctx->r4) = ctx->r14;
    // 0x801EF3FC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EF400: jal         0x801F1F34
    // 0x801EF404: sw          $v0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r2;
    func_801F1F34_5ADE44(rdram, ctx);
        goto after_2;
    // 0x801EF404: sw          $v0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r2;
    after_2:
    // 0x801EF408: b           L_801EF49C
    // 0x801EF40C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF40C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF410:
    // 0x801EF410: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EF414: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EF418: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EF41C: sb          $t7, 0x67($a0)
    MEM_B(0X67, ctx->r4) = ctx->r15;
    // 0x801EF420: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EF424: jal         0x801F1F34
    // 0x801EF428: nop

    func_801F1F34_5ADE44(rdram, ctx);
        goto after_3;
    // 0x801EF428: nop

    after_3:
    // 0x801EF42C: b           L_801EF49C
    // 0x801EF430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF434:
    // 0x801EF434: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EF438: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801EF43C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EF440: jal         0x801F1F34
    // 0x801EF444: nop

    func_801F1F34_5ADE44(rdram, ctx);
        goto after_4;
    // 0x801EF444: nop

    after_4:
    // 0x801EF448: b           L_801EF49C
    // 0x801EF44C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF44C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF450:
    // 0x801EF450: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801EF454: jal         0x801EF520
    // 0x801EF458: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801EF520_5AB430(rdram, ctx);
        goto after_5;
    // 0x801EF458: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_5:
    // 0x801EF45C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801EF460: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EF464: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801EF468: bne         $v0, $zero, L_801EF484
    if (ctx->r2 != 0) {
        // 0x801EF46C: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801EF484;
    }
    // 0x801EF46C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801EF470: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801EF474: jal         0x801F1F34
    // 0x801EF478: nop

    func_801F1F34_5ADE44(rdram, ctx);
        goto after_6;
    // 0x801EF478: nop

    after_6:
    // 0x801EF47C: b           L_801EF49C
    // 0x801EF480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801EF49C;
    // 0x801EF480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF484:
    // 0x801EF484: lw          $a2, 0x88($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X88);
    // 0x801EF488: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x801EF48C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801EF490: jal         0x801F1130
    // 0x801EF494: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_801F1130_5AD040(rdram, ctx);
        goto after_7;
    // 0x801EF494: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x801EF498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EF49C:
    // 0x801EF49C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EF4A0: jr          $ra
    // 0x801EF4A4: nop

    TRACE_RETURN()
    return;
    // 0x801EF4A4: nop

;}
RECOMP_FUNC void func_801E5084_5A0F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5084: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E5088: jr          $ra
    // 0x801E508C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E508C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FA7B0_5B66C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA7B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA7B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA7B8: jal         0x801FB934
    // 0x801FA7BC: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    func_801FB934_5B7844(rdram, ctx);
        goto after_0;
    // 0x801FA7BC: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    after_0:
    // 0x801FA7C0: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801FA7C4: addiu       $t5, $t5, -0x3A38
    ctx->r13 = ADD32(ctx->r13, -0X3A38);
    // 0x801FA7C8: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FA7CC: lui         $ra, 0x3
    ctx->r31 = S32(0X3 << 16);
    // 0x801FA7D0: ori         $ra, $ra, 0x8000
    ctx->r31 = ctx->r31 | 0X8000;
    // 0x801FA7D4: addu        $t4, $t3, $ra
    ctx->r12 = ADD32(ctx->r11, ctx->r31);
    // 0x801FA7D8: lbu         $v0, 0x2DE4($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X2DE4);
    // 0x801FA7DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801FA7E0: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
    // 0x801FA7E4: beq         $a0, $v0, L_801FA7FC
    if (ctx->r4 == ctx->r2) {
        // 0x801FA7E8: nop
    
            goto L_801FA7FC;
    }
    // 0x801FA7E8: nop

    // 0x801FA7EC: beq         $v0, $zero, L_801FA7FC
    if (ctx->r2 == 0) {
        // 0x801FA7F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801FA7FC;
    }
    // 0x801FA7F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FA7F4: bnel        $v0, $at, L_801FAAF4
    if (ctx->r2 != ctx->r1) {
        // 0x801FA7F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FAAF4;
    }
    goto skip_0;
    // 0x801FA7F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801FA7FC:
    // 0x801FA7FC: bne         $a0, $v0, L_801FA878
    if (ctx->r4 != ctx->r2) {
        // 0x801FA800: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801FA878;
    }
    // 0x801FA800: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FA804: lhu         $v0, 0x2DF4($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2DF4);
    // 0x801FA808: lhu         $t6, -0x6300($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X6300);
    // 0x801FA80C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801FA810: addiu       $a0, $a0, -0x6300
    ctx->r4 = ADD32(ctx->r4, -0X6300);
    // 0x801FA814: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801FA818: bnel        $at, $zero, L_801FA848
    if (ctx->r1 != 0) {
        // 0x801FA81C: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_801FA848;
    }
    goto skip_1;
    // 0x801FA81C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_1:
    // 0x801FA820: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801FA824:
    // 0x801FA824: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x801FA828: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x801FA82C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x801FA830: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x801FA834: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x801FA838: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801FA83C: beql        $at, $zero, L_801FA824
    if (ctx->r1 == 0) {
        // 0x801FA840: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801FA824;
    }
    goto skip_2;
    // 0x801FA840: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x801FA844: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_801FA848:
    // 0x801FA848: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA84C: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x801FA850: sh          $t7, -0x521A($at)
    MEM_H(-0X521A, ctx->r1) = ctx->r15;
    // 0x801FA854: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FA858: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA85C: addu        $t8, $t3, $ra
    ctx->r24 = ADD32(ctx->r11, ctx->r31);
    // 0x801FA860: lhu         $t9, 0x2DE6($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2DE6);
    // 0x801FA864: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA868: sw          $t9, -0x5218($at)
    MEM_W(-0X5218, ctx->r1) = ctx->r25;
    // 0x801FA86C: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FA870: addu        $t4, $t3, $ra
    ctx->r12 = ADD32(ctx->r11, ctx->r31);
    // 0x801FA874: lbu         $v0, 0x2DE4($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X2DE4);
L_801FA878:
    // 0x801FA878: bne         $v0, $zero, L_801FAA74
    if (ctx->r2 != 0) {
        // 0x801FA87C: lui         $a0, 0x8021
        ctx->r4 = S32(0X8021 << 16);
            goto L_801FAA74;
    }
    // 0x801FA87C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801FA880: addiu       $a0, $a0, -0x62F4
    ctx->r4 = ADD32(ctx->r4, -0X62F4);
    // 0x801FA884: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x801FA888: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801FA88C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x801FA890: lhu         $v0, 0x2DF4($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2DF4);
    // 0x801FA894: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801FA898: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801FA89C: bnel        $at, $zero, L_801FA8CC
    if (ctx->r1 != 0) {
        // 0x801FA8A0: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_801FA8CC;
    }
    goto skip_3;
    // 0x801FA8A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_3:
    // 0x801FA8A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801FA8A8:
    // 0x801FA8A8: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x801FA8AC: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x801FA8B0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x801FA8B4: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x801FA8B8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FA8BC: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801FA8C0: beql        $at, $zero, L_801FA8A8
    if (ctx->r1 == 0) {
        // 0x801FA8C4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801FA8A8;
    }
    goto skip_4;
    // 0x801FA8C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_4:
    // 0x801FA8C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_801FA8CC:
    // 0x801FA8CC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA8D0: addiu       $t9, $v1, -0x1
    ctx->r25 = ADD32(ctx->r3, -0X1);
    // 0x801FA8D4: sh          $t9, -0x521A($at)
    MEM_H(-0X521A, ctx->r1) = ctx->r25;
    // 0x801FA8D8: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FA8DC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA8E0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801FA8E4: addu        $t6, $t3, $ra
    ctx->r14 = ADD32(ctx->r11, ctx->r31);
    // 0x801FA8E8: lhu         $t7, 0x2DE6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2DE6);
    // 0x801FA8EC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA8F0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801FA8F4: sw          $t7, -0x5218($at)
    MEM_W(-0X5218, ctx->r1) = ctx->r15;
    // 0x801FA8F8: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FA8FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FA900: addu        $t4, $t3, $ra
    ctx->r12 = ADD32(ctx->r11, ctx->r31);
    // 0x801FA904: lw          $t8, 0x2DE8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X2DE8);
    // 0x801FA908: lhu         $t0, 0x2DF2($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X2DF2);
    // 0x801FA90C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801FA910: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x801FA914: lw          $a2, -0x6464($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6464);
    // 0x801FA918: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x801FA91C: beql        $t0, $v0, L_801FA98C
    if (ctx->r8 == ctx->r2) {
        // 0x801FA920: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_801FA98C;
    }
    goto skip_5;
    // 0x801FA920: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_5:
    // 0x801FA924: beq         $t1, $v0, L_801FA988
    if (ctx->r9 == ctx->r2) {
        // 0x801FA928: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_801FA988;
    }
    // 0x801FA928: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801FA92C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801FA930: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801FA934:
    // 0x801FA934: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x801FA938: multu       $t6, $t2
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FA93C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x801FA940: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801FA944: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801FA948: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801FA94C: mflo        $t8
    ctx->r24 = lo;
    // 0x801FA950: addu        $v0, $a2, $t8
    ctx->r2 = ADD32(ctx->r6, ctx->r24);
    // 0x801FA954: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x801FA958: multu       $t6, $a3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FA95C: mflo        $t9
    ctx->r25 = lo;
    // 0x801FA960: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x801FA964: lbu         $t7, -0x2($t6)
    ctx->r15 = MEM_BU(ctx->r14, -0X2);
    // 0x801FA968: beql        $t7, $t8, L_801FA978
    if (ctx->r15 == ctx->r24) {
        // 0x801FA96C: lbu         $a0, 0x0($v0)
        ctx->r4 = MEM_BU(ctx->r2, 0X0);
            goto L_801FA978;
    }
    goto skip_6;
    // 0x801FA96C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    skip_6:
    // 0x801FA970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FA974: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
L_801FA978:
    // 0x801FA978: beql        $t0, $a0, L_801FA98C
    if (ctx->r8 == ctx->r4) {
        // 0x801FA97C: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_801FA98C;
    }
    goto skip_7;
    // 0x801FA97C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_7:
    // 0x801FA980: bnel        $t1, $a0, L_801FA934
    if (ctx->r9 != ctx->r4) {
        // 0x801FA984: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801FA934;
    }
    goto skip_8;
    // 0x801FA984: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_8:
L_801FA988:
    // 0x801FA988: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_801FA98C:
    // 0x801FA98C: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801FA990: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x801FA994: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801FA998: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x801FA99C: mflo        $a3
    ctx->r7 = lo;
    // 0x801FA9A0: addu        $v0, $a2, $a3
    ctx->r2 = ADD32(ctx->r6, ctx->r7);
    // 0x801FA9A4: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x801FA9A8: beql        $t1, $t9, L_801FAA78
    if (ctx->r9 == ctx->r25) {
        // 0x801FA9AC: lbu         $t8, 0x2DE4($t4)
        ctx->r24 = MEM_BU(ctx->r12, 0X2DE4);
            goto L_801FAA78;
    }
    goto skip_9;
    // 0x801FA9AC: lbu         $t8, 0x2DE4($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X2DE4);
    skip_9:
    // 0x801FA9B0: lbu         $t6, 0x2($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X2);
    // 0x801FA9B4: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x801FA9B8: addiu       $t7, $a0, 0x7FFF
    ctx->r15 = ADD32(ctx->r4, 0X7FFF);
    // 0x801FA9BC: sh          $t6, 0x2DF1($at)
    MEM_H(0X2DF1, ctx->r1) = ctx->r14;
    // 0x801FA9C0: lhu         $t7, 0x2DF1($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2DF1);
    // 0x801FA9C4: bnel        $t7, $zero, L_801FAA78
    if (ctx->r15 != 0) {
        // 0x801FA9C8: lbu         $t8, 0x2DE4($t4)
        ctx->r24 = MEM_BU(ctx->r12, 0X2DE4);
            goto L_801FAA78;
    }
    goto skip_10;
    // 0x801FA9C8: lbu         $t8, 0x2DE4($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X2DE4);
    skip_10:
    // 0x801FA9CC: lw          $t8, 0x2DE8($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X2DE8);
    // 0x801FA9D0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FA9D4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA9D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801FA9DC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x801FA9E0: lw          $t6, -0x6464($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X6464);
    // 0x801FA9E4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA9E8: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x801FA9EC: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x801FA9F0: sh          $t8, -0x5214($at)
    MEM_H(-0X5214, ctx->r1) = ctx->r24;
    // 0x801FA9F4: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x801FA9F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA9FC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FAA00: sh          $a1, -0x5212($at)
    MEM_H(-0X5212, ctx->r1) = ctx->r5;
    // 0x801FAA04: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FAA08: addu        $t4, $t3, $ra
    ctx->r12 = ADD32(ctx->r11, ctx->r31);
    // 0x801FAA0C: lhu         $t8, 0x2DEC($t4)
    ctx->r24 = MEM_HU(ctx->r12, 0X2DEC);
    // 0x801FAA10: lw          $t6, 0x2DE8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X2DE8);
    // 0x801FAA14: lhu         $v0, 0x2DEE($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2DEE);
    // 0x801FAA18: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x801FAA1C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801FAA20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801FAA24: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801FAA28: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x801FAA2C: bgez        $v0, L_801FAA3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801FAA30: sra         $t8, $v0, 3
        ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
            goto L_801FAA3C;
    }
    // 0x801FAA30: sra         $t8, $v0, 3
    ctx->r24 = S32(SIGNED(ctx->r2) >> 3);
    // 0x801FAA34: addiu       $at, $v0, 0x7
    ctx->r1 = ADD32(ctx->r2, 0X7);
    // 0x801FAA38: sra         $t8, $at, 3
    ctx->r24 = S32(SIGNED(ctx->r1) >> 3);
L_801FAA3C:
    // 0x801FAA3C: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x801FAA40: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801FAA44: addiu       $t9, $t9, -0x39F8
    ctx->r25 = ADD32(ctx->r25, -0X39F8);
    // 0x801FAA48: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x801FAA4C: lbu         $t6, 0x138($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X138);
    // 0x801FAA50: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801FAA54: bgez        $v0, L_801FAA68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801FAA58: andi        $t8, $v0, 0x7
        ctx->r24 = ctx->r2 & 0X7;
            goto L_801FAA68;
    }
    // 0x801FAA58: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x801FAA5C: beq         $t8, $zero, L_801FAA68
    if (ctx->r24 == 0) {
        // 0x801FAA60: nop
    
            goto L_801FAA68;
    }
    // 0x801FAA60: nop

    // 0x801FAA64: addiu       $t8, $t8, -0x8
    ctx->r24 = ADD32(ctx->r24, -0X8);
L_801FAA68:
    // 0x801FAA68: sllv        $t9, $t7, $t8
    ctx->r25 = S32(ctx->r15 << (ctx->r24 & 31));
    // 0x801FAA6C: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x801FAA70: sb          $t7, 0x138($a0)
    MEM_B(0X138, ctx->r4) = ctx->r15;
L_801FAA74:
    // 0x801FAA74: lbu         $t8, 0x2DE4($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X2DE4);
L_801FAA78:
    // 0x801FAA78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801FAA7C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801FAA80: bne         $t8, $at, L_801FAAF0
    if (ctx->r24 != ctx->r1) {
        // 0x801FAA84: addiu       $a0, $a0, -0x62E8
        ctx->r4 = ADD32(ctx->r4, -0X62E8);
            goto L_801FAAF0;
    }
    // 0x801FAA84: addiu       $a0, $a0, -0x62E8
    ctx->r4 = ADD32(ctx->r4, -0X62E8);
    // 0x801FAA88: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x801FAA8C: addu        $t9, $a0, $t6
    ctx->r25 = ADD32(ctx->r4, ctx->r14);
    // 0x801FAA90: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x801FAA94: lhu         $v0, 0x2DF4($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2DF4);
    // 0x801FAA98: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801FAA9C: bnel        $at, $zero, L_801FAACC
    if (ctx->r1 != 0) {
        // 0x801FAAA0: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_801FAACC;
    }
    goto skip_11;
    // 0x801FAAA0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_11:
    // 0x801FAAA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_801FAAA8:
    // 0x801FAAA8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x801FAAAC: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x801FAAB0: addu        $t9, $a0, $t6
    ctx->r25 = ADD32(ctx->r4, ctx->r14);
    // 0x801FAAB4: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x801FAAB8: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801FAABC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801FAAC0: beql        $at, $zero, L_801FAAA8
    if (ctx->r1 == 0) {
        // 0x801FAAC4: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_801FAAA8;
    }
    goto skip_12;
    // 0x801FAAC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_12:
    // 0x801FAAC8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_801FAACC:
    // 0x801FAACC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FAAD0: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x801FAAD4: sh          $t8, -0x521A($at)
    MEM_H(-0X521A, ctx->r1) = ctx->r24;
    // 0x801FAAD8: lw          $t3, 0x0($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X0);
    // 0x801FAADC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAAE0: addu        $t6, $t3, $ra
    ctx->r14 = ADD32(ctx->r11, ctx->r31);
    // 0x801FAAE4: lhu         $t9, 0x2DE6($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X2DE6);
    // 0x801FAAE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FAAEC: sw          $t9, -0x5218($at)
    MEM_W(-0X5218, ctx->r1) = ctx->r25;
L_801FAAF0:
    // 0x801FAAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FAAF4:
    // 0x801FAAF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FAAF8: jr          $ra
    // 0x801FAAFC: nop

    TRACE_RETURN()
    return;
    // 0x801FAAFC: nop

;}
RECOMP_FUNC void func_801E14DC_59D3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14E0: jr          $ra
    // 0x801E14E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E0544_59C454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E0548: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E054C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E0550: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E0554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E0558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E055C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E0560: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E0564: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E0568: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E056C: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E0570: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801E0574: jalr        $t9
    // 0x801E0578: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E0578: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_0:
    // 0x801E057C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E0580: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E0584: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0588: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801E058C: sub.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x801E0590: lwc1        $f8, 0x28($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801E0594: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x801E0598: nop

    // 0x801E059C: bc1fl       L_801E05C8
    if (!c1cs) {
        // 0x801E05A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E05C8;
    }
    goto skip_0;
    // 0x801E05A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E05A4: lw          $v0, 0x5C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X5C);
    // 0x801E05A8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E05AC: addiu       $a1, $zero, 0x4A
    ctx->r5 = ADD32(0, 0X4A);
    // 0x801E05B0: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x801E05B4: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x801E05B8: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x801E05BC: jal         0x801DACDC
    // 0x801E05C0: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E05C0: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    after_1:
    // 0x801E05C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E05C8:
    // 0x801E05C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E05CC: jr          $ra
    // 0x801E05D0: nop

    TRACE_RETURN()
    return;
    // 0x801E05D0: nop

;}
RECOMP_FUNC void func_801F6EC4_5B2DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6ED0: jal         0x801E7F50
    // 0x801F6ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6ED4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6ED8: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6EDC: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6EE0: jalr        $t9
    // 0x801F6EE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6EE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6EE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6EEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6EF0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6EF4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6EF8: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6EFC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6F00: nop

    // 0x801F6F04: bc1fl       L_801F6F24
    if (!c1cs) {
        // 0x801F6F08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6F24;
    }
    goto skip_0;
    // 0x801F6F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6F0C: jal         0x801F70DC
    // 0x801F6F10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F70DC_5B2FEC(rdram, ctx);
        goto after_2;
    // 0x801F6F10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F6F14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6F18: jal         0x801DACDC
    // 0x801F6F1C: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801F6F1C: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
    after_3:
    // 0x801F6F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6F24:
    // 0x801F6F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6F28: jr          $ra
    // 0x801F6F2C: nop

    TRACE_RETURN()
    return;
    // 0x801F6F2C: nop

;}
RECOMP_FUNC void func_801E9504_5A5414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E9508: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801E950C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E9510: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E9514: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E9518: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E951C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9520: lwc1        $f2, -0x47F0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X47F0);
    // 0x801E9524: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E9528: lui         $t6, 0x900
    ctx->r14 = S32(0X900 << 16);
    // 0x801E952C: addiu       $t6, $t6, 0x65C
    ctx->r14 = ADD32(ctx->r14, 0X65C);
    // 0x801E9530: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801E9534: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801E9538: sw          $t7, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r15;
    // 0x801E953C: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x801E9540: swc1        $f2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f2.u32l;
    // 0x801E9544: swc1        $f2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f2.u32l;
    // 0x801E9548: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x801E954C: lwc1        $f6, 0x9C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X9C);
    // 0x801E9550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E9554: lwc1        $f18, 0xA0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801E9558: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E955C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E9560: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E9564: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E9568: addiu       $a1, $s0, 0x9C
    ctx->r5 = ADD32(ctx->r16, 0X9C);
    // 0x801E956C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9570: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801E9574: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E9578: lwc1        $f10, 0xA4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801E957C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E9580: swc1        $f16, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->f16.u32l;
    // 0x801E9584: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E9588: swc1        $f8, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f8.u32l;
    // 0x801E958C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801E9590: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E9594: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    // 0x801E9598: lhu         $a3, 0xA8($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XA8);
    // 0x801E959C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801E95A0: jal         0x8001DB04
    // 0x801E95A4: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_0;
    // 0x801E95A4: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    after_0:
    // 0x801E95A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E95AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E95B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E95B4: jr          $ra
    // 0x801E95B8: nop

    TRACE_RETURN()
    return;
    // 0x801E95B8: nop

;}
RECOMP_FUNC void func_801DAAD8_5969E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAAD8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801DAADC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DAAE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DAAE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAAE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DAAEC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x801DAAF0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x801DAAF4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801DAAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAAFC: bc1f        L_801DAB14
    if (!c1cs) {
        // 0x801DAB00: nop
    
            goto L_801DAB14;
    }
    // 0x801DAB00: nop

    // 0x801DAB04: jal         0x801DAA10
    // 0x801DAB08: nop

    func_801DAA10_596920(rdram, ctx);
        goto after_0;
    // 0x801DAB08: nop

    after_0:
    // 0x801DAB0C: b           L_801DAB20
    // 0x801DAB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAB20;
    // 0x801DAB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAB14:
    // 0x801DAB14: jal         0x801DA84C
    // 0x801DAB18: nop

    func_801DA84C_59675C(rdram, ctx);
        goto after_1;
    // 0x801DAB18: nop

    after_1:
    // 0x801DAB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAB20:
    // 0x801DAB20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAB24: jr          $ra
    // 0x801DAB28: nop

    TRACE_RETURN()
    return;
    // 0x801DAB28: nop

;}
RECOMP_FUNC void func_801DE644_59A554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE64C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DE650: jal         0x801E7DE8
    // 0x801DE654: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DE654: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE658: beq         $v0, $zero, L_801DE66C
    if (ctx->r2 == 0) {
        // 0x801DE65C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DE66C;
    }
    // 0x801DE65C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DE660: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE664: b           L_801DE678
    // 0x801DE668: lwc1        $f0, -0x4E7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E7C);
        goto L_801DE678;
    // 0x801DE668: lwc1        $f0, -0x4E7C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E7C);
L_801DE66C:
    // 0x801DE66C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DE670: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE674: nop

L_801DE678:
    // 0x801DE678: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DE67C: jal         0x801E3EBC
    // 0x801DE680: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_1;
    // 0x801DE680: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_1:
    // 0x801DE684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE68C: jr          $ra
    // 0x801DE690: nop

    TRACE_RETURN()
    return;
    // 0x801DE690: nop

;}
RECOMP_FUNC void func_801E864C_5A455C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E864C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E8650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8654: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E8658: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E865C: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E8660: jal         0x801E8560
    // 0x801E8664: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    func_801E8560_5A4470(rdram, ctx);
        goto after_0;
    // 0x801E8664: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    after_0:
    // 0x801E8668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E866C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E8670: jr          $ra
    // 0x801E8674: nop

    TRACE_RETURN()
    return;
    // 0x801E8674: nop

;}
RECOMP_FUNC void func_801E1524_59D434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1524: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1528: jr          $ra
    // 0x801E152C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E152C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E2264_59E174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E226C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E2270: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E2274: lwc1        $f4, -0x4CE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CE4);
    // 0x801E2278: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E227C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E2280: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E2284: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x801E2288: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E228C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2290: sh          $zero, 0x30($t7)
    MEM_H(0X30, ctx->r15) = 0;
    // 0x801E2294: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801E2298: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801E229C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E22A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E22A4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801E22A8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801E22AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801E22B0: lwc1        $f0, 0x7DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801E22B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E22B8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801E22BC: nop

    // 0x801E22C0: bc1fl       L_801E22D4
    if (!c1cs) {
        // 0x801E22C4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E22D4;
    }
    goto skip_0;
    // 0x801E22C4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E22C8: b           L_801E22D4
    // 0x801E22CC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E22D4;
    // 0x801E22CC: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E22D0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E22D4:
    // 0x801E22D4: ldc1        $f10, -0x4CE0($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4CE0);
    // 0x801E22D8: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801E22DC: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801E22E0: nop

    // 0x801E22E4: bc1t        L_801E231C
    if (c1cs) {
        // 0x801E22E8: nop
    
            goto L_801E231C;
    }
    // 0x801E22E8: nop

    // 0x801E22EC: jal         0x801E7DE8
    // 0x801E22F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E22F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E22F4: beq         $v0, $zero, L_801E230C
    if (ctx->r2 == 0) {
        // 0x801E22F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E230C;
    }
    // 0x801E22F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E22FC: jal         0x80038BC8
    // 0x801E2300: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E2300: addiu       $a0, $zero, 0x25B
    ctx->r4 = ADD32(0, 0X25B);
    after_1:
    // 0x801E2304: b           L_801E2328
    // 0x801E2308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801E2328;
    // 0x801E2308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E230C:
    // 0x801E230C: jal         0x801DD6E0
    // 0x801E2310: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_2;
    // 0x801E2310: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_2:
    // 0x801E2314: b           L_801E2328
    // 0x801E2318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_801E2328;
    // 0x801E2318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E231C:
    // 0x801E231C: jal         0x801DD6E0
    // 0x801E2320: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_801DD6E0_5995F0(rdram, ctx);
        goto after_3;
    // 0x801E2320: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_3:
    // 0x801E2324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801E2328:
    // 0x801E2328: jal         0x801E8964
    // 0x801E232C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_801E8964_5A4874(rdram, ctx);
        goto after_4;
    // 0x801E232C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_4:
    // 0x801E2330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E2338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E233C: jr          $ra
    // 0x801E2340: nop

    TRACE_RETURN()
    return;
    // 0x801E2340: nop

;}
RECOMP_FUNC void func_801EBEE0_5A7DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBEE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EBEE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EBEE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EBEEC: lui         $a2, 0x42FA
    ctx->r6 = S32(0X42FA << 16);
    // 0x801EBEF0: lui         $a3, 0x4296
    ctx->r7 = S32(0X4296 << 16);
    // 0x801EBEF4: ori         $a3, $a3, 0x428F
    ctx->r7 = ctx->r7 | 0X428F;
    // 0x801EBEF8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x801EBEFC: jal         0x801EBF48
    // 0x801EBF00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801EBF48_5A7E58(rdram, ctx);
        goto after_0;
    // 0x801EBF00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x801EBF04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBF08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EBF0C: jr          $ra
    // 0x801EBF10: nop

    TRACE_RETURN()
    return;
    // 0x801EBF10: nop

;}
RECOMP_FUNC void func_801CFE24_58BD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CFE24: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x801CFE28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CFE2C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801CFE30: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801CFE34: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801CFE38: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE3C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CFE40: sw          $t6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r14;
    // 0x801CFE44: lwc1        $f4, 0xB4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XB4);
    // 0x801CFE48: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CFE4C: addiu       $v1, $v1, -0x34C0
    ctx->r3 = ADD32(ctx->r3, -0X34C0);
    // 0x801CFE50: swc1        $f4, -0x3574($at)
    MEM_W(-0X3574, ctx->r1) = ctx->f4.u32l;
    // 0x801CFE54: lwc1        $f6, 0xB8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB8);
    // 0x801CFE58: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE5C: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x801CFE60: swc1        $f6, -0x3570($at)
    MEM_W(-0X3570, ctx->r1) = ctx->f6.u32l;
    // 0x801CFE64: lwc1        $f8, 0xBC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XBC);
    // 0x801CFE68: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE6C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801CFE70: swc1        $f8, -0x356C($at)
    MEM_W(-0X356C, ctx->r1) = ctx->f8.u32l;
    // 0x801CFE74: lwc1        $f10, 0xA8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801CFE78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CFE80: swc1        $f10, -0x355C($at)
    MEM_W(-0X355C, ctx->r1) = ctx->f10.u32l;
    // 0x801CFE84: lwc1        $f16, 0xAC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801CFE88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE8C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801CFE90: swc1        $f16, -0x3558($at)
    MEM_W(-0X3558, ctx->r1) = ctx->f16.u32l;
    // 0x801CFE94: lwc1        $f18, 0xB0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x801CFE98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFE9C: addiu       $t0, $t0, -0x359A
    ctx->r8 = ADD32(ctx->r8, -0X359A);
    // 0x801CFEA0: swc1        $f18, -0x3554($at)
    MEM_W(-0X3554, ctx->r1) = ctx->f18.u32l;
    // 0x801CFEA4: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CFEA8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFEAC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CFEB0: lwc1        $f4, 0x5C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X5C);
    // 0x801CFEB4: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x801CFEB8: addiu       $t2, $t2, -0x35B0
    ctx->r10 = ADD32(ctx->r10, -0X35B0);
    // 0x801CFEBC: swc1        $f4, -0x3568($at)
    MEM_W(-0X3568, ctx->r1) = ctx->f4.u32l;
    // 0x801CFEC0: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CFEC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFEC8: addiu       $a1, $a1, -0x35AC
    ctx->r5 = ADD32(ctx->r5, -0X35AC);
    // 0x801CFECC: lwc1        $f6, 0x60($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X60);
    // 0x801CFED0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801CFED4: addiu       $a3, $a3, -0x35A4
    ctx->r7 = ADD32(ctx->r7, -0X35A4);
    // 0x801CFED8: swc1        $f6, -0x3564($at)
    MEM_W(-0X3564, ctx->r1) = ctx->f6.u32l;
    // 0x801CFEDC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CFEE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFEE4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801CFEE8: lwc1        $f8, 0x64($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X64);
    // 0x801CFEEC: addiu       $t1, $t1, -0x34C8
    ctx->r9 = ADD32(ctx->r9, -0X34C8);
    // 0x801CFEF0: addiu       $t7, $sp, 0xF0
    ctx->r15 = ADD32(ctx->r29, 0XF0);
    // 0x801CFEF4: swc1        $f8, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = ctx->f8.u32l;
    // 0x801CFEF8: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x801CFEFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFF00: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x801CFF04: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x801CFF08: lwc1        $f2, 0x88($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X88);
    // 0x801CFF0C: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801CFF10: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    // 0x801CFF14: lwc1        $f2, 0x8C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x801CFF18: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CFF1C: addiu       $a0, $a0, -0x3598
    ctx->r4 = ADD32(ctx->r4, -0X3598);
    // 0x801CFF20: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x801CFF24: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x801CFF28: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801CFF2C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CFF30: addiu       $v0, $v0, -0x3596
    ctx->r2 = ADD32(ctx->r2, -0X3596);
    // 0x801CFF34: swc1        $f2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f2.u32l;
    // 0x801CFF38: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x801CFF3C: lwc1        $f16, 0x4($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801CFF40: lwc1        $f10, 0xA4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801CFF44: add.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CFF48: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x801CFF4C: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x801CFF50: lwc1        $f2, 0x8($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801CFF54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801CFF58: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x801CFF5C: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x801CFF60: lhu         $t3, 0x98($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X98);
    // 0x801CFF64: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801CFF68: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801CFF6C: sh          $t3, -0x34B4($at)
    MEM_H(-0X34B4, ctx->r1) = ctx->r11;
    // 0x801CFF70: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CFF74: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801CFF78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFF7C: sh          $zero, 0xA($t4)
    MEM_H(0XA, ctx->r12) = 0;
    // 0x801CFF80: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x801CFF84: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x801CFF88: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x801CFF8C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801CFF90: sh          $zero, -0x359C($at)
    MEM_H(-0X359C, ctx->r1) = 0;
    // 0x801CFF94: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x801CFF98: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801CFF9C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x801CFFA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFFA4: sw          $zero, -0x35B4($at)
    MEM_W(-0X35B4, ctx->r1) = 0;
    // 0x801CFFA8: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x801CFFAC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFFB0: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x801CFFB4: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801CFFB8: lw          $t4, -0x383C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X383C);
    // 0x801CFFBC: sw          $zero, -0x35A8($at)
    MEM_W(-0X35A8, ctx->r1) = 0;
    // 0x801CFFC0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CFFC4: sh          $zero, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = 0;
    // 0x801CFFC8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801CFFCC: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x801CFFD0: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801CFFD4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801CFFD8: add.s       $f0, $f18, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801CFFDC: lbu         $t6, 0x59($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X59);
    // 0x801CFFE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CFFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CFFE8: beq         $t6, $zero, L_801CFFF4
    if (ctx->r14 == 0) {
        // 0x801CFFEC: sqrt.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
            goto L_801CFFF4;
    }
    // 0x801CFFEC: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x801CFFF0: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_801CFFF4:
    // 0x801CFFF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CFFF8: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x801CFFFC: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D0000: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x801D0004: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D0008: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x801D000C: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x801D0010: jal         0x801D03DC
    // 0x801D0014: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    func_801D03DC_58C2EC(rdram, ctx);
        goto after_0;
    // 0x801D0014: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x801D0018: lwc1        $f4, 0xF0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D001C: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801D0020: lwc1        $f16, 0xF8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801D0024: addiu       $t8, $sp, 0xA4
    ctx->r24 = ADD32(ctx->r29, 0XA4);
    // 0x801D0028: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x801D002C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D0030: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D0034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0038: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D003C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0040: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x801D0044: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x801D0048: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x801D004C: jal         0x801D1358
    // 0x801D0050: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    func_801D1358_58D268(rdram, ctx);
        goto after_1;
    // 0x801D0050: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801D0054: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x801D0058: addiu       $t4, $sp, 0x98
    ctx->r12 = ADD32(ctx->r29, 0X98);
    // 0x801D005C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D0060: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D0064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0068: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D006C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0070: jal         0x801D04F8
    // 0x801D0074: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    func_801D04F8_58C408(rdram, ctx);
        goto after_2;
    // 0x801D0074: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    after_2:
    // 0x801D0078: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801D007C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801D0080: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D0084: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801D0088: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0090: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D0094: bc1f        L_801D00B8
    if (!c1cs) {
        // 0x801D0098: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801D00B8;
    }
    // 0x801D0098: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D009C: lhu         $t5, -0x35B8($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X35B8);
    // 0x801D00A0: beql        $t5, $zero, L_801D00B4
    if (ctx->r13 == 0) {
        // 0x801D00A4: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_801D00B4;
    }
    goto skip_0;
    // 0x801D00A4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x801D00A8: b           L_801D00B8
    // 0x801D00AC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_801D00B8;
    // 0x801D00AC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801D00B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_801D00B4:
    // 0x801D00B4: nop

L_801D00B8:
    // 0x801D00B8: ldc1        $f18, -0x5558($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0X5558);
    // 0x801D00BC: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x801D00C0: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    // 0x801D00C4: c.lt.d      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.d < ctx->f10.d;
    // 0x801D00C8: addiu       $t8, $sp, 0xA4
    ctx->r24 = ADD32(ctx->r29, 0XA4);
    // 0x801D00CC: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x801D00D0: bc1fl       L_801D0288
    if (!c1cs) {
        // 0x801D00D4: sw          $t8, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r24;
            goto L_801D0288;
    }
    goto skip_1;
    // 0x801D00D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    skip_1:
    // 0x801D00D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D00DC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D00E0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801D00E4: nop

    // 0x801D00E8: bc1fl       L_801D0288
    if (!c1cs) {
        // 0x801D00EC: sw          $t8, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r24;
            goto L_801D0288;
    }
    goto skip_2;
    // 0x801D00EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    skip_2:
    // 0x801D00F0: lwc1        $f4, -0x3558($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3558);
    // 0x801D00F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D00F8: ldc1        $f16, -0x5550($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X5550);
    // 0x801D00FC: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801D0100: c.lt.d      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.d < ctx->f16.d;
    // 0x801D0104: nop

    // 0x801D0108: bc1fl       L_801D0150
    if (!c1cs) {
        // 0x801D010C: div.s       $f10, $f2, $f12
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
            goto L_801D0150;
    }
    goto skip_3;
    // 0x801D010C: div.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    skip_3:
    // 0x801D0110: div.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
    // 0x801D0114: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801D0118: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801D011C: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    // 0x801D0120: addiu       $a3, $s0, 0xA8
    ctx->r7 = ADD32(ctx->r16, 0XA8);
    // 0x801D0124: jal         0x8001CD4C
    // 0x801D0128: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_8001CD4C_1D94C(rdram, ctx);
        goto after_3;
    // 0x801D0128: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x801D012C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x801D0130: beq         $t6, $zero, L_801D01E8
    if (ctx->r14 == 0) {
        // 0x801D0134: slti        $at, $v0, 0x431
        ctx->r1 = SIGNED(ctx->r2) < 0X431 ? 1 : 0;
            goto L_801D01E8;
    }
    // 0x801D0134: slti        $at, $v0, 0x431
    ctx->r1 = SIGNED(ctx->r2) < 0X431 ? 1 : 0;
    // 0x801D0138: bne         $at, $zero, L_801D01E8
    if (ctx->r1 != 0) {
        // 0x801D013C: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_801D01E8;
    }
    // 0x801D013C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D0140: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0144: b           L_801D01E8
    // 0x801D0148: sb          $t7, -0x3520($at)
    MEM_B(-0X3520, ctx->r1) = ctx->r15;
        goto L_801D01E8;
    // 0x801D0148: sb          $t7, -0x3520($at)
    MEM_B(-0X3520, ctx->r1) = ctx->r15;
    // 0x801D014C: div.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f12.fl);
L_801D0150:
    // 0x801D0150: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x801D0154: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801D0158: addiu       $a2, $s0, 0x84
    ctx->r6 = ADD32(ctx->r16, 0X84);
    // 0x801D015C: addiu       $a3, $s0, 0xA8
    ctx->r7 = ADD32(ctx->r16, 0XA8);
    // 0x801D0160: jal         0x8001CF5C
    // 0x801D0164: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8001CF5C_1DB5C(rdram, ctx);
        goto after_4;
    // 0x801D0164: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x801D0168: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D016C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0170: sb          $t8, -0x3520($at)
    MEM_B(-0X3520, ctx->r1) = ctx->r24;
    // 0x801D0174: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0178: sh          $zero, -0x359C($at)
    MEM_H(-0X359C, ctx->r1) = 0;
    // 0x801D017C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0180: sw          $zero, -0x35B4($at)
    MEM_W(-0X35B4, ctx->r1) = 0;
    // 0x801D0184: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0188: sw          $zero, -0x35A8($at)
    MEM_W(-0X35A8, ctx->r1) = 0;
    // 0x801D018C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0190: lwc1        $f6, -0x355C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X355C);
    // 0x801D0194: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D0198: addiu       $v1, $v1, -0x34C0
    ctx->r3 = ADD32(ctx->r3, -0X34C0);
    // 0x801D019C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D01A0: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801D01A4: lwc1        $f4, -0x3558($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3558);
    // 0x801D01A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D01AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801D01B0: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x801D01B4: lwc1        $f8, -0x3554($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3554);
    // 0x801D01B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D01BC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D01C0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x801D01C4: lwc1        $f18, 0xA4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA4);
    // 0x801D01C8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801D01CC: nop

    // 0x801D01D0: bc1f        L_801D01E4
    if (!c1cs) {
        // 0x801D01D4: nop
    
            goto L_801D01E4;
    }
    // 0x801D01D4: nop

    // 0x801D01D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D01DC: nop

    // 0x801D01E0: swc1        $f10, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f10.u32l;
L_801D01E4:
    // 0x801D01E4: sh          $t9, -0x34B4($at)
    MEM_H(-0X34B4, ctx->r1) = ctx->r25;
L_801D01E8:
    // 0x801D01E8: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D01EC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D01F0: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D01F4: addiu       $t3, $sp, 0xF0
    ctx->r11 = ADD32(ctx->r29, 0XF0);
    // 0x801D01F8: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D01FC: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D0200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0204: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0208: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x801D020C: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D0210: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x801D0214: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D0218: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    // 0x801D021C: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801D0220: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D0224: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x801D0228: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D022C: jal         0x801D03DC
    // 0x801D0230: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    func_801D03DC_58C2EC(rdram, ctx);
        goto after_5;
    // 0x801D0230: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    after_5:
    // 0x801D0234: addiu       $t4, $sp, 0xA4
    ctx->r12 = ADD32(ctx->r29, 0XA4);
    // 0x801D0238: addiu       $t5, $sp, 0x98
    ctx->r13 = ADD32(ctx->r29, 0X98);
    // 0x801D023C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801D0240: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D0244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D0248: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D024C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0250: jal         0x801D04F8
    // 0x801D0254: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    func_801D04F8_58C408(rdram, ctx);
        goto after_6;
    // 0x801D0254: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    after_6:
    // 0x801D0258: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x801D025C: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x801D0260: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D0264: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D0268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D026C: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D0270: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0274: jal         0x801D0C64
    // 0x801D0278: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    func_801D0C64_58CB74(rdram, ctx);
        goto after_7;
    // 0x801D0278: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    after_7:
    // 0x801D027C: b           L_801D02E4
    // 0x801D0280: nop

        goto L_801D02E4;
    // 0x801D0280: nop

    // 0x801D0284: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
L_801D0288:
    // 0x801D0288: jal         0x801D1358
    // 0x801D028C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_801D1358_58D268(rdram, ctx);
        goto after_8;
    // 0x801D028C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_8:
    // 0x801D0290: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x801D0294: addiu       $t4, $sp, 0x78
    ctx->r12 = ADD32(ctx->r29, 0X78);
    // 0x801D0298: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D029C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D02A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D02A4: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D02A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D02AC: jal         0x801D0C64
    // 0x801D02B0: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    func_801D0C64_58CB74(rdram, ctx);
        goto after_9;
    // 0x801D02B0: addiu       $a3, $sp, 0xF0
    ctx->r7 = ADD32(ctx->r29, 0XF0);
    after_9:
    // 0x801D02B4: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D02B8: lhu         $t5, -0x359C($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X359C);
    // 0x801D02BC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D02C0: beq         $t5, $zero, L_801D02E4
    if (ctx->r13 == 0) {
        // 0x801D02C4: nop
    
            goto L_801D02E4;
    }
    // 0x801D02C4: nop

    // 0x801D02C8: lhu         $t6, -0x359A($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X359A);
    // 0x801D02CC: beq         $t6, $zero, L_801D02E4
    if (ctx->r14 == 0) {
        // 0x801D02D0: nop
    
            goto L_801D02E4;
    }
    // 0x801D02D0: nop

    // 0x801D02D4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801D02D8: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x801D02DC: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x801D02E0: sh          $t8, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r24;
L_801D02E4:
    // 0x801D02E4: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D02E8: lw          $t9, -0x34C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X34C8);
    // 0x801D02EC: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D02F0: beql        $t9, $zero, L_801D03C4
    if (ctx->r25 == 0) {
        // 0x801D02F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D03C4;
    }
    goto skip_4;
    // 0x801D02F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801D02F8: lhu         $t3, -0x359A($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X359A);
    // 0x801D02FC: bnel        $t3, $zero, L_801D03C4
    if (ctx->r11 != 0) {
        // 0x801D0300: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D03C4;
    }
    goto skip_5;
    // 0x801D0300: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x801D0304: jal         0x801E7F30
    // 0x801D0308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7F30_5A3E40(rdram, ctx);
        goto after_10;
    // 0x801D0308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801D030C: bnel        $v0, $zero, L_801D03C4
    if (ctx->r2 != 0) {
        // 0x801D0310: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D03C4;
    }
    goto skip_6;
    // 0x801D0310: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x801D0314: lhu         $t4, 0x9A($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X9A);
    // 0x801D0318: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801D031C: addiu       $v0, $v0, -0x3340
    ctx->r2 = ADD32(ctx->r2, -0X3340);
    // 0x801D0320: bne         $t4, $zero, L_801D0344
    if (ctx->r12 != 0) {
        // 0x801D0324: addiu       $t5, $v0, 0x7FFF
        ctx->r13 = ADD32(ctx->r2, 0X7FFF);
            goto L_801D0344;
    }
    // 0x801D0324: addiu       $t5, $v0, 0x7FFF
    ctx->r13 = ADD32(ctx->r2, 0X7FFF);
    // 0x801D0328: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D032C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D0330: nop

    // 0x801D0334: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801D0338: nop

    // 0x801D033C: bc1fl       L_801D03C4
    if (!c1cs) {
        // 0x801D0340: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D03C4;
    }
    goto skip_7;
    // 0x801D0340: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_7:
L_801D0344:
    // 0x801D0344: lhu         $t5, 0x2DF3($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X2DF3);
    // 0x801D0348: addiu       $at, $zero, 0x1E1
    ctx->r1 = ADD32(0, 0X1E1);
    // 0x801D034C: addiu       $t6, $v0, 0x7FFF
    ctx->r14 = ADD32(ctx->r2, 0X7FFF);
    // 0x801D0350: beql        $t5, $at, L_801D03C4
    if (ctx->r13 == ctx->r1) {
        // 0x801D0354: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801D03C4;
    }
    goto skip_8;
    // 0x801D0354: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_8:
    // 0x801D0358: lbu         $t6, 0x2DE5($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2DE5);
    // 0x801D035C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D0360: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D0364: beq         $t6, $at, L_801D03C0
    if (ctx->r14 == ctx->r1) {
        // 0x801D0368: addiu       $a0, $a0, -0x34A4
        ctx->r4 = ADD32(ctx->r4, -0X34A4);
            goto L_801D03C0;
    }
    // 0x801D0368: addiu       $a0, $a0, -0x34A4
    ctx->r4 = ADD32(ctx->r4, -0X34A4);
    // 0x801D036C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801D0370: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801D0374: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x801D0378: bne         $v1, $zero, L_801D03A8
    if (ctx->r3 != 0) {
        // 0x801D037C: addiu       $t8, $sp, 0xA4
        ctx->r24 = ADD32(ctx->r29, 0XA4);
            goto L_801D03A8;
    }
    // 0x801D037C: addiu       $t8, $sp, 0xA4
    ctx->r24 = ADD32(ctx->r29, 0XA4);
    // 0x801D0380: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D0384: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D0388: addiu       $v0, $v0, -0x34B0
    ctx->r2 = ADD32(ctx->r2, -0X34B0);
    // 0x801D038C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x801D0390: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D0394: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x801D0398: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x801D039C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D03A0: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x801D03A4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_801D03A8:
    // 0x801D03A8: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x801D03AC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D03B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D03B4: lw          $a1, 0xFC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XFC);
    // 0x801D03B8: jal         0x801D15F0
    // 0x801D03BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801D15F0_58D500(rdram, ctx);
        goto after_11;
    // 0x801D03BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_11:
L_801D03C0:
    // 0x801D03C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D03C4:
    // 0x801D03C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D03C8: lw          $v0, -0x35B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35B0);
    // 0x801D03CC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801D03D0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801D03D4: jr          $ra
    // 0x801D03D8: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    TRACE_RETURN()
    return;
    // 0x801D03D8: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_801E1548_59D458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1548: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E154C: jr          $ra
    // 0x801E1550: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E1550: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E2C70_59EB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2C78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E2C7C: jal         0x801E3834
    // 0x801E2C80: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2C80: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x801E2C84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2C88: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2C8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E2C90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E2C94: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E2C98: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E2C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2CA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2CA4: jr          $ra
    // 0x801E2CA8: nop

    TRACE_RETURN()
    return;
    // 0x801E2CA8: nop

;}
RECOMP_FUNC void func_801EE0C8_5A9FD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE0C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801EE0CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EE0D0: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x801EE0D4: lw          $t9, -0x3A38($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3A38);
    // 0x801EE0D8: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x801EE0DC: lui         $t0, 0xC
    ctx->r8 = S32(0XC << 16);
    // 0x801EE0E0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EE0E4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801EE0E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801EE0EC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x801EE0F0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x801EE0F4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801EE0F8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x801EE0FC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801EE100: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801EE104: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EE108: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EE10C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EE110: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801EE114: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801EE118: lhu         $t0, 0x2D90($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X2D90);
    // 0x801EE11C: lui         $t6, 0x900
    ctx->r14 = S32(0X900 << 16);
    // 0x801EE120: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x801EE124: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801EE128: addiu       $t7, $t7, -0x26E0
    ctx->r15 = ADD32(ctx->r15, -0X26E0);
    // 0x801EE12C: addiu       $t6, $t6, 0x2410
    ctx->r14 = ADD32(ctx->r14, 0X2410);
    // 0x801EE130: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801EE134: addu        $a1, $v0, $t6
    ctx->r5 = ADD32(ctx->r2, ctx->r14);
    // 0x801EE138: or          $a2, $t7, $v0
    ctx->r6 = ctx->r15 | ctx->r2;
    // 0x801EE13C: jal         0x80034680
    // 0x801EE140: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    func_80034680_35280(rdram, ctx);
        goto after_0;
    // 0x801EE140: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    after_0:
    // 0x801EE144: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801EE148: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x801EE14C: sb          $t1, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r9;
    // 0x801EE150: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EE154: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801EE158: jr          $ra
    // 0x801EE15C: nop

    TRACE_RETURN()
    return;
    // 0x801EE15C: nop

;}
RECOMP_FUNC void func_801CF770_58B680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF770: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CF774: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801CF778: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801CF77C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CF780: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x801CF784: addiu       $t7, $sp, 0x20
    ctx->r15 = ADD32(ctx->r29, 0X20);
    // 0x801CF788: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x801CF78C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801CF790: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x801CF794: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CF798: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CF79C: jal         0x801CF564
    // 0x801CF7A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801CF564_58B474(rdram, ctx);
        goto after_0;
    // 0x801CF7A0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CF7A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801CF7A8: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x801CF7AC: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801CF7B0: addiu       $a3, $a3, -0x3340
    ctx->r7 = ADD32(ctx->r7, -0X3340);
    // 0x801CF7B4: addiu       $t8, $a3, 0x7FFF
    ctx->r24 = ADD32(ctx->r7, 0X7FFF);
    // 0x801CF7B8: sh          $v0, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r2;
    // 0x801CF7BC: lbu         $t8, 0x2E24($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2E24);
    // 0x801CF7C0: addiu       $at, $a3, 0x7FFF
    ctx->r1 = ADD32(ctx->r7, 0X7FFF);
    // 0x801CF7C4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801CF7C8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x801CF7CC: sb          $t9, 0x2E24($at)
    MEM_B(0X2E24, ctx->r1) = ctx->r25;
    // 0x801CF7D0: lbu         $t0, 0x90($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X90);
    // 0x801CF7D4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x801CF7D8: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801CF7DC: multu       $t0, $a1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF7E0: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x801CF7E4: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x801CF7E8: mflo        $t1
    ctx->r9 = lo;
    // 0x801CF7EC: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x801CF7F0: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x801CF7F4: swc1        $f0, 0x30FC($t3)
    MEM_W(0X30FC, ctx->r11) = ctx->f0.u32l;
    // 0x801CF7F8: lbu         $t4, 0x90($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X90);
    // 0x801CF7FC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801CF800: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF804: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801CF808: mflo        $t5
    ctx->r13 = lo;
    // 0x801CF80C: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x801CF810: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x801CF814: swc1        $f6, 0x3100($t7)
    MEM_W(0X3100, ctx->r15) = ctx->f6.u32l;
    // 0x801CF818: lbu         $t8, 0x90($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X90);
    // 0x801CF81C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801CF820: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CF824: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x801CF828: mflo        $t9
    ctx->r25 = lo;
    // 0x801CF82C: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x801CF830: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x801CF834: swc1        $f10, 0x3104($t1)
    MEM_W(0X3104, ctx->r9) = ctx->f10.u32l;
    // 0x801CF838: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801CF83C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CF840: jr          $ra
    // 0x801CF844: nop

    TRACE_RETURN()
    return;
    // 0x801CF844: nop

;}
RECOMP_FUNC void func_801E7A80_5A3990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7A80: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801E7A84: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801E7A88: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801E7A8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E7A90: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801E7A94: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801E7A98: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x801E7A9C: addiu       $t9, $t9, -0x3340
    ctx->r25 = ADD32(ctx->r25, -0X3340);
    // 0x801E7AA0: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801E7AA4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801E7AA8: lwc1        $f0, 0x30FC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X30FC);
    // 0x801E7AAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E7AB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E7AB4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801E7AB8: nop

    // 0x801E7ABC: bc1fl       L_801E7AD0
    if (!c1cs) {
        // 0x801E7AC0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801E7AD0;
    }
    goto skip_0;
    // 0x801E7AC0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x801E7AC4: b           L_801E7AD0
    // 0x801E7AC8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801E7AD0;
    // 0x801E7AC8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801E7ACC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801E7AD0:
    // 0x801E7AD0: ldc1        $f8, -0x4A28($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4A28);
    // 0x801E7AD4: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x801E7AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E7ADC: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x801E7AE0: nop

    // 0x801E7AE4: bc1fl       L_801E7AF4
    if (!c1cs) {
        // 0x801E7AE8: sltiu       $v0, $v0, 0x1
        ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_801E7AF4;
    }
    goto skip_1;
    // 0x801E7AE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    skip_1:
    // 0x801E7AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E7AF0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_801E7AF4:
    // 0x801E7AF4: bne         $v0, $zero, L_801E7B1C
    if (ctx->r2 != 0) {
        // 0x801E7AF8: nop
    
            goto L_801E7B1C;
    }
    // 0x801E7AF8: nop

    // 0x801E7AFC: lhu         $v0, 0x30F2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X30F2);
    // 0x801E7B00: andi        $t0, $v0, 0xE000
    ctx->r8 = ctx->r2 & 0XE000;
    // 0x801E7B04: sltu        $v0, $zero, $t0
    ctx->r2 = 0 < ctx->r8 ? 1 : 0;
    // 0x801E7B08: bne         $v0, $zero, L_801E7B1C
    if (ctx->r2 != 0) {
        // 0x801E7B0C: nop
    
            goto L_801E7B1C;
    }
    // 0x801E7B0C: nop

    // 0x801E7B10: lhu         $v0, 0x30F4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X30F4);
    // 0x801E7B14: andi        $t2, $v0, 0xE000
    ctx->r10 = ctx->r2 & 0XE000;
    // 0x801E7B18: sltu        $v0, $zero, $t2
    ctx->r2 = 0 < ctx->r10 ? 1 : 0;
L_801E7B1C:
    // 0x801E7B1C: jr          $ra
    // 0x801E7B20: nop

    TRACE_RETURN()
    return;
    // 0x801E7B20: nop

;}
RECOMP_FUNC void func_801DDA28_599938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDA30: jal         0x801E1B60
    // 0x801DDA34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E1B60_59DA70(rdram, ctx);
        goto after_0;
    // 0x801DDA34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDA40: jr          $ra
    // 0x801DDA44: nop

    TRACE_RETURN()
    return;
    // 0x801DDA44: nop

;}
RECOMP_FUNC void func_801EB5BC_5A74CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB5C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB5C4: jal         0x801EB6BC
    // 0x801EB5C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EB6BC_5A75CC(rdram, ctx);
        goto after_0;
    // 0x801EB5C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EB5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB5D4: jr          $ra
    // 0x801EB5D8: nop

    TRACE_RETURN()
    return;
    // 0x801EB5D8: nop

;}
RECOMP_FUNC void func_801F9E8C_5B5D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9E8C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F9E90: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801F9E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F9E98: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801F9E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9EA0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x801F9EA4: lw          $t6, -0x51FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X51FC);
    // 0x801F9EA8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9EAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F9EB0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x801F9EB4: sw          $t6, -0x51F8($at)
    MEM_W(-0X51F8, ctx->r1) = ctx->r14;
    // 0x801F9EB8: jal         0x801F9EE4
    // 0x801F9EBC: lhu         $a0, 0x7ACA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7ACA);
    func_801F9EE4_5B5DF4(rdram, ctx);
        goto after_0;
    // 0x801F9EBC: lhu         $a0, 0x7ACA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X7ACA);
    after_0:
    // 0x801F9EC0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801F9EC4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801F9EC8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F9ECC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801F9ED0: sw          $v0, -0x51FC($at)
    MEM_W(-0X51FC, ctx->r1) = ctx->r2;
    // 0x801F9ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9ED8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9EDC: jr          $ra
    // 0x801F9EE0: nop

    TRACE_RETURN()
    return;
    // 0x801F9EE0: nop

;}
RECOMP_FUNC void func_801EBAA8_5A79B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBAA8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EBAAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EBAB0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801EBAB4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801EBAB8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801EBABC: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801EBAC0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EBAC4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801EBAC8: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x801EBACC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801EBAD0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801EBAD4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801EBAD8: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EBADC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EBAE0: beql        $v0, $zero, L_801EBB08
    if (ctx->r2 == 0) {
        // 0x801EBAE4: lbu         $v0, 0xCC($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0XCC);
            goto L_801EBB08;
    }
    goto skip_0;
    // 0x801EBAE4: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
    skip_0:
    // 0x801EBAE8: beq         $v0, $at, L_801EBBD0
    if (ctx->r2 == ctx->r1) {
        // 0x801EBAEC: addiu       $s0, $s1, 0x9C
        ctx->r16 = ADD32(ctx->r17, 0X9C);
            goto L_801EBBD0;
    }
    // 0x801EBAEC: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801EBAF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EBAF4: beql        $v0, $at, L_801EBC54
    if (ctx->r2 == ctx->r1) {
        // 0x801EBAF8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801EBC54;
    }
    goto skip_1;
    // 0x801EBAF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x801EBAFC: b           L_801EBC54
    // 0x801EBB00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801EBC54;
    // 0x801EBB00: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EBB04: lbu         $v0, 0xCC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XCC);
L_801EBB08:
    // 0x801EBB08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EBB0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EBB10: slti        $at, $v0, 0x8C
    ctx->r1 = SIGNED(ctx->r2) < 0X8C ? 1 : 0;
    // 0x801EBB14: bne         $at, $zero, L_801EBB24
    if (ctx->r1 != 0) {
        // 0x801EBB18: slti        $at, $v0, 0x8E
        ctx->r1 = SIGNED(ctx->r2) < 0X8E ? 1 : 0;
            goto L_801EBB24;
    }
    // 0x801EBB18: slti        $at, $v0, 0x8E
    ctx->r1 = SIGNED(ctx->r2) < 0X8E ? 1 : 0;
    // 0x801EBB1C: bnel        $at, $zero, L_801EBB2C
    if (ctx->r1 != 0) {
        // 0x801EBB20: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_801EBB2C;
    }
    goto skip_2;
    // 0x801EBB20: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    skip_2:
L_801EBB24:
    // 0x801EBB24: sb          $t7, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r15;
    // 0x801EBB28: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
L_801EBB2C:
    // 0x801EBB2C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801EBB30: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801EBB34: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801EBB38: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801EBB3C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801EBB40: nop

    // 0x801EBB44: bc1fl       L_801EBC54
    if (!c1cs) {
        // 0x801EBB48: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_801EBC54;
    }
    goto skip_3;
    // 0x801EBB48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
    // 0x801EBB4C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801EBB50: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801EBB54: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801EBB58: jal         0x801EE530
    // 0x801EBB5C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_801EE530_5AA440(rdram, ctx);
        goto after_0;
    // 0x801EBB5C: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EBB60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801EBB64: jal         0x801EE28C
    // 0x801EBB68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_1;
    // 0x801EBB68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801EBB6C: lhu         $t9, 0x66($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X66);
    // 0x801EBB70: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801EBB74: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x801EBB78: sh          $t9, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r25;
    // 0x801EBB7C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x801EBB80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EBB84: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x801EBB88: lhu         $t1, 0x94($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X94);
    // 0x801EBB8C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801EBB90: addiu       $a2, $zero, 0xE0
    ctx->r6 = ADD32(0, 0XE0);
    // 0x801EBB94: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801EBB98: lbu         $t2, 0x60($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X60);
    // 0x801EBB9C: addiu       $a3, $zero, 0xE0
    ctx->r7 = ADD32(0, 0XE0);
    // 0x801EBBA0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801EBBA4: sb          $t3, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r11;
    // 0x801EBBA8: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801EBBAC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EBBB0: jal         0x80036D2C
    // 0x801EBBB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80036D2C_3792C(rdram, ctx);
        goto after_2;
    // 0x801EBBB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
    // 0x801EBBB8: jal         0x80038BC8
    // 0x801EBBBC: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801EBBBC: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    after_3:
    // 0x801EBBC0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x801EBBC4: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x801EBBC8: b           L_801EBC50
    // 0x801EBBCC: sb          $t6, 0x4C($t7)
    MEM_B(0X4C, ctx->r15) = ctx->r14;
        goto L_801EBC50;
    // 0x801EBBCC: sb          $t6, 0x4C($t7)
    MEM_B(0X4C, ctx->r15) = ctx->r14;
L_801EBBD0:
    // 0x801EBBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EBBD4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801EBBD8: jal         0x801EE330
    // 0x801EBBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_4;
    // 0x801EBBDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801EBBE0: beql        $v0, $zero, L_801EBC00
    if (ctx->r2 == 0) {
        // 0x801EBBE4: lbu         $t2, 0x2($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X2);
            goto L_801EBC00;
    }
    goto skip_4;
    // 0x801EBBE4: lbu         $t2, 0x2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2);
    skip_4:
    // 0x801EBBE8: lbu         $t9, 0x60($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X60);
    // 0x801EBBEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EBBF0: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
    // 0x801EBBF4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801EBBF8: sb          $t0, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r8;
    // 0x801EBBFC: lbu         $t2, 0x2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2);
L_801EBC00:
    // 0x801EBC00: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801EBC04: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801EBC08: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801EBC0C: lbu         $t3, 0x3($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3);
    // 0x801EBC10: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801EBC14: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801EBC18: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801EBC1C: lbu         $t4, 0x4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X4);
    // 0x801EBC20: or          $t1, $a2, $at
    ctx->r9 = ctx->r6 | ctx->r1;
    // 0x801EBC24: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x801EBC28: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801EBC2C: lbu         $t5, 0x5($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X5);
    // 0x801EBC30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801EBC34: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801EBC38: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801EBC3C: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
    // 0x801EBC40: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801EBC44: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x801EBC48: jal         0x801DC554
    // 0x801EBC4C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801EBC4C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_5:
L_801EBC50:
    // 0x801EBC50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801EBC54:
    // 0x801EBC54: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801EBC58: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801EBC5C: jr          $ra
    // 0x801EBC60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801EBC60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801F9988_5B5898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9988: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x801F998C: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801F9990: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801F9994: addiu       $a1, $a1, -0x39DC
    ctx->r5 = ADD32(ctx->r5, -0X39DC);
    // 0x801F9998: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F999C: lhu         $t6, 0x2E41($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2E41);
    // 0x801F99A0: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801F99A4: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F99A8: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F99AC: sb          $t6, 0x98($t7)
    MEM_B(0X98, ctx->r15) = ctx->r14;
    // 0x801F99B0: lw          $t8, 0x2E45($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2E45);
    // 0x801F99B4: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801F99B8: addiu       $t3, $v1, 0x7FFF
    ctx->r11 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F99BC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801F99C0: addiu       $t5, $v1, 0x7FFF
    ctx->r13 = ADD32(ctx->r3, 0X7FFF);
    // 0x801F99C4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x801F99C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F99CC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801F99D0: ori         $t0, $at, 0x8000
    ctx->r8 = ctx->r1 | 0X8000;
    // 0x801F99D4: sll         $t8, $zero, 5
    ctx->r24 = S32(0 << 5);
    // 0x801F99D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F99DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F99E0: swc1        $f6, 0xC0($t9)
    MEM_W(0XC0, ctx->r25) = ctx->f6.u32l;
    // 0x801F99E4: lw          $t1, 0x2E49($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2E49);
    // 0x801F99E8: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x801F99EC: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x801F99F0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801F99F4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x801F99F8: addiu       $t1, $t1, -0x3340
    ctx->r9 = ADD32(ctx->r9, -0X3340);
    // 0x801F99FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F9A00: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x801F9A04: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x801F9A08: swc1        $f10, 0xC4($t2)
    MEM_W(0XC4, ctx->r10) = ctx->f10.u32l;
    // 0x801F9A0C: lw          $t3, 0x2E4D($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2E4D);
    // 0x801F9A10: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x801F9A14: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x801F9A18: nop

    // 0x801F9A1C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F9A20: swc1        $f18, 0xC8($t4)
    MEM_W(0XC8, ctx->r12) = ctx->f18.u32l;
    // 0x801F9A24: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801F9A28: lhu         $t5, 0x2FE3($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X2FE3);
    // 0x801F9A2C: sb          $t5, 0xBC($t6)
    MEM_B(0XBC, ctx->r14) = ctx->r13;
    // 0x801F9A30: lhu         $t7, 0x7B10($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7B10);
    // 0x801F9A34: beq         $t7, $zero, L_801F9BA0
    if (ctx->r15 == 0) {
        // 0x801F9A38: nop
    
            goto L_801F9BA0;
    }
    // 0x801F9A38: nop

    // 0x801F9A3C: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x801F9A40: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x801F9A44: addiu       $a2, $a2, -0x3340
    ctx->r6 = ADD32(ctx->r6, -0X3340);
    // 0x801F9A48: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801F9A4C: lw          $t2, 0x2E54($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2E54);
L_801F9A50:
    // 0x801F9A50: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801F9A54: nop

    // 0x801F9A58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F9A5C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801F9A60: nop

    // 0x801F9A64: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9A68: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_0;
    // 0x801F9A68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x801F9A6C: lw          $t3, 0x2E58($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X2E58);
    // 0x801F9A70: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x801F9A74: nop

    // 0x801F9A78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F9A7C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801F9A80: nop

    // 0x801F9A84: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9A88: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_1;
    // 0x801F9A88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x801F9A8C: lw          $t4, 0x2E5C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X2E5C);
    // 0x801F9A90: lwc1        $f2, 0xC($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801F9A94: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x801F9A98: nop

    // 0x801F9A9C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F9AA0: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801F9AA4: nop

    // 0x801F9AA8: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9AAC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_2;
    // 0x801F9AAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x801F9AB0: lw          $t5, 0x2E60($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2E60);
    // 0x801F9AB4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x801F9AB8: nop

    // 0x801F9ABC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F9AC0: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x801F9AC4: nop

    // 0x801F9AC8: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9ACC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_3;
    // 0x801F9ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_3:
    // 0x801F9AD0: lw          $t6, 0x2E64($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2E64);
    // 0x801F9AD4: lwc1        $f2, 0x10($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801F9AD8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801F9ADC: nop

    // 0x801F9AE0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F9AE4: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x801F9AE8: nop

    // 0x801F9AEC: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9AF0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_4;
    // 0x801F9AF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_4:
    // 0x801F9AF4: lw          $t7, 0x2E68($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2E68);
    // 0x801F9AF8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x801F9AFC: nop

    // 0x801F9B00: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F9B04: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x801F9B08: nop

    // 0x801F9B0C: bc1fl       L_801F9B74
    if (!c1cs) {
        // 0x801F9B10: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801F9B74;
    }
    goto skip_5;
    // 0x801F9B10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_5:
    // 0x801F9B14: lhu         $t8, 0x2E50($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2E50);
    // 0x801F9B18: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x801F9B1C: andi        $t9, $t8, 0x7F
    ctx->r25 = ctx->r24 & 0X7F;
    // 0x801F9B20: sb          $t9, 0x98($t1)
    MEM_B(0X98, ctx->r9) = ctx->r25;
    // 0x801F9B24: lw          $t2, 0x2E6C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2E6C);
    // 0x801F9B28: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x801F9B2C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x801F9B30: nop

    // 0x801F9B34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801F9B38: swc1        $f6, 0xC0($t3)
    MEM_W(0XC0, ctx->r11) = ctx->f6.u32l;
    // 0x801F9B3C: lw          $t4, 0x2E70($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X2E70);
    // 0x801F9B40: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x801F9B44: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x801F9B48: nop

    // 0x801F9B4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801F9B50: swc1        $f10, 0xC4($t5)
    MEM_W(0XC4, ctx->r13) = ctx->f10.u32l;
    // 0x801F9B54: lw          $t6, 0x2E74($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2E74);
    // 0x801F9B58: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x801F9B5C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x801F9B60: nop

    // 0x801F9B64: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801F9B68: jr          $ra
    // 0x801F9B6C: swc1        $f18, 0xC8($t7)
    MEM_W(0XC8, ctx->r15) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801F9B6C: swc1        $f18, 0xC8($t7)
    MEM_W(0XC8, ctx->r15) = ctx->f18.u32l;
    // 0x801F9B70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801F9B74:
    // 0x801F9B74: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801F9B78: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x801F9B7C: beq         $at, $zero, L_801F9BA0
    if (ctx->r1 == 0) {
        // 0x801F9B80: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_801F9BA0;
    }
    // 0x801F9B80: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801F9B84: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801F9B88: mflo        $t9
    ctx->r25 = lo;
    // 0x801F9B8C: addu        $t1, $a2, $t9
    ctx->r9 = ADD32(ctx->r6, ctx->r25);
    // 0x801F9B90: addu        $v1, $t1, $t0
    ctx->r3 = ADD32(ctx->r9, ctx->r8);
    // 0x801F9B94: lhu         $t2, 0x2E50($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X2E50);
    // 0x801F9B98: bnel        $t2, $zero, L_801F9A50
    if (ctx->r10 != 0) {
        // 0x801F9B9C: lw          $t2, 0x2E54($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X2E54);
            goto L_801F9A50;
    }
    goto skip_6;
    // 0x801F9B9C: lw          $t2, 0x2E54($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X2E54);
    skip_6:
L_801F9BA0:
    // 0x801F9BA0: jr          $ra
    // 0x801F9BA4: nop

    TRACE_RETURN()
    return;
    // 0x801F9BA4: nop

;}
RECOMP_FUNC void func_801E0BF8_59CB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E0C00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E0C04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E0C08: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801E0C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E0C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E0C14: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801E0C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0C1C: beq         $v1, $zero, L_801E0C40
    if (ctx->r3 == 0) {
        // 0x801E0C20: nop
    
            goto L_801E0C40;
    }
    // 0x801E0C20: nop

    // 0x801E0C24: beq         $v1, $at, L_801E0C6C
    if (ctx->r3 == ctx->r1) {
        // 0x801E0C28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E0C6C;
    }
    // 0x801E0C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0C2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E0C30: beql        $v1, $at, L_801E0C9C
    if (ctx->r3 == ctx->r1) {
        // 0x801E0C34: sb          $zero, 0x69($v0)
        MEM_B(0X69, ctx->r2) = 0;
            goto L_801E0C9C;
    }
    goto skip_0;
    // 0x801E0C34: sb          $zero, 0x69($v0)
    MEM_B(0X69, ctx->r2) = 0;
    skip_0:
    // 0x801E0C38: b           L_801E0CD4
    // 0x801E0C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E0CD4;
    // 0x801E0C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0C40:
    // 0x801E0C40: jal         0x801DC9C8
    // 0x801E0C44: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    func_801DC9C8_5988D8(rdram, ctx);
        goto after_0;
    // 0x801E0C44: lbu         $a1, 0x60($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X60);
    after_0:
    // 0x801E0C48: lbu         $t6, 0x90($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X90);
    // 0x801E0C4C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E0C50: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801E0C54: sb          $zero, -0x2DA0($at)
    MEM_B(-0X2DA0, ctx->r1) = 0;
    // 0x801E0C58: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0C5C: lhu         $t7, 0x30($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X30);
    // 0x801E0C60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801E0C64: b           L_801E0CD0
    // 0x801E0C68: sh          $t8, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r24;
        goto L_801E0CD0;
    // 0x801E0C68: sh          $t8, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r24;
L_801E0C6C:
    // 0x801E0C6C: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
    // 0x801E0C70: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E0C74: addiu       $t0, $t0, -0x2DA0
    ctx->r8 = ADD32(ctx->r8, -0X2DA0);
    // 0x801E0C78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0C7C: jal         0x801DCA64
    // 0x801E0C80: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    func_801DCA64_598974(rdram, ctx);
        goto after_1;
    // 0x801E0C80: addu        $a2, $t9, $t0
    ctx->r6 = ADD32(ctx->r25, ctx->r8);
    after_1:
    // 0x801E0C84: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0C88: lhu         $t1, 0x30($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X30);
    // 0x801E0C8C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801E0C90: b           L_801E0CD0
    // 0x801E0C94: sh          $t2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r10;
        goto L_801E0CD0;
    // 0x801E0C94: sh          $t2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r10;
    // 0x801E0C98: sb          $zero, 0x69($v0)
    MEM_B(0X69, ctx->r2) = 0;
L_801E0C9C:
    // 0x801E0C9C: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0CA0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801E0CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E0CA8: sb          $t3, 0x84($t4)
    MEM_B(0X84, ctx->r12) = ctx->r11;
    // 0x801E0CAC: lbu         $t5, 0x30($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X30);
    // 0x801E0CB0: lw          $t7, 0x5C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0CB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E0CB8: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x801E0CBC: sb          $t6, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r14;
    // 0x801E0CC0: jal         0x801DACDC
    // 0x801E0CC4: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E0CC4: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    after_2:
    // 0x801E0CC8: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x801E0CCC: sb          $zero, 0x84($t8)
    MEM_B(0X84, ctx->r24) = 0;
L_801E0CD0:
    // 0x801E0CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E0CD4:
    // 0x801E0CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E0CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E0CDC: jr          $ra
    // 0x801E0CE0: nop

    TRACE_RETURN()
    return;
    // 0x801E0CE0: nop

;}
RECOMP_FUNC void func_801F8F0C_5B4E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F8F0C: lui         $a2, 0x8016
    ctx->r6 = S32(0X8016 << 16);
    // 0x801F8F10: addiu       $a2, $a2, -0x3A38
    ctx->r6 = ADD32(ctx->r6, -0X3A38);
    // 0x801F8F14: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801F8F18: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x801F8F1C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F8F20: addu        $v1, $v0, $a3
    ctx->r3 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8F24: lbu         $a0, 0x2DE4($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2DE4);
    // 0x801F8F28: bnel        $a0, $zero, L_801F8FA8
    if (ctx->r4 != 0) {
        // 0x801F8F2C: lui         $at, 0x4
        ctx->r1 = S32(0X4 << 16);
            goto L_801F8FA8;
    }
    goto skip_0;
    // 0x801F8F2C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    skip_0:
    // 0x801F8F30: lhu         $a1, 0x2DF2($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X2DF2);
    // 0x801F8F34: slti        $at, $a1, 0x5A
    ctx->r1 = SIGNED(ctx->r5) < 0X5A ? 1 : 0;
    // 0x801F8F38: bne         $at, $zero, L_801F8FA4
    if (ctx->r1 != 0) {
        // 0x801F8F3C: slti        $at, $a1, 0x80
        ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
            goto L_801F8FA4;
    }
    // 0x801F8F3C: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x801F8F40: beq         $at, $zero, L_801F8F78
    if (ctx->r1 == 0) {
        // 0x801F8F44: addiu       $t0, $zero, 0x5
        ctx->r8 = ADD32(0, 0X5);
            goto L_801F8F78;
    }
    // 0x801F8F44: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x801F8F48: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8F4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8F50: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801F8F54: sb          $t6, -0x520A($at)
    MEM_B(-0X520A, ctx->r1) = ctx->r14;
    // 0x801F8F58: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801F8F5C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8F60: addu        $t7, $v0, $a3
    ctx->r15 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8F64: lhu         $t8, 0x2DF4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DF4);
    // 0x801F8F68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8F6C: addiu       $t9, $t8, -0x5A
    ctx->r25 = ADD32(ctx->r24, -0X5A);
    // 0x801F8F70: jr          $ra
    // 0x801F8F74: sh          $t9, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x801F8F74: sh          $t9, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r25;
L_801F8F78:
    // 0x801F8F78: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8F7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8F80: sb          $t0, -0x520A($at)
    MEM_B(-0X520A, ctx->r1) = ctx->r8;
    // 0x801F8F84: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801F8F88: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8F8C: addu        $t1, $v0, $a3
    ctx->r9 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8F90: lhu         $t2, 0x2DF4($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X2DF4);
    // 0x801F8F94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8F98: addiu       $t3, $t2, -0x80
    ctx->r11 = ADD32(ctx->r10, -0X80);
    // 0x801F8F9C: jr          $ra
    // 0x801F8FA0: sh          $t3, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r11;
    TRACE_RETURN()
    return;
    // 0x801F8FA0: sh          $t3, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r11;
L_801F8FA4:
    // 0x801F8FA4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
L_801F8FA8:
    // 0x801F8FA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8FAC: sb          $a0, -0x520A($at)
    MEM_B(-0X520A, ctx->r1) = ctx->r4;
    // 0x801F8FB0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801F8FB4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F8FB8: addu        $t4, $v0, $a3
    ctx->r12 = ADD32(ctx->r2, ctx->r7);
    // 0x801F8FBC: lhu         $t5, 0x2DF4($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X2DF4);
    // 0x801F8FC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F8FC4: sh          $t5, -0x5208($at)
    MEM_H(-0X5208, ctx->r1) = ctx->r13;
    // 0x801F8FC8: jr          $ra
    // 0x801F8FCC: nop

    TRACE_RETURN()
    return;
    // 0x801F8FCC: nop

;}
RECOMP_FUNC void func_801F5BF0_5B1B00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5BF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5BFC: jal         0x801E43B0
    // 0x801F5C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E43B0_5A02C0(rdram, ctx);
        goto after_0;
    // 0x801F5C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F5C04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F5C08: beq         $v0, $zero, L_801F5C24
    if (ctx->r2 == 0) {
        // 0x801F5C0C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_801F5C24;
    }
    // 0x801F5C0C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801F5C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F5C14: beq         $v0, $at, L_801F5C34
    if (ctx->r2 == ctx->r1) {
        // 0x801F5C18: nop
    
            goto L_801F5C34;
    }
    // 0x801F5C18: nop

    // 0x801F5C1C: b           L_801F5C40
    // 0x801F5C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5C40;
    // 0x801F5C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5C24:
    // 0x801F5C24: jal         0x801F5C4C
    // 0x801F5C28: nop

    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_1;
    // 0x801F5C28: nop

    after_1:
    // 0x801F5C2C: b           L_801F5C40
    // 0x801F5C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5C40;
    // 0x801F5C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5C34:
    // 0x801F5C34: jal         0x801EB518
    // 0x801F5C38: nop

    func_801EB518_5A7428(rdram, ctx);
        goto after_2;
    // 0x801F5C38: nop

    after_2:
    // 0x801F5C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5C40:
    // 0x801F5C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5C44: jr          $ra
    // 0x801F5C48: nop

    TRACE_RETURN()
    return;
    // 0x801F5C48: nop

;}
RECOMP_FUNC void func_801E2E30_59ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2E30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2E38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E2E3C: jal         0x801E3834
    // 0x801E2E40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2E40: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x801E2E44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E2E48: jal         0x801E8964
    // 0x801E2E4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801E2E4C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x801E2E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2E58: jr          $ra
    // 0x801E2E5C: nop

    TRACE_RETURN()
    return;
    // 0x801E2E5C: nop

;}
RECOMP_FUNC void func_801D72D4_5931E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D72D4: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x801D72D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D72DC: sh          $zero, -0x2E10($at)
    MEM_H(-0X2E10, ctx->r1) = 0;
    // 0x801D72E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801D72E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D72E8: ori         $t6, $zero, 0xC000
    ctx->r14 = 0 | 0XC000;
    // 0x801D72EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D72F0: ori         $t7, $zero, 0xC000
    ctx->r15 = 0 | 0XC000;
    // 0x801D72F4: sw          $a0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r4;
    // 0x801D72F8: sh          $t6, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r14;
    // 0x801D72FC: sb          $zero, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = 0;
    // 0x801D7300: sh          $t7, -0x2E0E($at)
    MEM_H(-0X2E0E, ctx->r1) = ctx->r15;
    // 0x801D7304: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D7308: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x801D730C: lwc1        $f14, 0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801D7310: jal         0x80029E08
    // 0x801D7314: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801D7314: lwc1        $f12, 0x0($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X0);
    after_0:
    // 0x801D7318: bne         $v0, $zero, L_801D73D8
    if (ctx->r2 != 0) {
        // 0x801D731C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801D73D8;
    }
    // 0x801D731C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801D7320: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7324: sh          $zero, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = 0;
    // 0x801D7328: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801D732C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x801D7330: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801D7334: jal         0x8002A718
    // 0x801D7338: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_8002A718_2B318(rdram, ctx);
        goto after_1;
    // 0x801D7338: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_1:
    // 0x801D733C: lh          $t8, 0xA4($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XA4);
    // 0x801D7340: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D7344: bne         $t8, $at, L_801D73D0
    if (ctx->r24 != ctx->r1) {
        // 0x801D7348: nop
    
            goto L_801D73D0;
    }
    // 0x801D7348: nop

    // 0x801D734C: jal         0x8001D394
    // 0x801D7350: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_8001D394_1DF94(rdram, ctx);
        goto after_2;
    // 0x801D7350: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_2:
    // 0x801D7354: beq         $v0, $zero, L_801D73D0
    if (ctx->r2 == 0) {
        // 0x801D7358: lwc1        $f6, 0x94($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
            goto L_801D73D0;
    }
    // 0x801D7358: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D735C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7360: ldc1        $f4, -0x5320($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5320);
    // 0x801D7364: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D7368: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D736C: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801D7370: nop

    // 0x801D7374: bc1f        L_801D73D0
    if (!c1cs) {
        // 0x801D7378: nop
    
            goto L_801D73D0;
    }
    // 0x801D7378: nop

    // 0x801D737C: lwc1        $f10, -0x2E3C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D7380: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801D7384: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7388: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D738C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7390: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D7394: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7398: jal         0x80003A94
    // 0x801D739C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_3;
    // 0x801D739C: add.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f8.fl;
    after_3:
    // 0x801D73A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D73A4: sh          $v0, -0x2E0E($at)
    MEM_H(-0X2E0E, ctx->r1) = ctx->r2;
    // 0x801D73A8: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801D73AC: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D73B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D73B4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D73B8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x801D73BC: nop

    // 0x801D73C0: bc1f        L_801D73D0
    if (!c1cs) {
        // 0x801D73C4: nop
    
            goto L_801D73D0;
    }
    // 0x801D73C4: nop

    // 0x801D73C8: lhu         $a2, -0x2E0E($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2E0E);
    // 0x801D73CC: sh          $a2, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r6;
L_801D73D0:
    // 0x801D73D0: b           L_801D7484
    // 0x801D73D4: nop

        goto L_801D7484;
    // 0x801D73D4: nop

L_801D73D8:
    // 0x801D73D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D73DC: sh          $t9, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r25;
    // 0x801D73E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D73E4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D73E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D73EC: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801D73F0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x801D73F4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801D73F8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801D73FC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D7400: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D7404: jal         0x8002A458
    // 0x801D7408: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_4;
    // 0x801D7408: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801D740C: lh          $t0, 0xA4($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XA4);
    // 0x801D7410: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D7414: bne         $t0, $at, L_801D7484
    if (ctx->r8 != ctx->r1) {
        // 0x801D7418: nop
    
            goto L_801D7484;
    }
    // 0x801D7418: nop

    // 0x801D741C: jal         0x8001D394
    // 0x801D7420: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x801D7420: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    after_5:
    // 0x801D7424: beq         $v0, $zero, L_801D7484
    if (ctx->r2 == 0) {
        // 0x801D7428: lwc1        $f8, 0x94($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
            goto L_801D7484;
    }
    // 0x801D7428: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801D742C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7430: ldc1        $f4, -0x5318($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X5318);
    // 0x801D7434: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D7438: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801D743C: c.lt.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d < ctx->f10.d;
    // 0x801D7440: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801D7444: bc1f        L_801D7484
    if (!c1cs) {
        // 0x801D7448: nop
    
            goto L_801D7484;
    }
    // 0x801D7448: nop

    // 0x801D744C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D7450: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7454: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801D7458: nop

    // 0x801D745C: bc1f        L_801D7484
    if (!c1cs) {
        // 0x801D7460: nop
    
            goto L_801D7484;
    }
    // 0x801D7460: nop

    // 0x801D7464: lwc1        $f8, -0x2E3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D7468: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D746C: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7470: jal         0x80003A94
    // 0x801D7474: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_6;
    // 0x801D7474: add.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f0.fl;
    after_6:
    // 0x801D7478: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D747C: sh          $v0, -0x2E0E($at)
    MEM_H(-0X2E0E, ctx->r1) = ctx->r2;
    // 0x801D7480: sh          $v0, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r2;
L_801D7484:
    // 0x801D7484: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801D7488: lw          $t1, -0x39FC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X39FC);
    // 0x801D748C: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    // 0x801D7490: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7494: lbu         $t2, 0x61($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X61);
    // 0x801D7498: bnel        $t2, $zero, L_801D75B8
    if (ctx->r10 != 0) {
        // 0x801D749C: lhu         $a2, 0x6A($sp)
        ctx->r6 = MEM_HU(ctx->r29, 0X6A);
            goto L_801D75B8;
    }
    goto skip_0;
    // 0x801D749C: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    skip_0:
    // 0x801D74A0: lwc1        $f4, -0x2E34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D74A4: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D74A8: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x801D74AC: sh          $a2, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r6;
    // 0x801D74B0: sub.s       $f14, $f4, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D74B4: jal         0x80003DC0
    // 0x801D74B8: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    func_80003DC0_49C0(rdram, ctx);
        goto after_7;
    // 0x801D74B8: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x801D74BC: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801D74C0: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801D74C4: mul.s       $f12, $f0, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x801D74C8: jal         0x80003A94
    // 0x801D74CC: nop

    func_80003A94_4694(rdram, ctx);
        goto after_8;
    // 0x801D74CC: nop

    after_8:
    // 0x801D74D0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D74D4: lhu         $t3, -0x2E2C($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X2E2C);
    // 0x801D74D8: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x801D74DC: subu        $a0, $t3, $v0
    ctx->r4 = SUB32(ctx->r11, ctx->r2);
    // 0x801D74E0: andi        $t4, $a0, 0xFFFF
    ctx->r12 = ctx->r4 & 0XFFFF;
    // 0x801D74E4: jal         0x80003DC0
    // 0x801D74E8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_80003DC0_49C0(rdram, ctx);
        goto after_9;
    // 0x801D74E8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_9:
    // 0x801D74EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D74F0: lwc1        $f10, -0x2E30($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D74F4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D74F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D74FC: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801D7500: lwc1        $f4, -0x2E3C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D7504: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801D7508: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x801D750C: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x801D7510: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x801D7514: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x801D7518: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x801D751C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x801D7520: jal         0x80032850
    // 0x801D7524: nop

    func_80032850_33450(rdram, ctx);
        goto after_10;
    // 0x801D7524: nop

    after_10:
    // 0x801D7528: lh          $t5, 0xEC($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XEC);
    // 0x801D752C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D7530: bnel        $t5, $at, L_801D75B8
    if (ctx->r13 != ctx->r1) {
        // 0x801D7534: lhu         $a2, 0x6A($sp)
        ctx->r6 = MEM_HU(ctx->r29, 0X6A);
            goto L_801D75B8;
    }
    goto skip_1;
    // 0x801D7534: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    skip_1:
    // 0x801D7538: jal         0x80003DC0
    // 0x801D753C: addiu       $a0, $zero, 0x3000
    ctx->r4 = ADD32(0, 0X3000);
    func_80003DC0_49C0(rdram, ctx);
        goto after_11;
    // 0x801D753C: addiu       $a0, $zero, 0x3000
    ctx->r4 = ADD32(0, 0X3000);
    after_11:
    // 0x801D7540: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7544: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7548: lwc1        $f2, 0xD0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801D754C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D7550: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x801D7554: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801D7558: nop

    // 0x801D755C: bc1fl       L_801D75B8
    if (!c1cs) {
        // 0x801D7560: lhu         $a2, 0x6A($sp)
        ctx->r6 = MEM_HU(ctx->r29, 0X6A);
            goto L_801D75B8;
    }
    goto skip_2;
    // 0x801D7560: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
    skip_2:
    // 0x801D7564: jal         0x80003A94
    // 0x801D7568: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_12;
    // 0x801D7568: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    after_12:
    // 0x801D756C: lhu         $t6, 0x4A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4A);
    // 0x801D7570: lhu         $t0, 0x6A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6A);
    // 0x801D7574: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801D7578: addiu       $t8, $t7, 0x4000
    ctx->r24 = ADD32(ctx->r15, 0X4000);
    // 0x801D757C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801D7580: slti        $at, $t9, 0x7001
    ctx->r1 = SIGNED(ctx->r25) < 0X7001 ? 1 : 0;
    // 0x801D7584: bne         $at, $zero, L_801D7590
    if (ctx->r1 != 0) {
        // 0x801D7588: andi        $a0, $t7, 0xFFFF
        ctx->r4 = ctx->r15 & 0XFFFF;
            goto L_801D7590;
    }
    // 0x801D7588: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    // 0x801D758C: addiu       $a0, $zero, 0x3000
    ctx->r4 = ADD32(0, 0X3000);
L_801D7590:
    // 0x801D7590: addiu       $t1, $t0, 0x4000
    ctx->r9 = ADD32(ctx->r8, 0X4000);
    // 0x801D7594: addiu       $t3, $a0, 0x4000
    ctx->r11 = ADD32(ctx->r4, 0X4000);
    // 0x801D7598: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x801D759C: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x801D75A0: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x801D75A4: beq         $at, $zero, L_801D75B4
    if (ctx->r1 == 0) {
        // 0x801D75A8: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801D75B4;
    }
    // 0x801D75A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D75AC: sh          $a0, -0x2E0E($at)
    MEM_H(-0X2E0E, ctx->r1) = ctx->r4;
    // 0x801D75B0: sh          $a0, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r4;
L_801D75B4:
    // 0x801D75B4: lhu         $a2, 0x6A($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X6A);
L_801D75B8:
    // 0x801D75B8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D75BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D75C0: addiu       $v0, $a2, 0x4000
    ctx->r2 = ADD32(ctx->r6, 0X4000);
    // 0x801D75C4: andi        $t5, $v0, 0xFFFF
    ctx->r13 = ctx->r2 & 0XFFFF;
    // 0x801D75C8: slti        $at, $t5, 0x7801
    ctx->r1 = SIGNED(ctx->r13) < 0X7801 ? 1 : 0;
    // 0x801D75CC: bne         $at, $zero, L_801D75DC
    if (ctx->r1 != 0) {
        // 0x801D75D0: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_801D75DC;
    }
    // 0x801D75D0: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x801D75D4: addiu       $a2, $zero, 0x3800
    ctx->r6 = ADD32(0, 0X3800);
    // 0x801D75D8: addiu       $v0, $zero, 0x7800
    ctx->r2 = ADD32(0, 0X7800);
L_801D75DC:
    // 0x801D75DC: slti        $at, $v0, 0x800
    ctx->r1 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x801D75E0: beq         $at, $zero, L_801D75EC
    if (ctx->r1 == 0) {
        // 0x801D75E4: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_801D75EC;
    }
    // 0x801D75E4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D75E8: ori         $a2, $zero, 0xC800
    ctx->r6 = 0 | 0XC800;
L_801D75EC:
    // 0x801D75EC: lhu         $v1, -0x2E2C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2E2C);
    // 0x801D75F0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x801D75F4: addiu       $v1, $v1, 0x4000
    ctx->r3 = ADD32(ctx->r3, 0X4000);
    // 0x801D75F8: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x801D75FC: slti        $at, $t6, 0x7801
    ctx->r1 = SIGNED(ctx->r14) < 0X7801 ? 1 : 0;
    // 0x801D7600: bne         $at, $zero, L_801D7610
    if (ctx->r1 != 0) {
        // 0x801D7604: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_801D7610;
    }
    // 0x801D7604: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801D7608: addiu       $a2, $zero, 0x3800
    ctx->r6 = ADD32(0, 0X3800);
    // 0x801D760C: sb          $t7, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r15;
L_801D7610:
    // 0x801D7610: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x801D7614: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801D7618: addiu       $t9, $v0, 0x4000
    ctx->r25 = ADD32(ctx->r2, 0X4000);
    // 0x801D761C: bne         $t8, $zero, L_801D7630
    if (ctx->r24 != 0) {
        // 0x801D7620: andi        $t0, $t9, 0xFFFF
        ctx->r8 = ctx->r25 & 0XFFFF;
            goto L_801D7630;
    }
    // 0x801D7620: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x801D7624: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x801D7628: beql        $at, $zero, L_801D7710
    if (ctx->r1 == 0) {
        // 0x801D762C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D7710;
    }
    goto skip_3;
    // 0x801D762C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_3:
L_801D7630:
    // 0x801D7630: lhu         $t1, -0x2E0E($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2E0E);
    // 0x801D7634: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D7638: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D763C: bnel        $t1, $v0, L_801D764C
    if (ctx->r9 != ctx->r2) {
        // 0x801D7640: lw          $v0, 0x108($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X108);
            goto L_801D764C;
    }
    goto skip_4;
    // 0x801D7640: lw          $v0, 0x108($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X108);
    skip_4:
    // 0x801D7644: sh          $t3, -0x2E10($at)
    MEM_H(-0X2E10, ctx->r1) = ctx->r11;
    // 0x801D7648: lw          $v0, 0x108($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X108);
L_801D764C:
    // 0x801D764C: lhu         $t2, 0xBA($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XBA);
    // 0x801D7650: andi        $t4, $t2, 0x8000
    ctx->r12 = ctx->r10 & 0X8000;
    // 0x801D7654: beq         $t4, $zero, L_801D7660
    if (ctx->r12 == 0) {
        // 0x801D7658: nop
    
            goto L_801D7660;
    }
    // 0x801D7658: nop

    // 0x801D765C: sh          $zero, 0xBA($v0)
    MEM_H(0XBA, ctx->r2) = 0;
L_801D7660:
    // 0x801D7660: jal         0x80003D88
    // 0x801D7664: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    func_80003D88_4988(rdram, ctx);
        goto after_13;
    // 0x801D7664: andi        $a0, $a2, 0xFFFF
    ctx->r4 = ctx->r6 & 0XFFFF;
    after_13:
    // 0x801D7668: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D766C: lwc1        $f2, -0x2E34($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X2E34);
    // 0x801D7670: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801D7674: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7678: lwc1        $f16, -0x2E40($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E40);
    // 0x801D767C: mul.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x801D7680: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7684: lwc1        $f14, -0x2E30($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X2E30);
    // 0x801D7688: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D768C: addiu       $t5, $zero, 0x3F00
    ctx->r13 = ADD32(0, 0X3F00);
    // 0x801D7690: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D7694: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x801D7698: mul.s       $f10, $f12, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x801D769C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801D76A0: addiu       $a2, $sp, 0xFC
    ctx->r6 = ADD32(ctx->r29, 0XFC);
    // 0x801D76A4: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x801D76A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801D76AC: div.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D76B0: lwc1        $f10, -0x2E3C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X2E3C);
    // 0x801D76B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D76B8: lwc1        $f18, -0x2E38($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E38);
    // 0x801D76BC: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x801D76C0: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x801D76C4: swc1        $f8, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f8.u32l;
    // 0x801D76C8: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x801D76CC: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x801D76D0: div.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801D76D4: sub.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x801D76D8: jal         0x801D56D0
    // 0x801D76DC: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    func_801D56D0_5915E0(rdram, ctx);
        goto after_14;
    // 0x801D76DC: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x801D76E0: beq         $v0, $zero, L_801D770C
    if (ctx->r2 == 0) {
        // 0x801D76E4: lui         $t6, 0x8021
        ctx->r14 = S32(0X8021 << 16);
            goto L_801D770C;
    }
    // 0x801D76E4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D76E8: lhu         $t6, -0x2E14($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X2E14);
    // 0x801D76EC: beql        $t6, $zero, L_801D7710
    if (ctx->r14 == 0) {
        // 0x801D76F0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801D7710;
    }
    goto skip_5;
    // 0x801D76F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_5:
    // 0x801D76F4: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D76F8: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D76FC: jal         0x80029E08
    // 0x801D7700: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    func_80029E08_2AA08(rdram, ctx);
        goto after_15;
    // 0x801D7700: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    after_15:
    // 0x801D7704: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7708: sh          $v0, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r2;
L_801D770C:
    // 0x801D770C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801D7710:
    // 0x801D7710: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D7714: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    // 0x801D7718: jr          $ra
    // 0x801D771C: nop

    TRACE_RETURN()
    return;
    // 0x801D771C: nop

;}
RECOMP_FUNC void func_801D3A04_58F914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3A04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D3A08: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D3A0C: lbu         $v1, -0x3830($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3830);
    // 0x801D3A10: sdc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X30, ctx->r29);
    // 0x801D3A14: sdc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X28, ctx->r29);
    // 0x801D3A18: sdc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X20, ctx->r29);
    // 0x801D3A1C: sdc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X18, ctx->r29);
    // 0x801D3A20: sdc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X10, ctx->r29);
    // 0x801D3A24: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801D3A28: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D3A2C: blez        $v1, L_801D3B8C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D3A30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D3B8C;
    }
    // 0x801D3A30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3A34: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D3A38: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D3A3C: addiu       $t3, $t3, -0x3350
    ctx->r11 = ADD32(ctx->r11, -0X3350);
    // 0x801D3A40: addiu       $t4, $t4, -0x3260
    ctx->r12 = ADD32(ctx->r12, -0X3260);
    // 0x801D3A44: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x801D3A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801D3A4C:
    // 0x801D3A4C: bne         $a0, $a1, L_801D3A74
    if (ctx->r4 != ctx->r5) {
        // 0x801D3A50: addiu       $a2, $a1, 0x1
        ctx->r6 = ADD32(ctx->r5, 0X1);
            goto L_801D3A74;
    }
    // 0x801D3A50: addiu       $a2, $a1, 0x1
    ctx->r6 = ADD32(ctx->r5, 0X1);
    // 0x801D3A54: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x801D3A58: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x801D3A5C: lbu         $t8, -0x8($t7)
    ctx->r24 = MEM_BU(ctx->r15, -0X8);
    // 0x801D3A60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D3A64: beq         $t8, $zero, L_801D3B8C
    if (ctx->r24 == 0) {
        // 0x801D3A68: nop
    
            goto L_801D3B8C;
    }
    // 0x801D3A68: nop

    // 0x801D3A6C: b           L_801D3A80
    // 0x801D3A70: lwc1        $f12, 0xD8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0XD8);
        goto L_801D3A80;
    // 0x801D3A70: lwc1        $f12, 0xD8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0XD8);
L_801D3A74:
    // 0x801D3A74: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x801D3A78: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x801D3A7C: lwc1        $f12, 0xD8($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0XD8);
L_801D3A80:
    // 0x801D3A80: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D3A84: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x801D3A88: lwc1        $f14, 0x0($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X0);
    // 0x801D3A8C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x801D3A90: nop

    // 0x801D3A94: bc1fl       L_801D3B7C
    if (!c1cs) {
        // 0x801D3A98: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D3B7C;
    }
    goto skip_0;
    // 0x801D3A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x801D3A9C: beq         $v0, $zero, L_801D3AB4
    if (ctx->r2 == 0) {
        // 0x801D3AA0: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_801D3AB4;
    }
    // 0x801D3AA0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x801D3AA4: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x801D3AA8: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D3AAC: b           L_801D3AC0
    // 0x801D3AB0: lwc1        $f2, -0x4($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, -0X4);
        goto L_801D3AC0;
    // 0x801D3AB0: lwc1        $f2, -0x4($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, -0X4);
L_801D3AB4:
    // 0x801D3AB4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D3AB8: nop

    // 0x801D3ABC: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
L_801D3AC0:
    // 0x801D3AC0: beq         $v0, $zero, L_801D3AD4
    if (ctx->r2 == 0) {
        // 0x801D3AC4: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_801D3AD4;
    }
    // 0x801D3AC4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x801D3AC8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x801D3ACC: b           L_801D3AD8
    // 0x801D3AD0: lwc1        $f0, -0x4($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, -0X4);
        goto L_801D3AD8;
    // 0x801D3AD0: lwc1        $f0, -0x4($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, -0X4);
L_801D3AD4:
    // 0x801D3AD4: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
L_801D3AD8:
    // 0x801D3AD8: sub.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x801D3ADC: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x801D3AE0: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x801D3AE4: sub.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x801D3AE8: addu        $t1, $t3, $t9
    ctx->r9 = ADD32(ctx->r11, ctx->r25);
    // 0x801D3AEC: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x801D3AF0: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x801D3AF4: div.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801D3AF8: lh          $t6, 0x2($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X2);
    // 0x801D3AFC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801D3B00: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D3B04: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801D3B08: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3B0C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3B10: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x801D3B14: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x801D3B18: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801D3B1C: swc1        $f10, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->f10.u32l;
    // 0x801D3B20: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
    // 0x801D3B24: lh          $t8, 0x4($t1)
    ctx->r24 = MEM_H(ctx->r9, 0X4);
    // 0x801D3B28: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801D3B2C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801D3B30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D3B34: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3B38: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x801D3B3C: mul.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x801D3B40: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D3B44: swc1        $f6, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->f6.u32l;
    // 0x801D3B48: lh          $t7, 0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X6);
    // 0x801D3B4C: lh          $t6, 0x6($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X6);
    // 0x801D3B50: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801D3B54: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x801D3B58: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3B5C: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D3B60: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x801D3B64: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x801D3B68: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x801D3B6C: swc1        $f10, 0xC8($a3)
    MEM_W(0XC8, ctx->r7) = ctx->f10.u32l;
    // 0x801D3B70: b           L_801D3B8C
    // 0x801D3B74: lbu         $v1, -0x3830($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3830);
        goto L_801D3B8C;
    // 0x801D3B74: lbu         $v1, -0x3830($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3830);
    // 0x801D3B78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D3B7C:
    // 0x801D3B7C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801D3B80: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D3B84: bne         $at, $zero, L_801D3A4C
    if (ctx->r1 != 0) {
        // 0x801D3B88: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801D3A4C;
    }
    // 0x801D3B88: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D3B8C:
    // 0x801D3B8C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801D3B90: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801D3B94: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D3B98: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D3B9C: addiu       $t4, $t4, -0x3260
    ctx->r12 = ADD32(ctx->r12, -0X3260);
    // 0x801D3BA0: bne         $at, $zero, L_801D3BB0
    if (ctx->r1 != 0) {
        // 0x801D3BA4: addiu       $t3, $t3, -0x3350
        ctx->r11 = ADD32(ctx->r11, -0X3350);
            goto L_801D3BB0;
    }
    // 0x801D3BA4: addiu       $t3, $t3, -0x3350
    ctx->r11 = ADD32(ctx->r11, -0X3350);
    // 0x801D3BA8: b           L_801D4058
    // 0x801D3BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4058;
    // 0x801D3BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3BB0:
    // 0x801D3BB0: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x801D3BB4: addiu       $t5, $t5, -0x2F80
    ctx->r13 = ADD32(ctx->r13, -0X2F80);
    // 0x801D3BB8: sb          $zero, 0x0($t5)
    MEM_B(0X0, ctx->r13) = 0;
    // 0x801D3BBC: blez        $v1, L_801D4054
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D3BC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4054;
    }
    // 0x801D3BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3BC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D3BC8: ldc1        $f24, -0x53C8($at)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r1, -0X53C8);
    // 0x801D3BCC: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    // 0x801D3BD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801D3BD4:
    // 0x801D3BD4: bne         $a0, $a1, L_801D3BF8
    if (ctx->r4 != ctx->r5) {
        // 0x801D3BD8: sll         $t9, $v1, 3
        ctx->r25 = S32(ctx->r3 << 3);
            goto L_801D3BF8;
    }
    // 0x801D3BD8: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x801D3BDC: addu        $t6, $t3, $t9
    ctx->r14 = ADD32(ctx->r11, ctx->r25);
    // 0x801D3BE0: lbu         $t7, -0x8($t6)
    ctx->r15 = MEM_BU(ctx->r14, -0X8);
    // 0x801D3BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D3BE8: beql        $t7, $zero, L_801D4058
    if (ctx->r15 == 0) {
        // 0x801D3BEC: lbu         $v0, 0x0($t5)
        ctx->r2 = MEM_BU(ctx->r13, 0X0);
            goto L_801D4058;
    }
    goto skip_1;
    // 0x801D3BEC: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
    skip_1:
    // 0x801D3BF0: b           L_801D3C08
    // 0x801D3BF4: lwc1        $f0, 0xC0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC0);
        goto L_801D3C08;
    // 0x801D3BF4: lwc1        $f0, 0xC0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC0);
L_801D3BF8:
    // 0x801D3BF8: addiu       $a2, $a1, 0x1
    ctx->r6 = ADD32(ctx->r5, 0X1);
    // 0x801D3BFC: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x801D3C00: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x801D3C04: lwc1        $f0, 0xC0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC0);
L_801D3C08:
    // 0x801D3C08: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x801D3C0C: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x801D3C10: addu        $t1, $t3, $t6
    ctx->r9 = ADD32(ctx->r11, ctx->r14);
    // 0x801D3C14: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x801D3C18: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x801D3C1C: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x801D3C20: subu        $t8, $t7, $t2
    ctx->r24 = SUB32(ctx->r15, ctx->r10);
    // 0x801D3C24: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801D3C28: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801D3C2C: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3C30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D3C34: c.le.s      $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f26.fl <= ctx->f12.fl;
    // 0x801D3C38: sub.s       $f18, $f0, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801D3C3C: bc1fl       L_801D3C50
    if (!c1cs) {
        // 0x801D3C40: neg.s       $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
            goto L_801D3C50;
    }
    goto skip_2;
    // 0x801D3C40: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
    skip_2:
    // 0x801D3C44: b           L_801D3C50
    // 0x801D3C48: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_801D3C50;
    // 0x801D3C48: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x801D3C4C: neg.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = -ctx->f18.fl;
L_801D3C50:
    // 0x801D3C50: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x801D3C54: nop

    // 0x801D3C58: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3C5C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_3;
    // 0x801D3C5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_3:
    // 0x801D3C60: lh          $a2, 0x4($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X4);
    // 0x801D3C64: lh          $t9, 0x4($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X4);
    // 0x801D3C68: lwc1        $f4, 0xC4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC4);
    // 0x801D3C6C: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x801D3C70: subu        $t6, $t9, $a2
    ctx->r14 = SUB32(ctx->r25, ctx->r6);
    // 0x801D3C74: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x801D3C78: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D3C7C: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3C80: sub.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801D3C84: c.le.s      $f26, $f14
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f26.fl <= ctx->f14.fl;
    // 0x801D3C88: nop

    // 0x801D3C8C: bc1fl       L_801D3CA0
    if (!c1cs) {
        // 0x801D3C90: neg.s       $f0, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
            goto L_801D3CA0;
    }
    goto skip_4;
    // 0x801D3C90: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
    skip_4:
    // 0x801D3C94: b           L_801D3CA0
    // 0x801D3C98: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
        goto L_801D3CA0;
    // 0x801D3C98: mov.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.fl = ctx->f20.fl;
    // 0x801D3C9C: neg.s       $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = -ctx->f20.fl;
L_801D3CA0:
    // 0x801D3CA0: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x801D3CA4: nop

    // 0x801D3CA8: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3CAC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_5;
    // 0x801D3CAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_5:
    // 0x801D3CB0: lh          $a2, 0x6($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X6);
    // 0x801D3CB4: lh          $t7, 0x6($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X6);
    // 0x801D3CB8: lwc1        $f6, 0xC8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x801D3CBC: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x801D3CC0: subu        $t8, $t7, $a2
    ctx->r24 = SUB32(ctx->r15, ctx->r6);
    // 0x801D3CC4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x801D3CC8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D3CCC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D3CD0: sub.s       $f22, $f6, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D3CD4: c.le.s      $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f26.fl <= ctx->f16.fl;
    // 0x801D3CD8: nop

    // 0x801D3CDC: bc1fl       L_801D3CF0
    if (!c1cs) {
        // 0x801D3CE0: neg.s       $f0, $f22
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
            goto L_801D3CF0;
    }
    goto skip_6;
    // 0x801D3CE0: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
    skip_6:
    // 0x801D3CE4: b           L_801D3CF0
    // 0x801D3CE8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
        goto L_801D3CF0;
    // 0x801D3CE8: mov.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    ctx->f0.fl = ctx->f22.fl;
    // 0x801D3CEC: neg.s       $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = -ctx->f22.fl;
L_801D3CF0:
    // 0x801D3CF0: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x801D3CF4: nop

    // 0x801D3CF8: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3CFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_7;
    // 0x801D3CFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_7:
    // 0x801D3D00: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
    // 0x801D3D04: nop

    // 0x801D3D08: bc1fl       L_801D3D1C
    if (!c1cs) {
        // 0x801D3D0C: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_801D3D1C;
    }
    goto skip_8;
    // 0x801D3D0C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_8:
    // 0x801D3D10: b           L_801D3D1C
    // 0x801D3D14: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_801D3D1C;
    // 0x801D3D14: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x801D3D18: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_801D3D1C:
    // 0x801D3D1C: c.lt.s      $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f16.fl < ctx->f26.fl;
    // 0x801D3D20: nop

    // 0x801D3D24: bc1fl       L_801D3D38
    if (!c1cs) {
        // 0x801D3D28: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801D3D38;
    }
    goto skip_9;
    // 0x801D3D28: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_9:
    // 0x801D3D2C: b           L_801D3D38
    // 0x801D3D30: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801D3D38;
    // 0x801D3D30: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801D3D34: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801D3D38:
    // 0x801D3D38: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D3D3C: nop

    // 0x801D3D40: bc1fl       L_801D3E94
    if (!c1cs) {
        // 0x801D3D44: c.lt.s      $f16, $f26
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f16.fl < ctx->f26.fl;
            goto L_801D3E94;
    }
    goto skip_10;
    // 0x801D3D44: c.lt.s      $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f16.fl < ctx->f26.fl;
    skip_10:
    // 0x801D3D48: c.lt.s      $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f12.fl < ctx->f26.fl;
    // 0x801D3D4C: nop

    // 0x801D3D50: bc1fl       L_801D3D64
    if (!c1cs) {
        // 0x801D3D54: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_801D3D64;
    }
    goto skip_11;
    // 0x801D3D54: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_11:
    // 0x801D3D58: b           L_801D3D64
    // 0x801D3D5C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
        goto L_801D3D64;
    // 0x801D3D5C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x801D3D60: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_801D3D64:
    // 0x801D3D64: c.lt.s      $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f14.fl < ctx->f26.fl;
    // 0x801D3D68: nop

    // 0x801D3D6C: bc1fl       L_801D3D80
    if (!c1cs) {
        // 0x801D3D70: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_801D3D80;
    }
    goto skip_12;
    // 0x801D3D70: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_12:
    // 0x801D3D74: b           L_801D3D80
    // 0x801D3D78: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_801D3D80;
    // 0x801D3D78: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x801D3D7C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_801D3D80:
    // 0x801D3D80: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D3D84: nop

    // 0x801D3D88: bc1fl       L_801D3E14
    if (!c1cs) {
        // 0x801D3D8C: div.s       $f2, $f20, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
            goto L_801D3E14;
    }
    goto skip_13;
    // 0x801D3D8C: div.s       $f2, $f20, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
    skip_13:
    // 0x801D3D90: div.s       $f2, $f18, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x801D3D94: mul.s       $f30, $f14, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x801D3D98: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x801D3D9C: c.lt.s      $f30, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f30.fl < ctx->f20.fl;
    // 0x801D3DA0: nop

    // 0x801D3DA4: bc1fl       L_801D3DBC
    if (!c1cs) {
        // 0x801D3DA8: sub.s       $f0, $f30, $f20
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f20.fl;
            goto L_801D3DBC;
    }
    goto skip_14;
    // 0x801D3DA8: sub.s       $f0, $f30, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f20.fl;
    skip_14:
    // 0x801D3DAC: sub.s       $f0, $f30, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f20.fl;
    // 0x801D3DB0: b           L_801D3DBC
    // 0x801D3DB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D3DBC;
    // 0x801D3DB4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D3DB8: sub.s       $f0, $f30, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f20.fl;
L_801D3DBC:
    // 0x801D3DBC: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D3DC0: c.le.d      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.d <= ctx->f10.d;
    // 0x801D3DC4: nop

    // 0x801D3DC8: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3DCC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_15;
    // 0x801D3DCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_15:
    // 0x801D3DD0: mul.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801D3DD4: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D3DD8: nop

    // 0x801D3DDC: bc1fl       L_801D3DF4
    if (!c1cs) {
        // 0x801D3DE0: sub.s       $f2, $f0, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
            goto L_801D3DF4;
    }
    goto skip_16;
    // 0x801D3DE0: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    skip_16:
    // 0x801D3DE4: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x801D3DE8: b           L_801D3DF4
    // 0x801D3DEC: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D3DF4;
    // 0x801D3DEC: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D3DF0: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
L_801D3DF4:
    // 0x801D3DF4: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801D3DF8: c.le.d      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.d <= ctx->f4.d;
    // 0x801D3DFC: nop

    // 0x801D3E00: bc1fl       L_801D3FD4
    if (!c1cs) {
        // 0x801D3E04: lbu         $a2, 0x0($t5)
        ctx->r6 = MEM_BU(ctx->r13, 0X0);
            goto L_801D3FD4;
    }
    goto skip_17;
    // 0x801D3E04: lbu         $a2, 0x0($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X0);
    skip_17:
    // 0x801D3E08: b           L_801D4044
    // 0x801D3E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D4044;
    // 0x801D3E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D3E10: div.s       $f2, $f20, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
L_801D3E14:
    // 0x801D3E14: mul.s       $f30, $f12, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x801D3E18: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x801D3E1C: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x801D3E20: nop

    // 0x801D3E24: bc1fl       L_801D3E3C
    if (!c1cs) {
        // 0x801D3E28: sub.s       $f0, $f30, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
            goto L_801D3E3C;
    }
    goto skip_18;
    // 0x801D3E28: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    skip_18:
    // 0x801D3E2C: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    // 0x801D3E30: b           L_801D3E3C
    // 0x801D3E34: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D3E3C;
    // 0x801D3E34: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D3E38: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
L_801D3E3C:
    // 0x801D3E3C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801D3E40: c.le.d      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.d <= ctx->f6.d;
    // 0x801D3E44: nop

    // 0x801D3E48: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3E4C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_19;
    // 0x801D3E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_19:
    // 0x801D3E50: mul.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801D3E54: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D3E58: nop

    // 0x801D3E5C: bc1fl       L_801D3E74
    if (!c1cs) {
        // 0x801D3E60: sub.s       $f2, $f0, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
            goto L_801D3E74;
    }
    goto skip_20;
    // 0x801D3E60: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    skip_20:
    // 0x801D3E64: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x801D3E68: b           L_801D3E74
    // 0x801D3E6C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D3E74;
    // 0x801D3E6C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D3E70: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
L_801D3E74:
    // 0x801D3E74: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801D3E78: c.le.d      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.d <= ctx->f8.d;
    // 0x801D3E7C: nop

    // 0x801D3E80: bc1fl       L_801D3FD4
    if (!c1cs) {
        // 0x801D3E84: lbu         $a2, 0x0($t5)
        ctx->r6 = MEM_BU(ctx->r13, 0X0);
            goto L_801D3FD4;
    }
    goto skip_21;
    // 0x801D3E84: lbu         $a2, 0x0($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X0);
    skip_21:
    // 0x801D3E88: b           L_801D4044
    // 0x801D3E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D4044;
    // 0x801D3E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D3E90: c.lt.s      $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f16.fl < ctx->f26.fl;
L_801D3E94:
    // 0x801D3E94: nop

    // 0x801D3E98: bc1fl       L_801D3EAC
    if (!c1cs) {
        // 0x801D3E9C: mov.s       $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
            goto L_801D3EAC;
    }
    goto skip_22;
    // 0x801D3E9C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    skip_22:
    // 0x801D3EA0: b           L_801D3EAC
    // 0x801D3EA4: neg.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = -ctx->f16.fl;
        goto L_801D3EAC;
    // 0x801D3EA4: neg.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = -ctx->f16.fl;
    // 0x801D3EA8: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_801D3EAC:
    // 0x801D3EAC: c.lt.s      $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f14.fl < ctx->f26.fl;
    // 0x801D3EB0: nop

    // 0x801D3EB4: bc1fl       L_801D3EC8
    if (!c1cs) {
        // 0x801D3EB8: mov.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
            goto L_801D3EC8;
    }
    goto skip_23;
    // 0x801D3EB8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    skip_23:
    // 0x801D3EBC: b           L_801D3EC8
    // 0x801D3EC0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_801D3EC8;
    // 0x801D3EC0: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x801D3EC4: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_801D3EC8:
    // 0x801D3EC8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801D3ECC: nop

    // 0x801D3ED0: bc1fl       L_801D3F5C
    if (!c1cs) {
        // 0x801D3ED4: div.s       $f2, $f20, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
            goto L_801D3F5C;
    }
    goto skip_24;
    // 0x801D3ED4: div.s       $f2, $f20, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
    skip_24:
    // 0x801D3ED8: div.s       $f2, $f22, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f22.fl, ctx->f16.fl);
    // 0x801D3EDC: mul.s       $f30, $f12, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x801D3EE0: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x801D3EE4: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x801D3EE8: nop

    // 0x801D3EEC: bc1fl       L_801D3F04
    if (!c1cs) {
        // 0x801D3EF0: sub.s       $f0, $f30, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
            goto L_801D3F04;
    }
    goto skip_25;
    // 0x801D3EF0: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    skip_25:
    // 0x801D3EF4: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    // 0x801D3EF8: b           L_801D3F04
    // 0x801D3EFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D3F04;
    // 0x801D3EFC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D3F00: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
L_801D3F04:
    // 0x801D3F04: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x801D3F08: c.le.d      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.d <= ctx->f10.d;
    // 0x801D3F0C: nop

    // 0x801D3F10: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3F14: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_26;
    // 0x801D3F14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_26:
    // 0x801D3F18: mul.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x801D3F1C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x801D3F20: nop

    // 0x801D3F24: bc1fl       L_801D3F3C
    if (!c1cs) {
        // 0x801D3F28: sub.s       $f2, $f0, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
            goto L_801D3F3C;
    }
    goto skip_27;
    // 0x801D3F28: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
    skip_27:
    // 0x801D3F2C: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x801D3F30: b           L_801D3F3C
    // 0x801D3F34: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D3F3C;
    // 0x801D3F34: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D3F38: sub.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f20.fl;
L_801D3F3C:
    // 0x801D3F3C: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x801D3F40: c.le.d      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.d <= ctx->f4.d;
    // 0x801D3F44: nop

    // 0x801D3F48: bc1fl       L_801D3FD4
    if (!c1cs) {
        // 0x801D3F4C: lbu         $a2, 0x0($t5)
        ctx->r6 = MEM_BU(ctx->r13, 0X0);
            goto L_801D3FD4;
    }
    goto skip_28;
    // 0x801D3F4C: lbu         $a2, 0x0($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X0);
    skip_28:
    // 0x801D3F50: b           L_801D4044
    // 0x801D3F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_801D4044;
    // 0x801D3F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801D3F58: div.s       $f2, $f20, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f14.fl);
L_801D3F5C:
    // 0x801D3F5C: mul.s       $f30, $f12, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x801D3F60: mov.s       $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    ctx->f28.fl = ctx->f2.fl;
    // 0x801D3F64: c.lt.s      $f30, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f30.fl < ctx->f18.fl;
    // 0x801D3F68: nop

    // 0x801D3F6C: bc1fl       L_801D3F84
    if (!c1cs) {
        // 0x801D3F70: sub.s       $f0, $f30, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
            goto L_801D3F84;
    }
    goto skip_29;
    // 0x801D3F70: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    skip_29:
    // 0x801D3F74: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
    // 0x801D3F78: b           L_801D3F84
    // 0x801D3F7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_801D3F84;
    // 0x801D3F7C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x801D3F80: sub.s       $f0, $f30, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f18.fl;
L_801D3F84:
    // 0x801D3F84: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801D3F88: c.le.d      $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f24.d <= ctx->f6.d;
    // 0x801D3F8C: nop

    // 0x801D3F90: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3F94: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_30;
    // 0x801D3F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_30:
    // 0x801D3F98: mul.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x801D3F9C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x801D3FA0: nop

    // 0x801D3FA4: bc1fl       L_801D3FBC
    if (!c1cs) {
        // 0x801D3FA8: sub.s       $f2, $f0, $f22
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
            goto L_801D3FBC;
    }
    goto skip_31;
    // 0x801D3FA8: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    skip_31:
    // 0x801D3FAC: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x801D3FB0: b           L_801D3FBC
    // 0x801D3FB4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_801D3FBC;
    // 0x801D3FB4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x801D3FB8: sub.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f22.fl;
L_801D3FBC:
    // 0x801D3FBC: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801D3FC0: c.le.d      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.d <= ctx->f8.d;
    // 0x801D3FC4: nop

    // 0x801D3FC8: bc1tl       L_801D4044
    if (c1cs) {
        // 0x801D3FCC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801D4044;
    }
    goto skip_32;
    // 0x801D3FCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_32:
    // 0x801D3FD0: lbu         $a2, 0x0($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X0);
L_801D3FD4:
    // 0x801D3FD4: slti        $at, $a2, 0x3
    ctx->r1 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x801D3FD8: beql        $at, $zero, L_801D4058
    if (ctx->r1 == 0) {
        // 0x801D3FDC: lbu         $v0, 0x0($t5)
        ctx->r2 = MEM_BU(ctx->r13, 0X0);
            goto L_801D4058;
    }
    goto skip_33;
    // 0x801D3FDC: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
    skip_33:
    // 0x801D3FE0: beq         $v0, $zero, L_801D3FF4
    if (ctx->r2 == 0) {
        // 0x801D3FE4: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_801D3FF4;
    }
    // 0x801D3FE4: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x801D3FE8: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x801D3FEC: b           L_801D3FF8
    // 0x801D3FF0: lwc1        $f2, -0x4($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, -0X4);
        goto L_801D3FF8;
    // 0x801D3FF0: lwc1        $f2, -0x4($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, -0X4);
L_801D3FF4:
    // 0x801D3FF4: mov.s       $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    ctx->f2.fl = ctx->f26.fl;
L_801D3FF8:
    // 0x801D3FF8: beq         $v0, $zero, L_801D4010
    if (ctx->r2 == 0) {
        // 0x801D3FFC: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_801D4010;
    }
    // 0x801D3FFC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801D4000: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x801D4004: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x801D4008: b           L_801D4014
    // 0x801D400C: lwc1        $f0, -0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, -0X4);
        goto L_801D4014;
    // 0x801D400C: lwc1        $f0, -0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, -0X4);
L_801D4010:
    // 0x801D4010: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
L_801D4014:
    // 0x801D4014: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x801D4018: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x801D401C: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x801D4020: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4024: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x801D4028: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D402C: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x801D4030: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x801D4034: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x801D4038: swc1        $f8, -0x2F78($at)
    MEM_W(-0X2F78, ctx->r1) = ctx->f8.u32l;
    // 0x801D403C: sb          $t8, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r24;
    // 0x801D4040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801D4044:
    // 0x801D4044: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x801D4048: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D404C: bne         $at, $zero, L_801D3BD4
    if (ctx->r1 != 0) {
        // 0x801D4050: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_801D3BD4;
    }
    // 0x801D4050: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_801D4054:
    // 0x801D4054: lbu         $v0, 0x0($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X0);
L_801D4058:
    // 0x801D4058: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801D405C: ldc1        $f22, 0x10($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X10);
    // 0x801D4060: ldc1        $f24, 0x18($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X18);
    // 0x801D4064: ldc1        $f26, 0x20($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X20);
    // 0x801D4068: ldc1        $f28, 0x28($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X28);
    // 0x801D406C: ldc1        $f30, 0x30($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X30);
    // 0x801D4070: jr          $ra
    // 0x801D4074: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801D4074: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801E11EC_59D0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E11F0: jr          $ra
    // 0x801E11F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E11F4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801F7E1C_5B3D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7E24: jal         0x800369B4
    // 0x801F7E28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800369B4_375B4(rdram, ctx);
        goto after_0;
    // 0x801F7E28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F7E2C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801F7E30: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x801F7E34: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F7E38: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x801F7E3C: ori         $a0, $a0, 0x8000
    ctx->r4 = ctx->r4 | 0X8000;
    // 0x801F7E40: addu        $t6, $v0, $a0
    ctx->r14 = ADD32(ctx->r2, ctx->r4);
    // 0x801F7E44: lbu         $t7, 0x2DE4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2DE4);
    // 0x801F7E48: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7E50: sb          $t7, -0x5206($at)
    MEM_B(-0X5206, ctx->r1) = ctx->r15;
    // 0x801F7E54: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F7E58: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7E5C: addu        $t8, $v0, $a0
    ctx->r24 = ADD32(ctx->r2, ctx->r4);
    // 0x801F7E60: lhu         $t9, 0x2DF2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2DF2);
    // 0x801F7E64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7E68: sh          $t9, -0x5204($at)
    MEM_H(-0X5204, ctx->r1) = ctx->r25;
    // 0x801F7E6C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801F7E70: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7E74: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x801F7E78: lhu         $t1, 0x2DF4($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X2DF4);
    // 0x801F7E7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7E80: jal         0x801F97D4
    // 0x801F7E84: sh          $t1, -0x5202($at)
    MEM_H(-0X5202, ctx->r1) = ctx->r9;
    func_801F97D4_5B56E4(rdram, ctx);
        goto after_1;
    // 0x801F7E84: sh          $t1, -0x5202($at)
    MEM_H(-0X5202, ctx->r1) = ctx->r9;
    after_1:
    // 0x801F7E88: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801F7E8C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801F7E90: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801F7E94: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801F7E98: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x801F7E9C: lhu         $t2, -0x5020($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X5020);
    // 0x801F7EA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801F7EA4: jal         0x801F8EDC
    // 0x801F7EA8: sh          $t2, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r10;
    func_801F8EDC_5B4DEC(rdram, ctx);
        goto after_2;
    // 0x801F7EA8: sh          $t2, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r10;
    after_2:
    // 0x801F7EAC: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801F7EB0: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801F7EB4: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x801F7EB8: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x801F7EBC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801F7EC0: lbu         $t4, -0x51FE($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X51FE);
    // 0x801F7EC4: beq         $t4, $zero, L_801F7EF4
    if (ctx->r12 == 0) {
        // 0x801F7EC8: nop
    
            goto L_801F7EF4;
    }
    // 0x801F7EC8: nop

    // 0x801F7ECC: lhu         $t5, 0x7AD6($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X7AD6);
    // 0x801F7ED0: bne         $t5, $zero, L_801F7EF4
    if (ctx->r13 != 0) {
        // 0x801F7ED4: nop
    
            goto L_801F7EF4;
    }
    // 0x801F7ED4: nop

    // 0x801F7ED8: jal         0x801F87F8
    // 0x801F7EDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F87F8_5B4708(rdram, ctx);
        goto after_3;
    // 0x801F7EDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x801F7EE0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7EE4: jal         0x8003521C
    // 0x801F7EE8: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F7EE8: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    after_4:
    // 0x801F7EEC: b           L_801F7F24
    // 0x801F7EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F7F24;
    // 0x801F7EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7EF4:
    // 0x801F7EF4: jal         0x801F87F8
    // 0x801F7EF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_801F87F8_5B4708(rdram, ctx);
        goto after_5;
    // 0x801F7EF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x801F7EFC: beq         $v0, $zero, L_801F7F18
    if (ctx->r2 == 0) {
        // 0x801F7F00: lui         $a0, 0x801F
        ctx->r4 = S32(0X801F << 16);
            goto L_801F7F18;
    }
    // 0x801F7F00: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7F04: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7F08: jal         0x8003521C
    // 0x801F7F0C: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F7F0C: addiu       $a0, $a0, 0x7F78
    ctx->r4 = ADD32(ctx->r4, 0X7F78);
    after_6:
    // 0x801F7F10: b           L_801F7F24
    // 0x801F7F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F7F24;
    // 0x801F7F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7F18:
    // 0x801F7F18: jal         0x8003521C
    // 0x801F7F1C: addiu       $a0, $a0, 0x7F30
    ctx->r4 = ADD32(ctx->r4, 0X7F30);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x801F7F1C: addiu       $a0, $a0, 0x7F30
    ctx->r4 = ADD32(ctx->r4, 0X7F30);
    after_7:
    // 0x801F7F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7F24:
    // 0x801F7F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7F28: jr          $ra
    // 0x801F7F2C: nop

    TRACE_RETURN()
    return;
    // 0x801F7F2C: nop

;}
RECOMP_FUNC void func_801F507C_5B0F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F507C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5088: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x801F508C: jal         0x801F519C
    // 0x801F5090: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    func_801F519C_5B10AC(rdram, ctx);
        goto after_0;
    // 0x801F5090: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    after_0:
    // 0x801F5094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F509C: jr          $ra
    // 0x801F50A0: nop

    TRACE_RETURN()
    return;
    // 0x801F50A0: nop

;}
RECOMP_FUNC void func_801DD6E0_5995F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DD6E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DD6E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DD6EC: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DD6F0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801DD6F4: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801DD6F8: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x801DD6FC: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x801DD700: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801DD704: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x801DD708: jal         0x80038BC8
    // 0x801DD70C: lhu         $a0, 0x4060($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4060);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801DD70C: lhu         $a0, 0x4060($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4060);
    after_0:
    // 0x801DD710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DD714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DD718: jr          $ra
    // 0x801DD71C: nop

    TRACE_RETURN()
    return;
    // 0x801DD71C: nop

;}
RECOMP_FUNC void func_801E7DA0_5A3CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7DA0: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7DA4: slti        $v0, $v1, 0x0
    ctx->r2 = SIGNED(ctx->r3) < 0X0 ? 1 : 0;
    // 0x801E7DA8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801E7DAC: beq         $v0, $zero, L_801E7DB8
    if (ctx->r2 == 0) {
        // 0x801E7DB0: nop
    
            goto L_801E7DB8;
    }
    // 0x801E7DB0: nop

    // 0x801E7DB4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
L_801E7DB8:
    // 0x801E7DB8: jr          $ra
    // 0x801E7DBC: nop

    TRACE_RETURN()
    return;
    // 0x801E7DBC: nop

;}
RECOMP_FUNC void func_801E5274_5A1184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E527C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E5280: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E5284: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x801E5288: beq         $v0, $at, L_801E5298
    if (ctx->r2 == ctx->r1) {
        // 0x801E528C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_801E5298;
    }
    // 0x801E528C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x801E5290: bne         $v0, $at, L_801E52A0
    if (ctx->r2 != ctx->r1) {
        // 0x801E5294: nop
    
            goto L_801E52A0;
    }
    // 0x801E5294: nop

L_801E5298:
    // 0x801E5298: b           L_801E5318
    // 0x801E529C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5318;
    // 0x801E529C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E52A0:
    // 0x801E52A0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801E52A4: lw          $v0, -0x3A10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A10);
    // 0x801E52A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E52AC: beq         $v0, $zero, L_801E52D4
    if (ctx->r2 == 0) {
        // 0x801E52B0: nop
    
            goto L_801E52D4;
    }
    // 0x801E52B0: nop

    // 0x801E52B4: beq         $v0, $at, L_801E52DC
    if (ctx->r2 == ctx->r1) {
        // 0x801E52B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E52DC;
    }
    // 0x801E52B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E52BC: beq         $v0, $at, L_801E52EC
    if (ctx->r2 == ctx->r1) {
        // 0x801E52C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_801E52EC;
    }
    // 0x801E52C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801E52C4: beq         $v0, $at, L_801E52FC
    if (ctx->r2 == ctx->r1) {
        // 0x801E52C8: lui         $a0, 0x8016
        ctx->r4 = S32(0X8016 << 16);
            goto L_801E52FC;
    }
    // 0x801E52C8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801E52CC: b           L_801E5304
    // 0x801E52D0: nop

        goto L_801E5304;
    // 0x801E52D0: nop

L_801E52D4:
    // 0x801E52D4: b           L_801E5318
    // 0x801E52D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5318;
    // 0x801E52D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E52DC:
    // 0x801E52DC: jal         0x801DCD48
    // 0x801E52E0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_801DCD48_598C58(rdram, ctx);
        goto after_0;
    // 0x801E52E0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x801E52E4: b           L_801E5304
    // 0x801E52E8: nop

        goto L_801E5304;
    // 0x801E52E8: nop

L_801E52EC:
    // 0x801E52EC: jal         0x801DCD48
    // 0x801E52F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_801DCD48_598C58(rdram, ctx);
        goto after_1;
    // 0x801E52F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x801E52F4: b           L_801E5304
    // 0x801E52F8: nop

        goto L_801E5304;
    // 0x801E52F8: nop

L_801E52FC:
    // 0x801E52FC: jal         0x801DCD48
    // 0x801E5300: lb          $a0, -0x3A1D($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3A1D);
    func_801DCD48_598C58(rdram, ctx);
        goto after_2;
    // 0x801E5300: lb          $a0, -0x3A1D($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3A1D);
    after_2:
L_801E5304:
    // 0x801E5304: jal         0x801E3134
    // 0x801E5308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E3134_59F044(rdram, ctx);
        goto after_3;
    // 0x801E5308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801E530C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801E5310: sw          $zero, -0x3A10($at)
    MEM_W(-0X3A10, ctx->r1) = 0;
    // 0x801E5314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E5318:
    // 0x801E5318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E531C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E5320: jr          $ra
    // 0x801E5324: nop

    TRACE_RETURN()
    return;
    // 0x801E5324: nop

;}
RECOMP_FUNC void func_801EBA14_5A7924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EBA14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EBA18: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801EBA1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EBA20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EBA24: lui         $a1, 0x41A2
    ctx->r5 = S32(0X41A2 << 16);
    // 0x801EBA28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EBA2C: lui         $a2, 0x42D0
    ctx->r6 = S32(0X42D0 << 16);
    // 0x801EBA30: lui         $a3, 0x4298
    ctx->r7 = S32(0X4298 << 16);
    // 0x801EBA34: ori         $a3, $a3, 0x1ABA
    ctx->r7 = ctx->r7 | 0X1ABA;
    // 0x801EBA38: ori         $a2, $a2, 0x47F0
    ctx->r6 = ctx->r6 | 0X47F0;
    // 0x801EBA3C: ori         $a1, $a1, 0x8D50
    ctx->r5 = ctx->r5 | 0X8D50;
    // 0x801EBA40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EBA44: jal         0x801EBAA8
    // 0x801EBA48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801EBAA8_5A79B8(rdram, ctx);
        goto after_0;
    // 0x801EBA48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801EBA4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EBA50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EBA54: jr          $ra
    // 0x801EBA58: nop

    TRACE_RETURN()
    return;
    // 0x801EBA58: nop

;}
RECOMP_FUNC void func_801D51A8_5910B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D51A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D51AC: lhu         $v0, 0xB2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB2);
    // 0x801D51B0: lhu         $a1, 0xB0($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XB0);
    // 0x801D51B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D51B8: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801D51BC: beq         $at, $zero, L_801D51E0
    if (ctx->r1 == 0) {
        // 0x801D51C0: subu        $t6, $a1, $v1
        ctx->r14 = SUB32(ctx->r5, ctx->r3);
            goto L_801D51E0;
    }
    // 0x801D51C0: subu        $t6, $a1, $v1
    ctx->r14 = SUB32(ctx->r5, ctx->r3);
    // 0x801D51C4: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x801D51C8: beq         $at, $zero, L_801D51D8
    if (ctx->r1 == 0) {
        // 0x801D51CC: addiu       $t7, $a1, -0x10
        ctx->r15 = ADD32(ctx->r5, -0X10);
            goto L_801D51D8;
    }
    // 0x801D51CC: addiu       $t7, $a1, -0x10
    ctx->r15 = ADD32(ctx->r5, -0X10);
    // 0x801D51D0: jr          $ra
    // 0x801D51D4: sh          $v0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D51D4: sh          $v0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r2;
L_801D51D8:
    // 0x801D51D8: jr          $ra
    // 0x801D51DC: sh          $t7, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D51DC: sh          $t7, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r15;
L_801D51E0:
    // 0x801D51E0: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D51E4: beq         $at, $zero, L_801D51FC
    if (ctx->r1 == 0) {
        // 0x801D51E8: addiu       $t8, $a1, 0x2
        ctx->r24 = ADD32(ctx->r5, 0X2);
            goto L_801D51FC;
    }
    // 0x801D51E8: addiu       $t8, $a1, 0x2
    ctx->r24 = ADD32(ctx->r5, 0X2);
    // 0x801D51EC: lhu         $v0, 0xB2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB2);
    // 0x801D51F0: sh          $t8, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r24;
    // 0x801D51F4: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    // 0x801D51F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801D51FC:
    // 0x801D51FC: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801D5200: beq         $at, $zero, L_801D520C
    if (ctx->r1 == 0) {
        // 0x801D5204: nop
    
            goto L_801D520C;
    }
    // 0x801D5204: nop

    // 0x801D5208: sh          $v0, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r2;
L_801D520C:
    // 0x801D520C: jr          $ra
    // 0x801D5210: nop

    TRACE_RETURN()
    return;
    // 0x801D5210: nop

;}
