#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801FB658_626A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FB658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FB65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FB660: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FB664: jal         0x801D326C
    // 0x801FB668: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_0;
    // 0x801FB668: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FB66C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FB670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FB674: jr          $ra
    // 0x801FB678: nop

    TRACE_RETURN()
    return;
    // 0x801FB678: nop

;}
RECOMP_FUNC void func_80208C10_633FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208C10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80208C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80208C18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80208C1C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80208C20: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80208C24: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80208C28: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x80208C2C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80208C30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80208C34: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80208C38: bgtz        $t7, L_80208D20
    if (SIGNED(ctx->r15) > 0) {
        // 0x80208C3C: addiu       $v0, $v0, 0xA0
        ctx->r2 = ADD32(ctx->r2, 0XA0);
            goto L_80208D20;
    }
    // 0x80208C3C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80208C40: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x80208C44: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x80208C48: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80208C4C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80208C50: slti        $at, $t0, 0x156
    ctx->r1 = SIGNED(ctx->r8) < 0X156 ? 1 : 0;
    // 0x80208C54: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x80208C58: beq         $at, $zero, L_80208C6C
    if (ctx->r1 == 0) {
        // 0x80208C5C: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80208C6C;
    }
    // 0x80208C5C: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80208C60: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80208C64: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80208C68: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
L_80208C6C:
    // 0x80208C6C: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80208C70: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80208C74: jal         0x8000E630
    // 0x80208C78: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x80208C78: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    after_0:
    // 0x80208C7C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80208C80: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80208C84: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80208C88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80208C8C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x80208C90: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80208C94: addiu       $at, $zero, 0x155
    ctx->r1 = ADD32(0, 0X155);
    // 0x80208C98: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80208C9C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80208CA0: swc1        $f16, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f16.u32l;
    // 0x80208CA4: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x80208CA8: bne         $t1, $at, L_80208D20
    if (ctx->r9 != ctx->r1) {
        // 0x80208CAC: nop
    
            goto L_80208D20;
    }
    // 0x80208CAC: nop

    // 0x80208CB0: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x80208CB4: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80208CB8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208CBC: addiu       $a0, $a0, -0x72C4
    ctx->r4 = ADD32(ctx->r4, -0X72C4);
    // 0x80208CC0: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x80208CC4: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80208CC8: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    // 0x80208CCC: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80208CD0: jal         0x8003521C
    // 0x80208CD4: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80208CD4: swc1        $f6, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x80208CD8: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80208CDC: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x80208CE0: lui         $t4, 0x4
    ctx->r12 = S32(0X4 << 16);
    // 0x80208CE4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80208CE8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80208CEC: lbu         $t4, -0x521C($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X521C);
    // 0x80208CF0: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x80208CF4: bnel        $t4, $at, L_80208D20
    if (ctx->r12 != ctx->r1) {
        // 0x80208CF8: sw          $t5, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r13;
            goto L_80208D20;
    }
    goto skip_0;
    // 0x80208CF8: sw          $t5, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r13;
    skip_0:
    // 0x80208CFC: jal         0x8003D310
    // 0x80208D00: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8003D310_3DF10(rdram, ctx);
        goto after_2;
    // 0x80208D00: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_2:
    // 0x80208D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80208D08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80208D0C: jal         0x80037C20
    // 0x80208D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x80208D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80208D14: b           L_80208D20
    // 0x80208D18: nop

        goto L_80208D20;
    // 0x80208D18: nop

    // 0x80208D1C: sw          $t5, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r13;
L_80208D20:
    // 0x80208D20: jal         0x801EE658
    // 0x80208D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE658_619A38(rdram, ctx);
        goto after_4;
    // 0x80208D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80208D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80208D2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80208D30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80208D34: jr          $ra
    // 0x80208D38: nop

    TRACE_RETURN()
    return;
    // 0x80208D38: nop

;}
RECOMP_FUNC void func_801D5C30_601010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5C30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D5C34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D5C38: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5C3C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D5C40: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x801D5C44: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x801D5C48: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5C4C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D5C50: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x801D5C54: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D5C58: jal         0x8000E630
    // 0x801D5C5C: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801D5C5C: lhu         $a1, 0x4A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4A);
    after_0:
    // 0x801D5C60: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5C64: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5C68: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D5C6C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801D5C70: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D5C74: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x801D5C78: lhu         $a3, 0x46($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X46);
    // 0x801D5C7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D5C80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D5C84: jal         0x801D5CB8
    // 0x801D5C88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_801D5CB8_601098(rdram, ctx);
        goto after_1;
    // 0x801D5C88: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801D5C8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D5C90: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801D5C94: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801D5C98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801D5C9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801D5CA0: jal         0x8000E28C
    // 0x801D5CA4: nop

    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x801D5CA4: nop

    after_2:
    // 0x801D5CA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5CAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D5CB0: jr          $ra
    // 0x801D5CB4: nop

    TRACE_RETURN()
    return;
    // 0x801D5CB4: nop

;}
RECOMP_FUNC void func_801FD840_628C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FD844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FD848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FD84C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801FD850: jal         0x801D31F0
    // 0x801FD854: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801FD854: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_0:
    // 0x801FD858: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FD85C: nop

    // 0x801FD860: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FD864: nop

    // 0x801FD868: bc1fl       L_801FD87C
    if (!c1cs) {
        // 0x801FD86C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FD87C;
    }
    goto skip_0;
    // 0x801FD86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FD870: jal         0x801FC3FC
    // 0x801FD874: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_1;
    // 0x801FD874: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801FD878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FD87C:
    // 0x801FD87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FD880: jr          $ra
    // 0x801FD884: nop

    TRACE_RETURN()
    return;
    // 0x801FD884: nop

;}
RECOMP_FUNC void func_801D60CC_6014AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D60CC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D60D0: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D60D4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D60D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D60DC: jr          $ra
    // 0x801D60E0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801D60E0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801F2418_61D7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F241C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2420: jal         0x801F0540
    // 0x801F2424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F0540_61B920(rdram, ctx);
        goto after_0;
    // 0x801F2424: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F2428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F242C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2430: jr          $ra
    // 0x801F2434: nop

    TRACE_RETURN()
    return;
    // 0x801F2434: nop

;}
RECOMP_FUNC void func_801F047C_61B85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F047C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0484: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0488: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F048C: jal         0x801F7074
    // 0x801F0490: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F0490: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F0494: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801F0498: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F04A0: jal         0x801F76D0
    // 0x801F04A4: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F04A4: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x801F04A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F04AC: jal         0x801D6330
    // 0x801F04B0: lui         $a1, 0xC2DC
    ctx->r5 = S32(0XC2DC << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x801F04B0: lui         $a1, 0xC2DC
    ctx->r5 = S32(0XC2DC << 16);
    after_2:
    // 0x801F04B4: beq         $v0, $zero, L_801F04CC
    if (ctx->r2 == 0) {
        // 0x801F04B8: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_801F04CC;
    }
    // 0x801F04B8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801F04BC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F04C0: sw          $t6, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r14;
    // 0x801F04C4: jal         0x8003521C
    // 0x801F04C8: addiu       $a0, $a0, 0x4E0
    ctx->r4 = ADD32(ctx->r4, 0X4E0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F04C8: addiu       $a0, $a0, 0x4E0
    ctx->r4 = ADD32(ctx->r4, 0X4E0);
    after_3:
L_801F04CC:
    // 0x801F04CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F04D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F04D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F04D8: jr          $ra
    // 0x801F04DC: nop

    TRACE_RETURN()
    return;
    // 0x801F04DC: nop

;}
RECOMP_FUNC void func_80204C5C_63003C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204C5C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80204C60: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80204C64: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80204C68: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80204C6C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80204C70: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x80204C74: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80204C78: lwc1        $f6, 0xB0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80204C7C: lw          $s2, 0x18($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X18);
    // 0x80204C80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80204C84: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80204C88: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80204C8C: lwc1        $f10, 0x20($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80204C90: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80204C94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80204C98: lwc1        $f4, 0x24($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X24);
    // 0x80204C9C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80204CA0: swc1        $f8, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f8.u32l;
    // 0x80204CA4: lwc1        $f16, 0xB0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80204CA8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80204CAC: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80204CB0: swc1        $f18, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f18.u32l;
    // 0x80204CB4: lwc1        $f6, 0xB0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XB0);
    // 0x80204CB8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80204CBC: swc1        $f8, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f8.u32l;
    // 0x80204CC0: lwc1        $f16, 0xAC($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x80204CC4: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    // 0x80204CC8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80204CCC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80204CD0: nop

    // 0x80204CD4: bc1f        L_80204D90
    if (!c1cs) {
        // 0x80204CD8: nop
    
            goto L_80204D90;
    }
    // 0x80204CD8: nop

    // 0x80204CDC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80204CE0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80204CE4: jal         0x8000F240
    // 0x80204CE8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_0;
    // 0x80204CE8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_0:
    // 0x80204CEC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80204CF0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80204CF4: lhu         $a1, 0x14($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X14);
    // 0x80204CF8: lhu         $a2, 0x16($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X16);
    // 0x80204CFC: jal         0x8000E2D4
    // 0x80204D00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8000E2D4_EED4(rdram, ctx);
        goto after_1;
    // 0x80204D00: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80204D04: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80204D08: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x80204D0C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80204D10: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80204D14: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80204D18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80204D1C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80204D20: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80204D24: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80204D28: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80204D2C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80204D30: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80204D34: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80204D38: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80204D3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80204D40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80204D44: jal         0x8000E030
    // 0x80204D48: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8000E030_EC30(rdram, ctx);
        goto after_2;
    // 0x80204D48: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x80204D4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80204D50: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80204D54: addiu       $t5, $zero, 0x5A
    ctx->r13 = ADD32(0, 0X5A);
    // 0x80204D58: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80204D5C: addiu       $t7, $zero, -0x3
    ctx->r15 = ADD32(0, -0X3);
    // 0x80204D60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80204D64: sb          $v0, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r2;
    // 0x80204D68: sw          $t4, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r12;
    // 0x80204D6C: sb          $t5, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r13;
    // 0x80204D70: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    // 0x80204D74: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x80204D78: sh          $zero, 0x52($s1)
    MEM_H(0X52, ctx->r17) = 0;
    // 0x80204D7C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80204D80: sh          $t6, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r14;
    // 0x80204D84: sh          $t7, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r15;
    // 0x80204D88: jal         0x8003521C
    // 0x80204D8C: addiu       $a0, $a0, 0x4EF4
    ctx->r4 = ADD32(ctx->r4, 0X4EF4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80204D8C: addiu       $a0, $a0, 0x4EF4
    ctx->r4 = ADD32(ctx->r4, 0X4EF4);
    after_3:
L_80204D90:
    // 0x80204D90: beq         $s2, $zero, L_80204DA8
    if (ctx->r18 == 0) {
        // 0x80204D94: lui         $t8, 0x8021
        ctx->r24 = S32(0X8021 << 16);
            goto L_80204DA8;
    }
    // 0x80204D94: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80204D98: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x80204D9C: lbu         $t9, 0xF($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XF);
    // 0x80204DA0: bnel        $t9, $zero, L_80204DBC
    if (ctx->r25 != 0) {
        // 0x80204DA4: lwc1        $f18, 0xA0($s1)
        ctx->f18.u32l = MEM_W(ctx->r17, 0XA0);
            goto L_80204DBC;
    }
    goto skip_0;
    // 0x80204DA4: lwc1        $f18, 0xA0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XA0);
    skip_0:
L_80204DA8:
    // 0x80204DA8: jal         0x80034ED4
    // 0x80204DAC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_4;
    // 0x80204DAC: nop

    after_4:
    // 0x80204DB0: b           L_80204EE0
    // 0x80204DB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80204EE0;
    // 0x80204DB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80204DB8: lwc1        $f18, 0xA0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XA0);
L_80204DBC:
    // 0x80204DBC: addiu       $t0, $s0, 0xC
    ctx->r8 = ADD32(ctx->r16, 0XC);
    // 0x80204DC0: addiu       $t1, $s0, 0x10
    ctx->r9 = ADD32(ctx->r16, 0X10);
    // 0x80204DC4: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x80204DC8: lwc1        $f4, 0xA4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XA4);
    // 0x80204DCC: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    // 0x80204DD0: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x80204DD4: lwc1        $f6, 0xA8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XA8);
    // 0x80204DD8: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80204DDC: lhu         $a2, 0x18($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X18);
    // 0x80204DE0: lhu         $a1, 0x16($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X16);
    // 0x80204DE4: lhu         $a0, 0x14($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X14);
    // 0x80204DE8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80204DEC: jal         0x8000E808
    // 0x80204DF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_8000E808_F408(rdram, ctx);
        goto after_5;
    // 0x80204DF0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x80204DF4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80204DF8: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80204DFC: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80204E00: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80204E04: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80204E08: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x80204E0C: lwc1        $f4, 0xC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC);
    // 0x80204E10: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80204E14: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80204E18: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80204E1C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80204E20: swc1        $f16, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f16.u32l;
    // 0x80204E24: lw          $t2, 0x7C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X7C);
    // 0x80204E28: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x80204E2C: bnel        $t3, $zero, L_80204EE0
    if (ctx->r11 != 0) {
        // 0x80204E30: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80204EE0;
    }
    goto skip_1;
    // 0x80204E30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x80204E34: lwc1        $f18, 0x8($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80204E38: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80204E3C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80204E40: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x80204E44: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80204E48: addiu       $t4, $sp, 0x50
    ctx->r12 = ADD32(ctx->r29, 0X50);
    // 0x80204E4C: addiu       $t5, $sp, 0x4C
    ctx->r13 = ADD32(ctx->r29, 0X4C);
    // 0x80204E50: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80204E54: lwc1        $f6, 0x10($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80204E58: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x80204E5C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80204E60: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x80204E64: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x80204E68: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80204E6C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80204E70: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80204E74: jal         0x8000E4E4
    // 0x80204E78: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_6;
    // 0x80204E78: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_6:
    // 0x80204E7C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80204E80: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80204E84: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80204E88: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80204E8C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80204E90: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80204E94: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80204E98: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80204E9C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80204EA0: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80204EA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80204EA8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80204EAC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80204EB0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80204EB4: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x80204EB8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80204EBC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80204EC0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80204EC4: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80204EC8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80204ECC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80204ED0: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80204ED4: jal         0x801DFB90
    // 0x80204ED8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_7;
    // 0x80204ED8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x80204EDC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80204EE0:
    // 0x80204EE0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80204EE4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80204EE8: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80204EEC: jr          $ra
    // 0x80204EF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80204EF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80200760_62BB40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200760: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80200764: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80200768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8020076C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200770: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x80200774: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80200778: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8020077C: jal         0x80204624
    // 0x80200780: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_80204624_62FA04(rdram, ctx);
        goto after_0;
    // 0x80200780: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x80200784: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80200788: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8020078C: jal         0x801D4BF4
    // 0x80200790: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_1;
    // 0x80200790: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x80200794: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80200798: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8020079C: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802007A0: lbu         $t9, 0xE($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XE);
    // 0x802007A4: beq         $t9, $at, L_802007BC
    if (ctx->r25 == ctx->r1) {
        // 0x802007A8: nop
    
            goto L_802007BC;
    }
    // 0x802007A8: nop

    // 0x802007AC: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x802007B0: sb          $zero, 0x4($t0)
    MEM_B(0X4, ctx->r8) = 0;
    // 0x802007B4: jal         0x80200684
    // 0x802007B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80200684_62BA64(rdram, ctx);
        goto after_2;
    // 0x802007B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
L_802007BC:
    // 0x802007BC: jal         0x8020407C
    // 0x802007C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8020407C_62F45C(rdram, ctx);
        goto after_3;
    // 0x802007C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x802007C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802007C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802007CC: jr          $ra
    // 0x802007D0: nop

    TRACE_RETURN()
    return;
    // 0x802007D0: nop

;}
RECOMP_FUNC void func_801F732C_62270C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F732C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F7330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F7334: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F7338: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x801F733C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F7340: bne         $a2, $zero, L_801F7350
    if (ctx->r6 != 0) {
        // 0x801F7344: nop
    
            goto L_801F7350;
    }
    // 0x801F7344: nop

    // 0x801F7348: b           L_801F74D0
    // 0x801F734C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F74D0;
    // 0x801F734C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F7350:
    // 0x801F7350: jal         0x801F71DC
    // 0x801F7354: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_801F71DC_6225BC(rdram, ctx);
        goto after_0;
    // 0x801F7354: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x801F7358: bne         $v0, $zero, L_801F7494
    if (ctx->r2 != 0) {
        // 0x801F735C: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_801F7494;
    }
    // 0x801F735C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801F7360: jal         0x801F7168
    // 0x801F7364: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_801F7168_622548(rdram, ctx);
        goto after_1;
    // 0x801F7364: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_1:
    // 0x801F7368: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801F736C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x801F7370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F7374: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x801F7378: lwc1        $f12, 0xC($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801F737C: lui         $a1, 0xBECC
    ctx->r5 = S32(0XBECC << 16);
    // 0x801F7380: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F7384: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F7388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F738C: sub.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801F7390: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801F7394: nop

    // 0x801F7398: bc1fl       L_801F7438
    if (!c1cs) {
        // 0x801F739C: c.lt.s      $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
            goto L_801F7438;
    }
    goto skip_0;
    // 0x801F739C: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    skip_0:
    // 0x801F73A0: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x801F73A4: jal         0x801D6508
    // 0x801F73A8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_801D6508_6018E8(rdram, ctx);
        goto after_2;
    // 0x801F73A8: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x801F73AC: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801F73B0: jal         0x801D725C
    // 0x801F73B4: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_3;
    // 0x801F73B4: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_3:
    // 0x801F73B8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801F73BC: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801F73C0: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x801F73C4: lwc1        $f10, 0xC($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801F73C8: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x801F73CC: nop

    // 0x801F73D0: bc1f        L_801F742C
    if (!c1cs) {
        // 0x801F73D4: nop
    
            goto L_801F742C;
    }
    // 0x801F73D4: nop

    // 0x801F73D8: lwc1        $f16, 0x74($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F73DC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801F73E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F73E4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801F73E8: addiu       $a0, $zero, 0x284
    ctx->r4 = ADD32(0, 0X284);
    // 0x801F73EC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x801F73F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F73F4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F73F8: bc1f        L_801F742C
    if (!c1cs) {
        // 0x801F73FC: nop
    
            goto L_801F742C;
    }
    // 0x801F73FC: nop

    // 0x801F7400: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F7404: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F7408: jal         0x8000F3D8
    // 0x801F740C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F740C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
    // 0x801F7410: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x801F7414: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F7418: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F741C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x801F7420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F7424: jal         0x801F74E4
    // 0x801F7428: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_5;
    // 0x801F7428: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
L_801F742C:
    // 0x801F742C: b           L_801F74D0
    // 0x801F7430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F74D0;
    // 0x801F7430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F7434: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
L_801F7438:
    // 0x801F7438: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x801F743C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F7440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F7444: bc1f        L_801F748C
    if (!c1cs) {
        // 0x801F7448: nop
    
            goto L_801F748C;
    }
    // 0x801F7448: nop

    // 0x801F744C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x801F7450: jal         0x801D6508
    // 0x801F7454: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    func_801D6508_6018E8(rdram, ctx);
        goto after_6;
    // 0x801F7454: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x801F7458: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801F745C: jal         0x801D725C
    // 0x801F7460: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_7;
    // 0x801F7460: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_7:
    // 0x801F7464: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801F7468: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801F746C: lwc1        $f6, 0xC($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801F7470: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x801F7474: nop

    // 0x801F7478: bc1f        L_801F7484
    if (!c1cs) {
        // 0x801F747C: nop
    
            goto L_801F7484;
    }
    // 0x801F747C: nop

    // 0x801F7480: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
L_801F7484:
    // 0x801F7484: b           L_801F74D0
    // 0x801F7488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801F74D0;
    // 0x801F7488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F748C:
    // 0x801F748C: b           L_801F74D0
    // 0x801F7490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F74D0;
    // 0x801F7490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F7494:
    // 0x801F7494: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801F7498: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801F749C: jal         0x801D6508
    // 0x801F74A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_8;
    // 0x801F74A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801F74A4: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801F74A8: jal         0x801D725C
    // 0x801F74AC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_9;
    // 0x801F74AC: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_9:
    // 0x801F74B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F74B4: jal         0x801D4408
    // 0x801F74B8: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    func_801D4408_5FF7E8(rdram, ctx);
        goto after_10;
    // 0x801F74B8: lui         $a1, 0xC1A0
    ctx->r5 = S32(0XC1A0 << 16);
    after_10:
    // 0x801F74BC: beql        $v0, $zero, L_801F74D0
    if (ctx->r2 == 0) {
        // 0x801F74C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801F74D0;
    }
    goto skip_1;
    // 0x801F74C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801F74C4: b           L_801F74D0
    // 0x801F74C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801F74D0;
    // 0x801F74C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801F74CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F74D0:
    // 0x801F74D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F74D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F74D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F74DC: jr          $ra
    // 0x801F74E0: nop

    TRACE_RETURN()
    return;
    // 0x801F74E0: nop

;}
RECOMP_FUNC void func_801F20B4_61D494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F20B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F20B8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801F20BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F20C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F20C4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F20C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F20CC: jal         0x801D3018
    // 0x801F20D0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F20D0: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F20D4: jal         0x801F76D0
    // 0x801F20D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F20D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F20DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F20E0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F20E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F20E8: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F20EC: lui         $a2, 0xC348
    ctx->r6 = S32(0XC348 << 16);
    // 0x801F20F0: jal         0x8000E39C
    // 0x801F20F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_2;
    // 0x801F20F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x801F20F8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x801F20FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F2100: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F2104: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F2108: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801F210C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x801F2110: addiu       $t7, $v0, 0x16
    ctx->r15 = ADD32(ctx->r2, 0X16);
    // 0x801F2114: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F2118: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801F211C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801F2120: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801F2124: jal         0x8000EC04
    // 0x801F2128: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8000EC04_F804(rdram, ctx);
        goto after_3;
    // 0x801F2128: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x801F212C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2130: jal         0x8003521C
    // 0x801F2134: addiu       $a0, $a0, 0x214C
    ctx->r4 = ADD32(ctx->r4, 0X214C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F2134: addiu       $a0, $a0, 0x214C
    ctx->r4 = ADD32(ctx->r4, 0X214C);
    after_4:
    // 0x801F2138: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F213C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801F2140: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F2144: jr          $ra
    // 0x801F2148: nop

    TRACE_RETURN()
    return;
    // 0x801F2148: nop

;}
RECOMP_FUNC void func_801F223C_61D61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F223C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F2240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F2244: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F2248: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F224C: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801F2250: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F2254: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801F2258: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F225C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F2260: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F2264: jal         0x801F718C
    // 0x801F2268: nop

    func_801F718C_62256C(rdram, ctx);
        goto after_0;
    // 0x801F2268: nop

    after_0:
    // 0x801F226C: beql        $v0, $zero, L_801F22C4
    if (ctx->r2 == 0) {
        // 0x801F2270: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F22C4;
    }
    goto skip_0;
    // 0x801F2270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801F2274: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x801F2278: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    // 0x801F227C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F2280: bne         $t7, $zero, L_801F22C0
    if (ctx->r15 != 0) {
        // 0x801F2284: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_801F22C0;
    }
    // 0x801F2284: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801F2288: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F228C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F2290: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F2294: jal         0x8000F3D8
    // 0x801F2298: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_1;
    // 0x801F2298: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_1:
    // 0x801F229C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F22A0: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F22A4: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F22A8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F22AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F22B0: jal         0x801F74E4
    // 0x801F22B4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_2;
    // 0x801F22B4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_2:
    // 0x801F22B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F22BC: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_801F22C0:
    // 0x801F22C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801F22C4:
    // 0x801F22C4: jal         0x801D6330
    // 0x801F22C8: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_3;
    // 0x801F22C8: lui         $a1, 0xC2B4
    ctx->r5 = S32(0XC2B4 << 16);
    after_3:
    // 0x801F22CC: beq         $v0, $zero, L_801F2338
    if (ctx->r2 == 0) {
        // 0x801F22D0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_801F2338;
    }
    // 0x801F22D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F22D4: jal         0x801D2F40
    // 0x801F22D8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_4;
    // 0x801F22D8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_4:
    // 0x801F22DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801F22E0: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x801F22E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F22E8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x801F22EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F22F0: bc1fl       L_801F233C
    if (!c1cs) {
        // 0x801F22F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F233C;
    }
    goto skip_1;
    // 0x801F22F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F22F8: lwc1        $f16, 0x70($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801F22FC: lwc1        $f4, 0x78($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801F2300: lbu         $t0, 0x30($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X30);
    // 0x801F2304: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F2308: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x801F230C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x801F2310: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x801F2314: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801F2318: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x801F231C: swc1        $f6, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f6.u32l;
    // 0x801F2320: sb          $t1, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r9;
    // 0x801F2324: jal         0x801D36C4
    // 0x801F2328: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_5;
    // 0x801F2328: swc1        $f8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x801F232C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2330: jal         0x8003521C
    // 0x801F2334: addiu       $a0, $a0, 0x234C
    ctx->r4 = ADD32(ctx->r4, 0X234C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F2334: addiu       $a0, $a0, 0x234C
    ctx->r4 = ADD32(ctx->r4, 0X234C);
    after_6:
L_801F2338:
    // 0x801F2338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F233C:
    // 0x801F233C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F2340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F2344: jr          $ra
    // 0x801F2348: nop

    TRACE_RETURN()
    return;
    // 0x801F2348: nop

;}
RECOMP_FUNC void func_801F92D0_6246B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F92D0: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F92D4: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F92D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F92DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F92E0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F92E4: lw          $t7, 0x1D8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D8);
    // 0x801F92E8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801F92EC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801F92F0: lw          $t8, 0xD8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XD8);
    // 0x801F92F4: beql        $t8, $at, L_801F9310
    if (ctx->r24 == ctx->r1) {
        // 0x801F92F8: mtc1        $zero, $f14
        ctx->f14.u32l = 0;
            goto L_801F9310;
    }
    goto skip_0;
    // 0x801F92F8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    skip_0:
    // 0x801F92FC: jal         0x80034ED4
    // 0x801F9300: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801F9300: nop

    after_0:
    // 0x801F9304: b           L_801F9344
    // 0x801F9308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F9344;
    // 0x801F9308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F930C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_801F9310:
    // 0x801F9310: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F9314: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x801F9318: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F931C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F9320: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801F9324: jal         0x8000E39C
    // 0x801F9328: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_1;
    // 0x801F9328: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    after_1:
    // 0x801F932C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801F9330: jal         0x8003521C
    // 0x801F9334: addiu       $a0, $a0, -0x6CB0
    ctx->r4 = ADD32(ctx->r4, -0X6CB0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F9334: addiu       $a0, $a0, -0x6CB0
    ctx->r4 = ADD32(ctx->r4, -0X6CB0);
    after_2:
    // 0x801F9338: jal         0x80038BC8
    // 0x801F933C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F933C: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    after_3:
    // 0x801F9340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F9344:
    // 0x801F9344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9348: jr          $ra
    // 0x801F934C: nop

    TRACE_RETURN()
    return;
    // 0x801F934C: nop

;}
RECOMP_FUNC void func_801F1738_61CB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F173C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F1740: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801F1744: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F1748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F174C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F1750: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801F1754: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801F1758: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x801F175C: jal         0x801F701C
    // 0x801F1760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F701C_6223FC(rdram, ctx);
        goto after_0;
    // 0x801F1760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F1764: jal         0x801F7074
    // 0x801F1768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801F1768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F176C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F1770: jal         0x8003521C
    // 0x801F1774: addiu       $a0, $a0, 0x1788
    ctx->r4 = ADD32(ctx->r4, 0X1788);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F1774: addiu       $a0, $a0, 0x1788
    ctx->r4 = ADD32(ctx->r4, 0X1788);
    after_2:
    // 0x801F1778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F177C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1780: jr          $ra
    // 0x801F1784: nop

    TRACE_RETURN()
    return;
    // 0x801F1784: nop

