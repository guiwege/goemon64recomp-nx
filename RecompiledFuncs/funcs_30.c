#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E95BC_5A54CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E95BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E95C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E95C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E95C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801E95CC: jal         0x801E99CC
    // 0x801E95D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801E99CC_5A58DC(rdram, ctx);
        goto after_0;
    // 0x801E95D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801E95D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E95D8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x801E95DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E95E0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801E95E4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E95E8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E95EC: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E95F0: swc1        $f2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f2.u32l;
    // 0x801E95F4: jalr        $t9
    // 0x801E95F8: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801E95F8: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x801E95FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E9600: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9604: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801E9608: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801E960C: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x801E9610: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801E9614: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x801E9618: nop

    // 0x801E961C: bc1fl       L_801E9640
    if (!c1cs) {
        // 0x801E9620: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E9640;
    }
    goto skip_0;
    // 0x801E9620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E9624: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x801E9628: lbu         $t6, 0x61($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X61);
    // 0x801E962C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801E9630: bnel        $t6, $zero, L_801E9640
    if (ctx->r14 != 0) {
        // 0x801E9634: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E9640;
    }
    goto skip_1;
    // 0x801E9634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801E9638: sb          $t7, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r15;
    // 0x801E963C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E9640:
    // 0x801E9640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E9644: jr          $ra
    // 0x801E9648: nop

    TRACE_RETURN()
    return;
    // 0x801E9648: nop

;}
RECOMP_FUNC void func_801E8D90_5A4CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8D90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801E8D94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801E8D98: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x801E8D9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x801E8DA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801E8DA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x801E8DA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E8DAC: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x801E8DB0: lhu         $v1, 0x20($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X20);
    // 0x801E8DB4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x801E8DB8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x801E8DBC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x801E8DC0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x801E8DC4: beq         $s0, $zero, L_801E8E04
    if (ctx->r16 == 0) {
        // 0x801E8DC8: or          $s3, $v1, $zero
        ctx->r19 = ctx->r3 | 0;
            goto L_801E8E04;
    }
    // 0x801E8DC8: or          $s3, $v1, $zero
    ctx->r19 = ctx->r3 | 0;
    // 0x801E8DCC: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
L_801E8DD0:
    // 0x801E8DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E8DD4: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801E8DD8: beql        $at, $zero, L_801E8E08
    if (ctx->r1 == 0) {
        // 0x801E8DDC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801E8E08;
    }
    goto skip_0;
    // 0x801E8DDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801E8DE0: lbu         $t7, 0x64($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X64);
    // 0x801E8DE4: beql        $s1, $t7, L_801E8DFC
    if (ctx->r17 == ctx->r15) {
        // 0x801E8DE8: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801E8DFC;
    }
    goto skip_1;
    // 0x801E8DE8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801E8DEC: sb          $s2, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r18;
    // 0x801E8DF0: jal         0x801E8E8C
    // 0x801E8DF4: sb          $s4, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r20;
    func_801E8E8C_5A4D9C(rdram, ctx);
        goto after_0;
    // 0x801E8DF4: sb          $s4, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r20;
    after_0:
    // 0x801E8DF8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E8DFC:
    // 0x801E8DFC: bnel        $s0, $zero, L_801E8DD0
    if (ctx->r16 != 0) {
        // 0x801E8E00: lhu         $t6, 0x20($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X20);
            goto L_801E8DD0;
    }
    goto skip_2;
    // 0x801E8E00: lhu         $t6, 0x20($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X20);
    skip_2:
L_801E8E04:
    // 0x801E8E04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801E8E08:
    // 0x801E8E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E8E0C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801E8E10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801E8E14: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801E8E18: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801E8E1C: jr          $ra
    // 0x801E8E20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x801E8E20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_801E1108_59D018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1108: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E110C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1110: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E1114: jal         0x801E1150
    // 0x801E1118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E1150_59D060(rdram, ctx);
        goto after_0;
    // 0x801E1118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E111C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1120: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E1124: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1128: beq         $v0, $at, L_801E1138
    if (ctx->r2 == ctx->r1) {
        // 0x801E112C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E1138;
    }
    // 0x801E112C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E1130: bnel        $v0, $at, L_801E1144
    if (ctx->r2 != ctx->r1) {
        // 0x801E1134: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E1144;
    }
    goto skip_0;
    // 0x801E1134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E1138:
    // 0x801E1138: jal         0x801E84A4
    // 0x801E113C: nop

    func_801E84A4_5A43B4(rdram, ctx);
        goto after_1;
    // 0x801E113C: nop

    after_1:
    // 0x801E1140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E1144:
    // 0x801E1144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1148: jr          $ra
    // 0x801E114C: nop

    TRACE_RETURN()
    return;
    // 0x801E114C: nop

;}
RECOMP_FUNC void func_801EF6F0_5AB600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF6F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EF6F4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801EF6F8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x801EF6FC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x801EF700: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x801EF704: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x801EF708: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x801EF70C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x801EF710: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x801EF714: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x801EF718: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801EF71C: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x801EF720: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EF724: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801EF728: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801EF72C: beq         $v0, $zero, L_801EF748
    if (ctx->r2 == 0) {
        // 0x801EF730: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_801EF748;
    }
    // 0x801EF730: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x801EF734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EF738: beq         $v0, $at, L_801EF834
    if (ctx->r2 == ctx->r1) {
        // 0x801EF73C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_801EF834;
    }
    // 0x801EF73C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801EF740: b           L_801EF83C
    // 0x801EF744: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_801EF83C;
    // 0x801EF744: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_801EF748:
    // 0x801EF748: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EF74C: lui         $fp, 0x8020
    ctx->r30 = S32(0X8020 << 16);
    // 0x801EF750: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801EF754: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x801EF758: addiu       $s6, $s6, 0x49C0
    ctx->r22 = ADD32(ctx->r22, 0X49C0);
    // 0x801EF75C: addiu       $s7, $s7, 0x4E9C
    ctx->r23 = ADD32(ctx->r23, 0X4E9C);
    // 0x801EF760: addiu       $fp, $fp, 0x4EA0
    ctx->r30 = ADD32(ctx->r30, 0X4EA0);
    // 0x801EF764: lwc1        $f20, -0x4140($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4140);
    // 0x801EF768: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801EF76C: addiu       $s2, $a2, 0x9C
    ctx->r18 = ADD32(ctx->r6, 0X9C);
    // 0x801EF770: addiu       $s3, $a2, 0xA0
    ctx->r19 = ADD32(ctx->r6, 0XA0);
    // 0x801EF774: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x801EF778: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
L_801EF77C:
    // 0x801EF77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF780: jal         0x801EF6B8
    // 0x801EF784: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_801EF6B8_5AB5C8(rdram, ctx);
        goto after_0;
    // 0x801EF784: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x801EF788: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF78C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x801EF790: jal         0x801EE330
    // 0x801EF794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801EF794: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EF798: beql        $v0, $zero, L_801EF7AC
    if (ctx->r2 == 0) {
        // 0x801EF79C: lwc1        $f4, 0x1C($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
            goto L_801EF7AC;
    }
    goto skip_0;
    // 0x801EF79C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    skip_0:
    // 0x801EF7A0: b           L_801EF80C
    // 0x801EF7A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_801EF80C;
    // 0x801EF7A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x801EF7A8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
L_801EF7AC:
    // 0x801EF7AC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801EF7B0: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x801EF7B4: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x801EF7B8: addu        $t6, $s7, $s1
    ctx->r14 = ADD32(ctx->r23, ctx->r17);
    // 0x801EF7BC: addu        $t8, $fp, $s1
    ctx->r24 = ADD32(ctx->r30, ctx->r17);
    // 0x801EF7C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801EF7C4: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x801EF7C8: lwc1        $f0, 0x1C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EF7CC: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x801EF7D0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x801EF7D4: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x801EF7D8: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x801EF7DC: lbu         $t0, 0x4EA4($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X4EA4);
    // 0x801EF7E0: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x801EF7E4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x801EF7E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801EF7EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF7F0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x801EF7F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801EF7F8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x801EF7FC: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
    // 0x801EF800: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801EF804: jal         0x801DC554
    // 0x801EF808: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801EF808: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_2:
L_801EF80C:
    // 0x801EF80C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801EF810: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801EF814: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x801EF818: bne         $s1, $s5, L_801EF77C
    if (ctx->r17 != ctx->r21) {
        // 0x801EF81C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_801EF77C;
    }
    // 0x801EF81C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x801EF820: bne         $s4, $s5, L_801EF838
    if (ctx->r20 != ctx->r21) {
        // 0x801EF824: lw          $t3, 0x60($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X60);
            goto L_801EF838;
    }
    // 0x801EF824: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x801EF828: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801EF82C: b           L_801EF838
    // 0x801EF830: sb          $t2, 0x65($t3)
    MEM_B(0X65, ctx->r11) = ctx->r10;
        goto L_801EF838;
    // 0x801EF830: sb          $t2, 0x65($t3)
    MEM_B(0X65, ctx->r11) = ctx->r10;
L_801EF834:
    // 0x801EF834: sb          $t4, 0x65($a2)
    MEM_B(0X65, ctx->r6) = ctx->r12;
L_801EF838:
    // 0x801EF838: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_801EF83C:
    // 0x801EF83C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x801EF840: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801EF844: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x801EF848: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x801EF84C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x801EF850: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x801EF854: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x801EF858: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x801EF85C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x801EF860: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x801EF864: jr          $ra
    // 0x801EF868: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801EF868: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801DF120_59B030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF128: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF12C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DF130: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF134: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF138: lhu         $t6, 0x30($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X30);
    // 0x801DF13C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801DF140: jal         0x801E1C90
    // 0x801DF144: sh          $t7, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r15;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_0;
    // 0x801DF144: sh          $t7, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r15;
    after_0:
    // 0x801DF148: lhu         $t8, 0x9A($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X9A);
    // 0x801DF14C: beql        $t8, $zero, L_801DF174
    if (ctx->r24 == 0) {
        // 0x801DF150: lbu         $t9, 0x90($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X90);
            goto L_801DF174;
    }
    goto skip_0;
    // 0x801DF150: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
    skip_0:
    // 0x801DF154: jal         0x801E3358
    // 0x801DF158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3358_59F268(rdram, ctx);
        goto after_1;
    // 0x801DF158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF15C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF160: jal         0x801DACDC
    // 0x801DF164: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DF164: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_2:
    // 0x801DF168: b           L_801DF224
    // 0x801DF16C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF224;
    // 0x801DF16C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF170: lbu         $t9, 0x90($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X90);
L_801DF174:
    // 0x801DF174: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801DF178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF17C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801DF180: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x801DF184: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x801DF188: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801DF18C: lhu         $t1, 0x7DB4($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7DB4);
    // 0x801DF190: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x801DF194: bne         $t2, $zero, L_801DF1B0
    if (ctx->r10 != 0) {
        // 0x801DF198: nop
    
            goto L_801DF1B0;
    }
    // 0x801DF198: nop

    // 0x801DF19C: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF1A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DF1A4: lbu         $t4, 0x68($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X68);
    // 0x801DF1A8: bnel        $t4, $at, L_801DF1C4
    if (ctx->r12 != ctx->r1) {
        // 0x801DF1AC: lhu         $t5, 0x98($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X98);
            goto L_801DF1C4;
    }
    goto skip_1;
    // 0x801DF1AC: lhu         $t5, 0x98($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X98);
    skip_1:
L_801DF1B0:
    // 0x801DF1B0: jal         0x801E4624
    // 0x801DF1B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_801E4624_5A0534(rdram, ctx);
        goto after_3;
    // 0x801DF1B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801DF1B8: b           L_801DF224
    // 0x801DF1BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF224;
    // 0x801DF1BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF1C0: lhu         $t5, 0x98($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X98);
L_801DF1C4:
    // 0x801DF1C4: beql        $t5, $zero, L_801DF224
    if (ctx->r13 == 0) {
        // 0x801DF1C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF224;
    }
    goto skip_2;
    // 0x801DF1C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801DF1CC: jal         0x801E8390
    // 0x801DF1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E8390_5A42A0(rdram, ctx);
        goto after_4;
    // 0x801DF1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DF1D4: bnel        $v0, $zero, L_801DF224
    if (ctx->r2 != 0) {
        // 0x801DF1D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF224;
    }
    goto skip_3;
    // 0x801DF1D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801DF1DC: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801DF1E0: lhu         $t7, 0x30($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X30);
    // 0x801DF1E4: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x801DF1E8: beq         $at, $zero, L_801DF20C
    if (ctx->r1 == 0) {
        // 0x801DF1EC: nop
    
            goto L_801DF20C;
    }
    // 0x801DF1EC: nop

    // 0x801DF1F0: jal         0x801E2264
    // 0x801DF1F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_5;
    // 0x801DF1F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801DF1F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF1FC: jal         0x801DACDC
    // 0x801DF200: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801DF200: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_6:
    // 0x801DF204: b           L_801DF224
    // 0x801DF208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801DF224;
    // 0x801DF208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF20C:
    // 0x801DF20C: jal         0x801E2344
    // 0x801DF210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2344_59E254(rdram, ctx);
        goto after_7;
    // 0x801DF210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801DF214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF218: jal         0x801DACDC
    // 0x801DF21C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801DF21C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_8:
    // 0x801DF220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF224:
    // 0x801DF224: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF22C: jr          $ra
    // 0x801DF230: nop

    TRACE_RETURN()
    return;
    // 0x801DF230: nop

;}
RECOMP_FUNC void func_801EF87C_5AB78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF87C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EF880: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801EF884: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x801EF888: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x801EF88C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801EF890: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801EF894: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801EF898: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801EF89C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801EF8A0: lw          $s0, 0x5C($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X5C);
    // 0x801EF8A4: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x801EF8A8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801EF8AC: lbu         $v0, 0xCC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCC);
    // 0x801EF8B0: xori        $s1, $v0, 0x96
    ctx->r17 = ctx->r2 ^ 0X96;
    // 0x801EF8B4: sltiu       $s1, $s1, 0x1
    ctx->r17 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x801EF8B8: bne         $s1, $zero, L_801EF8C8
    if (ctx->r17 != 0) {
        // 0x801EF8BC: nop
    
            goto L_801EF8C8;
    }
    // 0x801EF8BC: nop

    // 0x801EF8C0: xori        $s1, $v0, 0x99
    ctx->r17 = ctx->r2 ^ 0X99;
    // 0x801EF8C4: sltiu       $s1, $s1, 0x1
    ctx->r17 = ctx->r17 < 0X1 ? 1 : 0;
L_801EF8C8:
    // 0x801EF8C8: jal         0x801EF9F4
    // 0x801EF8CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801EF9F4_5AB904(rdram, ctx);
        goto after_0;
    // 0x801EF8CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x801EF8D0: bne         $v0, $zero, L_801EF9D0
    if (ctx->r2 != 0) {
        // 0x801EF8D4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_801EF9D0;
    }
    // 0x801EF8D4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801EF8D8: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x801EF8DC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EF8E0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x801EF8E4: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801EF8E8: jal         0x80034E08
    // 0x801EF8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801EF8EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801EF8F0: beq         $v0, $zero, L_801EF9D0
    if (ctx->r2 == 0) {
        // 0x801EF8F4: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_801EF9D0;
    }
    // 0x801EF8F4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801EF8F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EF8FC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801EF900: jal         0x801EE4AC
    // 0x801EF904: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801EF904: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_2:
    // 0x801EF908: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF90C: jal         0x801EFA18
    // 0x801EF910: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EFA18_5AB928(rdram, ctx);
        goto after_3;
    // 0x801EF910: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x801EF914: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF918: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EF91C: jal         0x80035EEC
    // 0x801EF920: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_4;
    // 0x801EF920: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x801EF924: bne         $v0, $zero, L_801EF938
    if (ctx->r2 != 0) {
        // 0x801EF928: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EF938;
    }
    // 0x801EF928: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801EF92C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801EF930: b           L_801EF9D0
    // 0x801EF934: sb          $t7, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r15;
        goto L_801EF9D0;
    // 0x801EF934: sb          $t7, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r15;
L_801EF938:
    // 0x801EF938: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801EF93C: jal         0x801EFACC
    // 0x801EF940: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_801EFACC_5AB9DC(rdram, ctx);
        goto after_5;
    // 0x801EF940: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x801EF944: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x801EF948: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801EF94C: addiu       $a1, $s2, 0x6C
    ctx->r5 = ADD32(ctx->r18, 0X6C);
    // 0x801EF950: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EF954: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x801EF958: jal         0x8001DB04
    // 0x801EF95C: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801EF95C: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    after_6:
    // 0x801EF960: lui         $s3, 0x801F
    ctx->r19 = S32(0X801F << 16);
    // 0x801EF964: addiu       $s3, $s3, 0x320
    ctx->r19 = ADD32(ctx->r19, 0X320);
    // 0x801EF968: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801EF96C: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x801EF970: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_801EF974:
    // 0x801EF974: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801EF978: jal         0x80034E08
    // 0x801EF97C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_7;
    // 0x801EF97C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801EF980: beq         $v0, $zero, L_801EF9D0
    if (ctx->r2 == 0) {
        // 0x801EF984: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EF9D0;
    }
    // 0x801EF984: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EF988: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801EF98C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x801EF990: jal         0x801EE4AC
    // 0x801EF994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_8;
    // 0x801EF994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x801EF998: sw          $s2, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r18;
    // 0x801EF99C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EF9A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801EF9A4: jal         0x80035EEC
    // 0x801EF9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_9;
    // 0x801EF9A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x801EF9AC: bne         $v0, $zero, L_801EF9C0
    if (ctx->r2 != 0) {
        // 0x801EF9B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_801EF9C0;
    }
    // 0x801EF9B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801EF9B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EF9B8: b           L_801EF9D0
    // 0x801EF9BC: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
        goto L_801EF9D0;
    // 0x801EF9BC: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
L_801EF9C0:
    // 0x801EF9C0: bnel        $s1, $s4, L_801EF974
    if (ctx->r17 != ctx->r20) {
        // 0x801EF9C4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801EF974;
    }
    goto skip_0;
    // 0x801EF9C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x801EF9C8: jal         0x801DCCF0
    // 0x801EF9CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_801DCCF0_598C00(rdram, ctx);
        goto after_10;
    // 0x801EF9CC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_10:
L_801EF9D0:
    // 0x801EF9D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801EF9D4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801EF9D8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801EF9DC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x801EF9E0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x801EF9E4: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x801EF9E8: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x801EF9EC: jr          $ra
    // 0x801EF9F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801EF9F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801CBBE8_587AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBBE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBBEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBBF0: lhu         $t6, 0x9A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X9A);
    // 0x801CBBF4: beql        $t6, $zero, L_801CBC2C
    if (ctx->r14 == 0) {
        // 0x801CBBF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CBC2C;
    }
    goto skip_0;
    // 0x801CBBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CBBFC: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801CBC00: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x801CBC04: bne         $at, $zero, L_801CBC28
    if (ctx->r1 != 0) {
        // 0x801CBC08: slti        $at, $v0, 0x1B
        ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
            goto L_801CBC28;
    }
    // 0x801CBC08: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x801CBC0C: beql        $at, $zero, L_801CBC2C
    if (ctx->r1 == 0) {
        // 0x801CBC10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CBC2C;
    }
    goto skip_1;
    // 0x801CBC10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801CBC14: jal         0x801E3358
    // 0x801CBC18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E3358_59F268(rdram, ctx);
        goto after_0;
    // 0x801CBC18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CBC1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CBC20: jal         0x801DACDC
    // 0x801CBC24: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801CBC24: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    after_1:
L_801CBC28:
    // 0x801CBC28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CBC2C:
    // 0x801CBC2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBC30: jr          $ra
    // 0x801CBC34: nop

    TRACE_RETURN()
    return;
    // 0x801CBC34: nop

;}
RECOMP_FUNC void func_801FAEC0_5B6DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FAEC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FAEC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FAEC8: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x801FAECC: addiu       $s0, $s0, -0x3A38
    ctx->r16 = ADD32(ctx->r16, -0X3A38);
    // 0x801FAED0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801FAED4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FAED8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FAEDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FAEE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801FAEE4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801FAEE8: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x801FAEEC: lhu         $t7, 0x2DF2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2DF2);
    // 0x801FAEF0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAEF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801FAEF8: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    // 0x801FAEFC: lhu         $t8, 0x2DF4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DF4);
    // 0x801FAF00: sh          $t8, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r24;
    // 0x801FAF04: lbu         $t9, 0x2DE4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X2DE4);
    // 0x801FAF08: sh          $t9, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r25;
    // 0x801FAF0C: sh          $a1, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r5;
    // 0x801FAF10: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801FAF14: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAF18: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x801FAF1C: jal         0x801F8EDC
    // 0x801FAF20: sb          $zero, -0x774($at)
    MEM_B(-0X774, ctx->r1) = 0;
    func_801F8EDC_5B4DEC(rdram, ctx);
        goto after_0;
    // 0x801FAF20: sb          $zero, -0x774($at)
    MEM_B(-0X774, ctx->r1) = 0;
    after_0:
    // 0x801FAF24: jal         0x801F8790
    // 0x801FAF28: nop

    func_801F8790_5B46A0(rdram, ctx);
        goto after_1;
    // 0x801FAF28: nop

    after_1:
    // 0x801FAF2C: jal         0x801F87F8
    // 0x801FAF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_801F87F8_5B4708(rdram, ctx);
        goto after_2;
    // 0x801FAF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x801FAF34: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FAF38: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAF3C: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801FAF40: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FAF44: sw          $zero, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = 0;
    // 0x801FAF48: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x801FAF4C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801FAF50: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801FAF54: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x801FAF58: lbu         $t2, 0x2DF6($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2DF6);
    // 0x801FAF5C: lhu         $t5, 0x2DF8($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2DF8);
    // 0x801FAF60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FAF64: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x801FAF68: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x801FAF6C: lw          $t4, -0x6694($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X6694);
    // 0x801FAF70: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x801FAF74: addiu       $a1, $a1, -0x7B6C
    ctx->r5 = ADD32(ctx->r5, -0X7B6C);
    // 0x801FAF78: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x801FAF7C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x801FAF80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAF84: beq         $t8, $zero, L_801FAFA4
    if (ctx->r24 == 0) {
        // 0x801FAF88: nop
    
            goto L_801FAFA4;
    }
    // 0x801FAF88: nop

    // 0x801FAF8C: jal         0x80034E08
    // 0x801FAF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801FAF90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x801FAF94: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801FAF98: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x801FAF9C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FAFA0: sw          $v0, -0x71C($at)
    MEM_W(-0X71C, ctx->r1) = ctx->r2;
