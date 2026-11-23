#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801F43D0_61F7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F43D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F43D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F43D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F43DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F43E0: jal         0x801D2F40
    // 0x801F43E4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F43E4: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_0:
    // 0x801F43E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F43EC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F43F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F43F4: nop

    // 0x801F43F8: bc1fl       L_801F4430
    if (!c1cs) {
        // 0x801F43FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4430;
    }
    goto skip_0;
    // 0x801F43FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4400: lbu         $t6, 0x30($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X30);
    // 0x801F4404: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F4408: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x801F440C: jal         0x801D36C4
    // 0x801F4410: sb          $t7, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r15;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_1;
    // 0x801F4410: sb          $t7, 0x30($a1)
    MEM_B(0X30, ctx->r5) = ctx->r15;
    after_1:
    // 0x801F4414: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801F4418: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x801F441C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4420: addiu       $a0, $a0, 0x443C
    ctx->r4 = ADD32(ctx->r4, 0X443C);
    // 0x801F4424: jal         0x8003521C
    // 0x801F4428: sw          $t8, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F4428: sw          $t8, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r24;
    after_2:
    // 0x801F442C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4430:
    // 0x801F4430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4434: jr          $ra
    // 0x801F4438: nop

    TRACE_RETURN()
    return;
    // 0x801F4438: nop

;}
RECOMP_FUNC void func_801E607C_61145C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E607C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E6084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6088: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E608C: jal         0x801D2F40
    // 0x801E6090: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801E6090: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_0:
    // 0x801E6094: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E6098: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E609C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E60A0: nop

    // 0x801E60A4: bc1f        L_801E60B4
    if (!c1cs) {
        // 0x801E60A8: nop
    
            goto L_801E60B4;
    }
    // 0x801E60A8: nop

    // 0x801E60AC: jal         0x8003521C
    // 0x801E60B0: addiu       $a0, $a0, 0x60CC
    ctx->r4 = ADD32(ctx->r4, 0X60CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801E60B0: addiu       $a0, $a0, 0x60CC
    ctx->r4 = ADD32(ctx->r4, 0X60CC);
    after_1:
L_801E60B4:
    // 0x801E60B4: jal         0x801EEEC0
    // 0x801E60B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801EEEC0_61A2A0(rdram, ctx);
        goto after_2;
    // 0x801E60B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801E60BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E60C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E60C4: jr          $ra
    // 0x801E60C8: nop

    TRACE_RETURN()
    return;
    // 0x801E60C8: nop

;}
RECOMP_FUNC void func_801E4F2C_61030C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4F2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E4F30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E4F34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E4F38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4F3C: lui         $at, 0xC307
    ctx->r1 = S32(0XC307 << 16);
    // 0x801E4F40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E4F44: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801E4F48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E4F4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E4F50: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801E4F54: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x801E4F58: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801E4F5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801E4F60: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801E4F64: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801E4F68: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801E4F6C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4F70: addiu       $a1, $a1, -0x4F6C
    ctx->r5 = ADD32(ctx->r5, -0X4F6C);
    // 0x801E4F74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E4F78: jal         0x801D34D0
    // 0x801E4F7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_801D34D0_5FE8B0(rdram, ctx);
        goto after_0;
    // 0x801E4F7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x801E4F80: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801E4F84: addiu       $a1, $a1, -0x4E30
    ctx->r5 = ADD32(ctx->r5, -0X4E30);
    // 0x801E4F88: jal         0x801D31CC
    // 0x801E4F8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_1;
    // 0x801E4F8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801E4F90: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4F94: jal         0x8003521C
    // 0x801E4F98: addiu       $a0, $a0, 0x4FB0
    ctx->r4 = ADD32(ctx->r4, 0X4FB0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E4F98: addiu       $a0, $a0, 0x4FB0
    ctx->r4 = ADD32(ctx->r4, 0X4FB0);
    after_2:
    // 0x801E4F9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E4FA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E4FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E4FA8: jr          $ra
    // 0x801E4FAC: nop

    TRACE_RETURN()
    return;
    // 0x801E4FAC: nop

;}
RECOMP_FUNC void func_801F2B7C_61DF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F2B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F2B84: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801F2B88: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F2B8C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F2B90: bne         $v0, $zero, L_801F2BFC
    if (ctx->r2 != 0) {
        // 0x801F2B94: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_801F2BFC;
    }
    // 0x801F2B94: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x801F2B98: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x801F2B9C: jal         0x801D2F40
    // 0x801F2BA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F2BA0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801F2BA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F2BA8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F2BAC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F2BB0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801F2BB4: bc1fl       L_801F2C18
    if (!c1cs) {
        // 0x801F2BB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F2C18;
    }
    goto skip_0;
    // 0x801F2BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F2BBC: lbu         $a1, 0x93($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X93);
    // 0x801F2BC0: jal         0x801F80F0
    // 0x801F2BC4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801F80F0_6234D0(rdram, ctx);
        goto after_1;
    // 0x801F2BC4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801F2BC8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801F2BCC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801F2BD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801F2BD4: lw          $t7, 0x90($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X90);
    // 0x801F2BD8: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F2BDC: sw          $t6, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r14;
    // 0x801F2BE0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F2BE4: bne         $t8, $at, L_801F2C14
    if (ctx->r24 != ctx->r1) {
        // 0x801F2BE8: sw          $t8, 0x90($a2)
        MEM_W(0X90, ctx->r6) = ctx->r24;
            goto L_801F2C14;
    }
    // 0x801F2BE8: sw          $t8, 0x90($a2)
    MEM_W(0X90, ctx->r6) = ctx->r24;
    // 0x801F2BEC: jal         0x8003521C
    // 0x801F2BF0: addiu       $a0, $a0, 0x2C24
    ctx->r4 = ADD32(ctx->r4, 0X2C24);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F2BF0: addiu       $a0, $a0, 0x2C24
    ctx->r4 = ADD32(ctx->r4, 0X2C24);
    after_2:
    // 0x801F2BF4: b           L_801F2C18
    // 0x801F2BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F2C18;
    // 0x801F2BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2BFC:
    // 0x801F2BFC: bne         $t0, $zero, L_801F2C14
    if (ctx->r8 != 0) {
        // 0x801F2C00: sw          $t0, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r8;
            goto L_801F2C14;
    }
    // 0x801F2C00: sw          $t0, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r8;
    // 0x801F2C04: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F2C08: addiu       $a1, $a1, -0x4D68
    ctx->r5 = ADD32(ctx->r5, -0X4D68);
    // 0x801F2C0C: jal         0x801D31CC
    // 0x801F2C10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801F2C10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
L_801F2C14:
    // 0x801F2C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F2C18:
    // 0x801F2C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F2C1C: jr          $ra
    // 0x801F2C20: nop

    TRACE_RETURN()
    return;
    // 0x801F2C20: nop

;}
RECOMP_FUNC void func_801D8D90_604170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8D98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D8D9C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D8DA0: jal         0x80034ED4
    // 0x801D8DA4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801D8DA4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    after_0:
    // 0x801D8DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8DB0: jr          $ra
    // 0x801D8DB4: nop

    TRACE_RETURN()
    return;
    // 0x801D8DB4: nop

;}
RECOMP_FUNC void func_801CB5C0_5F69A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB5C8: jal         0x80004240
    // 0x801CB5CC: nop

    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801CB5CC: nop

    after_0:
    // 0x801CB5D0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB5D4: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801CB5D8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801CB5DC: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801CB5E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CB5E4: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801CB5E8: jal         0x80014B74
    // 0x801CB5EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80014B74_15774(rdram, ctx);
        goto after_1;
    // 0x801CB5EC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x801CB5F0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB5F4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB5F8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB600: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB604: sb          $t6, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = ctx->r14;
    // 0x801CB608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB60C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB610: jr          $ra
    // 0x801CB614: nop

    TRACE_RETURN()
    return;
    // 0x801CB614: nop

;}
RECOMP_FUNC void func_801D3AA4_5FEE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3AA4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801D3AA8: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801D3AAC: lw          $t6, 0x29C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X29C);
    // 0x801D3AB0: lw          $t8, 0x2A0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2A0);
    // 0x801D3AB4: addiu       $t1, $zero, 0x3E7
    ctx->r9 = ADD32(0, 0X3E7);
    // 0x801D3AB8: addiu       $t7, $t6, 0x64
    ctx->r15 = ADD32(ctx->r14, 0X64);
    // 0x801D3ABC: slti        $at, $t7, 0x3E7
    ctx->r1 = SIGNED(ctx->r15) < 0X3E7 ? 1 : 0;
    // 0x801D3AC0: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x801D3AC4: sw          $t7, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r15;
    // 0x801D3AC8: bne         $at, $zero, L_801D3AD4
    if (ctx->r1 != 0) {
        // 0x801D3ACC: sw          $t9, 0x2A0($v0)
        MEM_W(0X2A0, ctx->r2) = ctx->r25;
            goto L_801D3AD4;
    }
    // 0x801D3ACC: sw          $t9, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r25;
    // 0x801D3AD0: sw          $t1, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r9;
L_801D3AD4:
    // 0x801D3AD4: lw          $t2, 0x2A0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X2A0);
    // 0x801D3AD8: addiu       $t3, $zero, 0x3E7
    ctx->r11 = ADD32(0, 0X3E7);
    // 0x801D3ADC: slti        $at, $t2, 0x3E7
    ctx->r1 = SIGNED(ctx->r10) < 0X3E7 ? 1 : 0;
    // 0x801D3AE0: bne         $at, $zero, L_801D3AEC
    if (ctx->r1 != 0) {
        // 0x801D3AE4: nop
    
            goto L_801D3AEC;
    }
    // 0x801D3AE4: nop

    // 0x801D3AE8: sw          $t3, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r11;
L_801D3AEC:
    // 0x801D3AEC: jr          $ra
    // 0x801D3AF0: nop

    TRACE_RETURN()
    return;
    // 0x801D3AF0: nop

;}
RECOMP_FUNC void func_80206480_631860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206480: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80206484: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80206488: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8020648C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80206490: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80206494: lw          $a0, 0x1D8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1D8);
    // 0x80206498: lui         $a2, 0x802
    ctx->r6 = S32(0X802 << 16);
    // 0x8020649C: addiu       $a2, $a2, -0x6620
    ctx->r6 = ADD32(ctx->r6, -0X6620);
    // 0x802064A0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802064A4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802064A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802064AC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x802064B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802064B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x802064B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802064BC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802064C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802064C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802064C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x802064CC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802064D0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x802064D4: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802064D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802064DC: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x802064E0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x802064E4: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802064E8: addiu       $t7, $zero, 0x4B5
    ctx->r15 = ADD32(0, 0X4B5);
    // 0x802064EC: addiu       $a3, $a3, -0x50B0
    ctx->r7 = ADD32(ctx->r7, -0X50B0);
    // 0x802064F0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x802064F4: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802064F8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802064FC: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80206500: addiu       $a1, $a1, 0x65B8
    ctx->r5 = ADD32(ctx->r5, 0X65B8);
    // 0x80206504: jal         0x800358E8
    // 0x80206508: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80206508: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8020650C: beq         $v0, $zero, L_802065A4
    if (ctx->r2 == 0) {
        // 0x80206510: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_802065A4;
    }
    // 0x80206510: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80206514: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80206518: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8020651C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206520: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80206524: lui         $a2, 0xC31C
    ctx->r6 = S32(0XC31C << 16);
    // 0x80206528: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x8020652C: jal         0x80203F5C
    // 0x80206530: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80206530: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80206534: jal         0x80203F88
    // 0x80206538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80206538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8020653C: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80206540: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80206544: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80206548: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8020654C: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x80206550: addiu       $t2, $zero, 0x258
    ctx->r10 = ADD32(0, 0X258);
    // 0x80206554: addiu       $t3, $zero, -0x12C
    ctx->r11 = ADD32(0, -0X12C);
    // 0x80206558: addiu       $t4, $zero, 0x65B
    ctx->r12 = ADD32(0, 0X65B);
    // 0x8020655C: sw          $t8, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r24;
    // 0x80206560: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x80206564: sw          $t0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r8;
    // 0x80206568: sb          $t1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r9;
    // 0x8020656C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80206570: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80206574: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x80206578: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    // 0x8020657C: sh          $t2, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r10;
    // 0x80206580: sh          $t3, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r11;
    // 0x80206584: sw          $t4, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r12;
    // 0x80206588: jal         0x801D36C4
    // 0x8020658C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_3;
    // 0x8020658C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80206590: jal         0x801D3894
    // 0x80206594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x80206594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80206598: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x8020659C: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x802065A0: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
L_802065A4:
    // 0x802065A4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802065A8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802065AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x802065B0: jr          $ra
    // 0x802065B4: nop

    TRACE_RETURN()
    return;
    // 0x802065B4: nop

;}
RECOMP_FUNC void func_801FDC84_629064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDC84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FDC88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FDC8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FDC90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FDC94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FDC98: jal         0x801D3018
    // 0x801FDC9C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FDC9C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FDCA0: jal         0x801D614C
    // 0x801FDCA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FDCA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801FDCA8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FDCAC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FDCB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801FDCB4: jal         0x8000ED00
    // 0x801FDCB8: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    func_8000ED00_F900(rdram, ctx);
        goto after_2;
    // 0x801FDCB8: lw          $a0, 0x1CC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1CC);
    after_2:
    // 0x801FDCBC: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x801FDCC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FDCC4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801FDCC8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FDCCC: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801FDCD0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FDCD4: bc1f        L_801FDD68
    if (!c1cs) {
        // 0x801FDCD8: nop
    
            goto L_801FDD68;
    }
    // 0x801FDCD8: nop

    // 0x801FDCDC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801FDCE0: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FDCE4: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801FDCE8: nop

    // 0x801FDCEC: bc1fl       L_801FDD00
    if (!c1cs) {
        // 0x801FDCF0: mov.s       $f14, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
            goto L_801FDD00;
    }
    goto skip_0;
    // 0x801FDCF0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    skip_0:
    // 0x801FDCF4: b           L_801FDD00
    // 0x801FDCF8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_801FDD00;
    // 0x801FDCF8: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
    // 0x801FDCFC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_801FDD00:
    // 0x801FDD00: lwc1        $f2, 0x78($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FDD04: div.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x801FDD08: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x801FDD0C: nop

    // 0x801FDD10: bc1fl       L_801FDD24
    if (!c1cs) {
        // 0x801FDD14: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_801FDD24;
    }
    goto skip_1;
    // 0x801FDD14: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_1:
    // 0x801FDD18: b           L_801FDD24
    // 0x801FDD1C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
        goto L_801FDD24;
    // 0x801FDD1C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x801FDD20: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_801FDD24:
    // 0x801FDD24: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x801FDD28: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x801FDD2C: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FDD30: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801FDD34: nop

    // 0x801FDD38: bc1fl       L_801FDD54
    if (!c1cs) {
        // 0x801FDD3C: neg.s       $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
            goto L_801FDD54;
    }
    goto skip_2;
    // 0x801FDD3C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    skip_2:
    // 0x801FDD40: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x801FDD44: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x801FDD48: b           L_801FDD58
    // 0x801FDD4C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
        goto L_801FDD58;
    // 0x801FDD4C: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    // 0x801FDD50: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
L_801FDD54:
    // 0x801FDD54: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
L_801FDD58:
    // 0x801FDD58: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x801FDD5C: addiu       $a0, $a0, -0x227C
    ctx->r4 = ADD32(ctx->r4, -0X227C);
    // 0x801FDD60: jal         0x8003521C
    // 0x801FDD64: sb          $t7, 0x815($t8)
    MEM_B(0X815, ctx->r24) = ctx->r15;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FDD64: sb          $t7, 0x815($t8)
    MEM_B(0X815, ctx->r24) = ctx->r15;
    after_3:
L_801FDD68:
    // 0x801FDD68: jal         0x801FDF50
    // 0x801FDD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FDF50_629330(rdram, ctx);
        goto after_4;
    // 0x801FDD6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FDD70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FDD74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FDD78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FDD7C: jr          $ra
    // 0x801FDD80: nop

    TRACE_RETURN()
    return;
    // 0x801FDD80: nop

;}
RECOMP_FUNC void func_80200BE8_62BFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80200BE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80200BEC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80200BF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80200BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80200BF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80200BFC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80200C00: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x80200C04: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x80200C08: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80200C0C: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80200C10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80200C14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80200C18: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x80200C1C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80200C20: nop

    // 0x80200C24: bc1fl       L_80200C40
    if (!c1cs) {
        // 0x80200C28: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_80200C40;
    }
    goto skip_0;
    // 0x80200C28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_0:
    // 0x80200C2C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80200C30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80200C34: b           L_80200CD0
    // 0x80200C38: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
        goto L_80200CD0;
    // 0x80200C38: swc1        $f6, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f6.u32l;
    // 0x80200C3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_80200C40:
    // 0x80200C40: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200C44: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80200C48: nop

    // 0x80200C4C: bc1t        L_80200CD0
    if (c1cs) {
        // 0x80200C50: nop
    
            goto L_80200CD0;
    }
    // 0x80200C50: nop

    // 0x80200C54: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80200C58: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80200C5C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80200C60: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80200C64: nop

    // 0x80200C68: bc1fl       L_80200C7C
    if (!c1cs) {
        // 0x80200C6C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80200C7C;
    }
    goto skip_1;
    // 0x80200C6C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_1:
    // 0x80200C70: b           L_80200C7C
    // 0x80200C74: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80200C7C;
    // 0x80200C74: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x80200C78: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80200C7C:
    // 0x80200C7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80200C80: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x80200C84: c.eq.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d == ctx->f16.d;
    // 0x80200C88: nop

    // 0x80200C8C: bc1t        L_80200CD0
    if (c1cs) {
        // 0x80200C90: nop
    
            goto L_80200CD0;
    }
    // 0x80200C90: nop

    // 0x80200C94: jal         0x8000DDC0
    // 0x80200C98: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x80200C98: nop

    after_0:
    // 0x80200C9C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80200CA0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80200CA4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80200CA8: beq         $v0, $zero, L_80200CC8
    if (ctx->r2 == 0) {
        // 0x80200CAC: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_80200CC8;
    }
    // 0x80200CAC: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80200CB0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80200CB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80200CB8: nop

    // 0x80200CBC: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80200CC0: b           L_80200CD0
    // 0x80200CC4: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
        goto L_80200CD0;
    // 0x80200CC4: swc1        $f4, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f4.u32l;
L_80200CC8:
    // 0x80200CC8: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x80200CCC: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
L_80200CD0:
    // 0x80200CD0: jal         0x801D600C
    // 0x80200CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x80200CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80200CD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80200CDC: jal         0x801D6330
    // 0x80200CE0: lui         $a1, 0xC35C
    ctx->r5 = S32(0XC35C << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x80200CE0: lui         $a1, 0xC35C
    ctx->r5 = S32(0XC35C << 16);
    after_2:
    // 0x80200CE4: lui         $a1, 0xC489
    ctx->r5 = S32(0XC489 << 16);
    // 0x80200CE8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80200CEC: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80200CF0: jal         0x801D641C
    // 0x80200CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x80200CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80200CF8: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x80200CFC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80200D00: beq         $t6, $zero, L_80200D30
    if (ctx->r14 == 0) {
        // 0x80200D04: nop
    
            goto L_80200D30;
    }
    // 0x80200D04: nop

    // 0x80200D08: beq         $v1, $zero, L_80200D30
    if (ctx->r3 == 0) {
        // 0x80200D0C: addiu       $t7, $zero, 0x321
        ctx->r15 = ADD32(0, 0X321);
            goto L_80200D30;
    }
    // 0x80200D0C: addiu       $t7, $zero, 0x321
    ctx->r15 = ADD32(0, 0X321);
    // 0x80200D10: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80200D14: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80200D18: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x80200D1C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80200D20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80200D24: addiu       $a0, $a0, 0xD4C
    ctx->r4 = ADD32(ctx->r4, 0XD4C);
    // 0x80200D28: jal         0x8003521C
    // 0x80200D2C: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x80200D2C: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
    after_4:
L_80200D30:
    // 0x80200D30: jal         0x8020407C
    // 0x80200D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_5;
    // 0x80200D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80200D38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80200D3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200D40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80200D44: jr          $ra
    // 0x80200D48: nop

    TRACE_RETURN()
    return;
    // 0x80200D48: nop

;}
RECOMP_FUNC void func_801FFAAC_62AE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFAAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801FFAB0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FFAB4: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801FFAB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FFABC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FFAC0: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801FFAC4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801FFAC8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801FFACC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801FFAD0: lw          $s0, 0x1D8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1D8);
    // 0x801FFAD4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FFAD8: lhu         $t7, 0x5C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X5C);
    // 0x801FFADC: bnel        $t7, $at, L_801FFDEC
    if (ctx->r15 != ctx->r1) {
        // 0x801FFAE0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FFDEC;
    }
    goto skip_0;
    // 0x801FFAE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FFAE4: beql        $s0, $zero, L_801FFDEC
    if (ctx->r16 == 0) {
        // 0x801FFAE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FFDEC;
    }
    goto skip_1;
    // 0x801FFAE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801FFAEC: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801FFAF0: beql        $v0, $zero, L_801FFDEC
    if (ctx->r2 == 0) {
        // 0x801FFAF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FFDEC;
    }
    goto skip_2;
    // 0x801FFAF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801FFAF8: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x801FFAFC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x801FFB00: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x801FFB04: andi        $t8, $v1, 0x1000
    ctx->r24 = ctx->r3 & 0X1000;
    // 0x801FFB08: beql        $t8, $zero, L_801FFB18
    if (ctx->r24 == 0) {
        // 0x801FFB0C: lw          $t9, 0x38($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X38);
            goto L_801FFB18;
    }
    goto skip_3;
    // 0x801FFB0C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    skip_3:
    // 0x801FFB10: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801FFB14: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