;}
RECOMP_FUNC void func_801E4FB0_610390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4FB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E4FBC: jal         0x801D326C
    // 0x801E4FC0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_0;
    // 0x801E4FC0: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E4FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E4FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4FCC: jr          $ra
    // 0x801E4FD0: nop

    TRACE_RETURN()
    return;
    // 0x801E4FD0: nop

;}
RECOMP_FUNC void func_80201684_62CA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201684: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80201688: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8020168C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80201690: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80201694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80201698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8020169C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802016A0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x802016A4: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x802016A8: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x802016AC: jal         0x801D6244
    // 0x802016B0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    func_801D6244_601624(rdram, ctx);
        goto after_0;
    // 0x802016B0: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x802016B4: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x802016B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802016BC: jal         0x801D6330
    // 0x802016C0: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_1;
    // 0x802016C0: lui         $a1, 0x42A2
    ctx->r5 = S32(0X42A2 << 16);
    after_1:
    // 0x802016C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802016C8: lui         $a1, 0xC3C8
    ctx->r5 = S32(0XC3C8 << 16);
    // 0x802016CC: jal         0x801D641C
    // 0x802016D0: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    func_801D641C_6017FC(rdram, ctx);
        goto after_2;
    // 0x802016D0: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    after_2:
    // 0x802016D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802016D8: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x802016DC: lbu         $a2, 0x26($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X26);
    // 0x802016E0: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x802016E4: lbu         $t6, 0xA($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0XA);
    // 0x802016E8: beq         $t6, $zero, L_80201708
    if (ctx->r14 == 0) {
        // 0x802016EC: nop
    
            goto L_80201708;
    }
    // 0x802016EC: nop

    // 0x802016F0: jal         0x80200684
    // 0x802016F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_3;
    // 0x802016F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802016F8: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x802016FC: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80201700: b           L_8020175C
    // 0x80201704: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
        goto L_8020175C;
    // 0x80201704: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
L_80201708:
    // 0x80201708: beq         $a2, $zero, L_80201714
    if (ctx->r6 == 0) {
        // 0x8020170C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80201714;
    }
    // 0x8020170C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80201710: sb          $t8, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r24;
L_80201714:
    // 0x80201714: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x80201718: beq         $t9, $zero, L_80201754
    if (ctx->r25 == 0) {
        // 0x8020171C: nop
    
            goto L_80201754;
    }
    // 0x8020171C: nop

    // 0x80201720: beq         $a2, $zero, L_80201754
    if (ctx->r6 == 0) {
        // 0x80201724: nop
    
            goto L_80201754;
    }
    // 0x80201724: nop

    // 0x80201728: beq         $a0, $zero, L_80201754
    if (ctx->r4 == 0) {
        // 0x8020172C: nop
    
            goto L_80201754;
    }
    // 0x8020172C: nop

    // 0x80201730: lw          $t0, 0x7C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X7C);
    // 0x80201734: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80201738: bne         $t1, $zero, L_80201754
    if (ctx->r9 != 0) {
        // 0x8020173C: sw          $t1, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r9;
            goto L_80201754;
    }
    // 0x8020173C: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x80201740: jal         0x80200684
    // 0x80201744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_4;
    // 0x80201744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80201748: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x8020174C: lw          $t3, -0x10C0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X10C0);
    // 0x80201750: sb          $zero, 0x9($t3)
    MEM_B(0X9, ctx->r11) = 0;
L_80201754:
    // 0x80201754: jal         0x8020407C
    // 0x80201758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_5;
    // 0x80201758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8020175C:
    // 0x8020175C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80201760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80201764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201768: jr          $ra
    // 0x8020176C: nop

    TRACE_RETURN()
    return;
    // 0x8020176C: nop

;}
RECOMP_FUNC void func_80202CF0_62E0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80202CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80202CF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80202CFC: lhu         $t6, 0x18($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X18);
    // 0x80202D00: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x80202D04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80202D08: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x80202D0C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80202D10: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80202D14: bne         $t9, $at, L_80202D24
    if (ctx->r25 != ctx->r1) {
        // 0x80202D18: sh          $t8, 0x18($a1)
        MEM_H(0X18, ctx->r5) = ctx->r24;
            goto L_80202D24;
    }
    // 0x80202D18: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80202D1C: jal         0x8003521C
    // 0x80202D20: addiu       $a0, $a0, 0x2D34
    ctx->r4 = ADD32(ctx->r4, 0X2D34);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80202D20: addiu       $a0, $a0, 0x2D34
    ctx->r4 = ADD32(ctx->r4, 0X2D34);
    after_0:
L_80202D24:
    // 0x80202D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80202D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80202D2C: jr          $ra
    // 0x80202D30: nop

    TRACE_RETURN()
    return;
    // 0x80202D30: nop

;}
RECOMP_FUNC void func_801E8FA4_614384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8FA4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801E8FA8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801E8FAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E8FB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E8FB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E8FB8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801E8FBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E8FC0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801E8FC4: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801E8FC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E8FCC: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801E8FD0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E8FD4: addiu       $t5, $zero, 0x400
    ctx->r13 = ADD32(0, 0X400);
    // 0x801E8FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E8FDC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E8FE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E8FE4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E8FE8: addiu       $a3, $a0, 0x70
    ctx->r7 = ADD32(ctx->r4, 0X70);
    // 0x801E8FEC: addiu       $t1, $a0, 0x74
    ctx->r9 = ADD32(ctx->r4, 0X74);
    // 0x801E8FF0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E8FF4: div.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801E8FF8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801E8FFC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x801E9000: nop

    // 0x801E9004: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x801E9008: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801E900C: addiu       $t0, $t9, 0x100
    ctx->r8 = ADD32(ctx->r25, 0X100);
    // 0x801E9010: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x801E9014: nop

    // 0x801E9018: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801E901C: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E9020: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801E9024: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x801E9028: nop

    // 0x801E902C: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x801E9030: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801E9034: subu        $t6, $t5, $t4
    ctx->r14 = SUB32(ctx->r13, ctx->r12);
    // 0x801E9038: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x801E903C: addiu       $t2, $a0, 0x78
    ctx->r10 = ADD32(ctx->r4, 0X78);
    // 0x801E9040: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801E9044: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801E9048: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801E904C: nop

    // 0x801E9050: cvt.w.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = CVT_W_S(ctx->f2.fl);
    // 0x801E9054: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801E9058: nop

    // 0x801E905C: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801E9060: beql        $a1, $zero, L_801E90B0
    if (ctx->r5 == 0) {
        // 0x801E9064: mfc1        $a1, $f4
        ctx->r5 = (int32_t)ctx->f4.u32l;
            goto L_801E90B0;
    }
    goto skip_0;
    // 0x801E9064: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    skip_0:
    // 0x801E9068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E906C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E9070: sub.s       $f4, $f2, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x801E9074: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x801E9078: nop

    // 0x801E907C: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801E9080: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x801E9084: nop

    // 0x801E9088: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x801E908C: bne         $a1, $zero, L_801E90A4
    if (ctx->r5 != 0) {
        // 0x801E9090: nop
    
            goto L_801E90A4;
    }
    // 0x801E9090: nop

    // 0x801E9094: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801E9098: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E909C: b           L_801E90BC
    // 0x801E90A0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_801E90BC;
    // 0x801E90A0: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_801E90A4:
    // 0x801E90A4: b           L_801E90BC
    // 0x801E90A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_801E90BC;
    // 0x801E90A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x801E90AC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
L_801E90B0:
    // 0x801E90B0: nop

    // 0x801E90B4: bltz        $a1, L_801E90A4
    if (SIGNED(ctx->r5) < 0) {
        // 0x801E90B8: nop
    
            goto L_801E90A4;
    }
    // 0x801E90B8: nop

L_801E90BC:
    // 0x801E90BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801E90C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E90C4: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x801E90C8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801E90CC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x801E90D0: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801E90D4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E90D8: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x801E90DC: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801E90E0: nop

    // 0x801E90E4: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801E90E8: beql        $a2, $zero, L_801E9138
    if (ctx->r6 == 0) {
        // 0x801E90EC: mfc1        $a2, $f6
        ctx->r6 = (int32_t)ctx->f6.u32l;
            goto L_801E9138;
    }
    goto skip_1;
    // 0x801E90EC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x801E90F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E90F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801E90F8: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E90FC: ctc1        $a2, $FpcCsr
    set_cop1_cs(ctx->r6);
    // 0x801E9100: nop

    // 0x801E9104: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x801E9108: cfc1        $a2, $FpcCsr
    ctx->r6 = get_cop1_cs();
    // 0x801E910C: nop

    // 0x801E9110: andi        $a2, $a2, 0x78
    ctx->r6 = ctx->r6 & 0X78;
    // 0x801E9114: bne         $a2, $zero, L_801E912C
    if (ctx->r6 != 0) {
        // 0x801E9118: nop
    
            goto L_801E912C;
    }
    // 0x801E9118: nop

    // 0x801E911C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801E9120: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E9124: b           L_801E9144
    // 0x801E9128: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
        goto L_801E9144;
    // 0x801E9128: or          $a2, $a2, $at
    ctx->r6 = ctx->r6 | ctx->r1;
L_801E912C:
    // 0x801E912C: b           L_801E9144
    // 0x801E9130: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_801E9144;
    // 0x801E9130: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801E9134: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
L_801E9138:
    // 0x801E9138: nop

    // 0x801E913C: bltz        $a2, L_801E912C
    if (SIGNED(ctx->r6) < 0) {
        // 0x801E9140: nop
    
            goto L_801E912C;
    }
    // 0x801E9140: nop

L_801E9144:
    // 0x801E9144: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x801E9148: andi        $t0, $a2, 0xFFFF
    ctx->r8 = ctx->r6 & 0XFFFF;
    // 0x801E914C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801E9150: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E9154: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E9158: jal         0x8000E68C
    // 0x801E915C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8000E68C_F28C(rdram, ctx);
        goto after_0;
    // 0x801E915C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E9160: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E9164: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9168: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x801E916C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9170: addiu       $a1, $a1, -0x4E78
    ctx->r5 = ADD32(ctx->r5, -0X4E78);
    // 0x801E9174: swc1        $f8, 0x74($t3)
    MEM_W(0X74, ctx->r11) = ctx->f8.u32l;
    // 0x801E9178: jal         0x801D2EE4
    // 0x801E917C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E917C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x801E9180: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9184: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E9188: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E918C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9190: jal         0x801D34D0
    // 0x801E9194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E9194: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x801E9198: jal         0x80038BC8
    // 0x801E919C: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E919C: addiu       $a0, $zero, 0x34E
    ctx->r4 = ADD32(0, 0X34E);
    after_3:
    // 0x801E91A0: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E91A4: jal         0x8003521C
    // 0x801E91A8: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E91A8: addiu       $a0, $a0, -0x7B78
    ctx->r4 = ADD32(ctx->r4, -0X7B78);
    after_4:
    // 0x801E91AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E91B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E91B4: jr          $ra
    // 0x801E91B8: nop

    TRACE_RETURN()
    return;
    // 0x801E91B8: nop

;}
RECOMP_FUNC void func_801F7AD0_622EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7AD0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801F7AD4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801F7AD8: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801F7ADC: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801F7AE0: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801F7AE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F7AE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F7AEC: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F7AF0: lwc1        $f16, -0x1794($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1794);
    // 0x801F7AF4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x801F7AF8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F7AFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7B00: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x801F7B04: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801F7B08: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801F7B0C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x801F7B10: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F7B14: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F7B18: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x801F7B1C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F7B20: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F7B24: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x801F7B28: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801F7B2C: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801F7B30: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801F7B34: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F7B38: jal         0x8000E808
    // 0x801F7B3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801F7B3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F7B40: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F7B44: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F7B48: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F7B4C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801F7B50: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7B54: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7B58: addiu       $a1, $a1, -0x660
    ctx->r5 = ADD32(ctx->r5, -0X660);
    // 0x801F7B5C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7B60: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x801F7B64: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F7B68: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F7B6C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801F7B70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F7B74: addiu       $t0, $zero, 0x4B2
    ctx->r8 = ADD32(0, 0X4B2);
    // 0x801F7B78: addiu       $a2, $a2, -0x5430
    ctx->r6 = ADD32(ctx->r6, -0X5430);
    // 0x801F7B7C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801F7B80: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x801F7B84: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F7B88: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F7B8C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801F7B90: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F7B94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801F7B98: addiu       $a0, $a0, 0x7CEC
    ctx->r4 = ADD32(ctx->r4, 0X7CEC);
    // 0x801F7B9C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x801F7BA0: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7BA4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801F7BA8: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    // 0x801F7BAC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801F7BB0: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x801F7BB4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801F7BB8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801F7BBC: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F7BC0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x801F7BC4: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801F7BC8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F7BCC: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x801F7BD0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801F7BD4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801F7BD8: jal         0x80035854
    // 0x801F7BDC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801F7BDC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x801F7BE0: beq         $v0, $zero, L_801F7CD8
    if (ctx->r2 == 0) {
        // 0x801F7BE4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801F7CD8;
    }
    // 0x801F7BE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801F7BE8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F7BEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F7BF0: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801F7BF4: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801F7BF8: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801F7BFC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801F7C00: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801F7C04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F7C08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801F7C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F7C10: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801F7C14: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801F7C18: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x801F7C1C: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801F7C20: jal         0x801E006C
    // 0x801F7C24: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801F7C24: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801F7C28: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x801F7C2C: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x801F7C30: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F7C34: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F7C38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F7C3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F7C40: sb          $t1, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r9;
    // 0x801F7C44: swc1        $f18, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->f18.u32l;
    // 0x801F7C48: swc1        $f4, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f4.u32l;
    // 0x801F7C4C: swc1        $f6, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->f6.u32l;
    // 0x801F7C50: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801F7C54: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801F7C58: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x801F7C5C: addiu       $t2, $s1, 0x74
    ctx->r10 = ADD32(ctx->r17, 0X74);
    // 0x801F7C60: addiu       $t3, $s1, 0x78
    ctx->r11 = ADD32(ctx->r17, 0X78);
    // 0x801F7C64: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801F7C68: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801F7C6C: addiu       $a3, $s1, 0x70
    ctx->r7 = ADD32(ctx->r17, 0X70);
    // 0x801F7C70: jal         0x8000E808
    // 0x801F7C74: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_8000E808_F408(rdram, ctx);
        goto after_3;
    // 0x801F7C74: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_3:
    // 0x801F7C78: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x801F7C7C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x801F7C80: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801F7C84: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x801F7C88: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x801F7C8C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x801F7C90: addiu       $t9, $zero, -0x32
    ctx->r25 = ADD32(0, -0X32);
    // 0x801F7C94: sb          $t4, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r12;
    // 0x801F7C98: sw          $t5, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r13;
    // 0x801F7C9C: sb          $v1, 0x4C($s1)
    MEM_B(0X4C, ctx->r17) = ctx->r3;
    // 0x801F7CA0: sh          $t6, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r14;
    // 0x801F7CA4: sh          $t7, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r15;
    // 0x801F7CA8: sh          $zero, 0x52($s1)
    MEM_H(0X52, ctx->r17) = 0;
    // 0x801F7CAC: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    // 0x801F7CB0: sh          $t8, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r24;
    // 0x801F7CB4: sh          $t9, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r25;
    // 0x801F7CB8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7CBC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F7CC0: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F7CC4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F7CC8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x801F7CCC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801F7CD0: jal         0x8000F3D8
    // 0x801F7CD4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801F7CD4: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_801F7CD8:
    // 0x801F7CD8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801F7CDC: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801F7CE0: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801F7CE4: jr          $ra
    // 0x801F7CE8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801F7CE8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801F47E0_61FBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F47E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F47E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F47E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F47EC: jal         0x801F7074
    // 0x801F47F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F47F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F47F4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F47F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F47FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F4800: lwc1        $f6, 0x70($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801F4804: lwc1        $f10, 0x78($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X78);
    // 0x801F4808: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801F480C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F4810: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4814: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F4818: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F481C: swc1        $f4, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f4.u32l;
    // 0x801F4820: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801F4824: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
    // 0x801F4828: swc1        $f16, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f16.u32l;
    // 0x801F482C: jal         0x801D2EE4
    // 0x801F4830: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F4830: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F4834: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F4838: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F483C: addiu       $a0, $a0, 0x4860
    ctx->r4 = ADD32(ctx->r4, 0X4860);
    // 0x801F4840: lw          $t6, 0xE8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XE8);
    // 0x801F4844: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801F4848: jal         0x8003521C
    // 0x801F484C: sw          $t7, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F484C: sw          $t7, 0xE8($a2)
    MEM_W(0XE8, ctx->r6) = ctx->r15;
    after_2:
    // 0x801F4850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4858: jr          $ra
    // 0x801F485C: nop

    TRACE_RETURN()
    return;
    // 0x801F485C: nop

;}
RECOMP_FUNC void func_801E6024_611404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E6024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E602C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6030: jal         0x801EF2B0
    // 0x801E6034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_0;
    // 0x801E6034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E6038: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E603C: addiu       $a1, $a1, -0x4E88
    ctx->r5 = ADD32(ctx->r5, -0X4E88);
    // 0x801E6040: jal         0x801D31CC
    // 0x801E6044: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E6044: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E6048: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E604C: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E6050: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E6054: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E6058: jal         0x801D34D0
    // 0x801E605C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E605C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E6060: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E6064: jal         0x8003521C
    // 0x801E6068: addiu       $a0, $a0, 0x607C
    ctx->r4 = ADD32(ctx->r4, 0X607C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E6068: addiu       $a0, $a0, 0x607C
    ctx->r4 = ADD32(ctx->r4, 0X607C);
    after_3:
    // 0x801E606C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E6070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E6074: jr          $ra
    // 0x801E6078: nop

    TRACE_RETURN()
    return;
    // 0x801E6078: nop

;}
RECOMP_FUNC void func_801D27BC_5FDB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D27BC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D27C0: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D27C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D27C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D27CC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801D27D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x801D27D4: addiu       $a1, $v0, 0x140
    ctx->r5 = ADD32(ctx->r2, 0X140);
    // 0x801D27D8: lbu         $t7, 0xE($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XE);
    // 0x801D27DC: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x801D27E0: beql        $t7, $zero, L_801D27F0
    if (ctx->r15 == 0) {
        // 0x801D27E4: lbu         $t8, 0x2C5($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X2C5);
            goto L_801D27F0;
    }
    goto skip_0;
    // 0x801D27E4: lbu         $t8, 0x2C5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2C5);
    skip_0:
    // 0x801D27E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D27EC: lbu         $t8, 0x2C5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2C5);
