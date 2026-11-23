#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80003678_4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003678: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000367C: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80003680: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80003684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003688: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x8000368C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003690: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80003694: lbu         $t6, -0x522A($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X522A);
    // 0x80003698: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000369C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800036A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800036A4: sb          $t7, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r15;
    // 0x800036A8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800036AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800036B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800036B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800036B8: jal         0x80003528
    // 0x800036BC: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    func_80003528_4128(rdram, ctx);
        goto after_0;
    // 0x800036BC: sb          $zero, -0x5229($at)
    MEM_B(-0X5229, ctx->r1) = 0;
    after_0:
    // 0x800036C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800036C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800036C8: jr          $ra
    // 0x800036CC: nop

    TRACE_RETURN()
    return;
    // 0x800036CC: nop

;}
RECOMP_FUNC void func_80002C7C_387C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80002C7C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002C80: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002C84: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80002C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002C8C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80002C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002C94: addu        $a0, $v0, $at
    ctx->r4 = ADD32(ctx->r2, ctx->r1);
    // 0x80002C98: lbu         $v1, 0x2DD6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2DD6);
    // 0x80002C9C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80002CA0: beq         $v1, $zero, L_80002CC8
    if (ctx->r3 == 0) {
        // 0x80002CA4: nop
    
            goto L_80002CC8;
    }
    // 0x80002CA4: nop

    // 0x80002CA8: beq         $v1, $at, L_80002D1C
    if (ctx->r3 == ctx->r1) {
        // 0x80002CAC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80002D1C;
    }
    // 0x80002CAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80002CB0: beq         $v1, $at, L_80002D58
    if (ctx->r3 == ctx->r1) {
        // 0x80002CB4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80002D58;
    }
    // 0x80002CB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80002CB8: beq         $v1, $at, L_80002D68
    if (ctx->r3 == ctx->r1) {
        // 0x80002CBC: lui         $t6, 0x8005
        ctx->r14 = S32(0X8005 << 16);
            goto L_80002D68;
    }
    // 0x80002CBC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80002CC0: b           L_80002D88
    // 0x80002CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002D88;
    // 0x80002CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002CC8:
    // 0x80002CC8: jal         0x8000383C
    // 0x80002CCC: nop

    func_8000383C_443C(rdram, ctx);
        goto after_0;
    // 0x80002CCC: nop

    after_0:
    // 0x80002CD0: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80002CD4: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80002CD8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002CDC: addiu       $t6, $zero, 0x231
    ctx->r14 = ADD32(0, 0X231);
    // 0x80002CE0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80002CE4: jal         0x8000B3E4
    // 0x80002CE8: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    func_8000B3E4_BFE4(rdram, ctx);
        goto after_1;
    // 0x80002CE8: sh          $t6, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r14;
    after_1:
    // 0x80002CEC: jal         0x80020440
    // 0x80002CF0: nop

    func_80020440_21040(rdram, ctx);
        goto after_2;
    // 0x80002CF0: nop

    after_2:
    // 0x80002CF4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80002CF8: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80002CFC: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x80002D00: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002D04: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80002D08: lbu         $t8, -0x522A($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X522A);
    // 0x80002D0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002D10: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80002D14: b           L_80002D84
    // 0x80002D18: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
        goto L_80002D84;
    // 0x80002D18: sb          $t9, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r25;
L_80002D1C:
    // 0x80002D1C: lhu         $t0, 0x3094($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X3094);
    // 0x80002D20: lhu         $t1, 0x307C($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X307C);
    // 0x80002D24: or          $t2, $t0, $t1
    ctx->r10 = ctx->r8 | ctx->r9;
    // 0x80002D28: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x80002D2C: beq         $t3, $zero, L_80002D48
    if (ctx->r11 == 0) {
        // 0x80002D30: nop
    
            goto L_80002D48;
    }
    // 0x80002D30: nop

    // 0x80002D34: lbu         $t4, 0x2DD5($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X2DD5);
    // 0x80002D38: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80002D3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80002D40: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80002D44: sb          $t5, -0x522B($at)
    MEM_B(-0X522B, ctx->r1) = ctx->r13;
L_80002D48:
    // 0x80002D48: jal         0x800038E4
    // 0x80002D4C: nop

    func_800038E4_44E4(rdram, ctx);
        goto after_3;
    // 0x80002D4C: nop

    after_3:
    // 0x80002D50: b           L_80002D88
    // 0x80002D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002D88;
    // 0x80002D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002D58:
    // 0x80002D58: jal         0x8000394C
    // 0x80002D5C: nop

    func_8000394C_454C(rdram, ctx);
        goto after_4;
    // 0x80002D5C: nop

    after_4:
    // 0x80002D60: b           L_80002D88
    // 0x80002D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002D88;
    // 0x80002D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002D68:
    // 0x80002D68: lw          $t6, 0x48D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X48D8);
    // 0x80002D6C: bnel        $t6, $zero, L_80002D88
    if (ctx->r14 != 0) {
        // 0x80002D70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80002D88;
    }
    goto skip_0;
    // 0x80002D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80002D74: jal         0x8000383C
    // 0x80002D78: nop

    func_8000383C_443C(rdram, ctx);
        goto after_5;
    // 0x80002D78: nop

    after_5:
    // 0x80002D7C: jal         0x80003728
    // 0x80002D80: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80003728_4328(rdram, ctx);
        goto after_6;
    // 0x80002D80: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_6:
L_80002D84:
    // 0x80002D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002D88:
    // 0x80002D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002D8C: jr          $ra
    // 0x80002D90: nop

    TRACE_RETURN()
    return;
    // 0x80002D90: nop

;}
RECOMP_FUNC void func_800116DC_122DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800116DC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800116E0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x800116E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800116E8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x800116EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800116F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800116F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800116F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800116FC: lhu         $t7, -0x4F86($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F86);
    // 0x80011700: addiu       $v0, $a0, 0x5C
    ctx->r2 = ADD32(ctx->r4, 0X5C);
    // 0x80011704: andi        $t8, $t7, 0xD000
    ctx->r24 = ctx->r15 & 0XD000;
    // 0x80011708: bnel        $t8, $zero, L_80011728
    if (ctx->r24 != 0) {
        // 0x8001170C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80011728;
    }
    goto skip_0;
    // 0x8001170C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80011710: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x80011714: jal         0x8003521C
    // 0x80011718: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80011718: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8001171C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80011720: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80011724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80011728:
    // 0x80011728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001172C: jr          $ra
    // 0x80011730: nop

    TRACE_RETURN()
    return;
    // 0x80011730: nop

;}
RECOMP_FUNC void func_800106B0_112B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800106B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800106B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800106B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800106BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800106C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800106C4: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
L_800106C8:
    // 0x800106C8: jal         0x800105AC
    // 0x800106CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800105AC_111AC(rdram, ctx);
        goto after_0;
    // 0x800106CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800106D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800106D4: bne         $s0, $s1, L_800106C8
    if (ctx->r16 != ctx->r17) {
        // 0x800106D8: nop
    
            goto L_800106C8;
    }
    // 0x800106D8: nop

    // 0x800106DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800106E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800106E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800106E8: jr          $ra
    // 0x800106EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800106EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800166E0_172E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800166E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800166E4: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x800166E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800166EC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800166F0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x800166F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800166F8: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800166FC: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80016700: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80016704: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80016708: bc1f        L_80016718
    if (!c1cs) {
        // 0x8001670C: nop
    
            goto L_80016718;
    }
    // 0x8001670C: nop

    // 0x80016710: b           L_80016718
    // 0x80016714: neg.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = -ctx->f4.fl;
        goto L_80016718;
    // 0x80016714: neg.s       $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = -ctx->f4.fl;
L_80016718:
    // 0x80016718: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8001671C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80016720: bc1f        L_80016730
    if (!c1cs) {
        // 0x80016724: nop
    
            goto L_80016730;
    }
    // 0x80016724: nop

    // 0x80016728: b           L_80016730
    // 0x8001672C: neg.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = -ctx->f6.fl;
        goto L_80016730;
    // 0x8001672C: neg.s       $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = -ctx->f6.fl;
L_80016730:
    // 0x80016730: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80016734: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x80016738: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x8001673C: jal         0x800417E0
    // 0x80016740: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    _nsqrtf(rdram, ctx);
        goto after_0;
    // 0x80016740: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80016744: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80016748: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8001674C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80016750: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80016754: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80016758: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001675C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80016760: bc1fl       L_80016774
    if (!c1cs) {
        // 0x80016764: mov.s       $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
            goto L_80016774;
    }
    goto skip_0;
    // 0x80016764: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    skip_0:
    // 0x80016768: b           L_80016774
    // 0x8001676C: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
        goto L_80016774;
    // 0x8001676C: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x80016770: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
L_80016774:
    // 0x80016774: ldc1        $f6, -0x48E0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X48E0);
    // 0x80016778: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x8001677C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80016780: nop

    // 0x80016784: bc1tl       L_80016798
    if (c1cs) {
        // 0x80016788: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_80016798;
    }
    goto skip_1;
    // 0x80016788: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_1:
    // 0x8001678C: div.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80016790: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80016794: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_80016798:
    // 0x80016798: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8001679C: bc1fl       L_80016808
    if (!c1cs) {
        // 0x800167A0: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_80016808;
    }
    goto skip_2;
    // 0x800167A0: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_2:
    // 0x800167A4: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x800167A8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800167AC: bc1fl       L_800167C0
    if (!c1cs) {
        // 0x800167B0: mtc1        $at, $f11
        ctx->f_odd[(11 - 1) * 2] = ctx->r1;
            goto L_800167C0;
    }
    goto skip_3;
    // 0x800167B0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    skip_3:
    // 0x800167B4: b           L_80016940
    // 0x800167B8: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80016940;
    // 0x800167B8: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x800167BC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
L_800167C0:
    // 0x800167C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800167C4: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x800167C8: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x800167CC: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x800167D0: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x800167D4: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x800167D8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x800167DC: nop

    // 0x800167E0: sltiu       $at, $v1, 0x201
    ctx->r1 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x800167E4: bnel        $at, $zero, L_800167F4
    if (ctx->r1 != 0) {
        // 0x800167E8: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_800167F4;
    }
    goto skip_4;
    // 0x800167E8: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    skip_4:
    // 0x800167EC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x800167F0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
L_800167F4:
    // 0x800167F4: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x800167F8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800167FC: b           L_8001689C
    // 0x80016800: lwc1        $f12, -0x5220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5220);
        goto L_8001689C;
    // 0x80016800: lwc1        $f12, -0x5220($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5220);
    // 0x80016804: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_80016808:
    // 0x80016808: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8001680C: bc1fl       L_8001688C
    if (!c1cs) {
        // 0x80016810: c.eq.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
            goto L_8001688C;
    }
    goto skip_5;
    // 0x80016810: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    skip_5:
    // 0x80016814: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x80016818: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8001681C: bc1fl       L_80016830
    if (!c1cs) {
        // 0x80016820: mtc1        $at, $f9
        ctx->f_odd[(9 - 1) * 2] = ctx->r1;
            goto L_80016830;
    }
    goto skip_6;
    // 0x80016820: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    skip_6:
    // 0x80016824: b           L_80016940
    // 0x80016828: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
        goto L_80016940;
    // 0x80016828: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
    // 0x8001682C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
L_80016830:
    // 0x80016830: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80016834: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x80016838: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x8001683C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80016840: div.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f4.d);
    // 0x80016844: trunc.w.d   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_D(ctx->f6.d);
    // 0x80016848: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x8001684C: nop

    // 0x80016850: sltiu       $at, $v1, 0x201
    ctx->r1 = ctx->r3 < 0X201 ? 1 : 0;
    // 0x80016854: bne         $at, $zero, L_80016860
    if (ctx->r1 != 0) {
        // 0x80016858: nop
    
            goto L_80016860;
    }
    // 0x80016858: nop

    // 0x8001685C: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
L_80016860:
    // 0x80016860: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016864: ldc1        $f10, -0x48D8($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X48D8);
    // 0x80016868: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8001686C: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80016870: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80016874: lwc1        $f4, -0x5220($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5220);
    // 0x80016878: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8001687C: sub.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d - ctx->f6.d;
    // 0x80016880: b           L_8001689C
    // 0x80016884: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
        goto L_8001689C;
    // 0x80016884: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x80016888: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