L_801FFB18:
    // 0x801FFB18: beq         $t9, $zero, L_801FFDE0
    if (ctx->r25 == 0) {
        // 0x801FFB1C: nop
    
            goto L_801FFDE0;
    }
    // 0x801FFB1C: nop

    // 0x801FFB20: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x801FFB24: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x801FFB28: lbu         $t1, 0x4C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4C);
    // 0x801FFB2C: addiu       $t2, $t1, -0x32
    ctx->r10 = ADD32(ctx->r9, -0X32);
    // 0x801FFB30: sltiu       $at, $t2, 0x2A
    ctx->r1 = ctx->r10 < 0X2A ? 1 : 0;
    // 0x801FFB34: beq         $at, $zero, L_801FFB50
    if (ctx->r1 == 0) {
        // 0x801FFB38: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_801FFB50;
    }
    // 0x801FFB38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801FFB3C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFB40: addu        $at, $at, $t2
    gpr jr_addend_801FFB48 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FFB44: lw          $t2, -0x1538($at)
    ctx->r10 = ADD32(ctx->r1, -0X1538);
    // 0x801FFB48: jr          $t2
    // 0x801FFB4C: nop

    switch (jr_addend_801FFB48 >> 2) {
        case 0: goto L_801FFBA4; break;
        case 1: goto L_801FFB50; break;
        case 2: goto L_801FFB50; break;
        case 3: goto L_801FFB50; break;
        case 4: goto L_801FFB50; break;
        case 5: goto L_801FFB50; break;
        case 6: goto L_801FFB50; break;
        case 7: goto L_801FFB50; break;
        case 8: goto L_801FFB50; break;
        case 9: goto L_801FFB50; break;
        case 10: goto L_801FFB50; break;
        case 11: goto L_801FFC64; break;
        case 12: goto L_801FFCD4; break;
        case 13: goto L_801FFB50; break;
        case 14: goto L_801FFB50; break;
        case 15: goto L_801FFB50; break;
        case 16: goto L_801FFB50; break;
        case 17: goto L_801FFB50; break;
        case 18: goto L_801FFB50; break;
        case 19: goto L_801FFB50; break;
        case 20: goto L_801FFC9C; break;
        case 21: goto L_801FFB50; break;
        case 22: goto L_801FFB50; break;
        case 23: goto L_801FFB50; break;
        case 24: goto L_801FFB50; break;
        case 25: goto L_801FFB50; break;
        case 26: goto L_801FFB50; break;
        case 27: goto L_801FFB50; break;
        case 28: goto L_801FFB50; break;
        case 29: goto L_801FFB50; break;
        case 30: goto L_801FFB50; break;
        case 31: goto L_801FFC04; break;
        case 32: goto L_801FFB50; break;
        case 33: goto L_801FFB50; break;
        case 34: goto L_801FFB50; break;
        case 35: goto L_801FFB50; break;
        case 36: goto L_801FFB50; break;
        case 37: goto L_801FFB50; break;
        case 38: goto L_801FFB50; break;
        case 39: goto L_801FFB50; break;
        case 40: goto L_801FFD1C; break;
        case 41: goto L_801FFC6C; break;
        default: switch_error(__func__, 0x801FFB48, 0x8020EAC8);
    }
    // 0x801FFB4C: nop

L_801FFB50:
    // 0x801FFB50: andi        $t3, $v1, 0x20
    ctx->r11 = ctx->r3 & 0X20;
    // 0x801FFB54: bne         $t3, $zero, L_801FFB94
    if (ctx->r11 != 0) {
        // 0x801FFB58: nop
    
            goto L_801FFB94;
    }
    // 0x801FFB58: nop

    // 0x801FFB5C: jal         0x801D5938
    // 0x801FFB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_0;
    // 0x801FFB60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801FFB64: jal         0x801FFE54
    // 0x801FFB68: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_1;
    // 0x801FFB68: nop

    after_1:
    // 0x801FFB6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801FFB70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFB74: sw          $t4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r12;
    // 0x801FFB78: addiu       $a1, $a1, -0x1FB0
    ctx->r5 = ADD32(ctx->r5, -0X1FB0);
    // 0x801FFB7C: jal         0x8003522C
    // 0x801FFB80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801FFB80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801FFB84: jal         0x801CEE80
    // 0x801FFB88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_3;
    // 0x801FFB88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x801FFB8C: b           L_801FFD64
    // 0x801FFB90: nop

        goto L_801FFD64;
    // 0x801FFB90: nop

L_801FFB94:
    // 0x801FFB94: jal         0x801D3894
    // 0x801FFB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x801FFB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FFB9C: b           L_801FFDEC
    // 0x801FFBA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FFDEC;
    // 0x801FFBA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FFBA4:
    // 0x801FFBA4: andi        $t5, $v1, 0x9
    ctx->r13 = ctx->r3 & 0X9;
    // 0x801FFBA8: bne         $t5, $zero, L_801FFBF4
    if (ctx->r13 != 0) {
        // 0x801FFBAC: nop
    
            goto L_801FFBF4;
    }
    // 0x801FFBAC: nop

    // 0x801FFBB0: lw          $t6, 0xE4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE4);
    // 0x801FFBB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FFBB8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801FFBBC: jal         0x801D5938
    // 0x801FFBC0: sw          $t7, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r15;
    func_801D5938_600D18(rdram, ctx);
        goto after_5;
    // 0x801FFBC0: sw          $t7, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r15;
    after_5:
    // 0x801FFBC4: jal         0x801FFE54
    // 0x801FFBC8: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_6;
    // 0x801FFBC8: nop

    after_6:
    // 0x801FFBCC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801FFBD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFBD4: sw          $t8, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r24;
    // 0x801FFBD8: addiu       $a1, $a1, -0x1FF8
    ctx->r5 = ADD32(ctx->r5, -0X1FF8);
    // 0x801FFBDC: jal         0x8003522C
    // 0x801FFBE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_7;
    // 0x801FFBE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801FFBE4: jal         0x801CEE80
    // 0x801FFBE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_8;
    // 0x801FFBE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x801FFBEC: b           L_801FFD64
    // 0x801FFBF0: nop

        goto L_801FFD64;
    // 0x801FFBF0: nop

L_801FFBF4:
    // 0x801FFBF4: jal         0x801D3894
    // 0x801FFBF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_9;
    // 0x801FFBF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801FFBFC: b           L_801FFDEC
    // 0x801FFC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FFDEC;
    // 0x801FFC00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FFC04:
    // 0x801FFC04: andi        $t9, $v1, 0x12
    ctx->r25 = ctx->r3 & 0X12;
    // 0x801FFC08: bne         $t9, $zero, L_801FFC54
    if (ctx->r25 != 0) {
        // 0x801FFC0C: nop
    
            goto L_801FFC54;
    }
    // 0x801FFC0C: nop

    // 0x801FFC10: lw          $t0, 0xE4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XE4);
    // 0x801FFC14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FFC18: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x801FFC1C: jal         0x801D5938
    // 0x801FFC20: sw          $t1, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r9;
    func_801D5938_600D18(rdram, ctx);
        goto after_10;
    // 0x801FFC20: sw          $t1, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r9;
    after_10:
    // 0x801FFC24: jal         0x801FFE54
    // 0x801FFC28: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_11;
    // 0x801FFC28: nop

    after_11:
    // 0x801FFC2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801FFC30: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFC34: sw          $t2, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r10;
    // 0x801FFC38: addiu       $a1, $a1, -0x1FF8
    ctx->r5 = ADD32(ctx->r5, -0X1FF8);
    // 0x801FFC3C: jal         0x8003522C
    // 0x801FFC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_12;
    // 0x801FFC40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801FFC44: jal         0x801CEE80
    // 0x801FFC48: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_13;
    // 0x801FFC48: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_13:
    // 0x801FFC4C: b           L_801FFD64
    // 0x801FFC50: nop

        goto L_801FFD64;
    // 0x801FFC50: nop

L_801FFC54:
    // 0x801FFC54: jal         0x801D3894
    // 0x801FFC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_14;
    // 0x801FFC58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801FFC5C: b           L_801FFDEC
    // 0x801FFC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FFDEC;
    // 0x801FFC60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FFC64:
    // 0x801FFC64: jal         0x801CEE80
    // 0x801FFC68: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_15;
    // 0x801FFC68: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
L_801FFC6C:
    // 0x801FFC6C: jal         0x801FFE54
    // 0x801FFC70: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_16;
    // 0x801FFC70: nop

    after_16:
    // 0x801FFC74: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801FFC78: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    // 0x801FFC7C: jal         0x801D5938
    // 0x801FFC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_17;
    // 0x801FFC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801FFC84: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFC88: addiu       $a1, $a1, -0x1E18
    ctx->r5 = ADD32(ctx->r5, -0X1E18);
    // 0x801FFC8C: jal         0x8003522C
    // 0x801FFC90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_18;
    // 0x801FFC90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x801FFC94: b           L_801FFD64
    // 0x801FFC98: nop

        goto L_801FFD64;
    // 0x801FFC98: nop

L_801FFC9C:
    // 0x801FFC9C: jal         0x801CEE80
    // 0x801FFCA0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_19;
    // 0x801FFCA0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_19:
    // 0x801FFCA4: jal         0x801FFE54
    // 0x801FFCA8: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_20;
    // 0x801FFCA8: nop

    after_20:
    // 0x801FFCAC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801FFCB0: sw          $t4, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r12;
    // 0x801FFCB4: jal         0x801D5938
    // 0x801FFCB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_21;
    // 0x801FFCB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x801FFCBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFCC0: addiu       $a1, $a1, -0x1D78
    ctx->r5 = ADD32(ctx->r5, -0X1D78);
    // 0x801FFCC4: jal         0x8003522C
    // 0x801FFCC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_22;
    // 0x801FFCC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x801FFCCC: b           L_801FFD64
    // 0x801FFCD0: nop

        goto L_801FFD64;
    // 0x801FFCD0: nop

L_801FFCD4:
    // 0x801FFCD4: lw          $t5, 0xE0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE0);
    // 0x801FFCD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FFCDC: beq         $t5, $at, L_801FFD64
    if (ctx->r13 == ctx->r1) {
        // 0x801FFCE0: nop
    
            goto L_801FFD64;
    }
    // 0x801FFCE0: nop

    // 0x801FFCE4: jal         0x801CEE80
    // 0x801FFCE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_23;
    // 0x801FFCE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_23:
    // 0x801FFCEC: jal         0x801FFE54
    // 0x801FFCF0: nop

    func_801FFE54_62B234(rdram, ctx);
        goto after_24;
    // 0x801FFCF0: nop

    after_24:
    // 0x801FFCF4: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x801FFCF8: sw          $t6, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r14;
    // 0x801FFCFC: jal         0x801D5938
    // 0x801FFD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_25;
    // 0x801FFD00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x801FFD04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFD08: addiu       $a1, $a1, -0x1B84
    ctx->r5 = ADD32(ctx->r5, -0X1B84);
    // 0x801FFD0C: jal         0x8003522C
    // 0x801FFD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_26;
    // 0x801FFD10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x801FFD14: b           L_801FFD64
    // 0x801FFD18: nop

        goto L_801FFD64;
    // 0x801FFD18: nop

L_801FFD1C:
    // 0x801FFD1C: lhu         $t7, 0x5C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X5C);
    // 0x801FFD20: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x801FFD24: beq         $t7, $at, L_801FFD64
    if (ctx->r15 == ctx->r1) {
        // 0x801FFD28: nop
    
            goto L_801FFD64;
    }
    // 0x801FFD28: nop

    // 0x801FFD2C: lw          $t8, 0xE0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XE0);
    // 0x801FFD30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801FFD34: beq         $t8, $at, L_801FFD64
    if (ctx->r24 == ctx->r1) {
        // 0x801FFD38: nop
    
            goto L_801FFD64;
    }
    // 0x801FFD38: nop

    // 0x801FFD3C: jal         0x801FFE14
    // 0x801FFD40: nop

    func_801FFE14_62B1F4(rdram, ctx);
        goto after_27;
    // 0x801FFD40: nop

    after_27:
    // 0x801FFD44: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x801FFD48: sw          $t9, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r25;
    // 0x801FFD4C: jal         0x801D5938
    // 0x801FFD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_28;
    // 0x801FFD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x801FFD54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFD58: addiu       $a1, $a1, -0xB34
    ctx->r5 = ADD32(ctx->r5, -0XB34);
    // 0x801FFD5C: jal         0x8003522C
    // 0x801FFD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_29;
    // 0x801FFD60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
L_801FFD64:
    // 0x801FFD64: jal         0x801D36CC
    // 0x801FFD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_30;
    // 0x801FFD68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x801FFD6C: jal         0x801D3954
    // 0x801FFD70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801D3954_5FED34(rdram, ctx);
        goto after_31;
    // 0x801FFD70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_31:
    // 0x801FFD74: jal         0x801D3A18
    // 0x801FFD78: nop

    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_32;
    // 0x801FFD78: nop

    after_32:
    // 0x801FFD7C: beq         $v0, $zero, L_801FFDDC
    if (ctx->r2 == 0) {
        // 0x801FFD80: lw          $t0, 0x38($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X38);
            goto L_801FFDDC;
    }
    // 0x801FFD80: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x801FFD84: lbu         $t1, 0x4C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4C);
    // 0x801FFD88: addiu       $t2, $t1, -0x32
    ctx->r10 = ADD32(ctx->r9, -0X32);
    // 0x801FFD8C: sltiu       $at, $t2, 0x20
    ctx->r1 = ctx->r10 < 0X20 ? 1 : 0;
    // 0x801FFD90: beq         $at, $zero, L_801FFDD4
    if (ctx->r1 == 0) {
        // 0x801FFD94: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_801FFDD4;
    }
    // 0x801FFD94: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801FFD98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFD9C: addu        $at, $at, $t2
    gpr jr_addend_801FFDA4 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FFDA0: lw          $t2, -0x1490($at)
    ctx->r10 = ADD32(ctx->r1, -0X1490);
    // 0x801FFDA4: jr          $t2
    // 0x801FFDA8: nop

    switch (jr_addend_801FFDA4 >> 2) {
        case 0: goto L_801FFDAC; break;
        case 1: goto L_801FFDAC; break;
        case 2: goto L_801FFDD4; break;
        case 3: goto L_801FFDD4; break;
        case 4: goto L_801FFDD4; break;
        case 5: goto L_801FFDD4; break;
        case 6: goto L_801FFDD4; break;
        case 7: goto L_801FFDD4; break;
        case 8: goto L_801FFDD4; break;
        case 9: goto L_801FFDD4; break;
        case 10: goto L_801FFDAC; break;
        case 11: goto L_801FFDD4; break;
        case 12: goto L_801FFDD4; break;
        case 13: goto L_801FFDD4; break;
        case 14: goto L_801FFDD4; break;
        case 15: goto L_801FFDD4; break;
        case 16: goto L_801FFDD4; break;
        case 17: goto L_801FFDD4; break;
        case 18: goto L_801FFDD4; break;
        case 19: goto L_801FFDD4; break;
        case 20: goto L_801FFDD4; break;
        case 21: goto L_801FFDD4; break;
        case 22: goto L_801FFDD4; break;
        case 23: goto L_801FFDD4; break;
        case 24: goto L_801FFDD4; break;
        case 25: goto L_801FFDD4; break;
        case 26: goto L_801FFDD4; break;
        case 27: goto L_801FFDD4; break;
        case 28: goto L_801FFDD4; break;
        case 29: goto L_801FFDD4; break;
        case 30: goto L_801FFDAC; break;
        case 31: goto L_801FFDAC; break;
        default: switch_error(__func__, 0x801FFDA4, 0x8020EB70);
    }
    // 0x801FFDA8: nop

L_801FFDAC:
    // 0x801FFDAC: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801FFDB0: addiu       $t3, $t3, -0x1E18
    ctx->r11 = ADD32(ctx->r11, -0X1E18);
    // 0x801FFDB4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x801FFDB8: jal         0x801D5938
    // 0x801FFDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_33;
    // 0x801FFDBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x801FFDC0: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x801FFDC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FFDC8: sw          $zero, 0x34($t4)
    MEM_W(0X34, ctx->r12) = 0;
    // 0x801FFDCC: jal         0x8003522C
    // 0x801FFDD0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8003522C_35E2C(rdram, ctx);
        goto after_34;
    // 0x801FFDD0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_34:
L_801FFDD4:
    // 0x801FFDD4: jal         0x801FFE14
    // 0x801FFDD8: nop

    func_801FFE14_62B1F4(rdram, ctx);
        goto after_35;
    // 0x801FFDD8: nop

    after_35:
L_801FFDDC:
    // 0x801FFDDC: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_801FFDE0:
    // 0x801FFDE0: jal         0x801D3894
    // 0x801FFDE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_36;
    // 0x801FFDE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x801FFDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FFDEC:
    // 0x801FFDEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FFDF0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801FFDF4: jr          $ra
    // 0x801FFDF8: nop

    TRACE_RETURN()
    return;
    // 0x801FFDF8: nop

;}
RECOMP_FUNC void func_801FC460_627840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC460: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801FC464: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801FC468: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801FC46C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801FC470: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC474: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FC478: jal         0x801D31CC
    // 0x801FC47C: addiu       $a1, $a1, -0x4BB8
    ctx->r5 = ADD32(ctx->r5, -0X4BB8);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801FC47C: addiu       $a1, $a1, -0x4BB8
    ctx->r5 = ADD32(ctx->r5, -0X4BB8);
    after_0:
    // 0x801FC480: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FC484: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x801FC488: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801FC48C: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801FC490: jal         0x8000DD58
    // 0x801FC494: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801FC494: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x801FC498: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801FC49C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x801FC4A0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x801FC4A4: mflo        $t6
    ctx->r14 = lo;
    // 0x801FC4A8: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x801FC4AC: sw          $t7, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r15;
    // 0x801FC4B0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801FC4B4: lw          $a3, 0x10($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X10);
    // 0x801FC4B8: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x801FC4BC: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801FC4C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FC4C4: addiu       $t8, $s0, 0x70
    ctx->r24 = ADD32(ctx->r16, 0X70);
    // 0x801FC4C8: addiu       $t9, $s0, 0x74
    ctx->r25 = ADD32(ctx->r16, 0X74);
    // 0x801FC4CC: addiu       $t0, $s0, 0x78
    ctx->r8 = ADD32(ctx->r16, 0X78);
    // 0x801FC4D0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801FC4D4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801FC4D8: jal         0x8000E4E4
    // 0x801FC4DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_2;
    // 0x801FC4DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x801FC4E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC4E4: jal         0x8003521C
    // 0x801FC4E8: addiu       $a0, $a0, -0x3AF0
    ctx->r4 = ADD32(ctx->r4, -0X3AF0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FC4E8: addiu       $a0, $a0, -0x3AF0
    ctx->r4 = ADD32(ctx->r4, -0X3AF0);
    after_3:
    // 0x801FC4EC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FC4F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FC4F4: nop

    // 0x801FC4F8: swc1        $f4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f4.u32l;
    // 0x801FC4FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801FC500: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801FC504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801FC508: jr          $ra
    // 0x801FC50C: nop

    TRACE_RETURN()
    return;
    // 0x801FC50C: nop

;}
RECOMP_FUNC void func_801EF298_61A678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF298: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF29C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF2A0: addiu       $t6, $zero, 0x49
    ctx->r14 = ADD32(0, 0X49);
    // 0x801EF2A4: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801EF2A8: jr          $ra
    // 0x801EF2AC: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801EF2AC: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801FD888_628C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FD88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FD890: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FD894: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FD898: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801FD89C: jal         0x8000DD58
    // 0x801FD8A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801FD8A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x801FD8A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FD8A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FD8AC: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x801FD8B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FD8B4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x801FD8B8: sw          $t6, 0x98($a2)
    MEM_W(0X98, ctx->r6) = ctx->r14;
    // 0x801FD8BC: swc1        $f0, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f0.u32l;
    // 0x801FD8C0: swc1        $f0, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f0.u32l;
    // 0x801FD8C4: swc1        $f4, 0x78($a2)
    MEM_W(0X78, ctx->r6) = ctx->f4.u32l;
    // 0x801FD8C8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD8CC: jal         0x801D3018
    // 0x801FD8D0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_1;
    // 0x801FD8D0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_1:
    // 0x801FD8D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD8D8: jal         0x8003521C
    // 0x801FD8DC: addiu       $a0, $a0, -0x2710
    ctx->r4 = ADD32(ctx->r4, -0X2710);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FD8DC: addiu       $a0, $a0, -0x2710
    ctx->r4 = ADD32(ctx->r4, -0X2710);
    after_2:
    // 0x801FD8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FD8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FD8E8: jr          $ra
    // 0x801FD8EC: nop

    TRACE_RETURN()
    return;
    // 0x801FD8EC: nop