L_801D27F0:
    // 0x801D27F0: beql        $t8, $zero, L_801D2800
    if (ctx->r24 == 0) {
        // 0x801D27F4: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_801D2800;
    }
    goto skip_1;
    // 0x801D27F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    skip_1:
    // 0x801D27F8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D27FC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_801D2800:
    // 0x801D2800: jal         0x801D3A18
    // 0x801D2804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_0;
    // 0x801D2804: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D2808: beq         $v0, $zero, L_801D2814
    if (ctx->r2 == 0) {
        // 0x801D280C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_801D2814;
    }
    // 0x801D280C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801D2810: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D2814:
    // 0x801D2814: beq         $v1, $zero, L_801D2BD4
    if (ctx->r3 == 0) {
        // 0x801D2818: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_801D2BD4;
    }
    // 0x801D2818: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801D281C: lbu         $t0, 0xC($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XC);
    // 0x801D2820: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D2824: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801D2828: bne         $t0, $at, L_801D2864
    if (ctx->r8 != ctx->r1) {
        // 0x801D282C: addiu       $t2, $zero, 0x9
        ctx->r10 = ADD32(0, 0X9);
            goto L_801D2864;
    }
    // 0x801D282C: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x801D2830: sb          $t1, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r9;
    // 0x801D2834: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x801D2838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D283C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x801D2840: jal         0x80037C9C
    // 0x801D2844: sh          $t2, 0x2E($t3)
    MEM_H(0X2E, ctx->r11) = ctx->r10;
    func_80037C9C_3889C(rdram, ctx);
        goto after_1;
    // 0x801D2844: sh          $t2, 0x2E($t3)
    MEM_H(0X2E, ctx->r11) = ctx->r10;
    after_1:
    // 0x801D2848: lui         $a2, 0xAAAA
    ctx->r6 = S32(0XAAAA << 16);
    // 0x801D284C: ori         $a2, $a2, 0xAAAA
    ctx->r6 = ctx->r6 | 0XAAAA;
    // 0x801D2850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2854: jal         0x80037C20
    // 0x801D2858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_2;
    // 0x801D2858: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x801D285C: b           L_801D2B04
    // 0x801D2860: nop

        goto L_801D2B04;
    // 0x801D2860: nop

L_801D2864:
    // 0x801D2864: lbu         $t4, 0x4C($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X4C);
    // 0x801D2868: addiu       $t5, $t4, -0x32
    ctx->r13 = ADD32(ctx->r12, -0X32);
    // 0x801D286C: sltiu       $at, $t5, 0x2B
    ctx->r1 = ctx->r13 < 0X2B ? 1 : 0;
    // 0x801D2870: beq         $at, $zero, L_801D288C
    if (ctx->r1 == 0) {
        // 0x801D2874: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_801D288C;
    }
    // 0x801D2874: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x801D2878: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D287C: addu        $at, $at, $t5
    gpr jr_addend_801D2884 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801D2880: lw          $t5, -0x2D80($at)
    ctx->r13 = ADD32(ctx->r1, -0X2D80);
    // 0x801D2884: jr          $t5
    // 0x801D2888: nop

    switch (jr_addend_801D2884 >> 2) {
        case 0: goto L_801D288C; break;
        case 1: goto L_801D288C; break;
        case 2: goto L_801D288C; break;
        case 3: goto L_801D288C; break;
        case 4: goto L_801D288C; break;
        case 5: goto L_801D288C; break;
        case 6: goto L_801D288C; break;
        case 7: goto L_801D288C; break;
        case 8: goto L_801D288C; break;
        case 9: goto L_801D288C; break;
        case 10: goto L_801D290C; break;
        case 11: goto L_801D290C; break;
        case 12: goto L_801D290C; break;
        case 13: goto L_801D288C; break;
        case 14: goto L_801D288C; break;
        case 15: goto L_801D288C; break;
        case 16: goto L_801D288C; break;
        case 17: goto L_801D288C; break;
        case 18: goto L_801D288C; break;
        case 19: goto L_801D288C; break;
        case 20: goto L_801D298C; break;
        case 21: goto L_801D298C; break;
        case 22: goto L_801D298C; break;
        case 23: goto L_801D288C; break;
        case 24: goto L_801D288C; break;
        case 25: goto L_801D288C; break;
        case 26: goto L_801D288C; break;
        case 27: goto L_801D288C; break;
        case 28: goto L_801D288C; break;
        case 29: goto L_801D288C; break;
        case 30: goto L_801D2A0C; break;
        case 31: goto L_801D2A0C; break;
        case 32: goto L_801D2A0C; break;
        case 33: goto L_801D2A0C; break;
        case 34: goto L_801D2A0C; break;
        case 35: goto L_801D2A0C; break;
        case 36: goto L_801D2A0C; break;
        case 37: goto L_801D288C; break;
        case 38: goto L_801D288C; break;
        case 39: goto L_801D288C; break;
        case 40: goto L_801D2A8C; break;
        case 41: goto L_801D2A8C; break;
        case 42: goto L_801D2A8C; break;
        default: switch_error(__func__, 0x801D2884, 0x8020D280);
    }
    // 0x801D2888: nop

L_801D288C:
    // 0x801D288C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2890: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D2894: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D2898: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801D289C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801D28A0: nop

    // 0x801D28A4: bc1fl       L_801D28DC
    if (!c1cs) {
        // 0x801D28A8: addiu       $t6, $zero, 0x6
        ctx->r14 = ADD32(0, 0X6);
            goto L_801D28DC;
    }
    goto skip_2;
    // 0x801D28A8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    skip_2:
    // 0x801D28AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D28B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801D28B4: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x801D28B8: jal         0x801CEFB0
    // 0x801D28BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801CEFB0_5FA390(rdram, ctx);
        goto after_3;
    // 0x801D28BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x801D28C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D28C4: jal         0x801CF3DC
    // 0x801D28C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_4;
    // 0x801D28C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x801D28CC: jal         0x801CEE80
    // 0x801D28D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_5;
    // 0x801D28D0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x801D28D4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D28D8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
L_801D28DC:
    // 0x801D28DC: sh          $t6, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r14;
    // 0x801D28E0: jal         0x80038BC8
    // 0x801D28E4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    func_80038BC8_397C8(rdram, ctx);
        goto after_6;
    // 0x801D28E4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_6:
    // 0x801D28E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D28EC: jal         0x80037C9C
    // 0x801D28F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_7;
    // 0x801D28F0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_7:
    // 0x801D28F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D28F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D28FC: jal         0x80037C20
    // 0x801D2900: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_8;
    // 0x801D2900: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_8:
    // 0x801D2904: b           L_801D2B04
    // 0x801D2908: nop

        goto L_801D2B04;
    // 0x801D2908: nop

L_801D290C:
    // 0x801D290C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801D2910: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D2914: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D2918: lwc1        $f16, 0x3C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x801D291C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x801D2920: nop

    // 0x801D2924: bc1fl       L_801D2958
    if (!c1cs) {
        // 0x801D2928: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_801D2958;
    }
    goto skip_3;
    // 0x801D2928: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_3:
    // 0x801D292C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D2930: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D2934: swc1        $f18, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f18.u32l;
    // 0x801D2938: jal         0x801CEFB0
    // 0x801D293C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801CEFB0_5FA390(rdram, ctx);
        goto after_9;
    // 0x801D293C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_9:
    // 0x801D2940: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D2944: jal         0x801CF3DC
    // 0x801D2948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_10;
    // 0x801D2948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x801D294C: jal         0x801CEE80
    // 0x801D2950: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_11;
    // 0x801D2950: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
    // 0x801D2954: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_801D2958:
    // 0x801D2958: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801D295C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    // 0x801D2960: jal         0x80038BC8
    // 0x801D2964: sh          $t8, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r24;
    func_80038BC8_397C8(rdram, ctx);
        goto after_12;
    // 0x801D2964: sh          $t8, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r24;
    after_12:
    // 0x801D2968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D296C: jal         0x80037C9C
    // 0x801D2970: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_13;
    // 0x801D2970: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_13:
    // 0x801D2974: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D297C: jal         0x80037C20
    // 0x801D2980: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_14;
    // 0x801D2980: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_14:
    // 0x801D2984: b           L_801D2B04
    // 0x801D2988: nop

        goto L_801D2B04;
    // 0x801D2988: nop

L_801D298C:
    // 0x801D298C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2990: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D2994: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D2998: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801D299C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801D29A0: nop

    // 0x801D29A4: bc1fl       L_801D29DC
    if (!c1cs) {
        // 0x801D29A8: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_801D29DC;
    }
    goto skip_4;
    // 0x801D29A8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    skip_4:
    // 0x801D29AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D29B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D29B4: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x801D29B8: jal         0x801CEFB0
    // 0x801D29BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801CEFB0_5FA390(rdram, ctx);
        goto after_15;
    // 0x801D29BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_15:
    // 0x801D29C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D29C4: jal         0x801CF3DC
    // 0x801D29C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_16;
    // 0x801D29C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x801D29CC: jal         0x801CEE80
    // 0x801D29D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_17;
    // 0x801D29D0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_17:
    // 0x801D29D4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D29D8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_801D29DC:
    // 0x801D29DC: sh          $t1, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r9;
    // 0x801D29E0: jal         0x80038BC8
    // 0x801D29E4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    func_80038BC8_397C8(rdram, ctx);
        goto after_18;
    // 0x801D29E4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_18:
    // 0x801D29E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D29EC: jal         0x80037C9C
    // 0x801D29F0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_19;
    // 0x801D29F0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_19:
    // 0x801D29F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D29F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D29FC: jal         0x80037C20
    // 0x801D2A00: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_20;
    // 0x801D2A00: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_20:
    // 0x801D2A04: b           L_801D2B04
    // 0x801D2A08: nop

        goto L_801D2B04;
    // 0x801D2A08: nop

L_801D2A0C:
    // 0x801D2A0C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2A10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D2A14: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D2A18: lwc1        $f16, 0x3C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801D2A1C: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x801D2A20: nop

    // 0x801D2A24: bc1fl       L_801D2A5C
    if (!c1cs) {
        // 0x801D2A28: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_801D2A5C;
    }
    goto skip_5;
    // 0x801D2A28: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    skip_5:
    // 0x801D2A2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D2A30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D2A34: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x801D2A38: jal         0x801CEFB0
    // 0x801D2A3C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801CEFB0_5FA390(rdram, ctx);
        goto after_21;
    // 0x801D2A3C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_21:
    // 0x801D2A40: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D2A44: jal         0x801CF3DC
    // 0x801D2A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_22;
    // 0x801D2A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x801D2A4C: jal         0x801CEE80
    // 0x801D2A50: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_23;
    // 0x801D2A50: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_23:
    // 0x801D2A54: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2A58: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_801D2A5C:
    // 0x801D2A5C: sh          $t9, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r25;
    // 0x801D2A60: jal         0x80038BC8
    // 0x801D2A64: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    func_80038BC8_397C8(rdram, ctx);
        goto after_24;
    // 0x801D2A64: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_24:
    // 0x801D2A68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2A6C: jal         0x80037C9C
    // 0x801D2A70: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_25;
    // 0x801D2A70: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_25:
    // 0x801D2A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2A78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2A7C: jal         0x80037C20
    // 0x801D2A80: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_26;
    // 0x801D2A80: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_26:
    // 0x801D2A84: b           L_801D2B04
    // 0x801D2A88: nop

        goto L_801D2B04;
    // 0x801D2A88: nop

L_801D2A8C:
    // 0x801D2A8C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2A90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D2A94: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x801D2A98: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801D2A9C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x801D2AA0: nop

    // 0x801D2AA4: bc1fl       L_801D2ADC
    if (!c1cs) {
        // 0x801D2AA8: addiu       $t2, $zero, 0x7
        ctx->r10 = ADD32(0, 0X7);
            goto L_801D2ADC;
    }
    goto skip_6;
    // 0x801D2AA8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    skip_6:
    // 0x801D2AAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D2AB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801D2AB4: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x801D2AB8: jal         0x801CEFB0
    // 0x801D2ABC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801CEFB0_5FA390(rdram, ctx);
        goto after_27;
    // 0x801D2ABC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_27:
    // 0x801D2AC0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801D2AC4: jal         0x801CF3DC
    // 0x801D2AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801CF3DC_5FA7BC(rdram, ctx);
        goto after_28;
    // 0x801D2AC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x801D2ACC: jal         0x801CEE80
    // 0x801D2AD0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_29;
    // 0x801D2AD0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_29:
    // 0x801D2AD4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801D2AD8: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
L_801D2ADC:
    // 0x801D2ADC: sh          $t2, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r10;
    // 0x801D2AE0: jal         0x80038BC8
    // 0x801D2AE4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    func_80038BC8_397C8(rdram, ctx);
        goto after_30;
    // 0x801D2AE4: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_30:
    // 0x801D2AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2AEC: jal         0x80037C9C
    // 0x801D2AF0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_80037C9C_3889C(rdram, ctx);
        goto after_31;
    // 0x801D2AF0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_31:
    // 0x801D2AF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801D2AF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801D2AFC: jal         0x80037C20
    // 0x801D2B00: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_32;
    // 0x801D2B00: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_32:
L_801D2B04:
    // 0x801D2B04: jal         0x801D3770
    // 0x801D2B08: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D3770_5FEB50(rdram, ctx);
        goto after_33;
    // 0x801D2B08: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_33:
    // 0x801D2B0C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x801D2B10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D2B14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D2B18: lbu         $t4, 0xC($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XC);
    // 0x801D2B1C: bne         $t4, $at, L_801D2B34
    if (ctx->r12 != ctx->r1) {
        // 0x801D2B20: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801D2B34;
    }
    // 0x801D2B20: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801D2B24: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801D2B28: mflo        $a0
    ctx->r4 = lo;
    // 0x801D2B2C: nop

    // 0x801D2B30: nop

L_801D2B34:
    // 0x801D2B34: jal         0x801D38A4
    // 0x801D2B38: nop

    func_801D38A4_5FEC84(rdram, ctx);
        goto after_34;
    // 0x801D2B38: nop

    after_34:
    // 0x801D2B3C: bne         $v0, $zero, L_801D2B64
    if (ctx->r2 != 0) {
        // 0x801D2B40: lui         $t7, 0x8016
        ctx->r15 = S32(0X8016 << 16);
            goto L_801D2B64;
    }
    // 0x801D2B40: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801D2B44: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801D2B48: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801D2B4C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x801D2B50: sb          $t5, 0x2C4($t6)
    MEM_B(0X2C4, ctx->r14) = ctx->r13;
    // 0x801D2B54: jal         0x801D389C
    // 0x801D2B58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D389C_5FEC7C(rdram, ctx);
        goto after_35;
    // 0x801D2B58: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_35:
    // 0x801D2B5C: b           L_801D2BE0
    // 0x801D2B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D2BE0;
    // 0x801D2B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D2B64:
    // 0x801D2B64: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801D2B68: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801D2B6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801D2B70: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x801D2B74: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x801D2B78: beq         $at, $zero, L_801D2BC4
    if (ctx->r1 == 0) {
        // 0x801D2B7C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_801D2BC4;
    }
    // 0x801D2B7C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x801D2B80: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D2B84: addu        $at, $at, $t8
    gpr jr_addend_801D2B8C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801D2B88: lw          $t8, -0x2CD4($at)
    ctx->r24 = ADD32(ctx->r1, -0X2CD4);
    // 0x801D2B8C: jr          $t8
    // 0x801D2B90: nop

    switch (jr_addend_801D2B8C >> 2) {
        case 0: goto L_801D2BC4; break;
        case 1: goto L_801D2BC4; break;
        case 2: goto L_801D2B94; break;
        case 3: goto L_801D2BC4; break;
        case 4: goto L_801D2BC4; break;
        default: switch_error(__func__, 0x801D2B8C, 0x8020D32C);
    }
    // 0x801D2B90: nop

L_801D2B94:
    // 0x801D2B94: jal         0x801D391C
    // 0x801D2B98: nop

    func_801D391C_5FECFC(rdram, ctx);
        goto after_36;
    // 0x801D2B98: nop

    after_36:
    // 0x801D2B9C: slti        $at, $v0, 0xC9
    ctx->r1 = SIGNED(ctx->r2) < 0XC9 ? 1 : 0;
    // 0x801D2BA0: beq         $at, $zero, L_801D2BC4
    if (ctx->r1 == 0) {
        // 0x801D2BA4: nop
    
            goto L_801D2BC4;
    }
    // 0x801D2BA4: nop

    // 0x801D2BA8: jal         0x801F71DC
    // 0x801D2BAC: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_37;
    // 0x801D2BAC: nop

    after_37:
    // 0x801D2BB0: bne         $v0, $zero, L_801D2BC4
    if (ctx->r2 != 0) {
        // 0x801D2BB4: lui         $t1, 0x8021
        ctx->r9 = S32(0X8021 << 16);
            goto L_801D2BC4;
    }
    // 0x801D2BB4: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D2BB8: lw          $t1, -0x1130($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1130);
    // 0x801D2BBC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D2BC0: sb          $t0, 0x2C5($t1)
    MEM_B(0X2C5, ctx->r9) = ctx->r8;
L_801D2BC4:
    // 0x801D2BC4: jal         0x801D389C
    // 0x801D2BC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D389C_5FEC7C(rdram, ctx);
        goto after_38;
    // 0x801D2BC8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_38:
    // 0x801D2BCC: b           L_801D2BE0
    // 0x801D2BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D2BE0;
    // 0x801D2BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D2BD4:
    // 0x801D2BD4: jal         0x801D389C
    // 0x801D2BD8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801D389C_5FEC7C(rdram, ctx);
        goto after_39;
    // 0x801D2BD8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_39:
    // 0x801D2BDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D2BE0:
    // 0x801D2BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D2BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D2BE8: jr          $ra
    // 0x801D2BEC: nop

    TRACE_RETURN()
    return;
    // 0x801D2BEC: nop

;}
RECOMP_FUNC void func_801D0D44_5FC124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0D44: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D0D48: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x801D0D4C: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x801D0D50: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x801D0D54: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x801D0D58: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x801D0D5C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x801D0D60: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x801D0D64: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D0D68: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D0D6C: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x801D0D70: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x801D0D74: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x801D0D78: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x801D0D7C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x801D0D80: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801D0D84: lw          $s1, 0xD0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XD0);
    // 0x801D0D88: lui         $s6, 0x3
    ctx->r22 = S32(0X3 << 16);
    // 0x801D0D8C: ori         $s6, $s6, 0x8000
    ctx->r22 = ctx->r22 | 0X8000;
    // 0x801D0D90: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x801D0D94: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801D0D98: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x801D0D9C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801D0DA0: blez        $v1, L_801D0F4C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D0DA4: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_801D0F4C;
    }
    // 0x801D0DA4: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801D0DA8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801D0DAC: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x801D0DB0: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x801D0DB4: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801D0DB8: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x801D0DBC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x801D0DC0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D0DC4: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801D0DC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0DCC: lui         $s5, 0x8016
    ctx->r21 = S32(0X8016 << 16);
    // 0x801D0DD0: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801D0DD4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801D0DD8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D0DDC: addiu       $s5, $s5, -0x3A38
    ctx->r21 = ADD32(ctx->r21, -0X3A38);
    // 0x801D0DE0: ldc1        $f20, -0x2DE8($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X2DE8);
    // 0x801D0DE4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_801D0DE8:
    // 0x801D0DE8: blez        $v0, L_801D0F3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801D0DEC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_801D0F3C;
    }
    // 0x801D0DEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801D0DF0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801D0DF4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801D0DF8: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
L_801D0DFC:
    // 0x801D0DFC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D0E00: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x801D0E04: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x801D0E08: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x801D0E0C: bgez        $t8, L_801D0E24
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801D0E10: cvt.d.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
            goto L_801D0E24;
    }
    // 0x801D0E10: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0E14: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D0E18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D0E1C: nop

    // 0x801D0E20: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801D0E24:
    // 0x801D0E24: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x801D0E28: mul.d       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801D0E2C: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x801D0E30: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x801D0E34: multu       $t0, $s7
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D0E38: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D0E3C: mul.d       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f22.d);
    // 0x801D0E40: mflo        $t1
    ctx->r9 = lo;
    // 0x801D0E44: addiu       $t2, $t1, 0x5
    ctx->r10 = ADD32(ctx->r9, 0X5);
    // 0x801D0E48: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801D0E4C: add.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f16.d + ctx->f4.d;
    // 0x801D0E50: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D0E54: add.d       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f8.d + ctx->f10.d;
    // 0x801D0E58: mul.d       $f16, $f18, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f26.d);
    // 0x801D0E5C: trunc.w.d   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x801D0E60: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x801D0E64: jal         0x80003E10
    // 0x801D0E68: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_0;
    // 0x801D0E68: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_0:
    // 0x801D0E6C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x801D0E70: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x801D0E74: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D0E78: addu        $t7, $t6, $s6
    ctx->r15 = ADD32(ctx->r14, ctx->r22);
    // 0x801D0E7C: lhu         $t8, 0x2DCE($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X2DCE);
    // 0x801D0E80: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801D0E84: bgez        $t8, L_801D0E9C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801D0E88: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_801D0E9C;
    }
    // 0x801D0E88: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801D0E8C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801D0E90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801D0E94: nop

    // 0x801D0E98: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_801D0E9C:
    // 0x801D0E9C: mul.d       $f18, $f8, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x801D0EA0: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x801D0EA4: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x801D0EA8: subu        $t0, $t9, $s4
    ctx->r8 = SUB32(ctx->r25, ctx->r20);
    // 0x801D0EAC: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x801D0EB0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x801D0EB4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0EB8: mul.d       $f16, $f18, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f18.d, ctx->f22.d);
    // 0x801D0EBC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801D0EC0: nop

    // 0x801D0EC4: cvt.d.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D0EC8: add.d       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f16.d + ctx->f6.d;
    // 0x801D0ECC: add.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f10.d + ctx->f18.d;
    // 0x801D0ED0: mul.d       $f16, $f4, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801D0ED4: trunc.w.d   $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.u32l = TRUNC_W_D(ctx->f16.d);
    // 0x801D0ED8: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x801D0EDC: jal         0x80003E10
    // 0x801D0EE0: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    func_80003E10_4A10(rdram, ctx);
        goto after_1;
    // 0x801D0EE0: andi        $a0, $t4, 0x3FF
    ctx->r4 = ctx->r12 & 0X3FF;
    after_1:
    // 0x801D0EE4: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x801D0EE8: add.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x801D0EEC: lw          $t6, 0x58($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X58);
    // 0x801D0EF0: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x801D0EF4: multu       $s4, $t0
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801D0EF8: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x801D0EFC: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x801D0F00: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801D0F04: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801D0F08: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x801D0F0C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801D0F10: mflo        $t1
    ctx->r9 = lo;
    // 0x801D0F14: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801D0F18: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x801D0F1C: swc1        $f10, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f10.u32l;
    // 0x801D0F20: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x801D0F24: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x801D0F28: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D0F2C: bnel        $at, $zero, L_801D0DFC
    if (ctx->r1 != 0) {
        // 0x801D0F30: lw          $t6, 0x0($s5)
        ctx->r14 = MEM_W(ctx->r21, 0X0);
            goto L_801D0DFC;
    }
    goto skip_0;
    // 0x801D0F30: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    skip_0:
    // 0x801D0F34: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x801D0F38: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_801D0F3C:
    // 0x801D0F3C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801D0F40: slt         $at, $s4, $v1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x801D0F44: bne         $at, $zero, L_801D0DE8
    if (ctx->r1 != 0) {
        // 0x801D0F48: nop
    
            goto L_801D0DE8;
    }
    // 0x801D0F48: nop