L_8001688C:
    // 0x8001688C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016890: bc1fl       L_800168A0
    if (!c1cs) {
        // 0x80016894: lwc1        $f0, 0x2C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
            goto L_800168A0;
    }
    goto skip_7;
    // 0x80016894: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x80016898: lwc1        $f12, -0x48D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X48D0);
L_8001689C:
    // 0x8001689C: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
L_800168A0:
    // 0x800168A0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800168A4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x800168A8: nop

    // 0x800168AC: bc1fl       L_800168DC
    if (!c1cs) {
        // 0x800168B0: c.lt.s      $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
            goto L_800168DC;
    }
    goto skip_8;
    // 0x800168B0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    skip_8:
    // 0x800168B4: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x800168B8: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800168BC: bc1fl       L_800168DC
    if (!c1cs) {
        // 0x800168C0: c.lt.s      $f0, $f18
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
            goto L_800168DC;
    }
    goto skip_9;
    // 0x800168C0: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    skip_9:
    // 0x800168C4: ldc1        $f4, -0x48C8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X48C8);
    // 0x800168C8: cvt.d.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.d = CVT_D_S(ctx->f12.fl);
    // 0x800168CC: sub.d       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f4.d - ctx->f10.d;
    // 0x800168D0: b           L_8001693C
    // 0x800168D4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
        goto L_8001693C;
    // 0x800168D4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x800168D8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
L_800168DC:
    // 0x800168DC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800168E0: bc1fl       L_80016910
    if (!c1cs) {
        // 0x800168E4: c.le.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
            goto L_80016910;
    }
    goto skip_10;
    // 0x800168E4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    skip_10:
    // 0x800168E8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x800168EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800168F0: bc1fl       L_80016910
    if (!c1cs) {
        // 0x800168F4: c.le.s      $f18, $f0
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
            goto L_80016910;
    }
    goto skip_11;
    // 0x800168F4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    skip_11:
    // 0x800168F8: ldc1        $f4, -0x48C0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X48C0);
    // 0x800168FC: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80016900: add.d       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f8.d + ctx->f4.d;
    // 0x80016904: b           L_8001693C
    // 0x80016908: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
        goto L_8001693C;
    // 0x80016908: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x8001690C: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
L_80016910:
    // 0x80016910: nop

    // 0x80016914: bc1fl       L_80016940
    if (!c1cs) {
        // 0x80016918: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80016940;
    }
    goto skip_12;
    // 0x80016918: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_12:
    // 0x8001691C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80016920: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x80016924: bc1fl       L_80016940
    if (!c1cs) {
        // 0x80016928: mov.s       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
            goto L_80016940;
    }
    goto skip_13;
    // 0x80016928: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    skip_13:
    // 0x8001692C: ldc1        $f6, -0x48B8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X48B8);
    // 0x80016930: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80016934: sub.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d - ctx->f8.d;
    // 0x80016938: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
L_8001693C:
    // 0x8001693C: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80016940:
    // 0x80016940: jr          $ra
    // 0x80016944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80016944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800334EC_340EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800334EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800334F0: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x800334F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800334F8: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x800334FC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80033500: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x80033504: addiu       $t6, $sp, 0x18
    ctx->r14 = ADD32(ctx->r29, 0X18);
    // 0x80033508: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8003350C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x80033510: lw          $t1, 0xC($t7)
    ctx->r9 = MEM_W(ctx->r15, 0XC);
    // 0x80033514: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80033518: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8003351C: sw          $t1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r9;
    // 0x80033520: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80033524: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80033528: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003352C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80033530: beq         $t0, $t2, L_80033560
    if (ctx->r8 == ctx->r10) {
        // 0x80033534: lw          $t5, 0x2C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X2C);
            goto L_80033560;
    }
    // 0x80033534: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80033538: lbu         $a1, 0x4C($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X4C);
    // 0x8003353C: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80033540: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
L_80033544:
    // 0x80033544: bne         $a1, $t4, L_80033554
    if (ctx->r5 != ctx->r12) {
        // 0x80033548: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80033554;
    }
    // 0x80033548: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8003354C: b           L_80033560
    // 0x80033550: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80033560;
    // 0x80033550: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80033554:
    // 0x80033554: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80033558: bnel        $t0, $a3, L_80033544
    if (ctx->r8 != ctx->r7) {
        // 0x8003355C: andi        $t4, $a3, 0xFF
        ctx->r12 = ctx->r7 & 0XFF;
            goto L_80033544;
    }
    goto skip_0;
    // 0x8003355C: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    skip_0:
L_80033560:
    // 0x80033560: lbu         $v0, 0x30($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X30);
    // 0x80033564: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x80033568: beq         $t9, $zero, L_80033578
    if (ctx->r25 == 0) {
        // 0x8003356C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_80033578;
    }
    // 0x8003356C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80033570: b           L_80033588
    // 0x80033574: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80033588;
    // 0x80033574: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80033578:
    // 0x80033578: beq         $t8, $zero, L_80033588
    if (ctx->r24 == 0) {
        // 0x8003357C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80033588;
    }
    // 0x8003357C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033580: b           L_80033588
    // 0x80033584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80033588;
    // 0x80033584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80033588:
    // 0x80033588: jr          $ra
    // 0x8003358C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003358C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800124A0_130A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800124A0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800124A4: jr          $ra
    // 0x800124A8: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
    TRACE_RETURN()
    return;
    // 0x800124A8: swc1        $f12, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_8000A4F8_B0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000A4F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A4FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000A500: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000A504: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8000A508: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8000A50C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000A510: addiu       $s0, $s0, -0x77B0
    ctx->r16 = ADD32(ctx->r16, -0X77B0);
    // 0x8000A514: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000A518: addiu       $s2, $zero, 0xC0
    ctx->r18 = ADD32(0, 0XC0);
L_8000A51C:
    // 0x8000A51C: jal         0x8000A5C4
    // 0x8000A520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000A5C4_B1C4(rdram, ctx);
        goto after_0;
    // 0x8000A520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8000A524: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8000A528: bne         $s1, $s2, L_8000A51C
    if (ctx->r17 != ctx->r18) {
        // 0x8000A52C: addiu       $s0, $s0, 0x98
        ctx->r16 = ADD32(ctx->r16, 0X98);
            goto L_8000A51C;
    }
    // 0x8000A52C: addiu       $s0, $s0, 0x98
    ctx->r16 = ADD32(ctx->r16, 0X98);
    // 0x8000A530: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000A534: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A538: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A53C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000A540: jr          $ra
    // 0x8000A544: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8000A544: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800351B4_35DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800351B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800351B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800351BC: jal         0x80036260
    // 0x800351C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x800351C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800351C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800351C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800351CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800351D0: sh          $t6, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r14;
L_800351D4:
    // 0x800351D4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x800351D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800351DC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800351E0: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800351E4: slti        $at, $v0, 0x25
    ctx->r1 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x800351E8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800351EC: bne         $at, $zero, L_800351D4
    if (ctx->r1 != 0) {
        // 0x800351F0: sw          $zero, 0x5C($t8)
        MEM_W(0X5C, ctx->r24) = 0;
            goto L_800351D4;
    }
    // 0x800351F0: sw          $zero, 0x5C($t8)
    MEM_W(0X5C, ctx->r24) = 0;
    // 0x800351F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800351F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800351FC: jr          $ra
    // 0x80035200: nop

    TRACE_RETURN()
    return;
    // 0x80035200: nop

;}
RECOMP_FUNC void func_8003D428_3E028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D42C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D430: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003D434: jal         0x8003D468
    // 0x8003D438: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_8003D468_3E068(rdram, ctx);
        goto after_0;
    // 0x8003D438: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x8003D43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D444: jr          $ra
    // 0x8003D448: nop

    TRACE_RETURN()
    return;
    // 0x8003D448: nop

;}
RECOMP_FUNC void func_8000631C_6F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000631C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80006320: lhu         $t6, 0x7AD6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7AD6);
    // 0x80006324: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80006328: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000632C: bne         $t6, $at, L_8000633C
    if (ctx->r14 != ctx->r1) {
        // 0x80006330: nop
    
            goto L_8000633C;
    }
    // 0x80006330: nop

    // 0x80006334: jr          $ra
    // 0x80006338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80006338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000633C:
    // 0x8000633C: jr          $ra
    // 0x80006340: nop

    TRACE_RETURN()
    return;
    // 0x80006340: nop

;}
RECOMP_FUNC void func_8003E888_3F488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E888: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8003E88C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8003E890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E894: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8003E898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E89C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E8A0: lhu         $t7, -0x5232($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X5232);
    // 0x8003E8A4: lui         $v0, 0x8007
    ctx->r2 = S32(0X8007 << 16);
    // 0x8003E8A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003E8AC: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8003E8B0: bne         $t8, $zero, L_8003E8C8
    if (ctx->r24 != 0) {
        // 0x8003E8B4: nop
    
            goto L_8003E8C8;
    }
    // 0x8003E8B4: nop

    // 0x8003E8B8: lw          $v0, 0x7860($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7860);
    // 0x8003E8BC: lbu         $t9, 0x5C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X5C);
    // 0x8003E8C0: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8003E8C4: sb          $t0, 0x5C($v0)
    MEM_B(0X5C, ctx->r2) = ctx->r8;
L_8003E8C8:
    // 0x8003E8C8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E8CC: lw          $v0, 0x77F4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77F4);
    // 0x8003E8D0: bne         $v0, $zero, L_8003E8E8
    if (ctx->r2 != 0) {
        // 0x8003E8D4: nop
    
            goto L_8003E8E8;
    }
    // 0x8003E8D4: nop

    // 0x8003E8D8: jal         0x8003E9E8
    // 0x8003E8DC: nop

    func_8003E9E8_3F5E8(rdram, ctx);
        goto after_0;
    // 0x8003E8DC: nop

    after_0:
    // 0x8003E8E0: b           L_8003E9D8
    // 0x8003E8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E9D8;
    // 0x8003E8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E8E8:
    // 0x8003E8E8: bne         $v0, $at, L_8003E9D4
    if (ctx->r2 != ctx->r1) {
        // 0x8003E8EC: lui         $v1, 0x801C
        ctx->r3 = S32(0X801C << 16);
            goto L_8003E9D4;
    }
    // 0x8003E8EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E8F0: addiu       $v1, $v1, 0x7800
    ctx->r3 = ADD32(ctx->r3, 0X7800);
    // 0x8003E8F4: jal         0x8003EACC
    // 0x8003E8F8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    func_8003EACC_3F6CC(rdram, ctx);
        goto after_1;
    // 0x8003E8F8: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_1:
    // 0x8003E8FC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E900: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003E904: beq         $v0, $at, L_8003E920
    if (ctx->r2 == ctx->r1) {
        // 0x8003E908: addiu       $v1, $v1, 0x7800
        ctx->r3 = ADD32(ctx->r3, 0X7800);
            goto L_8003E920;
    }
    // 0x8003E908: addiu       $v1, $v1, 0x7800
    ctx->r3 = ADD32(ctx->r3, 0X7800);
    // 0x8003E90C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003E910: beql        $v0, $at, L_8003E940
    if (ctx->r2 == ctx->r1) {
        // 0x8003E914: lw          $t3, 0x0($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X0);
            goto L_8003E940;
    }
    goto skip_0;
    // 0x8003E914: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x8003E918: b           L_8003E950
    // 0x8003E91C: nop

        goto L_8003E950;
    // 0x8003E91C: nop

L_8003E920:
    // 0x8003E920: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8003E924: addiu       $a0, $zero, 0x2B1
    ctx->r4 = ADD32(0, 0X2B1);
    // 0x8003E928: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8003E92C: jal         0x80038B98
    // 0x8003E930: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    func_80038B98_39798(rdram, ctx);
        goto after_2;
    // 0x8003E930: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    after_2:
    // 0x8003E934: b           L_8003E950
    // 0x8003E938: nop

        goto L_8003E950;
    // 0x8003E938: nop

    // 0x8003E93C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
L_8003E940:
    // 0x8003E940: addiu       $a0, $zero, 0x2B1
    ctx->r4 = ADD32(0, 0X2B1);
    // 0x8003E944: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x8003E948: jal         0x80038B98
    // 0x8003E94C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x8003E94C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    after_3:
L_8003E950:
    // 0x8003E950: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E954: lhu         $v0, 0x790C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X790C);
    // 0x8003E958: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E95C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x8003E960: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x8003E964: beq         $t5, $zero, L_8003E994
    if (ctx->r13 == 0) {
        // 0x8003E968: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_8003E994;
    }
    // 0x8003E968: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8003E96C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x8003E970: addiu       $t9, $t9, 0x40DC
    ctx->r25 = ADD32(ctx->r25, 0X40DC);
    // 0x8003E974: jalr        $t9
    // 0x8003E978: sw          $zero, 0x77F4($at)
    MEM_W(0X77F4, ctx->r1) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8003E978: sw          $zero, 0x77F4($at)
    MEM_W(0X77F4, ctx->r1) = 0;
    after_4:
    // 0x8003E97C: bne         $v0, $zero, L_8003E98C
    if (ctx->r2 != 0) {
        // 0x8003E980: nop
    
            goto L_8003E98C;
    }
    // 0x8003E980: nop

    // 0x8003E984: jal         0x80038B98
    // 0x8003E988: addiu       $a0, $zero, 0x2B0
    ctx->r4 = ADD32(0, 0X2B0);
    func_80038B98_39798(rdram, ctx);
        goto after_5;
    // 0x8003E988: addiu       $a0, $zero, 0x2B0
    ctx->r4 = ADD32(0, 0X2B0);
    after_5:
L_8003E98C:
    // 0x8003E98C: b           L_8003E9D8
    // 0x8003E990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003E9D8;
    // 0x8003E990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E994:
    // 0x8003E994: beq         $t6, $zero, L_8003E9D4
    if (ctx->r14 == 0) {
        // 0x8003E998: lui         $t7, 0x801C
        ctx->r15 = S32(0X801C << 16);
            goto L_8003E9D4;
    }
    // 0x8003E998: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003E99C: lw          $t7, 0x7770($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7770);
    // 0x8003E9A0: lui         $v1, 0x8007
    ctx->r3 = S32(0X8007 << 16);
    // 0x8003E9A4: addiu       $v1, $v1, 0x7858
    ctx->r3 = ADD32(ctx->r3, 0X7858);
    // 0x8003E9A8: bnel        $t7, $zero, L_8003E9D8
    if (ctx->r15 != 0) {
        // 0x8003E9AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003E9D8;
    }
    goto skip_1;
    // 0x8003E9AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x8003E9B0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003E9B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E9B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003E9BC: addiu       $t0, $t8, 0x4
    ctx->r8 = ADD32(ctx->r24, 0X4);
    // 0x8003E9C0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x8003E9C4: sw          $zero, 0x77F4($at)
    MEM_W(0X77F4, ctx->r1) = 0;
    // 0x8003E9C8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E9CC: b           L_8003E9D8
    // 0x8003E9D0: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
        goto L_8003E9D8;
    // 0x8003E9D0: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
L_8003E9D4:
    // 0x8003E9D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E9D8:
    // 0x8003E9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E9DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E9E0: jr          $ra
    // 0x8003E9E4: nop

    TRACE_RETURN()
    return;
    // 0x8003E9E4: nop

;}
RECOMP_FUNC void func_800379D0_385D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800379D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800379D4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x800379D8: lhu         $t6, 0x7AD6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7AD6);
    // 0x800379DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800379E0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800379E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800379E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800379EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800379F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800379F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800379F8: bne         $t6, $zero, L_80037AE8
    if (ctx->r14 != 0) {
        // 0x800379FC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80037AE8;
    }
    // 0x800379FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80037A00: lui         $s0, 0x8017
    ctx->r16 = S32(0X8017 << 16);
    // 0x80037A04: addiu       $s0, $s0, -0x2510
    ctx->r16 = ADD32(ctx->r16, -0X2510);
    // 0x80037A08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80037A0C: addiu       $s6, $zero, 0x1F
    ctx->r22 = ADD32(0, 0X1F);
    // 0x80037A10: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80037A14: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80037A18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80037A1C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80037A20:
    // 0x80037A20: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80037A24: beql        $t7, $zero, L_80037AE0
    if (ctx->r15 == 0) {
        // 0x80037A28: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80037AE0;
    }
    goto skip_0;
    // 0x80037A28: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80037A2C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80037A30: beql        $v0, $zero, L_80037AE0
    if (ctx->r2 == 0) {
        // 0x80037A34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80037AE0;
    }
    goto skip_1;
    // 0x80037A34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x80037A38: beql        $v0, $s3, L_80037A5C
    if (ctx->r2 == ctx->r19) {
        // 0x80037A3C: lw          $t9, 0x1C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X1C);
            goto L_80037A5C;
    }
    goto skip_2;
    // 0x80037A3C: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
    skip_2:
    // 0x80037A40: beq         $v0, $s2, L_80037AD0
    if (ctx->r2 == ctx->r18) {
        // 0x80037A44: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80037AD0;
    }
    // 0x80037A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80037A48: beql        $v0, $s4, L_80037AD0
    if (ctx->r2 == ctx->r20) {
        // 0x80037A4C: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_80037AD0;
    }
    goto skip_3;
    // 0x80037A4C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    skip_3:
    // 0x80037A50: b           L_80037AE0
    // 0x80037A54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_80037AE0;
    // 0x80037A54: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80037A58: lw          $t9, 0x1C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C);
L_80037A5C:
    // 0x80037A5C: lw          $t8, 0x18($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X18);
    // 0x80037A60: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80037A64: sllv        $t1, $t0, $t9
    ctx->r9 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x80037A68: and         $t2, $t8, $t1
    ctx->r10 = ctx->r24 & ctx->r9;
    // 0x80037A6C: beq         $t2, $zero, L_80037A88
    if (ctx->r10 == 0) {
        // 0x80037A70: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80037A88;
    }
    // 0x80037A70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80037A74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80037A78: jal         0x80037CB0
    // 0x80037A7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80037CB0_388B0(rdram, ctx);
        goto after_0;
    // 0x80037A7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x80037A80: b           L_80037A94
    // 0x80037A84: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
        goto L_80037A94;
    // 0x80037A84: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
L_80037A88:
    // 0x80037A88: jal         0x80037CB0
    // 0x80037A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80037CB0_388B0(rdram, ctx);
        goto after_1;
    // 0x80037A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80037A90: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
L_80037A94:
    // 0x80037A94: beq         $v0, $zero, L_80037AA4
    if (ctx->r2 == 0) {
        // 0x80037A98: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_80037AA4;
    }
    // 0x80037A98: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80037A9C: b           L_80037AA8
    // 0x80037AA0: sw          $t3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r11;
        goto L_80037AA8;
    // 0x80037AA0: sw          $t3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r11;
L_80037AA4:
    // 0x80037AA4: sw          $s6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r22;
L_80037AA8:
    // 0x80037AA8: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x80037AAC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80037AB0: bgez        $t5, L_80037ADC
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80037AB4: sw          $t5, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r13;
            goto L_80037ADC;
    }
    // 0x80037AB4: sw          $t5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r13;
    // 0x80037AB8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80037ABC: beql        $t7, $zero, L_80037AE0
    if (ctx->r15 == 0) {
        // 0x80037AC0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80037AE0;
    }
    goto skip_4;
    // 0x80037AC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x80037AC4: b           L_80037ADC
    // 0x80037AC8: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
        goto L_80037ADC;
    // 0x80037AC8: sw          $s2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r18;
    // 0x80037ACC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80037AD0:
    // 0x80037AD0: jal         0x80037CB0
    // 0x80037AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80037CB0_388B0(rdram, ctx);
        goto after_2;
    // 0x80037AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80037AD8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_80037ADC:
    // 0x80037ADC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80037AE0:
    // 0x80037AE0: bne         $s1, $s5, L_80037A20
    if (ctx->r17 != ctx->r21) {
        // 0x80037AE4: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_80037A20;
    }
    // 0x80037AE4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_80037AE8:
    // 0x80037AE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80037AEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80037AF0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80037AF4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80037AF8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80037AFC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80037B00: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80037B04: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80037B08: jr          $ra
    // 0x80037B0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80037B0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80023840_24440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80023844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80023848: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002384C: addiu       $a0, $a0, 0x7170
    ctx->r4 = ADD32(ctx->r4, 0X7170);
    // 0x80023850: jal         0x800441C0
    // 0x80023854: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    osPfsIsPlug_recomp(rdram, ctx);
        goto after_0;
    // 0x80023854: addiu       $a1, $sp, 0x1F
    ctx->r5 = ADD32(ctx->r29, 0X1F);
    after_0:
    // 0x80023858: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002385C: bne         $v0, $at, L_8002386C
    if (ctx->r2 != ctx->r1) {
        // 0x80023860: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002386C;
    }
    // 0x80023860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80023864: b           L_80023878
    // 0x80023868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80023878;
    // 0x80023868: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002386C:
    // 0x8002386C: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x80023870: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80023874: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80023878:
    // 0x80023878: jr          $ra
    // 0x8002387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alSynSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800485B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800485B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800485B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800485BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800485C0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x800485C4: beql        $t6, $zero, L_80048628
    if (ctx->r14 == 0) {
        // 0x800485C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048628;
    }
    goto skip_0;
    // 0x800485C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800485CC: jal         0x80047960
    // 0x800485D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x800485D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800485D4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800485D8: beq         $v0, $zero, L_80048624
    if (ctx->r2 == 0) {
        // 0x800485DC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80048624;
    }
    // 0x800485DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800485E0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800485E4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x800485E8: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x800485EC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800485F0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x800485F4: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x800485F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800485FC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80048600: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80048604: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x80048608: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8004860C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80048610: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x80048614: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x80048618: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8004861C: jalr        $t9
    // 0x80048620: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80048620: nop

    after_1:
L_80048624:
    // 0x80048624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048628:
    // 0x80048628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004862C: jr          $ra
    // 0x80048630: nop

    TRACE_RETURN()
    return;
    // 0x80048630: nop

;}
RECOMP_FUNC void func_8000FBE0_107E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000FBE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000FBE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000FBE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000FBEC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8000FBF0: lui         $a1, 0x8001
    ctx->r5 = S32(0X8001 << 16);
    // 0x8000FBF4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8000FBF8: addiu       $a1, $a1, -0x6DC
    ctx->r5 = ADD32(ctx->r5, -0X6DC);
    // 0x8000FBFC: jal         0x80034E08
    // 0x8000FC00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_0;
    // 0x8000FC00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8000FC04: bne         $v0, $zero, L_8000FC14
    if (ctx->r2 != 0) {
        // 0x8000FC08: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8000FC14;
    }
    // 0x8000FC08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000FC0C: b           L_8000FC44
    // 0x8000FC10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000FC44;
    // 0x8000FC10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000FC14:
    // 0x8000FC14: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x8000FC18: sh          $t6, 0x5C($v1)
    MEM_H(0X5C, ctx->r3) = ctx->r14;
    // 0x8000FC1C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8000FC20: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x8000FC24: sw          $t7, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r15;
    // 0x8000FC28: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8000FC2C: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
    // 0x8000FC30: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000FC34: swc1        $f4, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f4.u32l;
    // 0x8000FC38: jal         0x80038B98
    // 0x8000FC3C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038B98_39798(rdram, ctx);
        goto after_1;
    // 0x8000FC3C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8000FC40: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_8000FC44:
    // 0x8000FC44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000FC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000FC4C: jr          $ra
    // 0x8000FC50: nop

    TRACE_RETURN()
    return;
    // 0x8000FC50: nop