;}
RECOMP_FUNC void func_80202158_62D538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202158: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8020215C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80202160: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80202164: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x80202168: addiu       $a2, $a2, 0x7330
    ctx->r6 = ADD32(ctx->r6, 0X7330);
    // 0x8020216C: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80202170: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80202174: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80202178: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8020217C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80202180: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80202184: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80202188: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8020218C: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80202190: addiu       $a3, $a3, -0x5198
    ctx->r7 = ADD32(ctx->r7, -0X5198);
    // 0x80202194: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80202198: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8020219C: lhu         $t6, 0x14($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X14);
    // 0x802021A0: addiu       $a1, $a1, 0x2264
    ctx->r5 = ADD32(ctx->r5, 0X2264);
    // 0x802021A4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802021A8: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x802021AC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x802021B0: lhu         $t8, 0x18($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X18);
    // 0x802021B4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x802021B8: lwc1        $f10, 0x1C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x802021BC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x802021C0: lwc1        $f16, 0x20($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X20);
    // 0x802021C4: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x802021C8: lwc1        $f18, 0x24($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X24);
    // 0x802021CC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x802021D0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x802021D4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x802021D8: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x802021DC: jal         0x800358E8
    // 0x802021E0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x802021E0: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x802021E4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802021E8: beq         $v0, $zero, L_80202254
    if (ctx->r2 == 0) {
        // 0x802021EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80202254;
    }
    // 0x802021EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802021F0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x802021F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802021F8: addiu       $t1, $zero, 0x98
    ctx->r9 = ADD32(0, 0X98);
    // 0x802021FC: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x80202200: lbu         $t0, 0x5($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X5);
    // 0x80202204: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80202208: addiu       $t3, $zero, 0xC8
    ctx->r11 = ADD32(0, 0XC8);
    // 0x8020220C: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x80202210: addiu       $t4, $zero, 0x1C2
    ctx->r12 = ADD32(0, 0X1C2);
    // 0x80202214: addiu       $t5, $zero, -0x1C2
    ctx->r13 = ADD32(0, -0X1C2);
    // 0x80202218: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x8020221C: sh          $t1, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r9;
    // 0x80202220: sb          $t2, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r10;
    // 0x80202224: sh          $t3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r11;
    // 0x80202228: sh          $t4, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r12;
    // 0x8020222C: sh          $t5, 0x40($a0)
    MEM_H(0X40, ctx->r4) = ctx->r13;
    // 0x80202230: sw          $t6, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r14;
    // 0x80202234: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80202238: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8020223C: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x80202240: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80202244: jal         0x80203F5C
    // 0x80202248: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80203F5C_62F33C(rdram, ctx);
        goto after_1;
    // 0x80202248: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x8020224C: jal         0x80203F88
    // 0x80202250: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_80203F88_62F368(rdram, ctx);
        goto after_2;
    // 0x80202250: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
L_80202254:
    // 0x80202254: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80202258: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8020225C: jr          $ra
    // 0x80202260: nop

    TRACE_RETURN()
    return;
    // 0x80202260: nop

;}
RECOMP_FUNC void func_801FFE6C_62B24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFE6C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801FFE70: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x801FFE74: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x801FFE78: jr          $ra
    // 0x801FFE7C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801FFE7C: sb          $zero, 0x4C($a0)
    MEM_B(0X4C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801D0770_5FBB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0770: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D0774: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D0778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D077C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801D0780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0784: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D0788: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D078C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801D0790: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801D0794: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x801D0798: beq         $at, $zero, L_801D07F0
    if (ctx->r1 == 0) {
        // 0x801D079C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801D07F0;
    }
    // 0x801D079C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801D07A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D07A4: addu        $at, $at, $t7
    gpr jr_addend_801D07AC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801D07A8: lw          $t7, -0x2E44($at)
    ctx->r15 = ADD32(ctx->r1, -0X2E44);
    // 0x801D07AC: jr          $t7
    // 0x801D07B0: nop

    switch (jr_addend_801D07AC >> 2) {
        case 0: goto L_801D07B4; break;
        case 1: goto L_801D07C8; break;
        case 2: goto L_801D07DC; break;
        case 3: goto L_801D07F8; break;
        case 4: goto L_801D07F8; break;
        default: switch_error(__func__, 0x801D07AC, 0x8020D1BC);
    }
    // 0x801D07B0: nop

L_801D07B4:
    // 0x801D07B4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D07B8: jal         0x8003521C
    // 0x801D07BC: addiu       $a0, $a0, 0x808
    ctx->r4 = ADD32(ctx->r4, 0X808);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801D07BC: addiu       $a0, $a0, 0x808
    ctx->r4 = ADD32(ctx->r4, 0X808);
    after_0:
    // 0x801D07C0: b           L_801D07FC
    // 0x801D07C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D07FC;
    // 0x801D07C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D07C8:
    // 0x801D07C8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D07CC: jal         0x8003521C
    // 0x801D07D0: addiu       $a0, $a0, 0x8C8
    ctx->r4 = ADD32(ctx->r4, 0X8C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D07D0: addiu       $a0, $a0, 0x8C8
    ctx->r4 = ADD32(ctx->r4, 0X8C8);
    after_1:
    // 0x801D07D4: b           L_801D07FC
    // 0x801D07D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D07FC;
    // 0x801D07D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D07DC:
    // 0x801D07DC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D07E0: jal         0x8003521C
    // 0x801D07E4: addiu       $a0, $a0, 0xBD0
    ctx->r4 = ADD32(ctx->r4, 0XBD0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801D07E4: addiu       $a0, $a0, 0xBD0
    ctx->r4 = ADD32(ctx->r4, 0XBD0);
    after_2:
    // 0x801D07E8: b           L_801D07FC
    // 0x801D07EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D07FC;
    // 0x801D07EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D07F0:
    // 0x801D07F0: jal         0x80034ED4
    // 0x801D07F4: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801D07F4: nop

    after_3:
L_801D07F8:
    // 0x801D07F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D07FC:
    // 0x801D07FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0800: jr          $ra
    // 0x801D0804: nop

    TRACE_RETURN()
    return;
    // 0x801D0804: nop

;}
RECOMP_FUNC void func_8020190C_62CCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020190C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80201910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80201914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80201918: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8020191C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80201920: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80201924: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80201928: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x8020192C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80201930: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x80201934: swc1        $f6, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f6.u32l;
    // 0x80201938: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8020193C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80201940: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80201944: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x80201948: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8020194C: nop

    // 0x80201950: bc1fl       L_8020196C
    if (!c1cs) {
        // 0x80201954: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_8020196C;
    }
    goto skip_0;
    // 0x80201954: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x80201958: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8020195C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80201960: b           L_80201A14
    // 0x80201964: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
        goto L_80201A14;
    // 0x80201964: swc1        $f10, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f10.u32l;
    // 0x80201968: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_8020196C:
    // 0x8020196C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80201970: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80201974: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80201978: nop

    // 0x8020197C: bc1fl       L_80201998
    if (!c1cs) {
        // 0x80201980: sb          $t6, 0x27($sp)
        MEM_B(0X27, ctx->r29) = ctx->r14;
            goto L_80201998;
    }
    goto skip_1;
    // 0x80201980: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    skip_1:
    // 0x80201984: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80201988: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8020198C: b           L_80201A14
    // 0x80201990: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
        goto L_80201A14;
    // 0x80201990: swc1        $f18, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f18.u32l;
    // 0x80201994: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
L_80201998:
    // 0x80201998: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x8020199C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802019A0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802019A4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x802019A8: nop

    // 0x802019AC: bc1fl       L_802019C0
    if (!c1cs) {
        // 0x802019B0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_802019C0;
    }
    goto skip_2;
    // 0x802019B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x802019B4: b           L_802019C0
    // 0x802019B8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_802019C0;
    // 0x802019B8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x802019BC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_802019C0:
    // 0x802019C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802019C4: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x802019C8: c.eq.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d == ctx->f6.d;
    // 0x802019CC: nop

    // 0x802019D0: bc1t        L_80201A14
    if (c1cs) {
        // 0x802019D4: nop
    
            goto L_80201A14;
    }
    // 0x802019D4: nop

    // 0x802019D8: jal         0x8000DDC0
    // 0x802019DC: nop

    func_8000DDC0_E9C0(rdram, ctx);
        goto after_0;
    // 0x802019DC: nop

    after_0:
    // 0x802019E0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802019E4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x802019E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802019EC: beq         $v0, $zero, L_80201A0C
    if (ctx->r2 == 0) {
        // 0x802019F0: lui         $at, 0xBFF0
        ctx->r1 = S32(0XBFF0 << 16);
            goto L_80201A0C;
    }
    // 0x802019F0: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x802019F4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x802019F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802019FC: nop

    // 0x80201A00: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80201A04: b           L_80201A14
    // 0x80201A08: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
        goto L_80201A14;
    // 0x80201A08: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
L_80201A0C:
    // 0x80201A0C: cvt.s.d     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f16.fl = CVT_S_D(ctx->f0.d);
    // 0x80201A10: swc1        $f16, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f16.u32l;
L_80201A14:
    // 0x80201A14: jal         0x801D600C
    // 0x80201A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D600C_6013EC(rdram, ctx);
        goto after_1;
    // 0x80201A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80201A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201A20: jal         0x801D6330
    // 0x80201A24: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_2;
    // 0x80201A24: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_2:
    // 0x80201A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80201A2C: lui         $a1, 0xC416
    ctx->r5 = S32(0XC416 << 16);
    // 0x80201A30: jal         0x801D641C
    // 0x80201A34: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    func_801D641C_6017FC(rdram, ctx);
        goto after_3;
    // 0x80201A34: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    after_3:
    // 0x80201A38: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80201A3C: lw          $v1, -0x10C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X10C0);
    // 0x80201A40: lbu         $a2, 0x26($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X26);
    // 0x80201A44: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80201A48: lbu         $t7, 0xE($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XE);
    // 0x80201A4C: beq         $t7, $zero, L_80201A6C
    if (ctx->r15 == 0) {
        // 0x80201A50: nop
    
            goto L_80201A6C;
    }
    // 0x80201A50: nop

    // 0x80201A54: jal         0x80200684
    // 0x80201A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_4;
    // 0x80201A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80201A5C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80201A60: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x80201A64: b           L_80201AC0
    // 0x80201A68: sb          $zero, 0xD($t8)
    MEM_B(0XD, ctx->r24) = 0;
        goto L_80201AC0;
    // 0x80201A68: sb          $zero, 0xD($t8)
    MEM_B(0XD, ctx->r24) = 0;
L_80201A6C:
    // 0x80201A6C: beq         $a2, $zero, L_80201A78
    if (ctx->r6 == 0) {
        // 0x80201A70: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80201A78;
    }
    // 0x80201A70: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80201A74: sb          $t9, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r25;
L_80201A78:
    // 0x80201A78: lbu         $t0, 0x27($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X27);
    // 0x80201A7C: beq         $t0, $zero, L_80201AB8
    if (ctx->r8 == 0) {
        // 0x80201A80: nop
    
            goto L_80201AB8;
    }
    // 0x80201A80: nop

    // 0x80201A84: beq         $a2, $zero, L_80201AB8
    if (ctx->r6 == 0) {
        // 0x80201A88: nop
    
            goto L_80201AB8;
    }
    // 0x80201A88: nop

    // 0x80201A8C: beq         $a0, $zero, L_80201AB8
    if (ctx->r4 == 0) {
        // 0x80201A90: nop
    
            goto L_80201AB8;
    }
    // 0x80201A90: nop

    // 0x80201A94: lw          $t1, 0x7C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X7C);
    // 0x80201A98: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80201A9C: bne         $t2, $zero, L_80201AB8
    if (ctx->r10 != 0) {
        // 0x80201AA0: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_80201AB8;
    }
    // 0x80201AA0: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x80201AA4: jal         0x80200684
    // 0x80201AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80200684_62BA64(rdram, ctx);
        goto after_5;
    // 0x80201AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80201AAC: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80201AB0: lw          $t4, -0x10C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10C0);
    // 0x80201AB4: sb          $zero, 0xD($t4)
    MEM_B(0XD, ctx->r12) = 0;
L_80201AB8:
    // 0x80201AB8: jal         0x8020407C
    // 0x80201ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020407C_62F45C(rdram, ctx);
        goto after_6;
    // 0x80201ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80201AC0:
    // 0x80201AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80201AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80201AC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80201ACC: jr          $ra
    // 0x80201AD0: nop

    TRACE_RETURN()
    return;
    // 0x80201AD0: nop

;}
RECOMP_FUNC void func_801F3DCC_61F1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3DCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3DD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F3DD8: jal         0x801F76D0
    // 0x801F3DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_0;
    // 0x801F3DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F3DE0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801F3DE4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F3DE8: jal         0x801D6BC8
    // 0x801F3DEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D6BC8_601FA8(rdram, ctx);
        goto after_1;
    // 0x801F3DEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F3DF0: beq         $v0, $zero, L_801F3E14
    if (ctx->r2 == 0) {
        // 0x801F3DF4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801F3E14;
    }
    // 0x801F3DF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F3DF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F3DFC: jal         0x801D3F00
    // 0x801F3E00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801F3E00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x801F3E04: beql        $v0, $zero, L_801F3E18
    if (ctx->r2 == 0) {
        // 0x801F3E08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F3E18;
    }
    goto skip_0;
    // 0x801F3E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F3E0C: jal         0x801F0540
    // 0x801F3E10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F3E10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
L_801F3E14:
    // 0x801F3E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F3E18:
    // 0x801F3E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F3E1C: jr          $ra
    // 0x801F3E20: nop

    TRACE_RETURN()
    return;
    // 0x801F3E20: nop

;}
RECOMP_FUNC void func_801D9704_604AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D970C: jal         0x801D9030
    // 0x801D9710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801D9030_604410(rdram, ctx);
        goto after_0;
    // 0x801D9710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D9714: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9718: jal         0x8003521C
    // 0x801D971C: addiu       $a0, $a0, -0x68D0
    ctx->r4 = ADD32(ctx->r4, -0X68D0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801D971C: addiu       $a0, $a0, -0x68D0
    ctx->r4 = ADD32(ctx->r4, -0X68D0);
    after_1:
    // 0x801D9720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9728: jr          $ra
    // 0x801D972C: nop

    TRACE_RETURN()
    return;
    // 0x801D972C: nop

;}
RECOMP_FUNC void func_801CEE80_5FA260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEE80: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801CEE84: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801CEE88: lw          $t6, 0x6C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6C);
    // 0x801CEE8C: addu        $v1, $t6, $a0
    ctx->r3 = ADD32(ctx->r14, ctx->r4);
    // 0x801CEE90: slti        $at, $v1, 0x65
    ctx->r1 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x801CEE94: bne         $at, $zero, L_801CEEA4
    if (ctx->r1 != 0) {
        // 0x801CEE98: sw          $v1, 0x6C($v0)
        MEM_W(0X6C, ctx->r2) = ctx->r3;
            goto L_801CEEA4;
    }
    // 0x801CEE98: sw          $v1, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r3;
    // 0x801CEE9C: addiu       $v1, $zero, 0x64
    ctx->r3 = ADD32(0, 0X64);
    // 0x801CEEA0: sw          $v1, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r3;
L_801CEEA4:
    // 0x801CEEA4: bgez        $v1, L_801CEEB0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CEEA8: nop
    
            goto L_801CEEB0;
    }
    // 0x801CEEA8: nop

    // 0x801CEEAC: sw          $zero, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = 0;
L_801CEEB0:
    // 0x801CEEB0: jr          $ra
    // 0x801CEEB4: nop

    TRACE_RETURN()
    return;
    // 0x801CEEB4: nop

;}
RECOMP_FUNC void func_801FF8B4_62AC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FF8B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801FF8BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FF8C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FF8C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FF8C8: jal         0x801D3018
    // 0x801FF8CC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FF8CC: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801FF8D0: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801FF8D4: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x801FF8D8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FF8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF8E0: jal         0x801D614C
    // 0x801FF8E4: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FF8E4: sb          $t6, 0x816($t7)
    MEM_B(0X816, ctx->r15) = ctx->r14;
    after_1:
    // 0x801FF8E8: lw          $t8, 0x7C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X7C);
    // 0x801FF8EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF8F0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801FF8F4: bgtz        $t9, L_801FF904
    if (SIGNED(ctx->r25) > 0) {
        // 0x801FF8F8: sw          $t9, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r25;
            goto L_801FF904;
    }
    // 0x801FF8F8: sw          $t9, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r25;
    // 0x801FF8FC: jal         0x8003521C
    // 0x801FF900: addiu       $a0, $a0, -0x6BC
    ctx->r4 = ADD32(ctx->r4, -0X6BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FF900: addiu       $a0, $a0, -0x6BC
    ctx->r4 = ADD32(ctx->r4, -0X6BC);
    after_2:
L_801FF904:
    // 0x801FF904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF908: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801FF90C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x801FF910: jal         0x801D5D98
    // 0x801FF914: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    func_801D5D98_601178(rdram, ctx);
        goto after_3;
    // 0x801FF914: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    after_3:
    // 0x801FF918: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801FF91C: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x801FF920: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801FF924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FF928: jal         0x801D5C30
    // 0x801FF92C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    func_801D5C30_601010(rdram, ctx);
        goto after_4;
    // 0x801FF92C: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    after_4:
    // 0x801FF930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801FF934: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801FF938: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FF93C: jr          $ra
    // 0x801FF940: nop

    TRACE_RETURN()
    return;
    // 0x801FF940: nop

;}
RECOMP_FUNC void func_80207AA8_632E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207AA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207AB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80207AB4: jal         0x8003767C
    // 0x80207AB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003767C_3827C(rdram, ctx);
        goto after_0;
    // 0x80207AB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80207ABC: beq         $v0, $zero, L_80207AF8
    if (ctx->r2 == 0) {
        // 0x80207AC0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80207AF8;
    }
    // 0x80207AC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80207AC4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80207AC8: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80207ACC: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80207AD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80207AD4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80207AD8: lbu         $t7, -0x521C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X521C);
    // 0x80207ADC: bnel        $t7, $at, L_80207AFC
    if (ctx->r15 != ctx->r1) {
        // 0x80207AE0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80207AFC;
    }
    goto skip_0;
    // 0x80207AE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80207AE4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207AE8: jal         0x8003521C
    // 0x80207AEC: addiu       $a0, $a0, 0x7D84
    ctx->r4 = ADD32(ctx->r4, 0X7D84);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80207AEC: addiu       $a0, $a0, 0x7D84
    ctx->r4 = ADD32(ctx->r4, 0X7D84);
    after_1:
    // 0x80207AF0: b           L_80207B48
    // 0x80207AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B48;
    // 0x80207AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207AF8:
    // 0x80207AF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80207AFC:
    // 0x80207AFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80207B00: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x80207B04: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x80207B08: jal         0x801D5064
    // 0x80207B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D5064_600444(rdram, ctx);
        goto after_2;
    // 0x80207B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80207B10: beq         $v0, $zero, L_80207B3C
    if (ctx->r2 == 0) {
        // 0x80207B14: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80207B3C;
    }
    // 0x80207B14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80207B18: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x80207B1C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80207B20: bne         $t9, $zero, L_80207B44
    if (ctx->r25 != 0) {
        // 0x80207B24: sw          $t9, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r25;
            goto L_80207B44;
    }
    // 0x80207B24: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
    // 0x80207B28: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80207B2C: jal         0x8003521C
    // 0x80207B30: addiu       $a0, $a0, 0x7B54
    ctx->r4 = ADD32(ctx->r4, 0X7B54);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x80207B30: addiu       $a0, $a0, 0x7B54
    ctx->r4 = ADD32(ctx->r4, 0X7B54);
    after_3:
    // 0x80207B34: b           L_80207B48
    // 0x80207B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80207B48;
    // 0x80207B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207B3C:
    // 0x80207B3C: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x80207B40: sw          $t1, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r9;
L_80207B44:
    // 0x80207B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80207B48:
    // 0x80207B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80207B4C: jr          $ra
    // 0x80207B50: nop

    TRACE_RETURN()
    return;
    // 0x80207B50: nop