L_801FAFA4:
    // 0x801FAFA4: jal         0x801F8C4C
    // 0x801FAFA8: nop

    func_801F8C4C_5B4B5C(rdram, ctx);
        goto after_4;
    // 0x801FAFA8: nop

    after_4:
    // 0x801FAFAC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAFB0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801FAFB4: jal         0x80035EEC
    // 0x801FAFB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_5;
    // 0x801FAFB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x801FAFBC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801FAFC0: jal         0x801F95D8
    // 0x801FAFC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801F95D8_5B54E8(rdram, ctx);
        goto after_6;
    // 0x801FAFC4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x801FAFC8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801FAFCC: lhu         $t0, 0x26($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X26);
    // 0x801FAFD0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAFD4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FAFD8: sh          $t0, -0x520E($at)
    MEM_H(-0X520E, ctx->r1) = ctx->r8;
    // 0x801FAFDC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x801FAFE0: lhu         $t2, 0x24($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X24);
    // 0x801FAFE4: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAFE8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FAFEC: sh          $t2, -0x520C($at)
    MEM_H(-0X520C, ctx->r1) = ctx->r10;
    // 0x801FAFF0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801FAFF4: lhu         $t5, 0x22($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X22);
    // 0x801FAFF8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FAFFC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x801FB000: sb          $t5, -0x521C($at)
    MEM_B(-0X521C, ctx->r1) = ctx->r13;
    // 0x801FB004: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FB008: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FB00C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801FB010: jr          $ra
    // 0x801FB014: nop

    TRACE_RETURN()
    return;
    // 0x801FB014: nop

;}
RECOMP_FUNC void func_801EB04C_5A6F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB054: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB058: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB05C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB060: jal         0x801EB180
    // 0x801EB064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB064: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801EB068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB070: jr          $ra
    // 0x801EB074: nop

    TRACE_RETURN()
    return;
    // 0x801EB074: nop

;}
RECOMP_FUNC void func_801E4ED4_5A0DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4ED4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801E4ED8: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E4EDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E4EE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E4EE4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801E4EE8: addiu       $t8, $t8, 0x46E8
    ctx->r24 = ADD32(ctx->r24, 0X46E8);
    // 0x801E4EEC: lwr         $at, 0x2($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X2);
    // 0x801E4EF0: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x801E4EF4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801E4EF8: addiu       $t3, $t3, 0x46EC
    ctx->r11 = ADD32(ctx->r11, 0X46EC);
    // 0x801E4EFC: swr         $at, 0x2($t7)
    do_swr(rdram, 0X2, ctx->r15, ctx->r1);
    // 0x801E4F00: lwr         $at, 0x2($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X2);
    // 0x801E4F04: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x801E4F08: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801E4F0C: addiu       $t9, $t9, 0x46F0
    ctx->r25 = ADD32(ctx->r25, 0X46F0);
    // 0x801E4F10: swr         $at, 0x2($t2)
    do_swr(rdram, 0X2, ctx->r10, ctx->r1);
    // 0x801E4F14: lwr         $at, 0x2($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X2);
    // 0x801E4F18: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x801E4F1C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801E4F20: addiu       $t5, $t5, 0x46F4
    ctx->r13 = ADD32(ctx->r13, 0X46F4);
    // 0x801E4F24: swr         $at, 0x2($t0)
    do_swr(rdram, 0X2, ctx->r8, ctx->r1);
    // 0x801E4F28: lwr         $at, 0x2($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X2);
    // 0x801E4F2C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E4F30: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E4F34: addiu       $v1, $sp, 0x30
    ctx->r3 = ADD32(ctx->r29, 0X30);
    // 0x801E4F38: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801E4F3C: addiu       $t6, $t6, 0x46F8
    ctx->r14 = ADD32(ctx->r14, 0X46F8);
    // 0x801E4F40: swr         $at, 0x2($v1)
    do_swr(rdram, 0X2, ctx->r3, ctx->r1);
    // 0x801E4F44: lwr         $at, 0x2($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X2);
    // 0x801E4F48: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x801E4F4C: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801E4F50: addiu       $t9, $t9, 0x46FC
    ctx->r25 = ADD32(ctx->r25, 0X46FC);
    // 0x801E4F54: swr         $at, 0x2($a2)
    do_swr(rdram, 0X2, ctx->r6, ctx->r1);
    // 0x801E4F58: lwr         $at, 0x2($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X2);
    // 0x801E4F5C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x801E4F60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E4F64: beq         $a1, $zero, L_801E4F88
    if (ctx->r5 == 0) {
        // 0x801E4F68: swr         $at, 0x2($a3)
        do_swr(rdram, 0X2, ctx->r7, ctx->r1);
            goto L_801E4F88;
    }
    // 0x801E4F68: swr         $at, 0x2($a3)
    do_swr(rdram, 0X2, ctx->r7, ctx->r1);
    // 0x801E4F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E4F70: beq         $a1, $at, L_801E4FD8
    if (ctx->r5 == ctx->r1) {
        // 0x801E4F74: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E4FD8;
    }
    // 0x801E4F74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E4F78: beql        $a1, $at, L_801E502C
    if (ctx->r5 == ctx->r1) {
        // 0x801E4F7C: lbu         $t6, 0x60($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X60);
            goto L_801E502C;
    }
    goto skip_0;
    // 0x801E4F7C: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
    skip_0:
    // 0x801E4F80: b           L_801E5074
    // 0x801E4F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E5074;
    // 0x801E4F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4F88:
    // 0x801E4F88: lbu         $t5, 0x60($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X60);
    // 0x801E4F8C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801E4F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4F94: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x801E4F98: addu        $t7, $t7, $t3
    ctx->r15 = ADD32(ctx->r15, ctx->r11);
    // 0x801E4F9C: lw          $t7, -0x3954($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3954);
    // 0x801E4FA0: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x801E4FA4: jal         0x801E2800
    // 0x801E4FA8: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    func_801E2800_59E710(rdram, ctx);
        goto after_0;
    // 0x801E4FA8: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    after_0:
    // 0x801E4FAC: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
    // 0x801E4FB0: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E4FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4FB8: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801E4FBC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x801E4FC0: lw          $t2, -0x3954($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3954);
    // 0x801E4FC4: addu        $a1, $sp, $t2
    ctx->r5 = ADD32(ctx->r29, ctx->r10);
    // 0x801E4FC8: jal         0x801DACDC
    // 0x801E4FCC: lbu         $a1, 0x3C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E4FCC: lbu         $a1, 0x3C($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3C);
    after_1:
    // 0x801E4FD0: b           L_801E5074
    // 0x801E4FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E5074;
    // 0x801E4FD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E4FD8:
    // 0x801E4FD8: lbu         $t1, 0x60($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X60);
    // 0x801E4FDC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x801E4FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E4FE4: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x801E4FE8: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x801E4FEC: lw          $t4, -0x3954($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3954);
    // 0x801E4FF0: addu        $t5, $a2, $t4
    ctx->r13 = ADD32(ctx->r6, ctx->r12);
    // 0x801E4FF4: jal         0x801E28B0
    // 0x801E4FF8: lbu         $a1, 0x0($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X0);
    func_801E28B0_59E7C0(rdram, ctx);
        goto after_2;
    // 0x801E4FF8: lbu         $a1, 0x0($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X0);
    after_2:
    // 0x801E4FFC: lbu         $t3, 0x60($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X60);
    // 0x801E5000: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801E5004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5008: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x801E500C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801E5010: lw          $t8, -0x3954($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3954);
    // 0x801E5014: addu        $a1, $sp, $t8
    ctx->r5 = ADD32(ctx->r29, ctx->r24);
    // 0x801E5018: jal         0x801DACDC
    // 0x801E501C: lbu         $a1, 0x38($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801E501C: lbu         $a1, 0x38($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38);
    after_3:
    // 0x801E5020: b           L_801E5074
    // 0x801E5024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801E5074;
    // 0x801E5024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E5028: lbu         $t6, 0x60($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X60);
L_801E502C:
    // 0x801E502C: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x801E5030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5034: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x801E5038: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x801E503C: lw          $t2, -0x3954($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3954);
    // 0x801E5040: addu        $t1, $a3, $t2
    ctx->r9 = ADD32(ctx->r7, ctx->r10);
    // 0x801E5044: jal         0x801E28D8
    // 0x801E5048: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    func_801E28D8_59E7E8(rdram, ctx);
        goto after_4;
    // 0x801E5048: lbu         $a1, 0x0($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X0);
    after_4:
    // 0x801E504C: lbu         $t9, 0x60($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X60);
    // 0x801E5050: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801E5054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E5058: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x801E505C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x801E5060: lw          $t5, -0x3954($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3954);
    // 0x801E5064: addu        $a1, $sp, $t5
    ctx->r5 = ADD32(ctx->r29, ctx->r13);
    // 0x801E5068: jal         0x801DACDC
    // 0x801E506C: lbu         $a1, 0x34($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X34);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801E506C: lbu         $a1, 0x34($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X34);
    after_5:
    // 0x801E5070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801E5074:
    // 0x801E5074: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E5078: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801E507C: jr          $ra
    // 0x801E5080: nop

    TRACE_RETURN()
    return;
    // 0x801E5080: nop

;}
RECOMP_FUNC void func_801DD500_599410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD500: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DD504: jr          $ra
    // 0x801DD508: lbu         $v0, 0x69($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X69);
    TRACE_RETURN()
    return;
    // 0x801DD508: lbu         $v0, 0x69($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X69);
;}
RECOMP_FUNC void func_801E73BC_5A32CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E73BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E73C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E73C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801E73C8: lw          $v1, 0x5C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X5C);
    // 0x801E73CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E73D0: lbu         $t6, 0x18($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X18);
    // 0x801E73D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801E73D8: beql        $t7, $zero, L_801E74D8
    if (ctx->r15 == 0) {
        // 0x801E73DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E74D8;
    }
    goto skip_0;
    // 0x801E73DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E73E0: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E73E4: slti        $at, $v0, 0x31
    ctx->r1 = SIGNED(ctx->r2) < 0X31 ? 1 : 0;
    // 0x801E73E8: bne         $at, $zero, L_801E73F8
    if (ctx->r1 != 0) {
        // 0x801E73EC: slti        $at, $v0, 0x35
        ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
            goto L_801E73F8;
    }
    // 0x801E73EC: slti        $at, $v0, 0x35
    ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x801E73F0: bnel        $at, $zero, L_801E74D8
    if (ctx->r1 != 0) {
        // 0x801E73F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E74D8;
    }
    goto skip_1;
    // 0x801E73F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
L_801E73F8:
    // 0x801E73F8: lbu         $t8, 0x59($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X59);
    // 0x801E73FC: bnel        $t8, $zero, L_801E74D8
    if (ctx->r24 != 0) {
        // 0x801E7400: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E74D8;
    }
    goto skip_2;
    // 0x801E7400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801E7404: jal         0x801E7F08
    // 0x801E7408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7F08_5A3E18(rdram, ctx);
        goto after_0;
    // 0x801E7408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801E740C: bnel        $v0, $zero, L_801E74D8
    if (ctx->r2 != 0) {
        // 0x801E7410: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E74D8;
    }
    goto skip_3;
    // 0x801E7410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
    // 0x801E7414: lbu         $v0, 0xCC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCC);
    // 0x801E7418: slti        $at, $v0, 0xCE
    ctx->r1 = SIGNED(ctx->r2) < 0XCE ? 1 : 0;
    // 0x801E741C: beq         $at, $zero, L_801E74D4
    if (ctx->r1 == 0) {
        // 0x801E7420: slti        $at, $v0, 0xDF
        ctx->r1 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
            goto L_801E74D4;
    }
    // 0x801E7420: slti        $at, $v0, 0xDF
    ctx->r1 = SIGNED(ctx->r2) < 0XDF ? 1 : 0;
    // 0x801E7424: beq         $at, $zero, L_801E74D4
    if (ctx->r1 == 0) {
        // 0x801E7428: slti        $at, $v0, 0x70
        ctx->r1 = SIGNED(ctx->r2) < 0X70 ? 1 : 0;
            goto L_801E74D4;
    }
    // 0x801E7428: slti        $at, $v0, 0x70
    ctx->r1 = SIGNED(ctx->r2) < 0X70 ? 1 : 0;
    // 0x801E742C: bne         $at, $zero, L_801E743C
    if (ctx->r1 != 0) {
        // 0x801E7430: slti        $at, $v0, 0x7C
        ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
            goto L_801E743C;
    }
    // 0x801E7430: slti        $at, $v0, 0x7C
    ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
    // 0x801E7434: bnel        $at, $zero, L_801E74D8
    if (ctx->r1 != 0) {
        // 0x801E7438: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E74D8;
    }
    goto skip_4;
    // 0x801E7438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_4:
L_801E743C:
    // 0x801E743C: jal         0x801E7E18
    // 0x801E7440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7E18_5A3D28(rdram, ctx);
        goto after_1;
    // 0x801E7440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801E7444: beq         $v0, $zero, L_801E7454
    if (ctx->r2 == 0) {
        // 0x801E7448: nop
    
            goto L_801E7454;
    }
    // 0x801E7448: nop

    // 0x801E744C: jal         0x801E3134
    // 0x801E7450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3134_59F044(rdram, ctx);
        goto after_2;
    // 0x801E7450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_801E7454:
    // 0x801E7454: jal         0x801E74EC
    // 0x801E7458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E74EC_5A33FC(rdram, ctx);
        goto after_3;
    // 0x801E7458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E745C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E7460: jal         0x801DACDC
    // 0x801E7464: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801E7464: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_4:
    // 0x801E7468: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801E746C: lbu         $t9, -0x3594($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3594);
    // 0x801E7470: bnel        $t9, $zero, L_801E7484
    if (ctx->r25 != 0) {
        // 0x801E7474: lbu         $v0, 0x60($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X60);
            goto L_801E7484;
    }
    goto skip_5;
    // 0x801E7474: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
    skip_5:
    // 0x801E7478: jal         0x80038BC8
    // 0x801E747C: addiu       $a0, $zero, 0x26D
    ctx->r4 = ADD32(0, 0X26D);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801E747C: addiu       $a0, $zero, 0x26D
    ctx->r4 = ADD32(0, 0X26D);
    after_5:
    // 0x801E7480: lbu         $v0, 0x60($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X60);
L_801E7484:
    // 0x801E7484: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801E7488: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x801E748C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x801E7490: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x801E7494: lhu         $a2, -0x3988($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X3988);
    // 0x801E7498: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x801E749C: lh          $a3, -0x3990($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X3990);
    // 0x801E74A0: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x801E74A4: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x801E74A8: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801E74AC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x801E74B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E74B4: jal         0x8003454C
    // 0x801E74B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8003454C_3514C(rdram, ctx);
        goto after_6;
    // 0x801E74B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x801E74BC: jal         0x801E6F00
    // 0x801E74C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E6F00_5A2E10(rdram, ctx);
        goto after_7;
    // 0x801E74C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801E74C4: jal         0x801E7FB4
    // 0x801E74C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E7FB4_5A3EC4(rdram, ctx);
        goto after_8;
    // 0x801E74C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801E74CC: b           L_801E74D8
    // 0x801E74D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E74D8;
    // 0x801E74D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E74D4:
    // 0x801E74D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E74D8:
    // 0x801E74D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E74DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801E74E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E74E4: jr          $ra
    // 0x801E74E8: nop

    TRACE_RETURN()
    return;
    // 0x801E74E8: nop

;}
RECOMP_FUNC void func_801DC498_5983A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DC498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DC49C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DC4A0: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801DC4A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DC4A8: bnel        $v0, $at, L_801DC544
    if (ctx->r2 != ctx->r1) {
        // 0x801DC4AC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC544;
    }
    goto skip_0;
    // 0x801DC4AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801DC4B0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DC4B4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x801DC4B8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801DC4BC: lhu         $t7, 0x36($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X36);
    // 0x801DC4C0: bnel        $t7, $at, L_801DC544
    if (ctx->r15 != ctx->r1) {
        // 0x801DC4C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC544;
    }
    goto skip_1;
    // 0x801DC4C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DC4C8: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801DC4CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801DC4D0: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801DC4D4: bne         $a1, $t8, L_801DC540
    if (ctx->r5 != ctx->r24) {
        // 0x801DC4D8: lui         $v1, 0x8016
        ctx->r3 = S32(0X8016 << 16);
            goto L_801DC540;
    }
    // 0x801DC4D8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x801DC4DC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x801DC4E0: lw          $v1, -0x3954($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3954);
    // 0x801DC4E4: blezl       $v1, L_801DC544
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801DC4E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC544;
    }
    goto skip_2;
    // 0x801DC4E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x801DC4EC: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DC4F0: beq         $v0, $zero, L_801DC500
    if (ctx->r2 == 0) {
        // 0x801DC4F4: nop
    
            goto L_801DC500;
    }
    // 0x801DC4F4: nop

    // 0x801DC4F8: bnel        $a1, $v0, L_801DC544
    if (ctx->r5 != ctx->r2) {
        // 0x801DC4FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DC544;
    }
    goto skip_3;
    // 0x801DC4FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_3:
L_801DC500:
    // 0x801DC500: bne         $a1, $v1, L_801DC51C
    if (ctx->r5 != ctx->r3) {
        // 0x801DC504: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801DC51C;
    }
    // 0x801DC504: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DC508: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    // 0x801DC50C: jal         0x801DACDC
    // 0x801DC510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801DC510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801DC514: b           L_801DC530
    // 0x801DC518: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_801DC530;
    // 0x801DC518: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801DC51C:
    // 0x801DC51C: bne         $v1, $at, L_801DC530
    if (ctx->r3 != ctx->r1) {
        // 0x801DC520: addiu       $a1, $zero, 0x9F
        ctx->r5 = ADD32(0, 0X9F);
            goto L_801DC530;
    }
    // 0x801DC520: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
    // 0x801DC524: jal         0x801DACDC
    // 0x801DC528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DC528: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801DC52C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801DC530:
    // 0x801DC530: jal         0x801E241C
    // 0x801DC534: nop

    func_801E241C_59E32C(rdram, ctx);
        goto after_2;
    // 0x801DC534: nop

    after_2:
    // 0x801DC538: b           L_801DC544
    // 0x801DC53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801DC544;
    // 0x801DC53C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DC540:
    // 0x801DC540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DC544:
    // 0x801DC544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DC548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DC54C: jr          $ra
    // 0x801DC550: nop

    TRACE_RETURN()
    return;
    // 0x801DC550: nop

;}
RECOMP_FUNC void func_801DEC44_59AB54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DEC44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DEC48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DEC4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DEC50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DEC54: lhu         $t6, 0x98($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X98);
    // 0x801DEC58: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DEC5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DEC60: bne         $t6, $zero, L_801DEC8C
    if (ctx->r14 != 0) {
        // 0x801DEC64: addiu       $t9, $t9, -0x4A54
        ctx->r25 = ADD32(ctx->r25, -0X4A54);
            goto L_801DEC8C;
    }
    // 0x801DEC64: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DEC68: jal         0x801E3324
    // 0x801DEC6C: nop

    func_801E3324_59F234(rdram, ctx);
        goto after_0;
    // 0x801DEC6C: nop

    after_0:
    // 0x801DEC70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DEC74: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DEC78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DEC7C: jal         0x801DAC7C
    // 0x801DEC80: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_1;
    // 0x801DEC80: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_1:
    // 0x801DEC84: b           L_801DECC4
    // 0x801DEC88: nop

        goto L_801DECC4;
    // 0x801DEC88: nop

L_801DEC8C:
    // 0x801DEC8C: jalr        $t9
    // 0x801DEC90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801DEC90: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x801DEC94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DEC98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DEC9C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801DECA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DECA4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DECA8: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801DECAC: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DECB0: nop

    // 0x801DECB4: bc1f        L_801DECC4
    if (!c1cs) {
        // 0x801DECB8: nop
    
            goto L_801DECC4;
    }
    // 0x801DECB8: nop

    // 0x801DECBC: jal         0x801DACDC
    // 0x801DECC0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DECC0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_3:
L_801DECC4:
    // 0x801DECC4: jal         0x801E83F8
    // 0x801DECC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E83F8_5A4308(rdram, ctx);
        goto after_4;
    // 0x801DECC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801DECCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DECD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DECD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DECD8: jr          $ra
    // 0x801DECDC: nop

    TRACE_RETURN()
    return;
    // 0x801DECDC: nop