L_801D0F4C:
    // 0x801D0F4C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x801D0F50: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801D0F54: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x801D0F58: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x801D0F5C: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x801D0F60: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x801D0F64: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x801D0F68: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D0F6C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D0F70: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x801D0F74: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x801D0F78: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x801D0F7C: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x801D0F80: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x801D0F84: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x801D0F88: jr          $ra
    // 0x801D0F8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x801D0F8C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801D5D98_601178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5D98: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801D5D9C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801D5DA0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D5DA4: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801D5DA8: lwc1        $f16, 0x78($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D5DAC: lwc1        $f18, 0x70($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D5DB0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801D5DB4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801D5DB8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D5DBC: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801D5DC0: nop

    // 0x801D5DC4: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801D5DC8: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D5DCC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801D5DD0: sqrt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = sqrtf(ctx->f0.fl);
    // 0x801D5DD4: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D5DD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D5DDC: bgez        $t6, L_801D5DF0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D5DE0: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_801D5DF0;
    }
    // 0x801D5DE0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801D5DE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5DE8: nop

    // 0x801D5DEC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_801D5DF0:
    // 0x801D5DF0: div.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x801D5DF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D5DF8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D5DFC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801D5E00: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x801D5E04: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801D5E08: nop

    // 0x801D5E0C: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801D5E10: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801D5E14: nop

    // 0x801D5E18: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801D5E1C: beql        $v0, $zero, L_801D5E84
    if (ctx->r2 == 0) {
        // 0x801D5E20: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_801D5E84;
    }
    goto skip_0;
    // 0x801D5E20: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x801D5E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D5E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D5E2C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801D5E30: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801D5E34: nop

    // 0x801D5E38: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801D5E3C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801D5E40: nop

    // 0x801D5E44: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801D5E48: bnel        $v0, $zero, L_801D5E70
    if (ctx->r2 != 0) {
        // 0x801D5E4C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_801D5E70;
    }
    goto skip_1;
    // 0x801D5E4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x801D5E50: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801D5E54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D5E58: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D5E5C: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x801D5E60: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801D5E64: jr          $ra
    // 0x801D5E68: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x801D5E68: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_801D5E6C:
    // 0x801D5E6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801D5E70:
    // 0x801D5E70: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801D5E74: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D5E78: jr          $ra
    // 0x801D5E7C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x801D5E7C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801D5E80: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_801D5E84:
    // 0x801D5E84: nop

    // 0x801D5E88: bltz        $v0, L_801D5E6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801D5E8C: andi        $t8, $v0, 0xFFFF
        ctx->r24 = ctx->r2 & 0XFFFF;
            goto L_801D5E6C;
    }
    // 0x801D5E8C: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x801D5E90: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x801D5E94: jr          $ra
    // 0x801D5E98: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    TRACE_RETURN()
    return;
    // 0x801D5E98: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_801D6C4C_60202C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D6C50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D6C54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D6C58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D6C5C: jal         0x801D6CB0
    // 0x801D6C60: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    func_801D6CB0_602090(rdram, ctx);
        goto after_0;
    // 0x801D6C60: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    after_0:
    // 0x801D6C64: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D6C68: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x801D6C6C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D6C70: jal         0x801D6CB0
    // 0x801D6C74: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_801D6CB0_602090(rdram, ctx);
        goto after_1;
    // 0x801D6C74: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x801D6C78: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D6C7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D6C80: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x801D6C84: jal         0x801D60E4
    // 0x801D6C88: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801D6C88: sb          $t7, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r15;
    after_2:
    // 0x801D6C8C: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x801D6C90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D6C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D6C98: bne         $t8, $at, L_801D6CA8
    if (ctx->r24 != ctx->r1) {
        // 0x801D6C9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D6CA8;
    }
    // 0x801D6C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D6CA0: b           L_801D6CA8
    // 0x801D6CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D6CA8;
    // 0x801D6CA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D6CA8:
    // 0x801D6CA8: jr          $ra
    // 0x801D6CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801D6CAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801FA00C_6253EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA00C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801FA010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FA014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FA018: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801FA01C: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FA020: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FA024: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FA028: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801FA02C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FA030: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x801FA034: bgtz        $t7, L_801FA0CC
    if (SIGNED(ctx->r15) > 0) {
        // 0x801FA038: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_801FA0CC;
    }
    // 0x801FA038: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801FA03C: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x801FA040: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x801FA044: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801FA048: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801FA04C: slti        $at, $t0, 0x156
    ctx->r1 = SIGNED(ctx->r8) < 0X156 ? 1 : 0;
    // 0x801FA050: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x801FA054: beq         $at, $zero, L_801FA068
    if (ctx->r1 == 0) {
        // 0x801FA058: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_801FA068;
    }
    // 0x801FA058: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801FA05C: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA060: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801FA064: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
L_801FA068:
    // 0x801FA068: lwc1        $f12, 0x94($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801FA06C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x801FA070: jal         0x8000E630
    // 0x801FA074: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801FA074: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    after_0:
    // 0x801FA078: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x801FA07C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801FA080: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801FA084: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801FA088: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x801FA08C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801FA090: addiu       $at, $zero, 0x155
    ctx->r1 = ADD32(0, 0X155);
    // 0x801FA094: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x801FA098: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801FA09C: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x801FA0A0: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x801FA0A4: bne         $t1, $at, L_801FA0CC
    if (ctx->r9 != ctx->r1) {
        // 0x801FA0A8: nop
    
            goto L_801FA0CC;
    }
    // 0x801FA0A8: nop

    // 0x801FA0AC: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x801FA0B0: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801FA0B4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA0B8: addiu       $a0, $a0, -0x5F18
    ctx->r4 = ADD32(ctx->r4, -0X5F18);
    // 0x801FA0BC: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x801FA0C0: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801FA0C4: jal         0x8003521C
    // 0x801FA0C8: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FA0C8: swc1        $f4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->f4.u32l;
    after_1:
L_801FA0CC:
    // 0x801FA0CC: jal         0x801EE658
    // 0x801FA0D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE658_619A38(rdram, ctx);
        goto after_2;
    // 0x801FA0D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801FA0D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA0D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FA0DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801FA0E0: jr          $ra
    // 0x801FA0E4: nop

    TRACE_RETURN()
    return;
    // 0x801FA0E4: nop

;}
RECOMP_FUNC void func_8020407C_62F45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020407C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80204080: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80204084: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x80204088: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x8020408C: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80204090: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x80204094: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80204098: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8020409C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x802040A0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x802040A4: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x802040A8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x802040AC: lbu         $t8, 0x6($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6);
    // 0x802040B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802040B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802040B8: beq         $t8, $at, L_80204140
    if (ctx->r24 == ctx->r1) {
        // 0x802040BC: lw          $s1, 0x18($a0)
        ctx->r17 = MEM_W(ctx->r4, 0X18);
            goto L_80204140;
    }
    // 0x802040BC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x802040C0: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802040C4: beq         $v0, $zero, L_80204124
    if (ctx->r2 == 0) {
        // 0x802040C8: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80204124;
    }
    // 0x802040C8: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x802040CC: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x802040D0: beq         $t1, $zero, L_802040E8
    if (ctx->r9 == 0) {
        // 0x802040D4: sw          $t9, 0xB0($a0)
        MEM_W(0XB0, ctx->r4) = ctx->r25;
            goto L_802040E8;
    }
    // 0x802040D4: sw          $t9, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r25;
    // 0x802040D8: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x802040DC: addiu       $t2, $t2, -0x5198
    ctx->r10 = ADD32(ctx->r10, -0X5198);
    // 0x802040E0: b           L_802040F4
    // 0x802040E4: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
        goto L_802040F4;
    // 0x802040E4: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
L_802040E8:
    // 0x802040E8: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x802040EC: addiu       $t3, $t3, -0x50D0
    ctx->r11 = ADD32(ctx->r11, -0X50D0);
    // 0x802040F0: sw          $t3, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r11;
L_802040F4:
    // 0x802040F4: lw          $t4, 0xB0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XB0);
    // 0x802040F8: slti        $at, $t4, 0x27
    ctx->r1 = SIGNED(ctx->r12) < 0X27 ? 1 : 0;
    // 0x802040FC: bne         $at, $zero, L_80204114
    if (ctx->r1 != 0) {
        // 0x80204100: nop
    
            goto L_80204114;
    }
    // 0x80204100: nop

    // 0x80204104: jal         0x802045F4
    // 0x80204108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802045F4_62F9D4(rdram, ctx);
        goto after_0;
    // 0x80204108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8020410C: b           L_80204158
    // 0x80204110: nop

        goto L_80204158;
    // 0x80204110: nop

L_80204114:
    // 0x80204114: jal         0x802045E8
    // 0x80204118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802045E8_62F9C8(rdram, ctx);
        goto after_1;
    // 0x80204118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8020411C: b           L_80204158
    // 0x80204120: nop

        goto L_80204158;
    // 0x80204120: nop

L_80204124:
    // 0x80204124: jal         0x802045E8
    // 0x80204128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802045E8_62F9C8(rdram, ctx);
        goto after_2;
    // 0x80204128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8020412C: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80204130: sw          $zero, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = 0;
    // 0x80204134: addiu       $t5, $t5, -0x5198
    ctx->r13 = ADD32(ctx->r13, -0X5198);
    // 0x80204138: b           L_80204158
    // 0x8020413C: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
        goto L_80204158;
    // 0x8020413C: sw          $t5, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r13;
L_80204140:
    // 0x80204140: jal         0x80204600
    // 0x80204144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80204600_62F9E0(rdram, ctx);
        goto after_3;
    // 0x80204144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80204148: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8020414C: sw          $zero, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = 0;
    // 0x80204150: addiu       $t6, $t6, -0x5198
    ctx->r14 = ADD32(ctx->r14, -0X5198);
    // 0x80204154: sw          $t6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r14;
L_80204158:
    // 0x80204158: jal         0x8020451C
    // 0x8020415C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020451C_62F8FC(rdram, ctx);
        goto after_4;
    // 0x8020415C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80204160: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80204164: bne         $v0, $at, L_8020418C
    if (ctx->r2 != ctx->r1) {
        // 0x80204168: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_8020418C;
    }
    // 0x80204168: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x8020416C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80204170: jal         0x8003521C
    // 0x80204174: addiu       $a0, $a0, 0x7D4
    ctx->r4 = ADD32(ctx->r4, 0X7D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80204174: addiu       $a0, $a0, 0x7D4
    ctx->r4 = ADD32(ctx->r4, 0X7D4);
    after_5:
    // 0x80204178: lw          $t7, 0xAC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XAC);
    // 0x8020417C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80204180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80204184: b           L_802043CC
    // 0x80204188: sw          $t7, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->r15;
        goto L_802043CC;
    // 0x80204188: sw          $t7, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->r15;
L_8020418C:
    // 0x8020418C: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x80204190: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80204194: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80204198: lbu         $v0, 0x4($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4);
    // 0x8020419C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x802041A0: bnel        $v0, $at, L_802041D0
    if (ctx->r2 != ctx->r1) {
        // 0x802041A4: lbu         $t3, 0xE($t2)
        ctx->r11 = MEM_BU(ctx->r10, 0XE);
            goto L_802041D0;
    }
    goto skip_0;
    // 0x802041A4: lbu         $t3, 0xE($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XE);
    skip_0:
    // 0x802041A8: jal         0x8003521C
    // 0x802041AC: addiu       $a0, $a0, 0x6BC
    ctx->r4 = ADD32(ctx->r4, 0X6BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x802041AC: addiu       $a0, $a0, 0x6BC
    ctx->r4 = ADD32(ctx->r4, 0X6BC);
    after_6:
    // 0x802041B0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802041B4: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x802041B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802041BC: lbu         $t0, 0x4($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X4);
    // 0x802041C0: ori         $t1, $t0, 0x50
    ctx->r9 = ctx->r8 | 0X50;
    // 0x802041C4: b           L_802043CC
    // 0x802041C8: sb          $t1, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r9;
        goto L_802043CC;
    // 0x802041C8: sb          $t1, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r9;
    // 0x802041CC: lbu         $t3, 0xE($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XE);
L_802041D0:
    // 0x802041D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802041D4: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x802041D8: bnel        $t3, $at, L_80204210
    if (ctx->r11 != ctx->r1) {
        // 0x802041DC: lw          $t6, 0xAC($s0)
        ctx->r14 = MEM_W(ctx->r16, 0XAC);
            goto L_80204210;
    }
    goto skip_1;
    // 0x802041DC: lw          $t6, 0xAC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XAC);
    skip_1:
    // 0x802041E0: bne         $v0, $zero, L_8020420C
    if (ctx->r2 != 0) {
        // 0x802041E4: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_8020420C;
    }
    // 0x802041E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802041E8: jal         0x8003521C
    // 0x802041EC: addiu       $a0, $a0, 0x760
    ctx->r4 = ADD32(ctx->r4, 0X760);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x802041EC: addiu       $a0, $a0, 0x760
    ctx->r4 = ADD32(ctx->r4, 0X760);
    after_7:
    // 0x802041F0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802041F4: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x802041F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802041FC: lbu         $t4, 0x4($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X4);
    // 0x80204200: ori         $t5, $t4, 0x50
    ctx->r13 = ctx->r12 | 0X50;
    // 0x80204204: b           L_802043CC
    // 0x80204208: sb          $t5, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r13;
        goto L_802043CC;
    // 0x80204208: sb          $t5, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r13;
L_8020420C:
    // 0x8020420C: lw          $t6, 0xAC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XAC);
L_80204210:
    // 0x80204210: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80204214: addiu       $t9, $t9, -0x5198
    ctx->r25 = ADD32(ctx->r25, -0X5198);
    // 0x80204218: sw          $t6, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->r14;
    // 0x8020421C: lw          $t8, 0xAC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XAC);
    // 0x80204220: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x80204224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204228: bne         $t8, $zero, L_802043CC
    if (ctx->r24 != 0) {
        // 0x8020422C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802043CC;
    }
    // 0x8020422C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80204230: sw          $t9, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r25;
    // 0x80204234: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x80204238: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020423C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80204240: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80204244: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80204248: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x8020424C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80204250: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80204254: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80204258: jal         0x801E1958
    // 0x8020425C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_8;
    // 0x8020425C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80204260: beq         $v0, $zero, L_80204284
    if (ctx->r2 == 0) {
        // 0x80204264: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80204284;
    }
    // 0x80204264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204268: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8020426C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80204270: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80204274: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80204278: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8020427C: jal         0x801D5F34
    // 0x80204280: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D5F34_601314(rdram, ctx);
        goto after_9;
    // 0x80204280: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_9:
L_80204284:
    // 0x80204284: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80204288: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x8020428C: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80204290: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80204294: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80204298: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8020429C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802042A0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x802042A4: jal         0x801E1958
    // 0x802042A8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_10;
    // 0x802042A8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x802042AC: beq         $v0, $zero, L_802042D0
    if (ctx->r2 == 0) {
        // 0x802042B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802042D0;
    }
    // 0x802042B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802042B4: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x802042B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802042BC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802042C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802042C4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x802042C8: jal         0x801D5F34
    // 0x802042CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801D5F34_601314(rdram, ctx);
        goto after_11;
    // 0x802042CC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_11:
L_802042D0:
    // 0x802042D0: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802042D4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x802042D8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x802042DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802042E0: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x802042E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802042E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802042EC: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x802042F0: jal         0x801E1958
    // 0x802042F4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_12;
    // 0x802042F4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x802042F8: beq         $v0, $zero, L_8020431C
    if (ctx->r2 == 0) {
        // 0x802042FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8020431C;
    }
    // 0x802042FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204300: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80204304: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80204308: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8020430C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80204310: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x80204314: jal         0x801D5F34
    // 0x80204318: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    func_801D5F34_601314(rdram, ctx);
        goto after_13;
    // 0x80204318: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_13:
L_8020431C:
    // 0x8020431C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80204320: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80204324: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80204328: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8020432C: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x80204330: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80204334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204338: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x8020433C: jal         0x801E1958
    // 0x80204340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_14;
    // 0x80204340: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x80204344: beq         $v0, $zero, L_80204368
    if (ctx->r2 == 0) {
        // 0x80204348: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80204368;
    }
    // 0x80204348: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8020434C: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x80204350: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80204354: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80204358: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8020435C: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    // 0x80204360: jal         0x801D5F34
    // 0x80204364: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D5F34_601314(rdram, ctx);
        goto after_15;
    // 0x80204364: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_15:
L_80204368:
    // 0x80204368: lwc1        $f8, 0x10($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8020436C: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80204370: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80204374: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80204378: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x8020437C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80204380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80204384: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x80204388: jal         0x801E1958
    // 0x8020438C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_16;
    // 0x8020438C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80204390: beq         $v0, $zero, L_802043B4
    if (ctx->r2 == 0) {
        // 0x80204394: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_802043B4;
    }
    // 0x80204394: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204398: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8020439C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802043A0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x802043A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802043A8: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    // 0x802043AC: jal         0x801D5F34
    // 0x802043B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801D5F34_601314(rdram, ctx);
        goto after_17;
    // 0x802043B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_17:
L_802043B4:
    // 0x802043B4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802043B8: addiu       $a1, $a1, 0x1AD4
    ctx->r5 = ADD32(ctx->r5, 0X1AD4);
    // 0x802043BC: jal         0x8003522C
    // 0x802043C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_18;
    // 0x802043C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x802043C4: b           L_802043CC
    // 0x802043C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802043CC;
    // 0x802043C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802043CC:
    // 0x802043CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802043D0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x802043D4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x802043D8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x802043DC: jr          $ra
    // 0x802043E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802043E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801F453C_61F91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F453C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4544: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F4548: jal         0x801F76D0
    // 0x801F454C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F454C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F4550: jal         0x801D60E4
    // 0x801F4554: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D60E4_6014C4(rdram, ctx);
        goto after_1;
    // 0x801F4554: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F4558: jal         0x801F732C
    // 0x801F455C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F732C_62270C(rdram, ctx);
        goto after_2;
    // 0x801F455C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801F4560: beq         $v0, $zero, L_801F4590
    if (ctx->r2 == 0) {
        // 0x801F4564: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4590;
    }
    // 0x801F4564: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4568: jal         0x801D2F40
    // 0x801F456C: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_3;
    // 0x801F456C: lui         $a1, 0xC248
    ctx->r5 = S32(0XC248 << 16);
    after_3:
    // 0x801F4570: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4574: nop

    // 0x801F4578: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F457C: nop

    // 0x801F4580: bc1fl       L_801F4594
    if (!c1cs) {
        // 0x801F4584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4594;
    }
    goto skip_0;
    // 0x801F4584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4588: jal         0x801F0540
    // 0x801F458C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F0540_61B920(rdram, ctx);
        goto after_4;
    // 0x801F458C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
L_801F4590:
    // 0x801F4590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4594:
    // 0x801F4594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4598: jr          $ra
    // 0x801F459C: nop

    TRACE_RETURN()
    return;
    // 0x801F459C: nop

;}
RECOMP_FUNC void func_8020451C_62F8FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020451C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80204520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80204524: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80204528: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x8020452C: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x80204530: beq         $t6, $zero, L_8020453C
    if (ctx->r14 == 0) {
        // 0x80204534: nop
    
            goto L_8020453C;
    }
    // 0x80204534: nop

    // 0x80204538: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8020453C:
    // 0x8020453C: beq         $v1, $zero, L_802045CC
    if (ctx->r3 == 0) {
        // 0x80204540: nop
    
            goto L_802045CC;
    }
    // 0x80204540: nop

    // 0x80204544: lbu         $t7, 0x4C($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4C);
    // 0x80204548: addiu       $t8, $t7, -0x32
    ctx->r24 = ADD32(ctx->r15, -0X32);
    // 0x8020454C: sltiu       $at, $t8, 0x33
    ctx->r1 = ctx->r24 < 0X33 ? 1 : 0;
    // 0x80204550: beq         $at, $zero, L_80204590
    if (ctx->r1 == 0) {
        // 0x80204554: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80204590;
    }
    // 0x80204554: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80204558: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8020455C: addu        $at, $at, $t8
    gpr jr_addend_80204564 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80204560: lw          $t8, -0x1318($at)
    ctx->r24 = ADD32(ctx->r1, -0X1318);
    // 0x80204564: jr          $t8
    // 0x80204568: nop

    switch (jr_addend_80204564 >> 2) {
        case 0: goto L_8020456C; break;
        case 1: goto L_8020456C; break;
        case 2: goto L_80204590; break;
        case 3: goto L_80204590; break;
        case 4: goto L_80204590; break;
        case 5: goto L_80204590; break;
        case 6: goto L_80204590; break;
        case 7: goto L_80204590; break;
        case 8: goto L_80204590; break;
        case 9: goto L_80204590; break;
        case 10: goto L_8020456C; break;
        case 11: goto L_8020456C; break;
        case 12: goto L_8020456C; break;
        case 13: goto L_80204590; break;
        case 14: goto L_80204590; break;
        case 15: goto L_80204590; break;
        case 16: goto L_80204590; break;
        case 17: goto L_80204590; break;
        case 18: goto L_80204590; break;
        case 19: goto L_80204590; break;
        case 20: goto L_8020456C; break;
        case 21: goto L_80204590; break;
        case 22: goto L_80204590; break;
        case 23: goto L_80204590; break;
        case 24: goto L_80204590; break;
        case 25: goto L_80204590; break;
        case 26: goto L_80204590; break;
        case 27: goto L_80204590; break;
        case 28: goto L_80204590; break;
        case 29: goto L_80204590; break;
        case 30: goto L_8020456C; break;
        case 31: goto L_8020456C; break;
        case 32: goto L_80204590; break;
        case 33: goto L_80204590; break;
        case 34: goto L_80204590; break;
        case 35: goto L_80204590; break;
        case 36: goto L_80204590; break;
        case 37: goto L_80204590; break;
        case 38: goto L_80204590; break;
        case 39: goto L_80204590; break;
        case 40: goto L_80204588; break;
        case 41: goto L_8020456C; break;
        case 42: goto L_80204590; break;
        case 43: goto L_80204590; break;
        case 44: goto L_80204590; break;
        case 45: goto L_80204590; break;
        case 46: goto L_80204590; break;
        case 47: goto L_80204590; break;
        case 48: goto L_80204590; break;
        case 49: goto L_80204590; break;
        case 50: goto L_80204578; break;
        default: switch_error(__func__, 0x80204564, 0x8020ECE8);
    }
    // 0x80204568: nop

L_8020456C:
    // 0x8020456C: addiu       $t9, $zero, 0x28
    ctx->r25 = ADD32(0, 0X28);
    // 0x80204570: b           L_80204590
    // 0x80204574: sw          $t9, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r25;
        goto L_80204590;
    // 0x80204574: sw          $t9, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r25;
L_80204578:
    // 0x80204578: jal         0x801D3894
    // 0x8020457C: nop

    func_801D3894_5FEC74(rdram, ctx);
        goto after_0;
    // 0x8020457C: nop

    after_0:
    // 0x80204580: b           L_802045D8
    // 0x80204584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802045D8;
    // 0x80204584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80204588:
    // 0x80204588: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x8020458C: sw          $t0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r8;
L_80204590:
    // 0x80204590: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80204594: jal         0x801D36CC
    // 0x80204598: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_1;
    // 0x80204598: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x8020459C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802045A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802045A4: lw          $t1, 0xAC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XAC);
    // 0x802045A8: subu        $t2, $t1, $v0
    ctx->r10 = SUB32(ctx->r9, ctx->r2);
    // 0x802045AC: bgtz        $t2, L_802045B8
    if (SIGNED(ctx->r10) > 0) {
        // 0x802045B0: sw          $t2, 0xAC($a0)
        MEM_W(0XAC, ctx->r4) = ctx->r10;
            goto L_802045B8;
    }
    // 0x802045B0: sw          $t2, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r10;
    // 0x802045B4: sw          $zero, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = 0;
L_802045B8:
    // 0x802045B8: jal         0x801D3894
    // 0x802045BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_2;
    // 0x802045BC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x802045C0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802045C4: b           L_802045D8
    // 0x802045C8: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
        goto L_802045D8;
    // 0x802045C8: lbu         $v0, 0x4C($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4C);
L_802045CC:
    // 0x802045CC: jal         0x801D3894
    // 0x802045D0: nop

    func_801D3894_5FEC74(rdram, ctx);
        goto after_3;
    // 0x802045D0: nop

    after_3:
    // 0x802045D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802045D8:
    // 0x802045D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802045DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802045E0: jr          $ra
    // 0x802045E4: nop

    TRACE_RETURN()
    return;
    // 0x802045E4: nop

;}
RECOMP_FUNC void func_801F7E54_623234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7E5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F7E60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F7E64: jal         0x801D60E4
    // 0x801F7E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_0;
    // 0x801F7E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F7E6C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F7E70: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F7E74: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F7E78: jal         0x8000ED00
    // 0x801F7E7C: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_1;
    // 0x801F7E7C: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    after_1:
    // 0x801F7E80: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x801F7E84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F7E88: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F7E8C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F7E90: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801F7E94: nop

    // 0x801F7E98: bc1fl       L_801F7EDC
    if (!c1cs) {
        // 0x801F7E9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F7EDC;
    }
    goto skip_0;
    // 0x801F7E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F7EA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F7EA4: lwc1        $f6, 0x70($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801F7EA8: lwc1        $f16, 0x78($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X78);
    // 0x801F7EAC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F7EB0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x801F7EB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801F7EB8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F7EBC: sw          $zero, 0x90($a1)
    MEM_W(0X90, ctx->r5) = 0;
    // 0x801F7EC0: addiu       $a0, $a0, 0x7EE8
    ctx->r4 = ADD32(ctx->r4, 0X7EE8);
    // 0x801F7EC4: swc1        $f10, 0x74($a1)
    MEM_W(0X74, ctx->r5) = ctx->f10.u32l;
    // 0x801F7EC8: div.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801F7ECC: swc1        $f8, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f8.u32l;
    // 0x801F7ED0: jal         0x8003521C
    // 0x801F7ED4: swc1        $f18, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F7ED4: swc1        $f18, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f18.u32l;
    after_2:
    // 0x801F7ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F7EDC:
    // 0x801F7EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F7EE0: jr          $ra
    // 0x801F7EE4: nop

    TRACE_RETURN()
    return;
    // 0x801F7EE4: nop