;}
RECOMP_FUNC void func_801FDD84_629164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FDD84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FDD88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FDD8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FDD90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FDD94: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FDD98: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FDD9C: jal         0x801D3018
    // 0x801FDDA0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FDDA0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FDDA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDDA8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FDDAC: jal         0x801D3B18
    // 0x801FDDB0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801FDDB0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x801FDDB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDDB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801FDDBC: jal         0x801D3F00
    // 0x801FDDC0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801D3F00_5FF2E0(rdram, ctx);
        goto after_2;
    // 0x801FDDC0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x801FDDC4: jal         0x801FDF50
    // 0x801FDDC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FDF50_629330(rdram, ctx);
        goto after_3;
    // 0x801FDDC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801FDDCC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801FDDD0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801FDDD4: jal         0x801D6B14
    // 0x801FDDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6B14_601EF4(rdram, ctx);
        goto after_4;
    // 0x801FDDD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801FDDDC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801FDDE0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801FDDE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FDDE8: jal         0x801D6B50
    // 0x801FDDEC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_801D6B50_601F30(rdram, ctx);
        goto after_5;
    // 0x801FDDEC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_5:
    // 0x801FDDF0: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x801FDDF4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x801FDDF8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801FDDFC: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x801FDE00: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x801FDE04: jal         0x801D6B8C
    // 0x801FDE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D6B8C_601F6C(rdram, ctx);
        goto after_6;
    // 0x801FDE08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801FDE0C: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x801FDE10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801FDE14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x801FDE18: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x801FDE1C: bnel        $t7, $at, L_801FDE84
    if (ctx->r15 != ctx->r1) {
        // 0x801FDE20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801FDE84;
    }
    goto skip_0;
    // 0x801FDE20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801FDE24: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    // 0x801FDE28: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x801FDE2C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801FDE30: bne         $t9, $zero, L_801FDE48
    if (ctx->r25 != 0) {
        // 0x801FDE34: sw          $t9, 0x98($s0)
        MEM_W(0X98, ctx->r16) = ctx->r25;
            goto L_801FDE48;
    }
    // 0x801FDE34: sw          $t9, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r25;
    // 0x801FDE38: jal         0x801FC3FC
    // 0x801FDE3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801FC3FC_6277DC(rdram, ctx);
        goto after_7;
    // 0x801FDE3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801FDE40: b           L_801FDE84
    // 0x801FDE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FDE84;
    // 0x801FDE44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FDE48:
    // 0x801FDE48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FDE4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FDE50: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FDE54: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801FDE58: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
    // 0x801FDE5C: swc1        $f4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f4.u32l;
    // 0x801FDE60: jal         0x801D3018
    // 0x801FDE64: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_8;
    // 0x801FDE64: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_8:
    // 0x801FDE68: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801FDE6C: lw          $t1, -0x10C0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X10C0);
    // 0x801FDE70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FDE74: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    // 0x801FDE78: jal         0x8003521C
    // 0x801FDE7C: sb          $zero, 0x815($t1)
    MEM_B(0X815, ctx->r9) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801FDE7C: sb          $zero, 0x815($t1)
    MEM_B(0X815, ctx->r9) = 0;
    after_9:
    // 0x801FDE80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FDE84:
    // 0x801FDE84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FDE88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FDE8C: jr          $ra
    // 0x801FDE90: nop

    TRACE_RETURN()
    return;
    // 0x801FDE90: nop

;}
RECOMP_FUNC void func_801F56C8_620AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F56C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F56CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F56D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F56D4: jal         0x801F7074
    // 0x801F56D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F56D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F56DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F56E0: addiu       $a1, $a1, -0x4D38
    ctx->r5 = ADD32(ctx->r5, -0X4D38);
    // 0x801F56E4: jal         0x801D2EE4
    // 0x801F56E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F56E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F56EC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F56F0: jal         0x8003521C
    // 0x801F56F4: addiu       $a0, $a0, 0x5710
    ctx->r4 = ADD32(ctx->r4, 0X5710);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F56F4: addiu       $a0, $a0, 0x5710
    ctx->r4 = ADD32(ctx->r4, 0X5710);
    after_2:
    // 0x801F56F8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x801F56FC: sw          $zero, 0x90($t6)
    MEM_W(0X90, ctx->r14) = 0;
    // 0x801F5700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5708: jr          $ra
    // 0x801F570C: nop

    TRACE_RETURN()
    return;
    // 0x801F570C: nop

;}
RECOMP_FUNC void func_80207D84_633164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80207D84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80207D88: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80207D8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80207D90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80207D94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207D9C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80207DA0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80207DA4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80207DA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80207DAC: swc1        $f0, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f0.u32l;
    // 0x80207DB0: swc1        $f0, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f0.u32l;
    // 0x80207DB4: swc1        $f0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f0.u32l;
    // 0x80207DB8: swc1        $f0, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f0.u32l;
    // 0x80207DBC: swc1        $f0, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f0.u32l;
    // 0x80207DC0: swc1        $f4, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->f4.u32l;
    // 0x80207DC4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80207DC8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x80207DCC: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x80207DD0: sw          $t6, 0x1EC($t7)
    MEM_W(0X1EC, ctx->r15) = ctx->r14;
    // 0x80207DD4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80207DD8: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x80207DDC: addiu       $t2, $zero, 0xE0
    ctx->r10 = ADD32(0, 0XE0);
    // 0x80207DE0: sw          $t8, 0x1F4($t9)
    MEM_W(0X1F4, ctx->r25) = ctx->r24;
    // 0x80207DE4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80207DE8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80207DEC: sw          $t0, 0x1F0($t1)
    MEM_W(0X1F0, ctx->r9) = ctx->r8;
    // 0x80207DF0: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80207DF4: jal         0x8003D428
    // 0x80207DF8: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    func_8003D428_3E028(rdram, ctx);
        goto after_0;
    // 0x80207DF8: sw          $t2, 0x1F8($t3)
    MEM_W(0X1F8, ctx->r11) = ctx->r10;
    after_0:
    // 0x80207DFC: jal         0x8000C838
    // 0x80207E00: nop

    func_8000C838_D438(rdram, ctx);
        goto after_1;
    // 0x80207E00: nop

    after_1:
    // 0x80207E04: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80207E08: addiu       $v1, $v1, -0x1130
    ctx->r3 = ADD32(ctx->r3, -0X1130);
    // 0x80207E0C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80207E10: sb          $zero, 0x2C1($t4)
    MEM_B(0X2C1, ctx->r12) = 0;
    // 0x80207E14: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80207E18: sb          $zero, 0x2C2($t5)
    MEM_B(0X2C2, ctx->r13) = 0;
    // 0x80207E1C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80207E20: sb          $zero, 0x2C3($t6)
    MEM_B(0X2C3, ctx->r14) = 0;
    // 0x80207E24: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80207E28: lw          $a0, 0x1D8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1D8);
    // 0x80207E2C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80207E30: jal         0x80200684
    // 0x80207E34: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80200684_62BA64(rdram, ctx);
        goto after_2;
    // 0x80207E34: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80207E38: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80207E3C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x80207E40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80207E44: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80207E48: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207E4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80207E50: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x80207E54: sh          $zero, 0x16($v0)
    MEM_H(0X16, ctx->r2) = 0;
    // 0x80207E58: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x80207E5C: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x80207E60: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80207E64: jal         0x80034ED4
    // 0x80207E68: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80207E68: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    after_3:
    // 0x80207E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207E70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80207E74: jr          $ra
    // 0x80207E78: nop

    TRACE_RETURN()
    return;
    // 0x80207E78: nop

;}
RECOMP_FUNC void func_801FF4CC_62A8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FF4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FF4D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FF4D4: jal         0x801FFE6C
    // 0x801FF4D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801FFE6C_62B24C(rdram, ctx);
        goto after_0;
    // 0x801FF4D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801FF4DC: jal         0x80038BC8
    // 0x801FF4E0: ori         $a0, $zero, 0x8152
    ctx->r4 = 0 | 0X8152;
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801FF4E0: ori         $a0, $zero, 0x8152
    ctx->r4 = 0 | 0X8152;
    after_1:
    // 0x801FF4E4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801FF4E8: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x801FF4EC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801FF4F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FF4F4: addiu       $a1, $a1, -0x4BC8
    ctx->r5 = ADD32(ctx->r5, -0X4BC8);
    // 0x801FF4F8: sb          $zero, 0x815($t6)
    MEM_B(0X815, ctx->r14) = 0;
    // 0x801FF4FC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801FF500: sb          $zero, 0x817($t7)
    MEM_B(0X817, ctx->r15) = 0;
    // 0x801FF504: jal         0x801D2EE4
    // 0x801FF508: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801FF508: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801FF50C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FF510: jal         0x8003521C
    // 0x801FF514: addiu       $a0, $a0, -0xAD8
    ctx->r4 = ADD32(ctx->r4, -0XAD8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FF514: addiu       $a0, $a0, -0xAD8
    ctx->r4 = ADD32(ctx->r4, -0XAD8);
    after_3:
    // 0x801FF518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801FF51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FF520: jr          $ra
    // 0x801FF524: nop

    TRACE_RETURN()
    return;
    // 0x801FF524: nop

;}
RECOMP_FUNC void func_801DA228_605608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DA228: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801DA22C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DA230: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801DA234: lwc1        $f4, 0xA4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801DA238: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801DA23C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DA240: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801DA244: lw          $a1, 0x90($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X90);
    // 0x801DA248: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DA24C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801DA250: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    // 0x801DA254: lwc1        $f10, 0xA8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801DA258: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DA25C: addiu       $v1, $v1, 0x140
    ctx->r3 = ADD32(ctx->r3, 0X140);
    // 0x801DA260: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DA264: swc1        $f18, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f18.u32l;
    // 0x801DA268: lwc1        $f4, 0xAC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801DA26C: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DA270: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DA274: swc1        $f8, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f8.u32l;
    // 0x801DA278: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x801DA27C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x801DA280: jal         0x801DA3CC
    // 0x801DA284: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    func_801DA3CC_6057AC(rdram, ctx);
        goto after_0;
    // 0x801DA284: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DA288: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801DA28C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801DA290: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DA294: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801DA298: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x801DA29C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA2A0: bc1fl       L_801DA310
    if (!c1cs) {
        // 0x801DA2A4: sw          $v1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r3;
            goto L_801DA310;
    }
    goto skip_0;
    // 0x801DA2A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    skip_0:
    // 0x801DA2A8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x801DA2AC: ldc1        $f0, -0x26D0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X26D0);
    // 0x801DA2B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA2B4: sw          $zero, 0x84($t6)
    MEM_W(0X84, ctx->r14) = 0;
    // 0x801DA2B8: lwc1        $f16, 0x1C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801DA2BC: lwc1        $f8, 0x20($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X20);
    // 0x801DA2C0: addiu       $a0, $a0, -0x5E08
    ctx->r4 = ADD32(ctx->r4, -0X5E08);
    // 0x801DA2C4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DA2C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DA2CC: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DA2D0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DA2D4: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x801DA2D8: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801DA2DC: swc1        $f6, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f6.u32l;
    // 0x801DA2E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA2E4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DA2E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DA2EC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DA2F0: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    // 0x801DA2F4: swc1        $f10, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f10.u32l;
    // 0x801DA2F8: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
    // 0x801DA2FC: jal         0x8003521C
    // 0x801DA300: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801DA300: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x801DA304: b           L_801DA3C0
    // 0x801DA308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DA3C0;
    // 0x801DA308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DA30C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_801DA310:
    // 0x801DA310: jal         0x801D39A0
    // 0x801DA314: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    func_801D39A0_5FED80(rdram, ctx);
        goto after_2;
    // 0x801DA314: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_2:
    // 0x801DA318: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DA31C: bne         $v0, $zero, L_801DA350
    if (ctx->r2 != 0) {
        // 0x801DA320: lw          $a2, 0x3C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X3C);
            goto L_801DA350;
    }
    // 0x801DA320: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801DA324: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x801DA328: jal         0x801D3A18
    // 0x801DA32C: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_3;
    // 0x801DA32C: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_3:
    // 0x801DA330: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801DA334: bne         $v0, $zero, L_801DA350
    if (ctx->r2 != 0) {
        // 0x801DA338: lw          $a2, 0x3C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X3C);
            goto L_801DA350;
    }
    // 0x801DA338: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801DA33C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801DA340: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801DA344: lbu         $t8, 0x2C5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2C5);
    // 0x801DA348: beql        $t8, $zero, L_801DA358
    if (ctx->r24 == 0) {
        // 0x801DA34C: lw          $t9, 0x34($v1)
        ctx->r25 = MEM_W(ctx->r3, 0X34);
            goto L_801DA358;
    }
    goto skip_1;
    // 0x801DA34C: lw          $t9, 0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X34);
    skip_1:
L_801DA350:
    // 0x801DA350: sw          $zero, 0x34($v1)
    MEM_W(0X34, ctx->r3) = 0;
    // 0x801DA354: lw          $t9, 0x34($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X34);
L_801DA358:
    // 0x801DA358: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DA35C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x801DA360: bnel        $t9, $zero, L_801DA3C0
    if (ctx->r25 != 0) {
        // 0x801DA364: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801DA3C0;
    }
    goto skip_2;
    // 0x801DA364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801DA368: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x801DA36C: ldc1        $f0, -0x26C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X26C8);
    // 0x801DA370: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DA374: sw          $t0, 0x84($t1)
    MEM_W(0X84, ctx->r9) = ctx->r8;
    // 0x801DA378: lwc1        $f16, 0x1C($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x801DA37C: lwc1        $f8, 0x20($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X20);
    // 0x801DA380: addiu       $a0, $a0, -0x5F00
    ctx->r4 = ADD32(ctx->r4, -0X5F00);
    // 0x801DA384: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DA388: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DA38C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DA390: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DA394: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x801DA398: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801DA39C: swc1        $f6, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f6.u32l;
    // 0x801DA3A0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DA3A4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DA3A8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DA3AC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DA3B0: swc1        $f18, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f18.u32l;
    // 0x801DA3B4: jal         0x8003521C
    // 0x801DA3B8: swc1        $f10, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f10.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801DA3B8: swc1        $f10, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f10.u32l;
    after_4:
    // 0x801DA3BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DA3C0:
    // 0x801DA3C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801DA3C4: jr          $ra
    // 0x801DA3C8: nop

    TRACE_RETURN()
    return;
    // 0x801DA3C8: nop

;}
RECOMP_FUNC void func_801D38A4_5FEC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D38A4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D38A8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D38AC: lw          $t6, 0x68($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X68);
    // 0x801D38B0: subu        $v1, $t6, $a0
    ctx->r3 = SUB32(ctx->r14, ctx->r4);
    // 0x801D38B4: slti        $at, $v1, 0x3E7
    ctx->r1 = SIGNED(ctx->r3) < 0X3E7 ? 1 : 0;
    // 0x801D38B8: bne         $at, $zero, L_801D38C8
    if (ctx->r1 != 0) {
        // 0x801D38BC: sw          $v1, 0x68($v0)
        MEM_W(0X68, ctx->r2) = ctx->r3;
            goto L_801D38C8;
    }
    // 0x801D38BC: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
    // 0x801D38C0: addiu       $v1, $zero, 0x3E7
    ctx->r3 = ADD32(0, 0X3E7);
    // 0x801D38C4: sw          $v1, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r3;
L_801D38C8:
    // 0x801D38C8: bgtz        $v1, L_801D38D8
    if (SIGNED(ctx->r3) > 0) {
        // 0x801D38CC: nop
    
            goto L_801D38D8;
    }
    // 0x801D38CC: nop

    // 0x801D38D0: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x801D38D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_801D38D8:
    // 0x801D38D8: jr          $ra
    // 0x801D38DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D38DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F0A50_61BE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0A50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F0A54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F0A58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F0A5C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F0A60: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F0A64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F0A68: ldc1        $f8, -0x1AB8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1AB8);
    // 0x801F0A6C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801F0A70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F0A74: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801F0A78: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    // 0x801F0A7C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x801F0A80: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801F0A84: jal         0x801D725C
    // 0x801F0A88: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    func_801D725C_60263C(rdram, ctx);
        goto after_0;
    // 0x801F0A88: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    after_0:
    // 0x801F0A8C: jal         0x801D603C
    // 0x801F0A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D603C_60141C(rdram, ctx);
        goto after_1;
    // 0x801F0A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F0A94: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F0A98: jal         0x801D2F40
    // 0x801F0A9C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801F0A9C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    after_2:
    // 0x801F0AA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F0AA4: nop

    // 0x801F0AA8: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x801F0AAC: nop

    // 0x801F0AB0: bc1fl       L_801F0AC4
    if (!c1cs) {
        // 0x801F0AB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F0AC4;
    }
    goto skip_0;
    // 0x801F0AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F0AB8: jal         0x801F0540
    // 0x801F0ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_3;
    // 0x801F0ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801F0AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F0AC4:
    // 0x801F0AC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F0AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F0ACC: jr          $ra
    // 0x801F0AD0: nop

    TRACE_RETURN()
    return;
    // 0x801F0AD0: nop

;}
RECOMP_FUNC void func_801CB6AC_5F6A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB6AC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB6B0: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB6B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801CB6B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CB6BC: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801CB6C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB6C4: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x801CB6C8: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801CB6CC: sw          $zero, -0x112C($at)
    MEM_W(-0X112C, ctx->r1) = 0;
    // 0x801CB6D0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x801CB6D4: lhu         $t6, -0x51EA($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X51EA);
    // 0x801CB6D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CB6DC: beql        $t6, $at, L_801CB740
    if (ctx->r14 == ctx->r1) {
        // 0x801CB6E0: lui         $at, 0xC
        ctx->r1 = S32(0XC << 16);
            goto L_801CB740;
    }
    goto skip_0;
    // 0x801CB6E0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    skip_0:
    // 0x801CB6E4: jal         0x8003FF50
    // 0x801CB6E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_0;
    // 0x801CB6E8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x801CB6EC: jal         0x80013940
    // 0x801CB6F0: nop

    func_80013940_14540(rdram, ctx);
        goto after_1;
    // 0x801CB6F0: nop

    after_1:
    // 0x801CB6F4: jal         0x80038BC8
    // 0x801CB6F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801CB6F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x801CB6FC: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB700: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB704: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CB708: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801CB70C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CB710: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x801CB714: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801CB718: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x801CB71C: jal         0x80013AC4
    // 0x801CB720: lw          $a0, -0x652C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X652C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_3;
    // 0x801CB720: lw          $a0, -0x652C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X652C);
    after_3:
    // 0x801CB724: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x801CB728: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x801CB72C: jal         0x8001B6A4
    // 0x801CB730: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8001B6A4_1C2A4(rdram, ctx);
        goto after_4;
    // 0x801CB730: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x801CB734: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB738: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB73C: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
L_801CB740:
    // 0x801CB740: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801CB744: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB748: jal         0x800148F0
    // 0x801CB74C: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    func_800148F0_154F0(rdram, ctx);
        goto after_5;
    // 0x801CB74C: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    after_5:
    // 0x801CB750: bne         $v0, $zero, L_801CB768
    if (ctx->r2 != 0) {
        // 0x801CB754: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_801CB768;
    }
    // 0x801CB754: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801CB758: jal         0x80034ED4
    // 0x801CB75C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_6;
    // 0x801CB75C: nop

    after_6:
    // 0x801CB760: b           L_801CBE30
    // 0x801CB764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801CBE30;
    // 0x801CB764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CB768:
    // 0x801CB768: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801CB76C: addiu       $a3, $a3, -0x1130
    ctx->r7 = ADD32(ctx->r7, -0X1130);
    // 0x801CB770: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x801CB774: jal         0x801D2BF0
    // 0x801CB778: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_801D2BF0_5FDFD0(rdram, ctx);
        goto after_7;
    // 0x801CB778: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_7:
    // 0x801CB77C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801CB780: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CB784: addiu       $a3, $a3, -0x1130
    ctx->r7 = ADD32(ctx->r7, -0X1130);
    // 0x801CB788: sw          $zero, -0x1100($at)
    MEM_W(-0X1100, ctx->r1) = 0;
    // 0x801CB78C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x801CB790: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CB794: addiu       $t8, $t8, -0x6504
    ctx->r24 = ADD32(ctx->r24, -0X6504);
    // 0x801CB798: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x801CB79C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x801CB7A0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801CB7A4: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x801CB7A8: addiu       $t6, $t8, 0x9C
    ctx->r14 = ADD32(ctx->r24, 0X9C);
    // 0x801CB7AC: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
L_801CB7B0:
    // 0x801CB7B0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CB7B4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801CB7B8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801CB7BC: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x801CB7C0: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x801CB7C4: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x801CB7C8: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x801CB7CC: bne         $t8, $t6, L_801CB7B0
    if (ctx->r24 != ctx->r14) {
        // 0x801CB7D0: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_801CB7B0;
    }
    // 0x801CB7D0: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x801CB7D4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CB7D8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801CB7DC: addiu       $t9, $t9, -0x63B4
    ctx->r25 = ADD32(ctx->r25, -0X63B4);
    // 0x801CB7E0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x801CB7E4: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x801CB7E8: addiu       $t7, $t9, 0x30
    ctx->r15 = ADD32(ctx->r25, 0X30);
    // 0x801CB7EC: addiu       $t8, $t3, 0x140
    ctx->r24 = ADD32(ctx->r11, 0X140);
L_801CB7F0:
    // 0x801CB7F0: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801CB7F4: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801CB7F8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x801CB7FC: sw          $at, -0xC($t8)
    MEM_W(-0XC, ctx->r24) = ctx->r1;
    // 0x801CB800: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x801CB804: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x801CB808: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x801CB80C: bne         $t9, $t7, L_801CB7F0
    if (ctx->r25 != ctx->r15) {
        // 0x801CB810: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_801CB7F0;
    }
    // 0x801CB810: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x801CB814: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x801CB818: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CB81C: addiu       $t6, $t6, -0x6450
    ctx->r14 = ADD32(ctx->r14, -0X6450);
    // 0x801CB820: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x801CB824: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x801CB828: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x801CB82C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x801CB830: addiu       $t8, $t6, 0x60
    ctx->r24 = ADD32(ctx->r14, 0X60);
    // 0x801CB834: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CB838: addiu       $t9, $t4, 0xA0
    ctx->r25 = ADD32(ctx->r12, 0XA0);