;}
RECOMP_FUNC void func_801EB0A4_5A6FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EB0A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB0AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EB0B0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EB0B4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801EB0B8: jal         0x801EB180
    // 0x801EB0BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_801EB180_5A7090(rdram, ctx);
        goto after_0;
    // 0x801EB0BC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x801EB0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EB0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EB0C8: jr          $ra
    // 0x801EB0CC: nop

    TRACE_RETURN()
    return;
    // 0x801EB0CC: nop

;}
RECOMP_FUNC void func_801DE53C_59A44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE53C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE544: jal         0x801E3AC0
    // 0x801DE548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801DE548: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE554: jr          $ra
    // 0x801DE558: nop

    TRACE_RETURN()
    return;
    // 0x801DE558: nop

;}
RECOMP_FUNC void func_801ED054_5A8F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED054: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801ED058: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801ED05C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801ED060: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801ED064: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801ED068: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801ED06C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x801ED070: beq         $a2, $zero, L_801ED088
    if (ctx->r6 == 0) {
        // 0x801ED074: lw          $s0, 0x0($t6)
        ctx->r16 = MEM_W(ctx->r14, 0X0);
            goto L_801ED088;
    }
    // 0x801ED074: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x801ED078: beq         $a2, $at, L_801ED10C
    if (ctx->r6 == ctx->r1) {
        // 0x801ED07C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_801ED10C;
    }
    // 0x801ED07C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801ED080: b           L_801ED114
    // 0x801ED084: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801ED114;
    // 0x801ED084: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801ED088:
    // 0x801ED088: bne         $s0, $zero, L_801ED0EC
    if (ctx->r16 != 0) {
        // 0x801ED08C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_801ED0EC;
    }
    // 0x801ED08C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801ED090: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801ED094: jal         0x80035EEC
    // 0x801ED098: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801ED098: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x801ED09C: beq         $v0, $zero, L_801ED110
    if (ctx->r2 == 0) {
        // 0x801ED0A0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801ED110;
    }
    // 0x801ED0A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801ED0A4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801ED0A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x801ED0AC: jal         0x801ED124
    // 0x801ED0B0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_801ED124_5A9034(rdram, ctx);
        goto after_1;
    // 0x801ED0B0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x801ED0B4: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x801ED0B8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ED0BC: addiu       $t8, $zero, 0x68
    ctx->r24 = ADD32(0, 0X68);
    // 0x801ED0C0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801ED0C4: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801ED0C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801ED0CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801ED0D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801ED0D4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801ED0D8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801ED0DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801ED0E0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801ED0E4: jal         0x801DC554
    // 0x801ED0E8: addiu       $a1, $a1, 0xBC
    ctx->r5 = ADD32(ctx->r5, 0XBC);
    func_801DC554_598464(rdram, ctx);
        goto after_2;
    // 0x801ED0E8: addiu       $a1, $a1, 0xBC
    ctx->r5 = ADD32(ctx->r5, 0XBC);
    after_2:
L_801ED0EC:
    // 0x801ED0EC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801ED0F0: jal         0x801EE25C
    // 0x801ED0F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_3;
    // 0x801ED0F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x801ED0F8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x801ED0FC: jal         0x801EE2BC
    // 0x801ED100: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801EE2BC_5AA1CC(rdram, ctx);
        goto after_4;
    // 0x801ED100: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x801ED104: b           L_801ED114
    // 0x801ED108: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_801ED114;
    // 0x801ED108: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801ED10C:
    // 0x801ED10C: sb          $t9, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r25;
L_801ED110:
    // 0x801ED110: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_801ED114:
    // 0x801ED114: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801ED118: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801ED11C: jr          $ra
    // 0x801ED120: nop

    TRACE_RETURN()
    return;
    // 0x801ED120: nop

;}
RECOMP_FUNC void func_801DCE10_598D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DCE10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DCE14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DCE18: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801DCE1C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801DCE20: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801DCE24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801DCE28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DCE2C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801DCE30: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x801DCE34: addiu       $t9, $t9, -0x3340
    ctx->r25 = ADD32(ctx->r25, -0X3340);
    // 0x801DCE38: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801DCE3C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x801DCE40: lhu         $a1, 0x30F2($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X30F2);
    // 0x801DCE44: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801DCE48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DCE4C: andi        $t0, $a1, 0x10
    ctx->r8 = ctx->r5 & 0X10;
    // 0x801DCE50: bne         $t0, $zero, L_801DCE6C
    if (ctx->r8 != 0) {
        // 0x801DCE54: lui         $t1, 0x800C
        ctx->r9 = S32(0X800C << 16);
            goto L_801DCE6C;
    }
    // 0x801DCE54: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801DCE58: lbu         $t1, 0x7AE0($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X7AE0);
    // 0x801DCE5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DCE60: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x801DCE64: beql        $t2, $zero, L_801DCE78
    if (ctx->r10 == 0) {
        // 0x801DCE68: lhu         $a0, 0x30F4($v1)
        ctx->r4 = MEM_HU(ctx->r3, 0X30F4);
            goto L_801DCE78;
    }
    goto skip_0;
    // 0x801DCE68: lhu         $a0, 0x30F4($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X30F4);
    skip_0:
L_801DCE6C:
    // 0x801DCE6C: b           L_801DCFA0
    // 0x801DCE70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCFA0;
    // 0x801DCE70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DCE74: lhu         $a0, 0x30F4($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X30F4);
L_801DCE78:
    // 0x801DCE78: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
    // 0x801DCE7C: beq         $t3, $zero, L_801DCE8C
    if (ctx->r11 == 0) {
        // 0x801DCE80: andi        $t4, $a0, 0x2
        ctx->r12 = ctx->r4 & 0X2;
            goto L_801DCE8C;
    }
    // 0x801DCE80: andi        $t4, $a0, 0x2
    ctx->r12 = ctx->r4 & 0X2;
    // 0x801DCE84: b           L_801DCEA8
    // 0x801DCE88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DCEA8;
    // 0x801DCE88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801DCE8C:
    // 0x801DCE8C: beq         $t4, $zero, L_801DCE9C
    if (ctx->r12 == 0) {
        // 0x801DCE90: andi        $t5, $a1, 0x4
        ctx->r13 = ctx->r5 & 0X4;
            goto L_801DCE9C;
    }
    // 0x801DCE90: andi        $t5, $a1, 0x4
    ctx->r13 = ctx->r5 & 0X4;
    // 0x801DCE94: b           L_801DCEA8
    // 0x801DCE98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801DCEA8;
    // 0x801DCE98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801DCE9C:
    // 0x801DCE9C: beq         $t5, $zero, L_801DCEA8
    if (ctx->r13 == 0) {
        // 0x801DCEA0: nop
    
            goto L_801DCEA8;
    }
    // 0x801DCEA0: nop

    // 0x801DCEA4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_801DCEA8:
    // 0x801DCEA8: beq         $v0, $at, L_801DCED0
    if (ctx->r2 == ctx->r1) {
        // 0x801DCEAC: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801DCED0;
    }
    // 0x801DCEAC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DCEB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DCEB4: beq         $v0, $at, L_801DCF20
    if (ctx->r2 == ctx->r1) {
        // 0x801DCEB8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801DCF20;
    }
    // 0x801DCEB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DCEBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801DCEC0: beq         $v0, $at, L_801DCF64
    if (ctx->r2 == ctx->r1) {
        // 0x801DCEC4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_801DCF64;
    }
    // 0x801DCEC4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801DCEC8: b           L_801DCFA0
    // 0x801DCECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCFA0;
    // 0x801DCECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCED0:
    // 0x801DCED0: jal         0x801DCFB0
    // 0x801DCED4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DCFB0_598EC0(rdram, ctx);
        goto after_0;
    // 0x801DCED4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801DCED8: beq         $v0, $zero, L_801DCEF0
    if (ctx->r2 == 0) {
        // 0x801DCEDC: nop
    
            goto L_801DCEF0;
    }
    // 0x801DCEDC: nop

    // 0x801DCEE0: jal         0x801E75D4
    // 0x801DCEE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E75D4_5A34E4(rdram, ctx);
        goto after_1;
    // 0x801DCEE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801DCEE8: b           L_801DCFA0
    // 0x801DCEEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DCFA0;
    // 0x801DCEEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801DCEF0:
    // 0x801DCEF0: jal         0x801DD114
    // 0x801DCEF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801DD114_599024(rdram, ctx);
        goto after_2;
    // 0x801DCEF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x801DCEF8: beq         $v0, $zero, L_801DCF10
    if (ctx->r2 == 0) {
        // 0x801DCEFC: nop
    
            goto L_801DCF10;
    }
    // 0x801DCEFC: nop

    // 0x801DCF00: jal         0x801E77E4
    // 0x801DCF04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E77E4_5A36F4(rdram, ctx);
        goto after_3;
    // 0x801DCF04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x801DCF08: b           L_801DCFA0
    // 0x801DCF0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_801DCFA0;
    // 0x801DCF0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801DCF10:
    // 0x801DCF10: jal         0x80038BC8
    // 0x801DCF14: addiu       $a0, $zero, 0x3AC
    ctx->r4 = ADD32(0, 0X3AC);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801DCF14: addiu       $a0, $zero, 0x3AC
    ctx->r4 = ADD32(0, 0X3AC);
    after_4:
    // 0x801DCF18: b           L_801DCFA0
    // 0x801DCF1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCFA0;
    // 0x801DCF1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCF20:
    // 0x801DCF20: jal         0x801DD254
    // 0x801DCF24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DD254_599164(rdram, ctx);
        goto after_5;
    // 0x801DCF24: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_5:
    // 0x801DCF28: beq         $v0, $zero, L_801DCF38
    if (ctx->r2 == 0) {
        // 0x801DCF2C: nop
    
            goto L_801DCF38;
    }
    // 0x801DCF2C: nop

    // 0x801DCF30: b           L_801DCFA0
    // 0x801DCF34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCFA0;
    // 0x801DCF34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCF38:
    // 0x801DCF38: jal         0x801DD2C4
    // 0x801DCF3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801DD2C4_5991D4(rdram, ctx);
        goto after_6;
    // 0x801DCF3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_6:
    // 0x801DCF40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DCF44: bne         $v0, $at, L_801DCF5C
    if (ctx->r2 != ctx->r1) {
        // 0x801DCF48: nop
    
            goto L_801DCF5C;
    }
    // 0x801DCF48: nop

    // 0x801DCF4C: jal         0x80038BC8
    // 0x801DCF50: addiu       $a0, $zero, 0x2B1
    ctx->r4 = ADD32(0, 0X2B1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_7;
    // 0x801DCF50: addiu       $a0, $zero, 0x2B1
    ctx->r4 = ADD32(0, 0X2B1);
    after_7:
    // 0x801DCF54: b           L_801DCFA0
    // 0x801DCF58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_801DCFA0;
    // 0x801DCF58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801DCF5C:
    // 0x801DCF5C: b           L_801DCFA0
    // 0x801DCF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801DCFA0;
    // 0x801DCF60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCF64:
    // 0x801DCF64: jal         0x801DD3C4
    // 0x801DCF68: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801DD3C4_5992D4(rdram, ctx);
        goto after_8;
    // 0x801DCF68: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_8:
    // 0x801DCF6C: beql        $v0, $zero, L_801DCFA0
    if (ctx->r2 == 0) {
        // 0x801DCF70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801DCFA0;
    }
    goto skip_1;
    // 0x801DCF70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801DCF74: jal         0x801DD50C
    // 0x801DCF78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801DD50C_59941C(rdram, ctx);
        goto after_9;
    // 0x801DCF78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_9:
    // 0x801DCF7C: bne         $v0, $zero, L_801DCF9C
    if (ctx->r2 != 0) {
        // 0x801DCF80: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DCF9C;
    }
    // 0x801DCF80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DCF84: jal         0x801E8964
    // 0x801DCF88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801E8964_5A4874(rdram, ctx);
        goto after_10;
    // 0x801DCF88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x801DCF8C: jal         0x80038BC8
    // 0x801DCF90: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_11;
    // 0x801DCF90: addiu       $a0, $zero, 0x21A
    ctx->r4 = ADD32(0, 0X21A);
    after_11:
    // 0x801DCF94: b           L_801DCFA0
    // 0x801DCF98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_801DCFA0;
    // 0x801DCF98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_801DCF9C:
    // 0x801DCF9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DCFA0:
    // 0x801DCFA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DCFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DCFA8: jr          $ra
    // 0x801DCFAC: nop

    TRACE_RETURN()
    return;
    // 0x801DCFAC: nop

;}
RECOMP_FUNC void func_801EE3AC_5AA2BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE3AC: beq         $a0, $zero, L_801EE3F4
    if (ctx->r4 == 0) {
        // 0x801EE3B0: nop
    
            goto L_801EE3F4;
    }
    // 0x801EE3B0: nop

    // 0x801EE3B4: beq         $a1, $zero, L_801EE3F4
    if (ctx->r5 == 0) {
        // 0x801EE3B8: nop
    
            goto L_801EE3F4;
    }
    // 0x801EE3B8: nop

    // 0x801EE3BC: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x801EE3C0: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    // 0x801EE3C4: lbu         $t7, 0x1($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X1);
    // 0x801EE3C8: sb          $t7, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r15;
    // 0x801EE3CC: lbu         $t8, 0x2($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X2);
    // 0x801EE3D0: sb          $t8, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r24;
    // 0x801EE3D4: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x801EE3D8: sb          $t9, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r25;
    // 0x801EE3DC: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x801EE3E0: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x801EE3E4: lbu         $t1, 0x5($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X5);
    // 0x801EE3E8: sb          $t1, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r9;
    // 0x801EE3EC: lbu         $t2, 0x6($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X6);
    // 0x801EE3F0: sb          $t2, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r10;
L_801EE3F4:
    // 0x801EE3F4: jr          $ra
    // 0x801EE3F8: nop

    TRACE_RETURN()
    return;
    // 0x801EE3F8: nop

;}
RECOMP_FUNC void func_801E630C_5A221C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E630C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E6310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E6314: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E6318: lbu         $v0, 0xCC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E631C: slti        $at, $v0, 0x35
    ctx->r1 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x801E6320: bne         $at, $zero, L_801E632C
    if (ctx->r1 != 0) {
        // 0x801E6324: slti        $at, $v0, 0x3B
        ctx->r1 = SIGNED(ctx->r2) < 0X3B ? 1 : 0;
            goto L_801E632C;
    }
    // 0x801E6324: slti        $at, $v0, 0x3B
    ctx->r1 = SIGNED(ctx->r2) < 0X3B ? 1 : 0;
    // 0x801E6328: bne         $at, $zero, L_801E6360
    if (ctx->r1 != 0) {
        // 0x801E632C: slti        $at, $v0, 0x70
        ctx->r1 = SIGNED(ctx->r2) < 0X70 ? 1 : 0;
            goto L_801E6360;
    }
L_801E632C:
    // 0x801E632C: slti        $at, $v0, 0x70
    ctx->r1 = SIGNED(ctx->r2) < 0X70 ? 1 : 0;
    // 0x801E6330: bne         $at, $zero, L_801E6340
    if (ctx->r1 != 0) {
        // 0x801E6334: slti        $at, $v0, 0x7C
        ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
            goto L_801E6340;
    }
    // 0x801E6334: slti        $at, $v0, 0x7C
    ctx->r1 = SIGNED(ctx->r2) < 0X7C ? 1 : 0;
    // 0x801E6338: bne         $at, $zero, L_801E6360
    if (ctx->r1 != 0) {
        // 0x801E633C: nop
    
            goto L_801E6360;
    }
    // 0x801E633C: nop

L_801E6340:
    // 0x801E6340: jal         0x801E7DE8
    // 0x801E6344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E6344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E6348: bne         $v0, $zero, L_801E6360
    if (ctx->r2 != 0) {
        // 0x801E634C: nop
    
            goto L_801E6360;
    }
    // 0x801E634C: nop

    // 0x801E6350: jal         0x801E7E18
    // 0x801E6354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E7E18_5A3D28(rdram, ctx);
        goto after_1;
    // 0x801E6354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801E6358: beq         $v0, $zero, L_801E6368
    if (ctx->r2 == 0) {
        // 0x801E635C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E6368;
    }
    // 0x801E635C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_801E6360:
    // 0x801E6360: b           L_801E639C
    // 0x801E6364: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E639C;
    // 0x801E6364: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E6368:
    // 0x801E6368: jal         0x801E63AC
    // 0x801E636C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    func_801E63AC_5A22BC(rdram, ctx);
        goto after_2;
    // 0x801E636C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    after_2:
    // 0x801E6370: beq         $v0, $zero, L_801E6380
    if (ctx->r2 == 0) {
        // 0x801E6374: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801E6380;
    }
    // 0x801E6374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E6378: b           L_801E639C
    // 0x801E637C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E639C;
    // 0x801E637C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E6380:
    // 0x801E6380: jal         0x801E674C
    // 0x801E6384: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    func_801E674C_5A265C(rdram, ctx);
        goto after_3;
    // 0x801E6384: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    after_3:
    // 0x801E6388: beql        $v0, $zero, L_801E639C
    if (ctx->r2 == 0) {
        // 0x801E638C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E639C;
    }
    goto skip_0;
    // 0x801E638C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E6390: b           L_801E639C
    // 0x801E6394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E639C;
    // 0x801E6394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E6398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E639C:
    // 0x801E639C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E63A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E63A4: jr          $ra
    // 0x801E63A8: nop

    TRACE_RETURN()
    return;
    // 0x801E63A8: nop

;}
RECOMP_FUNC void func_801D15F0_58D500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D15F0: addiu       $sp, $sp, -0x298
    ctx->r29 = ADD32(ctx->r29, -0X298);
    // 0x801D15F4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x801D15F8: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x801D15FC: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x801D1600: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x801D1604: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x801D1608: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x801D160C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x801D1610: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x801D1614: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x801D1618: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x801D161C: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x801D1620: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x801D1624: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x801D1628: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x801D162C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x801D1630: sw          $a0, 0x298($sp)
    MEM_W(0X298, ctx->r29) = ctx->r4;
    // 0x801D1634: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D1638: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D163C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D1640: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    // 0x801D1644: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801D1648: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x801D164C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801D1650: swc1        $f6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
    // 0x801D1654: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801D1658: sb          $zero, 0x114($sp)
    MEM_B(0X114, ctx->r29) = 0;
    // 0x801D165C: sb          $zero, 0x115($sp)
    MEM_B(0X115, ctx->r29) = 0;
    // 0x801D1660: sb          $zero, 0x116($sp)
    MEM_B(0X116, ctx->r29) = 0;
    // 0x801D1664: sb          $zero, 0x117($sp)
    MEM_B(0X117, ctx->r29) = 0;
    // 0x801D1668: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
    // 0x801D166C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D1670: lw          $s5, 0x2A8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2A8);
    // 0x801D1674: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801D1678: mul.s       $f18, $f10, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x801D167C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801D1680: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801D1684: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x801D1688: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x801D168C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x801D1690: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D1694: div.s       $f0, $f18, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f14.fl);
    // 0x801D1698: addiu       $s1, $sp, 0x190
    ctx->r17 = ADD32(ctx->r29, 0X190);
    // 0x801D169C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x801D16A0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x801D16A4: addiu       $s7, $zero, 0x7FFF
    ctx->r23 = ADD32(0, 0X7FFF);
    // 0x801D16A8: addiu       $fp, $sp, 0x208
    ctx->r30 = ADD32(ctx->r29, 0X208);
    // 0x801D16AC: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x801D16B0: swc1        $f0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f0.u32l;
    // 0x801D16B4: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D16B8: mul.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x801D16BC: div.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
    // 0x801D16C0: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x801D16C4: swc1        $f0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f0.u32l;
    // 0x801D16C8: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    // 0x801D16CC: lwc1        $f0, 0x120($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X120);
    // 0x801D16D0: swc1        $f0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->f0.u32l;
    // 0x801D16D4: swc1        $f0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f0.u32l;
    // 0x801D16D8: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x801D16DC: lwc1        $f2, 0xC8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D16E0: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x801D16E4: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x801D16E8: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x801D16EC: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D16F0: lwc1        $f18, 0x0($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801D16F4: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x801D16F8: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D16FC: lwc1        $f6, 0xC($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0XC);
    // 0x801D1700: swc1        $f8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f8.u32l;
    // 0x801D1704: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D1708: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801D170C: lwc1        $f4, 0x14($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X14);
    // 0x801D1710: swc1        $f18, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f18.u32l;
    // 0x801D1714: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D1718: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801D171C: swc1        $f10, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f10.u32l;
    // 0x801D1720: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D1724: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D1728: swc1        $f6, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->f6.u32l;
    // 0x801D172C: lw          $t6, 0x298($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X298);
    // 0x801D1730: lbu         $t7, 0x92($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X92);
    // 0x801D1734: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x801D1738: bgez        $t7, L_801D174C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801D173C: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801D174C;
    }
    // 0x801D173C: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D1740: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1744: nop

    // 0x801D1748: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_801D174C:
    // 0x801D174C: swc1        $f0, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->f0.u32l;
    // 0x801D1750: swc1        $f0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f0.u32l;
    // 0x801D1754: lwc1        $f0, 0x8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D1758: lw          $t8, 0x298($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X298);
    // 0x801D175C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D1760: swc1        $f0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f0.u32l;
    // 0x801D1764: swc1        $f0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f0.u32l;
    // 0x801D1768: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D176C: lwc1        $f4, 0x1C0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x801D1770: swc1        $f0, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f0.u32l;
    // 0x801D1774: swc1        $f0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f0.u32l;
    // 0x801D1778: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D177C: lwc1        $f8, 0x1C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x801D1780: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D1784: lwc1        $f18, 0x1CC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1CC);
    // 0x801D1788: swc1        $f6, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f6.u32l;
    // 0x801D178C: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D1790: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D1794: lwc1        $f10, 0x1D4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1D4);
    // 0x801D1798: swc1        $f4, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f4.u32l;
    // 0x801D179C: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D17A0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x801D17A4: swc1        $f8, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f8.u32l;
    // 0x801D17A8: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D17AC: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D17B0: swc1        $f18, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f18.u32l;
    // 0x801D17B4: lbu         $t9, 0x92($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X92);
    // 0x801D17B8: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801D17BC: bgez        $t9, L_801D17D0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801D17C0: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D17D0;
    }
    // 0x801D17C0: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D17C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D17C8: nop

    // 0x801D17CC: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_801D17D0:
    // 0x801D17D0: swc1        $f12, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f12.u32l;
    // 0x801D17D4: swc1        $f12, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f12.u32l;
    // 0x801D17D8: lwc1        $f10, 0x19C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X19C);
    // 0x801D17DC: lwc1        $f4, 0x1A4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A4);
    // 0x801D17E0: swc1        $f0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f0.u32l;
    // 0x801D17E4: swc1        $f0, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f0.u32l;
    // 0x801D17E8: swc1        $f10, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f10.u32l;
    // 0x801D17EC: swc1        $f4, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f4.u32l;
    // 0x801D17F0: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D17F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D17F8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D17FC: swc1        $f6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f6.u32l;
    // 0x801D1800: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D1804: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x801D1808: swc1        $f18, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f18.u32l;
    // 0x801D180C: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D1810: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x801D1814: swc1        $f8, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f8.u32l;
    // 0x801D1818: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D181C: add.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801D1820: swc1        $f10, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f10.u32l;
    // 0x801D1824: lbu         $t0, 0x92($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X92);
    // 0x801D1828: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x801D182C: bgez        $t0, L_801D1840
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801D1830: cvt.s.w     $f0, $f6
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801D1840;
    }
    // 0x801D1830: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D1834: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D1838: nop

    // 0x801D183C: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_801D1840:
    // 0x801D1840: swc1        $f0, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f0.u32l;
    // 0x801D1844: swc1        $f0, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f0.u32l;
    // 0x801D1848: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x801D184C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1850: ldc1        $f26, -0x5528($at)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r1, -0X5528);
    // 0x801D1854: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x801D1858: lwc1        $f18, 0x4($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4);
    // 0x801D185C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x801D1860: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801D1864: swc1        $f18, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f18.u32l;
    // 0x801D1868: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x801D186C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801D1870: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D1874: lw          $s5, 0x2AC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2AC);
    // 0x801D1878: swc1        $f10, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f10.u32l;