;}
RECOMP_FUNC void func_80001A40_2640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80001A40: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80001A44: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80001A48: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80001A4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80001A50: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80001A54: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80001A58: addiu       $fp, $sp, 0x5C
    ctx->r30 = ADD32(ctx->r29, 0X5C);
    // 0x80001A5C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80001A60: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80001A64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80001A68: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80001A6C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80001A70: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001A74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001A78: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80001A7C: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001A80: jal         0x80041620
    // 0x80001A84: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    osPiReadIo_recomp(rdram, ctx);
        goto after_0;
    // 0x80001A84: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_0:
    // 0x80001A88: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80001A8C: lui         $at, 0x4953
    ctx->r1 = S32(0X4953 << 16);
    // 0x80001A90: ori         $at, $at, 0x3634
    ctx->r1 = ctx->r1 | 0X3634;
    // 0x80001A94: beq         $s4, $at, L_80001AA4
    if (ctx->r20 == ctx->r1) {
        // 0x80001A98: lui         $a0, 0xB1FF
        ctx->r4 = S32(0XB1FF << 16);
            goto L_80001AA4;
    }
    // 0x80001A98: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001A9C: b           L_80001BCC
    // 0x80001AA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80001BCC;
    // 0x80001AA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001AA4:
    // 0x80001AA4: ori         $a0, $a0, 0x4
    ctx->r4 = ctx->r4 | 0X4;
    // 0x80001AA8: jal         0x80041620
    // 0x80001AAC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    osPiReadIo_recomp(rdram, ctx);
        goto after_1;
    // 0x80001AAC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_1:
    // 0x80001AB0: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001AB4: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x80001AB8: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x80001ABC: jal         0x80041620
    // 0x80001AC0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    osPiReadIo_recomp(rdram, ctx);
        goto after_2;
    // 0x80001AC0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x80001AC4: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x80001AC8: ori         $at, $zero, 0xFFE0
    ctx->r1 = 0 | 0XFFE0;
    // 0x80001ACC: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    // 0x80001AD0: addu        $v0, $s4, $s3
    ctx->r2 = ADD32(ctx->r20, ctx->r19);
    // 0x80001AD4: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80001AD8: bne         $at, $zero, L_80001B04
    if (ctx->r1 != 0) {
        // 0x80001ADC: or          $s1, $s4, $zero
        ctx->r17 = ctx->r20 | 0;
            goto L_80001B04;
    }
    // 0x80001ADC: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x80001AE0: ori         $s7, $s7, 0x20
    ctx->r23 = ctx->r23 | 0X20;
    // 0x80001AE4: addu        $v1, $v0, $s7
    ctx->r3 = ADD32(ctx->r2, ctx->r23);
    // 0x80001AE8: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80001AEC: bne         $at, $zero, L_80001AFC
    if (ctx->r1 != 0) {
        // 0x80001AF0: slt         $at, $s4, $s0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80001AFC;
    }
    // 0x80001AF0: slt         $at, $s4, $s0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80001AF4: beql        $at, $zero, L_80001B24
    if (ctx->r1 == 0) {
        // 0x80001AF8: lui         $s7, 0xFFFF
        ctx->r23 = S32(0XFFFF << 16);
            goto L_80001B24;
    }
    goto skip_0;
    // 0x80001AF8: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    skip_0:
L_80001AFC:
    // 0x80001AFC: b           L_80001BCC
    // 0x80001B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80001BCC;
    // 0x80001B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001B04:
    // 0x80001B04: slt         $at, $s4, $s0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80001B08: beq         $at, $zero, L_80001B20
    if (ctx->r1 == 0) {
        // 0x80001B0C: slt         $at, $s0, $v0
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80001B20;
    }
    // 0x80001B0C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80001B10: beql        $at, $zero, L_80001B24
    if (ctx->r1 == 0) {
        // 0x80001B14: lui         $s7, 0xFFFF
        ctx->r23 = S32(0XFFFF << 16);
            goto L_80001B24;
    }
    goto skip_1;
    // 0x80001B14: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    skip_1:
    // 0x80001B18: b           L_80001BCC
    // 0x80001B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80001BCC;
    // 0x80001B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001B20:
    // 0x80001B20: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
L_80001B24:
    // 0x80001B24: beq         $s3, $zero, L_80001BB8
    if (ctx->r19 == 0) {
        // 0x80001B28: ori         $s7, $s7, 0x20
        ctx->r23 = ctx->r23 | 0X20;
            goto L_80001BB8;
    }
    // 0x80001B28: ori         $s7, $s7, 0x20
    ctx->r23 = ctx->r23 | 0X20;
    // 0x80001B2C: lui         $s5, 0xB1FF
    ctx->r21 = S32(0XB1FF << 16);
    // 0x80001B30: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x80001B34: ori         $s4, $s4, 0xFFFC
    ctx->r20 = ctx->r20 | 0XFFFC;
    // 0x80001B38: ori         $s5, $s5, 0x20
    ctx->r21 = ctx->r21 | 0X20;
    // 0x80001B3C: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
L_80001B40:
    // 0x80001B40: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80001B44: and         $t7, $s1, $s4
    ctx->r15 = ctx->r17 & ctx->r20;
    // 0x80001B48: addu        $s0, $t7, $s5
    ctx->r16 = ADD32(ctx->r15, ctx->r21);
    // 0x80001B4C: beq         $t6, $zero, L_80001BAC
    if (ctx->r14 == 0) {
        // 0x80001B50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80001BAC;
    }
    // 0x80001B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001B54: jal         0x80041620
    // 0x80001B58: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    osPiReadIo_recomp(rdram, ctx);
        goto after_3;
    // 0x80001B58: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_3:
    // 0x80001B5C: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x80001B60: subu        $v0, $s6, $t8
    ctx->r2 = SUB32(ctx->r22, ctx->r24);
    // 0x80001B64: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80001B68: lbu         $t5, 0x0($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X0);
    // 0x80001B6C: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x80001B70: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80001B74: sllv        $t2, $t1, $t9
    ctx->r10 = S32(ctx->r9 << (ctx->r25 & 31));
    // 0x80001B78: nor         $t3, $t2, $zero
    ctx->r11 = ~(ctx->r10 | 0);
    // 0x80001B7C: and         $t4, $t0, $t3
    ctx->r12 = ctx->r8 & ctx->r11;
    // 0x80001B80: sllv        $t6, $t5, $t9
    ctx->r14 = S32(ctx->r13 << (ctx->r25 & 31));
    // 0x80001B84: or          $a1, $t6, $t4
    ctx->r5 = ctx->r14 | ctx->r12;
    // 0x80001B88: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80001B8C: jal         0x80040920
    // 0x80001B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osPiWriteIo_recomp(rdram, ctx);
        goto after_4;
    // 0x80001B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80001B94: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80001B98: ori         $at, $zero, 0xFFE0
    ctx->r1 = 0 | 0XFFE0;
    // 0x80001B9C: slt         $at, $s1, $at
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x80001BA0: bnel        $at, $zero, L_80001BB0
    if (ctx->r1 != 0) {
        // 0x80001BA4: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_80001BB0;
    }
    goto skip_2;
    // 0x80001BA4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    skip_2:
    // 0x80001BA8: addu        $s1, $s1, $s7
    ctx->r17 = ADD32(ctx->r17, ctx->r23);
L_80001BAC:
    // 0x80001BAC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_80001BB0:
    // 0x80001BB0: bne         $s3, $zero, L_80001B40
    if (ctx->r19 != 0) {
        // 0x80001BB4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80001B40;
    }
    // 0x80001BB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80001BB8:
    // 0x80001BB8: lui         $a0, 0xB1FF
    ctx->r4 = S32(0XB1FF << 16);
    // 0x80001BBC: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x80001BC0: jal         0x80040920
    // 0x80001BC4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    osPiWriteIo_recomp(rdram, ctx);
        goto after_5;
    // 0x80001BC4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80001BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001BCC:
    // 0x80001BCC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80001BD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001BD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80001BD8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001BDC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80001BE0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80001BE4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80001BE8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80001BEC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80001BF0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80001BF4: jr          $ra
    // 0x80001BF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80001BF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800246BC_252BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800246BC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x800246C0: addiu       $v1, $zero, 0x7D0
    ctx->r3 = ADD32(0, 0X7D0);
    // 0x800246C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800246C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800246CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800246D0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x800246D4: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x800246D8: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x800246DC: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x800246E0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800246E4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800246E8: lwc1        $f4, -0x3F64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3F64);
    // 0x800246EC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x800246F0: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x800246F4: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x800246F8: lwc1        $f6, -0x3F60($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3F60);
    // 0x800246FC: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x80024700: sb          $zero, 0x24($a0)
    MEM_B(0X24, ctx->r4) = 0;
    // 0x80024704: sb          $zero, 0x25($a0)
    MEM_B(0X25, ctx->r4) = 0;
    // 0x80024708: sb          $t7, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r15;
    // 0x8002470C: sb          $t8, 0x27($a0)
    MEM_B(0X27, ctx->r4) = ctx->r24;
    // 0x80024710: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x80024714: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80024718: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8002471C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80024720: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80024724: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x80024728: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x8002472C: jr          $ra
    // 0x80024730: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x80024730: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_800038E4_44E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800038E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800038E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800038EC: jal         0x80034734
    // 0x800038F0: nop

    func_80034734_35334(rdram, ctx);
        goto after_0;
    // 0x800038F0: nop

    after_0:
    // 0x800038F4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x800038F8: lbu         $t6, 0x7A95($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7A95);
    // 0x800038FC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x80003900: beql        $t6, $zero, L_80003940
    if (ctx->r14 == 0) {
        // 0x80003904: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80003940;
    }
    goto skip_0;
    // 0x80003904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80003908: jal         0x800369F0
    // 0x8000390C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    func_800369F0_375F0(rdram, ctx);
        goto after_1;
    // 0x8000390C: lw          $a0, -0x2CD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2CD8);
    after_1:
    // 0x80003910: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80003914: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80003918: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x8000391C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80003920: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80003924: lbu         $t7, -0x522A($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X522A);
    // 0x80003928: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8000392C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80003930: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80003934: jal         0x80038BC8
    // 0x80003938: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x80003938: sb          $t8, -0x522A($at)
    MEM_B(-0X522A, ctx->r1) = ctx->r24;
    after_2:
    // 0x8000393C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80003940:
    // 0x80003940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003944: jr          $ra
    // 0x80003948: nop

    TRACE_RETURN()
    return;
    // 0x80003948: nop

;}
RECOMP_FUNC void func_8003D468_3E068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D468: lui         $t6, 0x8007
    ctx->r14 = S32(0X8007 << 16);
    // 0x8003D46C: lw          $t6, 0x7860($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7860);
    // 0x8003D470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003D478: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003D47C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003D480: bne         $t6, $zero, L_8003D490
    if (ctx->r14 != 0) {
        // 0x8003D484: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8003D490;
    }
    // 0x8003D484: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003D488: b           L_8003D678
    // 0x8003D48C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003D678;
    // 0x8003D48C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D490:
    // 0x8003D490: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003D494: addiu       $s1, $s1, 0x78E8
    ctx->r17 = ADD32(ctx->r17, 0X78E8);
    // 0x8003D498: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8003D49C: beq         $a1, $a2, L_8003D538
    if (ctx->r5 == ctx->r6) {
        // 0x8003D4A0: sw          $a1, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r5;
            goto L_8003D538;
    }
    // 0x8003D4A0: sw          $a1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r5;
    // 0x8003D4A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003D4A8: jal         0x800141C4
    // 0x8003D4AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x8003D4AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003D4B0: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8003D4B4: addiu       $s0, $s0, 0x77E8
    ctx->r16 = ADD32(ctx->r16, 0X77E8);
    // 0x8003D4B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003D4BC: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8003D4C0: bne         $v0, $at, L_8003D4E8
    if (ctx->r2 != ctx->r1) {
        // 0x8003D4C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8003D4E8;
    }
    // 0x8003D4C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8003D4C8: jal         0x80013B14
    // 0x8003D4CC: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    func_80013B14_14714(rdram, ctx);
        goto after_1;
    // 0x8003D4CC: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    after_1:
    // 0x8003D4D0: jal         0x8003CFA0
    // 0x8003D4D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_8003CFA0_3DBA0(rdram, ctx);
        goto after_2;
    // 0x8003D4D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x8003D4D8: jal         0x800141C4
    // 0x8003D4DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800141C4_14DC4(rdram, ctx);
        goto after_3;
    // 0x8003D4DC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_3:
    // 0x8003D4E0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8003D4E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8003D4E8:
    // 0x8003D4E8: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x8003D4EC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8003D4F0: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x8003D4F4: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
    // 0x8003D4F8: jal         0x80001E50
    // 0x8003D4FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_80001E50_2A50(rdram, ctx);
        goto after_4;
    // 0x8003D4FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_4:
    // 0x8003D500: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D504: sw          $v0, 0x78EC($at)
    MEM_W(0X78EC, ctx->r1) = ctx->r2;
    // 0x8003D508: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003D50C: jal         0x8003DDC4
    // 0x8003D510: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8003DDC4_3E9C4(rdram, ctx);
        goto after_5;
    // 0x8003D510: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8003D514: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003D518: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D51C: subu        $t9, $v0, $a0
    ctx->r25 = SUB32(ctx->r2, ctx->r4);
    // 0x8003D520: jal         0x8003DE48
    // 0x8003D524: sw          $t9, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r25;
    func_8003DE48_3EA48(rdram, ctx);
        goto after_6;
    // 0x8003D524: sw          $t9, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = ctx->r25;
    after_6:
    // 0x8003D528: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003D52C: sw          $v0, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = ctx->r2;
    // 0x8003D530: b           L_8003D570
    // 0x8003D534: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_8003D570;
    // 0x8003D534: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_8003D538:
    // 0x8003D538: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8003D53C: addiu       $s0, $s0, 0x77E8
    ctx->r16 = ADD32(ctx->r16, 0X77E8);
    // 0x8003D540: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x8003D544: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D548: sw          $zero, 0x78EC($at)
    MEM_W(0X78EC, ctx->r1) = 0;
    // 0x8003D54C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D550: sw          $zero, 0x78F0($at)
    MEM_W(0X78F0, ctx->r1) = 0;
    // 0x8003D554: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003D558: sw          $zero, 0x7858($at)
    MEM_W(0X7858, ctx->r1) = 0;
    // 0x8003D55C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D560: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8003D564: sw          $t0, 0x7900($at)
    MEM_W(0X7900, ctx->r1) = ctx->r8;
    // 0x8003D568: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D56C: sw          $a2, 0x7904($at)
    MEM_W(0X7904, ctx->r1) = ctx->r6;