L_801CB83C:
    // 0x801CB83C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CB840: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CB844: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x801CB848: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x801CB84C: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x801CB850: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x801CB854: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x801CB858: bne         $t6, $t8, L_801CB83C
    if (ctx->r14 != ctx->r24) {
        // 0x801CB85C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_801CB83C;
    }
    // 0x801CB85C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x801CB860: addiu       $t7, $t7, -0x63F0
    ctx->r15 = ADD32(ctx->r15, -0X63F0);
    // 0x801CB864: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801CB868: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x801CB86C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x801CB870: lhu         $at, 0x4($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X4);
    // 0x801CB874: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x801CB878: sh          $at, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r1;
    // 0x801CB87C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x801CB880: swl         $at, 0x12($v0)
    do_swl(rdram, 0X12, ctx->r2, ctx->r1);
    // 0x801CB884: swr         $at, 0x15($v0)
    do_swr(rdram, 0X15, ctx->r2, ctx->r1);
    // 0x801CB888: lbu         $at, 0x4($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X4);
    // 0x801CB88C: sb          $at, 0x16($v0)
    MEM_B(0X16, ctx->r2) = ctx->r1;
    // 0x801CB890: lbu         $t7, 0x5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5);
    // 0x801CB894: sb          $t7, 0x17($v0)
    MEM_B(0X17, ctx->r2) = ctx->r15;
    // 0x801CB898: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x801CB89C: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x801CB8A0: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x801CB8A4: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x801CB8A8: lbu         $at, 0x4($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X4);
    // 0x801CB8AC: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801CB8B0: sb          $at, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r1;
    // 0x801CB8B4: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x801CB8B8: swl         $at, 0xC($v0)
    do_swl(rdram, 0XC, ctx->r2, ctx->r1);
    // 0x801CB8BC: swr         $at, 0xF($v0)
    do_swr(rdram, 0XF, ctx->r2, ctx->r1);
    // 0x801CB8C0: lbu         $at, 0x4($a1)
    ctx->r1 = MEM_BU(ctx->r5, 0X4);
    // 0x801CB8C4: sb          $at, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r1;
    // 0x801CB8C8: lbu         $t9, 0x5($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X5);
    // 0x801CB8CC: sb          $t9, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r25;
    // 0x801CB8D0: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x801CB8D4: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x801CB8D8: lbu         $t7, 0x5($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X5);
    // 0x801CB8DC: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x801CB8E0: lbu         $at, 0x4($a1)
    ctx->r1 = MEM_BU(ctx->r5, 0X4);
    // 0x801CB8E4: sb          $t7, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r15;
    // 0x801CB8E8: sb          $at, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r1;
    // 0x801CB8EC: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x801CB8F0: swl         $at, 0x6($v0)
    do_swl(rdram, 0X6, ctx->r2, ctx->r1);
    // 0x801CB8F4: swr         $at, 0x9($v0)
    do_swr(rdram, 0X9, ctx->r2, ctx->r1);
    // 0x801CB8F8: lbu         $at, 0x4($a2)
    ctx->r1 = MEM_BU(ctx->r6, 0X4);
    // 0x801CB8FC: sb          $at, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r1;
    // 0x801CB900: lbu         $t6, 0x5($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X5);
    // 0x801CB904: sb          $t6, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r14;
    // 0x801CB908: lwl         $at, 0x0($a2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r6, 0X0);
    // 0x801CB90C: lwr         $at, 0x3($a2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r6, 0X3);
    // 0x801CB910: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CB914: addiu       $t6, $t6, -0x63F0
    ctx->r14 = ADD32(ctx->r14, -0X63F0);
    // 0x801CB918: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x801CB91C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x801CB920: lbu         $at, 0x4($a2)
    ctx->r1 = MEM_BU(ctx->r6, 0X4);
    // 0x801CB924: sb          $at, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r1;
    // 0x801CB928: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x801CB92C: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
    // 0x801CB930: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CB934: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x801CB938: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x801CB93C: lhu         $at, 0x4($t6)
    ctx->r1 = MEM_HU(ctx->r14, 0X4);
    // 0x801CB940: addiu       $v1, $v1, 0x118
    ctx->r3 = ADD32(ctx->r3, 0X118);
    // 0x801CB944: sh          $at, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r1;
    // 0x801CB948: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x801CB94C: swl         $at, 0x12($v1)
    do_swl(rdram, 0X12, ctx->r3, ctx->r1);
    // 0x801CB950: swr         $at, 0x15($v1)
    do_swr(rdram, 0X15, ctx->r3, ctx->r1);
    // 0x801CB954: lbu         $at, 0x4($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X4);
    // 0x801CB958: sb          $at, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r1;
    // 0x801CB95C: lbu         $t6, 0x5($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5);
    // 0x801CB960: sb          $t6, 0x17($v1)
    MEM_B(0X17, ctx->r3) = ctx->r14;
    // 0x801CB964: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x801CB968: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x801CB96C: lbu         $t7, 0x5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5);
    // 0x801CB970: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x801CB974: lbu         $at, 0x4($a0)
    ctx->r1 = MEM_BU(ctx->r4, 0X4);
    // 0x801CB978: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x801CB97C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CB980: sb          $at, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r1;
    // 0x801CB984: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x801CB988: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x801CB98C: swl         $at, 0xC($v1)
    do_swl(rdram, 0XC, ctx->r3, ctx->r1);
    // 0x801CB990: swr         $at, 0xF($v1)
    do_swr(rdram, 0XF, ctx->r3, ctx->r1);
    // 0x801CB994: lbu         $at, 0x4($a1)
    ctx->r1 = MEM_BU(ctx->r5, 0X4);
    // 0x801CB998: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
    // 0x801CB99C: lbu         $t9, 0x5($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X5);
    // 0x801CB9A0: sb          $t9, 0x11($v1)
    MEM_B(0X11, ctx->r3) = ctx->r25;
    // 0x801CB9A4: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x801CB9A8: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x801CB9AC: lbu         $t6, 0x5($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5);
    // 0x801CB9B0: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x801CB9B4: lbu         $at, 0x4($a1)
    ctx->r1 = MEM_BU(ctx->r5, 0X4);
    // 0x801CB9B8: sb          $t6, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r14;
    // 0x801CB9BC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CB9C0: sb          $at, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r1;
    // 0x801CB9C4: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x801CB9C8: addiu       $t6, $t6, -0x63BC
    ctx->r14 = ADD32(ctx->r14, -0X63BC);
    // 0x801CB9CC: swl         $at, 0x6($v1)
    do_swl(rdram, 0X6, ctx->r3, ctx->r1);
    // 0x801CB9D0: swr         $at, 0x9($v1)
    do_swr(rdram, 0X9, ctx->r3, ctx->r1);
    // 0x801CB9D4: lbu         $at, 0x4($a2)
    ctx->r1 = MEM_BU(ctx->r6, 0X4);
    // 0x801CB9D8: sb          $at, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r1;
    // 0x801CB9DC: lbu         $t7, 0x5($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X5);
    // 0x801CB9E0: sb          $t7, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r15;
    // 0x801CB9E4: lwl         $at, 0x0($a2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r6, 0X0);
    // 0x801CB9E8: lwr         $at, 0x3($a2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r6, 0X3);
    // 0x801CB9EC: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CB9F0: addiu       $t7, $t7, -0x63C0
    ctx->r15 = ADD32(ctx->r15, -0X63C0);
    // 0x801CB9F4: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x801CB9F8: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x801CB9FC: lbu         $at, 0x4($a2)
    ctx->r1 = MEM_BU(ctx->r6, 0X4);
    // 0x801CBA00: sb          $at, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r1;
    // 0x801CBA04: lbu         $t9, 0x5($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X5);
    // 0x801CBA08: sb          $t9, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r25;
    // 0x801CBA0C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x801CBA10: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801CBA14: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CBA18: addiu       $t7, $t7, -0x63C0
    ctx->r15 = ADD32(ctx->r15, -0X63C0);
    // 0x801CBA1C: swl         $at, 0x130($t1)
    do_swl(rdram, 0X130, ctx->r9, ctx->r1);
    // 0x801CBA20: swr         $at, 0x133($t1)
    do_swr(rdram, 0X133, ctx->r9, ctx->r1);
    // 0x801CBA24: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CBA28: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801CBA2C: addiu       $t6, $t6, -0x63BC
    ctx->r14 = ADD32(ctx->r14, -0X63BC);
    // 0x801CBA30: swl         $at, 0x134($t1)
    do_swl(rdram, 0X134, ctx->r9, ctx->r1);
    // 0x801CBA34: swr         $at, 0x137($t1)
    do_swr(rdram, 0X137, ctx->r9, ctx->r1);
    // 0x801CBA38: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x801CBA3C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801CBA40: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801CBA44: addiu       $t7, $t7, -0x637C
    ctx->r15 = ADD32(ctx->r15, -0X637C);
    // 0x801CBA48: swl         $at, 0x138($t2)
    do_swl(rdram, 0X138, ctx->r10, ctx->r1);
    // 0x801CBA4C: swr         $at, 0x13B($t2)
    do_swr(rdram, 0X13B, ctx->r10, ctx->r1);
    // 0x801CBA50: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x801CBA54: addiu       $t9, $t7, 0x30
    ctx->r25 = ADD32(ctx->r15, 0X30);
    // 0x801CBA58: addiu       $t1, $t1, 0x130
    ctx->r9 = ADD32(ctx->r9, 0X130);
    // 0x801CBA5C: swl         $at, 0x13C($t2)
    do_swl(rdram, 0X13C, ctx->r10, ctx->r1);
    // 0x801CBA60: swr         $at, 0x13F($t2)
    do_swr(rdram, 0X13F, ctx->r10, ctx->r1);
    // 0x801CBA64: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x801CBA68: addiu       $t2, $t2, 0x138
    ctx->r10 = ADD32(ctx->r10, 0X138);
    // 0x801CBA6C: addiu       $t6, $t5, 0x178
    ctx->r14 = ADD32(ctx->r13, 0X178);
L_801CBA70:
    // 0x801CBA70: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801CBA74: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x801CBA78: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x801CBA7C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x801CBA80: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x801CBA84: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x801CBA88: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x801CBA8C: bne         $t7, $t9, L_801CBA70
    if (ctx->r15 != ctx->r25) {
        // 0x801CBA90: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_801CBA70;
    }
    // 0x801CBA90: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x801CBA94: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801CBA98: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801CBA9C: addiu       $t8, $t8, -0x6344
    ctx->r24 = ADD32(ctx->r24, -0X6344);
    // 0x801CBAA0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801CBAA4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x801CBAA8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x801CBAAC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x801CBAB0: lw          $ra, 0x0($a3)
    ctx->r31 = MEM_W(ctx->r7, 0X0);
    // 0x801CBAB4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801CBAB8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801CBABC: addiu       $ra, $ra, 0x1B0
    ctx->r31 = ADD32(ctx->r31, 0X1B0);
    // 0x801CBAC0: swl         $at, 0x0($ra)
    do_swl(rdram, 0X0, ctx->r31, ctx->r1);
    // 0x801CBAC4: swr         $at, 0x3($ra)
    do_swr(rdram, 0X3, ctx->r31, ctx->r1);
    // 0x801CBAC8: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x801CBACC: swl         $t6, 0x4($ra)
    do_swl(rdram, 0X4, ctx->r31, ctx->r14);
    // 0x801CBAD0: swr         $t6, 0x7($ra)
    do_swr(rdram, 0X7, ctx->r31, ctx->r14);
    // 0x801CBAD4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801CBAD8: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x801CBADC: addiu       $t6, $zero, 0x136
    ctx->r14 = ADD32(0, 0X136);
    // 0x801CBAE0: swl         $at, 0x8($ra)
    do_swl(rdram, 0X8, ctx->r31, ctx->r1);
    // 0x801CBAE4: swr         $at, 0xB($ra)
    do_swr(rdram, 0XB, ctx->r31, ctx->r1);
    // 0x801CBAE8: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x801CBAEC: sw          $zero, 0x1C0($t0)
    MEM_W(0X1C0, ctx->r8) = 0;
    // 0x801CBAF0: sw          $zero, 0x1C4($t0)
    MEM_W(0X1C4, ctx->r8) = 0;
    // 0x801CBAF4: sw          $t7, 0x1BC($t0)
    MEM_W(0X1BC, ctx->r8) = ctx->r15;
    // 0x801CBAF8: sw          $zero, 0x1C8($t0)
    MEM_W(0X1C8, ctx->r8) = 0;
    // 0x801CBAFC: sw          $zero, 0x1CC($t0)
    MEM_W(0X1CC, ctx->r8) = 0;
    // 0x801CBB00: sw          $zero, 0x1D0($t0)
    MEM_W(0X1D0, ctx->r8) = 0;
    // 0x801CBB04: sw          $zero, 0x1D8($t0)
    MEM_W(0X1D8, ctx->r8) = 0;
    // 0x801CBB08: sw          $zero, 0x1D4($t0)
    MEM_W(0X1D4, ctx->r8) = 0;
    // 0x801CBB0C: sw          $zero, 0x1DC($t0)
    MEM_W(0X1DC, ctx->r8) = 0;
    // 0x801CBB10: sw          $zero, 0x1E0($t0)
    MEM_W(0X1E0, ctx->r8) = 0;
    // 0x801CBB14: sw          $zero, 0x1E4($t0)
    MEM_W(0X1E4, ctx->r8) = 0;
    // 0x801CBB18: sw          $zero, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = 0;
    // 0x801CBB1C: sb          $zero, 0x2C0($t0)
    MEM_B(0X2C0, ctx->r8) = 0;
    // 0x801CBB20: sb          $zero, 0x2C1($t0)
    MEM_B(0X2C1, ctx->r8) = 0;
    // 0x801CBB24: sb          $zero, 0x2C2($t0)
    MEM_B(0X2C2, ctx->r8) = 0;
    // 0x801CBB28: sb          $zero, 0x2C3($t0)
    MEM_B(0X2C3, ctx->r8) = 0;
    // 0x801CBB2C: sb          $zero, 0x2C4($t0)
    MEM_B(0X2C4, ctx->r8) = 0;
    // 0x801CBB30: sb          $zero, 0x2C5($t0)
    MEM_B(0X2C5, ctx->r8) = 0;
    // 0x801CBB34: sb          $zero, 0x2C6($t0)
    MEM_B(0X2C6, ctx->r8) = 0;
    // 0x801CBB38: sb          $zero, 0x2C7($t0)
    MEM_B(0X2C7, ctx->r8) = 0;
    // 0x801CBB3C: sw          $zero, 0x2C8($t0)
    MEM_W(0X2C8, ctx->r8) = 0;
    // 0x801CBB40: sw          $t9, 0x1EC($t0)
    MEM_W(0X1EC, ctx->r8) = ctx->r25;
    // 0x801CBB44: sw          $t8, 0x1F0($t0)
    MEM_W(0X1F0, ctx->r8) = ctx->r24;
    // 0x801CBB48: sw          $t6, 0x1F4($t0)
    MEM_W(0X1F4, ctx->r8) = ctx->r14;
    // 0x801CBB4C: sw          $v0, 0x1F8($t0)
    MEM_W(0X1F8, ctx->r8) = ctx->r2;
    // 0x801CBB50: sw          $v0, 0x1FC($t0)
    MEM_W(0X1FC, ctx->r8) = ctx->r2;
    // 0x801CBB54: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CBB58: lw          $t7, -0x3A28($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A28);
    // 0x801CBB5C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x801CBB60: bne         $at, $zero, L_801CBBA4
    if (ctx->r1 != 0) {
        // 0x801CBB64: nop
    
            goto L_801CBBA4;
    }
    // 0x801CBB64: nop

    // 0x801CBB68: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x801CBB6C: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CBB70: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CBB74: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x801CBB78: lhu         $t8, -0x4F6E($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X4F6E);
    // 0x801CBB7C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801CBB80: andi        $t6, $t8, 0x1000
    ctx->r14 = ctx->r24 & 0X1000;
    // 0x801CBB84: beql        $t6, $zero, L_801CBB9C
    if (ctx->r14 == 0) {
        // 0x801CBB88: sw          $zero, 0x1E4($t0)
        MEM_W(0X1E4, ctx->r8) = 0;
            goto L_801CBB9C;
    }
    goto skip_1;
    // 0x801CBB88: sw          $zero, 0x1E4($t0)
    MEM_W(0X1E4, ctx->r8) = 0;
    skip_1:
    // 0x801CBB8C: sw          $t7, 0x1E4($t0)
    MEM_W(0X1E4, ctx->r8) = ctx->r15;
    // 0x801CBB90: b           L_801CBBB4
    // 0x801CBB94: sw          $zero, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = 0;
        goto L_801CBBB4;
    // 0x801CBB94: sw          $zero, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = 0;
    // 0x801CBB98: sw          $zero, 0x1E4($t0)
    MEM_W(0X1E4, ctx->r8) = 0;
L_801CBB9C:
    // 0x801CBB9C: b           L_801CBBB4
    // 0x801CBBA0: sw          $t9, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = ctx->r25;
        goto L_801CBBB4;
    // 0x801CBBA0: sw          $t9, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = ctx->r25;
L_801CBBA4:
    // 0x801CBBA4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801CBBA8: sw          $zero, 0x1E4($t0)
    MEM_W(0X1E4, ctx->r8) = 0;
    // 0x801CBBAC: addiu       $a0, $a0, -0x3A38
    ctx->r4 = ADD32(ctx->r4, -0X3A38);
    // 0x801CBBB0: sw          $zero, 0x1E8($t0)
    MEM_W(0X1E8, ctx->r8) = 0;
L_801CBBB4:
    // 0x801CBBB4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x801CBBB8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CBBBC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801CBBC0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x801CBBC4: sb          $t8, -0x5236($at)
    MEM_B(-0X5236, ctx->r1) = ctx->r24;
    // 0x801CBBC8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801CBBCC: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801CBBD0: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801CBBD4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801CBBD8: lbu         $t7, 0x4BBD($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4BBD);
    // 0x801CBBDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801CBBE0: andi        $t9, $t7, 0x80
    ctx->r25 = ctx->r15 & 0X80;
    // 0x801CBBE4: sb          $t9, 0x4BBD($v0)
    MEM_B(0X4BBD, ctx->r2) = ctx->r25;
    // 0x801CBBE8: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x801CBBEC: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x801CBBF0: lhu         $v1, -0x51EA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X51EA);
    // 0x801CBBF4: bne         $v1, $at, L_801CBC4C
    if (ctx->r3 != ctx->r1) {
        // 0x801CBBF8: nop
    
            goto L_801CBC4C;
    }
    // 0x801CBBF8: nop

    // 0x801CBBFC: jal         0x80004910
    // 0x801CBC00: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_80004910_5510(rdram, ctx);
        goto after_8;
    // 0x801CBC00: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_8:
    // 0x801CBC04: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBC08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801CBC0C: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CBC10: sw          $zero, 0x7C60($at)
    MEM_W(0X7C60, ctx->r1) = 0;
    // 0x801CBC14: addiu       $t6, $zero, 0x190
    ctx->r14 = ADD32(0, 0X190);
    // 0x801CBC18: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x801CBC1C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CBC20: sw          $t6, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r14;
    // 0x801CBC24: sw          $t7, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r15;
    // 0x801CBC28: addiu       $a1, $a1, -0x3270
    ctx->r5 = ADD32(ctx->r5, -0X3270);
    // 0x801CBC2C: jal         0x80004964
    // 0x801CBC30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80004964_5564(rdram, ctx);
        goto after_9;
    // 0x801CBC30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x801CBC34: jal         0x8001198C
    // 0x801CBC38: nop

    func_8001198C_1258C(rdram, ctx);
        goto after_10;
    // 0x801CBC38: nop

    after_10:
    // 0x801CBC3C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBC40: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CBC44: b           L_801CBCB0
    // 0x801CBC48: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
        goto L_801CBCB0;
    // 0x801CBC48: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
L_801CBC4C:
    // 0x801CBC4C: beq         $v1, $zero, L_801CBC9C
    if (ctx->r3 == 0) {
        // 0x801CBC50: nop
    
            goto L_801CBC9C;
    }
    // 0x801CBC50: nop

    // 0x801CBC54: jal         0x80004910
    // 0x801CBC58: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_80004910_5510(rdram, ctx);
        goto after_11;
    // 0x801CBC58: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_11:
    // 0x801CBC5C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBC60: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801CBC64: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CBC68: sw          $zero, 0x7C60($at)
    MEM_W(0X7C60, ctx->r1) = 0;
    // 0x801CBC6C: addiu       $t9, $zero, 0x190
    ctx->r25 = ADD32(0, 0X190);
    // 0x801CBC70: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x801CBC74: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801CBC78: sw          $t9, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r25;
    // 0x801CBC7C: sw          $t8, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r24;
    // 0x801CBC80: addiu       $a1, $a1, -0x4710
    ctx->r5 = ADD32(ctx->r5, -0X4710);
    // 0x801CBC84: jal         0x80004964
    // 0x801CBC88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80004964_5564(rdram, ctx);
        goto after_12;
    // 0x801CBC88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x801CBC8C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBC90: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CBC94: b           L_801CBCB0
    // 0x801CBC98: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
        goto L_801CBCB0;
    // 0x801CBC98: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