L_801D187C:
    // 0x801D187C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D1880: lwc1        $f8, 0x1C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D1884: addiu       $a0, $sp, 0x250
    ctx->r4 = ADD32(ctx->r29, 0X250);
    // 0x801D1888: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D188C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x801D1890: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D1894: swc1        $f18, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f18.u32l;
    // 0x801D1898: lwc1        $f6, 0x20($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D189C: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D18A0: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x801D18A4: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x801D18A8: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D18AC: swc1        $f4, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f4.u32l;
    // 0x801D18B0: lwc1        $f10, 0x24($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D18B4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D18B8: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x801D18BC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801D18C0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D18C4: swc1        $f8, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f8.u32l;
    // 0x801D18C8: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D18CC: lwc1        $f18, 0x1C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D18D0: mul.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x801D18D4: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x801D18D8: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D18DC: swc1        $f6, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->f6.u32l;
    // 0x801D18E0: lwc1        $f4, 0x20($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D18E4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D18E8: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801D18EC: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x801D18F0: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D18F4: swc1        $f10, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f10.u32l;
    // 0x801D18F8: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D18FC: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D1900: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D1904: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x801D1908: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D190C: lwc1        $f6, 0x1FC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1FC);
    // 0x801D1910: swc1        $f18, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f18.u32l;
    // 0x801D1914: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D1918: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x801D191C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D1920: lwc1        $f6, 0x200($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X200);
    // 0x801D1924: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D1928: swc1        $f18, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f18.u32l;
    // 0x801D192C: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D1930: lwc1        $f8, 0x4($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801D1934: lw          $a1, 0x160($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X160);
    // 0x801D1938: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D193C: lwc1        $f6, 0x204($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X204);
    // 0x801D1940: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D1944: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x801D1948: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D194C: lwc1        $f4, 0x8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X8);
    // 0x801D1950: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D1954: lwc1        $f6, 0x1F0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1F0);
    // 0x801D1958: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D195C: swc1        $f18, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f18.u32l;
    // 0x801D1960: lwc1        $f10, 0x8($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D1964: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x801D1968: lw          $a3, 0x168($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X168);
    // 0x801D196C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D1970: lwc1        $f6, 0x1F4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1F4);
    // 0x801D1974: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D1978: swc1        $f18, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f18.u32l;
    // 0x801D197C: lwc1        $f10, 0xC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XC);
    // 0x801D1980: lwc1        $f4, 0x4($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801D1984: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D1988: lwc1        $f6, 0x1F8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1F8);
    // 0x801D198C: add.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D1990: swc1        $f18, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f18.u32l;
    // 0x801D1994: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D1998: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x801D199C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x801D19A0: lwc1        $f6, 0x164($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X164);
    // 0x801D19A4: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801D19A8: swc1        $f18, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f18.u32l;
    // 0x801D19AC: lwc1        $f10, 0x20($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D19B0: lwc1        $f4, 0x0($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X0);
    // 0x801D19B4: mul.s       $f0, $f20, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x801D19B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D19BC: lwc1        $f18, 0x4($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X4);
    // 0x801D19C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D19C4: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x801D19C8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801D19CC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D19D0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801D19D4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801D19D8: jal         0x8002C9D4
    // 0x801D19DC: nop

    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_0;
    // 0x801D19DC: nop

    after_0:
    // 0x801D19E0: lh          $t1, 0x288($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X288);
    // 0x801D19E4: bnel        $t1, $s7, L_801D1DBC
    if (ctx->r9 != ctx->r23) {
        // 0x801D19E8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_0;
    // 0x801D19E8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x801D19EC: lhu         $v0, 0x286($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X286);
    // 0x801D19F0: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
    // 0x801D19F4: beq         $v0, $at, L_801D1A04
    if (ctx->r2 == ctx->r1) {
        // 0x801D19F8: addiu       $at, $zero, 0x9A
        ctx->r1 = ADD32(0, 0X9A);
            goto L_801D1A04;
    }
    // 0x801D19F8: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x801D19FC: bnel        $v0, $at, L_801D1DBC
    if (ctx->r2 != ctx->r1) {
        // 0x801D1A00: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_1;
    // 0x801D1A00: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_1:
L_801D1A04:
    // 0x801D1A04: lwc1        $f8, 0x20($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D1A08: lwc1        $f6, 0x26C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X26C);
    // 0x801D1A0C: lwc1        $f18, 0x134($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801D1A10: mul.s       $f4, $f20, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x801D1A14: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D1A18: lwc1        $f6, 0x278($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X278);
    // 0x801D1A1C: swc1        $f0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1A20: lwc1        $f10, 0x4($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801D1A24: add.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x801D1A28: c.lt.s      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.fl < ctx->f8.fl;
    // 0x801D1A2C: nop

    // 0x801D1A30: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1A34: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_2;
    // 0x801D1A34: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_2:
    // 0x801D1A38: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x801D1A3C: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x801D1A40: c.eq.d      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.d == ctx->f4.d;
    // 0x801D1A44: nop

    // 0x801D1A48: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1A4C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_3;
    // 0x801D1A4C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x801D1A50: beq         $at, $zero, L_801D1A98
    if (ctx->r1 == 0) {
        // 0x801D1A54: lwc1        $f10, 0x124($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
            goto L_801D1A98;
    }
    // 0x801D1A54: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x801D1A58: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x801D1A5C: lwc1        $f18, 0x128($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X128);
    // 0x801D1A60: lwc1        $f8, 0x12C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x801D1A64: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D1A68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801D1A6C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D1A70: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D1A74: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801D1A78: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x801D1A7C: mul.s       $f4, $f6, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f28.fl);
    // 0x801D1A80: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x801D1A84: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x801D1A88: jal         0x8002C9D4
    // 0x801D1A8C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_1;
    // 0x801D1A8C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D1A90: b           L_801D1ADC
    // 0x801D1A94: lh          $t2, 0x240($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X240);
        goto L_801D1ADC;
    // 0x801D1A94: lh          $t2, 0x240($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X240);
L_801D1A98:
    // 0x801D1A98: lwc1        $f8, 0x128($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X128);
    // 0x801D1A9C: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x801D1AA0: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x801D1AA4: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x801D1AA8: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x801D1AAC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801D1AB0: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x801D1AB4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D1AB8: lwc1        $f18, 0x1C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D1ABC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x801D1AC0: lw          $a1, 0x154($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X154);
    // 0x801D1AC4: mul.s       $f8, $f18, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x801D1AC8: lw          $a2, 0x158($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X158);
    // 0x801D1ACC: lw          $a3, 0x15C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X15C);
    // 0x801D1AD0: jal         0x8002C9D4
    // 0x801D1AD4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_2;
    // 0x801D1AD4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801D1AD8: lh          $t2, 0x240($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X240);
L_801D1ADC:
    // 0x801D1ADC: lwc1        $f2, 0x230($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X230);
    // 0x801D1AE0: bnel        $t2, $s7, L_801D1DBC
    if (ctx->r10 != ctx->r23) {
        // 0x801D1AE4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_4;
    // 0x801D1AE4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_4:
    // 0x801D1AE8: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x801D1AEC: c.le.d      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.d <= ctx->f24.d;
    // 0x801D1AF0: nop

    // 0x801D1AF4: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1AF8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_5;
    // 0x801D1AF8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_5:
    // 0x801D1AFC: c.lt.d      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.d < ctx->f0.d;
    // 0x801D1B00: andi        $a3, $s3, 0x1
    ctx->r7 = ctx->r19 & 0X1;
    // 0x801D1B04: addiu       $t3, $sp, 0x114
    ctx->r11 = ADD32(ctx->r29, 0X114);
    // 0x801D1B08: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1B0C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_6;
    // 0x801D1B0C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_6:
    // 0x801D1B10: bne         $a3, $zero, L_801D1B40
    if (ctx->r7 != 0) {
        // 0x801D1B14: addu        $v1, $s3, $t3
        ctx->r3 = ADD32(ctx->r19, ctx->r11);
            goto L_801D1B40;
    }
    // 0x801D1B14: addu        $v1, $s3, $t3
    ctx->r3 = ADD32(ctx->r19, ctx->r11);
    // 0x801D1B18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D1B1C: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
    // 0x801D1B20: lwc1        $f6, 0x22C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X22C);
    // 0x801D1B24: addiu       $t5, $sp, 0xF0
    ctx->r13 = ADD32(ctx->r29, 0XF0);
    // 0x801D1B28: addu        $v0, $s6, $t5
    ctx->r2 = ADD32(ctx->r22, ctx->r13);
    // 0x801D1B2C: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x801D1B30: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x801D1B34: lwc1        $f4, 0x234($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X234);
    // 0x801D1B38: b           L_801D1DB8
    // 0x801D1B3C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
        goto L_801D1DB8;
    // 0x801D1B3C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
L_801D1B40:
    // 0x801D1B40: lbu         $t6, -0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, -0X1);
    // 0x801D1B44: beq         $t6, $zero, L_801D1DB8
    if (ctx->r14 == 0) {
        // 0x801D1B48: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_801D1DB8;
    }
    // 0x801D1B48: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x801D1B4C: subu        $t7, $t7, $s3
    ctx->r15 = SUB32(ctx->r15, ctx->r19);
    // 0x801D1B50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801D1B54: addiu       $t9, $t7, -0xC
    ctx->r25 = ADD32(ctx->r15, -0XC);
    // 0x801D1B58: addiu       $t8, $sp, 0xF0
    ctx->r24 = ADD32(ctx->r29, 0XF0);
    // 0x801D1B5C: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x801D1B60: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x801D1B64: lwc1        $f10, 0x22C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X22C);
    // 0x801D1B68: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x801D1B6C: nop

    // 0x801D1B70: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1B74: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_7;
    // 0x801D1B74: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_7:
    // 0x801D1B78: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D1B7C: lwc1        $f6, 0x234($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X234);
    // 0x801D1B80: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x801D1B84: nop

    // 0x801D1B88: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1B8C: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_8;
    // 0x801D1B8C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_8:
    // 0x801D1B90: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D1B94: addiu       $t0, $sp, 0x1C0
    ctx->r8 = ADD32(ctx->r29, 0X1C0);
    // 0x801D1B98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1B9C: c.eq.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl == ctx->f4.fl;
    // 0x801D1BA0: nop

    // 0x801D1BA4: bc1fl       L_801D1DBC
    if (!c1cs) {
        // 0x801D1BA8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_801D1DBC;
    }
    goto skip_9;
    // 0x801D1BA8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_9:
    // 0x801D1BAC: addu        $s0, $s6, $t0
    ctx->r16 = ADD32(ctx->r22, ctx->r8);
    // 0x801D1BB0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D1BB4: lwc1        $f18, 0x1C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D1BB8: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x801D1BBC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D1BC0: mul.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x801D1BC4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D1BC8: addiu       $v0, $v0, -0x3598
    ctx->r2 = ADD32(ctx->r2, -0X3598);
    // 0x801D1BCC: addiu       $s1, $sp, 0x22C
    ctx->r17 = ADD32(ctx->r29, 0X22C);
    // 0x801D1BD0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D1BD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D1BD8: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x801D1BDC: lwc1        $f4, 0x20($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X20);
    // 0x801D1BE0: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801D1BE4: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x801D1BE8: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D1BEC: mul.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x801D1BF0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x801D1BF4: lwc1        $f10, 0x220($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X220);
    // 0x801D1BF8: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x801D1BFC: lwc1        $f6, 0x0($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X0);
    // 0x801D1C00: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x801D1C04: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D1C08: lhu         $t1, 0x23E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X23E);
    // 0x801D1C0C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D1C10: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D1C14: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x801D1C18: sub.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801D1C1C: lwc1        $f4, 0x26C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X26C);
    // 0x801D1C20: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x801D1C24: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x801D1C28: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x801D1C2C: lwc1        $f18, 0x4($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X4);
    // 0x801D1C30: lwc1        $f6, 0x228($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X228);
    // 0x801D1C34: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D1C38: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801D1C3C: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x801D1C40: lwc1        $f10, 0x8($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X8);
    // 0x801D1C44: lwc1        $f4, 0x10($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X10);
    // 0x801D1C48: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x801D1C4C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D1C50: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D1C54: sub.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x801D1C58: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x801D1C5C: bne         $t2, $zero, L_801D1C68
    if (ctx->r10 != 0) {
        // 0x801D1C60: swc1        $f10, 0x150($sp)
        MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
            goto L_801D1C68;
    }
    // 0x801D1C60: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x801D1C64: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
L_801D1C68:
    // 0x801D1C68: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x801D1C6C: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x801D1C70: jal         0x8001D394
    // 0x801D1C74: sw          $t4, -0x35AC($at)
    MEM_W(-0X35AC, ctx->r1) = ctx->r12;
    func_8001D394_1DF94(rdram, ctx);
        goto after_3;
    // 0x801D1C74: sw          $t4, -0x35AC($at)
    MEM_W(-0X35AC, ctx->r1) = ctx->r12;
    after_3:
    // 0x801D1C78: addiu       $s3, $sp, 0x184
    ctx->r19 = ADD32(ctx->r29, 0X184);
    // 0x801D1C7C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801D1C80: addiu       $a2, $a2, -0x34C0
    ctx->r6 = ADD32(ctx->r6, -0X34C0);
    // 0x801D1C84: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801D1C88: jal         0x8001D898
    // 0x801D1C8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001D898_1E498(rdram, ctx);
        goto after_4;
    // 0x801D1C8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x801D1C90: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D1C94: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D1C98: jal         0x8001D394
    // 0x801D1C9C: swc1        $f18, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f18.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_5;
    // 0x801D1C9C: swc1        $f18, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x801D1CA0: lwc1        $f12, 0x184($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X184);
    // 0x801D1CA4: jal         0x800040A8
    // 0x801D1CA8: lwc1        $f14, 0x18C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18C);
    func_800040A8_4CA8(rdram, ctx);
        goto after_6;
    // 0x801D1CA8: lwc1        $f14, 0x18C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18C);
    after_6:
    // 0x801D1CAC: addiu       $t5, $v0, 0x200
    ctx->r13 = ADD32(ctx->r2, 0X200);
    // 0x801D1CB0: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801D1CB4: lw          $t7, 0x298($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X298);
    // 0x801D1CB8: addiu       $a0, $t6, -0x200
    ctx->r4 = ADD32(ctx->r14, -0X200);
    // 0x801D1CBC: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x801D1CC0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x801D1CC4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x801D1CC8: jal         0x80003F30
    // 0x801D1CCC: sh          $t6, 0x94($t7)
    MEM_H(0X94, ctx->r15) = ctx->r14;
    func_80003F30_4B30(rdram, ctx);
        goto after_7;
    // 0x801D1CCC: sh          $t6, 0x94($t7)
    MEM_H(0X94, ctx->r15) = ctx->r14;
    after_7:
    // 0x801D1CD0: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x801D1CD4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D1CD8: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801D1CDC: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x801D1CE0: mul.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801D1CE4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D1CE8: mul.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x801D1CEC: beql        $a3, $zero, L_801D1D28
    if (ctx->r7 == 0) {
        // 0x801D1CF0: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_801D1D28;
    }
    goto skip_10;
    // 0x801D1CF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_10:
    // 0x801D1CF4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801D1CF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D1CFC: neg.s       $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = -ctx->f14.fl;
    // 0x801D1D00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1D04: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801D1D08: nop

    // 0x801D1D0C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801D1D10: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x801D1D14: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x801D1D18: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x801D1D1C: b           L_801D1D4C
    // 0x801D1D20: swc1        $f12, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f12.u32l;
        goto L_801D1D4C;
    // 0x801D1D20: swc1        $f12, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f12.u32l;
    // 0x801D1D24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_801D1D28:
    // 0x801D1D28: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1D2C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x801D1D30: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x801D1D34: nop

    // 0x801D1D38: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x801D1D3C: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x801D1D40: add.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x801D1D44: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x801D1D48: swc1        $f12, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f12.u32l;
L_801D1D4C:
    // 0x801D1D4C: lwc1        $f8, 0x178($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X178);
    // 0x801D1D50: lwc1        $f6, 0x1C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x801D1D54: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801D1D58: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801D1D5C: lwc1        $f8, 0x180($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X180);
    // 0x801D1D60: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D1D64: swc1        $f18, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f18.u32l;
    // 0x801D1D68: lwc1        $f6, 0x24($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X24);
    // 0x801D1D6C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D1D70: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x801D1D74: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x801D1D78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D1D7C: nop

    // 0x801D1D80: swc1        $f8, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f8.u32l;
    // 0x801D1D84: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D1D88: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x801D1D8C: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D1D90: swc1        $f18, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f18.u32l;
    // 0x801D1D94: lwc1        $f18, 0x14C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x801D1D98: lwc1        $f4, 0x180($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X180);
    // 0x801D1D9C: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    // 0x801D1DA0: lwc1        $f10, 0x150($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X150);
    // 0x801D1DA4: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x801D1DA8: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x801D1DAC: swc1        $f6, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f6.u32l;
    // 0x801D1DB0: b           L_801D1DD0
    // 0x801D1DB4: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
        goto L_801D1DD0;
    // 0x801D1DB4: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
L_801D1DB8:
    // 0x801D1DB8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_801D1DBC:
    // 0x801D1DBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D1DC0: addiu       $s6, $s6, 0xC
    ctx->r22 = ADD32(ctx->r22, 0XC);
    // 0x801D1DC4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x801D1DC8: bne         $s3, $at, L_801D187C
    if (ctx->r19 != ctx->r1) {
        // 0x801D1DCC: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_801D187C;
    }
    // 0x801D1DCC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_801D1DD0:
    // 0x801D1DD0: lwc1        $f18, 0x130($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801D1DD4: swc1        $f18, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f18.u32l;
    // 0x801D1DD8: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801D1DDC: swc1        $f6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f6.u32l;
    // 0x801D1DE0: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801D1DE4: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    // 0x801D1DE8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x801D1DEC: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x801D1DF0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x801D1DF4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x801D1DF8: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x801D1DFC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x801D1E00: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x801D1E04: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x801D1E08: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x801D1E0C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801D1E10: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x801D1E14: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x801D1E18: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x801D1E1C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x801D1E20: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x801D1E24: jr          $ra
    // 0x801D1E28: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
    TRACE_RETURN()
    return;
    // 0x801D1E28: addiu       $sp, $sp, 0x298
    ctx->r29 = ADD32(ctx->r29, 0X298);
;}
RECOMP_FUNC void func_801F519C_5B10AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F519C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F51A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F51A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F51A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F51AC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801F51B0: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F51B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F51B8: jal         0x801E1C90
    // 0x801F51BC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801E1C90_59DBA0(rdram, ctx);
        goto after_0;
    // 0x801F51BC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F51C0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801F51C4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801F51C8: lwc1        $f4, 0x28($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X28);
    // 0x801F51CC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F51D0: nop

    // 0x801F51D4: bc1fl       L_801F5248
    if (!c1cs) {
        // 0x801F51D8: lhu         $t9, 0x98($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X98);
            goto L_801F5248;
    }
    goto skip_0;
    // 0x801F51D8: lhu         $t9, 0x98($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X98);
    skip_0:
    // 0x801F51DC: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F51E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F51E4: lbu         $v1, 0x2C($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2C);
    // 0x801F51E8: bne         $v1, $zero, L_801F5244
    if (ctx->r3 != 0) {
        // 0x801F51EC: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_801F5244;
    }
    // 0x801F51EC: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x801F51F0: sb          $t8, 0x2C($v0)
    MEM_B(0X2C, ctx->r2) = ctx->r24;
    // 0x801F51F4: jal         0x801E8964
    // 0x801F51F8: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801E8964_5A4874(rdram, ctx);
        goto after_1;
    // 0x801F51F8: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_1:
    // 0x801F51FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5200: jal         0x801DD830
    // 0x801F5204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_801DD830_599740(rdram, ctx);
        goto after_2;
    // 0x801F5204: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x801F5208: lbu         $v0, 0x2F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2F);
    // 0x801F520C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x801F5210: bnel        $v0, $at, L_801F522C
    if (ctx->r2 != ctx->r1) {
        // 0x801F5214: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_801F522C;
    }
    goto skip_1;
    // 0x801F5214: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    skip_1:
    // 0x801F5218: jal         0x80038BC8
    // 0x801F521C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801F521C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
    after_3:
    // 0x801F5220: b           L_801F5248
    // 0x801F5224: lhu         $t9, 0x98($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X98);
        goto L_801F5248;
    // 0x801F5224: lhu         $t9, 0x98($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X98);
    // 0x801F5228: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
L_801F522C:
    // 0x801F522C: beq         $v0, $at, L_801F523C
    if (ctx->r2 == ctx->r1) {
        // 0x801F5230: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_801F523C;
    }
    // 0x801F5230: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x801F5234: bnel        $v0, $at, L_801F5248
    if (ctx->r2 != ctx->r1) {
        // 0x801F5238: lhu         $t9, 0x98($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X98);
            goto L_801F5248;
    }
    goto skip_2;
    // 0x801F5238: lhu         $t9, 0x98($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X98);
    skip_2:
L_801F523C:
    // 0x801F523C: jal         0x80038BC8
    // 0x801F5240: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801F5240: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_4:
L_801F5244:
    // 0x801F5244: lhu         $t9, 0x98($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X98);
L_801F5248:
    // 0x801F5248: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x801F524C: beq         $t9, $zero, L_801F52A4
    if (ctx->r25 == 0) {
        // 0x801F5250: nop
    
            goto L_801F52A4;
    }
    // 0x801F5250: nop

    // 0x801F5254: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F5258: lwc1        $f10, 0x6C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x801F525C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x801F5260: nop

    // 0x801F5264: bc1f        L_801F5288
    if (!c1cs) {
        // 0x801F5268: nop
    
            goto L_801F5288;
    }
    // 0x801F5268: nop

    // 0x801F526C: jal         0x801E2264
    // 0x801F5270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2264_59E174(rdram, ctx);
        goto after_5;
    // 0x801F5270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801F5274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5278: jal         0x801DACDC
    // 0x801F527C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801F527C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_6:
    // 0x801F5280: b           L_801F5304
    // 0x801F5284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F5304;
    // 0x801F5284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F5288:
    // 0x801F5288: jal         0x801E2344
    // 0x801F528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E2344_59E254(rdram, ctx);
        goto after_7;
    // 0x801F528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801F5290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F5294: jal         0x801DACDC
    // 0x801F5298: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_8;
    // 0x801F5298: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_8:
    // 0x801F529C: b           L_801F5304
    // 0x801F52A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F5304;
    // 0x801F52A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F52A4:
    // 0x801F52A4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F52A8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F52AC: jalr        $t9
    // 0x801F52B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x801F52B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x801F52B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F52B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801F52BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x801F52C0: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x801F52C4: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x801F52C8: c.le.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl <= ctx->f16.fl;
    // 0x801F52CC: nop

    // 0x801F52D0: bc1fl       L_801F5304
    if (!c1cs) {
        // 0x801F52D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F5304;
    }
    goto skip_3;
    // 0x801F52D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801F52D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F52DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F52E0: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F52E4: jal         0x801E3324
    // 0x801F52E8: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    func_801E3324_59F234(rdram, ctx);
        goto after_10;
    // 0x801F52E8: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    after_10:
    // 0x801F52EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F52F0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801F52F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801F52F8: jal         0x801DAC7C
    // 0x801F52FC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_11;
    // 0x801F52FC: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_11:
    // 0x801F5300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F5304:
    // 0x801F5304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F5308: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F530C: jr          $ra
    // 0x801F5310: nop

    TRACE_RETURN()
    return;
    // 0x801F5310: nop

;}
RECOMP_FUNC void func_801F706C_5B2F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F706C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F7070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F7074: jal         0x801F7034
    // 0x801F7078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F7034_5B2F44(rdram, ctx);
        goto after_0;
    // 0x801F7078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F707C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F7080: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F7084: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F7088: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F708C: swc1        $f4, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f4.u32l;
    // 0x801F7090: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801F7094: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801F7098: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801F709C: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801F70A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F70A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F70A8: jr          $ra
    // 0x801F70AC: nop

    TRACE_RETURN()
    return;
    // 0x801F70AC: nop

;}
RECOMP_FUNC void func_801D23C0_58E2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D23C0: jr          $ra
    // 0x801D23C4: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    TRACE_RETURN()
    return;
    // 0x801D23C4: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