L_8003D570:
    // 0x8003D570: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D574: sw          $zero, 0x7740($at)
    MEM_W(0X7740, ctx->r1) = 0;
    // 0x8003D578: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D57C: sw          $zero, 0x7744($at)
    MEM_W(0X7744, ctx->r1) = 0;
    // 0x8003D580: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D584: sw          $zero, 0x7748($at)
    MEM_W(0X7748, ctx->r1) = 0;
    // 0x8003D588: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D58C: sw          $zero, 0x774C($at)
    MEM_W(0X774C, ctx->r1) = 0;
    // 0x8003D590: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D594: sw          $zero, 0x7750($at)
    MEM_W(0X7750, ctx->r1) = 0;
    // 0x8003D598: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D59C: sw          $zero, 0x7754($at)
    MEM_W(0X7754, ctx->r1) = 0;
    // 0x8003D5A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8003D5A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5A8: sw          $v0, 0x7758($at)
    MEM_W(0X7758, ctx->r1) = ctx->r2;
    // 0x8003D5AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5B0: sw          $v0, 0x775C($at)
    MEM_W(0X775C, ctx->r1) = ctx->r2;
    // 0x8003D5B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5B8: sw          $v0, 0x7760($at)
    MEM_W(0X7760, ctx->r1) = ctx->r2;
    // 0x8003D5BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5C0: sw          $v0, 0x7764($at)
    MEM_W(0X7764, ctx->r1) = ctx->r2;
    // 0x8003D5C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5C8: sw          $zero, 0x7768($at)
    MEM_W(0X7768, ctx->r1) = 0;
    // 0x8003D5CC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5D0: sw          $zero, 0x776C($at)
    MEM_W(0X776C, ctx->r1) = 0;
    // 0x8003D5D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5D8: sw          $zero, 0x7770($at)
    MEM_W(0X7770, ctx->r1) = 0;
    // 0x8003D5DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5E0: sw          $zero, 0x7774($at)
    MEM_W(0X7774, ctx->r1) = 0;
    // 0x8003D5E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003D5E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5EC: sw          $v1, 0x7798($at)
    MEM_W(0X7798, ctx->r1) = ctx->r3;
    // 0x8003D5F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5F4: sw          $zero, 0x77A0($at)
    MEM_W(0X77A0, ctx->r1) = 0;
    // 0x8003D5F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D5FC: sw          $v1, 0x77D8($at)
    MEM_W(0X77D8, ctx->r1) = ctx->r3;
    // 0x8003D600: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D604: sw          $zero, 0x77E0($at)
    MEM_W(0X77E0, ctx->r1) = 0;
    // 0x8003D608: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8003D60C: sh          $a2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r6;
    // 0x8003D610: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D614: sw          $zero, 0x78D0($at)
    MEM_W(0X78D0, ctx->r1) = 0;
    // 0x8003D618: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8003D61C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D620: sb          $zero, 0x78FC($at)
    MEM_B(0X78FC, ctx->r1) = 0;
    // 0x8003D624: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8003D628: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D62C: sw          $zero, 0x7920($at)
    MEM_W(0X7920, ctx->r1) = 0;
    // 0x8003D630: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D634: sw          $zero, 0x7924($at)
    MEM_W(0X7924, ctx->r1) = 0;
    // 0x8003D638: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D63C: sw          $zero, 0x7928($at)
    MEM_W(0X7928, ctx->r1) = 0;
    // 0x8003D640: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D644: sw          $zero, 0x792C($at)
    MEM_W(0X792C, ctx->r1) = 0;
    // 0x8003D648: jal         0x80024088
    // 0x8003D64C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    func_80024088_24C88(rdram, ctx);
        goto after_7;
    // 0x8003D64C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_7:
    // 0x8003D650: lui         $t2, 0x8007
    ctx->r10 = S32(0X8007 << 16);
    // 0x8003D654: lw          $t2, 0x7860($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7860);
    // 0x8003D658: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x8003D65C: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x8003D660: sw          $t1, 0x785C($at)
    MEM_W(0X785C, ctx->r1) = ctx->r9;
    // 0x8003D664: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x8003D668: sb          $zero, 0x5C($t2)
    MEM_B(0X5C, ctx->r10) = 0;
    // 0x8003D66C: lw          $t3, 0x7860($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7860);
    // 0x8003D670: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D674: sb          $zero, 0x5D($t3)
    MEM_B(0X5D, ctx->r11) = 0;
L_8003D678:
    // 0x8003D678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D67C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003D680: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003D684: jr          $ra
    // 0x8003D688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003D688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003C328_3CF28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C328: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C32C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C330: addiu       $a0, $a0, 0x172C
    ctx->r4 = ADD32(ctx->r4, 0X172C);
    // 0x8003C334: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003C338: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8003C33C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003C340: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C344: sb          $t7, 0x92($t8)
    MEM_B(0X92, ctx->r24) = ctx->r15;
    // 0x8003C348: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8003C34C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8003C350: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003C354: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8003C358: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x8003C35C: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8003C360: sh          $t3, 0x8E($t4)
    MEM_H(0X8E, ctx->r12) = ctx->r11;
    // 0x8003C364: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8003C368: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C36C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8003C370: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8003C374: lbu         $t9, 0x0($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X0);
    // 0x8003C378: lhu         $t7, 0x8E($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8E);
    // 0x8003C37C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8003C380: sh          $t0, 0x8E($v0)
    MEM_H(0X8E, ctx->r2) = ctx->r8;
    // 0x8003C384: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8003C388: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8003C38C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8003C390: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x8003C394: sb          $zero, 0x8D($t3)
    MEM_B(0X8D, ctx->r11) = 0;
    // 0x8003C398: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C39C: lbu         $t4, 0x8D($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X8D);
    // 0x8003C3A0: sh          $t4, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r12;
    // 0x8003C3A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C3A8: lbu         $t5, 0x92($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X92);
    // 0x8003C3AC: bne         $t5, $zero, L_8003C3B8
    if (ctx->r13 != 0) {
        // 0x8003C3B0: nop
    
            goto L_8003C3B8;
    }
    // 0x8003C3B0: nop

    // 0x8003C3B4: sh          $zero, 0x38($v0)
    MEM_H(0X38, ctx->r2) = 0;
L_8003C3B8:
    // 0x8003C3B8: jr          $ra
    // 0x8003C3BC: nop

    TRACE_RETURN()
    return;
    // 0x8003C3BC: nop

;}
RECOMP_FUNC void func_800108BC_114BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800108BC: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x800108C0: addiu       $t7, $t7, 0x37C0
    ctx->r15 = ADD32(ctx->r15, 0X37C0);
    // 0x800108C4: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800108C8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800108CC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800108D0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x800108D4: lui         $t8, 0xB800
    ctx->r24 = S32(0XB800 << 16);
    // 0x800108D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800108DC: jr          $ra
    // 0x800108E0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x800108E0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8003A1E8_3ADE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A1E8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003A1EC: addiu       $v0, $v0, 0x9D8
    ctx->r2 = ADD32(ctx->r2, 0X9D8);
    // 0x8003A1F0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8003A1F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003A1F8: sb          $zero, 0x9DA($at)
    MEM_B(0X9DA, ctx->r1) = 0;
    // 0x8003A1FC: jr          $ra
    // 0x8003A200: nop

    TRACE_RETURN()
    return;
    // 0x8003A200: nop

;}
RECOMP_FUNC void func_80023DF0_249F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80023DF0: bgez        $a0, L_80023E00
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023DF4: sra         $t6, $a0, 3
        ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
            goto L_80023E00;
    }
    // 0x80023DF4: sra         $t6, $a0, 3
    ctx->r14 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80023DF8: addiu       $at, $a0, 0x7
    ctx->r1 = ADD32(ctx->r4, 0X7);
    // 0x80023DFC: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_80023E00:
    // 0x80023E00: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80023E04: addiu       $t8, $t8, -0x7170
    ctx->r24 = ADD32(ctx->r24, -0X7170);
    // 0x80023E08: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80023E0C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80023E10: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80023E14: bgez        $a0, L_80023E28
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80023E18: andi        $t0, $a0, 0x7
        ctx->r8 = ctx->r4 & 0X7;
            goto L_80023E28;
    }
    // 0x80023E18: andi        $t0, $a0, 0x7
    ctx->r8 = ctx->r4 & 0X7;
    // 0x80023E1C: beq         $t0, $zero, L_80023E28
    if (ctx->r8 == 0) {
        // 0x80023E20: nop
    
            goto L_80023E28;
    }
    // 0x80023E20: nop

    // 0x80023E24: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
L_80023E28:
    // 0x80023E28: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80023E2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80023E30: sllv        $t4, $t2, $t1
    ctx->r12 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x80023E34: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80023E38: jr          $ra
    // 0x80023E3C: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x80023E3C: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void func_8003CB64_3D764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CB64: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003CB68: addiu       $v0, $v0, 0x1728
    ctx->r2 = ADD32(ctx->r2, 0X1728);
    // 0x8003CB6C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8003CB70: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003CB74: sb          $zero, 0x70($t6)
    MEM_B(0X70, ctx->r14) = 0;
    // 0x8003CB78: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8003CB7C: lw          $t7, 0x172C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X172C);
    // 0x8003CB80: sw          $t7, 0x74($t8)
    MEM_W(0X74, ctx->r24) = ctx->r15;
    // 0x8003CB84: jr          $ra
    // 0x8003CB88: nop

    TRACE_RETURN()
    return;
    // 0x8003CB88: nop

;}
RECOMP_FUNC void func_8000B5BC_C1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8000B5BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8000B5C0: addiu       $v0, $v0, -0x3A28
    ctx->r2 = ADD32(ctx->r2, -0X3A28);
    // 0x8000B5C4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8000B5C8: jr          $ra
    // 0x8000B5CC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x8000B5CC: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void func_80038D94_39994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038D94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80038D98: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80038D9C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80038DA0: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80038DA4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80038DA8: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80038DAC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80038DB0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80038DB4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80038DB8: bne         $a1, $zero, L_80038DD0
    if (ctx->r5 != 0) {
        // 0x80038DBC: slti        $at, $a1, 0x101
        ctx->r1 = SIGNED(ctx->r5) < 0X101 ? 1 : 0;
            goto L_80038DD0;
    }
    // 0x80038DBC: slti        $at, $a1, 0x101
    ctx->r1 = SIGNED(ctx->r5) < 0X101 ? 1 : 0;
    // 0x80038DC0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80038DC4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x80038DC8: b           L_80038DDC
    // 0x80038DCC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_80038DDC;
    // 0x80038DCC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80038DD0:
    // 0x80038DD0: bne         $at, $zero, L_80038DDC
    if (ctx->r1 != 0) {
        // 0x80038DD4: nop
    
            goto L_80038DDC;
    }
    // 0x80038DD4: nop

    // 0x80038DD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
L_80038DDC:
    // 0x80038DDC: bgez        $a2, L_80038DEC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80038DE0: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80038DEC;
    }
    // 0x80038DE0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80038DE4: b           L_80038DFC
    // 0x80038DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80038DFC;
    // 0x80038DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80038DEC:
    // 0x80038DEC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x80038DF0: bne         $at, $zero, L_80038DFC
    if (ctx->r1 != 0) {
        // 0x80038DF4: nop
    
            goto L_80038DFC;
    }
    // 0x80038DF4: nop

    // 0x80038DF8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