L_801CBC9C:
    // 0x801CBC9C: jal         0x80004910
    // 0x801CBCA0: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_80004910_5510(rdram, ctx);
        goto after_13;
    // 0x801CBCA0: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_13:
    // 0x801CBCA4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CBCA8: addiu       $v0, $v0, -0x39F8
    ctx->r2 = ADD32(ctx->r2, -0X39F8);
    // 0x801CBCAC: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
L_801CBCB0:
    // 0x801CBCB0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801CBCB4: lw          $v1, -0x3A38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A38);
    // 0x801CBCB8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CBCBC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CBCC0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CBCC4: lbu         $t6, 0x2DE4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2DE4);
    // 0x801CBCC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801CBCCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CBCD0: bnel        $t6, $at, L_801CBCF4
    if (ctx->r14 != ctx->r1) {
        // 0x801CBCD4: lhu         $t8, 0x2DF4($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X2DF4);
            goto L_801CBCF4;
    }
    goto skip_2;
    // 0x801CBCD4: lhu         $t8, 0x2DF4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DF4);
    skip_2:
    // 0x801CBCD8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x801CBCDC: lw          $t7, 0x29C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X29C);
    // 0x801CBCE0: sw          $t7, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r15;
    // 0x801CBCE4: lw          $t9, 0x2A0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2A0);
    // 0x801CBCE8: b           L_801CBD34
    // 0x801CBCEC: sw          $t9, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r25;
        goto L_801CBD34;
    // 0x801CBCEC: sw          $t9, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r25;
    // 0x801CBCF0: lhu         $t8, 0x2DF4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DF4);
L_801CBCF4:
    // 0x801CBCF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CBCF8: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x801CBCFC: bne         $t8, $at, L_801CBD24
    if (ctx->r24 != ctx->r1) {
        // 0x801CBD00: lw          $v1, 0x68($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X68);
            goto L_801CBD24;
    }
    // 0x801CBD00: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x801CBD04: addiu       $v1, $zero, 0x1F4
    ctx->r3 = ADD32(0, 0X1F4);
    // 0x801CBD08: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x801CBD0C: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x801CBD10: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    // 0x801CBD14: addiu       $t7, $zero, 0xC8
    ctx->r15 = ADD32(0, 0XC8);
    // 0x801CBD18: sw          $v1, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r3;
    // 0x801CBD1C: b           L_801CBD34
    // 0x801CBD20: sw          $t7, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r15;
        goto L_801CBD34;
    // 0x801CBD20: sw          $t7, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = ctx->r15;
L_801CBD24:
    // 0x801CBD24: lw          $t9, 0x29C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X29C);
    // 0x801CBD28: sw          $t9, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->r25;
    // 0x801CBD2C: lw          $t8, 0x2A0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2A0);
    // 0x801CBD30: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
L_801CBD34:
    // 0x801CBD34: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD38: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    // 0x801CBD3C: jal         0x80034DD8
    // 0x801CBD40: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    func_80034DD8_359D8(rdram, ctx);
        goto after_14;
    // 0x801CBD40: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
    after_14:
    // 0x801CBD44: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x801CBD48: addiu       $a0, $a0, -0x2FE4
    ctx->r4 = ADD32(ctx->r4, -0X2FE4);
    // 0x801CBD4C: jal         0x80034DD8
    // 0x801CBD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_15;
    // 0x801CBD50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x801CBD54: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD58: addiu       $a0, $a0, -0x3764
    ctx->r4 = ADD32(ctx->r4, -0X3764);
    // 0x801CBD5C: jal         0x80034DD8
    // 0x801CBD60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_16;
    // 0x801CBD60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x801CBD64: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x801CBD68: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD6C: addiu       $a0, $a0, 0x260
    ctx->r4 = ADD32(ctx->r4, 0X260);
    // 0x801CBD70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CBD74: jal         0x80034DD8
    // 0x801CBD78: sw          $v0, 0x1C0($t0)
    MEM_W(0X1C0, ctx->r8) = ctx->r2;
    func_80034DD8_359D8(rdram, ctx);
        goto after_17;
    // 0x801CBD78: sw          $v0, 0x1C0($t0)
    MEM_W(0X1C0, ctx->r8) = ctx->r2;
    after_17:
    // 0x801CBD7C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x801CBD80: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBD84: addiu       $a0, $a0, 0x1638
    ctx->r4 = ADD32(ctx->r4, 0X1638);
    // 0x801CBD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801CBD8C: jal         0x80034DD8
    // 0x801CBD90: sw          $v0, 0x1C4($t0)
    MEM_W(0X1C4, ctx->r8) = ctx->r2;
    func_80034DD8_359D8(rdram, ctx);
        goto after_18;
    // 0x801CBD90: sw          $v0, 0x1C4($t0)
    MEM_W(0X1C4, ctx->r8) = ctx->r2;
    after_18:
    // 0x801CBD94: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CBD98: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CBD9C: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x801CBDA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801CBDA4: lhu         $t7, -0x520C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X520C);
    // 0x801CBDA8: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x801CBDAC: beq         $at, $zero, L_801CBE10
    if (ctx->r1 == 0) {
        // 0x801CBDB0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_801CBE10;
    }
    // 0x801CBDB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801CBDB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CBDB8: addu        $at, $at, $t7
    gpr jr_addend_801CBDC0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CBDBC: lw          $t7, -0x3190($at)
    ctx->r15 = ADD32(ctx->r1, -0X3190);
    // 0x801CBDC0: jr          $t7
    // 0x801CBDC4: nop

    switch (jr_addend_801CBDC0 >> 2) {
        case 0: goto L_801CBDC8; break;
        case 1: goto L_801CBDD8; break;
        case 2: goto L_801CBDE8; break;
        case 3: goto L_801CBDF8; break;
        case 4: goto L_801CBE08; break;
        default: switch_error(__func__, 0x801CBDC0, 0x8020CE70);
    }
    // 0x801CBDC4: nop

L_801CBDC8:
    // 0x801CBDC8: jal         0x801E4628
    // 0x801CBDCC: nop

    func_801E4628_60FA08(rdram, ctx);
        goto after_19;
    // 0x801CBDCC: nop

    after_19:
    // 0x801CBDD0: b           L_801CBE10
    // 0x801CBDD4: nop

        goto L_801CBE10;
    // 0x801CBDD4: nop

L_801CBDD8:
    // 0x801CBDD8: jal         0x801EEC1C
    // 0x801CBDDC: nop

    func_801EEC1C_619FFC(rdram, ctx);
        goto after_20;
    // 0x801CBDDC: nop

    after_20:
    // 0x801CBDE0: b           L_801CBE10
    // 0x801CBDE4: nop

        goto L_801CBE10;
    // 0x801CBDE4: nop

L_801CBDE8:
    // 0x801CBDE8: jal         0x801F9568
    // 0x801CBDEC: nop

    func_801F9568_624948(rdram, ctx);
        goto after_21;
    // 0x801CBDEC: nop

    after_21:
    // 0x801CBDF0: b           L_801CBE10
    // 0x801CBDF4: nop

        goto L_801CBE10;
    // 0x801CBDF4: nop

L_801CBDF8:
    // 0x801CBDF8: jal         0x802079BC
    // 0x801CBDFC: nop

    func_802079BC_632D9C(rdram, ctx);
        goto after_22;
    // 0x801CBDFC: nop

    after_22:
    // 0x801CBE00: b           L_801CBE10
    // 0x801CBE04: nop

        goto L_801CBE10;
    // 0x801CBE04: nop

L_801CBE08:
    // 0x801CBE08: jal         0x80208510
    // 0x801CBE0C: nop

    func_80208510_6338F0(rdram, ctx);
        goto after_23;
    // 0x801CBE0C: nop

    after_23:
L_801CBE10:
    // 0x801CBE10: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBE14: addiu       $a0, $a0, 0x131C
    ctx->r4 = ADD32(ctx->r4, 0X131C);
    // 0x801CBE18: jal         0x80034DD8
    // 0x801CBE1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_24;
    // 0x801CBE1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x801CBE20: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CBE24: jal         0x8003521C
    // 0x801CBE28: addiu       $a0, $a0, -0x41C4
    ctx->r4 = ADD32(ctx->r4, -0X41C4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_25;
    // 0x801CBE28: addiu       $a0, $a0, -0x41C4
    ctx->r4 = ADD32(ctx->r4, -0X41C4);
    after_25:
    // 0x801CBE2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBE30:
    // 0x801CBE30: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801CBE34: jr          $ra
    // 0x801CBE38: nop

    TRACE_RETURN()
    return;
    // 0x801CBE38: nop

;}
RECOMP_FUNC void func_801EC7B8_617B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC7B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EC7BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EC7C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EC7C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EC7C8: jal         0x801ECEDC
    // 0x801EC7CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801ECEDC_6182BC(rdram, ctx);
        goto after_0;
    // 0x801EC7CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EC7D0: bnel        $v0, $zero, L_801EC84C
    if (ctx->r2 != 0) {
        // 0x801EC7D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801EC84C;
    }
    goto skip_0;
    // 0x801EC7D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801EC7D8: jal         0x801ECE48
    // 0x801EC7DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801ECE48_618228(rdram, ctx);
        goto after_1;
    // 0x801EC7DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EC7E0: bne         $v0, $zero, L_801EC848
    if (ctx->r2 != 0) {
        // 0x801EC7E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801EC848;
    }
    // 0x801EC7E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EC7E8: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x801EC7EC: jal         0x801D3B18
    // 0x801EC7F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_2;
    // 0x801EC7F0: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x801EC7F4: lwc1        $f4, 0x90($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC7F8: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801EC7FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801EC800: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801EC804: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801EC808: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EC80C: addiu       $a0, $a0, -0x37A4
    ctx->r4 = ADD32(ctx->r4, -0X37A4);
    // 0x801EC810: swc1        $f8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f8.u32l;
    // 0x801EC814: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC818: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x801EC81C: nop

    // 0x801EC820: bc1fl       L_801EC838
    if (!c1cs) {
        // 0x801EC824: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_801EC838;
    }
    goto skip_1;
    // 0x801EC824: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801EC828: jal         0x8003521C
    // 0x801EC82C: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801EC82C: swc1        $f0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f0.u32l;
    after_3:
    // 0x801EC830: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801EC834: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_801EC838:
    // 0x801EC838: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    // 0x801EC83C: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
    // 0x801EC840: jal         0x8000E630
    // 0x801EC844: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    func_8000E630_F230(rdram, ctx);
        goto after_4;
    // 0x801EC844: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    after_4:
L_801EC848:
    // 0x801EC848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801EC84C:
    // 0x801EC84C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EC850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EC854: jr          $ra
    // 0x801EC858: nop

    TRACE_RETURN()
    return;
    // 0x801EC858: nop

;}
RECOMP_FUNC void func_801F703C_62241C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F703C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801F7040: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801F7044: addiu       $t6, $zero, 0x5B
    ctx->r14 = ADD32(0, 0X5B);
    // 0x801F7048: lw          $t8, 0x1D8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D8);
    // 0x801F704C: jr          $ra
    // 0x801F7050: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x801F7050: sw          $t6, 0x64($t8)
    MEM_W(0X64, ctx->r24) = ctx->r14;
;}
RECOMP_FUNC void func_801FD634_628A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD634: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FD638: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801FD63C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FD640: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FD644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FD648: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FD64C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801FD650: jal         0x8000E9F4
    // 0x801FD654: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_0;
    // 0x801FD654: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x801FD658: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801FD65C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x801FD660: addiu       $t1, $zero, 0x3FE
    ctx->r9 = ADD32(0, 0X3FE);
    // 0x801FD664: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x801FD668: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x801FD66C: lw          $t6, 0x94($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X94);
    // 0x801FD670: addiu       $a2, $a0, 0x8
    ctx->r6 = ADD32(ctx->r4, 0X8);
    // 0x801FD674: addiu       $a3, $a0, 0x10
    ctx->r7 = ADD32(ctx->r4, 0X10);
    // 0x801FD678: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801FD67C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801FD680: sltiu       $at, $t9, 0x280
    ctx->r1 = ctx->r25 < 0X280 ? 1 : 0;
    // 0x801FD684: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x801FD688: beq         $at, $zero, L_801FD698
    if (ctx->r1 == 0) {
        // 0x801FD68C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_801FD698;
    }
    // 0x801FD68C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801FD690: sw          $t0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r8;
    // 0x801FD694: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_801FD698:
    // 0x801FD698: sltiu       $at, $v1, 0x381
    ctx->r1 = ctx->r3 < 0X381 ? 1 : 0;
    // 0x801FD69C: bnel        $at, $zero, L_801FD6B0
    if (ctx->r1 != 0) {
        // 0x801FD6A0: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_801FD6B0;
    }
    goto skip_0;
    // 0x801FD6A0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_0:
    // 0x801FD6A4: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    // 0x801FD6A8: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x801FD6AC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_801FD6B0:
    // 0x801FD6B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FD6B4: jal         0x8000E630
    // 0x801FD6B8: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801FD6B8: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    after_1:
    // 0x801FD6BC: lw          $t2, 0x80($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X80);
    // 0x801FD6C0: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x801FD6C4: bne         $t3, $zero, L_801FD710
    if (ctx->r11 != 0) {
        // 0x801FD6C8: sw          $t3, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r11;
            goto L_801FD710;
    }
    // 0x801FD6C8: sw          $t3, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r11;
    // 0x801FD6CC: jal         0x801D36C4
    // 0x801FD6D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_2;
    // 0x801FD6D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801FD6D4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FD6D8: addiu       $a1, $a1, -0x4BD8
    ctx->r5 = ADD32(ctx->r5, -0X4BD8);
    // 0x801FD6DC: jal         0x801D31CC
    // 0x801FD6E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_3;
    // 0x801FD6E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801FD6E4: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x801FD6E8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801FD6EC: addiu       $t6, $t6, -0x5860
    ctx->r14 = ADD32(ctx->r14, -0X5860);
    // 0x801FD6F0: addiu       $t7, $zero, 0x52
    ctx->r15 = ADD32(0, 0X52);
    // 0x801FD6F4: sb          $t5, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r13;
    // 0x801FD6F8: sw          $t6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r14;
    // 0x801FD6FC: jal         0x801FFDFC
    // 0x801FD700: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_4;
    // 0x801FD700: sb          $t7, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r15;
    after_4:
    // 0x801FD704: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD708: jal         0x8003521C
    // 0x801FD70C: addiu       $a0, $a0, -0x28DC
    ctx->r4 = ADD32(ctx->r4, -0X28DC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FD70C: addiu       $a0, $a0, -0x28DC
    ctx->r4 = ADD32(ctx->r4, -0X28DC);
    after_5:
L_801FD710:
    // 0x801FD710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FD714: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FD718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FD71C: jr          $ra
    // 0x801FD720: nop

    TRACE_RETURN()
    return;
    // 0x801FD720: nop

;}
RECOMP_FUNC void func_801EF84C_61AC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF84C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF854: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x801EF858: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x801EF85C: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    // 0x801EF860: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EF864: jal         0x801D31CC
    // 0x801EF868: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_0;
    // 0x801EF868: addiu       $a1, $a1, -0x4DA0
    ctx->r5 = ADD32(ctx->r5, -0X4DA0);
    after_0:
    // 0x801EF86C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF870: jal         0x8003521C
    // 0x801EF874: addiu       $a0, $a0, -0x778
    ctx->r4 = ADD32(ctx->r4, -0X778);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801EF874: addiu       $a0, $a0, -0x778
    ctx->r4 = ADD32(ctx->r4, -0X778);
    after_1:
    // 0x801EF878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF880: jr          $ra
    // 0x801EF884: nop

    TRACE_RETURN()
    return;
    // 0x801EF884: nop

;}
RECOMP_FUNC void func_802018B4_62CC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802018B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802018B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802018BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802018C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802018C4: addiu       $t6, $zero, 0x15E
    ctx->r14 = ADD32(0, 0X15E);
    // 0x802018C8: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x802018CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802018D0: jal         0x8003521C
    // 0x802018D4: addiu       $a0, $a0, 0x190C
    ctx->r4 = ADD32(ctx->r4, 0X190C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x802018D4: addiu       $a0, $a0, 0x190C
    ctx->r4 = ADD32(ctx->r4, 0X190C);
    after_0:
    // 0x802018D8: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x802018DC: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x802018E0: lbu         $t9, 0xE($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XE);
    // 0x802018E4: beq         $t9, $zero, L_802018F4
    if (ctx->r25 == 0) {
        // 0x802018E8: nop
    
            goto L_802018F4;
    }
    // 0x802018E8: nop

    // 0x802018EC: jal         0x80200684
    // 0x802018F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x802018F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_802018F4:
    // 0x802018F4: jal         0x8020407C
    // 0x802018F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x802018F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x802018FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80201900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80201904: jr          $ra
    // 0x80201908: nop

    TRACE_RETURN()
    return;
    // 0x80201908: nop

;}
RECOMP_FUNC void func_801F3A68_61EE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F3A6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F3A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F3A74: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F3A78: jal         0x801D2F40
    // 0x801F3A7C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801F3A7C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x801F3A80: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F3A84: nop

    // 0x801F3A88: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801F3A8C: nop

    // 0x801F3A90: bc1fl       L_801F3ABC
    if (!c1cs) {
        // 0x801F3A94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F3ABC;
    }
    goto skip_0;
    // 0x801F3A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F3A98: jal         0x8000DD58
    // 0x801F3A9C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801F3A9C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x801F3AA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F3AA4: jal         0x801F80F0
    // 0x801F3AA8: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_801F80F0_6234D0(rdram, ctx);
        goto after_2;
    // 0x801F3AA8: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_2:
    // 0x801F3AAC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F3AB0: jal         0x8003521C
    // 0x801F3AB4: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, 0X3634);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801F3AB4: addiu       $a0, $a0, 0x3634
    ctx->r4 = ADD32(ctx->r4, 0X3634);
    after_3:
    // 0x801F3AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F3ABC:
    // 0x801F3ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F3AC0: jr          $ra
    // 0x801F3AC4: nop

    TRACE_RETURN()
    return;
    // 0x801F3AC4: nop

;}
RECOMP_FUNC void func_801E2014_60D3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2014: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E2018: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E201C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x801E2020: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801E2024: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E2028: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E202C: lui         $a2, 0x800
    ctx->r6 = S32(0X800 << 16);
    // 0x801E2030: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E2034: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x801E2038: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E203C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2040: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E2044: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E2048: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E204C: addiu       $t9, $zero, 0x4AB
    ctx->r25 = ADD32(0, 0X4AB);
    // 0x801E2050: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E2054: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E2058: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E205C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E2060: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E2064: addiu       $a1, $a1, 0x2874
    ctx->r5 = ADD32(ctx->r5, 0X2874);
    // 0x801E2068: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801E206C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E2070: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E2074: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E2078: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E207C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E2080: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E2084: jal         0x800358E8
    // 0x801E2088: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E2088: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E208C: beq         $v0, $zero, L_801E20F8
    if (ctx->r2 == 0) {
        // 0x801E2090: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801E20F8;
    }
    // 0x801E2090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E2094: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801E2098: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801E209C: addiu       $t3, $t3, -0x4FB0
    ctx->r11 = ADD32(ctx->r11, -0X4FB0);
    // 0x801E20A0: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E20A4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801E20A8: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801E20AC: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E20B0: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E20B4: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E20B8: addiu       $t6, $t6, -0x54E0
    ctx->r14 = ADD32(ctx->r14, -0X54E0);
    // 0x801E20BC: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E20C0: lhu         $t0, 0x76($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X76);
    // 0x801E20C4: sw          $t0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r8;
    // 0x801E20C8: lhu         $t1, 0x7A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X7A);
    // 0x801E20CC: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x801E20D0: lhu         $t2, 0x7E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X7E);
    // 0x801E20D4: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x801E20D8: sw          $t4, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r12;
    // 0x801E20DC: sw          $t2, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r10;
    // 0x801E20E0: lbu         $t5, 0x5B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X5B);
    // 0x801E20E4: sw          $t6, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r14;
    // 0x801E20E8: sw          $t5, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r13;
    // 0x801E20EC: jal         0x801E18E4
    // 0x801E20F0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_801E18E4_60CCC4(rdram, ctx);
        goto after_1;
    // 0x801E20F0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x801E20F4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
L_801E20F8:
    // 0x801E20F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E20FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E2100: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x801E2104: jr          $ra
    // 0x801E2108: nop

    TRACE_RETURN()
    return;
    // 0x801E2108: nop