;}
RECOMP_FUNC void func_801F5B9C_5B1AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5BA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5BA8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801F5BAC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801F5BB0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801F5BB4: jal         0x801E4260
    // 0x801F5BB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E4260_5A0170(rdram, ctx);
        goto after_0;
    // 0x801F5BB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F5BBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F5BC0: beq         $v0, $zero, L_801F5BD8
    if (ctx->r2 == 0) {
        // 0x801F5BC4: lw          $a1, 0x20($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X20);
            goto L_801F5BD8;
    }
    // 0x801F5BC4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801F5BC8: jal         0x801EB518
    // 0x801F5BCC: nop

    func_801EB518_5A7428(rdram, ctx);
        goto after_1;
    // 0x801F5BCC: nop

    after_1:
    // 0x801F5BD0: b           L_801F5BE4
    // 0x801F5BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F5BE4;
    // 0x801F5BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5BD8:
    // 0x801F5BD8: jal         0x801F5C4C
    // 0x801F5BDC: nop

    func_801F5C4C_5B1B5C(rdram, ctx);
        goto after_2;
    // 0x801F5BDC: nop

    after_2:
    // 0x801F5BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F5BE4:
    // 0x801F5BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5BE8: jr          $ra
    // 0x801F5BEC: nop

    TRACE_RETURN()
    return;
    // 0x801F5BEC: nop

;}
RECOMP_FUNC void func_801E8C98_5A4BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8C98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801E8C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E8CA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801E8CA4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E8CA8: lw          $a0, 0xDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XDC);
    // 0x801E8CAC: lhu         $t7, 0x20($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X20);
    // 0x801E8CB0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E8CB4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8CB8: sb          $t6, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r14;
    // 0x801E8CBC: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    // 0x801E8CC0: jal         0x801E8C44
    // 0x801E8CC4: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801E8CC4: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E8CC8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801E8CCC: bne         $v0, $zero, L_801E8CDC
    if (ctx->r2 != 0) {
        // 0x801E8CD0: lbu         $a1, 0x2F($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0X2F);
            goto L_801E8CDC;
    }
    // 0x801E8CD0: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x801E8CD4: b           L_801E8D20
    // 0x801E8CD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801E8D20;
    // 0x801E8CD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801E8CDC:
    // 0x801E8CDC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x801E8CE0: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x801E8CE4: beql        $v1, $zero, L_801E8D20
    if (ctx->r3 == 0) {
        // 0x801E8CE8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_801E8D20;
    }
    goto skip_0;
    // 0x801E8CE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x801E8CEC: lhu         $t8, 0x20($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X20);
L_801E8CF0:
    // 0x801E8CF0: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801E8CF4: beql        $at, $zero, L_801E8D20
    if (ctx->r1 == 0) {
        // 0x801E8CF8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_801E8D20;
    }
    goto skip_1;
    // 0x801E8CF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_1:
    // 0x801E8CFC: lbu         $t9, 0x64($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X64);
    // 0x801E8D00: bnel        $a1, $t9, L_801E8D14
    if (ctx->r5 != ctx->r25) {
        // 0x801E8D04: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_801E8D14;
    }
    goto skip_2;
    // 0x801E8D04: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x801E8D08: b           L_801E8D20
    // 0x801E8D0C: lbu         $v0, 0x60($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X60);
        goto L_801E8D20;
    // 0x801E8D0C: lbu         $v0, 0x60($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X60);
    // 0x801E8D10: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_801E8D14:
    // 0x801E8D14: bnel        $v1, $zero, L_801E8CF0
    if (ctx->r3 != 0) {
        // 0x801E8D18: lhu         $t8, 0x20($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X20);
            goto L_801E8CF0;
    }
    goto skip_3;
    // 0x801E8D18: lhu         $t8, 0x20($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X20);
    skip_3:
    // 0x801E8D1C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_801E8D20:
    // 0x801E8D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E8D24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801E8D28: jr          $ra
    // 0x801E8D2C: nop

    TRACE_RETURN()
    return;
    // 0x801E8D2C: nop

;}
RECOMP_FUNC void func_801DBEC8_597DD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DBEC8: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x801DBECC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x801DBED0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x801DBED4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x801DBED8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x801DBEDC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x801DBEE0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801DBEE4: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x801DBEE8: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x801DBEEC: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x801DBEF0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801DBEF4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801DBEF8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801DBEFC: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x801DBF00: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801DBF04: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801DBF08: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801DBF0C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x801DBF10: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x801DBF14: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DBF18: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x801DBF1C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x801DBF20: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801DBF24: sub.s       $f26, $f6, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x801DBF28: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DBF2C: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801DBF30: addiu       $s4, $zero, 0x7FFF
    ctx->r20 = ADD32(0, 0X7FFF);
    // 0x801DBF34: sub.s       $f28, $f4, $f6
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f28.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801DBF38: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801DBF3C: mul.s       $f6, $f26, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x801DBF40: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801DBF44: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801DBF48: mul.s       $f8, $f28, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x801DBF4C: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x801DBF50: sub.s       $f30, $f10, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801DBF54: mul.s       $f4, $f30, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x801DBF58: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DBF5C: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801DBF60: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801DBF64: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x801DBF68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801DBF6C: div.s       $f16, $f12, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801DBF70: bc1fl       L_801DBF94
    if (!c1cs) {
        // 0x801DBF74: div.s       $f14, $f2, $f0
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
            goto L_801DBF94;
    }
    goto skip_0;
    // 0x801DBF74: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    skip_0:
    // 0x801DBF78: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
L_801DBF7C:
    // 0x801DBF7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801DBF80: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x801DBF84: nop

    // 0x801DBF88: bc1tl       L_801DBF7C
    if (c1cs) {
        // 0x801DBF8C: sub.s       $f2, $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_801DBF7C;
    }
    goto skip_1;
    // 0x801DBF8C: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x801DBF90: div.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_801DBF94:
    // 0x801DBF94: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DBF98: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801DBF9C: addiu       $s3, $s2, 0x1
    ctx->r19 = ADD32(ctx->r18, 0X1);
    // 0x801DBFA0: lwc1        $f20, 0x68($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DBFA4: lwc1        $f24, 0x60($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801DBFA8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801DBFAC: lw          $s1, 0x100($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X100);
    // 0x801DBFB0: sub.s       $f22, $f10, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801DBFB4: mul.s       $f18, $f14, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x801DBFB8: nop

    // 0x801DBFBC: mul.s       $f6, $f14, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f28.fl);
    // 0x801DBFC0: nop

    // 0x801DBFC4: mul.s       $f8, $f14, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f30.fl);
    // 0x801DBFC8: nop

    // 0x801DBFCC: mul.s       $f26, $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x801DBFD0: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x801DBFD4: mul.s       $f28, $f28, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f16.fl);
    // 0x801DBFD8: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x801DBFDC: mul.s       $f30, $f30, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f16.fl);
    // 0x801DBFE0: bltz        $s3, L_801DC058
    if (SIGNED(ctx->r19) < 0) {
        // 0x801DBFE4: nop
    
            goto L_801DC058;
    }
    // 0x801DBFE4: nop

    // 0x801DBFE8: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
L_801DBFEC:
    // 0x801DBFEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x801DBFF0: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    // 0x801DBFF4: jal         0x80029E08
    // 0x801DBFF8: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_0;
    // 0x801DBFF8: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801DBFFC: bne         $s4, $v0, L_801DC03C
    if (ctx->r20 != ctx->r2) {
        // 0x801DC000: lwc1        $f18, 0xD4($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
            goto L_801DC03C;
    }
    // 0x801DC000: lwc1        $f18, 0xD4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DC004: swc1        $f20, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f20.u32l;
    // 0x801DC008: swc1        $f22, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f22.u32l;
    // 0x801DC00C: bne         $s0, $s2, L_801DC02C
    if (ctx->r16 != ctx->r18) {
        // 0x801DC010: swc1        $f24, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->f24.u32l;
            goto L_801DC02C;
    }
    // 0x801DC010: swc1        $f24, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f24.u32l;
    // 0x801DC014: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DC018: lwc1        $f8, 0xCC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DC01C: add.s       $f20, $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x801DC020: add.s       $f22, $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f6.fl;
    // 0x801DC024: b           L_801DC048
    // 0x801DC028: add.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
        goto L_801DC048;
    // 0x801DC028: add.s       $f24, $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f8.fl;
L_801DC02C:
    // 0x801DC02C: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x801DC030: add.s       $f22, $f22, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f28.fl;
    // 0x801DC034: b           L_801DC048
    // 0x801DC038: add.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f30.fl;
        goto L_801DC048;
    // 0x801DC038: add.s       $f24, $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f30.fl;
L_801DC03C:
    // 0x801DC03C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801DC040: b           L_801DC058
    // 0x801DC044: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
        goto L_801DC058;
    // 0x801DC044: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
L_801DC048:
    // 0x801DC048: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801DC04C: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x801DC050: beql        $at, $zero, L_801DBFEC
    if (ctx->r1 == 0) {
        // 0x801DC054: mfc1        $a2, $f24
        ctx->r6 = (int32_t)ctx->f24.u32l;
            goto L_801DBFEC;
    }
    goto skip_2;
    // 0x801DC054: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    skip_2:
L_801DC058:
    // 0x801DC058: beq         $s0, $zero, L_801DC068
    if (ctx->r16 == 0) {
        // 0x801DC05C: addiu       $t7, $s2, 0x2
        ctx->r15 = ADD32(ctx->r18, 0X2);
            goto L_801DC068;
    }
    // 0x801DC05C: addiu       $t7, $s2, 0x2
    ctx->r15 = ADD32(ctx->r18, 0X2);
    // 0x801DC060: bnel        $t7, $s0, L_801DC070
    if (ctx->r15 != ctx->r16) {
        // 0x801DC064: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_801DC070;
    }
    goto skip_3;
    // 0x801DC064: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_3:
L_801DC068:
    // 0x801DC068: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x801DC06C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_801DC070:
    // 0x801DC070: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x801DC074: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801DC078: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801DC07C: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801DC080: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x801DC084: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x801DC088: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x801DC08C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801DC090: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x801DC094: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x801DC098: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x801DC09C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x801DC0A0: jr          $ra
    // 0x801DC0A4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    TRACE_RETURN()
    return;
    // 0x801DC0A4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_801E3AC0_59F9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3AC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E3AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3AC8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801E3ACC: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801E3AD0: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801E3AD4: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801E3AD8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801E3ADC: jalr        $t9
    // 0x801E3AE0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E3AE0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E3AE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E3AE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E3AEC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3AF0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801E3AF4: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E3AF8: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x801E3AFC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x801E3B00: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E3B04: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801E3B08: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E3B0C: bc1f        L_801E3B40
    if (!c1cs) {
        // 0x801E3B10: nop
    
            goto L_801E3B40;
    }
    // 0x801E3B10: nop

    // 0x801E3B14: lw          $t7, 0x5C($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X5C);
    // 0x801E3B18: sw          $zero, 0x48($a2)
    MEM_W(0X48, ctx->r6) = 0;
    // 0x801E3B1C: sb          $t6, 0x4C($a2)
    MEM_B(0X4C, ctx->r6) = ctx->r14;
    // 0x801E3B20: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x801E3B24: lw          $t8, 0x5C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X5C);
    // 0x801E3B28: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801E3B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801E3B30: jal         0x801DACDC
    // 0x801E3B34: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E3B34: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    after_1:
    // 0x801E3B38: b           L_801E3B90
    // 0x801E3B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E3B90;
    // 0x801E3B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3B40:
    // 0x801E3B40: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801E3B44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E3B48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801E3B4C: bnel        $t0, $at, L_801E3B90
    if (ctx->r8 != ctx->r1) {
        // 0x801E3B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E3B90;
    }
    goto skip_0;
    // 0x801E3B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E3B54: lbu         $v0, 0x60($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X60);
    // 0x801E3B58: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x801E3B5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E3B60: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x801E3B64: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x801E3B68: lw          $t3, -0x3954($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3954);
    // 0x801E3B6C: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x801E3B70: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x801E3B74: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801E3B78: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E3B7C: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x801E3B80: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x801E3B84: jal         0x801E8078
    // 0x801E3B88: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    func_801E8078_5A3F88(rdram, ctx);
        goto after_2;
    // 0x801E3B88: lw          $a1, 0x448C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X448C);
    after_2:
    // 0x801E3B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E3B90:
    // 0x801E3B90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E3B94: jr          $ra
    // 0x801E3B98: nop

    TRACE_RETURN()
    return;
    // 0x801E3B98: nop

;}
RECOMP_FUNC void func_801D9CE8_595BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9CE8: lbu         $t6, 0xD4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD4);
    // 0x801D9CEC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D9CF0: beql        $t6, $zero, L_801D9D6C
    if (ctx->r14 == 0) {
        // 0x801D9CF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9D6C;
    }
    goto skip_0;
    // 0x801D9CF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801D9CF8: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801D9CFC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x801D9D00: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801D9D04: andi        $t9, $t7, 0xFFFE
    ctx->r25 = ctx->r15 & 0XFFFE;
    // 0x801D9D08: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x801D9D0C: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x801D9D10: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
    // 0x801D9D14: lhu         $t1, 0x7A78($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7A78);
    // 0x801D9D18: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x801D9D1C: bnel        $t2, $zero, L_801D9D30
    if (ctx->r10 != 0) {
        // 0x801D9D20: sb          $t3, 0x64($v0)
        MEM_B(0X64, ctx->r2) = ctx->r11;
            goto L_801D9D30;
    }
    goto skip_1;
    // 0x801D9D20: sb          $t3, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r11;
    skip_1:
    // 0x801D9D24: b           L_801D9D30
    // 0x801D9D28: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
        goto L_801D9D30;
    // 0x801D9D28: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
    // 0x801D9D2C: sb          $t3, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r11;
L_801D9D30:
    // 0x801D9D30: lbu         $t4, 0xD4($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XD4);
    // 0x801D9D34: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x801D9D38: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x801D9D3C: bgtz        $t6, L_801D9D60
    if (SIGNED(ctx->r14) > 0) {
        // 0x801D9D40: sb          $t5, 0xD4($a0)
        MEM_B(0XD4, ctx->r4) = ctx->r13;
            goto L_801D9D60;
    }
    // 0x801D9D40: sb          $t5, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = ctx->r13;
    // 0x801D9D44: lbu         $t7, 0x30($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X30);
    // 0x801D9D48: sb          $zero, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = 0;
    // 0x801D9D4C: andi        $t9, $t7, 0xFFFB
    ctx->r25 = ctx->r15 & 0XFFFB;
    // 0x801D9D50: sb          $t9, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r25;
    // 0x801D9D54: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x801D9D58: sb          $t0, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r8;
    // 0x801D9D5C: sb          $zero, 0x64($v0)
    MEM_B(0X64, ctx->r2) = 0;
L_801D9D60:
    // 0x801D9D60: jr          $ra
    // 0x801D9D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801D9D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D9D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D9D6C:
    // 0x801D9D6C: jr          $ra
    // 0x801D9D70: nop

    TRACE_RETURN()
    return;
    // 0x801D9D70: nop

;}
RECOMP_FUNC void func_801E5720_5A1630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5720: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E5724: jr          $ra
    // 0x801E5728: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
    TRACE_RETURN()
    return;
    // 0x801E5728: lw          $v0, 0x8C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8C);
;}
RECOMP_FUNC void func_801F09B0_5AC8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F09B0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x801F09B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801F09B8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x801F09BC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x801F09C0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x801F09C4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x801F09C8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x801F09CC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x801F09D0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801F09D4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801F09D8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801F09DC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x801F09E0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801F09E4: lw          $s6, 0x5C($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X5C);
    // 0x801F09E8: jal         0x801F0C60
    // 0x801F09EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_801F0C60_5ACB70(rdram, ctx);
        goto after_0;
    // 0x801F09EC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x801F09F0: jal         0x801F0CE4
    // 0x801F09F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_801F0CE4_5ACBF4(rdram, ctx);
        goto after_1;
    // 0x801F09F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x801F09F8: bne         $v0, $zero, L_801F0AFC
    if (ctx->r2 != 0) {
        // 0x801F09FC: addiu       $s0, $sp, 0x70
        ctx->r16 = ADD32(ctx->r29, 0X70);
            goto L_801F0AFC;
    }
    // 0x801F09FC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x801F0A00: addiu       $v0, $sp, 0x7C
    ctx->r2 = ADD32(ctx->r29, 0X7C);