;}
RECOMP_FUNC void func_801E7714_612AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E7718: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E771C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E7720: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E7724: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801E7728: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801E772C: lwc1        $f0, 0xC($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801E7730: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E7734: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E7738: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801E773C: lui         $at, 0x4004
    ctx->r1 = S32(0X4004 << 16);
    // 0x801E7740: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x801E7744: lui         $a2, 0xC448
    ctx->r6 = S32(0XC448 << 16);
    // 0x801E7748: bc1f        L_801E7768
    if (!c1cs) {
        // 0x801E774C: addiu       $t6, $zero, 0x8
        ctx->r14 = ADD32(0, 0X8);
            goto L_801E7768;
    }
    // 0x801E774C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x801E7750: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E7754: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E7758: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E775C: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801E7760: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E7764: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
L_801E7768:
    // 0x801E7768: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E776C: jal         0x801D46B8
    // 0x801E7770: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_0;
    // 0x801E7770: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801E7774: jal         0x801D614C
    // 0x801E7778: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801E7778: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801E777C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E7780: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E7784: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E7788: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E778C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801E7790: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x801E7794: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x801E7798: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801E779C: jal         0x801E7AA8
    // 0x801E77A0: nop

    func_801E7AA8_612E88(rdram, ctx);
        goto after_2;
    // 0x801E77A0: nop

    after_2:
    // 0x801E77A4: lui         $at, 0xC448
    ctx->r1 = S32(0XC448 << 16);
    // 0x801E77A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E77AC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E77B0: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801E77B4: nop

    // 0x801E77B8: bc1fl       L_801E7828
    if (!c1cs) {
        // 0x801E77BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E7828;
    }
    goto skip_0;
    // 0x801E77BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801E77C0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E77C4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E77C8: addiu       $t7, $zero, -0x6
    ctx->r15 = ADD32(0, -0X6);
    // 0x801E77CC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801E77D0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x801E77D4: addiu       $a0, $zero, 0x241
    ctx->r4 = ADD32(0, 0X241);
    // 0x801E77D8: bc1f        L_801E77F4
    if (!c1cs) {
        // 0x801E77DC: nop
    
            goto L_801E77F4;
    }
    // 0x801E77DC: nop

    // 0x801E77E0: sw          $t7, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r15;
    // 0x801E77E4: jal         0x80038BC8
    // 0x801E77E8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801E77E8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    after_3:
    // 0x801E77EC: b           L_801E7800
    // 0x801E77F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
        goto L_801E7800;
    // 0x801E77F0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801E77F4:
    // 0x801E77F4: jal         0x80038BC8
    // 0x801E77F8: sw          $t8, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r24;
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E77F8: sw          $t8, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r24;
    after_4:
    // 0x801E77FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801E7800:
    // 0x801E7800: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x801E7804: sw          $t9, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r25;
    // 0x801E7808: swc1        $f18, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->f18.u32l;
    // 0x801E780C: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E7810: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E7814: sw          $zero, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = 0;
    // 0x801E7818: addiu       $a0, $a0, 0x7838
    ctx->r4 = ADD32(ctx->r4, 0X7838);
    // 0x801E781C: jal         0x8003521C
    // 0x801E7820: swc1        $f4, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E7820: swc1        $f4, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->f4.u32l;
    after_5:
    // 0x801E7824: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E7828:
    // 0x801E7828: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E782C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E7830: jr          $ra
    // 0x801E7834: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801E7834: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801E59F8_610DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E59F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E59FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5A00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E5A04: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E5A08: jal         0x801EF2B0
    // 0x801E5A0C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801EF2B0_61A690(rdram, ctx);
        goto after_0;
    // 0x801E5A0C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E5A10: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5A14: addiu       $a1, $a1, -0x4E68
    ctx->r5 = ADD32(ctx->r5, -0X4E68);
    // 0x801E5A18: jal         0x801D2EE4
    // 0x801E5A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801E5A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E5A20: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E5A24: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E5A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5A2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E5A30: jal         0x801D34D0
    // 0x801E5A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_2;
    // 0x801E5A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x801E5A38: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E5A3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E5A40: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E5A44: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801E5A48: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801E5A4C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801E5A50: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801E5A54: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E5A58: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x801E5A5C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801E5A60: jal         0x801D3CE4
    // 0x801E5A64: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    func_801D3CE4_5FF0C4(rdram, ctx);
        goto after_3;
    // 0x801E5A64: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    after_3:
    // 0x801E5A68: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E5A6C: jal         0x8003521C
    // 0x801E5A70: addiu       $a0, $a0, 0x5A88
    ctx->r4 = ADD32(ctx->r4, 0X5A88);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801E5A70: addiu       $a0, $a0, 0x5A88
    ctx->r4 = ADD32(ctx->r4, 0X5A88);
    after_4:
    // 0x801E5A74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5A78: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5A7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E5A80: jr          $ra
    // 0x801E5A84: nop

    TRACE_RETURN()
    return;
    // 0x801E5A84: nop

;}
RECOMP_FUNC void func_80207C8C_63306C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207C94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207C98: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x80207C9C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80207CA0: bne         $t7, $zero, L_80207CB4
    if (ctx->r15 != 0) {
        // 0x80207CA4: sw          $t7, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r15;
            goto L_80207CB4;
    }
    // 0x80207CA4: sw          $t7, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r15;
    // 0x80207CA8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207CAC: jal         0x8003521C
    // 0x80207CB0: addiu       $a0, $a0, 0x7CC4
    ctx->r4 = ADD32(ctx->r4, 0X7CC4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80207CB0: addiu       $a0, $a0, 0x7CC4
    ctx->r4 = ADD32(ctx->r4, 0X7CC4);
    after_0:
L_80207CB4:
    // 0x80207CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207CBC: jr          $ra
    // 0x80207CC0: nop

    TRACE_RETURN()
    return;
    // 0x80207CC0: nop

;}
RECOMP_FUNC void func_801E1958_60CD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1958: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E195C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E1960: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1964: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x801E1968: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E196C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E1970: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E1974: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1978: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E197C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1980: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1984: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1988: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E198C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1990: addiu       $t9, $zero, 0x4A9
    ctx->r25 = ADD32(0, 0X4A9);
    // 0x801E1994: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1998: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E199C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E19A0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E19A4: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E19A8: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E19AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E19B0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E19B4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E19B8: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E19BC: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E19C0: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E19C4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E19C8: jal         0x800358E8
    // 0x801E19CC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E19CC: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E19D0: beq         $v0, $zero, L_801E1A30
    if (ctx->r2 == 0) {
        // 0x801E19D4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E1A30;
    }
    // 0x801E19D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E19D8: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E19DC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E19E0: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E19E4: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E19E8: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E19EC: addiu       $t0, $t0, -0x4FF4
    ctx->r8 = ADD32(ctx->r8, -0X4FF4);
    // 0x801E19F0: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801E19F4: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E19F8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E19FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801E1A00: addiu       $t3, $t3, -0x54E0
    ctx->r11 = ADD32(ctx->r11, -0X54E0);
    // 0x801E1A04: sw          $zero, 0x90($v0)
    MEM_W(0X90, ctx->r2) = 0;
    // 0x801E1A08: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x801E1A0C: sw          $zero, 0x98($v0)
    MEM_W(0X98, ctx->r2) = 0;
    // 0x801E1A10: sw          $t0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r8;
    // 0x801E1A14: sw          $t1, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r9;
    // 0x801E1A18: sw          $t2, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r10;
    // 0x801E1A1C: sw          $t3, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r11;
    // 0x801E1A20: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E1A24: jal         0x801E18E4
    // 0x801E1A28: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E1A28: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E1A2C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E1A30:
    // 0x801E1A30: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1A34: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E1A38: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E1A3C: jr          $ra
    // 0x801E1A40: nop

    TRACE_RETURN()
    return;
    // 0x801E1A40: nop

;}
RECOMP_FUNC void func_80203AE4_62EEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203AE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80203AE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80203AEC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80203AF0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80203AF4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80203AF8: jal         0x801D365C
    // 0x80203AFC: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_0;
    // 0x80203AFC: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    after_0:
    // 0x80203B00: bne         $v0, $zero, L_80203B18
    if (ctx->r2 != 0) {
        // 0x80203B04: nop
    
            goto L_80203B18;
    }
    // 0x80203B04: nop

    // 0x80203B08: jal         0x801D36CC
    // 0x80203B0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_1;
    // 0x80203B0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80203B10: beql        $v0, $zero, L_80203BB0
    if (ctx->r2 == 0) {
        // 0x80203B14: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80203BB0;
    }
    goto skip_0;
    // 0x80203B14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_80203B18:
    // 0x80203B18: jal         0x801D3854
    // 0x80203B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_2;
    // 0x80203B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80203B20: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80203B24: bne         $at, $zero, L_80203B48
    if (ctx->r1 != 0) {
        // 0x80203B28: nop
    
            goto L_80203B48;
    }
    // 0x80203B28: nop

    // 0x80203B2C: jal         0x801D3A68
    // 0x80203B30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_3;
    // 0x80203B30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x80203B34: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80203B38: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80203B3C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x80203B40: jal         0x801D7438
    // 0x80203B44: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_4;
    // 0x80203B44: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_4:
L_80203B48:
    // 0x80203B48: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80203B4C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80203B50: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80203B54: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80203B58: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80203B5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80203B60: jal         0x8000F3D8
    // 0x80203B64: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_5;
    // 0x80203B64: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_5:
    // 0x80203B68: jal         0x801CEE80
    // 0x80203B6C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_6;
    // 0x80203B6C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x80203B70: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80203B74: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80203B78: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80203B7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80203B80: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80203B84: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80203B88: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80203B8C: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80203B90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80203B94: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80203B98: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80203B9C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80203BA0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80203BA4: jal         0x801E1B30
    // 0x80203BA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_7;
    // 0x80203BA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x80203BAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80203BB0:
    // 0x80203BB0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80203BB4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80203BB8: jr          $ra
    // 0x80203BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80203BBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801F300C_61E3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F300C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F3010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F3014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F3018: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F301C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F3020: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F3024: jal         0x801D3018
    // 0x801F3028: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F3028: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F302C: jal         0x801F76D0
    // 0x801F3030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F3030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F3034: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F3038: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801F303C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801F3040: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801F3044: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801F3048: jal         0x8000E28C
    // 0x801F304C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    func_8000E28C_EE8C(rdram, ctx);
        goto after_2;
    // 0x801F304C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    after_2:
    // 0x801F3050: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x801F3054: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F3058: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x801F305C: addiu       $a2, $s0, 0x90
    ctx->r6 = ADD32(ctx->r16, 0X90);
    // 0x801F3060: jal         0x8000E630
    // 0x801F3064: addiu       $a3, $s0, 0x94
    ctx->r7 = ADD32(ctx->r16, 0X94);
    func_8000E630_F230(rdram, ctx);
        goto after_3;
    // 0x801F3064: addiu       $a3, $s0, 0x94
    ctx->r7 = ADD32(ctx->r16, 0X94);
    after_3:
    // 0x801F3068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F306C: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801F3070: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F3074: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3078: addiu       $a0, $a0, 0x30A0
    ctx->r4 = ADD32(ctx->r4, 0X30A0);
    // 0x801F307C: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F3080: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801F3084: jal         0x8003521C
    // 0x801F3088: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F3088: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    after_4:
    // 0x801F308C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F3090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F3094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F3098: jr          $ra
    // 0x801F309C: nop

    TRACE_RETURN()
    return;
    // 0x801F309C: nop

;}
RECOMP_FUNC void func_801FD8F0_628CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD8F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FD8F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FD8F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FD8FC: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801FD900: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FD904: lwc1        $f4, 0x10($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801FD908: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FD90C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FD910: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x801FD914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801FD918: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x801FD91C: bc1fl       L_801FD988
    if (!c1cs) {
        // 0x801FD920: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_801FD988;
    }
    goto skip_0;
    // 0x801FD920: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x801FD924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FD928: jal         0x801D3018
    // 0x801FD92C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FD92C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FD930: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x801FD934: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FD938: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FD93C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x801FD940: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FD944: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801FD948: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x801FD94C: jal         0x801D46B8
    // 0x801FD950: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_1;
    // 0x801FD950: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_1:
    // 0x801FD954: jal         0x801D619C
    // 0x801FD958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D619C_60157C(rdram, ctx);
        goto after_2;
    // 0x801FD958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801FD95C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD960: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FD964: jal         0x801D3B18
    // 0x801FD968: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_3;
    // 0x801FD968: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x801FD96C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FD974: jal         0x801D3F00
    // 0x801FD978: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_4;
    // 0x801FD978: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_4:
    // 0x801FD97C: b           L_801FDA10
    // 0x801FD980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801FDA10;
    // 0x801FD980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FD984: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_801FD988:
    // 0x801FD988: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x801FD98C: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x801FD990: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x801FD994: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x801FD998: swc1        $f12, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f12.u32l;
    // 0x801FD99C: swc1        $f12, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f12.u32l;
    // 0x801FD9A0: jal         0x8000DD58
    // 0x801FD9A4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801FD9A4: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_5:
    // 0x801FD9A8: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x801FD9AC: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x801FD9B0: jal         0x8000DDC0
    // 0x801FD9B4: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    func_8000DDC0_E9C0(rdram, ctx);
        goto after_6;
    // 0x801FD9B4: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    after_6:
    // 0x801FD9B8: beq         $v0, $zero, L_801FD9CC
    if (ctx->r2 == 0) {
        // 0x801FD9BC: lw          $a2, 0x2C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X2C);
            goto L_801FD9CC;
    }
    // 0x801FD9BC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD9C0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x801FD9C4: b           L_801FD9D4
    // 0x801FD9C8: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
        goto L_801FD9D4;
    // 0x801FD9C8: sw          $t8, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r24;
L_801FD9CC:
    // 0x801FD9CC: addiu       $t9, $zero, 0x3FC
    ctx->r25 = ADD32(0, 0X3FC);
    // 0x801FD9D0: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
L_801FD9D4:
    // 0x801FD9D4: jal         0x801FFE14
    // 0x801FD9D8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_801FFE14_62B1F4(rdram, ctx);
        goto after_7;
    // 0x801FD9D8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_7:
    // 0x801FD9DC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD9E0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FD9E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801FD9E8: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x801FD9EC: sb          $t0, 0x64($a2)
    MEM_B(0X64, ctx->r6) = ctx->r8;
    // 0x801FD9F0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801FD9F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD9F8: addiu       $a0, $a0, -0x2490
    ctx->r4 = ADD32(ctx->r4, -0X2490);
    // 0x801FD9FC: sb          $zero, 0x815($t1)
    MEM_B(0X815, ctx->r9) = 0;
    // 0x801FDA00: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801FDA04: jal         0x8003521C
    // 0x801FDA08: sb          $zero, 0x816($t2)
    MEM_B(0X816, ctx->r10) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801FDA08: sb          $zero, 0x816($t2)
    MEM_B(0X816, ctx->r10) = 0;
    after_8:
    // 0x801FDA0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FDA10:
    // 0x801FDA10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FDA14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FDA18: jr          $ra
    // 0x801FDA1C: nop

    TRACE_RETURN()
    return;
    // 0x801FDA1C: nop

;}
RECOMP_FUNC void func_801DD8B4_608C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801DD8B8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DD8BC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801DD8C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DD8C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DD8C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DD8CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801DD8D0: jal         0x801D363C
    // 0x801DD8D4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801D363C_5FEA1C(rdram, ctx);
        goto after_0;
    // 0x801DD8D4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DD8D8: beql        $v0, $zero, L_801DD918
    if (ctx->r2 == 0) {
        // 0x801DD8DC: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_801DD918;
    }
    goto skip_0;
    // 0x801DD8DC: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801DD8E0: jal         0x801D36BC
    // 0x801DD8E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36BC_5FEA9C(rdram, ctx);
        goto after_1;
    // 0x801DD8E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DD8E8: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x801DD8EC: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801DD8F0: jal         0x80038BC8
    // 0x801DD8F4: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801DD8F4: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_2:
    // 0x801DD8F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD8FC: jal         0x80037C9C
    // 0x801DD900: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_3;
    // 0x801DD900: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x801DD904: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DD908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DD90C: jal         0x80037C20
    // 0x801DD910: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_4;
    // 0x801DD910: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
    // 0x801DD914: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801DD918:
    // 0x801DD918: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DD91C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DD920: bne         $v0, $zero, L_801DD954
    if (ctx->r2 != 0) {
        // 0x801DD924: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_801DD954;
    }
    // 0x801DD924: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x801DD928: lwc1        $f4, 0x98($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801DD92C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801DD930: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DD934: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DD938: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DD93C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801DD940: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801DD944: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801DD948: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DD94C: b           L_801DD974
    // 0x801DD950: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
        goto L_801DD974;
    // 0x801DD950: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_801DD954:
    // 0x801DD954: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801DD958: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801DD95C: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801DD960: ldc1        $f6, -0x2540($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X2540);
    // 0x801DD964: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DD968: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801DD96C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DD970: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
L_801DD974:
    // 0x801DD974: lwc1        $f16, 0x98($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801DD978: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DD97C: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x801DD980: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x801DD984: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DD988: c.le.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d <= ctx->f12.d;
    // 0x801DD98C: lui         $at, 0x4031
    ctx->r1 = S32(0X4031 << 16);
    // 0x801DD990: addiu       $a0, $a0, -0x2544
    ctx->r4 = ADD32(ctx->r4, -0X2544);
    // 0x801DD994: bc1fl       L_801DD9AC
    if (!c1cs) {
        // 0x801DD998: mtc1        $at, $f19
        ctx->f_odd[(19 - 1) * 2] = ctx->r1;
            goto L_801DD9AC;
    }
    goto skip_1;
    // 0x801DD998: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    skip_1:
    // 0x801DD99C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DD9A0: b           L_801DD9E8
    // 0x801DD9A4: lwc1        $f0, -0x2538($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2538);
        goto L_801DD9E8;
    // 0x801DD9A4: lwc1        $f0, -0x2538($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2538);
    // 0x801DD9A8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
L_801DD9AC:
    // 0x801DD9AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801DD9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DD9B4: lui         $at, 0xBF20
    ctx->r1 = S32(0XBF20 << 16);
    // 0x801DD9B8: c.lt.d      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.d < ctx->f0.d;
    // 0x801DD9BC: nop

    // 0x801DD9C0: bc1f        L_801DD9CC
    if (!c1cs) {
        // 0x801DD9C4: nop
    
            goto L_801DD9CC;
    }
    // 0x801DD9C4: nop

    // 0x801DD9C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD9CC:
    // 0x801DD9CC: beq         $v0, $zero, L_801DD9E0
    if (ctx->r2 == 0) {
        // 0x801DD9D0: sb          $zero, 0x30($s0)
        MEM_B(0X30, ctx->r16) = 0;
            goto L_801DD9E0;
    }
    // 0x801DD9D0: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801DD9D4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DD9D8: b           L_801DD9EC
    // 0x801DD9DC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_801DD9EC;
    // 0x801DD9DC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_801DD9E0:
    // 0x801DD9E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DD9E4: nop

L_801DD9E8:
    // 0x801DD9E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_801DD9EC:
    // 0x801DD9EC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801DD9F0: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801DD9F4: lwc1        $f4, 0x8C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8C);
    // 0x801DD9F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DD9FC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801DDA00: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801DDA04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DDA08: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DDA0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DDA10: swc1        $f6, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f6.u32l;
    // 0x801DDA14: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DDA18: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DDA1C: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x801DDA20: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DDA24: c.le.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl <= ctx->f18.fl;
    // 0x801DDA28: nop

    // 0x801DDA2C: bc1fl       L_801DDA3C
    if (!c1cs) {
        // 0x801DDA30: lwc1        $f2, 0x98($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
            goto L_801DDA3C;
    }
    goto skip_2;
    // 0x801DDA30: lwc1        $f2, 0x98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
    skip_2:
    // 0x801DDA34: swc1        $f2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f2.u32l;
    // 0x801DDA38: lwc1        $f2, 0x98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
L_801DDA3C:
    // 0x801DDA3C: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801DDA40: nop

    // 0x801DDA44: bc1fl       L_801DDA6C
    if (!c1cs) {
        // 0x801DDA48: lui         $at, 0x4022
        ctx->r1 = S32(0X4022 << 16);
            goto L_801DDA6C;
    }
    goto skip_3;
    // 0x801DDA48: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    skip_3:
    // 0x801DDA4C: jal         0x8003521C
    // 0x801DDA50: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801DDA50: swc1        $f0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f0.u32l;
    after_5:
    // 0x801DDA54: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DDA58: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x801DDA5C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801DDA60: lwc1        $f2, 0x98($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801DDA64: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x801DDA68: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
L_801DDA6C:
    // 0x801DDA6C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801DDA70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DDA74: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x801DDA78: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801DDA7C: nop

    // 0x801DDA80: bc1fl       L_801DDAA8
    if (!c1cs) {
        // 0x801DDA84: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_801DDAA8;
    }
    goto skip_4;
    // 0x801DDA84: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_4:
    // 0x801DDA88: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x801DDA8C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801DDA90: bc1fl       L_801DDAA8
    if (!c1cs) {
        // 0x801DDA94: swc1        $f2, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
            goto L_801DDAA8;
    }
    goto skip_5;
    // 0x801DDA94: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    skip_5:
    // 0x801DDA98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DDA9C: b           L_801DDAA8
    // 0x801DDAA0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
        goto L_801DDAA8;
    // 0x801DDAA0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x801DDAA4: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