L_80038DFC:
    // 0x80038DFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80038E00: sh          $a0, 0x2974($at)
    MEM_H(0X2974, ctx->r1) = ctx->r4;
    // 0x80038E04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80038E08: sh          $a1, 0x2976($at)
    MEM_H(0X2976, ctx->r1) = ctx->r5;
    // 0x80038E0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80038E10: sll         $t0, $v0, 8
    ctx->r8 = S32(ctx->r2 << 8);
    // 0x80038E14: sh          $t0, 0x2978($at)
    MEM_H(0X2978, ctx->r1) = ctx->r8;
    // 0x80038E18: jr          $ra
    // 0x80038E1C: nop

    TRACE_RETURN()
    return;
    // 0x80038E1C: nop

;}
RECOMP_FUNC void func_80012500_13100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80012500: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x80012504: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80012508: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001250C: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
    // 0x80012510: jr          $ra
    // 0x80012514: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x80012514: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_800352EC_35EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800352EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800352F0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800352F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800352F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800352FC: jal         0x80035314
    // 0x80035300: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    func_80035314_35F14(rdram, ctx);
        goto after_0;
    // 0x80035300: lw          $a0, -0x254C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X254C);
    after_0:
    // 0x80035304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003530C: jr          $ra
    // 0x80035310: nop

    TRACE_RETURN()
    return;
    // 0x80035310: nop

;}
RECOMP_FUNC void ptstart(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047F70: jr          $ra
    // 0x80047F74: nop

    TRACE_RETURN()
    return;
    // 0x80047F74: nop

    // 0x80047F78: jr          $ra
    // 0x80047F7C: nop

    TRACE_RETURN()
    return;
    // 0x80047F7C: nop

;}
RECOMP_FUNC void func_8003B1BC_3BDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B1BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B1C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B1C4: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B1C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B1CC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003B1D0: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x8003B1D4: addiu       $t3, $zero, 0x100
    ctx->r11 = ADD32(0, 0X100);
    // 0x8003B1D8: sh          $zero, 0x4C($t6)
    MEM_H(0X4C, ctx->r14) = 0;
    // 0x8003B1DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B1E0: lhu         $t7, 0x4E($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X4E);
    // 0x8003B1E4: beq         $t7, $zero, L_8003B228
    if (ctx->r15 == 0) {
        // 0x8003B1E8: nop
    
            goto L_8003B228;
    }
    // 0x8003B1E8: nop

    // 0x8003B1EC: jal         0x8003AFB0
    // 0x8003B1F0: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_0;
    // 0x8003B1F0: sh          $t8, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r24;
    after_0:
    // 0x8003B1F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B1F8: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003B1FC: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003B200: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x8003B204: sb          $zero, 0x49($t9)
    MEM_B(0X49, ctx->r25) = 0;
    // 0x8003B208: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8003B20C: sh          $t0, 0x4A($t1)
    MEM_H(0X4A, ctx->r9) = ctx->r8;
    // 0x8003B210: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003B214: lhu         $t2, 0x4E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X4E);
    // 0x8003B218: jal         0x8003AFB0
    // 0x8003B21C: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_1;
    // 0x8003B21C: sh          $t2, 0x4C($v0)
    MEM_H(0X4C, ctx->r2) = ctx->r10;
    after_1:
    // 0x8003B220: b           L_8003B23C
    // 0x8003B224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B23C;
    // 0x8003B224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B228:
    // 0x8003B228: jal         0x8003AFB0
    // 0x8003B22C: sh          $t3, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r11;
    func_8003AFB0_3BBB0(rdram, ctx);
        goto after_2;
    // 0x8003B22C: sh          $t3, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = ctx->r11;
    after_2:
    // 0x8003B230: jal         0x8003B248
    // 0x8003B234: nop

    func_8003B248_3BE48(rdram, ctx);
        goto after_3;
    // 0x8003B234: nop

    after_3:
    // 0x8003B238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B23C:
    // 0x8003B23C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B240: jr          $ra
    // 0x8003B244: nop

    TRACE_RETURN()
    return;
    // 0x8003B244: nop

;}
RECOMP_FUNC void func_800385C4_391C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800385C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800385C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800385CC: lui         $s4, 0x8007
    ctx->r20 = S32(0X8007 << 16);
    // 0x800385D0: addiu       $s4, $s4, -0x1DCC
    ctx->r20 = ADD32(ctx->r20, -0X1DCC);
    // 0x800385D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800385D8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800385DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800385E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800385E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800385E8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800385EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800385F0: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x800385F4: beq         $t6, $zero, L_80038624
    if (ctx->r14 == 0) {
        // 0x800385F8: lui         $s1, 0x8017
        ctx->r17 = S32(0X8017 << 16);
            goto L_80038624;
    }
    // 0x800385F8: lui         $s1, 0x8017
    ctx->r17 = S32(0X8017 << 16);
    // 0x800385FC: addiu       $s1, $s1, 0x2858
    ctx->r17 = ADD32(ctx->r17, 0X2858);
    // 0x80038600: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80038604:
    // 0x80038604: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80038608: jal         0x80040110
    // 0x8003860C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8003860C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80038610: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80038614: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038618: sltu        $at, $s0, $t7
    ctx->r1 = ctx->r16 < ctx->r15 ? 1 : 0;
    // 0x8003861C: bnel        $at, $zero, L_80038604
    if (ctx->r1 != 0) {
        // 0x80038620: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80038604;
    }
    goto skip_0;
    // 0x80038620: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80038624:
    // 0x80038624: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x80038628: addiu       $s2, $s2, 0x1FB8
    ctx->r18 = ADD32(ctx->r18, 0X1FB8);
    // 0x8003862C: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x80038630: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x80038634: addiu       $s3, $s3, -0x1DD0
    ctx->r19 = ADD32(ctx->r19, -0X1DD0);
    // 0x80038638: beq         $s0, $zero, L_800386A4
    if (ctx->r16 == 0) {
        // 0x8003863C: nop
    
            goto L_800386A4;
    }
    // 0x8003863C: nop

L_80038640:
    // 0x80038640: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80038644: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x80038648: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003864C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80038650: sltu        $at, $t0, $t8
    ctx->r1 = ctx->r8 < ctx->r24 ? 1 : 0;
    // 0x80038654: beq         $at, $zero, L_8003869C
    if (ctx->r1 == 0) {
        // 0x80038658: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8003869C;
    }
    // 0x80038658: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003865C: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80038660: bne         $s0, $t1, L_8003866C
    if (ctx->r16 != ctx->r9) {
        // 0x80038664: nop
    
            goto L_8003866C;
    }
    // 0x80038664: nop

    // 0x80038668: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
L_8003866C:
    // 0x8003866C: jal         0x800475F0
    // 0x80038670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x80038670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80038674: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80038678: beql        $a1, $zero, L_80038694
    if (ctx->r5 == 0) {
        // 0x8003867C: sw          $s0, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->r16;
            goto L_80038694;
    }
    goto skip_1;
    // 0x8003867C: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
    skip_1:
    // 0x80038680: jal         0x80047620
    // 0x80038684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x80038684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80038688: b           L_8003869C
    // 0x8003868C: nop

        goto L_8003869C;
    // 0x8003868C: nop

    // 0x80038690: sw          $s0, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r16;
L_80038694:
    // 0x80038694: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80038698: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_8003869C:
    // 0x8003869C: bne         $s1, $zero, L_80038640
    if (ctx->r17 != 0) {
        // 0x800386A0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80038640;
    }
    // 0x800386A0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_800386A4:
    // 0x800386A4: lui         $s3, 0x8007
    ctx->r19 = S32(0X8007 << 16);
    // 0x800386A8: addiu       $s3, $s3, -0x1DD0
    ctx->r19 = ADD32(ctx->r19, -0X1DD0);
    // 0x800386AC: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x800386B0: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x800386B4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800386B8: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x800386BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800386C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800386C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800386C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800386CC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800386D0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800386D4: jr          $ra
    // 0x800386D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800386D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800362DC_36EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800362DC: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x800362E0: beq         $v1, $zero, L_80036300
    if (ctx->r3 == 0) {
        // 0x800362E4: nop
    
            goto L_80036300;
    }
    // 0x800362E4: nop

    // 0x800362E8: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
L_800362EC:
    // 0x800362EC: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x800362F0: sb          $t7, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r15;
    // 0x800362F4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800362F8: bnel        $v1, $zero, L_800362EC
    if (ctx->r3 != 0) {
        // 0x800362FC: lbu         $t6, 0x4($v1)
        ctx->r14 = MEM_BU(ctx->r3, 0X4);
            goto L_800362EC;
    }
    goto skip_0;
    // 0x800362FC: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
    skip_0:
L_80036300:
    // 0x80036300: jr          $ra
    // 0x80036304: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x80036304: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80003578_4178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80003578: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8000357C: addiu       $v1, $v1, -0x3A38
    ctx->r3 = ADD32(ctx->r3, -0X3A38);
    // 0x80003580: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80003584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003588: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x8000358C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003590: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80003594: lbu         $t6, -0x5228($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X5228);
    // 0x80003598: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8000359C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800035A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800035A4: sb          $t7, -0x5228($at)
    MEM_B(-0X5228, ctx->r1) = ctx->r15;
    // 0x800035A8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x800035AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x800035B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800035B4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800035B8: jal         0x80003428
    // 0x800035BC: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    func_80003428_4028(rdram, ctx);
        goto after_0;
    // 0x800035BC: sb          $zero, -0x5227($at)
    MEM_B(-0X5227, ctx->r1) = 0;
    after_0:
    // 0x800035C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800035C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800035C8: jr          $ra
    // 0x800035CC: nop

    TRACE_RETURN()
    return;
    // 0x800035CC: nop

;}
RECOMP_FUNC void proutSprintf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048968: jal         0x8004A4A0
    // 0x8004896C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004896C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80048970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048974: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80048978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004897C: jr          $ra
    // 0x80048980: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    TRACE_RETURN()
    return;
    // 0x80048980: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
;}
RECOMP_FUNC void func_8003C934_3D534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C934: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C938: addiu       $v1, $v1, 0x1728
    ctx->r3 = ADD32(ctx->r3, 0X1728);
    // 0x8003C93C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8003C940: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x8003C944: sb          $zero, 0x5E($t6)
    MEM_B(0X5E, ctx->r14) = 0;
    // 0x8003C948: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8003C94C: lw          $t7, 0x172C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X172C);
    // 0x8003C950: sw          $t7, 0x60($t8)
    MEM_W(0X60, ctx->r24) = ctx->r15;
    // 0x8003C954: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x8003C958: sh          $zero, 0x40($t9)
    MEM_H(0X40, ctx->r25) = 0;
    // 0x8003C95C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003C960: lh          $t0, 0x40($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X40);
    // 0x8003C964: sh          $t0, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r8;
    // 0x8003C968: jr          $ra
    // 0x8003C96C: nop

    TRACE_RETURN()
    return;
    // 0x8003C96C: nop

;}
RECOMP_FUNC void func_800273D4_27FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800273D4: jr          $ra
    // 0x800273D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800273D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void guLookAtHilite(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800439E8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x800439EC: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x800439F0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x800439F4: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x800439F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800439FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80043A00: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80043A04: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80043A08: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80043A0C: lwc1        $f16, 0xB8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80043A10: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80043A14: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80043A18: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80043A1C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80043A20: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80043A24: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80043A28: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80043A2C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x80043A30: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80043A34: lwc1        $f16, 0xD0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80043A38: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80043A3C: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x80043A40: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x80043A44: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80043A48: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x80043A4C: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x80043A50: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80043A54: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x80043A58: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x80043A5C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80043A60: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x80043A64: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x80043A68: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x80043A6C: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80043A70: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80043A74: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x80043A78: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x80043A7C: jal         0x800432B0
    // 0x80043A80: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    guLookAtHiliteF(rdram, ctx);
        goto after_0;
    // 0x80043A80: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    after_0:
    // 0x80043A84: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80043A88: jal         0x80043AA0
    // 0x80043A8C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x80043A8C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    after_1:
    // 0x80043A90: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80043A94: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80043A98: jr          $ra
    // 0x80043A9C: nop

    TRACE_RETURN()
    return;
    // 0x80043A9C: nop