;}
RECOMP_FUNC void func_801CD2E8_5F86C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD2E8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801CD2EC: lw          $v0, -0x1130($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X1130);
    // 0x801CD2F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CD2F4: lbu         $t7, 0x64($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X64);
    // 0x801CD2F8: lw          $a0, 0x1E4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1E4);
    // 0x801CD2FC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801CD300: bne         $t7, $zero, L_801CD664
    if (ctx->r15 != 0) {
        // 0x801CD304: xori        $t6, $a0, 0x1
        ctx->r14 = ctx->r4 ^ 0X1;
            goto L_801CD664;
    }
    // 0x801CD304: xori        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 ^ 0X1;
    // 0x801CD308: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801CD30C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801CD310: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801CD314: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD318: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x801CD31C: ldc1        $f16, -0x3060($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X3060);
    // 0x801CD320: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x801CD324: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801CD328: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CD32C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CD330: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801CD334: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801CD338: lh          $t0, 0x307E($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X307E);
    // 0x801CD33C: lh          $t1, 0x3080($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X3080);
    // 0x801CD340: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801CD344: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x801CD348: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801CD34C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CD350: div.s       $f0, $f6, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801CD354: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801CD358: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x801CD35C: c.lt.d      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.d < ctx->f16.d;
    // 0x801CD360: nop

    // 0x801CD364: bc1f        L_801CD388
    if (!c1cs) {
        // 0x801CD368: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CD388;
    }
    // 0x801CD368: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD36C: ldc1        $f4, -0x3058($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X3058);
    // 0x801CD370: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x801CD374: nop

    // 0x801CD378: bc1fl       L_801CD38C
    if (!c1cs) {
        // 0x801CD37C: cvt.d.s     $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.d = CVT_D_S(ctx->f12.fl);
            goto L_801CD38C;
    }
    goto skip_0;
    // 0x801CD37C: cvt.d.s     $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.d = CVT_D_S(ctx->f12.fl);
    skip_0:
    // 0x801CD380: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CD384: nop

L_801CD388:
    // 0x801CD388: cvt.d.s     $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.d = CVT_D_S(ctx->f12.fl);
L_801CD38C:
    // 0x801CD38C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD390: c.lt.d      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.d < ctx->f16.d;
    // 0x801CD394: nop

    // 0x801CD398: bc1f        L_801CD3B8
    if (!c1cs) {
        // 0x801CD39C: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801CD3B8;
    }
    // 0x801CD39C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CD3A0: ldc1        $f6, -0x3050($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3050);
    // 0x801CD3A4: c.lt.d      $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f6.d < ctx->f14.d;
    // 0x801CD3A8: nop

    // 0x801CD3AC: bc1fl       L_801CD3BC
    if (!c1cs) {
        // 0x801CD3B0: lwc1        $f8, 0x10($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801CD3BC;
    }
    goto skip_1;
    // 0x801CD3B0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x801CD3B4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_801CD3B8:
    // 0x801CD3B8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
L_801CD3BC:
    // 0x801CD3BC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801CD3C0: lwc1        $f16, 0x74($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X74);
    // 0x801CD3C4: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x801CD3C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CD3CC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CD3D0: lui         $at, 0xC1E0
    ctx->r1 = S32(0XC1E0 << 16);
    // 0x801CD3D4: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801CD3D8: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801CD3DC: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CD3E0: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x801CD3E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CD3E8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x801CD3EC: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x801CD3F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD3F4: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    // 0x801CD3F8: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x801CD3FC: bc1f        L_801CD40C
    if (!c1cs) {
        // 0x801CD400: add.s       $f0, $f10, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
            goto L_801CD40C;
    }
    // 0x801CD400: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801CD404: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801CD408: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
L_801CD40C:
    // 0x801CD40C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801CD410: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD414: lui         $at, 0x4284
    ctx->r1 = S32(0X4284 << 16);
    // 0x801CD418: bc1fl       L_801CD428
    if (!c1cs) {
        // 0x801CD41C: lwc1        $f12, 0x78($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X78);
            goto L_801CD428;
    }
    goto skip_2;
    // 0x801CD41C: lwc1        $f12, 0x78($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X78);
    skip_2:
    // 0x801CD420: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801CD424: lwc1        $f12, 0x78($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X78);
L_801CD428:
    // 0x801CD428: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CD42C: add.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801CD430: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801CD434: nop

    // 0x801CD438: bc1fl       L_801CD44C
    if (!c1cs) {
        // 0x801CD43C: add.s       $f14, $f6, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f12.fl;
            goto L_801CD44C;
    }
    goto skip_3;
    // 0x801CD43C: add.s       $f14, $f6, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f12.fl;
    skip_3:
    // 0x801CD440: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x801CD444: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CD448: add.s       $f14, $f6, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f12.fl;
L_801CD44C:
    // 0x801CD44C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CD450: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CD454: lui         $at, 0xC284
    ctx->r1 = S32(0XC284 << 16);
    // 0x801CD458: bc1fl       L_801CD468
    if (!c1cs) {
        // 0x801CD45C: lwc1        $f14, 0x10($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801CD468;
    }
    goto skip_4;
    // 0x801CD45C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    skip_4:
    // 0x801CD460: swc1        $f14, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f14.u32l;
    // 0x801CD464: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
L_801CD468:
    // 0x801CD468: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x801CD46C: nop

    // 0x801CD470: bc1fl       L_801CD484
    if (!c1cs) {
        // 0x801CD474: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801CD484;
    }
    goto skip_5;
    // 0x801CD474: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_5:
    // 0x801CD478: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801CD47C: lwc1        $f14, 0x10($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CD480: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801CD484:
    // 0x801CD484: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x801CD488: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CD48C: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x801CD490: lui         $at, 0xC170
    ctx->r1 = S32(0XC170 << 16);
    // 0x801CD494: bc1fl       L_801CD4A4
    if (!c1cs) {
        // 0x801CD498: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_801CD4A4;
    }
    goto skip_6;
    // 0x801CD498: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_6:
    // 0x801CD49C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x801CD4A0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_801CD4A4:
    // 0x801CD4A4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801CD4A8: nop

    // 0x801CD4AC: bc1fl       L_801CD4C0
    if (!c1cs) {
        // 0x801CD4B0: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801CD4C0;
    }
    goto skip_7;
    // 0x801CD4B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_7:
    // 0x801CD4B4: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x801CD4B8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CD4BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801CD4C0:
    // 0x801CD4C0: lui         $at, 0x4480
    ctx->r1 = S32(0X4480 << 16);
    // 0x801CD4C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CD4C8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CD4CC: nop

    // 0x801CD4D0: bc1fl       L_801CD4E4
    if (!c1cs) {
        // 0x801CD4D4: lwc1        $f8, 0x10($v0)
        ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
            goto L_801CD4E4;
    }
    goto skip_8;
    // 0x801CD4D4: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    skip_8:
    // 0x801CD4D8: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x801CD4DC: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CD4E0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
L_801CD4E4:
    // 0x801CD4E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x801CD4E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CD4EC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801CD4F0: div.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801CD4F4: mul.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801CD4F8: div.s       $f14, $f4, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801CD4FC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801CD500: nop

    // 0x801CD504: bc1fl       L_801CD514
    if (!c1cs) {
        // 0x801CD508: c.le.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
            goto L_801CD514;
    }
    goto skip_9;
    // 0x801CD508: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    skip_9:
    // 0x801CD50C: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801CD510: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
L_801CD514:
    // 0x801CD514: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x801CD518: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CD51C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD520: bc1fl       L_801CD530
    if (!c1cs) {
        // 0x801CD524: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_801CD530;
    }
    goto skip_10;
    // 0x801CD524: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_10:
    // 0x801CD528: sub.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f16.fl;
    // 0x801CD52C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_801CD530:
    // 0x801CD530: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CD534: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x801CD538: bc1fl       L_801CD548
    if (!c1cs) {
        // 0x801CD53C: c.le.s      $f16, $f14
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
            goto L_801CD548;
    }
    goto skip_11;
    // 0x801CD53C: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    skip_11:
    // 0x801CD540: add.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x801CD544: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
L_801CD548:
    // 0x801CD548: nop

    // 0x801CD54C: bc1fl       L_801CD55C
    if (!c1cs) {
        // 0x801CD550: cfc1        $t2, $FpcCsr
        ctx->r10 = get_cop1_cs();
            goto L_801CD55C;
    }
    goto skip_12;
    // 0x801CD550: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    skip_12:
    // 0x801CD554: sub.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x801CD558: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
L_801CD55C:
    // 0x801CD55C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CD560: nop

    // 0x801CD564: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x801CD568: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CD56C: nop

    // 0x801CD570: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CD574: beql        $t3, $zero, L_801CD5C4
    if (ctx->r11 == 0) {
        // 0x801CD578: mfc1        $t3, $f10
        ctx->r11 = (int32_t)ctx->f10.u32l;
            goto L_801CD5C4;
    }
    goto skip_13;
    // 0x801CD578: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    skip_13:
    // 0x801CD57C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CD580: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801CD584: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801CD588: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801CD58C: nop

    // 0x801CD590: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x801CD594: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801CD598: nop

    // 0x801CD59C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801CD5A0: bne         $t3, $zero, L_801CD5B8
    if (ctx->r11 != 0) {
        // 0x801CD5A4: nop
    
            goto L_801CD5B8;
    }
    // 0x801CD5A4: nop

    // 0x801CD5A8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x801CD5AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD5B0: b           L_801CD5D0
    // 0x801CD5B4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_801CD5D0;
    // 0x801CD5B4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_801CD5B8:
    // 0x801CD5B8: b           L_801CD5D0
    // 0x801CD5BC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_801CD5D0;
    // 0x801CD5BC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x801CD5C0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
L_801CD5C4:
    // 0x801CD5C4: nop

    // 0x801CD5C8: bltz        $t3, L_801CD5B8
    if (SIGNED(ctx->r11) < 0) {
        // 0x801CD5CC: nop
    
            goto L_801CD5B8;
    }
    // 0x801CD5CC: nop

L_801CD5D0:
    // 0x801CD5D0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x801CD5D4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CD5D8: sh          $t3, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r11;
    // 0x801CD5DC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801CD5E0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x801CD5E4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CD5E8: nop

    // 0x801CD5EC: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x801CD5F0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CD5F4: nop

    // 0x801CD5F8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CD5FC: beql        $t5, $zero, L_801CD64C
    if (ctx->r13 == 0) {
        // 0x801CD600: mfc1        $t5, $f4
        ctx->r13 = (int32_t)ctx->f4.u32l;
            goto L_801CD64C;
    }
    goto skip_14;
    // 0x801CD600: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    skip_14:
    // 0x801CD604: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801CD608: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801CD60C: sub.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x801CD610: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x801CD614: nop

    // 0x801CD618: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801CD61C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x801CD620: nop

    // 0x801CD624: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x801CD628: bne         $t5, $zero, L_801CD640
    if (ctx->r13 != 0) {
        // 0x801CD62C: nop
    
            goto L_801CD640;
    }
    // 0x801CD62C: nop

    // 0x801CD630: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x801CD634: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CD638: b           L_801CD658
    // 0x801CD63C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_801CD658;
    // 0x801CD63C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_801CD640:
    // 0x801CD640: b           L_801CD658
    // 0x801CD644: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_801CD658;
    // 0x801CD644: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x801CD648: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
L_801CD64C:
    // 0x801CD64C: nop

    // 0x801CD650: bltz        $t5, L_801CD640
    if (SIGNED(ctx->r13) < 0) {
        // 0x801CD654: nop
    
            goto L_801CD640;
    }
    // 0x801CD654: nop

L_801CD658:
    // 0x801CD658: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x801CD65C: jr          $ra
    // 0x801CD660: sh          $t5, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x801CD660: sh          $t5, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r13;
L_801CD664:
    // 0x801CD664: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801CD668: addiu       $t6, $zero, 0x200
    ctx->r14 = ADD32(0, 0X200);
    // 0x801CD66C: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x801CD670: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x801CD674: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x801CD678: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801CD67C: jr          $ra
    // 0x801CD680: nop

    TRACE_RETURN()
    return;
    // 0x801CD680: nop

;}
RECOMP_FUNC void func_801D0BD0_5FBFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0BD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D0BD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D0BDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D0BE0: jal         0x801D2CFC
    // 0x801D0BE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801D2CFC_5FE0DC(rdram, ctx);
        goto after_0;
    // 0x801D0BE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D0BE8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801D0BEC: lw          $s0, -0x1130($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1130);
    // 0x801D0BF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D0BF4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0BF8: addiu       $a0, $a0, 0x1144
    ctx->r4 = ADD32(ctx->r4, 0X1144);
    // 0x801D0BFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D0C00: addiu       $s0, $s0, 0x178
    ctx->r16 = ADD32(ctx->r16, 0X178);
    // 0x801D0C04: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x801D0C08: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x801D0C0C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x801D0C10: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x801D0C14: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x801D0C18: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x801D0C1C: jal         0x80034DD8
    // 0x801D0C20: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801D0C20: swc1        $f0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f0.u32l;
    after_1:
    // 0x801D0C24: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0C28: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x801D0C2C: addiu       $a0, $a0, 0xF90
    ctx->r4 = ADD32(ctx->r4, 0XF90);
    // 0x801D0C30: jal         0x80034DD8
    // 0x801D0C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_2;
    // 0x801D0C34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x801D0C38: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0C3C: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x801D0C40: addiu       $a0, $a0, 0x11D4
    ctx->r4 = ADD32(ctx->r4, 0X11D4);
    // 0x801D0C44: jal         0x80034DD8
    // 0x801D0C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_3;
    // 0x801D0C48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x801D0C4C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D0C50: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x801D0C54: jal         0x8003521C
    // 0x801D0C58: addiu       $a0, $a0, 0xC70
    ctx->r4 = ADD32(ctx->r4, 0XC70);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801D0C58: addiu       $a0, $a0, 0xC70
    ctx->r4 = ADD32(ctx->r4, 0XC70);
    after_4:
    // 0x801D0C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0C60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D0C64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0C68: jr          $ra
    // 0x801D0C6C: nop

    TRACE_RETURN()
    return;
    // 0x801D0C6C: nop

;}
RECOMP_FUNC void func_801D725C_60263C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D725C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801D7260: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D7264: nop

    // 0x801D7268: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x801D726C: nop

    // 0x801D7270: bc1fl       L_801D7284
    if (!c1cs) {
        // 0x801D7274: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_801D7284;
    }
    goto skip_0;
    // 0x801D7274: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_0:
    // 0x801D7278: b           L_801D7284
    // 0x801D727C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
        goto L_801D7284;
    // 0x801D727C: neg.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = -ctx->f12.fl;
    // 0x801D7280: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_801D7284:
    // 0x801D7284: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D7288: neg.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = -ctx->f0.fl;
    // 0x801D728C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x801D7290: nop

    // 0x801D7294: bc1fl       L_801D72A8
    if (!c1cs) {
        // 0x801D7298: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_801D72A8;
    }
    goto skip_1;
    // 0x801D7298: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_1:
    // 0x801D729C: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x801D72A0: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D72A4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_801D72A8:
    // 0x801D72A8: nop

    // 0x801D72AC: bc1f        L_801D72B8
    if (!c1cs) {
        // 0x801D72B0: nop
    
            goto L_801D72B8;
    }
    // 0x801D72B0: nop

    // 0x801D72B4: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_801D72B8:
    // 0x801D72B8: jr          $ra
    // 0x801D72BC: nop

    TRACE_RETURN()
    return;
    // 0x801D72BC: nop

;}
RECOMP_FUNC void func_801D3B18_5FEEF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3B18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D3B1C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D3B20: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801D3B24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D3B28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D3B2C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x801D3B30: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x801D3B34: bgez        $t6, L_801D3B4C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D3B38: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_801D3B4C;
    }
    // 0x801D3B38: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D3B3C: negu        $t1, $t6
    ctx->r9 = SUB32(0, ctx->r14);
    // 0x801D3B40: andi        $t7, $t1, 0xFFFF
    ctx->r15 = ctx->r9 & 0XFFFF;
    // 0x801D3B44: b           L_801D3B50
    // 0x801D3B48: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
        goto L_801D3B50;
    // 0x801D3B48: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_801D3B4C:
    // 0x801D3B4C: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
L_801D3B50:
    // 0x801D3B50: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D3B54: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801D3B58: sb          $t2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r10;
    // 0x801D3B5C: sh          $t1, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r9;
    // 0x801D3B60: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801D3B64: jal         0x8000E9F4
    // 0x801D3B68: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_0;
    // 0x801D3B68: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    after_0:
    // 0x801D3B6C: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D3B70: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D3B74: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D3B78: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x801D3B7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D3B80: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x801D3B84: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x801D3B88: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801D3B8C: jal         0x8000EABC
    // 0x801D3B90: nop

    func_8000EABC_F6BC(rdram, ctx);
        goto after_1;
    // 0x801D3B90: nop

    after_1:
    // 0x801D3B94: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x801D3B98: lhu         $a3, 0x16($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X16);
    // 0x801D3B9C: lhu         $t3, 0x14($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X14);
    // 0x801D3BA0: lhu         $t1, 0x3A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X3A);
    // 0x801D3BA4: subu        $v1, $t0, $a3
    ctx->r3 = SUB32(ctx->r8, ctx->r7);
    // 0x801D3BA8: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x801D3BAC: subu        $a2, $v0, $t3
    ctx->r6 = SUB32(ctx->r2, ctx->r11);
    // 0x801D3BB0: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x801D3BB4: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x801D3BB8: lbu         $t2, 0x23($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X23);
    // 0x801D3BBC: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x801D3BC0: bgez        $t9, L_801D3BD4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801D3BC4: sra         $a2, $t4, 16
        ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
            goto L_801D3BD4;
    }
    // 0x801D3BC4: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801D3BC8: addiu       $v1, $t9, 0x400
    ctx->r3 = ADD32(ctx->r25, 0X400);
    // 0x801D3BCC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801D3BD0: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_801D3BD4:
    // 0x801D3BD4: bgez        $a2, L_801D3BE8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D3BD8: slti        $at, $v1, 0x400
        ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
            goto L_801D3BE8;
    }
    // 0x801D3BD8: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801D3BDC: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x801D3BE0: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x801D3BE4: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
L_801D3BE8:
    // 0x801D3BE8: bnel        $at, $zero, L_801D3C00
    if (ctx->r1 != 0) {
        // 0x801D3BEC: slti        $at, $a2, 0x400
        ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
            goto L_801D3C00;
    }
    goto skip_0;
    // 0x801D3BEC: slti        $at, $a2, 0x400
    ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
    skip_0:
    // 0x801D3BF0: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x801D3BF4: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x801D3BF8: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801D3BFC: slti        $at, $a2, 0x400
    ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
L_801D3C00:
    // 0x801D3C00: bne         $at, $zero, L_801D3C14
    if (ctx->r1 != 0) {
        // 0x801D3C04: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_801D3C14;
    }
    // 0x801D3C04: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801D3C08: addiu       $a2, $a2, -0x400
    ctx->r6 = ADD32(ctx->r6, -0X400);
    // 0x801D3C0C: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x801D3C10: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
L_801D3C14:
    // 0x801D3C14: bgez        $v1, L_801D3C24
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D3C18: nop
    
            goto L_801D3C24;
    }
    // 0x801D3C18: nop

    // 0x801D3C1C: b           L_801D3C24
    // 0x801D3C20: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
        goto L_801D3C24;
    // 0x801D3C20: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
L_801D3C24:
    // 0x801D3C24: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801D3C28: beq         $at, $zero, L_801D3C3C
    if (ctx->r1 == 0) {
        // 0x801D3C2C: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_801D3C3C;
    }
    // 0x801D3C2C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x801D3C30: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x801D3C34: b           L_801D3C60
    // 0x801D3C38: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_801D3C60;
    // 0x801D3C38: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_801D3C3C:
    // 0x801D3C3C: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801D3C40: beq         $at, $zero, L_801D3C58
    if (ctx->r1 == 0) {
        // 0x801D3C44: subu        $t9, $a3, $a1
        ctx->r25 = SUB32(ctx->r7, ctx->r5);
            goto L_801D3C58;
    }
    // 0x801D3C44: subu        $t9, $a3, $a1
    ctx->r25 = SUB32(ctx->r7, ctx->r5);
    // 0x801D3C48: addu        $t7, $a3, $a1
    ctx->r15 = ADD32(ctx->r7, ctx->r5);
    // 0x801D3C4C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x801D3C50: b           L_801D3C60
    // 0x801D3C54: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
        goto L_801D3C60;
    // 0x801D3C54: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
L_801D3C58:
    // 0x801D3C58: andi        $t3, $t9, 0x3FF
    ctx->r11 = ctx->r25 & 0X3FF;
    // 0x801D3C5C: sh          $t3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r11;
L_801D3C60:
    // 0x801D3C60: bgez        $a2, L_801D3C70
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D3C64: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801D3C70;
    }
    // 0x801D3C64: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801D3C68: b           L_801D3C70
    // 0x801D3C6C: negu        $a0, $a2
    ctx->r4 = SUB32(0, ctx->r6);
        goto L_801D3C70;
    // 0x801D3C6C: negu        $a0, $a2
    ctx->r4 = SUB32(0, ctx->r6);