L_801DDAA8:
    // 0x801DDAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DDAAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DDAB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801DDAB4: jr          $ra
    // 0x801DDAB8: nop

    TRACE_RETURN()
    return;
    // 0x801DDAB8: nop

;}
RECOMP_FUNC void func_80208FB4_634394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208FB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80208FB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80208FBC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80208FC0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80208FC4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x80208FC8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80208FCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208FD0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80208FD4: lwc1        $f4, 0x94($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X94);
    // 0x80208FD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80208FDC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80208FE0: jal         0x801EE658
    // 0x80208FE4: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x80208FE4: swc1        $f8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x80208FE8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80208FEC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208FF0: lwc1        $f0, 0x94($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X94);
    // 0x80208FF4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80208FF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80208FFC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x80209000: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80209004: bc1fl       L_80209018
    if (!c1cs) {
        // 0x80209008: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80209018;
    }
    goto skip_0;
    // 0x80209008: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x8020900C: b           L_80209018
    // 0x80209010: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_80209018;
    // 0x80209010: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x80209014: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80209018:
    // 0x80209018: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8020901C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80209020: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80209024: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80209028: cvt.w.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8020902C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80209030: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80209034: nop

    // 0x80209038: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x8020903C: beql        $a3, $zero, L_8020908C
    if (ctx->r7 == 0) {
        // 0x80209040: mfc1        $a3, $f10
        ctx->r7 = (int32_t)ctx->f10.u32l;
            goto L_8020908C;
    }
    goto skip_1;
    // 0x80209040: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x80209044: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80209048: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8020904C: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80209050: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x80209054: nop

    // 0x80209058: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8020905C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x80209060: nop

    // 0x80209064: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x80209068: bne         $a3, $zero, L_80209080
    if (ctx->r7 != 0) {
        // 0x8020906C: nop
    
            goto L_80209080;
    }
    // 0x8020906C: nop

    // 0x80209070: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80209074: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80209078: b           L_80209098
    // 0x8020907C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_80209098;
    // 0x8020907C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_80209080:
    // 0x80209080: b           L_80209098
    // 0x80209084: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_80209098;
    // 0x80209084: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80209088: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
L_8020908C:
    // 0x8020908C: nop

    // 0x80209090: bltz        $a3, L_80209080
    if (SIGNED(ctx->r7) < 0) {
        // 0x80209094: nop
    
            goto L_80209080;
    }
    // 0x80209094: nop

L_80209098:
    // 0x80209098: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8020909C: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x802090A0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x802090A4: jal         0x801D15BC
    // 0x802090A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_801D15BC_5FC99C(rdram, ctx);
        goto after_1;
    // 0x802090A8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x802090AC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x802090B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802090B4: lwc1        $f18, 0x94($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X94);
    // 0x802090B8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802090BC: nop

    // 0x802090C0: bc1fl       L_802090D4
    if (!c1cs) {
        // 0x802090C4: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_802090D4;
    }
    goto skip_2;
    // 0x802090C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    skip_2:
    // 0x802090C8: jal         0x80038BC8
    // 0x802090CC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x802090CC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_2:
    // 0x802090D0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_802090D4:
    // 0x802090D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802090D8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802090DC: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x802090E0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802090E4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802090E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802090EC: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x802090F0: nop

    // 0x802090F4: bc1fl       L_80209108
    if (!c1cs) {
        // 0x802090F8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80209108;
    }
    goto skip_3;
    // 0x802090F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
    // 0x802090FC: jal         0x8003521C
    // 0x80209100: addiu       $a0, $a0, -0x6EE8
    ctx->r4 = ADD32(ctx->r4, -0X6EE8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80209100: addiu       $a0, $a0, -0x6EE8
    ctx->r4 = ADD32(ctx->r4, -0X6EE8);
    after_3:
    // 0x80209104: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80209108:
    // 0x80209108: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8020910C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80209110: jr          $ra
    // 0x80209114: nop

    TRACE_RETURN()
    return;
    // 0x80209114: nop

;}
RECOMP_FUNC void func_801FF728_62AB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF728: jr          $ra
    // 0x801FF72C: nop

    TRACE_RETURN()
    return;
    // 0x801FF72C: nop

;}
RECOMP_FUNC void func_802058B0_630C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802058B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802058B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802058B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802058BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802058C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802058C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802058C8: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x802058CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802058D0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802058D4: lui         $a1, 0xC3C8
    ctx->r5 = S32(0XC3C8 << 16);
    // 0x802058D8: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x802058DC: jal         0x801D655C
    // 0x802058E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_0;
    // 0x802058E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x802058E4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x802058E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802058EC: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x802058F0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x802058F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802058F8: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    // 0x802058FC: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    // 0x80205900: jal         0x801D66AC
    // 0x80205904: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D66AC_601A8C(rdram, ctx);
        goto after_1;
    // 0x80205904: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80205908: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020590C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80205910: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80205914: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80205918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020591C: lui         $a1, 0xC448
    ctx->r5 = S32(0XC448 << 16);
    // 0x80205920: lui         $a2, 0xC3FA
    ctx->r6 = S32(0XC3FA << 16);
    // 0x80205924: jal         0x801D67FC
    // 0x80205928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_2;
    // 0x80205928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x8020592C: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80205930: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80205934: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x80205938: jal         0x8000EB50
    // 0x8020593C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_8000EB50_F750(rdram, ctx);
        goto after_3;
    // 0x8020593C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80205940: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    // 0x80205944: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80205948: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8020594C: bne         $t7, $zero, L_8020595C
    if (ctx->r15 != 0) {
        // 0x80205950: sw          $t7, 0x88($s0)
        MEM_W(0X88, ctx->r16) = ctx->r15;
            goto L_8020595C;
    }
    // 0x80205950: sw          $t7, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r15;
    // 0x80205954: jal         0x8003521C
    // 0x80205958: addiu       $a0, $a0, 0x5978
    ctx->r4 = ADD32(ctx->r4, 0X5978);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80205958: addiu       $a0, $a0, 0x5978
    ctx->r4 = ADD32(ctx->r4, 0X5978);
    after_4:
L_8020595C:
    // 0x8020595C: jal         0x80205C00
    // 0x80205960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_5;
    // 0x80205960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80205964: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80205968: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8020596C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205970: jr          $ra
    // 0x80205974: nop

    TRACE_RETURN()
    return;
    // 0x80205974: nop

;}
RECOMP_FUNC void func_801E1084_60C464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1084: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E1088: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E108C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801E1090: addiu       $a1, $a1, -0x4890
    ctx->r5 = ADD32(ctx->r5, -0X4890);
    // 0x801E1094: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1098: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E109C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E10A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E10A4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801E10A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E10AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E10B0: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E10B4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801E10B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801E10BC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E10C0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E10C4: addiu       $t6, $zero, 0x4A8
    ctx->r14 = ADD32(0, 0X4A8);
    // 0x801E10C8: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x801E10CC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801E10D0: addiu       $a2, $a2, -0x54E0
    ctx->r6 = ADD32(ctx->r6, -0X54E0);
    // 0x801E10D4: addiu       $a0, $a0, 0x1138
    ctx->r4 = ADD32(ctx->r4, 0X1138);
    // 0x801E10D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E10DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E10E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E10E4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E10E8: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E10EC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E10F0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E10F4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E10F8: jal         0x80035854
    // 0x801E10FC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_0;
    // 0x801E10FC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1100: beq         $v0, $zero, L_801E1124
    if (ctx->r2 == 0) {
        // 0x801E1104: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_801E1124;
    }
    // 0x801E1104: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E1108: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E110C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801E1110: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x801E1114: swc1        $f8, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f8.u32l;
    // 0x801E1118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E111C: b           L_801E1128
    // 0x801E1120: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
        goto L_801E1128;
    // 0x801E1120: sb          $t7, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r15;
L_801E1124:
    // 0x801E1124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E1128:
    // 0x801E1128: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801E112C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801E1130: jr          $ra
    // 0x801E1134: nop

    TRACE_RETURN()
    return;
    // 0x801E1134: nop

;}
RECOMP_FUNC void func_801E210C_60D4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E210C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E2110: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E2114: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2118: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E211C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E2120: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x801E2124: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E2128: jal         0x80036260
    // 0x801E212C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x801E212C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801E2130: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E2134: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E2138: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E213C: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801E2140: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x801E2144: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2148: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E214C: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2150: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E2154: addiu       $t9, $zero, 0x4AB
    ctx->r25 = ADD32(0, 0X4AB);
    // 0x801E2158: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801E215C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801E2160: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E2164: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801E2168: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E216C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E2174: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801E2178: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E217C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x801E2180: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2184: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2188: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E218C: jal         0x8000DBF0
    // 0x801E2190: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_1;
    // 0x801E2190: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801E2194: beq         $v0, $zero, L_801E2218
    if (ctx->r2 == 0) {
        // 0x801E2198: nop
    
            goto L_801E2218;
    }
    // 0x801E2198: nop

    // 0x801E219C: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x801E21A0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E21A4: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E21A8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E21AC: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801E21B0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E21B4: addiu       $t3, $t3, -0x4FB0
    ctx->r11 = ADD32(ctx->r11, -0X4FB0);
    // 0x801E21B8: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801E21BC: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801E21C0: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E21C4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801E21C8: addiu       $t6, $t6, -0x54E0
    ctx->r14 = ADD32(ctx->r14, -0X54E0);
    // 0x801E21CC: swc1        $f16, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f16.u32l;
    // 0x801E21D0: lhu         $t0, 0x6A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6A);
    // 0x801E21D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E21D8: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x801E21DC: lhu         $t1, 0x6E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X6E);
    // 0x801E21E0: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    // 0x801E21E4: lhu         $t2, 0x72($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X72);
    // 0x801E21E8: sw          $t3, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r11;
    // 0x801E21EC: sw          $t4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r12;
    // 0x801E21F0: sw          $t5, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r13;
    // 0x801E21F4: sw          $t6, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r14;
    // 0x801E21F8: jal         0x801E18E4
    // 0x801E21FC: sw          $t2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r10;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_2;
    // 0x801E21FC: sw          $t2, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r10;
    after_2:
    // 0x801E2200: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E2204: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E2208: jal         0x8003522C
    // 0x801E220C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_3;
    // 0x801E220C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E2210: b           L_801E2224
    // 0x801E2214: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_801E2224;
    // 0x801E2214: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_801E2218:
    // 0x801E2218: jal         0x80034EF8
    // 0x801E221C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_4;
    // 0x801E221C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801E2220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E2224:
    // 0x801E2224: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E2228: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E222C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E2230: jr          $ra
    // 0x801E2234: nop

    TRACE_RETURN()
    return;
    // 0x801E2234: nop

;}
RECOMP_FUNC void func_801EF268_61A648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF268: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF26C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF270: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x801EF274: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EF278: jr          $ra
    // 0x801EF27C: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF27C: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801CEEB8_5FA298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEEB8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CEEBC: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CEEC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CEEC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CEEC8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CEECC: lwc1        $f0, 0x3C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801CEED0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801CEED4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CEED8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CEEDC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x801CEEE0: bc1fl       L_801CEF00
    if (!c1cs) {
        // 0x801CEEE4: swc1        $f2, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f2.u32l;
            goto L_801CEF00;
    }
    goto skip_0;
    // 0x801CEEE4: swc1        $f2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f2.u32l;
    skip_0:
    // 0x801CEEE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CEEEC: nop

    // 0x801CEEF0: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x801CEEF4: b           L_801CEF00
    // 0x801CEEF8: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
        goto L_801CEF00;
    // 0x801CEEF8: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x801CEEFC: swc1        $f2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f2.u32l;
L_801CEF00:
    // 0x801CEF00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CEF04: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801CEF08: lwc1        $f8, 0x3C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x801CEF0C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CEF10: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CEF14: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801CEF18: nop

    // 0x801CEF1C: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801CEF20: beql        $a0, $zero, L_801CEF70
    if (ctx->r4 == 0) {
        // 0x801CEF24: mfc1        $a0, $f10
        ctx->r4 = (int32_t)ctx->f10.u32l;
            goto L_801CEF70;
    }
    goto skip_1;
    // 0x801CEF24: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x801CEF28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CEF2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801CEF30: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CEF34: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x801CEF38: nop

    // 0x801CEF3C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CEF40: cfc1        $a0, $FpcCsr
    ctx->r4 = get_cop1_cs();
    // 0x801CEF44: nop

    // 0x801CEF48: andi        $a0, $a0, 0x78
    ctx->r4 = ctx->r4 & 0X78;
    // 0x801CEF4C: bne         $a0, $zero, L_801CEF64
    if (ctx->r4 != 0) {
        // 0x801CEF50: nop
    
            goto L_801CEF64;
    }
    // 0x801CEF50: nop

    // 0x801CEF54: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x801CEF58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CEF5C: b           L_801CEF7C
    // 0x801CEF60: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_801CEF7C;
    // 0x801CEF60: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_801CEF64:
    // 0x801CEF64: b           L_801CEF7C
    // 0x801CEF68: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
        goto L_801CEF7C;
    // 0x801CEF68: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801CEF6C: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
L_801CEF70:
    // 0x801CEF70: nop

    // 0x801CEF74: bltz        $a0, L_801CEF64
    if (SIGNED(ctx->r4) < 0) {
        // 0x801CEF78: nop
    
            goto L_801CEF64;
    }
    // 0x801CEF78: nop

L_801CEF7C:
    // 0x801CEF7C: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801CEF80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CEF84: slti        $at, $t7, 0xE1
    ctx->r1 = SIGNED(ctx->r15) < 0XE1 ? 1 : 0;
    // 0x801CEF88: bne         $at, $zero, L_801CEF94
    if (ctx->r1 != 0) {
        // 0x801CEF8C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_801CEF94;
    }
    // 0x801CEF8C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801CEF90: addiu       $a0, $zero, 0xE0
    ctx->r4 = ADD32(0, 0XE0);
L_801CEF94:
    // 0x801CEF94: jal         0x801D1600
    // 0x801CEF98: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    func_801D1600_5FC9E0(rdram, ctx);
        goto after_0;
    // 0x801CEF98: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CEF9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CEFA0: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x801CEFA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CEFA8: jr          $ra
    // 0x801CEFAC: nop

    TRACE_RETURN()
    return;
    // 0x801CEFAC: nop

;}
RECOMP_FUNC void func_80203424_62E804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80203424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020342C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80203430: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80203434: jal         0x80203F88
    // 0x80203438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80203F88_62F368(rdram, ctx);
        goto after_0;
    // 0x80203438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8020343C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80203440: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80203444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80203448: lbu         $t7, 0x7($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X7);
    // 0x8020344C: beq         $t7, $zero, L_80203468
    if (ctx->r15 == 0) {
        // 0x80203450: nop
    
            goto L_80203468;
    }
    // 0x80203450: nop

    // 0x80203454: jal         0x802035D0
    // 0x80203458: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    func_802035D0_62E9B0(rdram, ctx);
        goto after_1;
    // 0x80203458: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    after_1:
    // 0x8020345C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80203460: jal         0x8020386C
    // 0x80203464: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    func_8020386C_62EC4C(rdram, ctx);
        goto after_2;
    // 0x80203464: lbu         $a1, 0x93($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X93);
    after_2:
L_80203468:
    // 0x80203468: jal         0x802043E4
    // 0x8020346C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802043E4_62F7C4(rdram, ctx);
        goto after_3;
    // 0x8020346C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80203470: beq         $v0, $zero, L_802034B0
    if (ctx->r2 == 0) {
        // 0x80203474: addiu       $t9, $zero, 0x50
        ctx->r25 = ADD32(0, 0X50);
            goto L_802034B0;
    }
    // 0x80203474: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x80203478: sb          $zero, 0x30($s0)
    MEM_B(0X30, ctx->r16) = 0;
    // 0x8020347C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80203480: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80203484: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80203488: sw          $zero, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = 0;
    // 0x8020348C: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x80203490: sw          $t0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r8;
    // 0x80203494: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80203498: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020349C: addiu       $a0, $a0, 0x34C4
    ctx->r4 = ADD32(ctx->r4, 0X34C4);
    // 0x802034A0: lbu         $t1, 0x8($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X8);
    // 0x802034A4: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x802034A8: jal         0x8003521C
    // 0x802034AC: sb          $t2, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x802034AC: sb          $t2, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r10;
    after_4:
L_802034B0:
    // 0x802034B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802034B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802034B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802034BC: jr          $ra
    // 0x802034C0: nop

    TRACE_RETURN()
    return;
    // 0x802034C0: nop

;}
RECOMP_FUNC void func_801D7670_602A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7670: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D7674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D7678: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801D767C: lw          $s0, -0x1130($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1130);
    // 0x801D7680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7684: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D7688: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D768C: jal         0x801D8290
    // 0x801D7690: addiu       $s0, $s0, 0x140
    ctx->r16 = ADD32(ctx->r16, 0X140);
    func_801D8290_603670(rdram, ctx);
        goto after_0;
    // 0x801D7690: addiu       $s0, $s0, 0x140
    ctx->r16 = ADD32(ctx->r16, 0X140);
    after_0:
    // 0x801D7694: jal         0x801D83D8
    // 0x801D7698: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D83D8_6037B8(rdram, ctx);
        goto after_1;
    // 0x801D7698: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x801D769C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801D76A0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x801D76A4: beq         $t6, $t7, L_801D76B4
    if (ctx->r14 == ctx->r15) {
        // 0x801D76A8: nop
    
            goto L_801D76B4;
    }
    // 0x801D76A8: nop

    // 0x801D76AC: jal         0x801D83D8
    // 0x801D76B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_801D83D8_6037B8(rdram, ctx);
        goto after_2;
    // 0x801D76B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_2:
L_801D76B4:
    // 0x801D76B4: jal         0x801D85C4
    // 0x801D76B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D85C4_6039A4(rdram, ctx);
        goto after_3;
    // 0x801D76B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x801D76BC: jal         0x801D86B4
    // 0x801D76C0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_801D86B4_603A94(rdram, ctx);
        goto after_4;
    // 0x801D76C0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
    // 0x801D76C4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x801D76C8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D76CC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D76D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801D76D4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x801D76D8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D76DC: lui         $t2, 0x4
    ctx->r10 = S32(0X4 << 16);
    // 0x801D76E0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x801D76E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x801D76E8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x801D76EC: lhu         $t2, -0x4F84($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X4F84);
    // 0x801D76F0: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x801D76F4: beq         $t3, $zero, L_801D77DC
    if (ctx->r11 == 0) {
        // 0x801D76F8: nop
    
            goto L_801D77DC;
    }
    // 0x801D76F8: nop

    // 0x801D76FC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x801D7700: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801D7704: bne         $v1, $zero, L_801D7748
    if (ctx->r3 != 0) {
        // 0x801D7708: nop
    
            goto L_801D7748;
    }
    // 0x801D7708: nop

    // 0x801D770C: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
    // 0x801D7710: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x801D7714: beql        $t4, $zero, L_801D7728
    if (ctx->r12 == 0) {
        // 0x801D7718: lbu         $t6, 0x1F($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X1F);
            goto L_801D7728;
    }
    goto skip_0;
    // 0x801D7718: lbu         $t6, 0x1F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1F);
    skip_0:
    // 0x801D771C: b           L_801D77DC
    // 0x801D7720: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
        goto L_801D77DC;
    // 0x801D7720: sb          $t5, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r13;
    // 0x801D7724: lbu         $t6, 0x1F($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1F);
L_801D7728:
    // 0x801D7728: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801D772C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x801D7730: beq         $t6, $zero, L_801D7740
    if (ctx->r14 == 0) {
        // 0x801D7734: nop
    
            goto L_801D7740;
    }
    // 0x801D7734: nop

    // 0x801D7738: b           L_801D77DC
    // 0x801D773C: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
        goto L_801D77DC;
    // 0x801D773C: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
L_801D7740:
    // 0x801D7740: b           L_801D77DC
    // 0x801D7744: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
        goto L_801D77DC;
    // 0x801D7744: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
L_801D7748:
    // 0x801D7748: bne         $v1, $at, L_801D778C
    if (ctx->r3 != ctx->r1) {
        // 0x801D774C: addiu       $a0, $s0, 0x12
        ctx->r4 = ADD32(ctx->r16, 0X12);
            goto L_801D778C;
    }
    // 0x801D774C: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    // 0x801D7750: jal         0x801D825C
    // 0x801D7754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801D825C_60363C(rdram, ctx);
        goto after_5;
    // 0x801D7754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x801D7758: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D775C: bne         $v0, $at, L_801D777C
    if (ctx->r2 != ctx->r1) {
        // 0x801D7760: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_801D777C;
    }
    // 0x801D7760: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801D7764: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x801D7768: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
    // 0x801D776C: jal         0x801D822C
    // 0x801D7770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_6;
    // 0x801D7770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x801D7774: b           L_801D778C
    // 0x801D7778: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
        goto L_801D778C;
    // 0x801D7778: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
L_801D777C:
    // 0x801D777C: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x801D7780: jal         0x801D822C
    // 0x801D7784: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_7;
    // 0x801D7784: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x801D7788: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
L_801D778C:
    // 0x801D778C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x801D7790: bne         $v1, $at, L_801D77A8
    if (ctx->r3 != ctx->r1) {
        // 0x801D7794: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_801D77A8;
    }
    // 0x801D7794: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x801D7798: sb          $t1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r9;
    // 0x801D779C: jal         0x801D822C
    // 0x801D77A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_8;
    // 0x801D77A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x801D77A4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
L_801D77A8:
    // 0x801D77A8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x801D77AC: bne         $v1, $at, L_801D77C4
    if (ctx->r3 != ctx->r1) {
        // 0x801D77B0: addiu       $t2, $zero, 0x20
        ctx->r10 = ADD32(0, 0X20);
            goto L_801D77C4;
    }
    // 0x801D77B0: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x801D77B4: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x801D77B8: jal         0x801D822C
    // 0x801D77BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_9;
    // 0x801D77BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x801D77C0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
L_801D77C4:
    // 0x801D77C4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x801D77C8: bne         $v1, $at, L_801D77DC
    if (ctx->r3 != ctx->r1) {
        // 0x801D77CC: addiu       $t3, $zero, 0x20
        ctx->r11 = ADD32(0, 0X20);
            goto L_801D77DC;
    }
    // 0x801D77CC: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x801D77D0: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
    // 0x801D77D4: jal         0x801D822C
    // 0x801D77D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_801D822C_60360C(rdram, ctx);
        goto after_10;
    // 0x801D77D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_10:
L_801D77DC:
    // 0x801D77DC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801D77E0: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x801D77E4: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x801D77E8: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D77EC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x801D77F0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x801D77F4: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
    // 0x801D77F8: andi        $t7, $a0, 0x4000
    ctx->r15 = ctx->r4 & 0X4000;
    // 0x801D77FC: beql        $t7, $zero, L_801D78D0
    if (ctx->r15 == 0) {
        // 0x801D7800: andi        $t2, $a0, 0x10
        ctx->r10 = ctx->r4 & 0X10;
            goto L_801D78D0;
    }
    goto skip_1;
    // 0x801D7800: andi        $t2, $a0, 0x10
    ctx->r10 = ctx->r4 & 0X10;
    skip_1:
    // 0x801D7804: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x801D7808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D780C: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x801D7810: bne         $v1, $zero, L_801D7844
    if (ctx->r3 != 0) {
        // 0x801D7814: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_801D7844;
    }
    // 0x801D7814: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x801D7818: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
    // 0x801D781C: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
    // 0x801D7820: sb          $v0, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r2;
    // 0x801D7824: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D7828: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D782C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801D7830: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D7834: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x801D7838: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x801D783C: b           L_801D78CC
    // 0x801D7840: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
        goto L_801D78CC;
    // 0x801D7840: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