;}
RECOMP_FUNC void func_80036A28_37628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036A28: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80036A2C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x80036A30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80036A34: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80036A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036A3C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80036A40: lw          $a1, -0x4FEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4FEC);
    // 0x80036A44: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80036A48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80036A4C: beql        $a1, $zero, L_80036A64
    if (ctx->r5 == 0) {
        // 0x80036A50: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80036A64;
    }
    goto skip_0;
    // 0x80036A50: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    skip_0:
    // 0x80036A54: jal         0x80036158
    // 0x80036A58: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80036158_36D58(rdram, ctx);
        goto after_0;
    // 0x80036A58: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x80036A5C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80036A60: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80036A64:
    // 0x80036A64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80036A68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80036A6C: jal         0x80035EEC
    // 0x80036A70: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_1;
    // 0x80036A70: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80036A74: bne         $v0, $zero, L_80036A8C
    if (ctx->r2 != 0) {
        // 0x80036A78: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_80036A8C;
    }
    // 0x80036A78: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80036A7C: jal         0x80035044
    // 0x80036A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_2;
    // 0x80036A80: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x80036A84: b           L_80036B70
    // 0x80036A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80036B70;
    // 0x80036A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036A8C:
    // 0x80036A8C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80036A90: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x80036A94: lw          $t7, 0x1C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X1C);
    // 0x80036A98: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x80036A9C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80036AA0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80036AA4: sw          $t7, -0x4FEC($at)
    MEM_W(-0X4FEC, ctx->r1) = ctx->r15;
    // 0x80036AA8: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80036AAC: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x80036AB0: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x80036AB4: lui         $t9, 0x8007
    ctx->r25 = S32(0X8007 << 16);
    // 0x80036AB8: addiu       $t9, $t9, -0x2C14
    ctx->r25 = ADD32(ctx->r25, -0X2C14);
    // 0x80036ABC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80036AC0: sw          $t9, 0x5F78($at)
    MEM_W(0X5F78, ctx->r1) = ctx->r25;
    // 0x80036AC4: lui         $a1, 0x8007
    ctx->r5 = S32(0X8007 << 16);
    // 0x80036AC8: addiu       $a1, $a1, -0x2C20
    ctx->r5 = ADD32(ctx->r5, -0X2C20);
    // 0x80036ACC: jal         0x800086D8
    // 0x80036AD0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800086D8_92D8(rdram, ctx);
        goto after_3;
    // 0x80036AD0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_3:
    // 0x80036AD4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80036AD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80036ADC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80036AE0: lbu         $t3, 0x8($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X8);
    // 0x80036AE4: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x80036AE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80036AEC: ori         $t5, $t3, 0x4
    ctx->r13 = ctx->r11 | 0X4;
    // 0x80036AF0: andi        $t6, $t5, 0x1F
    ctx->r14 = ctx->r13 & 0X1F;
    // 0x80036AF4: ori         $t7, $t6, 0x60
    ctx->r15 = ctx->r14 | 0X60;
    // 0x80036AF8: sb          $t5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r13;
    // 0x80036AFC: sb          $t7, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r15;
    // 0x80036B00: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80036B04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80036B08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80036B0C: srl         $t1, $v0, 15
    ctx->r9 = S32(U32(ctx->r2) >> 15);
    // 0x80036B10: xori        $t2, $t1, 0x6
    ctx->r10 = ctx->r9 ^ 0X6;
    // 0x80036B14: sll         $t3, $t2, 28
    ctx->r11 = S32(ctx->r10 << 28);
    // 0x80036B18: srl         $t4, $t3, 13
    ctx->r12 = S32(U32(ctx->r11) >> 13);
    // 0x80036B1C: xor         $t5, $t4, $v0
    ctx->r13 = ctx->r12 ^ ctx->r2;
    // 0x80036B20: sw          $t5, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r13;
    // 0x80036B24: lbu         $t6, 0xA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XA);
    // 0x80036B28: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x80036B2C: sb          $t8, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r24;
    // 0x80036B30: andi        $t7, $t6, 0xFF87
    ctx->r15 = ctx->r14 & 0XFF87;
    // 0x80036B34: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80036B38: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x80036B3C: ori         $t8, $t7, 0x28
    ctx->r24 = ctx->r15 | 0X28;
    // 0x80036B40: sh          $zero, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = 0;
    // 0x80036B44: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x80036B48: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
    // 0x80036B4C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80036B50: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80036B54: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80036B58: sb          $t0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r8;
    // 0x80036B5C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x80036B60: sb          $t8, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r24;
    // 0x80036B64: swc1        $f4, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f4.u32l;
    // 0x80036B68: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x80036B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80036B70:
    // 0x80036B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80036B74: jr          $ra
    // 0x80036B78: nop

    TRACE_RETURN()
    return;
    // 0x80036B78: nop

;}
RECOMP_FUNC void func_80008798_9398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80008798: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8000879C: addiu       $a0, $a0, -0x3A34
    ctx->r4 = ADD32(ctx->r4, -0X3A34);
    // 0x800087A0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800087A4: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x800087A8: addiu       $t8, $t8, -0x2A00
    ctx->r24 = ADD32(ctx->r24, -0X2A00);
    // 0x800087AC: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x800087B0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800087B4: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x800087B8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800087BC: jr          $ra
    // 0x800087C0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x800087C0: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_80036840_37440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036848: jal         0x80036860
    // 0x8003684C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80036860_37460(rdram, ctx);
        goto after_0;
    // 0x8003684C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80036850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80036858: jr          $ra
    // 0x8003685C: nop

    TRACE_RETURN()
    return;
    // 0x8003685C: nop

;}
RECOMP_FUNC void func_8003F5FC_401FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F5FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003F600: jr          $ra
    // 0x8003F604: sw          $a0, 0x77F8($at)
    MEM_W(0X77F8, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8003F604: sw          $a0, 0x77F8($at)
    MEM_W(0X77F8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_800139A4_145A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800139A4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800139A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800139AC: slti        $v0, $t6, 0x30
    ctx->r2 = SIGNED(ctx->r14) < 0X30 ? 1 : 0;
    // 0x800139B0: beq         $v0, $zero, L_800139DC
    if (ctx->r2 == 0) {
        // 0x800139B4: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_800139DC;
    }
    // 0x800139B4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800139B8: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800139BC: addiu       $a0, $t6, 0x1
    ctx->r4 = ADD32(ctx->r14, 0X1);
    // 0x800139C0: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x800139C4: addiu       $a1, $a1, 0x7FC0
    ctx->r5 = ADD32(ctx->r5, 0X7FC0);
    // 0x800139C8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x800139CC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800139D0: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x800139D4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800139D8: slti        $v0, $t9, 0x30
    ctx->r2 = SIGNED(ctx->r25) < 0X30 ? 1 : 0;
L_800139DC:
    // 0x800139DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800139E0: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x800139E4: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x800139E8: addiu       $a1, $a1, 0x7FC0
    ctx->r5 = ADD32(ctx->r5, 0X7FC0);
    // 0x800139EC: beq         $v0, $zero, L_80013A1C
    if (ctx->r2 == 0) {
        // 0x800139F0: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_80013A1C;
    }
    // 0x800139F0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
L_800139F4:
    // 0x800139F4: sll         $t1, $a0, 3
    ctx->r9 = S32(ctx->r4 << 3);
    // 0x800139F8: slti        $v1, $a0, 0x30
    ctx->r3 = SIGNED(ctx->r4) < 0X30 ? 1 : 0;
    // 0x800139FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80013A00: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x80013A04: addu        $v0, $a1, $t1
    ctx->r2 = ADD32(ctx->r5, ctx->r9);
    // 0x80013A08: andi        $t2, $zero, 0xFFFF
    ctx->r10 = 0 & 0XFFFF;
    // 0x80013A0C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80013A10: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80013A14: bne         $v1, $zero, L_800139F4
    if (ctx->r3 != 0) {
        // 0x80013A18: or          $a0, $t3, $zero
        ctx->r4 = ctx->r11 | 0;
            goto L_800139F4;
    }
    // 0x80013A18: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
L_80013A1C:
    // 0x80013A1C: jr          $ra
    // 0x80013A20: nop

    TRACE_RETURN()
    return;
    // 0x80013A20: nop

;}
RECOMP_FUNC void alSynStopVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048788: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004878C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80048790: beql        $t6, $zero, L_800487EC
    if (ctx->r14 == 0) {
        // 0x80048794: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800487EC;
    }
    goto skip_0;
    // 0x80048794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80048798: jal         0x80047960
    // 0x8004879C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8004879C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800487A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800487A4: beq         $v0, $zero, L_800487E8
    if (ctx->r2 == 0) {
        // 0x800487A8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_800487E8;
    }
    // 0x800487A8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800487AC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800487B0: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x800487B4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x800487B8: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800487BC: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x800487C0: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x800487C4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800487C8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800487CC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x800487D0: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x800487D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800487D8: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x800487DC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800487E0: jalr        $t9
    // 0x800487E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800487E4: nop

    after_1:
L_800487E8:
    // 0x800487E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800487EC:
    // 0x800487EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800487F0: jr          $ra
    // 0x800487F4: nop

    TRACE_RETURN()
    return;
    // 0x800487F4: nop

;}
RECOMP_FUNC void func_800185C8_191C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800185C8: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x800185CC: addiu       $v0, $v0, -0x7B08
    ctx->r2 = ADD32(ctx->r2, -0X7B08);
    // 0x800185D0: lui         $v1, 0x8017
    ctx->r3 = S32(0X8017 << 16);
    // 0x800185D4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800185D8: addiu       $v1, $v1, -0x7B58
    ctx->r3 = ADD32(ctx->r3, -0X7B58);
    // 0x800185DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800185E0: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800185E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800185E8: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x800185EC: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800185F0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800185F4: sb          $t6, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r14;
    // 0x800185F8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800185FC: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80018600: lbu         $t1, 0x4($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X4);
    // 0x80018604: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80018608: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8001860C: sb          $t1, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r9;
    // 0x80018610: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80018614: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80018618: lbu         $t8, 0x5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5);
    // 0x8001861C: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80018620: addu        $t0, $t7, $t6
    ctx->r8 = ADD32(ctx->r15, ctx->r14);
    // 0x80018624: sb          $t8, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r24;
    // 0x80018628: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8001862C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x80018630: sll         $t4, $t2, 4
    ctx->r12 = S32(ctx->r10 << 4);
    // 0x80018634: addu        $t1, $t3, $t4
    ctx->r9 = ADD32(ctx->r11, ctx->r12);
    // 0x80018638: sb          $zero, 0xB($t1)
    MEM_B(0XB, ctx->r9) = 0;
    // 0x8001863C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80018640: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80018644: sll         $t7, $t9, 4
    ctx->r15 = S32(ctx->r25 << 4);
    // 0x80018648: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x8001864C: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80018650: sb          $t6, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r14;
    // 0x80018654: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80018658: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8001865C: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x80018660: addu        $a1, $t8, $t2
    ctx->r5 = ADD32(ctx->r24, ctx->r10);
    // 0x80018664: lbu         $t3, 0x9($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X9);
    // 0x80018668: sb          $t3, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r11;
    // 0x8001866C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80018670: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80018674: sll         $t9, $t1, 4
    ctx->r25 = S32(ctx->r9 << 4);
    // 0x80018678: addu        $a1, $t4, $t9
    ctx->r5 = ADD32(ctx->r12, ctx->r25);
    // 0x8001867C: lbu         $t5, 0xA($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0XA);
    // 0x80018680: sb          $t5, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r13;
    // 0x80018684: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80018688: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001868C: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x80018690: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x80018694: sb          $zero, 0xF($t8)
    MEM_B(0XF, ctx->r24) = 0;
    // 0x80018698: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x8001869C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x800186A0: lb          $t2, 0x0($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X0);
    // 0x800186A4: sll         $t4, $t1, 4
    ctx->r12 = S32(ctx->r9 << 4);
    // 0x800186A8: addu        $t9, $t3, $t4
    ctx->r25 = ADD32(ctx->r11, ctx->r12);
    // 0x800186AC: sb          $t2, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r10;
    // 0x800186B0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800186B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x800186B8: lb          $t5, 0x1($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X1);
    // 0x800186BC: sll         $t0, $t7, 4
    ctx->r8 = S32(ctx->r15 << 4);
    // 0x800186C0: addu        $t8, $t6, $t0
    ctx->r24 = ADD32(ctx->r14, ctx->r8);
    // 0x800186C4: sb          $t5, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r13;
    // 0x800186C8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800186CC: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x800186D0: lb          $t1, 0x2($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X2);
    // 0x800186D4: sll         $t2, $t4, 4
    ctx->r10 = S32(ctx->r12 << 4);
    // 0x800186D8: addu        $t9, $t3, $t2
    ctx->r25 = ADD32(ctx->r11, ctx->r10);
    // 0x800186DC: sb          $t1, 0x12($t9)
    MEM_B(0X12, ctx->r25) = ctx->r9;
    // 0x800186E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800186E4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800186E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800186EC: sll         $t0, $t6, 4
    ctx->r8 = S32(ctx->r14 << 4);
    // 0x800186F0: addu        $t5, $t7, $t0
    ctx->r13 = ADD32(ctx->r15, ctx->r8);
    // 0x800186F4: sb          $zero, 0x13($t5)
    MEM_B(0X13, ctx->r13) = 0;
    // 0x800186F8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800186FC: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x80018700: jal         0x800196F0
    // 0x80018704: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    func_800196F0_1A2F0(rdram, ctx);
        goto after_0;
    // 0x80018704: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    after_0:
    // 0x80018708: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001870C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80018710: jr          $ra
    // 0x80018714: nop

    TRACE_RETURN()
    return;
    // 0x80018714: nop