L_801F0A04:
    // 0x801F0A04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801F0A08: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x801F0A0C: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x801F0A10: bne         $at, $zero, L_801F0A04
    if (ctx->r1 != 0) {
        // 0x801F0A14: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_801F0A04;
    }
    // 0x801F0A14: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x801F0A18: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801F0A1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F0A20: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801F0A24: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x801F0A28: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801F0A2C: lw          $a1, -0x332C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X332C);
    // 0x801F0A30: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801F0A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801F0A38: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801F0A3C: jal         0x801F2048
    // 0x801F0A40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801F2048_5ADF58(rdram, ctx);
        goto after_2;
    // 0x801F0A40: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801F0A44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_801F0A48:
    // 0x801F0A48: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F0A4C: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x801F0A50: sb          $zero, 0x90($s1)
    MEM_B(0X90, ctx->r17) = 0;
    // 0x801F0A54: bne         $at, $zero, L_801F0A48
    if (ctx->r1 != 0) {
        // 0x801F0A58: lw          $s1, 0x0($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X0);
            goto L_801F0A48;
    }
    // 0x801F0A58: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x801F0A5C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x801F0A60: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x801F0A64: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
L_801F0A68:
    // 0x801F0A68: beq         $s1, $zero, L_801F0A98
    if (ctx->r17 == 0) {
        // 0x801F0A6C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801F0A98;
    }
    // 0x801F0A6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801F0A70: jal         0x801F0D4C
    // 0x801F0A74: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_801F0D4C_5ACC5C(rdram, ctx);
        goto after_3;
    // 0x801F0A74: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x801F0A78: beql        $v0, $zero, L_801F0A9C
    if (ctx->r2 == 0) {
        // 0x801F0A7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_801F0A9C;
    }
    goto skip_0;
    // 0x801F0A7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x801F0A80: lbu         $t7, 0x90($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X90);
    // 0x801F0A84: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F0A88: sb          $t8, 0x90($v0)
    MEM_B(0X90, ctx->r2) = ctx->r24;
    // 0x801F0A8C: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x801F0A90: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801F0A94: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
L_801F0A98:
    // 0x801F0A98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_801F0A9C:
    // 0x801F0A9C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x801F0AA0: bnel        $at, $zero, L_801F0A68
    if (ctx->r1 != 0) {
        // 0x801F0AA4: lw          $s1, 0x0($s0)
        ctx->r17 = MEM_W(ctx->r16, 0X0);
            goto L_801F0A68;
    }
    goto skip_1;
    // 0x801F0AA4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x801F0AA8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801F0AAC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x801F0AB0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_801F0AB4:
    // 0x801F0AB4: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x801F0AB8: beql        $s1, $zero, L_801F0AF0
    if (ctx->r17 == 0) {
        // 0x801F0ABC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_801F0AF0;
    }
    goto skip_2;
    // 0x801F0ABC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x801F0AC0: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x801F0AC4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801F0AC8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F0ACC: bne         $t1, $zero, L_801F0AEC
    if (ctx->r9 != 0) {
        // 0x801F0AD0: or          $a2, $s3, $zero
        ctx->r6 = ctx->r19 | 0;
            goto L_801F0AEC;
    }
    // 0x801F0AD0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x801F0AD4: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x801F0AD8: jal         0x801F0DA8
    // 0x801F0ADC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_801F0DA8_5ACCB8(rdram, ctx);
        goto after_4;
    // 0x801F0ADC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_4:
    // 0x801F0AE0: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x801F0AE4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x801F0AE8: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
L_801F0AEC:
    // 0x801F0AEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_801F0AF0:
    // 0x801F0AF0: bne         $s2, $s4, L_801F0AB4
    if (ctx->r18 != ctx->r20) {
        // 0x801F0AF4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_801F0AB4;
    }
    // 0x801F0AF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x801F0AF8: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_801F0AFC:
    // 0x801F0AFC: lui         $fp, 0x8020
    ctx->r30 = S32(0X8020 << 16);
    // 0x801F0B00: lui         $s7, 0x8020
    ctx->r23 = S32(0X8020 << 16);
    // 0x801F0B04: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x801F0B08: addiu       $s7, $s7, 0x4EA8
    ctx->r23 = ADD32(ctx->r23, 0X4EA8);
    // 0x801F0B0C: addiu       $fp, $fp, 0x4EAC
    ctx->r30 = ADD32(ctx->r30, 0X4EAC);
    // 0x801F0B10: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801F0B14: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_801F0B18:
    // 0x801F0B18: lbu         $t4, 0x91($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X91);
    // 0x801F0B1C: bnel        $t4, $zero, L_801F0B3C
    if (ctx->r12 != 0) {
        // 0x801F0B20: sb          $s6, 0x64($s1)
        MEM_B(0X64, ctx->r17) = ctx->r22;
            goto L_801F0B3C;
    }
    goto skip_3;
    // 0x801F0B20: sb          $s6, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r22;
    skip_3:
    // 0x801F0B24: lbu         $t5, 0x90($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X90);
    // 0x801F0B28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801F0B2C: addiu       $s0, $s5, 0x9C
    ctx->r16 = ADD32(ctx->r21, 0X9C);
    // 0x801F0B30: bne         $t5, $zero, L_801F0B44
    if (ctx->r13 != 0) {
        // 0x801F0B34: addiu       $s3, $s5, 0xA0
        ctx->r19 = ADD32(ctx->r21, 0XA0);
            goto L_801F0B44;
    }
    // 0x801F0B34: addiu       $s3, $s5, 0xA0
    ctx->r19 = ADD32(ctx->r21, 0XA0);
    // 0x801F0B38: sb          $s6, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r22;
L_801F0B3C:
    // 0x801F0B3C: b           L_801F0C24
    // 0x801F0B40: sw          $zero, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = 0;
        goto L_801F0C24;
    // 0x801F0B40: sw          $zero, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = 0;
L_801F0B44:
    // 0x801F0B44: lw          $t6, 0x8C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8C);
    // 0x801F0B48: sb          $zero, 0x64($s1)
    MEM_B(0X64, ctx->r17) = 0;
    // 0x801F0B4C: jal         0x801EE25C
    // 0x801F0B50: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_5;
    // 0x801F0B50: lw          $a0, 0x18($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X18);
    after_5:
    // 0x801F0B54: lhu         $t7, 0x62($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X62);
    // 0x801F0B58: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801F0B5C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F0B60: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x801F0B64: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801F0B68: div         $zero, $t9, $s4
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r20)));
    // 0x801F0B6C: mflo        $t0
    ctx->r8 = lo;
    // 0x801F0B70: sh          $t8, 0x62($s5)
    MEM_H(0X62, ctx->r21) = ctx->r24;
    // 0x801F0B74: bne         $s4, $zero, L_801F0B80
    if (ctx->r20 != 0) {
        // 0x801F0B78: nop
    
            goto L_801F0B80;
    }
    // 0x801F0B78: nop

    // 0x801F0B7C: break       7
    do_break(2149518204);
L_801F0B80:
    // 0x801F0B80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801F0B84: bne         $s4, $at, L_801F0B98
    if (ctx->r20 != ctx->r1) {
        // 0x801F0B88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801F0B98;
    }
    // 0x801F0B88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F0B8C: bne         $t9, $at, L_801F0B98
    if (ctx->r25 != ctx->r1) {
        // 0x801F0B90: nop
    
            goto L_801F0B98;
    }
    // 0x801F0B90: nop

    // 0x801F0B94: break       6
    do_break(2149518228);
L_801F0B98:
    // 0x801F0B98: div         $zero, $t0, $s4
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r20)));
    // 0x801F0B9C: mfhi        $v0
    ctx->r2 = hi;
    // 0x801F0BA0: addu        $t1, $s7, $v0
    ctx->r9 = ADD32(ctx->r23, ctx->r2);
    // 0x801F0BA4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x801F0BA8: addu        $t3, $fp, $v0
    ctx->r11 = ADD32(ctx->r30, ctx->r2);
    // 0x801F0BAC: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x801F0BB0: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x801F0BB4: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x801F0BB8: bne         $s4, $zero, L_801F0BC4
    if (ctx->r20 != 0) {
        // 0x801F0BBC: nop
    
            goto L_801F0BC4;
    }
    // 0x801F0BBC: nop

    // 0x801F0BC0: break       7
    do_break(2149518272);
L_801F0BC4:
    // 0x801F0BC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801F0BC8: bne         $s4, $at, L_801F0BDC
    if (ctx->r20 != ctx->r1) {
        // 0x801F0BCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801F0BDC;
    }
    // 0x801F0BCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801F0BD0: bne         $t0, $at, L_801F0BDC
    if (ctx->r8 != ctx->r1) {
        // 0x801F0BD4: nop
    
            goto L_801F0BDC;
    }
    // 0x801F0BD4: nop

    // 0x801F0BD8: break       6
    do_break(2149518296);
L_801F0BDC:
    // 0x801F0BDC: sb          $t4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r12;
    // 0x801F0BE0: lbu         $t5, 0x4EB0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X4EB0);
    // 0x801F0BE4: addiu       $a2, $a2, 0x49C0
    ctx->r6 = ADD32(ctx->r6, 0X49C0);
    // 0x801F0BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801F0BEC: sb          $t5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r13;
    // 0x801F0BF0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801F0BF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801F0BF8: lbu         $t6, 0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1);
    // 0x801F0BFC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x801F0C00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801F0C04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801F0C08: lbu         $t7, 0x2($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2);
    // 0x801F0C0C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801F0C10: lbu         $t8, 0x3($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3);
    // 0x801F0C14: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x801F0C18: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x801F0C1C: jal         0x801DC554
    // 0x801F0C20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_801DC554_598464(rdram, ctx);
        goto after_6;
    // 0x801F0C20: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_6:
L_801F0C24:
    // 0x801F0C24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801F0C28: bne         $s2, $s4, L_801F0B18
    if (ctx->r18 != ctx->r20) {
        // 0x801F0C2C: lw          $s1, 0x0($s1)
        ctx->r17 = MEM_W(ctx->r17, 0X0);
            goto L_801F0B18;
    }
    // 0x801F0C2C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x801F0C30: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x801F0C34: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801F0C38: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801F0C3C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801F0C40: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x801F0C44: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x801F0C48: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x801F0C4C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x801F0C50: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x801F0C54: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x801F0C58: jr          $ra
    // 0x801F0C5C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x801F0C5C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_801D8E08_594D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D8E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D8E0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D8E10: jal         0x801E7DA0
    // 0x801D8E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7DA0_5A3CB0(rdram, ctx);
        goto after_0;
    // 0x801D8E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D8E18: beq         $v0, $zero, L_801D8E7C
    if (ctx->r2 == 0) {
        // 0x801D8E1C: nop
    
            goto L_801D8E7C;
    }
    // 0x801D8E1C: nop

    // 0x801D8E20: jal         0x8003F1D8
    // 0x801D8E24: nop

    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_1;
    // 0x801D8E24: nop

    after_1:
    // 0x801D8E28: bne         $v0, $zero, L_801D8E7C
    if (ctx->r2 != 0) {
        // 0x801D8E2C: nop
    
            goto L_801D8E7C;
    }
    // 0x801D8E2C: nop

    // 0x801D8E30: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801D8E34: lbu         $t6, 0x62($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X62);
    // 0x801D8E38: bne         $t6, $zero, L_801D8E7C
    if (ctx->r14 != 0) {
        // 0x801D8E3C: nop
    
            goto L_801D8E7C;
    }
    // 0x801D8E3C: nop

    // 0x801D8E40: lw          $t7, 0x5C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X5C);
    // 0x801D8E44: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D8E48: ldc1        $f4, -0x52F8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X52F8);
    // 0x801D8E4C: lwc1        $f6, 0xB0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0XB0);
    // 0x801D8E50: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801D8E54: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D8E58: c.lt.d      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.d < ctx->f8.d;
    // 0x801D8E5C: nop

    // 0x801D8E60: bc1t        L_801D8E7C
    if (c1cs) {
        // 0x801D8E64: nop
    
            goto L_801D8E7C;
    }
    // 0x801D8E64: nop

    // 0x801D8E68: lw          $t8, -0x39DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39DC);
    // 0x801D8E6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D8E70: lbu         $t9, 0xE8($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XE8);
    // 0x801D8E74: bne         $t9, $zero, L_801D8E84
    if (ctx->r25 != 0) {
        // 0x801D8E78: nop
    
            goto L_801D8E84;
    }
    // 0x801D8E78: nop

L_801D8E7C:
    // 0x801D8E7C: b           L_801D8E84
    // 0x801D8E80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D8E84;
    // 0x801D8E80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D8E84:
    // 0x801D8E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D8E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D8E8C: jr          $ra
    // 0x801D8E90: nop

    TRACE_RETURN()
    return;
    // 0x801D8E90: nop

;}
RECOMP_FUNC void func_801E1584_59D494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1584: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E1588: jr          $ra
    // 0x801E158C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E158C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801E7F30_5A3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E7F30: lbu         $v1, 0xCC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCC);
    // 0x801E7F34: slti        $v0, $v1, 0x35
    ctx->r2 = SIGNED(ctx->r3) < 0X35 ? 1 : 0;
    // 0x801E7F38: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x801E7F3C: beq         $v0, $zero, L_801E7F48
    if (ctx->r2 == 0) {
        // 0x801E7F40: nop
    
            goto L_801E7F48;
    }
    // 0x801E7F40: nop

    // 0x801E7F44: slti        $v0, $v1, 0x3B
    ctx->r2 = SIGNED(ctx->r3) < 0X3B ? 1 : 0;
L_801E7F48:
    // 0x801E7F48: jr          $ra
    // 0x801E7F4C: nop

    TRACE_RETURN()
    return;
    // 0x801E7F4C: nop

;}
RECOMP_FUNC void func_801E244C_59E35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E244C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2450: jr          $ra
    // 0x801E2454: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x801E2454: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
;}
RECOMP_FUNC void func_801EC860_5A8770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EC860: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x801EC864: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801EC868: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x801EC86C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x801EC870: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x801EC874: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EC878: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x801EC87C: addiu       $t1, $t1, 0x4CFC
    ctx->r9 = ADD32(ctx->r9, 0X4CFC);
    // 0x801EC880: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x801EC884: lw          $t8, 0x18($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X18);
    // 0x801EC888: addiu       $t0, $sp, 0x70
    ctx->r8 = ADD32(ctx->r29, 0X70);
    // 0x801EC88C: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801EC890: sw          $t8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r24;
    // 0x801EC894: lw          $t9, 0x5C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X5C);
    // 0x801EC898: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x801EC89C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x801EC8A0: lbu         $s0, 0x68($t9)
    ctx->r16 = MEM_BU(ctx->r25, 0X68);
    // 0x801EC8A4: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x801EC8A8: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x801EC8AC: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x801EC8B0: lw          $t4, 0xC($t1)
    ctx->r12 = MEM_W(ctx->r9, 0XC);
    // 0x801EC8B4: addiu       $t5, $t5, 0x4D0C
    ctx->r13 = ADD32(ctx->r13, 0X4D0C);
    // 0x801EC8B8: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x801EC8BC: sw          $t4, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r12;
    // 0x801EC8C0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x801EC8C4: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x801EC8C8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x801EC8CC: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x801EC8D0: lwr         $at, 0x6($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X6);
    // 0x801EC8D4: addiu       $t3, $t3, 0x4D14
    ctx->r11 = ADD32(ctx->r11, 0X4D14);
    // 0x801EC8D8: addiu       $t9, $sp, 0x60
    ctx->r25 = ADD32(ctx->r29, 0X60);
    // 0x801EC8DC: swr         $at, 0x6($a2)
    do_swr(rdram, 0X6, ctx->r6, ctx->r1);
    // 0x801EC8E0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x801EC8E4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801EC8E8: addiu       $t8, $t8, 0x4D1C
    ctx->r24 = ADD32(ctx->r24, 0X4D1C);
    // 0x801EC8EC: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x801EC8F0: lhu         $at, 0x4($t3)
    ctx->r1 = MEM_HU(ctx->r11, 0X4);
    // 0x801EC8F4: addiu       $t4, $sp, 0x58
    ctx->r12 = ADD32(ctx->r29, 0X58);
    // 0x801EC8F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801EC8FC: sh          $at, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r1;
    // 0x801EC900: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801EC904: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801EC908: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x801EC90C: lhu         $at, 0x4($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X4);
    // 0x801EC910: sh          $at, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r1;
    // 0x801EC914: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801EC918: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EC91C: beq         $v0, $zero, L_801EC94C
    if (ctx->r2 == 0) {
        // 0x801EC920: nop
    
            goto L_801EC94C;
    }
    // 0x801EC920: nop

    // 0x801EC924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801EC928: beq         $v0, $at, L_801ECA94
    if (ctx->r2 == ctx->r1) {
        // 0x801EC92C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801ECA94;
    }
    // 0x801EC92C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EC930: beq         $v0, $at, L_801ECB5C
    if (ctx->r2 == ctx->r1) {
        // 0x801EC934: addiu       $s0, $s2, 0xC0
        ctx->r16 = ADD32(ctx->r18, 0XC0);
            goto L_801ECB5C;
    }
    // 0x801EC934: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
    // 0x801EC938: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EC93C: beq         $v0, $at, L_801ECBC0
    if (ctx->r2 == ctx->r1) {
        // 0x801EC940: addiu       $s0, $s2, 0xC0
        ctx->r16 = ADD32(ctx->r18, 0XC0);
            goto L_801ECBC0;
    }
    // 0x801EC940: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
    // 0x801EC944: b           L_801ECC10
    // 0x801EC948: addiu       $s0, $a0, 0xC0
    ctx->r16 = ADD32(ctx->r4, 0XC0);
        goto L_801ECC10;
    // 0x801EC948: addiu       $s0, $a0, 0xC0
    ctx->r16 = ADD32(ctx->r4, 0XC0);
L_801EC94C:
    // 0x801EC94C: bne         $s0, $at, L_801EC95C
    if (ctx->r16 != ctx->r1) {
        // 0x801EC950: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_801EC95C;
    }
    // 0x801EC950: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801EC954: b           L_801ECCA0
    // 0x801EC958: sb          $t0, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r8;
        goto L_801ECCA0;
    // 0x801EC958: sb          $t0, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r8;
L_801EC95C:
    // 0x801EC95C: bne         $s0, $zero, L_801EC970
    if (ctx->r16 != 0) {
        // 0x801EC960: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801EC970;
    }
    // 0x801EC960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801EC964: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x801EC968: b           L_801ECCA0
    // 0x801EC96C: sb          $t2, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r10;
        goto L_801ECCA0;
    // 0x801EC96C: sb          $t2, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r10;
L_801EC970:
    // 0x801EC970: jal         0x801EE5F4
    // 0x801EC974: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_0;
    // 0x801EC974: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x801EC978: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801EC97C: bne         $s0, $at, L_801EC998
    if (ctx->r16 != ctx->r1) {
        // 0x801EC980: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801EC998;
    }
    // 0x801EC980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801EC984: lbu         $t9, 0x61($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X61);
    // 0x801EC988: sll         $t3, $t9, 1
    ctx->r11 = S32(ctx->r25 << 1);
    // 0x801EC98C: addu        $v0, $sp, $t3
    ctx->r2 = ADD32(ctx->r29, ctx->r11);
    // 0x801EC990: b           L_801EC998
    // 0x801EC994: lhu         $v0, 0x60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X60);
        goto L_801EC998;
    // 0x801EC994: lhu         $v0, 0x60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X60);
L_801EC998:
    // 0x801EC998: lhu         $t1, 0x16($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X16);
    // 0x801EC99C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EC9A0: lwc1        $f12, -0x4574($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4574);
    // 0x801EC9A4: addu        $t5, $t1, $v0
    ctx->r13 = ADD32(ctx->r9, ctx->r2);
    // 0x801EC9A8: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x801EC9AC: andi        $t4, $t6, 0x3FF
    ctx->r12 = ctx->r14 & 0X3FF;
    // 0x801EC9B0: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x801EC9B4: sh          $t4, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r12;
    // 0x801EC9B8: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x801EC9BC: lwc1        $f2, 0x1C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EC9C0: lwc1        $f0, 0x1C($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x801EC9C4: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801EC9C8: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x801EC9CC: nop

    // 0x801EC9D0: bc1fl       L_801EC9E8
    if (!c1cs) {
        // 0x801EC9D4: swc1        $f0, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
            goto L_801EC9E8;
    }
    goto skip_0;
    // 0x801EC9D4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    skip_0:
    // 0x801EC9D8: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x801EC9DC: b           L_801EC9E8
    // 0x801EC9E0: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
        goto L_801EC9E8;
    // 0x801EC9E0: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801EC9E4: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