L_801D7844:
    // 0x801D7844: bnel        $v1, $at, L_801D78D0
    if (ctx->r3 != ctx->r1) {
        // 0x801D7848: andi        $t2, $a0, 0x10
        ctx->r10 = ctx->r4 & 0X10;
            goto L_801D78D0;
    }
    goto skip_2;
    // 0x801D7848: andi        $t2, $a0, 0x10
    ctx->r10 = ctx->r4 & 0X10;
    skip_2:
    // 0x801D784C: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x801D7850: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801D7854: beq         $at, $zero, L_801D78CC
    if (ctx->r1 == 0) {
        // 0x801D7858: addiu       $t2, $v0, 0x1
        ctx->r10 = ADD32(ctx->r2, 0X1);
            goto L_801D78CC;
    }
    // 0x801D7858: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x801D785C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x801D7860: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x801D7864: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
    // 0x801D7868: bne         $at, $zero, L_801D78A0
    if (ctx->r1 != 0) {
        // 0x801D786C: sb          $t2, 0x11($s0)
        MEM_B(0X11, ctx->r16) = ctx->r10;
            goto L_801D78A0;
    }
    // 0x801D786C: sb          $t2, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r10;
    // 0x801D7870: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x801D7874: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x801D7878: jal         0x801D822C
    // 0x801D787C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_11;
    // 0x801D787C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x801D7880: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801D7884: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801D7888: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801D788C: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D7890: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x801D7894: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x801D7898: b           L_801D78CC
    // 0x801D789C: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
        goto L_801D78CC;
    // 0x801D789C: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
L_801D78A0:
    // 0x801D78A0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x801D78A4: sb          $t8, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r24;
    // 0x801D78A8: jal         0x801D822C
    // 0x801D78AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_12;
    // 0x801D78AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x801D78B0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801D78B4: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801D78B8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x801D78BC: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x801D78C0: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x801D78C4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x801D78C8: lhu         $a0, -0x4F84($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X4F84);
L_801D78CC:
    // 0x801D78CC: andi        $t2, $a0, 0x10
    ctx->r10 = ctx->r4 & 0X10;
L_801D78D0:
    // 0x801D78D0: beql        $t2, $zero, L_801D7920
    if (ctx->r10 == 0) {
        // 0x801D78D4: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_801D7920;
    }
    goto skip_3;
    // 0x801D78D4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x801D78D8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x801D78DC: addiu       $t3, $zero, 0x14
    ctx->r11 = ADD32(0, 0X14);
    // 0x801D78E0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x801D78E4: bne         $v1, $zero, L_801D78F4
    if (ctx->r3 != 0) {
        // 0x801D78E8: nop
    
            goto L_801D78F4;
    }
    // 0x801D78E8: nop

    // 0x801D78EC: b           L_801D791C
    // 0x801D78F0: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
        goto L_801D791C;
    // 0x801D78F0: sb          $t3, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r11;
L_801D78F4:
    // 0x801D78F4: bne         $v1, $at, L_801D791C
    if (ctx->r3 != ctx->r1) {
        // 0x801D78F8: addiu       $a0, $s0, 0x12
        ctx->r4 = ADD32(ctx->r16, 0X12);
            goto L_801D791C;
    }
    // 0x801D78F8: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    // 0x801D78FC: jal         0x801D825C
    // 0x801D7900: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801D825C_60363C(rdram, ctx);
        goto after_13;
    // 0x801D7900: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x801D7904: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801D7908: bne         $v0, $at, L_801D791C
    if (ctx->r2 != ctx->r1) {
        // 0x801D790C: addiu       $t4, $zero, 0x15
        ctx->r12 = ADD32(0, 0X15);
            goto L_801D791C;
    }
    // 0x801D790C: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x801D7910: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x801D7914: jal         0x801D822C
    // 0x801D7918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801D822C_60360C(rdram, ctx);
        goto after_14;
    // 0x801D7918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
L_801D791C:
    // 0x801D791C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_801D7920:
    // 0x801D7920: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D7924: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D7928: sll         $a0, $a2, 2
    ctx->r4 = S32(ctx->r6 << 2);
    // 0x801D792C: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x801D7930: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x801D7934: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801D7938: addu        $t5, $v1, $a0
    ctx->r13 = ADD32(ctx->r3, ctx->r4);
    // 0x801D793C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801D7940: lhu         $t6, -0x4F84($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X4F84);
    // 0x801D7944: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D7948: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x801D794C: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x801D7950: beq         $t7, $zero, L_801D79BC
    if (ctx->r15 == 0) {
        // 0x801D7954: ori         $at, $at, 0x8000
        ctx->r1 = ctx->r1 | 0X8000;
            goto L_801D79BC;
    }
    // 0x801D7954: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D7958: bnel        $t8, $a2, L_801D7984
    if (ctx->r24 != ctx->r6) {
        // 0x801D795C: lbu         $t1, 0xC($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XC);
            goto L_801D7984;
    }
    goto skip_4;
    // 0x801D795C: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    skip_4:
    // 0x801D7960: lbu         $t0, 0x2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2);
    // 0x801D7964: addiu       $t9, $zero, 0x46
    ctx->r25 = ADD32(0, 0X46);
    // 0x801D7968: bnel        $t0, $zero, L_801D79C0
    if (ctx->r8 != 0) {
        // 0x801D796C: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_801D79C0;
    }
    goto skip_5;
    // 0x801D796C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_5:
    // 0x801D7970: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x801D7974: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D7978: b           L_801D79BC
    // 0x801D797C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
        goto L_801D79BC;
    // 0x801D797C: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801D7980: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
L_801D7984:
    // 0x801D7984: lbu         $t2, 0xE($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XE);
    // 0x801D7988: lbu         $t4, 0xF($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XF);
    // 0x801D798C: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x801D7990: sltiu       $t5, $t4, 0x1
    ctx->r13 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x801D7994: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x801D7998: beql        $t6, $zero, L_801D79C0
    if (ctx->r14 == 0) {
        // 0x801D799C: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_801D79C0;
    }
    goto skip_6;
    // 0x801D799C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_6:
    // 0x801D79A0: lbu         $t7, 0x6($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X6);
    // 0x801D79A4: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x801D79A8: bnel        $t7, $zero, L_801D79C0
    if (ctx->r15 != 0) {
        // 0x801D79AC: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_801D79C0;
    }
    goto skip_7;
    // 0x801D79AC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    skip_7:
    // 0x801D79B0: sb          $t8, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r24;
    // 0x801D79B4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D79B8: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
L_801D79BC:
    // 0x801D79BC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_801D79C0:
    // 0x801D79C0: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D79C4: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x801D79C8: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x801D79CC: lhu         $t1, -0x4F84($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F84);
    // 0x801D79D0: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x801D79D4: beql        $t2, $zero, L_801D7A0C
    if (ctx->r10 == 0) {
        // 0x801D79D8: addu        $v0, $v1, $a0
        ctx->r2 = ADD32(ctx->r3, ctx->r4);
            goto L_801D7A0C;
    }
    goto skip_8;
    // 0x801D79D8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    skip_8:
    // 0x801D79DC: lbu         $t4, 0x2($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X2);
    // 0x801D79E0: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x801D79E4: bne         $t4, $zero, L_801D7A08
    if (ctx->r12 != 0) {
        // 0x801D79E8: addu        $t5, $s0, $t3
        ctx->r13 = ADD32(ctx->r16, ctx->r11);
            goto L_801D7A08;
    }
    // 0x801D79E8: addu        $t5, $s0, $t3
    ctx->r13 = ADD32(ctx->r16, ctx->r11);
    // 0x801D79EC: lbu         $t6, 0x15($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X15);
    // 0x801D79F0: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x801D79F4: beql        $t6, $zero, L_801D7A0C
    if (ctx->r14 == 0) {
        // 0x801D79F8: addu        $v0, $v1, $a0
        ctx->r2 = ADD32(ctx->r3, ctx->r4);
            goto L_801D7A0C;
    }
    goto skip_9;
    // 0x801D79F8: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    skip_9:
    // 0x801D79FC: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x801D7A00: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801D7A04: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
L_801D7A08:
    // 0x801D7A08: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
L_801D7A0C:
    // 0x801D7A0C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801D7A10: lhu         $t8, 0x307C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X307C);
    // 0x801D7A14: andi        $t0, $t8, 0x2000
    ctx->r8 = ctx->r24 & 0X2000;
    // 0x801D7A18: beql        $t0, $zero, L_801D7A60
    if (ctx->r8 == 0) {
        // 0x801D7A1C: lbu         $v1, 0x27($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X27);
            goto L_801D7A60;
    }
    goto skip_10;
    // 0x801D7A1C: lbu         $v1, 0x27($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X27);
    skip_10:
    // 0x801D7A20: lbu         $t9, 0x2($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2);
    // 0x801D7A24: addu        $t1, $s0, $a2
    ctx->r9 = ADD32(ctx->r16, ctx->r6);
    // 0x801D7A28: bnel        $t9, $zero, L_801D7A60
    if (ctx->r25 != 0) {
        // 0x801D7A2C: lbu         $v1, 0x27($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X27);
            goto L_801D7A60;
    }
    goto skip_11;
    // 0x801D7A2C: lbu         $v1, 0x27($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X27);
    skip_11:
    // 0x801D7A30: lbu         $t2, 0x15($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X15);
    // 0x801D7A34: addiu       $t4, $zero, 0x29
    ctx->r12 = ADD32(0, 0X29);
    // 0x801D7A38: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801D7A3C: beql        $t2, $zero, L_801D7A60
    if (ctx->r10 == 0) {
        // 0x801D7A40: lbu         $v1, 0x27($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X27);
            goto L_801D7A60;
    }
    goto skip_12;
    // 0x801D7A40: lbu         $v1, 0x27($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X27);
    skip_12:
    // 0x801D7A44: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x801D7A48: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801D7A4C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801D7A50: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801D7A54: addu        $v0, $t3, $a0
    ctx->r2 = ADD32(ctx->r11, ctx->r4);
    // 0x801D7A58: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801D7A5C: lbu         $v1, 0x27($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X27);
L_801D7A60:
    // 0x801D7A60: lhu         $t5, 0x307A($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X307A);
    // 0x801D7A64: and         $t6, $t5, $v1
    ctx->r14 = ctx->r13 & ctx->r3;
    // 0x801D7A68: beql        $t6, $zero, L_801D7AA8
    if (ctx->r14 == 0) {
        // 0x801D7A6C: lbu         $v0, 0x0($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X0);
            goto L_801D7AA8;
    }
    goto skip_13;
    // 0x801D7A6C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    skip_13:
    // 0x801D7A70: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x801D7A74: bnel        $t7, $zero, L_801D7AA8
    if (ctx->r15 != 0) {
        // 0x801D7A78: lbu         $v0, 0x0($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X0);
            goto L_801D7AA8;
    }
    goto skip_14;
    // 0x801D7A78: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    skip_14:
    // 0x801D7A7C: lbu         $t8, 0x25($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X25);
    // 0x801D7A80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D7A84: beql        $t8, $zero, L_801D7AA8
    if (ctx->r24 == 0) {
        // 0x801D7A88: lbu         $v0, 0x0($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X0);
            goto L_801D7AA8;
    }
    goto skip_15;
    // 0x801D7A88: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    skip_15:
    // 0x801D7A8C: bne         $v1, $at, L_801D7AA0
    if (ctx->r3 != ctx->r1) {
        // 0x801D7A90: addiu       $t9, $zero, 0x32
        ctx->r25 = ADD32(0, 0X32);
            goto L_801D7AA0;
    }
    // 0x801D7A90: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x801D7A94: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x801D7A98: b           L_801D7AA4
    // 0x801D7A9C: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
        goto L_801D7AA4;
    // 0x801D7A9C: sb          $t0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r8;
L_801D7AA0:
    // 0x801D7AA0: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
L_801D7AA4:
    // 0x801D7AA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
L_801D7AA8:
    // 0x801D7AA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7AAC: beql        $v0, $zero, L_801D7AC8
    if (ctx->r2 == 0) {
        // 0x801D7AB0: lbu         $v0, 0x1($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X1);
            goto L_801D7AC8;
    }
    goto skip_16;
    // 0x801D7AB0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    skip_16:
    // 0x801D7AB4: beq         $v0, $at, L_801D7B00
    if (ctx->r2 == ctx->r1) {
        // 0x801D7AB8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801D7B00;
    }
    // 0x801D7AB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D7ABC: beql        $v0, $at, L_801D7B30
    if (ctx->r2 == ctx->r1) {
        // 0x801D7AC0: lbu         $v0, 0x3($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X3);
            goto L_801D7B30;
    }
    goto skip_17;
    // 0x801D7AC0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    skip_17:
    // 0x801D7AC4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
L_801D7AC8:
    // 0x801D7AC8: beq         $v0, $zero, L_801D7AF8
    if (ctx->r2 == 0) {
        // 0x801D7ACC: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_801D7AF8;
    }
    // 0x801D7ACC: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x801D7AD0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x801D7AD4: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    // 0x801D7AD8: jal         0x801D7BC8
    // 0x801D7ADC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    func_801D7BC8_602FA8(rdram, ctx);
        goto after_15;
    // 0x801D7ADC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_15:
    // 0x801D7AE0: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x801D7AE4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x801D7AE8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x801D7AEC: sb          $t2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r10;
    // 0x801D7AF0: b           L_801D7B4C
    // 0x801D7AF4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
        goto L_801D7B4C;
    // 0x801D7AF4: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_801D7AF8:
    // 0x801D7AF8: b           L_801D7B4C
    // 0x801D7AFC: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
        goto L_801D7B4C;
    // 0x801D7AFC: sb          $zero, 0x12($s0)
    MEM_B(0X12, ctx->r16) = 0;
L_801D7B00:
    // 0x801D7B00: jal         0x801D2E00
    // 0x801D7B04: nop

    func_801D2E00_5FE1E0(rdram, ctx);
        goto after_16;
    // 0x801D7B04: nop

    after_16:
    // 0x801D7B08: bne         $v0, $zero, L_801D7B24
    if (ctx->r2 != 0) {
        // 0x801D7B0C: nop
    
            goto L_801D7B24;
    }
    // 0x801D7B0C: nop

    // 0x801D7B10: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x801D7B14: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x801D7B18: sb          $t5, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r13;
    // 0x801D7B1C: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x801D7B20: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
L_801D7B24:
    // 0x801D7B24: b           L_801D7B4C
    // 0x801D7B28: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
        goto L_801D7B4C;
    // 0x801D7B28: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x801D7B2C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
L_801D7B30:
    // 0x801D7B30: beq         $v0, $zero, L_801D7B40
    if (ctx->r2 == 0) {
        // 0x801D7B34: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_801D7B40;
    }
    // 0x801D7B34: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x801D7B38: b           L_801D7B4C
    // 0x801D7B3C: sb          $t6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r14;
        goto L_801D7B4C;
    // 0x801D7B3C: sb          $t6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r14;
L_801D7B40:
    // 0x801D7B40: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x801D7B44: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x801D7B48: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_801D7B4C:
    // 0x801D7B4C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x801D7B50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D7B54: beql        $v0, $zero, L_801D7B68
    if (ctx->r2 == 0) {
        // 0x801D7B58: lbu         $v0, 0x5($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X5);
            goto L_801D7B68;
    }
    goto skip_18;
    // 0x801D7B58: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    skip_18:
    // 0x801D7B5C: beql        $v0, $at, L_801D7B98
    if (ctx->r2 == ctx->r1) {
        // 0x801D7B60: lbu         $v0, 0x7($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X7);
            goto L_801D7B98;
    }
    goto skip_19;
    // 0x801D7B60: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    skip_19:
    // 0x801D7B64: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
L_801D7B68:
    // 0x801D7B68: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801D7B6C: beq         $v0, $zero, L_801D7BB4
    if (ctx->r2 == 0) {
        // 0x801D7B70: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_801D7BB4;
    }
    // 0x801D7B70: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x801D7B74: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x801D7B78: jal         0x801D8184
    // 0x801D7B7C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    func_801D8184_603564(rdram, ctx);
        goto after_17;
    // 0x801D7B7C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    after_17:
    // 0x801D7B80: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    // 0x801D7B84: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x801D7B88: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801D7B8C: b           L_801D7BB4
    // 0x801D7B90: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
        goto L_801D7BB4;
    // 0x801D7B90: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x801D7B94: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
L_801D7B98:
    // 0x801D7B98: beq         $v0, $zero, L_801D7BA8
    if (ctx->r2 == 0) {
        // 0x801D7B9C: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_801D7BA8;
    }
    // 0x801D7B9C: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x801D7BA0: b           L_801D7BB4
    // 0x801D7BA4: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
        goto L_801D7BB4;
    // 0x801D7BA4: sb          $t0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r8;
L_801D7BA8:
    // 0x801D7BA8: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x801D7BAC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x801D7BB0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_801D7BB4:
    // 0x801D7BB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D7BB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D7BBC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D7BC0: jr          $ra
    // 0x801D7BC4: nop

    TRACE_RETURN()
    return;
    // 0x801D7BC4: nop

;}
RECOMP_FUNC void func_801E9624_614A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9624: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E9628: addiu       $a3, $a3, -0x1130
    ctx->r7 = ADD32(ctx->r7, -0X1130);
    // 0x801E962C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E9630: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x801E9634: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E9638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E963C: addiu       $t6, $t0, 0x140
    ctx->r14 = ADD32(ctx->r8, 0X140);
    // 0x801E9640: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E9644: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E9648: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x801E964C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x801E9650: lwc1        $f4, 0xA0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA0);
    // 0x801E9654: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801E9658: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801E965C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E9660: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E9664: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E9668: sub.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f6.d - ctx->f0.d;
    // 0x801E966C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801E9670: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801E9674: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E9678: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E967C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801E9680: swc1        $f10, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f10.u32l;
    // 0x801E9684: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x801E9688: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801E968C: lw          $t9, 0x1E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1E4);
    // 0x801E9690: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x801E9694: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x801E9698: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x801E969C: addu        $v1, $t7, $t1
    ctx->r3 = ADD32(ctx->r15, ctx->r9);
    // 0x801E96A0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801E96A4: lhu         $a2, 0x307C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X307C);
    // 0x801E96A8: andi        $t2, $a2, 0x10
    ctx->r10 = ctx->r6 & 0X10;
    // 0x801E96AC: beql        $t2, $zero, L_801E96F0
    if (ctx->r10 == 0) {
        // 0x801E96B0: andi        $t8, $a2, 0xC030
        ctx->r24 = ctx->r6 & 0XC030;
            goto L_801E96F0;
    }
    goto skip_0;
    // 0x801E96B0: andi        $t8, $a2, 0xC030
    ctx->r24 = ctx->r6 & 0XC030;
    skip_0:
    // 0x801E96B4: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x801E96B8: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801E96BC: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801E96C0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801E96C4: lw          $t3, -0x3A38($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3A38);
    // 0x801E96C8: lw          $t5, 0x1E4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1E4);
    // 0x801E96CC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801E96D0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801E96D4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801E96D8: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x801E96DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x801E96E0: addu        $v1, $t3, $t6
    ctx->r3 = ADD32(ctx->r11, ctx->r14);
    // 0x801E96E4: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801E96E8: lhu         $a2, 0x307C($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X307C);
    // 0x801E96EC: andi        $t8, $a2, 0xC030
    ctx->r24 = ctx->r6 & 0XC030;
L_801E96F0:
    // 0x801E96F0: beql        $t8, $zero, L_801E97D8
    if (ctx->r24 == 0) {
        // 0x801E96F4: lwc1        $f0, 0xA0($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801E97D8;
    }
    goto skip_1;
    // 0x801E96F4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    skip_1:
    // 0x801E96F8: lwc1        $f16, 0x98($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801E96FC: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x801E9700: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x801E9704: nop

    // 0x801E9708: bc1fl       L_801E9774
    if (!c1cs) {
        // 0x801E970C: lwc1        $f18, 0x3088($v1)
        ctx->f18.u32l = MEM_W(ctx->r3, 0X3088);
            goto L_801E9774;
    }
    goto skip_2;
    // 0x801E970C: lwc1        $f18, 0x3088($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X3088);
    skip_2:
    // 0x801E9710: lwc1        $f18, 0x3088($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X3088);
    // 0x801E9714: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801E9718: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E971C: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x801E9720: nop

    // 0x801E9724: bc1fl       L_801E9754
    if (!c1cs) {
        // 0x801E9728: lwc1        $f4, 0xA0($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801E9754;
    }
    goto skip_3;
    // 0x801E9728: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
    skip_3:
    // 0x801E972C: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9730: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801E9734: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E9738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E973C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E9740: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801E9744: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E9748: b           L_801E97D4
    // 0x801E974C: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
        goto L_801E97D4;
    // 0x801E974C: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
    // 0x801E9750: lwc1        $f4, 0xA0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XA0);
L_801E9754:
    // 0x801E9754: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E9758: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E975C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E9760: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E9764: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E9768: b           L_801E97D4
    // 0x801E976C: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
        goto L_801E97D4;
    // 0x801E976C: swc1        $f16, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f16.u32l;
    // 0x801E9770: lwc1        $f18, 0x3088($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X3088);
L_801E9774:
    // 0x801E9774: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801E9778: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E977C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801E9780: lui         $at, 0x4022
    ctx->r1 = S32(0X4022 << 16);
    // 0x801E9784: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801E9788: nop

    // 0x801E978C: bc1fl       L_801E97BC
    if (!c1cs) {
        // 0x801E9790: lwc1        $f6, 0xA0($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
            goto L_801E97BC;
    }
    goto skip_4;
    // 0x801E9790: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
    skip_4:
    // 0x801E9794: lwc1        $f8, 0xA0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9798: lui         $at, 0x4026
    ctx->r1 = S32(0X4026 << 16);
    // 0x801E979C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x801E97A0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E97A4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E97A8: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801E97AC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801E97B0: b           L_801E97D4
    // 0x801E97B4: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
        goto L_801E97D4;
    // 0x801E97B4: swc1        $f4, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f4.u32l;
    // 0x801E97B8: lwc1        $f6, 0xA0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XA0);
L_801E97BC:
    // 0x801E97BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801E97C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E97C4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801E97C8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x801E97CC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E97D0: swc1        $f18, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f18.u32l;
L_801E97D4:
    // 0x801E97D4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
L_801E97D8:
    // 0x801E97D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E97DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801E97E0: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E97E4: nop

    // 0x801E97E8: bc1fl       L_801E97FC
    if (!c1cs) {
        // 0x801E97EC: c.le.s      $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
            goto L_801E97FC;
    }
    goto skip_5;
    // 0x801E97EC: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    skip_5:
    // 0x801E97F0: swc1        $f2, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f2.u32l;
    // 0x801E97F4: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E97F8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
L_801E97FC:
    // 0x801E97FC: nop

    // 0x801E9800: bc1fl       L_801E9818
    if (!c1cs) {
        // 0x801E9804: trunc.w.s   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
            goto L_801E9818;
    }
    goto skip_6;
    // 0x801E9804: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    skip_6:
    // 0x801E9808: swc1        $f12, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->f12.u32l;
    // 0x801E980C: lwc1        $f0, 0xA0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9810: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    // 0x801E9814: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
L_801E9818:
    // 0x801E9818: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E981C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801E9820: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801E9824: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x801E9828: nop

    // 0x801E982C: sw          $t7, 0x70($t0)
    MEM_W(0X70, ctx->r8) = ctx->r15;
    // 0x801E9830: jal         0x801D4AEC
    // 0x801E9834: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    func_801D4AEC_5FFECC(rdram, ctx);
        goto after_0;
    // 0x801E9834: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    after_0:
    // 0x801E9838: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801E983C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9840: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E9844: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801E9848: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801E984C: nop

    // 0x801E9850: bc1f        L_801E9864
    if (!c1cs) {
        // 0x801E9854: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801E9864;
    }
    // 0x801E9854: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E9858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E985C: nop

    // 0x801E9860: swc1        $f10, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f10.u32l;