;}
RECOMP_FUNC void func_80035DFC_369FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035DFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035E00: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80035E04: sll         $s4, $a1, 16
    ctx->r20 = S32(ctx->r5 << 16);
    // 0x80035E08: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80035E0C: sll         $v0, $t6, 1
    ctx->r2 = S32(ctx->r14 << 1);
    // 0x80035E10: lui         $t8, 0x8007
    ctx->r24 = S32(0X8007 << 16);
    // 0x80035E14: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80035E18: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80035E1C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x80035E20: lhu         $t8, -0x2CB0($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X2CB0);
    // 0x80035E24: lh          $t9, -0x2528($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X2528);
    // 0x80035E28: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80035E2C: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x80035E30: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80035E34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80035E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80035E3C: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035E40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80035E44: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80035E48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80035E4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80035E50: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80035E54: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80035E58: beq         $at, $zero, L_80035E68
    if (ctx->r1 == 0) {
        // 0x80035E5C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80035E68;
    }
    // 0x80035E5C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80035E60: b           L_80035ECC
    // 0x80035E64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035ECC;
    // 0x80035E64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035E68:
    // 0x80035E68: blez        $s3, L_80035EC8
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80035E6C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80035EC8;
    }
    // 0x80035E6C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80035E70:
    // 0x80035E70: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80035E74: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80035E78: jal         0x80035D8C
    // 0x80035E7C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80035D8C_3698C(rdram, ctx);
        goto after_0;
    // 0x80035E7C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x80035E80: bne         $v0, $zero, L_80035E90
    if (ctx->r2 != 0) {
        // 0x80035E84: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80035E90;
    }
    // 0x80035E84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80035E88: b           L_80035ECC
    // 0x80035E8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80035ECC;
    // 0x80035E8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035E90:
    // 0x80035E90: bne         $s2, $zero, L_80035E9C
    if (ctx->r18 != 0) {
        // 0x80035E94: andi        $t2, $s1, 0xFFFF
        ctx->r10 = ctx->r17 & 0XFFFF;
            goto L_80035E9C;
    }
    // 0x80035E94: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x80035E98: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80035E9C:
    // 0x80035E9C: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x80035EA0: slt         $at, $t2, $s3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80035EA4: bnel        $a0, $zero, L_80035EBC
    if (ctx->r4 != 0) {
        // 0x80035EA8: sw          $v0, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r2;
            goto L_80035EBC;
    }
    goto skip_0;
    // 0x80035EA8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    skip_0:
    // 0x80035EAC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80035EB0: b           L_80035EC0
    // 0x80035EB4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
        goto L_80035EC0;
    // 0x80035EB4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80035EB8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
L_80035EBC:
    // 0x80035EBC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_80035EC0:
    // 0x80035EC0: bne         $at, $zero, L_80035E70
    if (ctx->r1 != 0) {
        // 0x80035EC4: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_80035E70;
    }
    // 0x80035EC4: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
L_80035EC8:
    // 0x80035EC8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_80035ECC:
    // 0x80035ECC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80035ED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80035ED4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80035ED8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80035EDC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80035EE0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80035EE4: jr          $ra
    // 0x80035EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80035EE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001D230_1DE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8001D230: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8001D234: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8001D238: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8001D23C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001D240: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001D244: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001D248: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8001D24C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8001D250: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8001D254: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8001D258: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    // 0x8001D25C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x8001D260: jal         0x8001D898
    // 0x8001D264: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    func_8001D898_1E498(rdram, ctx);
        goto after_0;
    // 0x8001D264: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8001D268: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001D26C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001D270: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001D274: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8001D278: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x8001D27C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001D280: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001D284: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8001D288: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8001D28C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8001D290: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8001D294: bc1fl       L_8001D2A8
    if (!c1cs) {
        // 0x8001D298: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_8001D2A8;
    }
    goto skip_0;
    // 0x8001D298: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_0:
    // 0x8001D29C: b           L_8001D2A8
    // 0x8001D2A0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8001D2A8;
    // 0x8001D2A0: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x8001D2A4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8001D2A8:
    // 0x8001D2A8: ldc1        $f16, -0x46F0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X46F0);
    // 0x8001D2AC: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8001D2B0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001D2B4: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x8001D2B8: nop

    // 0x8001D2BC: bc1f        L_8001D2E0
    if (!c1cs) {
        // 0x8001D2C0: nop
    
            goto L_8001D2E0;
    }
    // 0x8001D2C0: nop

    // 0x8001D2C4: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x8001D2C8: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001D2CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8001D2D0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x8001D2D4: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001D2D8: b           L_8001D380
    // 0x8001D2DC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_8001D380;
    // 0x8001D2DC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_8001D2E0:
    // 0x8001D2E0: jal         0x800040A8
    // 0x8001D2E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    func_800040A8_4CA8(rdram, ctx);
        goto after_1;
    // 0x8001D2E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    after_1:
    // 0x8001D2E8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8001D2EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001D2F0: lhu         $t1, 0x62($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X62);
    // 0x8001D2F4: lhu         $t7, 0x62($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X62);
    // 0x8001D2F8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8001D2FC: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x8001D300: andi        $a0, $t2, 0x3FF
    ctx->r4 = ctx->r10 & 0X3FF;
    // 0x8001D304: slti        $at, $a0, 0x300
    ctx->r1 = SIGNED(ctx->r4) < 0X300 ? 1 : 0;
    // 0x8001D308: bc1f        L_8001D328
    if (!c1cs) {
        // 0x8001D30C: addu        $t8, $v0, $t7
        ctx->r24 = ADD32(ctx->r2, ctx->r15);
            goto L_8001D328;
    }
    // 0x8001D30C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8001D310: andi        $a0, $t8, 0x3FF
    ctx->r4 = ctx->r24 & 0X3FF;
    // 0x8001D314: slti        $at, $a0, 0x101
    ctx->r1 = SIGNED(ctx->r4) < 0X101 ? 1 : 0;
    // 0x8001D318: bne         $at, $zero, L_8001D334
    if (ctx->r1 != 0) {
        // 0x8001D31C: nop
    
            goto L_8001D334;
    }
    // 0x8001D31C: nop

    // 0x8001D320: b           L_8001D334
    // 0x8001D324: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
        goto L_8001D334;
    // 0x8001D324: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
L_8001D328:
    // 0x8001D328: beq         $at, $zero, L_8001D334
    if (ctx->r1 == 0) {
        // 0x8001D32C: nop
    
            goto L_8001D334;
    }
    // 0x8001D32C: nop

    // 0x8001D330: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
L_8001D334:
    // 0x8001D334: jal         0x80003EA0
    // 0x8001D338: sh          $a0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r4;
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x8001D338: sh          $a0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r4;
    after_2:
    // 0x8001D33C: lhu         $a0, 0x32($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X32);
    // 0x8001D340: jal         0x80003E10
    // 0x8001D344: div.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    func_80003E10_4A10(rdram, ctx);
        goto after_3;
    // 0x8001D344: div.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f20.fl);
    after_3:
    // 0x8001D348: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8001D34C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001D350: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8001D354: mul.s       $f12, $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x8001D358: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8001D35C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8001D360: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x8001D364: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8001D368: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8001D36C: jal         0x8001D718
    // 0x8001D370: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    func_8001D718_1E318(rdram, ctx);
        goto after_4;
    // 0x8001D370: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    after_4:
    // 0x8001D374: jal         0x8001D394
    // 0x8001D378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x8001D378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8001D37C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001D380:
    // 0x8001D380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001D384: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8001D388: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001D38C: jr          $ra
    // 0x8001D390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8001D390: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80014C00_15800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80014C00: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80014C04: beq         $v0, $zero, L_80014C18
    if (ctx->r2 == 0) {
        // 0x80014C08: nop
    
            goto L_80014C18;
    }
    // 0x80014C08: nop

    // 0x80014C0C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
L_80014C10:
    // 0x80014C10: bnel        $v0, $zero, L_80014C10
    if (ctx->r2 != 0) {
        // 0x80014C14: lw          $v0, 0x8($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X8);
            goto L_80014C10;
    }
    goto skip_0;
    // 0x80014C14: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    skip_0:
L_80014C18:
    // 0x80014C18: jr          $ra
    // 0x80014C1C: nop

    TRACE_RETURN()
    return;
    // 0x80014C1C: nop

;}
RECOMP_FUNC void alAuxBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050760: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80050764: bne         $a1, $at, L_80050788
    if (ctx->r5 != ctx->r1) {
        // 0x80050768: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80050788;
    }
    // 0x80050768: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8005076C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80050770: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80050774: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80050778: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8005077C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80050780: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80050784: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80050788:
    // 0x80050788: jr          $ra
    // 0x8005078C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x8005078C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003EFB0_3FBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EFB0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003EFB4: lw          $v0, 0x77E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77E0);
    // 0x8003EFB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EFBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003EFC0: bne         $v0, $at, L_8003EFF8
    if (ctx->r2 != ctx->r1) {
        // 0x8003EFC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003EFF8;
    }
    // 0x8003EFC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EFC8: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8003EFCC: lw          $t6, 0x77F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X77F4);
    // 0x8003EFD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EFD4: bnel        $t6, $at, L_8003EFFC
    if (ctx->r14 != ctx->r1) {
        // 0x8003EFD8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003EFFC;
    }
    goto skip_0;
    // 0x8003EFD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_0:
    // 0x8003EFDC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003EFE0: lw          $v0, 0x7800($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7800);
    // 0x8003EFE4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8003EFE8: jal         0x8003EBAC
    // 0x8003EFEC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    func_8003EBAC_3F7AC(rdram, ctx);
        goto after_0;
    // 0x8003EFEC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x8003EFF0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003EFF4: lw          $v0, 0x77E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77E0);
L_8003EFF8:
    // 0x8003EFF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8003EFFC:
    // 0x8003EFFC: bne         $v0, $at, L_8003F00C
    if (ctx->r2 != ctx->r1) {
        // 0x8003F000: nop
    
            goto L_8003F00C;
    }
    // 0x8003F000: nop

    // 0x8003F004: jal         0x8003E234
    // 0x8003F008: nop

    func_8003E234_3EE34(rdram, ctx);
        goto after_1;
    // 0x8003F008: nop

    after_1:
L_8003F00C:
    // 0x8003F00C: lui         $t7, 0x8007
    ctx->r15 = S32(0X8007 << 16);
    // 0x8003F010: lw          $t7, 0x785C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X785C);
    // 0x8003F014: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x8003F018: beql        $t7, $at, L_8003F02C
    if (ctx->r15 == ctx->r1) {
        // 0x8003F01C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003F02C;
    }
    goto skip_1;
    // 0x8003F01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8003F020: jal         0x8003ED60
    // 0x8003F024: nop

    func_8003ED60_3F960(rdram, ctx);
        goto after_2;
    // 0x8003F024: nop

    after_2:
    // 0x8003F028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003F02C:
    // 0x8003F02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F030: jr          $ra
    // 0x8003F034: nop

    TRACE_RETURN()
    return;
    // 0x8003F034: nop

;}