L_801EC9E8:
    // 0x801EC9E8: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EC9EC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x801EC9F0: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801EC9F4: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801EC9F8: lhu         $t7, 0x62($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X62);
    // 0x801EC9FC: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x801ECA00: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x801ECA04: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x801ECA08: mfhi        $t2
    ctx->r10 = hi;
    // 0x801ECA0C: sh          $t0, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r8;
    // 0x801ECA10: bne         $v1, $zero, L_801ECA1C
    if (ctx->r3 != 0) {
        // 0x801ECA14: nop
    
            goto L_801ECA1C;
    }
    // 0x801ECA14: nop

    // 0x801ECA18: break       7
    do_break(2149501464);
L_801ECA1C:
    // 0x801ECA1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801ECA20: bne         $v1, $at, L_801ECA34
    if (ctx->r3 != ctx->r1) {
        // 0x801ECA24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801ECA34;
    }
    // 0x801ECA24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801ECA28: bne         $v0, $at, L_801ECA34
    if (ctx->r2 != ctx->r1) {
        // 0x801ECA2C: nop
    
            goto L_801ECA34;
    }
    // 0x801ECA2C: nop

    // 0x801ECA30: break       6
    do_break(2149501488);
L_801ECA34:
    // 0x801ECA34: bne         $t2, $zero, L_801ECA8C
    if (ctx->r10 != 0) {
        // 0x801ECA38: nop
    
            goto L_801ECA8C;
    }
    // 0x801ECA38: nop

    // 0x801ECA3C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x801ECA40: mflo        $t9
    ctx->r25 = lo;
    // 0x801ECA44: andi        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 & 0X1;
    // 0x801ECA48: bne         $v1, $zero, L_801ECA54
    if (ctx->r3 != 0) {
        // 0x801ECA4C: nop
    
            goto L_801ECA54;
    }
    // 0x801ECA4C: nop

    // 0x801ECA50: break       7
    do_break(2149501520);
L_801ECA54:
    // 0x801ECA54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801ECA58: bne         $v1, $at, L_801ECA6C
    if (ctx->r3 != ctx->r1) {
        // 0x801ECA5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801ECA6C;
    }
    // 0x801ECA5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801ECA60: bne         $v0, $at, L_801ECA6C
    if (ctx->r2 != ctx->r1) {
        // 0x801ECA64: nop
    
            goto L_801ECA6C;
    }
    // 0x801ECA64: nop

    // 0x801ECA68: break       6
    do_break(2149501544);
L_801ECA6C:
    // 0x801ECA6C: beq         $t3, $zero, L_801ECA84
    if (ctx->r11 == 0) {
        // 0x801ECA70: nop
    
            goto L_801ECA84;
    }
    // 0x801ECA70: nop

    // 0x801ECA74: jal         0x80038BC8
    // 0x801ECA78: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801ECA78: addiu       $a0, $zero, 0x24D
    ctx->r4 = ADD32(0, 0X24D);
    after_1:
    // 0x801ECA7C: b           L_801ECC10
    // 0x801ECA80: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
        goto L_801ECC10;
    // 0x801ECA80: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
L_801ECA84:
    // 0x801ECA84: jal         0x80038BC8
    // 0x801ECA88: addiu       $a0, $zero, 0x24E
    ctx->r4 = ADD32(0, 0X24E);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801ECA88: addiu       $a0, $zero, 0x24E
    ctx->r4 = ADD32(0, 0X24E);
    after_2:
L_801ECA8C:
    // 0x801ECA8C: b           L_801ECC10
    // 0x801ECA90: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
        goto L_801ECC10;
    // 0x801ECA90: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
L_801ECA94:
    // 0x801ECA94: lhu         $t1, 0x62($s2)
    ctx->r9 = MEM_HU(ctx->r18, 0X62);
    // 0x801ECA98: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801ECA9C: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
    // 0x801ECAA0: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x801ECAA4: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x801ECAA8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x801ECAAC: bne         $at, $zero, L_801ECACC
    if (ctx->r1 != 0) {
        // 0x801ECAB0: sh          $t5, 0x62($s2)
        MEM_H(0X62, ctx->r18) = ctx->r13;
            goto L_801ECACC;
    }
    // 0x801ECAB0: sh          $t5, 0x62($s2)
    MEM_H(0X62, ctx->r18) = ctx->r13;
    // 0x801ECAB4: addiu       $s0, $s2, 0xC0
    ctx->r16 = ADD32(ctx->r18, 0XC0);
    // 0x801ECAB8: jal         0x801EE3AC
    // 0x801ECABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE3AC_5AA2BC(rdram, ctx);
        goto after_3;
    // 0x801ECABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801ECAC0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x801ECAC4: b           L_801ECB14
    // 0x801ECAC8: sb          $t4, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r12;
        goto L_801ECB14;
    // 0x801ECAC8: sb          $t4, 0x60($s2)
    MEM_B(0X60, ctx->r18) = ctx->r12;
L_801ECACC:
    // 0x801ECACC: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x801ECAD0: lbu         $t0, 0x2($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X2);
    // 0x801ECAD4: lbu         $t9, 0x3($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X3);
    // 0x801ECAD8: addiu       $t7, $t8, -0x2
    ctx->r15 = ADD32(ctx->r24, -0X2);
    // 0x801ECADC: lbu         $t1, 0x4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X4);
    // 0x801ECAE0: lbu         $t6, 0x5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X5);
    // 0x801ECAE4: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
    // 0x801ECAE8: sb          $t7, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r15;
    // 0x801ECAEC: addiu       $t2, $t0, -0xE
    ctx->r10 = ADD32(ctx->r8, -0XE);
    // 0x801ECAF0: addiu       $t3, $t9, -0x2E
    ctx->r11 = ADD32(ctx->r25, -0X2E);
    // 0x801ECAF4: addiu       $t5, $t1, -0x6
    ctx->r13 = ADD32(ctx->r9, -0X6);
    // 0x801ECAF8: addiu       $t4, $t6, -0x1B
    ctx->r12 = ADD32(ctx->r14, -0X1B);
    // 0x801ECAFC: addiu       $t7, $t8, -0x9
    ctx->r15 = ADD32(ctx->r24, -0X9);
    // 0x801ECB00: sb          $t2, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r10;
    // 0x801ECB04: sb          $t3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r11;
    // 0x801ECB08: sb          $t5, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r13;
    // 0x801ECB0C: sb          $t4, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r12;
    // 0x801ECB10: sb          $t7, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r15;
L_801ECB14:
    // 0x801ECB14: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ECB18: lwc1        $f10, -0x4570($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4570);
    // 0x801ECB1C: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECB20: lhu         $t0, 0x16($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X16);
    // 0x801ECB24: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801ECB28: swc1        $f16, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f16.u32l;
    // 0x801ECB2C: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECB30: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801ECB34: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801ECB38: lbu         $t2, 0x61($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X61);
    // 0x801ECB3C: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x801ECB40: addu        $t3, $sp, $t9
    ctx->r11 = ADD32(ctx->r29, ctx->r25);
    // 0x801ECB44: lhu         $t3, 0x58($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X58);
    // 0x801ECB48: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x801ECB4C: sh          $t5, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r13;
    // 0x801ECB50: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801ECB54: b           L_801ECC10
    // 0x801ECB58: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
        goto L_801ECC10;
    // 0x801ECB58: sh          $t6, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r14;
L_801ECB5C:
    // 0x801ECB5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECB60: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801ECB64: jal         0x801EE330
    // 0x801ECB68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_4;
    // 0x801ECB68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x801ECB6C: beq         $v0, $zero, L_801ECB7C
    if (ctx->r2 == 0) {
        // 0x801ECB70: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801ECB7C;
    }
    // 0x801ECB70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ECB74: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801ECB78: sb          $t4, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r12;
L_801ECB7C:
    // 0x801ECB7C: lwc1        $f18, 0x1C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECB80: lwc1        $f4, -0x456C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X456C);
    // 0x801ECB84: lhu         $t8, 0x16($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X16);
    // 0x801ECB88: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801ECB8C: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801ECB90: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECB94: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801ECB98: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801ECB9C: lbu         $t7, 0x61($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X61);
    // 0x801ECBA0: sll         $t2, $t7, 1
    ctx->r10 = S32(ctx->r15 << 1);
    // 0x801ECBA4: addu        $t9, $sp, $t2
    ctx->r25 = ADD32(ctx->r29, ctx->r10);
    // 0x801ECBA8: lhu         $t9, 0x58($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X58);
    // 0x801ECBAC: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x801ECBB0: sh          $t3, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r11;
    // 0x801ECBB4: andi        $t1, $t3, 0x3FF
    ctx->r9 = ctx->r11 & 0X3FF;
    // 0x801ECBB8: b           L_801ECC10
    // 0x801ECBBC: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
        goto L_801ECC10;
    // 0x801ECBBC: sh          $t1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r9;
L_801ECBC0:
    // 0x801ECBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801ECBC4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801ECBC8: jal         0x801EE330
    // 0x801ECBCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_5;
    // 0x801ECBCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x801ECBD0: beq         $v0, $zero, L_801ECBE4
    if (ctx->r2 == 0) {
        // 0x801ECBD4: lui         $at, 0x8021
        ctx->r1 = S32(0X8021 << 16);
            goto L_801ECBE4;
    }
    // 0x801ECBD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801ECBD8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801ECBDC: b           L_801ECC10
    // 0x801ECBE0: sb          $t5, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r13;
        goto L_801ECC10;
    // 0x801ECBE0: sb          $t5, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r13;
L_801ECBE4:
    // 0x801ECBE4: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECBE8: lwc1        $f10, -0x4568($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4568);
    // 0x801ECBEC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x801ECBF0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801ECBF4: swc1        $f16, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f16.u32l;
    // 0x801ECBF8: lwc1        $f0, 0x1C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801ECBFC: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x801ECC00: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x801ECC04: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x801ECC08: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x801ECC0C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_801ECC10:
    // 0x801ECC10: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801ECC14: jal         0x801EE25C
    // 0x801ECC18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_6;
    // 0x801ECC18: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x801ECC1C: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x801ECC20: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x801ECC24: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801ECC28: lbu         $t7, 0x60($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X60);
    // 0x801ECC2C: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x801ECC30: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801ECC34: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x801ECC38: addu        $t8, $sp, $t2
    ctx->r24 = ADD32(ctx->r29, ctx->r10);
    // 0x801ECC3C: lwc1        $f18, 0x70($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X70);
    // 0x801ECC40: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801ECC44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801ECC48: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x801ECC4C: or          $t0, $a2, $at
    ctx->r8 = ctx->r6 | ctx->r1;
    // 0x801ECC50: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801ECC54: or          $a2, $t0, $at
    ctx->r6 = ctx->r8 | ctx->r1;
    // 0x801ECC58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801ECC5C: addiu       $a1, $s2, 0xC8
    ctx->r5 = ADD32(ctx->r18, 0XC8);
    // 0x801ECC60: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x801ECC64: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x801ECC68: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    // 0x801ECC6C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801ECC70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801ECC74: lbu         $t5, 0x3($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3);
    // 0x801ECC78: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801ECC7C: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x801ECC80: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801ECC84: lbu         $t4, 0x5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5);
    // 0x801ECC88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801ECC8C: lbu         $t7, 0x6($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X6);
    // 0x801ECC90: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801ECC94: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x801ECC98: jal         0x801DC554
    // 0x801ECC9C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_801DC554_598464(rdram, ctx);
        goto after_7;
    // 0x801ECC9C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_7:
L_801ECCA0:
    // 0x801ECCA0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801ECCA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x801ECCA8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x801ECCAC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x801ECCB0: jr          $ra
    // 0x801ECCB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x801ECCB4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_801F5A5C_5B196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5A64: jal         0x801E3AC0
    // 0x801F5A68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3AC0_59F9D0(rdram, ctx);
        goto after_0;
    // 0x801F5A68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F5A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5A74: jr          $ra
    // 0x801F5A78: nop

    TRACE_RETURN()
    return;
    // 0x801F5A78: nop

;}
RECOMP_FUNC void func_801F4D94_5B0CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4D94: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801F4D98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4D9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F4DA0: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801F4DA4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4DA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F4DAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801F4DB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801F4DB8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x801F4DBC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801F4DC0: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x801F4DC4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801F4DC8: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x801F4DCC: lhu         $a0, 0x14($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X14);
    // 0x801F4DD0: addiu       $t6, $sp, 0x30
    ctx->r14 = ADD32(ctx->r29, 0X30);
    // 0x801F4DD4: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x801F4DD8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F4DDC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F4DE0: jal         0x80033898
    // 0x801F4DE4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801F4DE4: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x801F4DE8: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F4DEC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801F4DF0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801F4DF4: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F4DF8: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F4DFC: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801F4E00: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801F4E04: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F4E08: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x801F4E0C: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801F4E10: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F4E14: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x801F4E18: jal         0x80029E08
    // 0x801F4E1C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_80029E08_2AA08(rdram, ctx);
        goto after_1;
    // 0x801F4E1C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801F4E20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801F4E24: xori        $t8, $v0, 0x7FFF
    ctx->r24 = ctx->r2 ^ 0X7FFF;
    // 0x801F4E28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801F4E2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801F4E30: jr          $ra
    // 0x801F4E34: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x801F4E34: sltiu       $v0, $t8, 0x1
    ctx->r2 = ctx->r24 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_801E04D0_59C3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E04D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E04D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E04D8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E04DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E04E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E04E4: swc1        $f6, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f6.u32l;
    // 0x801E04E8: swc1        $f4, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f4.u32l;
    // 0x801E04EC: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801E04F0: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x801E04F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E04F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E04FC: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x801E0500: nop

    // 0x801E0504: bc1fl       L_801E0538
    if (!c1cs) {
        // 0x801E0508: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E0538;
    }
    goto skip_0;
    // 0x801E0508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E050C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E0510: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x801E0514: addiu       $t8, $t7, 0x200
    ctx->r24 = ADD32(ctx->r15, 0X200);
    // 0x801E0518: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801E051C: sh          $t9, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r25;
    // 0x801E0520: jal         0x801E62D0
    // 0x801E0524: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E62D0_5A21E0(rdram, ctx);
        goto after_0;
    // 0x801E0524: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E0528: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E052C: jal         0x801DACDC
    // 0x801E0530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801E0530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E0534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E0538:
    // 0x801E0538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E053C: jr          $ra
    // 0x801E0540: nop

    TRACE_RETURN()
    return;
    // 0x801E0540: nop

;}
RECOMP_FUNC void func_801F5ABC_5B19CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F5ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F5AC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F5AC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F5AC8: jal         0x801F5BF0
    // 0x801F5ACC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_801F5BF0_5B1B00(rdram, ctx);
        goto after_0;
    // 0x801F5ACC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x801F5AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F5AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F5AD8: jr          $ra
    // 0x801F5ADC: nop

    TRACE_RETURN()
    return;
    // 0x801F5ADC: nop

;}
RECOMP_FUNC void func_801E53E0_5A12F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E53E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E53E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801E53E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E53EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E53F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801E53F4: andi        $t6, $a2, 0xFFFF
    ctx->r14 = ctx->r6 & 0XFFFF;
    // 0x801E53F8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801E53FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E5400: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x801E5404: jal         0x801DB494
    // 0x801E5408: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DB494_5973A4(rdram, ctx);
        goto after_0;
    // 0x801E5408: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801E540C: bne         $v0, $zero, L_801E541C
    if (ctx->r2 != 0) {
        // 0x801E5410: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_801E541C;
    }
    // 0x801E5410: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801E5414: b           L_801E5498
    // 0x801E5418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5498;
    // 0x801E5418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E541C:
    // 0x801E541C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801E5420: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x801E5424: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801E5428: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x801E542C: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801E5430: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E5434: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E5438: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801E543C: nop

    // 0x801E5440: bc1fl       L_801E5458
    if (!c1cs) {
        // 0x801E5444: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801E5458;
    }
    goto skip_0;
    // 0x801E5444: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x801E5448: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801E544C: b           L_801E5458
    // 0x801E5450: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_801E5458;
    // 0x801E5450: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x801E5454: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_801E5458:
    // 0x801E5458: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x801E545C: nop

    // 0x801E5460: bc1t        L_801E5478
    if (c1cs) {
        // 0x801E5464: nop
    
            goto L_801E5478;
    }
    // 0x801E5464: nop

    // 0x801E5468: lw          $t7, 0x68($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X68);
    // 0x801E546C: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x801E5470: bgez        $t8, L_801E5480
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801E5474: nop
    
            goto L_801E5480;
    }
    // 0x801E5474: nop

L_801E5478:
    // 0x801E5478: b           L_801E5498
    // 0x801E547C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801E5498;
    // 0x801E547C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E5480:
    // 0x801E5480: jal         0x801E54A8
    // 0x801E5484: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801E54A8_5A13B8(rdram, ctx);
        goto after_1;
    // 0x801E5484: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x801E5488: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E548C: jal         0x801DACDC
    // 0x801E5490: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801E5490: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    after_2:
    // 0x801E5494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E5498:
    // 0x801E5498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E549C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E54A0: jr          $ra
    // 0x801E54A4: nop

    TRACE_RETURN()
    return;
    // 0x801E54A4: nop

;}
RECOMP_FUNC void func_801EE410_5AA320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE410: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801EE414: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x801EE418: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x801EE41C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801EE420: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x801EE424: beq         $v1, $zero, L_801EE458
    if (ctx->r3 == 0) {
        // 0x801EE428: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_801EE458;
    }
    // 0x801EE428: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801EE42C: addiu       $a0, $sp, 0x8
    ctx->r4 = ADD32(ctx->r29, 0X8);
    // 0x801EE430: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
L_801EE434:
    // 0x801EE434: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x801EE438: swc1        $f4, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->f4.u32l;
    // 0x801EE43C: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801EE440: swc1        $f6, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->f6.u32l;
    // 0x801EE444: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801EE448: swc1        $f8, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->f8.u32l;
    // 0x801EE44C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801EE450: bnel        $v0, $zero, L_801EE434
    if (ctx->r2 != 0) {
        // 0x801EE454: lwc1        $f4, 0x8($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
            goto L_801EE434;
    }
    goto skip_0;
    // 0x801EE454: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    skip_0:
L_801EE458:
    // 0x801EE458: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x801EE45C: addiu       $a0, $sp, 0x8
    ctx->r4 = ADD32(ctx->r29, 0X8);
    // 0x801EE460: beql        $v0, $zero, L_801EE494
    if (ctx->r2 == 0) {
        // 0x801EE464: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_801EE494;
    }
    goto skip_1;
    // 0x801EE464: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    skip_1:
    // 0x801EE468: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
L_801EE46C:
    // 0x801EE46C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x801EE470: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x801EE474: lwc1        $f16, -0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, -0X8);
    // 0x801EE478: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x801EE47C: lwc1        $f18, -0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, -0X4);
    // 0x801EE480: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x801EE484: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801EE488: bnel        $v0, $zero, L_801EE46C
    if (ctx->r2 != 0) {
        // 0x801EE48C: lwc1        $f10, 0x0($a0)
        ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
            goto L_801EE46C;
    }
    goto skip_2;
    // 0x801EE48C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    skip_2:
    // 0x801EE490: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_801EE494:
    // 0x801EE494: swc1        $f14, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f14.u32l;
    // 0x801EE498: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801EE49C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x801EE4A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801EE4A4: jr          $ra
    // 0x801EE4A8: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x801EE4A8: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_801F6AD0_5B29E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6AD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F6AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F6ADC: jal         0x801E7F50
    // 0x801F6AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F6AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6AE4: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801F6AE8: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801F6AEC: jalr        $t9
    // 0x801F6AF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801F6AF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6AF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F6AF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F6AFC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F6B00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6B04: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801F6B08: lwc1        $f4, 0x28($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X28);
    // 0x801F6B0C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801F6B10: nop

    // 0x801F6B14: bc1fl       L_801F6B28
    if (!c1cs) {
        // 0x801F6B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6B28;
    }
    goto skip_0;
    // 0x801F6B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6B1C: jal         0x801DACDC
    // 0x801F6B20: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6B20: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    after_2:
    // 0x801F6B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6B28:
    // 0x801F6B28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6B2C: jr          $ra
    // 0x801F6B30: nop

    TRACE_RETURN()
    return;
    // 0x801F6B30: nop

;}
RECOMP_FUNC void func_801F21D4_5AE0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F21D4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x801F21D8: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x801F21DC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F21E0: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801F21E4: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801F21E8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F21EC: nop

    // 0x801F21F0: bc1fl       L_801F2208
    if (!c1cs) {
        // 0x801F21F4: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801F2208;
    }
    goto skip_0;
    // 0x801F21F4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_0:
    // 0x801F21F8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801F21FC: b           L_801F2208
    // 0x801F2200: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_801F2208;
    // 0x801F2200: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    // 0x801F2204: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_801F2208:
    // 0x801F2208: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x801F220C: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F2210: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F2214: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F2218: nop

    // 0x801F221C: bc1fl       L_801F2234
    if (!c1cs) {
        // 0x801F2220: sub.s       $f14, $f0, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801F2234;
    }
    goto skip_1;
    // 0x801F2220: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
    // 0x801F2224: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801F2228: b           L_801F2234
    // 0x801F222C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_801F2234;
    // 0x801F222C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    // 0x801F2230: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
L_801F2234:
    // 0x801F2234: lwc1        $f0, 0x10($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X10);
    // 0x801F2238: lwc1        $f2, 0x10($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F223C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x801F2240: nop

    // 0x801F2244: bc1fl       L_801F225C
    if (!c1cs) {
        // 0x801F2248: sub.s       $f16, $f0, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801F225C;
    }
    goto skip_2;
    // 0x801F2248: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    skip_2:
    // 0x801F224C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x801F2250: b           L_801F225C
    // 0x801F2254: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
        goto L_801F225C;
    // 0x801F2254: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x801F2258: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