L_801E9864:
    // 0x801E9864: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x801E9868: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E986C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E9870: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x801E9874: nop

    // 0x801E9878: bc1f        L_801E988C
    if (!c1cs) {
        // 0x801E987C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801E988C;
    }
    // 0x801E987C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801E9880: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9884: nop

    // 0x801E9888: swc1        $f4, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f4.u32l;
L_801E988C:
    // 0x801E988C: lui         $at, 0xC3E1
    ctx->r1 = S32(0XC3E1 << 16);
    // 0x801E9890: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9894: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9898: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801E989C: nop

    // 0x801E98A0: bc1f        L_801E98B8
    if (!c1cs) {
        // 0x801E98A4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_801E98B8;
    }
    // 0x801E98A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E98A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E98AC: nop

    // 0x801E98B0: swc1        $f8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f8.u32l;
    // 0x801E98B4: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
L_801E98B8:
    // 0x801E98B8: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x801E98BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E98C0: nop

    // 0x801E98C4: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x801E98C8: nop

    // 0x801E98CC: bc1f        L_801E98E0
    if (!c1cs) {
        // 0x801E98D0: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_801E98E0;
    }
    // 0x801E98D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801E98D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E98D8: nop

    // 0x801E98DC: swc1        $f16, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->f16.u32l;
L_801E98E0:
    // 0x801E98E0: jal         0x801D4BF4
    // 0x801E98E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_801D4BF4_5FFFD4(rdram, ctx);
        goto after_1;
    // 0x801E98E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_1:
    // 0x801E98E8: lw          $t1, 0x94($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X94);
    // 0x801E98EC: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x801E98F0: bgez        $t1, L_801E9908
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801E98F4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801E9908;
    }
    // 0x801E98F4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801E98F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E98FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E9900: nop

    // 0x801E9904: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801E9908:
    // 0x801E9908: lwc1        $f8, 0x98($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X98);
    // 0x801E990C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801E9910: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E9914: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801E9918: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801E991C: nop

    // 0x801E9920: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801E9924: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801E9928: nop

    // 0x801E992C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801E9930: beq         $t4, $zero, L_801E997C
    if (ctx->r12 == 0) {
        // 0x801E9934: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_801E997C;
    }
    // 0x801E9934: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E9938: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E993C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801E9940: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E9944: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801E9948: nop

    // 0x801E994C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E9950: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801E9954: nop

    // 0x801E9958: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801E995C: bne         $t4, $zero, L_801E9974
    if (ctx->r12 != 0) {
        // 0x801E9960: nop
    
            goto L_801E9974;
    }
    // 0x801E9960: nop

    // 0x801E9964: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x801E9968: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E996C: b           L_801E998C
    // 0x801E9970: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_801E998C;
    // 0x801E9970: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_801E9974:
    // 0x801E9974: b           L_801E998C
    // 0x801E9978: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_801E998C;
    // 0x801E9978: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_801E997C:
    // 0x801E997C: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x801E9980: nop

    // 0x801E9984: bltz        $t4, L_801E9974
    if (SIGNED(ctx->r12) < 0) {
        // 0x801E9988: nop
    
            goto L_801E9974;
    }
    // 0x801E9988: nop

L_801E998C:
    // 0x801E998C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801E9990: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x801E9994: sw          $t4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r12;
    // 0x801E9998: bgez        $t4, L_801E99B0
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801E999C: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801E99B0;
    }
    // 0x801E999C: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801E99A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E99A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E99A8: nop

    // 0x801E99AC: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_801E99B0:
    // 0x801E99B0: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E99B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E99B8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801E99BC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E99C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E99C4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801E99C8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801E99CC: nop

    // 0x801E99D0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801E99D4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801E99D8: nop

    // 0x801E99DC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801E99E0: beql        $t6, $zero, L_801E9A30
    if (ctx->r14 == 0) {
        // 0x801E99E4: mfc1        $t6, $f16
        ctx->r14 = (int32_t)ctx->f16.u32l;
            goto L_801E9A30;
    }
    goto skip_7;
    // 0x801E99E4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    skip_7:
    // 0x801E99E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E99EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E99F0: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x801E99F4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801E99F8: nop

    // 0x801E99FC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801E9A00: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801E9A04: nop

    // 0x801E9A08: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801E9A0C: bne         $t6, $zero, L_801E9A24
    if (ctx->r14 != 0) {
        // 0x801E9A10: nop
    
            goto L_801E9A24;
    }
    // 0x801E9A10: nop

    // 0x801E9A14: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x801E9A18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E9A1C: b           L_801E9A3C
    // 0x801E9A20: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801E9A3C;
    // 0x801E9A20: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801E9A24:
    // 0x801E9A24: b           L_801E9A3C
    // 0x801E9A28: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801E9A3C;
    // 0x801E9A28: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801E9A2C: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
L_801E9A30:
    // 0x801E9A30: nop

    // 0x801E9A34: bltz        $t6, L_801E9A24
    if (SIGNED(ctx->r14) < 0) {
        // 0x801E9A38: nop
    
            goto L_801E9A24;
    }
    // 0x801E9A38: nop

L_801E9A3C:
    // 0x801E9A3C: lw          $t8, 0x80($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X80);
    // 0x801E9A40: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801E9A44: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x801E9A48: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801E9A4C: bgtz        $t9, L_801E9A78
    if (SIGNED(ctx->r25) > 0) {
        // 0x801E9A50: sw          $t9, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r25;
            goto L_801E9A78;
    }
    // 0x801E9A50: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x801E9A54: jal         0x80037C9C
    // 0x801E9A58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801E9A58: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x801E9A5C: lui         $a2, 0x2222
    ctx->r6 = S32(0X2222 << 16);
    // 0x801E9A60: ori         $a2, $a2, 0x2222
    ctx->r6 = ctx->r6 | 0X2222;
    // 0x801E9A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E9A68: jal         0x80037C20
    // 0x801E9A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801E9A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801E9A70: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x801E9A74: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
L_801E9A78:
    // 0x801E9A78: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801E9A7C: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801E9A80: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x801E9A84: jal         0x8000E630
    // 0x801E9A88: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_4;
    // 0x801E9A88: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x801E9A8C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801E9A90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801E9A94: jal         0x8000E9F4
    // 0x801E9A98: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_5;
    // 0x801E9A98: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_5:
    // 0x801E9A9C: lui         $a1, 0xBE99
    ctx->r5 = S32(0XBE99 << 16);
    // 0x801E9AA0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801E9AA4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801E9AA8: jal         0x801D6508
    // 0x801E9AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6508_6018E8(rdram, ctx);
        goto after_6;
    // 0x801E9AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801E9AB0: addiu       $a0, $s0, 0x74
    ctx->r4 = ADD32(ctx->r16, 0X74);
    // 0x801E9AB4: jal         0x801D725C
    // 0x801E9AB8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_801D725C_60263C(rdram, ctx);
        goto after_7;
    // 0x801E9AB8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_7:
    // 0x801E9ABC: jal         0x801EEEA0
    // 0x801E9AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EEEA0_61A280(rdram, ctx);
        goto after_8;
    // 0x801E9AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E9AC4: lw          $t2, 0x7C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X7C);
    // 0x801E9AC8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801E9ACC: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x801E9AD0: bgtz        $t4, L_801E9B88
    if (SIGNED(ctx->r12) > 0) {
        // 0x801E9AD4: sw          $t4, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r12;
            goto L_801E9B88;
    }
    // 0x801E9AD4: sw          $t4, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r12;
    // 0x801E9AD8: lwc1        $f18, 0xA0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XA0);
    // 0x801E9ADC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E9AE0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9AE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801E9AE8: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x801E9AEC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x801E9AF0: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E9AF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E9AF8: bc1f        L_801E9B38
    if (!c1cs) {
        // 0x801E9AFC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_801E9B38;
    }
    // 0x801E9AFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E9B00: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9B04: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E9B08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E9B0C: jal         0x801D34D0
    // 0x801E9B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_9;
    // 0x801E9B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x801E9B14: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E9B18: addiu       $a1, $a1, -0x4E80
    ctx->r5 = ADD32(ctx->r5, -0X4E80);
    // 0x801E9B1C: jal         0x801D2EE4
    // 0x801E9B20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_10;
    // 0x801E9B20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x801E9B24: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9B28: jal         0x8003521C
    // 0x801E9B2C: addiu       $a0, $a0, -0x6464
    ctx->r4 = ADD32(ctx->r4, -0X6464);
    func_8003521C_35E1C(rdram, ctx);
        goto after_11;
    // 0x801E9B2C: addiu       $a0, $a0, -0x6464
    ctx->r4 = ADD32(ctx->r4, -0X6464);
    after_11:
    // 0x801E9B30: b           L_801E9B8C
    // 0x801E9B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E9B8C;
    // 0x801E9B34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E9B38:
    // 0x801E9B38: sw          $zero, 0x34($t3)
    MEM_W(0X34, ctx->r11) = 0;
    // 0x801E9B3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x801E9B40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E9B44: jal         0x801D34D0
    // 0x801E9B48: sw          $zero, 0x70($t6)
    MEM_W(0X70, ctx->r14) = 0;
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_12;
    // 0x801E9B48: sw          $zero, 0x70($t6)
    MEM_W(0X70, ctx->r14) = 0;
    after_12:
    // 0x801E9B4C: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9B50: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E9B54: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x801E9B58: bgez        $t8, L_801E9B6C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801E9B5C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801E9B6C;
    }
    // 0x801E9B5C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801E9B60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E9B64: nop

    // 0x801E9B68: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801E9B6C:
    // 0x801E9B6C: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    // 0x801E9B70: lhu         $t9, 0x16($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9B74: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E9B78: addiu       $a0, $a0, -0x629C
    ctx->r4 = ADD32(ctx->r4, -0X629C);
    // 0x801E9B7C: addiu       $t7, $t9, 0x20
    ctx->r15 = ADD32(ctx->r25, 0X20);
    // 0x801E9B80: jal         0x8003521C
    // 0x801E9B84: sh          $t7, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_13;
    // 0x801E9B84: sh          $t7, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r15;
    after_13:
L_801E9B88:
    // 0x801E9B88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E9B8C:
    // 0x801E9B8C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E9B90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E9B94: jr          $ra
    // 0x801E9B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801E9B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801CCF74_5F8354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CCF74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801CCF78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CCF7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801CCF80: lbu         $t6, 0x64($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X64);
    // 0x801CCF84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CCF88: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801CCF8C: bnel        $t6, $zero, L_801CD294
    if (ctx->r14 != 0) {
        // 0x801CCF90: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_801CD294;
    }
    goto skip_0;
    // 0x801CCF90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_0:
    // 0x801CCF94: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801CCF98: jal         0x801D2E00
    // 0x801CCF9C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801D2E00_5FE1E0(rdram, ctx);
        goto after_0;
    // 0x801CCF9C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CCFA0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801CCFA4: bne         $v0, $zero, L_801CD2A8
    if (ctx->r2 != 0) {
        // 0x801CCFA8: lw          $a1, 0x34($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X34);
            goto L_801CD2A8;
    }
    // 0x801CCFA8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801CCFAC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CCFB0: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801CCFB4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801CCFB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CCFBC: lw          $t9, 0x1E4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1E4);
    // 0x801CCFC0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CCFC4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CCFC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CCFCC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801CCFD0: ldc1        $f16, -0x3078($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X3078);
    // 0x801CCFD4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801CCFD8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801CCFDC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CCFE0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CCFE4: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x801CCFE8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CCFEC: lh          $t1, 0x307E($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X307E);
    // 0x801CCFF0: lh          $t2, 0x3080($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X3080);
    // 0x801CCFF4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x801CCFF8: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x801CCFFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CD000: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CD004: div.s       $f2, $f6, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801CD008: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801CD00C: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x801CD010: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x801CD014: nop

    // 0x801CD018: bc1f        L_801CD03C
    if (!c1cs) {
        // 0x801CD01C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CD03C;
    }
    // 0x801CD01C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD020: ldc1        $f4, -0x3070($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3070);
    // 0x801CD024: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801CD028: nop

    // 0x801CD02C: bc1fl       L_801CD040
    if (!c1cs) {
        // 0x801CD030: cvt.d.s     $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
            goto L_801CD040;
    }
    goto skip_1;
    // 0x801CD030: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    skip_1:
    // 0x801CD034: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD038: nop

L_801CD03C:
    // 0x801CD03C: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
L_801CD040:
    // 0x801CD040: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801CD044: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x801CD048: nop

    // 0x801CD04C: bc1f        L_801CD06C
    if (!c1cs) {
        // 0x801CD050: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CD06C;
    }
    // 0x801CD050: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD054: ldc1        $f6, -0x3068($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3068);
    // 0x801CD058: c.lt.d      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.d < ctx->f0.d;
    // 0x801CD05C: nop

    // 0x801CD060: bc1fl       L_801CD070
    if (!c1cs) {
        // 0x801CD064: lwc1        $f8, 0x4($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801CD070;
    }
    goto skip_2;
    // 0x801CD064: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    skip_2:
    // 0x801CD068: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_801CD06C:
    // 0x801CD06C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
L_801CD070:
    // 0x801CD070: lui         $at, 0x4284
    ctx->r1 = S32(0X4284 << 16);
    // 0x801CD074: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CD078: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801CD07C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CD080: lui         $at, 0xC284
    ctx->r1 = S32(0XC284 << 16);
    // 0x801CD084: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CD088: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x801CD08C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CD090: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801CD094: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x801CD098: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801CD09C: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
    // 0x801CD0A0: bc1fl       L_801CD0B4
    if (!c1cs) {
        // 0x801CD0A4: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_801CD0B4;
    }
    goto skip_3;
    // 0x801CD0A4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_3:
    // 0x801CD0A8: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x801CD0AC: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x801CD0B0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_801CD0B4:
    // 0x801CD0B4: nop

    // 0x801CD0B8: bc1fl       L_801CD0C8
    if (!c1cs) {
        // 0x801CD0BC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801CD0C8;
    }
    goto skip_4;
    // 0x801CD0BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_4:
    // 0x801CD0C0: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    // 0x801CD0C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801CD0C8:
    // 0x801CD0C8: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CD0CC: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801CD0D0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801CD0D4: nop

    // 0x801CD0D8: bc1fl       L_801CD0EC
    if (!c1cs) {
        // 0x801CD0DC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801CD0EC;
    }
    goto skip_5;
    // 0x801CD0DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_5:
    // 0x801CD0E0: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x801CD0E4: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CD0E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801CD0EC:
    // 0x801CD0EC: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801CD0F0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CD0F4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801CD0F8: nop

    // 0x801CD0FC: bc1fl       L_801CD110
    if (!c1cs) {
        // 0x801CD100: lwc1        $f8, 0x4($v1)
        ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
            goto L_801CD110;
    }
    goto skip_6;
    // 0x801CD100: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    skip_6:
    // 0x801CD104: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    // 0x801CD108: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801CD10C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
L_801CD110:
    // 0x801CD110: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801CD114: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD118: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801CD11C: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CD120: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x801CD124: div.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801CD128: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x801CD12C: nop

    // 0x801CD130: bc1fl       L_801CD140
    if (!c1cs) {
        // 0x801CD134: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_801CD140;
    }
    goto skip_7;
    // 0x801CD134: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_7:
    // 0x801CD138: add.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x801CD13C: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_801CD140:
    // 0x801CD140: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x801CD144: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD148: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD14C: bc1fl       L_801CD15C
    if (!c1cs) {
        // 0x801CD150: c.lt.s      $f12, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
            goto L_801CD15C;
    }
    goto skip_8;
    // 0x801CD150: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
    skip_8:
    // 0x801CD154: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x801CD158: c.lt.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl < ctx->f18.fl;
L_801CD15C:
    // 0x801CD15C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CD160: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x801CD164: bc1fl       L_801CD174
    if (!c1cs) {
        // 0x801CD168: c.le.s      $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
            goto L_801CD174;
    }
    goto skip_9;
    // 0x801CD168: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    skip_9:
    // 0x801CD16C: add.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x801CD170: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
L_801CD174:
    // 0x801CD174: nop

    // 0x801CD178: bc1fl       L_801CD188
    if (!c1cs) {
        // 0x801CD17C: cfc1        $t3, $FpcCsr
        ctx->r11 = get_cop1_cs();
            goto L_801CD188;
    }
    goto skip_10;
    // 0x801CD17C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    skip_10:
    // 0x801CD180: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x801CD184: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
L_801CD188:
    // 0x801CD188: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CD18C: nop

    // 0x801CD190: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CD194: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CD198: nop

    // 0x801CD19C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801CD1A0: beql        $t4, $zero, L_801CD1F0
    if (ctx->r12 == 0) {
        // 0x801CD1A4: mfc1        $t4, $f10
        ctx->r12 = (int32_t)ctx->f10.u32l;
            goto L_801CD1F0;
    }
    goto skip_11;
    // 0x801CD1A4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    skip_11:
    // 0x801CD1A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CD1AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801CD1B0: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CD1B4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CD1B8: nop

    // 0x801CD1BC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CD1C0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CD1C4: nop

    // 0x801CD1C8: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x801CD1CC: bne         $t4, $zero, L_801CD1E4
    if (ctx->r12 != 0) {
        // 0x801CD1D0: nop
    
            goto L_801CD1E4;
    }
    // 0x801CD1D0: nop

    // 0x801CD1D4: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x801CD1D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD1DC: b           L_801CD1FC
    // 0x801CD1E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_801CD1FC;
    // 0x801CD1E0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_801CD1E4:
    // 0x801CD1E4: b           L_801CD1FC
    // 0x801CD1E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_801CD1FC;
    // 0x801CD1E8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x801CD1EC: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
L_801CD1F0:
    // 0x801CD1F0: nop

    // 0x801CD1F4: bltz        $t4, L_801CD1E4
    if (SIGNED(ctx->r12) < 0) {
        // 0x801CD1F8: nop
    
            goto L_801CD1E4;
    }
    // 0x801CD1F8: nop

L_801CD1FC:
    // 0x801CD1FC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CD200: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD204: sh          $t4, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r12;
    // 0x801CD208: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD20C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CD210: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CD214: nop

    // 0x801CD218: cvt.w.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = CVT_W_S(ctx->f12.fl);
    // 0x801CD21C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CD220: nop

    // 0x801CD224: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CD228: beql        $t6, $zero, L_801CD278
    if (ctx->r14 == 0) {
        // 0x801CD22C: mfc1        $t6, $f4
        ctx->r14 = (int32_t)ctx->f4.u32l;
            goto L_801CD278;
    }
    goto skip_12;
    // 0x801CD22C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    skip_12:
    // 0x801CD230: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD234: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CD238: sub.s       $f4, $f12, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x801CD23C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801CD240: nop

    // 0x801CD244: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801CD248: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801CD24C: nop

    // 0x801CD250: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x801CD254: bne         $t6, $zero, L_801CD26C
    if (ctx->r14 != 0) {
        // 0x801CD258: nop
    
            goto L_801CD26C;
    }
    // 0x801CD258: nop

    // 0x801CD25C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x801CD260: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD264: b           L_801CD284
    // 0x801CD268: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_801CD284;
    // 0x801CD268: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_801CD26C:
    // 0x801CD26C: b           L_801CD284
    // 0x801CD270: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_801CD284;
    // 0x801CD270: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x801CD274: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
L_801CD278:
    // 0x801CD278: nop

    // 0x801CD27C: bltz        $t6, L_801CD26C
    if (SIGNED(ctx->r14) < 0) {
        // 0x801CD280: nop
    
            goto L_801CD26C;
    }
    // 0x801CD280: nop

L_801CD284:
    // 0x801CD284: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CD288: b           L_801CD2A8
    // 0x801CD28C: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
        goto L_801CD2A8;
    // 0x801CD28C: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x801CD290: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_801CD294:
    // 0x801CD294: addiu       $t8, $zero, 0x200
    ctx->r24 = ADD32(0, 0X200);
    // 0x801CD298: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x801CD29C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x801CD2A0: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x801CD2A4: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
L_801CD2A8:
    // 0x801CD2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CD2AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801CD2B0: jr          $ra
    // 0x801CD2B4: nop

    TRACE_RETURN()
    return;
    // 0x801CD2B4: nop

;}
RECOMP_FUNC void func_801D131C_5FC6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D131C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801D1320: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801D1324: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D1328: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D132C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801D1330: addiu       $a1, $a1, -0x6610
    ctx->r5 = ADD32(ctx->r5, -0X6610);
    // 0x801D1334: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D1338: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D133C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801D1340: lui         $at, 0xC448
    ctx->r1 = S32(0XC448 << 16);
    // 0x801D1344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D1348: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D134C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1350: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801D1354: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801D1358: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801D135C: addiu       $t9, $zero, 0x4A8
    ctx->r25 = ADD32(0, 0X4A8);
    // 0x801D1360: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x801D1364: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x801D1368: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x801D136C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801D1370: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801D1374: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801D1378: addiu       $a2, $a2, -0x5D30
    ctx->r6 = ADD32(ctx->r6, -0X5D30);
    // 0x801D137C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D1380: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D1384: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D1388: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D138C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x801D1390: jal         0x8000DBF0
    // 0x801D1394: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801D1394: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D1398: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D139C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801D13A0: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x801D13A4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D13A8: lhu         $t0, 0x1B6($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X1B6);
    // 0x801D13AC: lhu         $a3, 0x1B4($v1)
    ctx->r7 = MEM_HU(ctx->r3, 0X1B4);
    // 0x801D13B0: lhu         $a2, 0x1B2($v1)
    ctx->r6 = MEM_HU(ctx->r3, 0X1B2);
    // 0x801D13B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801D13B8: lhu         $t1, 0x1B8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X1B8);
    // 0x801D13BC: addiu       $v1, $v1, 0x1B0
    ctx->r3 = ADD32(ctx->r3, 0X1B0);
    // 0x801D13C0: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801D13C4: addiu       $a1, $a1, -0x5D30
    ctx->r5 = ADD32(ctx->r5, -0X5D30);
    // 0x801D13C8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x801D13CC: jal         0x8000DF10
    // 0x801D13D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801D13D0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_1:
    // 0x801D13D4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D13D8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D13DC: or          $t2, $v0, $at
    ctx->r10 = ctx->r2 | ctx->r1;
    // 0x801D13E0: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801D13E4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801D13E8: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801D13EC: sw          $t3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r11;
    // 0x801D13F0: lbu         $t4, 0xB($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XB);
    // 0x801D13F4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801D13F8: addiu       $a1, $a1, -0x5050
    ctx->r5 = ADD32(ctx->r5, -0X5050);
    // 0x801D13FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1400: jal         0x801D32D4
    // 0x801D1404: sb          $t4, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r12;
    func_801D32D4_5FE6B4(rdram, ctx);
        goto after_2;
    // 0x801D1404: sb          $t4, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r12;
    after_2:
    // 0x801D1408: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D140C: jal         0x8003521C
    // 0x801D1410: addiu       $a0, $a0, 0x1424
    ctx->r4 = ADD32(ctx->r4, 0X1424);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801D1410: addiu       $a0, $a0, 0x1424
    ctx->r4 = ADD32(ctx->r4, 0X1424);
    after_3:
    // 0x801D1414: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D1418: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801D141C: jr          $ra
    // 0x801D1420: nop

    TRACE_RETURN()
    return;
    // 0x801D1420: nop

;}