L_801D3C70:
    // 0x801D3C70: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x801D3C74: beql        $at, $zero, L_801D3C94
    if (ctx->r1 == 0) {
        // 0x801D3C78: slti        $at, $a2, 0x200
        ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
            goto L_801D3C94;
    }
    goto skip_1;
    // 0x801D3C78: slti        $at, $a2, 0x200
    ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
    skip_1:
    // 0x801D3C7C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x801D3C80: andi        $t4, $t2, 0xFF
    ctx->r12 = ctx->r10 & 0XFF;
    // 0x801D3C84: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x801D3C88: b           L_801D3CC0
    // 0x801D3C8C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
        goto L_801D3CC0;
    // 0x801D3C8C: or          $t2, $t4, $zero
    ctx->r10 = ctx->r12 | 0;
    // 0x801D3C90: slti        $at, $a2, 0x200
    ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
L_801D3C94:
    // 0x801D3C94: beql        $at, $zero, L_801D3CB4
    if (ctx->r1 == 0) {
        // 0x801D3C98: lhu         $t8, 0x14($s0)
        ctx->r24 = MEM_HU(ctx->r16, 0X14);
            goto L_801D3CB4;
    }
    goto skip_2;
    // 0x801D3C98: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
    skip_2:
    // 0x801D3C9C: lhu         $t5, 0x14($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X14);
    // 0x801D3CA0: addu        $t6, $t5, $a1
    ctx->r14 = ADD32(ctx->r13, ctx->r5);
    // 0x801D3CA4: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x801D3CA8: b           L_801D3CC0
    // 0x801D3CAC: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
        goto L_801D3CC0;
    // 0x801D3CAC: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x801D3CB0: lhu         $t8, 0x14($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X14);
L_801D3CB4:
    // 0x801D3CB4: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x801D3CB8: andi        $t3, $t9, 0x3FF
    ctx->r11 = ctx->r25 & 0X3FF;
    // 0x801D3CBC: sh          $t3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r11;
L_801D3CC0:
    // 0x801D3CC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D3CC4: bne         $t2, $at, L_801D3CD4
    if (ctx->r10 != ctx->r1) {
        // 0x801D3CC8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D3CD4;
    }
    // 0x801D3CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D3CCC: b           L_801D3CD8
    // 0x801D3CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D3CD8;
    // 0x801D3CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D3CD4:
    // 0x801D3CD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D3CD8:
    // 0x801D3CD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D3CDC: jr          $ra
    // 0x801D3CE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801D3CE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802043E4_62F7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802043E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802043E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802043EC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x802043F0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x802043F4: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x802043F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802043FC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x80204400: beq         $v0, $zero, L_80204460
    if (ctx->r2 == 0) {
        // 0x80204404: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_80204460;
    }
    // 0x80204404: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80204408: andi        $t8, $t6, 0x2
    ctx->r24 = ctx->r14 & 0X2;
    // 0x8020440C: beq         $t8, $zero, L_80204424
    if (ctx->r24 == 0) {
        // 0x80204410: sw          $t6, 0xB0($a0)
        MEM_W(0XB0, ctx->r4) = ctx->r14;
            goto L_80204424;
    }
    // 0x80204410: sw          $t6, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r14;
    // 0x80204414: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x80204418: addiu       $t9, $t9, -0x5198
    ctx->r25 = ADD32(ctx->r25, -0X5198);
    // 0x8020441C: b           L_80204430
    // 0x80204420: sw          $t9, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r25;
        goto L_80204430;
    // 0x80204420: sw          $t9, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r25;
L_80204424:
    // 0x80204424: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x80204428: addiu       $t0, $t0, -0x5138
    ctx->r8 = ADD32(ctx->r8, -0X5138);
    // 0x8020442C: sw          $t0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r8;
L_80204430:
    // 0x80204430: lw          $t1, 0xB0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XB0);
    // 0x80204434: slti        $at, $t1, 0x27
    ctx->r1 = SIGNED(ctx->r9) < 0X27 ? 1 : 0;
    // 0x80204438: bne         $at, $zero, L_80204450
    if (ctx->r1 != 0) {
        // 0x8020443C: nop
    
            goto L_80204450;
    }
    // 0x8020443C: nop

    // 0x80204440: jal         0x80204618
    // 0x80204444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80204618_62F9F8(rdram, ctx);
        goto after_0;
    // 0x80204444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80204448: b           L_80204478
    // 0x8020444C: nop

        goto L_80204478;
    // 0x8020444C: nop

L_80204450:
    // 0x80204450: jal         0x8020460C
    // 0x80204454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020460C_62F9EC(rdram, ctx);
        goto after_1;
    // 0x80204454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80204458: b           L_80204478
    // 0x8020445C: nop

        goto L_80204478;
    // 0x8020445C: nop

L_80204460:
    // 0x80204460: jal         0x8020460C
    // 0x80204464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020460C_62F9EC(rdram, ctx);
        goto after_2;
    // 0x80204464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80204468: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x8020446C: sw          $zero, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = 0;
    // 0x80204470: addiu       $t2, $t2, -0x5198
    ctx->r10 = ADD32(ctx->r10, -0X5198);
    // 0x80204474: sw          $t2, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r10;
L_80204478:
    // 0x80204478: jal         0x8020451C
    // 0x8020447C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8020451C_62F8FC(rdram, ctx);
        goto after_3;
    // 0x8020447C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80204480: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80204484: bne         $v0, $at, L_80204498
    if (ctx->r2 != ctx->r1) {
        // 0x80204488: lui         $t4, 0x8021
        ctx->r12 = S32(0X8021 << 16);
            goto L_80204498;
    }
    // 0x80204488: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x8020448C: lw          $t4, -0x10C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X10C0);
    // 0x80204490: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80204494: sb          $t3, 0x4($t4)
    MEM_B(0X4, ctx->r12) = ctx->r11;
L_80204498:
    // 0x80204498: lw          $t5, 0xAC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XAC);
    // 0x8020449C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802044A0: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x802044A4: bne         $t5, $zero, L_80204508
    if (ctx->r13 != 0) {
        // 0x802044A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80204508;
    }
    // 0x802044A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802044AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802044B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802044B4: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802044B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802044BC: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802044C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802044C4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x802044C8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802044CC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x802044D0: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802044D4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x802044D8: jal         0x801E1958
    // 0x802044DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801E1958_60CD38(rdram, ctx);
        goto after_4;
    // 0x802044DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x802044E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802044E4: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x802044E8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x802044EC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x802044F0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x802044F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x802044F8: jal         0x8000F3D8
    // 0x802044FC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_5;
    // 0x802044FC: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_5:
    // 0x80204500: b           L_80204508
    // 0x80204504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80204508;
    // 0x80204504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80204508:
    // 0x80204508: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8020450C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80204510: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80204514: jr          $ra
    // 0x80204518: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80204518: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801DC068_607448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC068: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801DC06C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DC070: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801DC074: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DC078: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x801DC07C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DC080: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x801DC084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801DC088: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801DC08C: lui         $t6, 0x801
    ctx->r14 = S32(0X801 << 16);
    // 0x801DC090: addiu       $t6, $t6, -0x5580
    ctx->r14 = ADD32(ctx->r14, -0X5580);
    // 0x801DC094: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x801DC098: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DC09C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DC0A0: lw          $t8, 0x2C($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X2C);
    // 0x801DC0A4: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x801DC0A8: beq         $t7, $t8, L_801DC0B8
    if (ctx->r15 == ctx->r24) {
        // 0x801DC0AC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801DC0B8;
    }
    // 0x801DC0AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801DC0B0: b           L_801DC184
    // 0x801DC0B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DC184;
    // 0x801DC0B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC0B8:
    // 0x801DC0B8: lw          $t9, 0x8C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8C);
    // 0x801DC0BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DC0C0: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x801DC0C4: bgtz        $t0, L_801DC0DC
    if (SIGNED(ctx->r8) > 0) {
        // 0x801DC0C8: sw          $t0, 0x8C($a1)
        MEM_W(0X8C, ctx->r5) = ctx->r8;
            goto L_801DC0DC;
    }
    // 0x801DC0C8: sw          $t0, 0x8C($a1)
    MEM_W(0X8C, ctx->r5) = ctx->r8;
    // 0x801DC0CC: jal         0x80036158
    // 0x801DC0D0: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    func_80036158_36D58(rdram, ctx);
        goto after_0;
    // 0x801DC0D0: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DC0D4: b           L_801DC184
    // 0x801DC0D8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
        goto L_801DC184;
    // 0x801DC0D8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_801DC0DC:
    // 0x801DC0DC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DC0E0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801DC0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DC0E8: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x801DC0EC: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801DC0F0: addiu       $t2, $sp, 0x3C
    ctx->r10 = ADD32(ctx->r29, 0X3C);
    // 0x801DC0F4: addiu       $t3, $sp, 0x38
    ctx->r11 = ADD32(ctx->r29, 0X38);
    // 0x801DC0F8: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x801DC0FC: lwc1        $f18, 0x10($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801DC100: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x801DC104: mul.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801DC108: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x801DC10C: lw          $a3, 0x88($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X88);
    // 0x801DC110: lw          $a2, 0x84($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X84);
    // 0x801DC114: lwc1        $f14, 0x80($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X80);
    // 0x801DC118: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x801DC11C: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x801DC120: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801DC124: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DC128: jal         0x8000E4E4
    // 0x801DC12C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_8000E4E4_F0E4(rdram, ctx);
        goto after_1;
    // 0x801DC12C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x801DC130: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x801DC134: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801DC138: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801DC13C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DC140: lwc1        $f16, 0xC($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801DC144: lw          $t5, 0x8C($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X8C);
    // 0x801DC148: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DC14C: lwc1        $f6, 0x10($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801DC150: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DC154: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801DC158: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801DC15C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DC160: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x801DC164: nop

    // 0x801DC168: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DC16C: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x801DC170: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801DC174: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DC178: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x801DC17C: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x801DC180: swc1        $f4, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f4.u32l;
L_801DC184:
    // 0x801DC184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801DC188: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801DC18C: jr          $ra
    // 0x801DC190: nop

    TRACE_RETURN()
    return;
    // 0x801DC190: nop

;}
RECOMP_FUNC void func_80202A54_62DE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80202A54: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80202A58: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80202A5C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80202A60: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80202A64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80202A68: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80202A6C: lwc1        $f18, 0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80202A70: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80202A74: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80202A78: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80202A7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80202A80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80202A84: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80202A88: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x80202A8C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    // 0x80202A90: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80202A94: jr          $ra
    // 0x80202A98: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    TRACE_RETURN()
    return;
    // 0x80202A98: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_801EF2E0_61A6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF2E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801EF2E4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801EF2E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EF2EC: lwc1        $f0, -0x1AD4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1AD4);
    // 0x801EF2F0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801EF2F4: addiu       $a1, $a1, 0xE28
    ctx->r5 = ADD32(ctx->r5, 0XE28);
    // 0x801EF2F8: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801EF2FC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EF300: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x801EF304: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801EF308: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x801EF30C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EF310: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EF314: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801EF318: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EF31C: addiu       $t6, $zero, 0x4B2
    ctx->r14 = ADD32(0, 0X4B2);
    // 0x801EF320: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801EF324: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x801EF328: addiu       $a2, $a2, -0x5430
    ctx->r6 = ADD32(ctx->r6, -0X5430);
    // 0x801EF32C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EF330: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801EF334: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801EF338: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EF33C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801EF340: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801EF344: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801EF348: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801EF34C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801EF350: jal         0x8000DBF0
    // 0x801EF354: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801EF354: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801EF358: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x801EF35C: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801EF360: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801EF364: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801EF368: addiu       $t8, $zero, 0x5A
    ctx->r24 = ADD32(0, 0X5A);
    // 0x801EF36C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801EF370: sw          $v0, 0x1E0($t7)
    MEM_W(0X1E0, ctx->r15) = ctx->r2;
    // 0x801EF374: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x801EF378: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x801EF37C: sh          $t8, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r24;
    // 0x801EF380: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x801EF384: sh          $t0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r8;
    // 0x801EF388: sh          $t1, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r9;
    // 0x801EF38C: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801EF390: jal         0x801F7074
    // 0x801EF394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7074_622454(rdram, ctx);
        goto after_1;
    // 0x801EF394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801EF398: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x801EF39C: sw          $zero, 0x94($s0)
    MEM_W(0X94, ctx->r16) = 0;
    // 0x801EF3A0: sw          $zero, 0x98($s0)
    MEM_W(0X98, ctx->r16) = 0;
    // 0x801EF3A4: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x801EF3A8: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x801EF3AC: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801EF3B0: lw          $t2, -0x3A38($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3A38);
    // 0x801EF3B4: lui         $t3, 0x4
    ctx->r11 = S32(0X4 << 16);
    // 0x801EF3B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EF3BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801EF3C0: lhu         $t3, -0x51EA($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X51EA);
    // 0x801EF3C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EF3C8: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x801EF3CC: bne         $t3, $at, L_801EF3DC
    if (ctx->r11 != ctx->r1) {
        // 0x801EF3D0: addiu       $a1, $a1, -0x4D88
        ctx->r5 = ADD32(ctx->r5, -0X4D88);
            goto L_801EF3DC;
    }
    // 0x801EF3D0: addiu       $a1, $a1, -0x4D88
    ctx->r5 = ADD32(ctx->r5, -0X4D88);
    // 0x801EF3D4: b           L_801EF3E0
    // 0x801EF3D8: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
        goto L_801EF3E0;
    // 0x801EF3D8: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_801EF3DC:
    // 0x801EF3DC: sw          $t4, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r12;
L_801EF3E0:
    // 0x801EF3E0: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x801EF3E4: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801EF3E8: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801EF3EC: sw          $zero, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = 0;
    // 0x801EF3F0: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x801EF3F4: jal         0x801D2EE4
    // 0x801EF3F8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801EF3F8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_2:
    // 0x801EF3FC: jal         0x801F7258
    // 0x801EF400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F7258_622638(rdram, ctx);
        goto after_3;
    // 0x801EF400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801EF404: jal         0x801F701C
    // 0x801EF408: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_4;
    // 0x801EF408: nop

    after_4:
    // 0x801EF40C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF410: jal         0x8003521C
    // 0x801EF414: addiu       $a0, $a0, -0xBD4
    ctx->r4 = ADD32(ctx->r4, -0XBD4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801EF414: addiu       $a0, $a0, -0xBD4
    ctx->r4 = ADD32(ctx->r4, -0XBD4);
    after_5:
    // 0x801EF418: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EF41C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801EF420: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801EF424: jr          $ra
    // 0x801EF428: nop

    TRACE_RETURN()
    return;
    // 0x801EF428: nop

;}
RECOMP_FUNC void func_801F00C4_61B4A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F00C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F00C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F00CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F00D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F00D4: jal         0x801F7074
    // 0x801F00D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F00D8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F00DC: jal         0x801F701C
    // 0x801F00E0: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_1;
    // 0x801F00E0: nop

    after_1:
    // 0x801F00E4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F00E8: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x801F00EC: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x801F00F0: addiu       $a1, $a1, -0x4D88
    ctx->r5 = ADD32(ctx->r5, -0X4D88);
    // 0x801F00F4: jal         0x801D31CC
    // 0x801F00F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801F00F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F00FC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801F0100: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801F0104: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801F0108: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801F010C: lui         $a3, 0xC3FA
    ctx->r7 = S32(0XC3FA << 16);
    // 0x801F0110: jal         0x8000E39C
    // 0x801F0114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801F0114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801F0118: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F011C: jal         0x8003521C
    // 0x801F0120: addiu       $a0, $a0, 0x138
    ctx->r4 = ADD32(ctx->r4, 0X138);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F0120: addiu       $a0, $a0, 0x138
    ctx->r4 = ADD32(ctx->r4, 0X138);
    after_4:
    // 0x801F0124: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F0128: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F012C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F0130: jr          $ra
    // 0x801F0134: nop

    TRACE_RETURN()
    return;
    // 0x801F0134: nop

;}
RECOMP_FUNC void func_801FD724_628B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FD724: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801FD728: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801FD72C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FD730: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801FD734: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801FD738: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801FD73C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FD740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FD744: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FD748: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801FD74C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FD750: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x801FD754: jal         0x801D6330
    // 0x801FD758: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    func_801D6330_601710(rdram, ctx);
        goto after_0;
    // 0x801FD758: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    after_0:
    // 0x801FD75C: beq         $v0, $zero, L_801FD7D4
    if (ctx->r2 == 0) {
        // 0x801FD760: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_801FD7D4;
    }
    // 0x801FD760: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD764: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FD768: jal         0x801D3118
    // 0x801FD76C: lui         $a2, 0x41B0
    ctx->r6 = S32(0X41B0 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_1;
    // 0x801FD76C: lui         $a2, 0x41B0
    ctx->r6 = S32(0X41B0 << 16);
    after_1:
    // 0x801FD770: beq         $v0, $zero, L_801FD78C
    if (ctx->r2 == 0) {
        // 0x801FD774: addiu       $a0, $zero, 0x247
        ctx->r4 = ADD32(0, 0X247);
            goto L_801FD78C;
    }
    // 0x801FD774: addiu       $a0, $zero, 0x247
    ctx->r4 = ADD32(0, 0X247);
    // 0x801FD778: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FD77C: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801FD780: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801FD784: jal         0x8000F240
    // 0x801FD788: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F240_FE40(rdram, ctx);
        goto after_2;
    // 0x801FD788: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_2:
L_801FD78C:
    // 0x801FD78C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801FD790: jal         0x801D31F0
    // 0x801FD794: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_3;
    // 0x801FD794: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_3:
    // 0x801FD798: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FD79C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801FD7A0: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x801FD7A4: nop

    // 0x801FD7A8: bc1f        L_801FD7D4
    if (!c1cs) {
        // 0x801FD7AC: nop
    
            goto L_801FD7D4;
    }
    // 0x801FD7AC: nop

    // 0x801FD7B0: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801FD7B4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801FD7B8: jal         0x801FFDFC
    // 0x801FD7BC: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    func_801FFDFC_62B1DC(rdram, ctx);
        goto after_4;
    // 0x801FD7BC: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    after_4:
    // 0x801FD7C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FD7C4: jal         0x8003521C
    // 0x801FD7C8: addiu       $a0, $a0, -0x27C0
    ctx->r4 = ADD32(ctx->r4, -0X27C0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FD7C8: addiu       $a0, $a0, -0x27C0
    ctx->r4 = ADD32(ctx->r4, -0X27C0);
    after_5:
    // 0x801FD7CC: b           L_801FD830
    // 0x801FD7D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801FD830;
    // 0x801FD7D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FD7D4:
    // 0x801FD7D4: jal         0x801D365C
    // 0x801FD7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_6;
    // 0x801FD7D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801FD7DC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FD7E0: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FD7E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801FD7E8: lw          $t9, 0x1CC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1CC);
    // 0x801FD7EC: bne         $v0, $t9, L_801FD824
    if (ctx->r2 != ctx->r25) {
        // 0x801FD7F0: nop
    
            goto L_801FD824;
    }
    // 0x801FD7F0: nop

    // 0x801FD7F4: lbu         $t1, 0xE($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XE);
    // 0x801FD7F8: bne         $t1, $zero, L_801FD824
    if (ctx->r9 != 0) {
        // 0x801FD7FC: nop
    
            goto L_801FD824;
    }
    // 0x801FD7FC: nop

    // 0x801FD800: lbu         $t2, 0x2C5($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801FD804: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801FD808: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    // 0x801FD80C: bne         $t2, $zero, L_801FD824
    if (ctx->r10 != 0) {
        // 0x801FD810: nop
    
            goto L_801FD824;
    }
    // 0x801FD810: nop

    // 0x801FD814: sb          $t3, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r11;
    // 0x801FD818: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x801FD81C: jal         0x80038BC8
    // 0x801FD820: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801FD820: sb          $zero, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = 0;
    after_7:
L_801FD824:
    // 0x801FD824: jal         0x801D36C4
    // 0x801FD828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36C4_5FEAA4(rdram, ctx);
        goto after_8;
    // 0x801FD828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801FD82C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801FD830:
    // 0x801FD830: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FD834: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FD838: jr          $ra
    // 0x801FD83C: nop

    TRACE_RETURN()
    return;
    // 0x801FD83C: nop

;}
RECOMP_FUNC void func_801D614C_60152C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D614C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6150: beq         $v0, $zero, L_801D6194
    if (ctx->r2 == 0) {
        // 0x801D6154: nop
    
            goto L_801D6194;
    }
    // 0x801D6154: nop

    // 0x801D6158: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_801D615C:
    // 0x801D615C: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D6160: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D6164: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6168: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D616C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801D6170: lwc1        $f16, 0x74($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D6174: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D6178: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801D617C: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6180: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6184: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x801D6188: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801D618C: bnel        $v0, $zero, L_801D615C
    if (ctx->r2 != 0) {
        // 0x801D6190: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801D615C;
    }
    goto skip_0;
    // 0x801D6190: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
L_801D6194:
    // 0x801D6194: jr          $ra
    // 0x801D6198: nop

    TRACE_RETURN()
    return;
    // 0x801D6198: nop

;}
RECOMP_FUNC void func_801D6124_601504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D6124: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D6128: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D612C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D6130: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D6134: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D6138: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801D613C: lwc1        $f16, 0x78($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D6140: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D6144: jr          $ra
    // 0x801D6148: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    TRACE_RETURN()
    return;
    // 0x801D6148: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
;}