L_801F225C:
    // 0x801F225C: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x801F2260: nop

    // 0x801F2264: bc1tl       L_801F2290
    if (c1cs) {
        // 0x801F2268: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801F2290;
    }
    goto skip_3;
    // 0x801F2268: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_3:
    // 0x801F226C: c.lt.s      $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f20.fl < ctx->f14.fl;
    // 0x801F2270: nop

    // 0x801F2274: bc1tl       L_801F2290
    if (c1cs) {
        // 0x801F2278: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_801F2290;
    }
    goto skip_4;
    // 0x801F2278: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_4:
    // 0x801F227C: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x801F2280: nop

    // 0x801F2284: bc1f        L_801F2298
    if (!c1cs) {
        // 0x801F2288: nop
    
            goto L_801F2298;
    }
    // 0x801F2288: nop

    // 0x801F228C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_801F2290:
    // 0x801F2290: b           L_801F22D8
    // 0x801F2294: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_801F22D8;
    // 0x801F2294: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_801F2298:
    // 0x801F2298: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801F229C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801F22A0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801F22A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F22A8: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801F22AC: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801F22B0: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801F22B4: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x801F22B8: nop

    // 0x801F22BC: bc1fl       L_801F22D4
    if (!c1cs) {
        // 0x801F22C0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801F22D4;
    }
    goto skip_5;
    // 0x801F22C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_5:
    // 0x801F22C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801F22C8: b           L_801F22D8
    // 0x801F22CC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
        goto L_801F22D8;
    // 0x801F22CC: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x801F22D0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801F22D4:
    // 0x801F22D4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
L_801F22D8:
    // 0x801F22D8: jr          $ra
    // 0x801F22DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x801F22DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_801E291C_59E82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E291C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E2920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2928: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E292C: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E2930: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801E2934: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E2938: jal         0x801E2950
    // 0x801E293C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    func_801E2950_59E860(rdram, ctx);
        goto after_0;
    // 0x801E293C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    after_0:
    // 0x801E2940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2944: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2948: jr          $ra
    // 0x801E294C: nop

    TRACE_RETURN()
    return;
    // 0x801E294C: nop

;}
RECOMP_FUNC void func_801F9E18_5B5D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F9E18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F9E1C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x801F9E20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F9E24: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x801F9E28: andi        $t8, $t6, 0x8000
    ctx->r24 = ctx->r14 & 0X8000;
    // 0x801F9E2C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x801F9E30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F9E34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801F9E38: beq         $t8, $zero, L_801F9E50
    if (ctx->r24 == 0) {
        // 0x801F9E3C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_801F9E50;
    }
    // 0x801F9E3C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801F9E40: jal         0x80038D14
    // 0x801F9E44: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_80038D14_39914(rdram, ctx);
        goto after_0;
    // 0x801F9E44: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F9E48: b           L_801F9E68
    // 0x801F9E4C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_801F9E68;
    // 0x801F9E4C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_801F9E50:
    // 0x801F9E50: andi        $t9, $a1, 0x8000
    ctx->r25 = ctx->r5 & 0X8000;
    // 0x801F9E54: beql        $t9, $zero, L_801F9E6C
    if (ctx->r25 == 0) {
        // 0x801F9E58: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_801F9E6C;
    }
    goto skip_0;
    // 0x801F9E58: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_0:
    // 0x801F9E5C: jal         0x80038D3C
    // 0x801F9E60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80038D3C_3993C(rdram, ctx);
        goto after_1;
    // 0x801F9E60: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x801F9E64: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_801F9E68:
    // 0x801F9E68: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_801F9E6C:
    // 0x801F9E6C: beql        $v0, $zero, L_801F9E80
    if (ctx->r2 == 0) {
        // 0x801F9E70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F9E80;
    }
    goto skip_1;
    // 0x801F9E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F9E74: jal         0x80038BC8
    // 0x801F9E78: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801F9E78: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    after_2:
    // 0x801F9E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F9E80:
    // 0x801F9E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F9E84: jr          $ra
    // 0x801F9E88: nop

    TRACE_RETURN()
    return;
    // 0x801F9E88: nop

;}
RECOMP_FUNC void func_801D4078_58FF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D4078: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801D407C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801D4080: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801D4084: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801D4088: addiu       $t8, $t8, -0x3070
    ctx->r24 = ADD32(ctx->r24, -0X3070);
    // 0x801D408C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801D4090: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x801D4094: lb          $v1, 0x14($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X14);
    // 0x801D4098: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x801D409C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D40A0: beq         $v1, $zero, L_801D40BC
    if (ctx->r3 == 0) {
        // 0x801D40A4: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_801D40BC;
    }
    // 0x801D40A4: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801D40A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D40AC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801D40B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D40B4: b           L_801D40C8
    // 0x801D40B8: lwc1        $f0, -0x3264($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3264);
        goto L_801D40C8;
    // 0x801D40B8: lwc1        $f0, -0x3264($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X3264);
L_801D40BC:
    // 0x801D40BC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D40C0: nop

    // 0x801D40C4: mov.s       $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = ctx->f18.fl;
L_801D40C8:
    // 0x801D40C8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D40CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D40D0: lbu         $v1, -0x3830($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3830);
    // 0x801D40D4: add.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x801D40D8: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801D40DC: sll         $t0, $v1, 3
    ctx->r8 = S32(ctx->r3 << 3);
    // 0x801D40E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D40E4: sub.s       $f16, $f2, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x801D40E8: lbu         $t1, -0x3358($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3358);
    // 0x801D40EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D40F0: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x801D40F4: beq         $t1, $zero, L_801D4164
    if (ctx->r9 == 0) {
        // 0x801D40F8: mov.s       $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
            goto L_801D4164;
    }
    // 0x801D40F8: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x801D40FC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801D4100: nop

    // 0x801D4104: bc1fl       L_801D4118
    if (!c1cs) {
        // 0x801D4108: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_801D4118;
    }
    goto skip_0;
    // 0x801D4108: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_0:
    // 0x801D410C: b           L_801D4118
    // 0x801D4110: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801D4118;
    // 0x801D4110: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    // 0x801D4114: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801D4118:
    // 0x801D4118: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801D411C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801D4120: lwc1        $f6, -0x3264($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3264);
    // 0x801D4124: bc1f        L_801D4134
    if (!c1cs) {
        // 0x801D4128: sub.s       $f2, $f6, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
            goto L_801D4134;
    }
    // 0x801D4128: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x801D412C: b           L_801D4138
    // 0x801D4130: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
        goto L_801D4138;
    // 0x801D4130: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_801D4134:
    // 0x801D4134: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801D4138:
    // 0x801D4138: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x801D413C: nop

    // 0x801D4140: bc1f        L_801D4164
    if (!c1cs) {
        // 0x801D4144: nop
    
            goto L_801D4164;
    }
    // 0x801D4144: nop

    // 0x801D4148: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x801D414C: nop

    // 0x801D4150: bc1fl       L_801D4164
    if (!c1cs) {
        // 0x801D4154: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_801D4164;
    }
    goto skip_1;
    // 0x801D4154: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_1:
    // 0x801D4158: jr          $ra
    // 0x801D415C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    TRACE_RETURN()
    return;
    // 0x801D415C: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
    // 0x801D4160: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_801D4164:
    // 0x801D4164: jr          $ra
    // 0x801D4168: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    TRACE_RETURN()
    return;
    // 0x801D4168: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void func_801DB3E4_5972F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB3E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB3E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB3EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB3F0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801DB3F4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801DB3F8: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x801DB3FC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801DB400: jal         0x801DB418
    // 0x801DB404: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_801DB418_597328(rdram, ctx);
        goto after_0;
    // 0x801DB404: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801DB408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB40C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB410: jr          $ra
    // 0x801DB414: nop

    TRACE_RETURN()
    return;
    // 0x801DB414: nop

;}
RECOMP_FUNC void func_801CC000_587F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC008: sb          $zero, 0x61($a0)
    MEM_B(0X61, ctx->r4) = 0;
    // 0x801CC00C: sb          $zero, 0x62($a0)
    MEM_B(0X62, ctx->r4) = 0;
    // 0x801CC010: sb          $zero, 0x63($a0)
    MEM_B(0X63, ctx->r4) = 0;
    // 0x801CC014: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CC018: lw          $t6, -0x39DC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39DC);
    // 0x801CC01C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC020: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC024: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801CC028: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC02C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801CC030: sh          $zero, 0x80($a0)
    MEM_H(0X80, ctx->r4) = 0;
    // 0x801CC034: sh          $zero, 0x82($a0)
    MEM_H(0X82, ctx->r4) = 0;
    // 0x801CC038: sb          $zero, 0x90($a0)
    MEM_B(0X90, ctx->r4) = 0;
    // 0x801CC03C: sh          $zero, 0x96($a0)
    MEM_H(0X96, ctx->r4) = 0;
    // 0x801CC040: sh          $t7, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r15;
    // 0x801CC044: sh          $zero, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = 0;
    // 0x801CC048: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
    // 0x801CC04C: sw          $zero, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = 0;
    // 0x801CC050: sb          $zero, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = 0;
    // 0x801CC054: sh          $zero, 0xCE($a0)
    MEM_H(0XCE, ctx->r4) = 0;
    // 0x801CC058: sb          $zero, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = 0;
    // 0x801CC05C: sw          $zero, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = 0;
    // 0x801CC060: sb          $zero, 0xEC($a0)
    MEM_B(0XEC, ctx->r4) = 0;
    // 0x801CC064: sb          $zero, 0xED($a0)
    MEM_B(0XED, ctx->r4) = 0;
    // 0x801CC068: sh          $zero, 0xEE($a0)
    MEM_H(0XEE, ctx->r4) = 0;
    // 0x801CC06C: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    // 0x801CC070: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x801CC074: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x801CC078: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x801CC07C: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801CC080: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801CC084: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801CC088: swc1        $f0, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f0.u32l;
    // 0x801CC08C: swc1        $f0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f0.u32l;
    // 0x801CC090: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x801CC094: swc1        $f0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f0.u32l;
    // 0x801CC098: swc1        $f0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f0.u32l;
    // 0x801CC09C: swc1        $f0, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0A0: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0A4: swc1        $f0, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0A8: swc1        $f0, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0AC: swc1        $f0, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0B0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0B4: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801CC0B8: swc1        $f12, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f12.u32l;
    // 0x801CC0BC: swc1        $f12, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f12.u32l;
    // 0x801CC0C0: swc1        $f12, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f12.u32l;
    // 0x801CC0C4: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
    // 0x801CC0C8: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC0D0: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x801CC0D4: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0D8: swc1        $f0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f0.u32l;
    // 0x801CC0DC: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0E0: sh          $zero, 0x8($t1)
    MEM_H(0X8, ctx->r9) = 0;
    // 0x801CC0E4: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0E8: swc1        $f0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f0.u32l;
    // 0x801CC0EC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0F0: lwc1        $f2, 0x14($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X14);
    // 0x801CC0F4: swc1        $f2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f2.u32l;
    // 0x801CC0F8: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC0FC: swc1        $f2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f2.u32l;
    // 0x801CC100: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC104: sb          $zero, 0x18($t4)
    MEM_B(0X18, ctx->r12) = 0;
    // 0x801CC108: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC10C: sb          $zero, 0x19($t5)
    MEM_B(0X19, ctx->r13) = 0;
    // 0x801CC110: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC114: sh          $zero, 0x1A($t6)
    MEM_H(0X1A, ctx->r14) = 0;
    // 0x801CC118: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC11C: swc1        $f0, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f0.u32l;
    // 0x801CC120: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC124: lwc1        $f2, 0x28($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X28);
    // 0x801CC128: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x801CC12C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC130: swc1        $f2, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f2.u32l;
    // 0x801CC134: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC138: sb          $zero, 0x2E($t9)
    MEM_B(0X2E, ctx->r25) = 0;
    // 0x801CC13C: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC140: lbu         $v1, 0x2E($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2E);
    // 0x801CC144: sb          $v1, 0x2D($v0)
    MEM_B(0X2D, ctx->r2) = ctx->r3;
    // 0x801CC148: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC14C: sb          $v1, 0x2C($t0)
    MEM_B(0X2C, ctx->r8) = ctx->r3;
    // 0x801CC150: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC154: sb          $zero, 0x2F($t1)
    MEM_B(0X2F, ctx->r9) = 0;
    // 0x801CC158: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC15C: sh          $zero, 0x30($t2)
    MEM_H(0X30, ctx->r10) = 0;
    // 0x801CC160: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC164: sh          $zero, 0x32($t3)
    MEM_H(0X32, ctx->r11) = 0;
    // 0x801CC168: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC16C: sh          $zero, 0x34($t4)
    MEM_H(0X34, ctx->r12) = 0;
    // 0x801CC170: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC174: sh          $zero, 0x36($t5)
    MEM_H(0X36, ctx->r13) = 0;
    // 0x801CC178: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC17C: sw          $zero, 0x38($t6)
    MEM_W(0X38, ctx->r14) = 0;
    // 0x801CC180: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC184: swc1        $f0, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f0.u32l;
    // 0x801CC188: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC18C: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x801CC190: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x801CC194: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC198: swc1        $f12, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f12.u32l;
    // 0x801CC19C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1A0: lwc1        $f6, -0x5824($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5824);
    // 0x801CC1A4: swc1        $f6, 0x48($t9)
    MEM_W(0X48, ctx->r25) = ctx->f6.u32l;
    // 0x801CC1A8: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1AC: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
    // 0x801CC1B0: jal         0x801E7E90
    // 0x801CC1B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7E90_5A3DA0(rdram, ctx);
        goto after_0;
    // 0x801CC1B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CC1B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC1BC: beq         $v0, $zero, L_801CC1D8
    if (ctx->r2 == 0) {
        // 0x801CC1C0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801CC1D8;
    }
    // 0x801CC1C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CC1C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC1C8: lwc1        $f8, -0x5820($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5820);
    // 0x801CC1CC: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1D0: b           L_801CC1E8
    // 0x801CC1D4: swc1        $f8, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->f8.u32l;
        goto L_801CC1E8;
    // 0x801CC1D4: swc1        $f8, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->f8.u32l;
L_801CC1D8:
    // 0x801CC1D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC1DC: lwc1        $f10, -0x581C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X581C);
    // 0x801CC1E0: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1E4: swc1        $f10, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->f10.u32l;
L_801CC1E8:
    // 0x801CC1E8: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1EC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC1F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC1F4: swc1        $f0, 0x54($t3)
    MEM_W(0X54, ctx->r11) = ctx->f0.u32l;
    // 0x801CC1F8: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC1FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC200: sb          $zero, 0x58($t4)
    MEM_B(0X58, ctx->r12) = 0;
    // 0x801CC204: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC208: sb          $zero, 0x59($t5)
    MEM_B(0X59, ctx->r13) = 0;
    // 0x801CC20C: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC210: swc1        $f0, 0x64($t6)
    MEM_W(0X64, ctx->r14) = ctx->f0.u32l;
    // 0x801CC214: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC218: lwc1        $f16, 0x64($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X64);
    // 0x801CC21C: swc1        $f16, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->f16.u32l;
    // 0x801CC220: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC224: swc1        $f18, 0x60($t7)
    MEM_W(0X60, ctx->r15) = ctx->f18.u32l;
    // 0x801CC228: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC22C: sb          $zero, 0x68($t8)
    MEM_B(0X68, ctx->r24) = 0;
    // 0x801CC230: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC234: sb          $zero, 0x69($t9)
    MEM_B(0X69, ctx->r25) = 0;
    // 0x801CC238: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC23C: sh          $zero, 0x6A($t0)
    MEM_H(0X6A, ctx->r8) = 0;
    // 0x801CC240: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC244: swc1        $f0, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = ctx->f0.u32l;
    // 0x801CC248: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC24C: swc1        $f0, 0x74($t2)
    MEM_W(0X74, ctx->r10) = ctx->f0.u32l;
    // 0x801CC250: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC254: lwc1        $f2, 0x74($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X74);
    // 0x801CC258: swc1        $f2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f2.u32l;
    // 0x801CC25C: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC260: swc1        $f2, 0x6C($t3)
    MEM_W(0X6C, ctx->r11) = ctx->f2.u32l;
    // 0x801CC264: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC268: sb          $zero, 0x78($t4)
    MEM_B(0X78, ctx->r12) = 0;
    // 0x801CC26C: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC270: sw          $zero, 0x7C($t5)
    MEM_W(0X7C, ctx->r13) = 0;
    // 0x801CC274: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC278: sw          $zero, 0x80($t6)
    MEM_W(0X80, ctx->r14) = 0;
    // 0x801CC27C: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC280: sb          $zero, 0x85($t7)
    MEM_B(0X85, ctx->r15) = 0;
    // 0x801CC284: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC288: sw          $zero, 0x88($t8)
    MEM_W(0X88, ctx->r24) = 0;
    // 0x801CC28C: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC290: sw          $zero, 0x8C($t9)
    MEM_W(0X8C, ctx->r25) = 0;
    // 0x801CC294: lw          $t0, 0x5C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC298: sw          $zero, 0x90($t0)
    MEM_W(0X90, ctx->r8) = 0;
    // 0x801CC29C: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2A0: sw          $zero, 0x94($t1)
    MEM_W(0X94, ctx->r9) = 0;
    // 0x801CC2A4: lw          $t2, 0x5C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2A8: sw          $zero, 0xA0($t2)
    MEM_W(0XA0, ctx->r10) = 0;
    // 0x801CC2AC: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2B0: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x801CC2B4: sw          $v1, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r3;
    // 0x801CC2B8: lw          $t3, 0x5C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2BC: sw          $v1, 0x98($t3)
    MEM_W(0X98, ctx->r11) = ctx->r3;
    // 0x801CC2C0: lw          $t4, 0x5C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2C4: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x801CC2C8: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2CC: lhu         $t5, 0xA8($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XA8);
    // 0x801CC2D0: sh          $t5, 0xA6($v0)
    MEM_H(0XA6, ctx->r2) = ctx->r13;
    // 0x801CC2D4: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2D8: sb          $zero, 0xAA($t6)
    MEM_B(0XAA, ctx->r14) = 0;
    // 0x801CC2DC: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2E0: swc1        $f4, 0xB0($t7)
    MEM_W(0XB0, ctx->r15) = ctx->f4.u32l;
    // 0x801CC2E4: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2E8: lwc1        $f6, 0xB0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB0);
    // 0x801CC2EC: swc1        $f6, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f6.u32l;
    // 0x801CC2F0: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801CC2F4: jal         0x801CC454
    // 0x801CC2F8: sw          $zero, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = 0;
    func_801CC454_588364(rdram, ctx);
        goto after_1;
    // 0x801CC2F8: sw          $zero, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = 0;
    after_1:
    // 0x801CC2FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC304: jr          $ra
    // 0x801CC308: nop

    TRACE_RETURN()
    return;
    // 0x801CC308: nop

;}
RECOMP_FUNC void func_801DF610_59B520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF614: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF618: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DF61C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801DF620: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF624: lwc1        $f4, -0x4E44($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4E44);
    // 0x801DF628: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801DF62C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DF630: jal         0x801E7F50
    // 0x801DF634: swc1        $f4, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f4.u32l;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801DF634: swc1        $f4, 0x50($t6)
    MEM_W(0X50, ctx->r14) = ctx->f4.u32l;
    after_0:
    // 0x801DF638: jal         0x801DF858
    // 0x801DF63C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF858_59B768(rdram, ctx);
        goto after_1;
    // 0x801DF63C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DF640: bnel        $v0, $zero, L_801DF6C0
    if (ctx->r2 != 0) {
        // 0x801DF644: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF6C0;
    }
    goto skip_0;
    // 0x801DF644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801DF648: jal         0x801DF8B8
    // 0x801DF64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DF8B8_59B7C8(rdram, ctx);
        goto after_2;
    // 0x801DF64C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801DF650: bnel        $v0, $zero, L_801DF6C0
    if (ctx->r2 != 0) {
        // 0x801DF654: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF6C0;
    }
    goto skip_1;
    // 0x801DF654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801DF658: lbu         $t7, 0x90($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X90);
    // 0x801DF65C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801DF660: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801DF664: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DF668: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DF66C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DF670: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x801DF674: lwc1        $f0, 0x7DBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801DF678: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DF67C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DF680: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x801DF684: nop

    // 0x801DF688: bc1fl       L_801DF69C
    if (!c1cs) {
        // 0x801DF68C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_801DF69C;
    }
    goto skip_2;
    // 0x801DF68C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_2:
    // 0x801DF690: b           L_801DF69C
    // 0x801DF694: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_801DF69C;
    // 0x801DF694: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    // 0x801DF698: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_801DF69C:
    // 0x801DF69C: ldc1        $f10, -0x4E40($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0X4E40);
    // 0x801DF6A0: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x801DF6A4: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x801DF6A8: nop

    // 0x801DF6AC: bc1tl       L_801DF6C0
    if (c1cs) {
        // 0x801DF6B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801DF6C0;
    }
    goto skip_3;
    // 0x801DF6B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x801DF6B4: jal         0x801DACDC
    // 0x801DF6B8: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_3;
    // 0x801DF6B8: addiu       $a1, $zero, 0x44
    ctx->r5 = ADD32(0, 0X44);
    after_3:
    // 0x801DF6BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801DF6C0:
    // 0x801DF6C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DF6C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DF6C8: jr          $ra
    // 0x801DF6CC: nop

    TRACE_RETURN()
    return;
    // 0x801DF6CC: nop

;}
