#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D107C_63FECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D107C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D1080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D1084: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x801D1088: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D108C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1090: jal         0x801CCE64
    // 0x801D1094: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D1094: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D1098: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801D109C: jal         0x801CD1C0
    // 0x801D10A0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_801CD1C0_63C010(rdram, ctx);
        goto after_1;
    // 0x801D10A0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x801D10A4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x801D10A8: addiu       $t1, $zero, 0x32C8
    ctx->r9 = ADD32(0, 0X32C8);
    // 0x801D10AC: addiu       $a0, $zero, 0x45
    ctx->r4 = ADD32(0, 0X45);
    // 0x801D10B0: lw          $v1, 0xB4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0XB4);
    // 0x801D10B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x801D10B8: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x801D10BC: slti        $v0, $v1, 0x32C8
    ctx->r2 = SIGNED(ctx->r3) < 0X32C8 ? 1 : 0;
    // 0x801D10C0: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801D10C4: bne         $t7, $zero, L_801D10DC
    if (ctx->r15 != 0) {
        // 0x801D10C8: andi        $t0, $v0, 0xFF
        ctx->r8 = ctx->r2 & 0XFF;
            goto L_801D10DC;
    }
    // 0x801D10C8: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x801D10CC: slti        $t0, $v1, 0x6978
    ctx->r8 = SIGNED(ctx->r3) < 0X6978 ? 1 : 0;
    // 0x801D10D0: andi        $t8, $t0, 0xFF
    ctx->r24 = ctx->r8 & 0XFF;
    // 0x801D10D4: addiu       $t1, $zero, 0x6978
    ctx->r9 = ADD32(0, 0X6978);
    // 0x801D10D8: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
L_801D10DC:
    // 0x801D10DC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x801D10E0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x801D10E4: sb          $t0, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r8;
    // 0x801D10E8: jal         0x801CCBD0
    // 0x801D10EC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_801CCBD0_63BA20(rdram, ctx);
        goto after_2;
    // 0x801D10EC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_2:
    // 0x801D10F0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D10F4: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801D10F8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D10FC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D1100: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D1104: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D1108: ldc1        $f16, -0x1078($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1078);
    // 0x801D110C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801D1110: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D1114: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x801D1118: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D111C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x801D1120: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801D1124: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801D1128: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x801D112C: nop

    // 0x801D1130: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x801D1134: slt         $t3, $v1, $t1
    ctx->r11 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x801D1138: xori        $t3, $t3, 0x1
    ctx->r11 = ctx->r11 ^ 0X1;
    // 0x801D113C: and         $t0, $t0, $t3
    ctx->r8 = ctx->r8 & ctx->r11;
    // 0x801D1140: andi        $t4, $t0, 0xFF
    ctx->r12 = ctx->r8 & 0XFF;
    // 0x801D1144: beql        $t4, $zero, L_801D1188
    if (ctx->r12 == 0) {
        // 0x801D1148: slti        $at, $v1, 0x7148
        ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
            goto L_801D1188;
    }
    goto skip_0;
    // 0x801D1148: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    skip_0:
    // 0x801D114C: lw          $t5, -0x3A38($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A38);
    // 0x801D1150: lui         $t6, 0x4
    ctx->r14 = S32(0X4 << 16);
    // 0x801D1154: xori        $a0, $t1, 0x32C8
    ctx->r4 = ctx->r9 ^ 0X32C8;
    // 0x801D1158: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x801D115C: lhu         $t6, -0x520C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X520C);
    // 0x801D1160: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D1164: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x801D1168: bne         $t6, $at, L_801D1184
    if (ctx->r14 != ctx->r1) {
        // 0x801D116C: addiu       $a0, $a0, 0x29C
        ctx->r4 = ADD32(ctx->r4, 0X29C);
            goto L_801D1184;
    }
    // 0x801D116C: addiu       $a0, $a0, 0x29C
    ctx->r4 = ADD32(ctx->r4, 0X29C);
    // 0x801D1170: andi        $t7, $a0, 0xFFFF
    ctx->r15 = ctx->r4 & 0XFFFF;
    // 0x801D1174: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x801D1178: jal         0x80038B98
    // 0x801D117C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D117C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_3:
    // 0x801D1180: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
L_801D1184:
    // 0x801D1184: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
L_801D1188:
    // 0x801D1188: bne         $at, $zero, L_801D11A0
    if (ctx->r1 != 0) {
        // 0x801D118C: lw          $t8, 0x38($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X38);
            goto L_801D11A0;
    }
    // 0x801D118C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x801D1190: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
L_801D1194:
    // 0x801D1194: slti        $at, $v1, 0x7148
    ctx->r1 = SIGNED(ctx->r3) < 0X7148 ? 1 : 0;
    // 0x801D1198: beql        $at, $zero, L_801D1194
    if (ctx->r1 == 0) {
        // 0x801D119C: addiu       $v1, $v1, -0x7148
        ctx->r3 = ADD32(ctx->r3, -0X7148);
            goto L_801D1194;
    }
    goto skip_1;
    // 0x801D119C: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    skip_1:
L_801D11A0:
    // 0x801D11A0: sw          $v1, 0xB4($t8)
    MEM_W(0XB4, ctx->r24) = ctx->r3;
    // 0x801D11A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D11A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D11AC: jr          $ra
    // 0x801D11B0: nop

    TRACE_RETURN()
    return;
    // 0x801D11B0: nop

;}
RECOMP_FUNC void func_801CD780_63C5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CD784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CD788: jal         0x801CD690
    // 0x801CD78C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801CD690_63C4E0(rdram, ctx);
        goto after_0;
    // 0x801CD78C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CD790: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801CD794: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x801CD798: beql        $v1, $zero, L_801CD7B4
    if (ctx->r3 == 0) {
        // 0x801CD79C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801CD7B4;
    }
    goto skip_0;
    // 0x801CD79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801CD7A0: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
L_801CD7A4:
    // 0x801CD7A4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x801CD7A8: bnel        $v1, $zero, L_801CD7A4
    if (ctx->r3 != 0) {
        // 0x801CD7AC: sb          $v0, 0x5($v1)
        MEM_B(0X5, ctx->r3) = ctx->r2;
            goto L_801CD7A4;
    }
    goto skip_1;
    // 0x801CD7AC: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    skip_1:
    // 0x801CD7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801CD7B4:
    // 0x801CD7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CD7B8: jr          $ra
    // 0x801CD7BC: nop

    TRACE_RETURN()
    return;
    // 0x801CD7BC: nop

;}
RECOMP_FUNC void func_801D98D0_648720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D98D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D98D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D98D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D98DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D98E0: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D98E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D98E8: bgezl       $t6, L_801D9910
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D98EC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801D9910;
    }
    goto skip_0;
    // 0x801D98EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801D98F0: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D98F4: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D98F8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D98FC: jal         0x800352EC
    // 0x801D9900: addiu       $a0, $a0, -0x66A8
    ctx->r4 = ADD32(ctx->r4, -0X66A8);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D9900: addiu       $a0, $a0, -0x66A8
    ctx->r4 = ADD32(ctx->r4, -0X66A8);
    after_0:
    // 0x801D9904: b           L_801D994C
    // 0x801D9908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D994C;
    // 0x801D9908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D990C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801D9910:
    // 0x801D9910: jal         0x801CD504
    // 0x801D9914: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D9914: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801D9918: beq         $v0, $zero, L_801D9930
    if (ctx->r2 == 0) {
        // 0x801D991C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801D9930;
    }
    // 0x801D991C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D9920: jal         0x801D8BF0
    // 0x801D9924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801D9924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801D9928: b           L_801D994C
    // 0x801D992C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D994C;
    // 0x801D992C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D9930:
    // 0x801D9930: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801D9934: jal         0x801CD634
    // 0x801D9938: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D9938: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801D993C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801D9940: jal         0x801CD780
    // 0x801D9944: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801D9944: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801D9948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D994C:
    // 0x801D994C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9950: jr          $ra
    // 0x801D9954: nop

    TRACE_RETURN()
    return;
    // 0x801D9954: nop

;}
RECOMP_FUNC void func_801CF140_63DF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CF140: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CF144: lw          $t6, 0xB4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB4);
    // 0x801CF148: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CF14C: ldc1        $f8, -0x1170($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1170);
    // 0x801CF150: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801CF154: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CF158: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CF15C: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801CF160: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CF164: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CF168: nop

    // 0x801CF16C: slti        $at, $v0, 0x32C8
    ctx->r1 = SIGNED(ctx->r2) < 0X32C8 ? 1 : 0;
    // 0x801CF170: bnel        $at, $zero, L_801CF180
    if (ctx->r1 != 0) {
        // 0x801CF174: lw          $v1, 0xA8($a0)
        ctx->r3 = MEM_W(ctx->r4, 0XA8);
            goto L_801CF180;
    }
    goto skip_0;
    // 0x801CF174: lw          $v1, 0xA8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA8);
    skip_0:
    // 0x801CF178: sb          $t8, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r24;
    // 0x801CF17C: lw          $v1, 0xA8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA8);
L_801CF180:
    // 0x801CF180: lw          $a1, 0xB0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XB0);
    // 0x801CF184: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801CF188: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CF18C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x801CF190: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801CF194: addiu       $a1, $a1, -0xFA0
    ctx->r5 = ADD32(ctx->r5, -0XFA0);
    // 0x801CF198: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    // 0x801CF19C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CF1A0: sw          $v1, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->r3;
    // 0x801CF1A4: sw          $a1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r5;
    // 0x801CF1A8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801CF1AC: jr          $ra
    // 0x801CF1B0: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801CF1B0: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801D0500_63F350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D0504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0508: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D050C: lb          $v0, 0xA2($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA2);
    // 0x801D0510: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D0514: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801D0518: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801D051C: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x801D0520: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801D0524: bnel        $v0, $zero, L_801D0550
    if (ctx->r2 != 0) {
        // 0x801D0528: sb          $v0, 0xA2($a2)
        MEM_B(0XA2, ctx->r6) = ctx->r2;
            goto L_801D0550;
    }
    goto skip_0;
    // 0x801D0528: sb          $v0, 0xA2($a2)
    MEM_B(0XA2, ctx->r6) = ctx->r2;
    skip_0:
    // 0x801D052C: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
    // 0x801D0530: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x801D0534: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x801D0538: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801D053C: jal         0x80038B98
    // 0x801D0540: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    func_80038B98_39798(rdram, ctx);
        goto after_0;
    // 0x801D0540: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    after_0:
    // 0x801D0544: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x801D0548: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x801D054C: sb          $v0, 0xA2($a2)
    MEM_B(0XA2, ctx->r6) = ctx->r2;
L_801D0550:
    // 0x801D0550: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D0554: jal         0x801D056C
    // 0x801D0558: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_801D056C_63F3BC(rdram, ctx);
        goto after_1;
    // 0x801D0558: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x801D055C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D0564: jr          $ra
    // 0x801D0568: nop

    TRACE_RETURN()
    return;
    // 0x801D0568: nop

;}
RECOMP_FUNC void func_801E8500_657350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8500: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x801E8504: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E8508: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x801E850C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x801E8510: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801E8514: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801E8518: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801E851C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801E8520: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E8524: lw          $s0, 0xEC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XEC);
    // 0x801E8528: lwc1        $f4, 0x364($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X364);
    // 0x801E852C: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    // 0x801E8530: lwc1        $f6, 0x368($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X368);
    // 0x801E8534: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801E8538: lwc1        $f8, 0x36C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X36C);
    // 0x801E853C: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x801E8540: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x801E8544: lw          $s6, 0x5C($a0)
    ctx->r22 = MEM_W(ctx->r4, 0X5C);
    // 0x801E8548: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x801E854C: lw          $t7, 0x64($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X64);
    // 0x801E8550: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E8554: jal         0x80010358
    // 0x801E8558: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    func_80010358_10F58(rdram, ctx);
        goto after_0;
    // 0x801E8558: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E855C: lhu         $s3, 0xE8($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0XE8);
    // 0x801E8560: beq         $s3, $zero, L_801E8588
    if (ctx->r19 == 0) {
        // 0x801E8564: addiu       $t8, $s3, -0x1
        ctx->r24 = ADD32(ctx->r19, -0X1);
            goto L_801E8588;
    }
    // 0x801E8564: addiu       $t8, $s3, -0x1
    ctx->r24 = ADD32(ctx->r19, -0X1);
    // 0x801E8568: addiu       $s3, $t8, 0xF
    ctx->r19 = ADD32(ctx->r24, 0XF);
    // 0x801E856C: andi        $t9, $s3, 0xFFFF
    ctx->r25 = ctx->r19 & 0XFFFF;
    // 0x801E8570: sra         $t1, $t9, 4
    ctx->r9 = S32(SIGNED(ctx->r25) >> 4);
    // 0x801E8574: andi        $s3, $t1, 0xFFFF
    ctx->r19 = ctx->r9 & 0XFFFF;
    // 0x801E8578: slti        $at, $s3, 0x2BD
    ctx->r1 = SIGNED(ctx->r19) < 0X2BD ? 1 : 0;
    // 0x801E857C: bne         $at, $zero, L_801E8588
    if (ctx->r1 != 0) {
        // 0x801E8580: sh          $t8, 0xE8($s0)
        MEM_H(0XE8, ctx->r16) = ctx->r24;
            goto L_801E8588;
    }
    // 0x801E8580: sh          $t8, 0xE8($s0)
    MEM_H(0XE8, ctx->r16) = ctx->r24;
    // 0x801E8584: addiu       $s3, $zero, 0x2BC
    ctx->r19 = ADD32(0, 0X2BC);
L_801E8588:
    // 0x801E8588: beq         $s3, $zero, L_801E85E0
    if (ctx->r19 == 0) {
        // 0x801E858C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_801E85E0;
    }
    // 0x801E858C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E8590: sll         $a3, $s3, 3
    ctx->r7 = S32(ctx->r19 << 3);
    // 0x801E8594: addu        $a3, $a3, $s3
    ctx->r7 = ADD32(ctx->r7, ctx->r19);
    // 0x801E8598: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x801E859C: subu        $a3, $a3, $s3
    ctx->r7 = SUB32(ctx->r7, ctx->r19);
    // 0x801E85A0: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x801E85A4: addiu       $at, $zero, 0x2BC
    ctx->r1 = ADD32(0, 0X2BC);
    // 0x801E85A8: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x801E85AC: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x801E85B0: mflo        $t3
    ctx->r11 = lo;
    // 0x801E85B4: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x801E85B8: addiu       $t6, $zero, 0x3F
    ctx->r14 = ADD32(0, 0X3F);
    // 0x801E85BC: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x801E85C0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x801E85C4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x801E85C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801E85CC: addiu       $a3, $t3, 0x1
    ctx->r7 = ADD32(ctx->r11, 0X1);
    // 0x801E85D0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x801E85D4: addiu       $a2, $zero, 0x2A
    ctx->r6 = ADD32(0, 0X2A);
    // 0x801E85D8: jal         0x800106F0
    // 0x801E85DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_800106F0_112F0(rdram, ctx);
        goto after_1;
    // 0x801E85DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
L_801E85E0:
    // 0x801E85E0: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x801E85E4: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x801E85E8: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x801E85EC: addiu       $t2, $zero, 0x18
    ctx->r10 = ADD32(0, 0X18);
    // 0x801E85F0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x801E85F4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x801E85F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E85FC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E8600: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801E8604: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x801E8608: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801E860C: jal         0x800106F0
    // 0x801E8610: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_800106F0_112F0(rdram, ctx);
        goto after_2;
    // 0x801E8610: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x801E8614: lhu         $s3, 0xEA($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0XEA);
    // 0x801E8618: addiu       $s1, $zero, 0x28
    ctx->r17 = ADD32(0, 0X28);
    // 0x801E861C: addiu       $s0, $zero, 0x3E8
    ctx->r16 = ADD32(0, 0X3E8);
    // 0x801E8620: slti        $at, $s3, 0x2710
    ctx->r1 = SIGNED(ctx->r19) < 0X2710 ? 1 : 0;
    // 0x801E8624: bne         $at, $zero, L_801E8630
    if (ctx->r1 != 0) {
        // 0x801E8628: addiu       $s5, $zero, 0xA
        ctx->r21 = ADD32(0, 0XA);
            goto L_801E8630;
    }
    // 0x801E8628: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x801E862C: addiu       $s3, $zero, 0x270F
    ctx->r19 = ADD32(0, 0X270F);
L_801E8630:
    // 0x801E8630: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
L_801E8634:
    // 0x801E8634: div         $zero, $s3, $s0
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r16)));
    // 0x801E8638: mflo        $v0
    ctx->r2 = lo;
    // 0x801E863C: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x801E8640: slti        $t3, $v0, 0x8
    ctx->r11 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x801E8644: xori        $t3, $t3, 0x1
    ctx->r11 = ctx->r11 ^ 0X1;
    // 0x801E8648: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E864C: addu        $t5, $s4, $t4
    ctx->r13 = ADD32(ctx->r20, ctx->r12);
    // 0x801E8650: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x801E8654: lw          $t0, 0x0($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X0);
    // 0x801E8658: slti        $t9, $v1, 0x4
    ctx->r25 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x801E865C: xori        $t9, $t9, 0x1
    ctx->r25 = ctx->r25 ^ 0X1;
    // 0x801E8660: andi        $t7, $v1, 0x3
    ctx->r15 = ctx->r3 & 0X3;
    // 0x801E8664: bne         $s0, $zero, L_801E8670
    if (ctx->r16 != 0) {
        // 0x801E8668: nop
    
            goto L_801E8670;
    }
    // 0x801E8668: nop

    // 0x801E866C: break       7
    do_break(2149484140);
L_801E8670:
    // 0x801E8670: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E8674: bne         $s0, $at, L_801E8688
    if (ctx->r16 != ctx->r1) {
        // 0x801E8678: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E8688;
    }
    // 0x801E8678: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E867C: bne         $s2, $at, L_801E8688
    if (ctx->r18 != ctx->r1) {
        // 0x801E8680: nop
    
            goto L_801E8688;
    }
    // 0x801E8680: nop

    // 0x801E8684: break       6
    do_break(2149484164);
L_801E8688:
    // 0x801E8688: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x801E868C: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x801E8690: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x801E8694: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E8698: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801E869C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E86A0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E86A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x801E86A8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x801E86AC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x801E86B0: jal         0x800106F0
    // 0x801E86B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800106F0_112F0(rdram, ctx);
        goto after_3;
    // 0x801E86B4: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x801E86B8: div         $zero, $s2, $s0
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r16))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r16)));
    // 0x801E86BC: mfhi        $s3
    ctx->r19 = hi;
    // 0x801E86C0: andi        $t2, $s3, 0xFFFF
    ctx->r10 = ctx->r19 & 0XFFFF;
    // 0x801E86C4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x801E86C8: div         $zero, $s0, $s5
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r21)));
    // 0x801E86CC: bne         $s0, $zero, L_801E86D8
    if (ctx->r16 != 0) {
        // 0x801E86D0: nop
    
            goto L_801E86D8;
    }
    // 0x801E86D0: nop

    // 0x801E86D4: break       7
    do_break(2149484244);
L_801E86D8:
    // 0x801E86D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E86DC: bne         $s0, $at, L_801E86F0
    if (ctx->r16 != ctx->r1) {
        // 0x801E86E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E86F0;
    }
    // 0x801E86E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E86E4: bne         $s2, $at, L_801E86F0
    if (ctx->r18 != ctx->r1) {
        // 0x801E86E8: nop
    
            goto L_801E86F0;
    }
    // 0x801E86E8: nop

    // 0x801E86EC: break       6
    do_break(2149484268);
L_801E86F0:
    // 0x801E86F0: or          $s3, $t2, $zero
    ctx->r19 = ctx->r10 | 0;
    // 0x801E86F4: bne         $s5, $zero, L_801E8700
    if (ctx->r21 != 0) {
        // 0x801E86F8: nop
    
            goto L_801E8700;
    }
    // 0x801E86F8: nop

    // 0x801E86FC: break       7
    do_break(2149484284);
L_801E8700:
    // 0x801E8700: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801E8704: bne         $s5, $at, L_801E8718
    if (ctx->r21 != ctx->r1) {
        // 0x801E8708: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801E8718;
    }
    // 0x801E8708: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E870C: bne         $s0, $at, L_801E8718
    if (ctx->r16 != ctx->r1) {
        // 0x801E8710: nop
    
            goto L_801E8718;
    }
    // 0x801E8710: nop

    // 0x801E8714: break       6
    do_break(2149484308);
L_801E8718:
    // 0x801E8718: mflo        $s0
    ctx->r16 = lo;
    // 0x801E871C: bne         $s0, $zero, L_801E8634
    if (ctx->r16 != 0) {
        // 0x801E8720: nop
    
            goto L_801E8634;
    }
    // 0x801E8720: nop

    // 0x801E8724: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x801E8728: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x801E872C: addiu       $t5, $zero, 0x11
    ctx->r13 = ADD32(0, 0X11);
    // 0x801E8730: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x801E8734: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E8738: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801E873C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801E8740: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E8744: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801E8748: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x801E874C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801E8750: jal         0x800106F0
    // 0x801E8754: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_800106F0_112F0(rdram, ctx);
        goto after_4;
    // 0x801E8754: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_4:
    // 0x801E8758: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x801E875C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x801E8760: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x801E8764: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x801E8768: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801E876C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x801E8770: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801E8774: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E8778: addiu       $a1, $zero, 0x6A
    ctx->r5 = ADD32(0, 0X6A);
    // 0x801E877C: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x801E8780: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x801E8784: jal         0x800106F0
    // 0x801E8788: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_800106F0_112F0(rdram, ctx);
        goto after_5;
    // 0x801E8788: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_5:
    // 0x801E878C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x801E8790: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x801E8794: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x801E8798: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x801E879C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801E87A0: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x801E87A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801E87A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E87AC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x801E87B0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x801E87B4: addiu       $a3, $zero, 0x48
    ctx->r7 = ADD32(0, 0X48);
    // 0x801E87B8: jal         0x800106F0
    // 0x801E87BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800106F0_112F0(rdram, ctx);
        goto after_6;
    // 0x801E87BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_6:
    // 0x801E87C0: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x801E87C4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801E87C8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x801E87CC: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x801E87D0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801E87D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801E87D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801E87DC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x801E87E0: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
    // 0x801E87E4: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x801E87E8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x801E87EC: jal         0x800106F0
    // 0x801E87F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_800106F0_112F0(rdram, ctx);
        goto after_7;
    // 0x801E87F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_7:
    // 0x801E87F4: jal         0x800105AC
    // 0x801E87F8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800105AC_111AC(rdram, ctx);
        goto after_8;
    // 0x801E87F8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_8:
    // 0x801E87FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E8800: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E8804: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801E8808: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801E880C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801E8810: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801E8814: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x801E8818: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x801E881C: jr          $ra
    // 0x801E8820: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x801E8820: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_801D68E0_645730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D68E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D68E4: lhu         $t7, 0xBC($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XBC);
    // 0x801D68E8: lhu         $t6, 0xBE($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0XBE);
    // 0x801D68EC: lh          $v1, 0xC2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XC2);
    // 0x801D68F0: lhu         $t9, 0xC0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0XC0);
    // 0x801D68F4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x801D68F8: andi        $t8, $v0, 0x3FF
    ctx->r24 = ctx->r2 & 0X3FF;
    // 0x801D68FC: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x801D6900: andi        $t0, $v0, 0x3FF
    ctx->r8 = ctx->r2 & 0X3FF;
    // 0x801D6904: addiu       $v0, $t0, 0x200
    ctx->r2 = ADD32(ctx->r8, 0X200);
    // 0x801D6908: andi        $t1, $v0, 0x3FF
    ctx->r9 = ctx->r2 & 0X3FF;
    // 0x801D690C: addiu       $v0, $t1, -0x1C0
    ctx->r2 = ADD32(ctx->r9, -0X1C0);
    // 0x801D6910: sh          $t8, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = ctx->r24;
    // 0x801D6914: beq         $v0, $zero, L_801D6924
    if (ctx->r2 == 0) {
        // 0x801D6918: sh          $t0, 0xC0($a0)
        MEM_H(0XC0, ctx->r4) = ctx->r8;
            goto L_801D6924;
    }
    // 0x801D6918: sh          $t0, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r8;
    // 0x801D691C: sltiu       $at, $v0, 0x80
    ctx->r1 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x801D6920: bne         $at, $zero, L_801D692C
    if (ctx->r1 != 0) {
        // 0x801D6924: negu        $t2, $v1
        ctx->r10 = SUB32(0, ctx->r3);
            goto L_801D692C;
    }
L_801D6924:
    // 0x801D6924: negu        $t2, $v1
    ctx->r10 = SUB32(0, ctx->r3);
    // 0x801D6928: sh          $t2, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r10;
L_801D692C:
    // 0x801D692C: jr          $ra
    // 0x801D6930: nop

    TRACE_RETURN()
    return;
    // 0x801D6930: nop

;}
RECOMP_FUNC void func_801CDA88_63C8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CDA88: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x801CDA8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CDA90: lbu         $t6, 0xEF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XEF);
    // 0x801CDA94: lbu         $t7, 0xF3($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF3);
    // 0x801CDA98: lbu         $t8, 0xF7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XF7);
    // 0x801CDA9C: lwc1        $f4, 0xF8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801CDAA0: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801CDAA4: lwc1        $f8, 0x100($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X100);
    // 0x801CDAA8: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x801CDAAC: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801CDAB0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x801CDAB4: andi        $s5, $a3, 0xFF
    ctx->r21 = ctx->r7 & 0XFF;
    // 0x801CDAB8: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801CDABC: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x801CDAC0: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x801CDAC4: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x801CDAC8: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x801CDACC: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x801CDAD0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x801CDAD4: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x801CDAD8: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x801CDADC: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x801CDAE0: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801CDAE4: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801CDAE8: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801CDAEC: lbu         $a3, 0xEB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XEB);
    // 0x801CDAF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDAF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801CDAF8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801CDAFC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801CDB00: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801CDB04: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801CDB08: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801CDB0C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801CDB10: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x801CDB14: jal         0x801E199C
    // 0x801CDB18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_801E199C_6507EC(rdram, ctx);
        goto after_0;
    // 0x801CDB18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x801CDB1C: beq         $v0, $zero, L_801CDF30
    if (ctx->r2 == 0) {
        // 0x801CDB20: sw          $v0, 0xDC($sp)
        MEM_W(0XDC, ctx->r29) = ctx->r2;
            goto L_801CDF30;
    }
    // 0x801CDB20: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x801CDB24: lhu         $s4, 0x10A($sp)
    ctx->r20 = MEM_HU(ctx->r29, 0X10A);
    // 0x801CDB28: bnel        $s4, $zero, L_801CDB48
    if (ctx->r20 != 0) {
        // 0x801CDB2C: lhu         $s3, 0x112($sp)
        ctx->r19 = MEM_HU(ctx->r29, 0X112);
            goto L_801CDB48;
    }
    goto skip_0;
    // 0x801CDB2C: lhu         $s3, 0x112($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0X112);
    skip_0:
    // 0x801CDB30: jal         0x8000DD58
    // 0x801CDB34: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801CDB34: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_1:
    // 0x801CDB38: andi        $t0, $v0, 0x3F0
    ctx->r8 = ctx->r2 & 0X3F0;
    // 0x801CDB3C: sh          $t0, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r8;
    // 0x801CDB40: addiu       $s4, $zero, 0x400
    ctx->r20 = ADD32(0, 0X400);
    // 0x801CDB44: lhu         $s3, 0x112($sp)
    ctx->r19 = MEM_HU(ctx->r29, 0X112);
L_801CDB48:
    // 0x801CDB48: bne         $s3, $zero, L_801CDB64
    if (ctx->r19 != 0) {
        // 0x801CDB4C: nop
    
            goto L_801CDB64;
    }
    // 0x801CDB4C: nop

    // 0x801CDB50: jal         0x8000DD58
    // 0x801CDB54: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    func_8000DD58_E958(rdram, ctx);
        goto after_2;
    // 0x801CDB54: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    after_2:
    // 0x801CDB58: andi        $t2, $v0, 0x3F0
    ctx->r10 = ctx->r2 & 0X3F0;
    // 0x801CDB5C: sh          $t2, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r10;
    // 0x801CDB60: addiu       $s3, $zero, 0x400
    ctx->r19 = ADD32(0, 0X400);
L_801CDB64:
    // 0x801CDB64: jal         0x8000DD58
    // 0x801CDB68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x801CDB68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x801CDB6C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x801CDB70: bne         $v1, $zero, L_801CDB84
    if (ctx->r3 != 0) {
        // 0x801CDB74: andi        $s6, $v0, 0xFF
        ctx->r22 = ctx->r2 & 0XFF;
            goto L_801CDB84;
    }
    // 0x801CDB74: andi        $s6, $v0, 0xFF
    ctx->r22 = ctx->r2 & 0XFF;
    // 0x801CDB78: addiu       $s6, $v1, 0x2
    ctx->r22 = ADD32(ctx->r3, 0X2);
    // 0x801CDB7C: andi        $t3, $s6, 0xFF
    ctx->r11 = ctx->r22 & 0XFF;
    // 0x801CDB80: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
L_801CDB84:
    // 0x801CDB84: addu        $s6, $s6, $s5
    ctx->r22 = ADD32(ctx->r22, ctx->r21);
    // 0x801CDB88: andi        $t4, $s6, 0xFF
    ctx->r12 = ctx->r22 & 0XFF;
    // 0x801CDB8C: addiu       $s6, $t4, -0x2
    ctx->r22 = ADD32(ctx->r12, -0X2);
    // 0x801CDB90: andi        $t5, $s6, 0xFF
    ctx->r13 = ctx->r22 & 0XFF;
    // 0x801CDB94: bne         $t5, $zero, L_801CDBA8
    if (ctx->r13 != 0) {
        // 0x801CDB98: or          $s6, $t5, $zero
        ctx->r22 = ctx->r13 | 0;
            goto L_801CDBA8;
    }
    // 0x801CDB98: or          $s6, $t5, $zero
    ctx->r22 = ctx->r13 | 0;
    // 0x801CDB9C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x801CDBA0: andi        $t6, $s6, 0xFF
    ctx->r14 = ctx->r22 & 0XFF;
    // 0x801CDBA4: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
L_801CDBA8:
    // 0x801CDBA8: mtc1        $s5, $f10
    ctx->f10.u32l = ctx->r21;
    // 0x801CDBAC: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x801CDBB0: bgez        $s5, L_801CDBC8
    if (SIGNED(ctx->r21) >= 0) {
        // 0x801CDBB4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801CDBC8;
    }
    // 0x801CDBB4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CDBB8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CDBBC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CDBC0: nop

    // 0x801CDBC4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801CDBC8:
    // 0x801CDBC8: mul.s       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x801CDBCC: andi        $s5, $s6, 0xFF
    ctx->r21 = ctx->r22 & 0XFF;
    // 0x801CDBD0: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x801CDBD4: addiu       $s2, $s6, -0x1
    ctx->r18 = ADD32(ctx->r22, -0X1);
    // 0x801CDBD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801CDBDC: bgez        $s6, L_801CDBF4
    if (SIGNED(ctx->r22) >= 0) {
        // 0x801CDBE0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801CDBF4;
    }
    // 0x801CDBE0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CDBE4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CDBE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801CDBEC: nop

    // 0x801CDBF0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801CDBF4:
    // 0x801CDBF4: div         $zero, $s4, $s6
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r22)));
    // 0x801CDBF8: lhu         $t9, 0x10E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X10E);
    // 0x801CDBFC: lhu         $t3, 0x116($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X116);
    // 0x801CDC00: div.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801CDC04: sw          $s2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r18;
    // 0x801CDC08: bne         $v0, $zero, L_801CDC14
    if (ctx->r2 != 0) {
        // 0x801CDC0C: nop
    
            goto L_801CDC14;
    }
    // 0x801CDC0C: nop

    // 0x801CDC10: break       7
    do_break(2149374992);
L_801CDC14:
    // 0x801CDC14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CDC18: bne         $v0, $at, L_801CDC2C
    if (ctx->r2 != ctx->r1) {
        // 0x801CDC1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CDC2C;
    }
    // 0x801CDC1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CDC20: bne         $s4, $at, L_801CDC2C
    if (ctx->r20 != ctx->r1) {
        // 0x801CDC24: nop
    
            goto L_801CDC2C;
    }
    // 0x801CDC24: nop

    // 0x801CDC28: break       6
    do_break(2149375016);
L_801CDC2C:
    // 0x801CDC2C: mflo        $s4
    ctx->r20 = lo;
    // 0x801CDC30: andi        $t7, $s4, 0xFFFF
    ctx->r15 = ctx->r20 & 0XFFFF;
    // 0x801CDC34: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x801CDC38: div         $zero, $s3, $v0
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r2)));
    // 0x801CDC3C: bne         $v0, $zero, L_801CDC48
    if (ctx->r2 != 0) {
        // 0x801CDC40: nop
    
            goto L_801CDC48;
    }
    // 0x801CDC40: nop

    // 0x801CDC44: break       7
    do_break(2149375044);
L_801CDC48:
    // 0x801CDC48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CDC4C: bne         $v0, $at, L_801CDC60
    if (ctx->r2 != ctx->r1) {
        // 0x801CDC50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CDC60;
    }
    // 0x801CDC50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CDC54: bne         $s3, $at, L_801CDC60
    if (ctx->r19 != ctx->r1) {
        // 0x801CDC58: nop
    
            goto L_801CDC60;
    }
    // 0x801CDC58: nop

    // 0x801CDC5C: break       6
    do_break(2149375068);
L_801CDC60:
    // 0x801CDC60: or          $t0, $s4, $zero
    ctx->r8 = ctx->r20 | 0;
    // 0x801CDC64: mflo        $s3
    ctx->r19 = lo;
    // 0x801CDC68: andi        $t8, $s3, 0xFFFF
    ctx->r24 = ctx->r19 & 0XFFFF;
    // 0x801CDC6C: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x801CDC70: or          $t4, $s3, $zero
    ctx->r12 = ctx->r19 | 0;
    // 0x801CDC74: sw          $s4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r20;
    // 0x801CDC78: bgez        $t0, L_801CDC88
    if (SIGNED(ctx->r8) >= 0) {
        // 0x801CDC7C: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_801CDC88;
    }
    // 0x801CDC7C: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x801CDC80: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x801CDC84: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801CDC88:
    // 0x801CDC88: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x801CDC8C: sh          $t2, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r10;
    // 0x801CDC90: sw          $s3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r19;
    // 0x801CDC94: bgez        $t4, L_801CDCA4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801CDC98: sra         $t5, $t4, 1
        ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
            goto L_801CDCA4;
    }
    // 0x801CDC98: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x801CDC9C: addiu       $at, $t4, 0x1
    ctx->r1 = ADD32(ctx->r12, 0X1);
    // 0x801CDCA0: sra         $t5, $at, 1
    ctx->r13 = S32(SIGNED(ctx->r1) >> 1);
L_801CDCA4:
    // 0x801CDCA4: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x801CDCA8: sh          $t6, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r14;
    // 0x801CDCAC: beq         $s2, $zero, L_801CDCCC
    if (ctx->r18 == 0) {
        // 0x801CDCB0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_801CDCCC;
    }
    // 0x801CDCB0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x801CDCB4: jal         0x8000DD58
    // 0x801CDCB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x801CDCB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x801CDCBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801CDCC0: jal         0x8000DD58
    // 0x801CDCC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_5;
    // 0x801CDCC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x801CDCC8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_801CDCCC:
    // 0x801CDCCC: jal         0x8000DD58
    // 0x801CDCD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_6;
    // 0x801CDCD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x801CDCD4: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x801CDCD8: jal         0x8000DD58
    // 0x801CDCDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000DD58_E958(rdram, ctx);
        goto after_7;
    // 0x801CDCDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x801CDCE0: srl         $t7, $s2, 1
    ctx->r15 = S32(U32(ctx->r18) >> 1);
    // 0x801CDCE4: bne         $t7, $zero, L_801CDCFC
    if (ctx->r15 != 0) {
        // 0x801CDCE8: or          $fp, $v0, $zero
        ctx->r30 = ctx->r2 | 0;
            goto L_801CDCFC;
    }
    // 0x801CDCE8: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x801CDCEC: andi        $t8, $s7, 0x1
    ctx->r24 = ctx->r23 & 0X1;
    // 0x801CDCF0: andi        $fp, $v0, 0x1
    ctx->r30 = ctx->r2 & 0X1;
    // 0x801CDCF4: addiu       $s7, $t8, 0x1
    ctx->r23 = ADD32(ctx->r24, 0X1);
    // 0x801CDCF8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_801CDCFC:
    // 0x801CDCFC: addiu       $s7, $s7, -0x2
    ctx->r23 = ADD32(ctx->r23, -0X2);
    // 0x801CDD00: bltz        $s7, L_801CDD0C
    if (SIGNED(ctx->r23) < 0) {
        // 0x801CDD04: addiu       $fp, $fp, -0x2
        ctx->r30 = ADD32(ctx->r30, -0X2);
            goto L_801CDD0C;
    }
    // 0x801CDD04: addiu       $fp, $fp, -0x2
    ctx->r30 = ADD32(ctx->r30, -0X2);
    // 0x801CDD08: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_801CDD0C:
    // 0x801CDD0C: bltz        $fp, L_801CDD18
    if (SIGNED(ctx->r30) < 0) {
        // 0x801CDD10: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_801CDD18;
    }
    // 0x801CDD10: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x801CDD14: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
L_801CDD18:
    // 0x801CDD18: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801CDD1C: lhu         $t0, 0x10E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X10E);
    // 0x801CDD20: lhu         $t9, 0x116($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X116);
    // 0x801CDD24: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x801CDD28: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801CDD2C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801CDD30: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x801CDD34: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x801CDD38: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x801CDD3C: cvt.d.s     $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f26.d = CVT_D_S(ctx->f20.fl);
    // 0x801CDD40: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
    // 0x801CDD44: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x801CDD48: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
L_801CDD4C:
    // 0x801CDD4C: andi        $t1, $s6, 0xFF
    ctx->r9 = ctx->r22 & 0XFF;
    // 0x801CDD50: or          $s6, $t1, $zero
    ctx->r22 = ctx->r9 | 0;
    // 0x801CDD54: jal         0x8000DD58
    // 0x801CDD58: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801CDD58: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_8:
    // 0x801CDD5C: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDD60: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x801CDD64: sra         $t3, $t4, 1
    ctx->r11 = S32(SIGNED(ctx->r12) >> 1);
    // 0x801CDD68: addiu       $t5, $t3, -0x8
    ctx->r13 = ADD32(ctx->r11, -0X8);
    // 0x801CDD6C: multu       $v1, $t5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CDD70: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x801CDD74: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x801CDD78: mflo        $t6
    ctx->r14 = lo;
    // 0x801CDD7C: bgez        $t6, L_801CDD8C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801CDD80: sra         $t7, $t6, 4
        ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
            goto L_801CDD8C;
    }
    // 0x801CDD80: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x801CDD84: addiu       $at, $t6, 0xF
    ctx->r1 = ADD32(ctx->r14, 0XF);
    // 0x801CDD88: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_801CDD8C:
    // 0x801CDD8C: multu       $v1, $s0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CDD90: srl         $t8, $t7, 1
    ctx->r24 = S32(U32(ctx->r15) >> 1);
    // 0x801CDD94: addu        $t0, $t2, $t8
    ctx->r8 = ADD32(ctx->r10, ctx->r24);
    // 0x801CDD98: mflo        $t9
    ctx->r25 = lo;
    // 0x801CDD9C: addu        $s5, $t0, $t9
    ctx->r21 = ADD32(ctx->r8, ctx->r25);
    // 0x801CDDA0: andi        $t1, $s5, 0x3FF
    ctx->r9 = ctx->r21 & 0X3FF;
    // 0x801CDDA4: jal         0x8000DD58
    // 0x801CDDA8: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801CDDA8: or          $s5, $t1, $zero
    ctx->r21 = ctx->r9 | 0;
    after_9:
    // 0x801CDDAC: lw          $t4, 0x98($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X98);
    // 0x801CDDB0: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801CDDB4: sra         $t5, $t3, 1
    ctx->r13 = S32(SIGNED(ctx->r11) >> 1);
    // 0x801CDDB8: addiu       $t6, $t5, -0x8
    ctx->r14 = ADD32(ctx->r13, -0X8);
    // 0x801CDDBC: multu       $t4, $t6
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CDDC0: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x801CDDC4: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x801CDDC8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x801CDDCC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801CDDD0: mflo        $t7
    ctx->r15 = lo;
    // 0x801CDDD4: bgez        $t7, L_801CDDE4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801CDDD8: sra         $t2, $t7, 4
        ctx->r10 = S32(SIGNED(ctx->r15) >> 4);
            goto L_801CDDE4;
    }
    // 0x801CDDD8: sra         $t2, $t7, 4
    ctx->r10 = S32(SIGNED(ctx->r15) >> 4);
    // 0x801CDDDC: addiu       $at, $t7, 0xF
    ctx->r1 = ADD32(ctx->r15, 0XF);
    // 0x801CDDE0: sra         $t2, $at, 4
    ctx->r10 = S32(SIGNED(ctx->r1) >> 4);
L_801CDDE4:
    // 0x801CDDE4: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CDDE8: srl         $t8, $t2, 1
    ctx->r24 = S32(U32(ctx->r10) >> 1);
    // 0x801CDDEC: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x801CDDF0: mflo        $t3
    ctx->r11 = lo;
    // 0x801CDDF4: addu        $s2, $t9, $t3
    ctx->r18 = ADD32(ctx->r25, ctx->r11);
    // 0x801CDDF8: andi        $t5, $s2, 0x3FF
    ctx->r13 = ctx->r18 & 0X3FF;
    // 0x801CDDFC: jal         0x8000DD58
    // 0x801CDE00: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801CDE00: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    after_10:
    // 0x801CDE04: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x801CDE08: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x801CDE0C: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x801CDE10: addiu       $v1, $t4, -0xA
    ctx->r3 = ADD32(ctx->r12, -0XA);
    // 0x801CDE14: beq         $v1, $zero, L_801CDE60
    if (ctx->r3 == 0) {
        // 0x801CDE18: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_801CDE60;
    }
    // 0x801CDE18: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801CDE1C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x801CDE20: xor         $t7, $v1, $t6
    ctx->r15 = ctx->r3 ^ ctx->r14;
    // 0x801CDE24: bltzl       $t7, L_801CDE44
    if (SIGNED(ctx->r15) < 0) {
        // 0x801CDE28: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_801CDE44;
    }
    goto skip_1;
    // 0x801CDE28: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    skip_1:
    // 0x801CDE2C: bnel        $s4, $zero, L_801CDE48
    if (ctx->r20 != 0) {
        // 0x801CDE30: mtc1        $a0, $f18
        ctx->f18.u32l = ctx->r4;
            goto L_801CDE48;
    }
    goto skip_2;
    // 0x801CDE30: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    skip_2:
    // 0x801CDE34: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x801CDE38: b           L_801CDE44
    // 0x801CDE3C: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
        goto L_801CDE44;
    // 0x801CDE3C: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x801CDE40: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_801CDE44:
    // 0x801CDE44: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
L_801CDE48:
    // 0x801CDE48: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x801CDE4C: andi        $t2, $s4, 0xFF
    ctx->r10 = ctx->r20 & 0XFF;
    // 0x801CDE50: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CDE54: sw          $a0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r4;
    // 0x801CDE58: or          $s4, $t2, $zero
    ctx->r20 = ctx->r10 | 0;
    // 0x801CDE5C: add.s       $f20, $f22, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f22.fl + ctx->f16.fl;
L_801CDE60:
    // 0x801CDE60: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x801CDE64: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x801CDE68: div.d       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f24.d);
    // 0x801CDE6C: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x801CDE70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801CDE74: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x801CDE78: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x801CDE7C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x801CDE80: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801CDE84: mul.d       $f4, $f26, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f26.d, ctx->f10.d);
    // 0x801CDE88: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801CDE8C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801CDE90: jal         0x801E1A60
    // 0x801CDE94: nop

    func_801E1A60_6508B0(rdram, ctx);
        goto after_11;
    // 0x801CDE94: nop

    after_11:
    // 0x801CDE98: sll         $t0, $s6, 1
    ctx->r8 = S32(ctx->r22 << 1);
    // 0x801CDE9C: addu        $s0, $s0, $s7
    ctx->r16 = ADD32(ctx->r16, ctx->r23);
    // 0x801CDEA0: bne         $s3, $t0, L_801CDEE4
    if (ctx->r19 != ctx->r8) {
        // 0x801CDEA4: addu        $s1, $s1, $fp
        ctx->r17 = ADD32(ctx->r17, ctx->r30);
            goto L_801CDEE4;
    }
    // 0x801CDEA4: addu        $s1, $s1, $fp
    ctx->r17 = ADD32(ctx->r17, ctx->r30);
    // 0x801CDEA8: andi        $t8, $s7, 0x1
    ctx->r24 = ctx->r23 & 0X1;
    // 0x801CDEAC: bne         $t8, $zero, L_801CDEC8
    if (ctx->r24 != 0) {
        // 0x801CDEB0: andi        $v0, $fp, 0x1
        ctx->r2 = ctx->r30 & 0X1;
            goto L_801CDEC8;
    }
    // 0x801CDEB0: andi        $v0, $fp, 0x1
    ctx->r2 = ctx->r30 & 0X1;
    // 0x801CDEB4: bgez        $s7, L_801CDEC4
    if (SIGNED(ctx->r23) >= 0) {
        // 0x801CDEB8: sra         $t1, $s7, 1
        ctx->r9 = S32(SIGNED(ctx->r23) >> 1);
            goto L_801CDEC4;
    }
    // 0x801CDEB8: sra         $t1, $s7, 1
    ctx->r9 = S32(SIGNED(ctx->r23) >> 1);
    // 0x801CDEBC: addiu       $at, $s7, 0x1
    ctx->r1 = ADD32(ctx->r23, 0X1);
    // 0x801CDEC0: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_801CDEC4:
    // 0x801CDEC4: subu        $s0, $s0, $t1
    ctx->r16 = SUB32(ctx->r16, ctx->r9);
L_801CDEC8:
    // 0x801CDEC8: bnel        $v0, $zero, L_801CDEE8
    if (ctx->r2 != 0) {
        // 0x801CDECC: lw          $v0, 0xC4($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC4);
            goto L_801CDEE8;
    }
    goto skip_3;
    // 0x801CDECC: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
    skip_3:
    // 0x801CDED0: bgez        $fp, L_801CDEE0
    if (SIGNED(ctx->r30) >= 0) {
        // 0x801CDED4: sra         $t9, $fp, 1
        ctx->r25 = S32(SIGNED(ctx->r30) >> 1);
            goto L_801CDEE0;
    }
    // 0x801CDED4: sra         $t9, $fp, 1
    ctx->r25 = S32(SIGNED(ctx->r30) >> 1);
    // 0x801CDED8: addiu       $at, $fp, 0x1
    ctx->r1 = ADD32(ctx->r30, 0X1);
    // 0x801CDEDC: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_801CDEE0:
    // 0x801CDEE0: subu        $s1, $s1, $t9
    ctx->r17 = SUB32(ctx->r17, ctx->r25);
L_801CDEE4:
    // 0x801CDEE4: lw          $v0, 0xC4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC4);
L_801CDEE8:
    // 0x801CDEE8: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x801CDEEC: beql        $at, $zero, L_801CDF0C
    if (ctx->r1 == 0) {
        // 0x801CDEF0: sltu        $at, $v0, $s1
        ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
            goto L_801CDF0C;
    }
    goto skip_4;
    // 0x801CDEF0: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    skip_4:
    // 0x801CDEF4: bgezl       $s0, L_801CDF08
    if (SIGNED(ctx->r16) >= 0) {
        // 0x801CDEF8: subu        $s0, $s0, $s3
        ctx->r16 = SUB32(ctx->r16, ctx->r19);
            goto L_801CDF08;
    }
    goto skip_5;
    // 0x801CDEF8: subu        $s0, $s0, $s3
    ctx->r16 = SUB32(ctx->r16, ctx->r19);
    skip_5:
    // 0x801CDEFC: b           L_801CDF08
    // 0x801CDF00: addu        $s0, $s3, $s0
    ctx->r16 = ADD32(ctx->r19, ctx->r16);
        goto L_801CDF08;
    // 0x801CDF00: addu        $s0, $s3, $s0
    ctx->r16 = ADD32(ctx->r19, ctx->r16);
    // 0x801CDF04: subu        $s0, $s0, $s3
    ctx->r16 = SUB32(ctx->r16, ctx->r19);
L_801CDF08:
    // 0x801CDF08: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
L_801CDF0C:
    // 0x801CDF0C: beq         $at, $zero, L_801CDF28
    if (ctx->r1 == 0) {
        // 0x801CDF10: nop
    
            goto L_801CDF28;
    }
    // 0x801CDF10: nop

    // 0x801CDF14: bgezl       $s1, L_801CDF28
    if (SIGNED(ctx->r17) >= 0) {
        // 0x801CDF18: subu        $s1, $s1, $s3
        ctx->r17 = SUB32(ctx->r17, ctx->r19);
            goto L_801CDF28;
    }
    goto skip_6;
    // 0x801CDF18: subu        $s1, $s1, $s3
    ctx->r17 = SUB32(ctx->r17, ctx->r19);
    skip_6:
    // 0x801CDF1C: b           L_801CDF28
    // 0x801CDF20: addu        $s1, $s3, $s1
    ctx->r17 = ADD32(ctx->r19, ctx->r17);
        goto L_801CDF28;
    // 0x801CDF20: addu        $s1, $s3, $s1
    ctx->r17 = ADD32(ctx->r19, ctx->r17);
    // 0x801CDF24: subu        $s1, $s1, $s3
    ctx->r17 = SUB32(ctx->r17, ctx->r19);
L_801CDF28:
    // 0x801CDF28: bnel        $s6, $zero, L_801CDD4C
    if (ctx->r22 != 0) {
        // 0x801CDF2C: addiu       $s6, $s6, -0x1
        ctx->r22 = ADD32(ctx->r22, -0X1);
            goto L_801CDD4C;
    }
    goto skip_7;
    // 0x801CDF2C: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    skip_7:
L_801CDF30:
    // 0x801CDF30: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801CDF34: lw          $v0, 0xDC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XDC);
    // 0x801CDF38: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801CDF3C: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801CDF40: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801CDF44: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801CDF48: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801CDF4C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x801CDF50: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x801CDF54: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x801CDF58: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x801CDF5C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x801CDF60: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x801CDF64: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x801CDF68: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x801CDF6C: jr          $ra
    // 0x801CDF70: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x801CDF70: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_801E1CD0_650B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1CD0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E1CD4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1CD8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x801E1CDC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x801E1CE0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x801E1CE4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x801E1CE8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801E1CEC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801E1CF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801E1CF4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801E1CF8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E1CFC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x801E1D00: lw          $s6, 0xEC($a0)
    ctx->r22 = MEM_W(ctx->r4, 0XEC);
    // 0x801E1D04: lui         $at, 0x4049
    ctx->r1 = S32(0X4049 << 16);
    // 0x801E1D08: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x801E1D0C: lwc1        $f0, 0x320($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X320);
    // 0x801E1D10: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x801E1D14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E1D18: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801E1D1C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x801E1D20: div.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f22.d);
    // 0x801E1D24: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x801E1D28: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x801E1D2C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801E1D30: nop

    // 0x801E1D34: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x801E1D38: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801E1D3C: nop

    // 0x801E1D40: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801E1D44: beql        $v0, $zero, L_801E1D98
    if (ctx->r2 == 0) {
        // 0x801E1D48: mfc1        $v0, $f8
        ctx->r2 = (int32_t)ctx->f8.u32l;
            goto L_801E1D98;
    }
    goto skip_0;
    // 0x801E1D48: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x801E1D4C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E1D50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E1D54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E1D58: sub.d       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f6.d - ctx->f8.d;
    // 0x801E1D5C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x801E1D60: nop

    // 0x801E1D64: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x801E1D68: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x801E1D6C: nop

    // 0x801E1D70: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x801E1D74: bne         $v0, $zero, L_801E1D8C
    if (ctx->r2 != 0) {
        // 0x801E1D78: nop
    
            goto L_801E1D8C;
    }
    // 0x801E1D78: nop

    // 0x801E1D7C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x801E1D80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801E1D84: b           L_801E1DA4
    // 0x801E1D88: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_801E1DA4;
    // 0x801E1D88: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_801E1D8C:
    // 0x801E1D8C: b           L_801E1DA4
    // 0x801E1D90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_801E1DA4;
    // 0x801E1D90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x801E1D94: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
L_801E1D98:
    // 0x801E1D98: nop

    // 0x801E1D9C: bltz        $v0, L_801E1D8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x801E1DA0: nop
    
            goto L_801E1D8C;
    }
    // 0x801E1DA0: nop

L_801E1DA4:
    // 0x801E1DA4: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x801E1DA8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x801E1DAC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x801E1DB0: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x801E1DB4: bgez        $t7, L_801E1DD0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801E1DB8: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_801E1DD0;
    }
    // 0x801E1DB8: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x801E1DBC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801E1DC0: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801E1DC4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801E1DC8: nop

    // 0x801E1DCC: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_801E1DD0:
    // 0x801E1DD0: lw          $t8, 0x31C($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X31C);
    // 0x801E1DD4: lui         $at, 0x35
    ctx->r1 = S32(0X35 << 16);
    // 0x801E1DD8: ori         $at, $at, 0x67E0
    ctx->r1 = ctx->r1 | 0X67E0;
    // 0x801E1DDC: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x801E1DE0: sw          $t9, 0x31C($s6)
    MEM_W(0X31C, ctx->r22) = ctx->r25;
    // 0x801E1DE4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1DE8: ldc1        $f8, -0xBF0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XBF0);
    // 0x801E1DEC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801E1DF0: mul.d       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x801E1DF4: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801E1DF8: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x801E1DFC: sb          $t0, 0x317($s6)
    MEM_B(0X317, ctx->r22) = ctx->r8;
    // 0x801E1E00: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x801E1E04: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
    // 0x801E1E08: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801E1E0C: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1E10: swc1        $f18, 0x320($s6)
    MEM_W(0X320, ctx->r22) = ctx->f18.u32l;
    // 0x801E1E14: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x801E1E18: sb          $zero, 0x65($t1)
    MEM_B(0X65, ctx->r9) = 0;
    // 0x801E1E1C: sb          $t2, 0x5($t1)
    MEM_B(0X5, ctx->r9) = ctx->r10;
    // 0x801E1E20: lw          $s2, 0x328($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X328);
    // 0x801E1E24: lw          $s4, 0x32C($s6)
    ctx->r20 = MEM_W(ctx->r22, 0X32C);
    // 0x801E1E28: lhu         $s3, 0x34($t1)
    ctx->r19 = MEM_HU(ctx->r9, 0X34);
L_801E1E2C:
    // 0x801E1E2C: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x801E1E30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x801E1E34: add.d       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f16.d + ctx->f22.d;
    // 0x801E1E38: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x801E1E3C: addu        $t4, $t3, $s4
    ctx->r12 = ADD32(ctx->r11, ctx->r20);
    // 0x801E1E40: lb          $v0, 0x0($t4)
    ctx->r2 = MEM_B(ctx->r12, 0X0);
    // 0x801E1E44: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1E48: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x801E1E4C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x801E1E50: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x801E1E54: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801E1E58: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x801E1E5C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801E1E60: jal         0x801CBBE4
    // 0x801E1E64: andi        $a3, $s3, 0xFFFF
    ctx->r7 = ctx->r19 & 0XFFFF;
    func_801CBBE4_63AA34(rdram, ctx);
        goto after_0;
    // 0x801E1E64: andi        $a3, $s3, 0xFFFF
    ctx->r7 = ctx->r19 & 0XFFFF;
    after_0:
    // 0x801E1E68: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801E1E6C: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x801E1E70: bne         $t7, $zero, L_801E1E2C
    if (ctx->r15 != 0) {
        // 0x801E1E74: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_801E1E2C;
    }
    // 0x801E1E74: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x801E1E78: sw          $s2, 0x328($s6)
    MEM_W(0X328, ctx->r22) = ctx->r18;
    // 0x801E1E7C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801E1E80: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801E1E84: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801E1E88: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801E1E8C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x801E1E90: lhu         $v1, -0x520C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520C);
    // 0x801E1E94: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x801E1E98: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x801E1E9C: lw          $a0, -0x2080($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2080);
    // 0x801E1EA0: beql        $a0, $zero, L_801E1ECC
    if (ctx->r4 == 0) {
        // 0x801E1EA4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801E1ECC;
    }
    goto skip_1;
    // 0x801E1EA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_1:
    // 0x801E1EA8: jal         0x80034DD8
    // 0x801E1EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801E1EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E1EB0: sw          $s6, 0xEC($v0)
    MEM_W(0XEC, ctx->r2) = ctx->r22;
    // 0x801E1EB4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x801E1EB8: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x801E1EBC: lui         $v1, 0x4
    ctx->r3 = S32(0X4 << 16);
    // 0x801E1EC0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x801E1EC4: lhu         $v1, -0x520C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X520C);
    // 0x801E1EC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_801E1ECC:
    // 0x801E1ECC: bne         $v1, $at, L_801E1F30
    if (ctx->r3 != ctx->r1) {
        // 0x801E1ED0: addiu       $t6, $zero, 0x5DC0
        ctx->r14 = ADD32(0, 0X5DC0);
            goto L_801E1F30;
    }
    // 0x801E1ED0: addiu       $t6, $zero, 0x5DC0
    ctx->r14 = ADD32(0, 0X5DC0);
    // 0x801E1ED4: addiu       $a1, $s5, 0x5C
    ctx->r5 = ADD32(ctx->r21, 0X5C);
    // 0x801E1ED8: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E1EDC: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x801E1EE0: or          $v1, $a1, $at
    ctx->r3 = ctx->r5 | ctx->r1;
    // 0x801E1EE4: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
L_801E1EE8:
    // 0x801E1EE8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801E1EEC: bnel        $v0, $zero, L_801E1EE8
    if (ctx->r2 != 0) {
        // 0x801E1EF0: sw          $v1, 0x30($v0)
        MEM_W(0X30, ctx->r2) = ctx->r3;
            goto L_801E1EE8;
    }
    goto skip_2;
    // 0x801E1EF0: sw          $v1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r3;
    skip_2:
    // 0x801E1EF4: lui         $t1, 0x801F
    ctx->r9 = S32(0X801F << 16);
    // 0x801E1EF8: addiu       $t1, $t1, -0x1648
    ctx->r9 = ADD32(ctx->r9, -0X1648);
    // 0x801E1EFC: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x801E1F00: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x801E1F04: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x801E1F08: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x801E1F0C: lui         $t4, 0xD64
    ctx->r12 = S32(0XD64 << 16);
    // 0x801E1F10: ori         $t4, $t4, 0xB800
    ctx->r12 = ctx->r12 | 0XB800;
    // 0x801E1F14: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x801E1F18: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x801E1F1C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x801E1F20: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x801E1F24: lui         $t5, 0xB800
    ctx->r13 = S32(0XB800 << 16);
    // 0x801E1F28: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x801E1F2C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_801E1F30:
    // 0x801E1F30: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E1F34: sw          $t6, 0x318($s6)
    MEM_W(0X318, ctx->r22) = ctx->r14;
    // 0x801E1F38: jal         0x800352EC
    // 0x801E1F3C: addiu       $a0, $a0, 0x1F70
    ctx->r4 = ADD32(ctx->r4, 0X1F70);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801E1F3C: addiu       $a0, $a0, 0x1F70
    ctx->r4 = ADD32(ctx->r4, 0X1F70);
    after_2:
    // 0x801E1F40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E1F44: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E1F48: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801E1F4C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801E1F50: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801E1F54: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801E1F58: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x801E1F5C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x801E1F60: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x801E1F64: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x801E1F68: jr          $ra
    // 0x801E1F6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801E1F6C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801D3F94_642DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3F94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D3F98: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D3F9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x801D3FA0: jal         0x801CDA5C
    // 0x801D3FA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_801CDA5C_63C8AC(rdram, ctx);
        goto after_0;
    // 0x801D3FA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D3FA8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D3FAC: lwc1        $f4, -0xF50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XF50);
    // 0x801D3FB0: lui         $t7, 0x800
    ctx->r15 = S32(0X800 << 16);
    // 0x801D3FB4: addiu       $t7, $t7, 0x754
    ctx->r15 = ADD32(ctx->r15, 0X754);
    // 0x801D3FB8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x801D3FBC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D3FC0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801D3FC4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D3FC8: bc1f        L_801D401C
    if (!c1cs) {
        // 0x801D3FCC: addu        $t8, $t7, $at
        ctx->r24 = ADD32(ctx->r15, ctx->r1);
            goto L_801D401C;
    }
    // 0x801D3FCC: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x801D3FD0: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801D3FD4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801D3FD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3FDC: ori         $t0, $zero, 0xD160
    ctx->r8 = 0 | 0XD160;
    // 0x801D3FE0: sw          $t8, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->r24;
    // 0x801D3FE4: sw          $t0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r8;
    // 0x801D3FE8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801D3FEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3FF0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D3FF4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D3FF8: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x801D3FFC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D4000: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D4004: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D4008: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D400C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D4010: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D4014: jal         0x801E8378
    // 0x801D4018: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D4018: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801D401C:
    // 0x801D401C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D4020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D4024: jr          $ra
    // 0x801D4028: nop

    TRACE_RETURN()
    return;
    // 0x801D4028: nop

;}
RECOMP_FUNC void func_801D7778_6465C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7778: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D777C: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D7780: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801D7784: sltu        $t7, $zero, $t6
    ctx->r15 = 0 < ctx->r14 ? 1 : 0;
    // 0x801D7788: slti        $t9, $v0, 0x0
    ctx->r25 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x801D778C: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x801D7790: addiu       $v0, $t0, -0x1
    ctx->r2 = ADD32(ctx->r8, -0X1);
    // 0x801D7794: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D7798: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x801D779C: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801D77A0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D77A4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D77A8: ldc1        $f8, -0xE10($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE10);
    // 0x801D77AC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D77B0: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801D77B4: jr          $ra
    // 0x801D77B8: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
    TRACE_RETURN()
    return;
    // 0x801D77B8: swc1        $f16, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f16.u32l;
;}
RECOMP_FUNC void func_801E1444_650294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E144C: lwc1        $f4, 0x78($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801E1450: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E1454: ldc1        $f0, -0xC18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0XC18);
    // 0x801E1458: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E145C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E1460: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801E1464: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801E1468: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801E146C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E1470: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801E1474: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801E1478: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x801E147C: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801E1480: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801E1484: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801E1488: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E148C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801E1490: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x801E1494: jal         0x8000DD58
    // 0x801E1498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8000DD58_E958(rdram, ctx);
        goto after_0;
    // 0x801E1498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801E149C: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801E14A0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801E14A4: bltz        $v1, L_801E14B0
    if (SIGNED(ctx->r3) < 0) {
        // 0x801E14A8: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_801E14B0;
    }
    // 0x801E14A8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801E14AC: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
L_801E14B0:
    // 0x801E14B0: sll         $t6, $a1, 5
    ctx->r14 = S32(ctx->r5 << 5);
    // 0x801E14B4: sh          $t6, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r14;
    // 0x801E14B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x801E14BC: jal         0x8000DD58
    // 0x801E14C0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x801E14C0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x801E14C4: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x801E14C8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x801E14CC: bltz        $v1, L_801E14D8
    if (SIGNED(ctx->r3) < 0) {
        // 0x801E14D0: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_801E14D8;
    }
    // 0x801E14D0: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801E14D4: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
L_801E14D8:
    // 0x801E14D8: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x801E14DC: sh          $t7, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r15;
    // 0x801E14E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E14E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E14E8: jr          $ra
    // 0x801E14EC: nop

    TRACE_RETURN()
    return;
    // 0x801E14EC: nop

;}
RECOMP_FUNC void func_801DB648_64A498(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB648: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801DB64C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801DB650: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801DB654: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801DB658: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DB65C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DB660: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DB664: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB668: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DB66C: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801DB670: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DB674: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DB678: lui         $at, 0x4045
    ctx->r1 = S32(0X4045 << 16);
    // 0x801DB67C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB680: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DB684: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801DB688: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801DB68C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801DB690: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801DB694: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DB698: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DB69C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DB6A0: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801DB6A4: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DB6A8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DB6AC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DB6B0: nop

    // 0x801DB6B4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801DB6B8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801DB6BC: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801DB6C0: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DB6C4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801DB6C8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801DB6CC: nop

    // 0x801DB6D0: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801DB6D4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DB6D8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801DB6DC: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801DB6E0: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801DB6E4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801DB6E8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DB6EC: jal         0x80033898
    // 0x801DB6F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DB6F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801DB6F4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801DB6F8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x801DB6FC: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x801DB700: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801DB704: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801DB708: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801DB70C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801DB710: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801DB714: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB718: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB71C: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB720: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DB724: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB728: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB72C: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801DB730: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801DB734: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801DB738: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB73C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB740: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB744: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DB748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB74C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801DB750: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DB754: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DB758: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB75C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801DB760: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801DB764: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DB768: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DB76C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DB770: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801DB774: jal         0x801CDA88
    // 0x801DB778: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801DB778: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801DB77C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801DB780: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DB784: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801DB788: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801DB78C: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801DB790: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB794: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB798: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801DB79C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DB7A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DB7A4: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801DB7A8: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801DB7AC: lui         $a2, 0x42FF
    ctx->r6 = S32(0X42FF << 16);
    // 0x801DB7B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801DB7B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801DB7B8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801DB7BC: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801DB7C0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB7C4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB7C8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DB7CC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB7D0: jal         0x801DF9EC
    // 0x801DB7D4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801DB7D4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801DB7D8: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB7DC: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB7E0: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801DB7E4: bnel        $t6, $zero, L_801DB83C
    if (ctx->r14 != 0) {
        // 0x801DB7E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DB83C;
    }
    goto skip_0;
    // 0x801DB7E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801DB7EC: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801DB7F0: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801DB7F4: bne         $t7, $at, L_801DB814
    if (ctx->r15 != ctx->r1) {
        // 0x801DB7F8: nop
    
            goto L_801DB814;
    }
    // 0x801DB7F8: nop

    // 0x801DB7FC: jal         0x80038B98
    // 0x801DB800: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801DB800: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801DB804: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB808: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801DB80C: b           L_801DB828
    // 0x801DB810: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801DB828;
    // 0x801DB810: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801DB814:
    // 0x801DB814: jal         0x80038B98
    // 0x801DB818: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801DB818: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801DB81C: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB820: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801DB824: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801DB828:
    // 0x801DB828: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801DB82C: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DB830: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801DB834: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801DB838: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801DB83C:
    // 0x801DB83C: jal         0x801E8850
    // 0x801DB840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8850_6576A0(rdram, ctx);
        goto after_5;
    // 0x801DB840: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x801DB844: jal         0x801D8BF0
    // 0x801DB848: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_6;
    // 0x801DB848: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801DB84C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801DB850: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801DB854: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801DB858: jr          $ra
    // 0x801DB85C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801DB85C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D91A8_647FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D91A8: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x801D91AC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801D91B0: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x801D91B4: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x801D91B8: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x801D91BC: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x801D91C0: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801D91C4: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801D91C8: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801D91CC: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801D91D0: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801D91D4: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801D91D8: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D91DC: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D91E0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D91E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D91E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D91EC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801D91F0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D91F4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801D91F8: addiu       $t9, $sp, 0xEC
    ctx->r25 = ADD32(ctx->r29, 0XEC);
    // 0x801D91FC: addiu       $t0, $sp, 0xF0
    ctx->r8 = ADD32(ctx->r29, 0XF0);
    // 0x801D9200: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    // 0x801D9204: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D9208: swc1        $f10, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f10.u32l;
    // 0x801D920C: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D9210: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D9214: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D9218: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801D921C: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x801D9220: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D9224: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D9228: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D922C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801D9230: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D9234: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x801D9238: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D923C: lui         $at, 0xC234
    ctx->r1 = S32(0XC234 << 16);
    // 0x801D9240: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x801D9244: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801D9248: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x801D924C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D9250: sh          $t6, 0x98($sp)
    MEM_H(0X98, ctx->r29) = ctx->r14;
    // 0x801D9254: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801D9258: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801D925C: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x801D9260: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801D9264: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801D9268: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801D926C: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x801D9270: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D9274: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D9278: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801D927C: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x801D9280: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x801D9284: jal         0x80033898
    // 0x801D9288: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D9288: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801D928C: lwc1        $f6, 0xE8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D9290: lwc1        $f18, 0x5C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801D9294: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D9298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D929C: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D92A0: lwc1        $f6, 0xF0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D92A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x801D92A8: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x801D92AC: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801D92B0: lwc1        $f8, 0x60($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801D92B4: addiu       $t2, $sp, 0xCC
    ctx->r10 = ADD32(ctx->r29, 0XCC);
    // 0x801D92B8: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D92BC: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801D92C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D92C4: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D92C8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D92CC: swc1        $f16, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f16.u32l;
    // 0x801D92D0: lwc1        $f18, 0x64($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801D92D4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D92D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D92DC: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801D92E0: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801D92E4: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801D92E8: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801D92EC: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x801D92F0: jal         0x80033898
    // 0x801D92F4: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801D92F4: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D92F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D92FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D9300: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D9304: addiu       $t3, $sp, 0x90
    ctx->r11 = ADD32(ctx->r29, 0X90);
    // 0x801D9308: addiu       $t4, $sp, 0x94
    ctx->r12 = ADD32(ctx->r29, 0X94);
    // 0x801D930C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801D9310: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801D9314: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D9318: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D931C: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D9320: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x801D9324: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x801D9328: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x801D932C: jal         0x80033898
    // 0x801D9330: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_2;
    // 0x801D9330: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801D9334: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801D9338: jal         0x800040A8
    // 0x801D933C: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    func_800040A8_4CA8(rdram, ctx);
        goto after_3;
    // 0x801D933C: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    after_3:
    // 0x801D9340: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D9344: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801D9348: addiu       $s0, $v0, 0xC0
    ctx->r16 = ADD32(ctx->r2, 0XC0);
    // 0x801D934C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D9350: andi        $t5, $s0, 0xFFFF
    ctx->r13 = ctx->r16 & 0XFFFF;
    // 0x801D9354: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D9358: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x801D935C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x801D9360: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_801D9364:
    // 0x801D9364: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D9368: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D936C: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D9370: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801D9374: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x801D9378: addiu       $t7, $zero, 0x39
    ctx->r15 = ADD32(0, 0X39);
    // 0x801D937C: addiu       $t8, $zero, 0x39
    ctx->r24 = ADD32(0, 0X39);
    // 0x801D9380: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x801D9384: addiu       $t0, $zero, 0x280
    ctx->r8 = ADD32(0, 0X280);
    // 0x801D9388: addiu       $t1, $zero, 0xC0
    ctx->r9 = ADD32(0, 0XC0);
    // 0x801D938C: addiu       $t2, $zero, 0x300
    ctx->r10 = ADD32(0, 0X300);
    // 0x801D9390: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x801D9394: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x801D9398: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x801D939C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x801D93A0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801D93A4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D93A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801D93AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D93B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801D93B4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D93B8: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801D93BC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801D93C0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x801D93C4: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x801D93C8: jal         0x801CDA88
    // 0x801D93CC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_4;
    // 0x801D93CC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x801D93D0: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D93D4: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D93D8: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D93DC: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D93E0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D93E4: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801D93E8: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D93EC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D93F0: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801D93F4: addiu       $s0, $s0, 0x200
    ctx->r16 = ADD32(ctx->r16, 0X200);
    // 0x801D93F8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D93FC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801D9400: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x801D9404: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x801D9408: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801D940C: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801D9410: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801D9414: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x801D9418: bne         $t4, $zero, L_801D9364
    if (ctx->r12 != 0) {
        // 0x801D941C: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_801D9364;
    }
    // 0x801D941C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x801D9420: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x801D9424: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9428: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D942C: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801D9430: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801D9434: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801D9438: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x801D943C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9440: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x801D9444: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801D9448: addiu       $t5, $sp, 0xEC
    ctx->r13 = ADD32(ctx->r29, 0XEC);
    // 0x801D944C: addiu       $t6, $sp, 0xF0
    ctx->r14 = ADD32(ctx->r29, 0XF0);
    // 0x801D9450: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801D9454: mul.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x801D9458: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x801D945C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x801D9460: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x801D9464: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D9468: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D946C: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D9470: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801D9474: jal         0x80033898
    // 0x801D9478: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801D9478: addiu       $a3, $sp, 0xE8
    ctx->r7 = ADD32(ctx->r29, 0XE8);
    after_5:
    // 0x801D947C: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D9480: lwc1        $f4, 0x5C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801D9484: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D9488: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D948C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D9490: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D9494: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801D9498: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801D949C: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801D94A0: lwc1        $f6, 0x60($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801D94A4: addiu       $t7, $sp, 0xE0
    ctx->r15 = ADD32(ctx->r29, 0XE0);
    // 0x801D94A8: addiu       $t8, $sp, 0xE4
    ctx->r24 = ADD32(ctx->r29, 0XE4);
    // 0x801D94AC: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D94B0: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D94B4: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D94B8: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D94BC: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x801D94C0: lwc1        $f4, 0x64($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801D94C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x801D94C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x801D94CC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D94D0: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x801D94D4: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x801D94D8: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x801D94DC: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x801D94E0: jal         0x80033898
    // 0x801D94E4: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801D94E4: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x801D94E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D94EC: addiu       $t9, $sp, 0xD4
    ctx->r25 = ADD32(ctx->r29, 0XD4);
    // 0x801D94F0: addiu       $t0, $sp, 0xD8
    ctx->r8 = ADD32(ctx->r29, 0XD8);
    // 0x801D94F4: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x801D94F8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801D94FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801D9500: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D9504: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D9508: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D950C: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    // 0x801D9510: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801D9514: jal         0x80033898
    // 0x801D9518: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801D9518: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x801D951C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9520: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801D9524: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D9528: addiu       $t1, $sp, 0xC8
    ctx->r9 = ADD32(ctx->r29, 0XC8);
    // 0x801D952C: addiu       $t2, $sp, 0xCC
    ctx->r10 = ADD32(ctx->r29, 0XCC);
    // 0x801D9530: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801D9534: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801D9538: lhu         $a0, 0x98($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X98);
    // 0x801D953C: lhu         $a1, 0x9A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X9A);
    // 0x801D9540: lhu         $a2, 0x9C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X9C);
    // 0x801D9544: addiu       $a3, $sp, 0xC4
    ctx->r7 = ADD32(ctx->r29, 0XC4);
    // 0x801D9548: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x801D954C: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801D9550: jal         0x80033898
    // 0x801D9554: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_8;
    // 0x801D9554: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x801D9558: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x801D955C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801D9560: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D9564: jal         0x801DFBE0
    // 0x801D9568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_9;
    // 0x801D9568: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x801D956C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D9570: ldc1        $f30, -0xDC0($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XDC0);
    // 0x801D9574: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D9578: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801D957C: ldc1        $f28, -0xDB8($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XDB8);
    // 0x801D9580: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
L_801D9584:
    // 0x801D9584: jal         0x8000DD58
    // 0x801D9588: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801D9588: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_10:
    // 0x801D958C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D9590: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D9594: cvt.s.w     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D9598: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801D959C: mul.d       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f28.d);
    // 0x801D95A0: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x801D95A4: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801D95A8: add.d       $f6, $f16, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = ctx->f16.d + ctx->f30.d;
    // 0x801D95AC: jal         0x8000DD58
    // 0x801D95B0: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801D95B0: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_11:
    // 0x801D95B4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x801D95B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801D95BC: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D95C0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x801D95C4: mul.d       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801D95C8: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x801D95CC: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x801D95D0: add.d       $f18, $f6, $f30
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f30.d); 
    ctx->f18.d = ctx->f6.d + ctx->f30.d;
    // 0x801D95D4: jal         0x8000DD58
    // 0x801D95D8: cvt.s.d     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f24.fl = CVT_S_D(ctx->f18.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_12;
    // 0x801D95D8: cvt.s.d     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f24.fl = CVT_S_D(ctx->f18.d);
    after_12:
    // 0x801D95DC: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801D95E0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801D95E4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D95E8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x801D95EC: mul.d       $f16, $f8, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f28.d);
    // 0x801D95F0: cvt.s.d     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f6.fl = CVT_S_D(ctx->f16.d);
    // 0x801D95F4: cvt.d.s     $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f18.d = CVT_D_S(ctx->f6.fl);
    // 0x801D95F8: add.d       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = ctx->f18.d + ctx->f30.d;
    // 0x801D95FC: jal         0x8000DD58
    // 0x801D9600: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_13;
    // 0x801D9600: cvt.s.d     $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f26.fl = CVT_S_D(ctx->f10.d);
    after_13:
    // 0x801D9604: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801D9608: and         $t4, $t3, $s0
    ctx->r12 = ctx->r11 & ctx->r16;
    // 0x801D960C: addiu       $t5, $t4, -0xA
    ctx->r13 = ADD32(ctx->r12, -0XA);
    // 0x801D9610: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x801D9614: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801D9618: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D961C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801D9620: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801D9624: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x801D9628: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801D962C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D9630: ldc1        $f8, -0xDB0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XDB0);
    // 0x801D9634: add.s       $f20, $f4, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801D9638: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D963C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9640: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801D9644: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x801D9648: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801D964C: div.d       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f18.d);
    // 0x801D9650: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801D9654: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801D9658: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D965C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9660: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9664: mul.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x801D9668: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801D966C: mul.s       $f18, $f6, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801D9670: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x801D9674: mul.s       $f4, $f8, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x801D9678: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D967C: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D9680: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801D9684: mul.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x801D9688: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x801D968C: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801D9690: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D9694: mul.s       $f16, $f4, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x801D9698: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801D969C: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801D96A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801D96A4: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801D96A8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D96AC: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D96B0: mul.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x801D96B4: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801D96B8: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801D96BC: lwc1        $f18, 0xF0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D96C0: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x801D96C4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801D96C8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801D96CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x801D96D0: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x801D96D4: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801D96D8: lwc1        $f18, 0xCC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801D96DC: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801D96E0: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D96E4: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D96E8: jal         0x801DFC60
    // 0x801D96EC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_14;
    // 0x801D96EC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x801D96F0: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801D96F4: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801D96F8: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x801D96FC: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801D9700: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D9704: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801D9708: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x801D970C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801D9710: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801D9714: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801D9718: add.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x801D971C: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x801D9720: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x801D9724: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x801D9728: bne         $t6, $zero, L_801D9584
    if (ctx->r14 != 0) {
        // 0x801D972C: swc1        $f18, 0xF0($sp)
        MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
            goto L_801D9584;
    }
    // 0x801D972C: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x801D9730: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801D9734: lhu         $t7, 0xE2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9738: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x801D973C: bnel        $t8, $zero, L_801D9794
    if (ctx->r24 != 0) {
        // 0x801D9740: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801D9794;
    }
    goto skip_0;
    // 0x801D9740: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x801D9744: lhu         $t9, 0xE6($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE6);
    // 0x801D9748: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801D974C: bne         $t9, $at, L_801D976C
    if (ctx->r25 != ctx->r1) {
        // 0x801D9750: nop
    
            goto L_801D976C;
    }
    // 0x801D9750: nop

    // 0x801D9754: jal         0x80038B98
    // 0x801D9758: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_15;
    // 0x801D9758: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_15:
    // 0x801D975C: lw          $t1, 0xEC($s3)
    ctx->r9 = MEM_W(ctx->r19, 0XEC);
    // 0x801D9760: addiu       $t0, $zero, 0x29B
    ctx->r8 = ADD32(0, 0X29B);
    // 0x801D9764: b           L_801D9780
    // 0x801D9768: sh          $t0, 0xE6($t1)
    MEM_H(0XE6, ctx->r9) = ctx->r8;
        goto L_801D9780;
    // 0x801D9768: sh          $t0, 0xE6($t1)
    MEM_H(0XE6, ctx->r9) = ctx->r8;
L_801D976C:
    // 0x801D976C: jal         0x80038B98
    // 0x801D9770: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_16;
    // 0x801D9770: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_16:
    // 0x801D9774: lw          $t3, 0xEC($s3)
    ctx->r11 = MEM_W(ctx->r19, 0XEC);
    // 0x801D9778: addiu       $t2, $zero, 0x29A
    ctx->r10 = ADD32(0, 0X29A);
    // 0x801D977C: sh          $t2, 0xE6($t3)
    MEM_H(0XE6, ctx->r11) = ctx->r10;
L_801D9780:
    // 0x801D9780: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801D9784: lhu         $t4, 0xE2($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D9788: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x801D978C: sh          $t5, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r13;
    // 0x801D9790: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801D9794:
    // 0x801D9794: jal         0x801E8850
    // 0x801D9798: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_17;
    // 0x801D9798: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x801D979C: jal         0x801D8BF0
    // 0x801D97A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_18;
    // 0x801D97A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_18:
    // 0x801D97A4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801D97A8: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801D97AC: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801D97B0: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801D97B4: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801D97B8: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801D97BC: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801D97C0: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x801D97C4: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x801D97C8: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x801D97CC: lw          $s3, 0x80($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X80);
    // 0x801D97D0: jr          $ra
    // 0x801D97D4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    TRACE_RETURN()
    return;
    // 0x801D97D4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_801D9BE8_648A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9BE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D9BEC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D9BF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D9BF4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D9BF8: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D9BFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D9C00: bgez        $t6, L_801D9C24
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D9C04: nop
    
            goto L_801D9C24;
    }
    // 0x801D9C04: nop

    // 0x801D9C08: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D9C0C: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D9C10: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9C14: jal         0x800352EC
    // 0x801D9C18: addiu       $a0, $a0, -0x6330
    ctx->r4 = ADD32(ctx->r4, -0X6330);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D9C18: addiu       $a0, $a0, -0x6330
    ctx->r4 = ADD32(ctx->r4, -0X6330);
    after_0:
    // 0x801D9C1C: b           L_801D9CC0
    // 0x801D9C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D9CC0;
    // 0x801D9C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9C24:
    // 0x801D9C24: jal         0x801CD504
    // 0x801D9C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801D9C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801D9C2C: beq         $v0, $zero, L_801D9C44
    if (ctx->r2 == 0) {
        // 0x801D9C30: nop
    
            goto L_801D9C44;
    }
    // 0x801D9C30: nop

    // 0x801D9C34: jal         0x801D8BF0
    // 0x801D9C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801D9C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D9C3C: b           L_801D9CC0
    // 0x801D9C40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801D9CC0;
    // 0x801D9C40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9C44:
    // 0x801D9C44: jal         0x801CD634
    // 0x801D9C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801D9C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D9C4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9C50: lw          $v1, 0xEC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XEC);
    // 0x801D9C54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801D9C58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D9C5C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801D9C60: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D9C64: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x801D9C68: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x801D9C6C: jal         0x8001D394
    // 0x801D9C70: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_4;
    // 0x801D9C70: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x801D9C74: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x801D9C78: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801D9C7C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D9C80: lwc1        $f6, 0x36C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X36C);
    // 0x801D9C84: lw          $a2, 0x364($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X364);
    // 0x801D9C88: lw          $a3, 0x368($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X368);
    // 0x801D9C8C: jal         0x8001D14C
    // 0x801D9C90: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8001D14C_1DD4C(rdram, ctx);
        goto after_5;
    // 0x801D9C90: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x801D9C94: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801D9C98: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x801D9C9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D9CA0: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x801D9CA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x801D9CA8: jal         0x8001DB04
    // 0x801D9CAC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    func_8001DB04_1E704(rdram, ctx);
        goto after_6;
    // 0x801D9CAC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_6:
    // 0x801D9CB0: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D9CB4: jal         0x801CD780
    // 0x801D9CB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_7;
    // 0x801D9CB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x801D9CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801D9CC0:
    // 0x801D9CC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D9CC4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D9CC8: jr          $ra
    // 0x801D9CCC: nop

    TRACE_RETURN()
    return;
    // 0x801D9CCC: nop

;}
RECOMP_FUNC void func_801D0B80_63F9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0B80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D0B84: lb          $t6, 0xA2($a0)
    ctx->r14 = MEM_B(ctx->r4, 0XA2);
    // 0x801D0B88: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x801D0B8C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x801D0B90: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801D0B94: sb          $t7, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r15;
    // 0x801D0B98: lb          $t8, 0xA2($a0)
    ctx->r24 = MEM_B(ctx->r4, 0XA2);
    // 0x801D0B9C: bne         $t8, $zero, L_801D0BB0
    if (ctx->r24 != 0) {
        // 0x801D0BA0: nop
    
            goto L_801D0BB0;
    }
    // 0x801D0BA0: nop

    // 0x801D0BA4: sb          $t9, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r25;
    // 0x801D0BA8: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D0BAC: sb          $t0, 0xA3($a0)
    MEM_B(0XA3, ctx->r4) = ctx->r8;
L_801D0BB0:
    // 0x801D0BB0: jr          $ra
    // 0x801D0BB4: nop

    TRACE_RETURN()
    return;
    // 0x801D0BB4: nop

;}
RECOMP_FUNC void func_801CC168_63AFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CC16C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CC170: lwc1        $f6, 0x338($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X338);
    // 0x801CC174: lwc1        $f4, 0x320($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X320);
    // 0x801CC178: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801CC17C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801CC180: swc1        $f12, 0x378($a0)
    MEM_W(0X378, ctx->r4) = ctx->f12.u32l;
    // 0x801CC184: jal         0x801CBEF8
    // 0x801CC188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CBEF8_63AD48(rdram, ctx);
        goto after_0;
    // 0x801CC188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801CC18C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801CC190: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801CC194: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x801CC198: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x801CC19C: nop

    // 0x801CC1A0: bc1fl       L_801CC1B0
    if (!c1cs) {
        // 0x801CC1A4: lwc1        $f8, 0x334($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X334);
            goto L_801CC1B0;
    }
    goto skip_0;
    // 0x801CC1A4: lwc1        $f8, 0x334($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X334);
    skip_0:
    // 0x801CC1A8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x801CC1AC: lwc1        $f8, 0x334($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X334);
L_801CC1B0:
    // 0x801CC1B0: lui         $at, 0x4314
    ctx->r1 = S32(0X4314 << 16);
    // 0x801CC1B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801CC1B8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x801CC1BC: swc1        $f16, 0x370($a0)
    MEM_W(0X370, ctx->r4) = ctx->f16.u32l;
    // 0x801CC1C0: swc1        $f10, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f10.u32l;
    // 0x801CC1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CC1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CC1CC: jr          $ra
    // 0x801CC1D0: nop

    TRACE_RETURN()
    return;
    // 0x801CC1D0: nop

;}
RECOMP_FUNC void func_801D7300_646150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7300: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D7304: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D7308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D730C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D7310: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801D7314: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D7318: bgezl       $t6, L_801D7340
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D731C: lbu         $t7, 0x9C($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X9C);
            goto L_801D7340;
    }
    goto skip_0;
    // 0x801D731C: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
    skip_0:
    // 0x801D7320: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801D7324: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801D7328: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D732C: jal         0x800352EC
    // 0x801D7330: addiu       $a0, $a0, 0x77BC
    ctx->r4 = ADD32(ctx->r4, 0X77BC);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801D7330: addiu       $a0, $a0, 0x77BC
    ctx->r4 = ADD32(ctx->r4, 0X77BC);
    after_0:
    // 0x801D7334: b           L_801D7428
    // 0x801D7338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D7428;
    // 0x801D7338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D733C: lbu         $t7, 0x9C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X9C);
L_801D7340:
    // 0x801D7340: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D7344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D7348: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801D734C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D7350: lw          $t9, -0x7470($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7470);
    // 0x801D7354: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801D7358: jalr        $t9
    // 0x801D735C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x801D735C: nop

    after_1:
    // 0x801D7360: jal         0x801CD504
    // 0x801D7364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD504_63C354(rdram, ctx);
        goto after_2;
    // 0x801D7364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801D7368: beql        $v0, $zero, L_801D7384
    if (ctx->r2 == 0) {
        // 0x801D736C: lw          $v0, 0xA0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XA0);
            goto L_801D7384;
    }
    goto skip_1;
    // 0x801D736C: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
    skip_1:
    // 0x801D7370: jal         0x801D2B90
    // 0x801D7374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_3;
    // 0x801D7374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801D7378: b           L_801D7428
    // 0x801D737C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801D7428;
    // 0x801D737C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801D7380: lw          $v0, 0xA0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA0);
L_801D7384:
    // 0x801D7384: beq         $v0, $zero, L_801D7410
    if (ctx->r2 == 0) {
        // 0x801D7388: nop
    
            goto L_801D7410;
    }
    // 0x801D7388: nop

    // 0x801D738C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D7390: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7394: ldc1        $f10, -0xE50($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XE50);
    // 0x801D7398: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D739C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801D73A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D73A4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D73A8: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x801D73AC: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x801D73B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D73B4: neg.d       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = -ctx->f16.d;
    // 0x801D73B8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801D73BC: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x801D73C0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801D73C4: nop

    // 0x801D73C8: bc1fl       L_801D73E4
    if (!c1cs) {
        // 0x801D73CC: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_801D73E4;
    }
    goto skip_2;
    // 0x801D73CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x801D73D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D73D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801D73D8: b           L_801D740C
    // 0x801D73DC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
        goto L_801D740C;
    // 0x801D73DC: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x801D73E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_801D73E4:
    // 0x801D73E4: nop

    // 0x801D73E8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D73EC: nop

    // 0x801D73F0: bc1fl       L_801D7410
    if (!c1cs) {
        // 0x801D73F4: swc1        $f0, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
            goto L_801D7410;
    }
    goto skip_3;
    // 0x801D73F4: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
    skip_3:
    // 0x801D73F8: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
L_801D73FC:
    // 0x801D73FC: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801D7400: nop

    // 0x801D7404: bc1tl       L_801D73FC
    if (c1cs) {
        // 0x801D7408: sub.s       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_801D73FC;
    }
    goto skip_4;
    // 0x801D7408: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    skip_4:
L_801D740C:
    // 0x801D740C: swc1        $f0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->f0.u32l;
L_801D7410:
    // 0x801D7410: jal         0x801CD634
    // 0x801D7414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801CD634_63C484(rdram, ctx);
        goto after_4;
    // 0x801D7414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D7418: lwc1        $f12, 0x64($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801D741C: jal         0x801CD780
    // 0x801D7420: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CD780_63C5D0(rdram, ctx);
        goto after_5;
    // 0x801D7420: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x801D7424: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D7428:
    // 0x801D7428: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D742C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D7430: jr          $ra
    // 0x801D7434: nop

    TRACE_RETURN()
    return;
    // 0x801D7434: nop

;}
RECOMP_FUNC void func_801DB230_64A080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DB234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DB238: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DB23C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DB240: lb          $t6, 0x74($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X74);
    // 0x801DB244: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801DB248: bgezl       $t6, L_801DB270
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801DB24C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_801DB270;
    }
    goto skip_0;
    // 0x801DB24C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    skip_0:
    // 0x801DB250: sb          $zero, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = 0;
    // 0x801DB254: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801DB258: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB25C: jal         0x800352EC
    // 0x801DB260: addiu       $a0, $a0, -0x4D48
    ctx->r4 = ADD32(ctx->r4, -0X4D48);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801DB260: addiu       $a0, $a0, -0x4D48
    ctx->r4 = ADD32(ctx->r4, -0X4D48);
    after_0:
    // 0x801DB264: b           L_801DB2AC
    // 0x801DB268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB2AC;
    // 0x801DB268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DB26C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_801DB270:
    // 0x801DB270: jal         0x801CD504
    // 0x801DB274: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD504_63C354(rdram, ctx);
        goto after_1;
    // 0x801DB274: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x801DB278: beq         $v0, $zero, L_801DB290
    if (ctx->r2 == 0) {
        // 0x801DB27C: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_801DB290;
    }
    // 0x801DB27C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB280: jal         0x801D8BF0
    // 0x801DB284: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_801D8BF0_647A40(rdram, ctx);
        goto after_2;
    // 0x801DB284: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x801DB288: b           L_801DB2AC
    // 0x801DB28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DB2AC;
    // 0x801DB28C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB290:
    // 0x801DB290: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801DB294: jal         0x801CD634
    // 0x801DB298: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_801CD634_63C484(rdram, ctx);
        goto after_3;
    // 0x801DB298: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_3:
    // 0x801DB29C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801DB2A0: jal         0x801CD780
    // 0x801DB2A4: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    func_801CD780_63C5D0(rdram, ctx);
        goto after_4;
    // 0x801DB2A4: lwc1        $f12, 0x64($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X64);
    after_4:
    // 0x801DB2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DB2AC:
    // 0x801DB2AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DB2B0: jr          $ra
    // 0x801DB2B4: nop

    TRACE_RETURN()
    return;
    // 0x801DB2B4: nop

;}
RECOMP_FUNC void func_801CC1D4_63B024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC1D4: lhu         $v0, 0xDC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XDC);
    // 0x801CC1D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CC1DC: beql        $v0, $zero, L_801CC32C
    if (ctx->r2 == 0) {
        // 0x801CC1E0: lh          $t9, 0x0($a0)
        ctx->r25 = MEM_H(ctx->r4, 0X0);
            goto L_801CC32C;
    }
    goto skip_0;
    // 0x801CC1E0: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    skip_0:
    // 0x801CC1E4: lhu         $v1, 0xE0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XE0);
    // 0x801CC1E8: lhu         $a1, 0xDE($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0XDE);
    // 0x801CC1EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x801CC1F0: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x801CC1F4: div         $zero, $a1, $v1
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r3)));
    // 0x801CC1F8: mflo        $t1
    ctx->r9 = lo;
    // 0x801CC1FC: subu        $a3, $a1, $t6
    ctx->r7 = SUB32(ctx->r5, ctx->r14);
    // 0x801CC200: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801CC204: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801CC208: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x801CC20C: div         $zero, $a3, $t8
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r24)));
    // 0x801CC210: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801CC214: sh          $t6, 0xDC($a0)
    MEM_H(0XDC, ctx->r4) = ctx->r14;
    // 0x801CC218: mflo        $t9
    ctx->r25 = lo;
    // 0x801CC21C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x801CC220: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x801CC224: subu        $t7, $t0, $t6
    ctx->r15 = SUB32(ctx->r8, ctx->r14);
    // 0x801CC228: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801CC22C: bne         $t0, $zero, L_801CC238
    if (ctx->r8 != 0) {
        // 0x801CC230: nop
    
            goto L_801CC238;
    }
    // 0x801CC230: nop

    // 0x801CC234: break       7
    do_break(2149368372);
L_801CC238:
    // 0x801CC238: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC23C: bne         $t0, $at, L_801CC250
    if (ctx->r8 != ctx->r1) {
        // 0x801CC240: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC250;
    }
    // 0x801CC240: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC244: bne         $a2, $at, L_801CC250
    if (ctx->r6 != ctx->r1) {
        // 0x801CC248: nop
    
            goto L_801CC250;
    }
    // 0x801CC248: nop

    // 0x801CC24C: break       6
    do_break(2149368396);
L_801CC250:
    // 0x801CC250: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801CC254: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x801CC258: lwc1        $f4, 0xD8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x801CC25C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CC260: bne         $t1, $zero, L_801CC26C
    if (ctx->r9 != 0) {
        // 0x801CC264: nop
    
            goto L_801CC26C;
    }
    // 0x801CC264: nop

    // 0x801CC268: break       7
    do_break(2149368424);
L_801CC26C:
    // 0x801CC26C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC270: bne         $t1, $at, L_801CC284
    if (ctx->r9 != ctx->r1) {
        // 0x801CC274: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC284;
    }
    // 0x801CC274: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC278: bne         $a3, $at, L_801CC284
    if (ctx->r7 != ctx->r1) {
        // 0x801CC27C: nop
    
            goto L_801CC284;
    }
    // 0x801CC27C: nop

    // 0x801CC280: break       6
    do_break(2149368448);
L_801CC284:
    // 0x801CC284: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x801CC288: mfhi        $t3
    ctx->r11 = hi;
    // 0x801CC28C: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801CC290: andi        $t2, $t3, 0xFFFF
    ctx->r10 = ctx->r11 & 0XFFFF;
    // 0x801CC294: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC298: sra         $t4, $t1, 1
    ctx->r12 = S32(SIGNED(ctx->r9) >> 1);
    // 0x801CC29C: bgez        $v1, L_801CC2B0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801CC2A0: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801CC2B0;
    }
    // 0x801CC2A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801CC2A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801CC2A8: nop

    // 0x801CC2AC: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801CC2B0:
    // 0x801CC2B0: andi        $t8, $t4, 0xFFFF
    ctx->r24 = ctx->r12 & 0XFFFF;
    // 0x801CC2B4: andi        $t9, $t3, 0xFFFF
    ctx->r25 = ctx->r11 & 0XFFFF;
    // 0x801CC2B8: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x801CC2BC: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801CC2C0: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x801CC2C4: beq         $at, $zero, L_801CC2DC
    if (ctx->r1 == 0) {
        // 0x801CC2C8: or          $t4, $t8, $zero
        ctx->r12 = ctx->r24 | 0;
            goto L_801CC2DC;
    }
    // 0x801CC2C8: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x801CC2CC: subu        $t7, $t8, $t9
    ctx->r15 = SUB32(ctx->r24, ctx->r25);
    // 0x801CC2D0: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x801CC2D4: andi        $t8, $t2, 0xFFFF
    ctx->r24 = ctx->r10 & 0XFFFF;
    // 0x801CC2D8: or          $t2, $t8, $zero
    ctx->r10 = ctx->r24 | 0;
L_801CC2DC:
    // 0x801CC2DC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x801CC2E0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x801CC2E4: bgez        $t2, L_801CC2FC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801CC2E8: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_801CC2FC;
    }
    // 0x801CC2E8: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801CC2EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC2F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801CC2F4: nop

    // 0x801CC2F8: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_801CC2FC:
    // 0x801CC2FC: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801CC300: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801CC304: bgez        $t4, L_801CC318
    if (SIGNED(ctx->r12) >= 0) {
        // 0x801CC308: cvt.s.w     $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
            goto L_801CC318;
    }
    // 0x801CC308: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801CC30C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801CC310: nop

    // 0x801CC314: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_801CC318:
    // 0x801CC318: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801CC31C: lwc1        $f8, 0x374($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X374);
    // 0x801CC320: add.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801CC324: swc1        $f4, 0x374($a0)
    MEM_W(0X374, ctx->r4) = ctx->f4.u32l;
    // 0x801CC328: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
L_801CC32C:
    // 0x801CC32C: slt         $t8, $zero, $v0
    ctx->r24 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801CC330: andi        $t6, $t9, 0xFFF7
    ctx->r14 = ctx->r25 & 0XFFF7;
    // 0x801CC334: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x801CC338: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x801CC33C: sll         $t6, $t8, 3
    ctx->r14 = S32(ctx->r24 << 3);
    // 0x801CC340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CC344: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x801CC348: jr          $ra
    // 0x801CC34C: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801CC34C: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_801D3870_6426C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3870: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801D3874: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D3878: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D387C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D3880: addiu       $t6, $t6, 0xF98
    ctx->r14 = ADD32(ctx->r14, 0XF98);
    // 0x801D3884: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801D3888: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D388C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D3890: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D3894: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x801D3898: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D389C: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D38A0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D38A4: sh          $t9, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r25;
    // 0x801D38A8: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D38AC: swc1        $f0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f0.u32l;
    // 0x801D38B0: jal         0x801D3BE0
    // 0x801D38B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_801D3BE0_642A30(rdram, ctx);
        goto after_0;
    // 0x801D38B4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D38B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801D38BC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801D38C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D38C4: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801D38C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D38CC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801D38D0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x801D38D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D38D8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x801D38DC: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    // 0x801D38E0: swc1        $f8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f8.u32l;
    // 0x801D38E4: lui         $a3, 0xC248
    ctx->r7 = S32(0XC248 << 16);
    // 0x801D38E8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D38EC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D38F0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D38F4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D38F8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D38FC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801D3900: jal         0x801E8378
    // 0x801D3904: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D3904: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x801D3908: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D390C: jal         0x800352EC
    // 0x801D3910: addiu       $a0, $a0, 0x3924
    ctx->r4 = ADD32(ctx->r4, 0X3924);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801D3910: addiu       $a0, $a0, 0x3924
    ctx->r4 = ADD32(ctx->r4, 0X3924);
    after_2:
    // 0x801D3914: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D3918: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801D391C: jr          $ra
    // 0x801D3920: nop

    TRACE_RETURN()
    return;
    // 0x801D3920: nop

;}
RECOMP_FUNC void func_801CBEF8_63AD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CBEF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CBEFC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x801CBF00: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801CBF04: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CBF08: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801CBF0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CBF10: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x801CBF14: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801CBF18: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CBF1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CBF20: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801CBF24: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CBF28: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801CBF2C: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801CBF30: jal         0x801CBC94
    // 0x801CBF34: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    func_801CBC94_63AAE4(rdram, ctx);
        goto after_0;
    // 0x801CBF34: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_0:
    // 0x801CBF38: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CBF3C: ldc1        $f6, -0x1248($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X1248);
    // 0x801CBF40: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801CBF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CBF48: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801CBF4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CBF50: jr          $ra
    // 0x801CBF54: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    TRACE_RETURN()
    return;
    // 0x801CBF54: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void func_801D3C04_642A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3C04: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D3C08: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D3C0C: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D3C10: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D3C14: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D3C18: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D3C1C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D3C20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3C24: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D3C28: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D3C2C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D3C30: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D3C34: lui         $at, 0xC024
    ctx->r1 = S32(0XC024 << 16);
    // 0x801D3C38: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D3C3C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D3C40: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D3C44: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D3C48: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D3C4C: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D3C50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801D3C54: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801D3C58: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D3C5C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D3C60: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D3C64: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D3C68: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D3C6C: nop

    // 0x801D3C70: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801D3C74: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D3C78: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x801D3C7C: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D3C80: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D3C84: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D3C88: nop

    // 0x801D3C8C: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D3C90: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D3C94: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D3C98: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D3C9C: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D3CA0: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D3CA4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D3CA8: jal         0x80033898
    // 0x801D3CAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D3CAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D3CB0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801D3CB4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x801D3CB8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x801D3CBC: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D3CC0: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D3CC4: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D3CC8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D3CCC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D3CD0: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D3CD4: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3CD8: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D3CDC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D3CE0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D3CE4: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D3CE8: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D3CEC: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D3CF0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D3CF4: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D3CF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D3CFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3D00: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D3D04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D3D08: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D3D0C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D3D10: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D3D14: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D3D18: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D3D1C: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D3D20: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D3D24: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D3D28: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D3D2C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D3D30: jal         0x801CDA88
    // 0x801D3D34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D3D34: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D3D38: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D3D3C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D3D40: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D3D44: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D3D48: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D3D4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D3D50: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D3D54: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D3D58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D3D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D3D60: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D3D64: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D3D68: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x801D3D6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D3D70: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D3D74: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D3D78: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D3D7C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D3D80: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D3D84: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D3D88: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D3D8C: jal         0x801DF9EC
    // 0x801D3D90: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D3D90: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D3D94: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3D98: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D3D9C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D3DA0: bnel        $t6, $zero, L_801D3DF8
    if (ctx->r14 != 0) {
        // 0x801D3DA4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D3DF8;
    }
    goto skip_0;
    // 0x801D3DA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D3DA8: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D3DAC: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D3DB0: bne         $t7, $at, L_801D3DD0
    if (ctx->r15 != ctx->r1) {
        // 0x801D3DB4: nop
    
            goto L_801D3DD0;
    }
    // 0x801D3DB4: nop

    // 0x801D3DB8: jal         0x80038B98
    // 0x801D3DBC: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D3DBC: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D3DC0: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3DC4: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D3DC8: b           L_801D3DE4
    // 0x801D3DCC: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D3DE4;
    // 0x801D3DCC: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D3DD0:
    // 0x801D3DD0: jal         0x80038B98
    // 0x801D3DD4: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D3DD4: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D3DD8: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3DDC: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D3DE0: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D3DE4:
    // 0x801D3DE4: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D3DE8: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D3DEC: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D3DF0: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D3DF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D3DF8:
    // 0x801D3DF8: jal         0x801E8824
    // 0x801D3DFC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D3DFC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D3E00: jal         0x801D2B90
    // 0x801D3E04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D3E04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D3E08: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D3E0C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D3E10: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D3E14: jr          $ra
    // 0x801D3E18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D3E18: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D15B0_640400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D15B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D15B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D15B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D15BC: jal         0x801CCE64
    // 0x801D15C0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    func_801CCE64_63BCB4(rdram, ctx);
        goto after_0;
    // 0x801D15C0: addiu       $a3, $zero, 0x45
    ctx->r7 = ADD32(0, 0X45);
    after_0:
    // 0x801D15C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D15C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D15CC: jr          $ra
    // 0x801D15D0: nop

    TRACE_RETURN()
    return;
    // 0x801D15D0: nop

;}
RECOMP_FUNC void func_801CE764_63D5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE764: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x801CE768: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x801CE76C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x801CE770: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x801CE774: beql        $t7, $zero, L_801CE78C
    if (ctx->r15 == 0) {
        // 0x801CE778: lb          $v0, 0x9F($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X9F);
            goto L_801CE78C;
    }
    goto skip_0;
    // 0x801CE778: lb          $v0, 0x9F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X9F);
    skip_0:
    // 0x801CE77C: sb          $t8, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r24;
    // 0x801CE780: jr          $ra
    // 0x801CE784: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801CE784: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE788: lb          $v0, 0x9F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X9F);
L_801CE78C:
    // 0x801CE78C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x801CE790: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x801CE794: beq         $t9, $zero, L_801CE7AC
    if (ctx->r25 == 0) {
        // 0x801CE798: andi        $t1, $v0, 0x20
        ctx->r9 = ctx->r2 & 0X20;
            goto L_801CE7AC;
    }
    // 0x801CE798: andi        $t1, $v0, 0x20
    ctx->r9 = ctx->r2 & 0X20;
    // 0x801CE79C: sb          $t0, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r8;
    // 0x801CE7A0: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE7A4: jr          $ra
    // 0x801CE7A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    TRACE_RETURN()
    return;
    // 0x801CE7A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_801CE7AC:
    // 0x801CE7AC: beq         $t1, $zero, L_801CE7C8
    if (ctx->r9 == 0) {
        // 0x801CE7B0: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_801CE7C8;
    }
    // 0x801CE7B0: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x801CE7B4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801CE7B8: sb          $t2, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r10;
    // 0x801CE7BC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE7C0: jr          $ra
    // 0x801CE7C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    TRACE_RETURN()
    return;
    // 0x801CE7C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801CE7C8:
    // 0x801CE7C8: beq         $t3, $zero, L_801CE7EC
    if (ctx->r11 == 0) {
        // 0x801CE7CC: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_801CE7EC;
    }
    // 0x801CE7CC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801CE7D0: lbu         $t4, 0x9C($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X9C);
    // 0x801CE7D4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x801CE7D8: sb          $t5, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r13;
    // 0x801CE7DC: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE7E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x801CE7E4: jr          $ra
    // 0x801CE7E8: sb          $t4, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x801CE7E8: sb          $t4, 0x9E($a0)
    MEM_B(0X9E, ctx->r4) = ctx->r12;
L_801CE7EC:
    // 0x801CE7EC: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x801CE7F0: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801CE7F4: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801CE7F8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x801CE7FC: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x801CE800: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801CE804: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801CE808: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801CE80C: lhu         $t9, -0x4F84($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4F84);
    // 0x801CE810: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801CE814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801CE818: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x801CE81C: beq         $t0, $zero, L_801CE834
    if (ctx->r8 == 0) {
        // 0x801CE820: nop
    
            goto L_801CE834;
    }
    // 0x801CE820: nop

    // 0x801CE824: sb          $t1, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r9;
    // 0x801CE828: sb          $zero, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = 0;
    // 0x801CE82C: jr          $ra
    // 0x801CE830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801CE830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801CE834:
    // 0x801CE834: jr          $ra
    // 0x801CE838: nop

    TRACE_RETURN()
    return;
    // 0x801CE838: nop

;}
RECOMP_FUNC void func_801CC95C_63B7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC95C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x801CC960: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x801CC964: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x801CC968: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801CC96C: subu        $t3, $t3, $t6
    ctx->r11 = SUB32(ctx->r11, ctx->r14);
    // 0x801CC970: multu       $t3, $t8
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x801CC974: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x801CC978: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801CC97C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801CC980: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x801CC984: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801CC988: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x801CC98C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801CC990: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801CC994: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CC998: mflo        $t4
    ctx->r12 = lo;
    // 0x801CC99C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801CC9A0: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x801CC9A4: div         $zero, $t4, $t0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r8)));
    // 0x801CC9A8: mflo        $t5
    ctx->r13 = lo;
    // 0x801CC9AC: subu        $v0, $t2, $t5
    ctx->r2 = SUB32(ctx->r10, ctx->r13);
    // 0x801CC9B0: srl         $t6, $v0, 2
    ctx->r14 = S32(U32(ctx->r2) >> 2);
    // 0x801CC9B4: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801CC9B8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x801CC9BC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x801CC9C0: bne         $a2, $zero, L_801CC9CC
    if (ctx->r6 != 0) {
        // 0x801CC9C4: nop
    
            goto L_801CC9CC;
    }
    // 0x801CC9C4: nop

    // 0x801CC9C8: break       7
    do_break(2149370312);
L_801CC9CC:
    // 0x801CC9CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801CC9D0: bne         $a2, $at, L_801CC9E4
    if (ctx->r6 != ctx->r1) {
        // 0x801CC9D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_801CC9E4;
    }
    // 0x801CC9D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801CC9D8: bne         $t4, $at, L_801CC9E4
    if (ctx->r12 != ctx->r1) {
        // 0x801CC9DC: nop
    
            goto L_801CC9E4;
    }
    // 0x801CC9DC: nop

    // 0x801CC9E0: break       6
    do_break(2149370336);
L_801CC9E4:
    // 0x801CC9E4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x801CC9E8: jr          $ra
    // 0x801CC9EC: nop

    TRACE_RETURN()
    return;
    // 0x801CC9EC: nop

;}
RECOMP_FUNC void func_801DE5D0_64D420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE5D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DE5D4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DE5D8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DE5DC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801DE5E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE5E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801DE5E8: jal         0x80035EEC
    // 0x801DE5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_0;
    // 0x801DE5EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x801DE5F0: bne         $v0, $zero, L_801DE608
    if (ctx->r2 != 0) {
        // 0x801DE5F4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_801DE608;
    }
    // 0x801DE5F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801DE5F8: jal         0x801DBEB0
    // 0x801DE5FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_1;
    // 0x801DE5FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801DE600: b           L_801DE70C
    // 0x801DE604: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801DE70C;
    // 0x801DE604: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DE608:
    // 0x801DE608: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801DE60C: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DE610: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801DE614: addiu       $t6, $t6, 0xC00
    ctx->r14 = ADD32(ctx->r14, 0XC00);
    // 0x801DE618: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DE61C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x801DE620: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DE624: lui         $t9, 0x800
    ctx->r25 = S32(0X800 << 16);
    // 0x801DE628: addiu       $t9, $t9, 0xDC0
    ctx->r25 = ADD32(ctx->r25, 0XDC0);
    // 0x801DE62C: sw          $t7, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r15;
    // 0x801DE630: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x801DE634: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x801DE638: sw          $t0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r8;
    // 0x801DE63C: lui         $t2, 0x801F
    ctx->r10 = S32(0X801F << 16);
    // 0x801DE640: addiu       $t2, $t2, -0x1828
    ctx->r10 = ADD32(ctx->r10, -0X1828);
    // 0x801DE644: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x801DE648: lui         $t3, 0xFA00
    ctx->r11 = S32(0XFA00 << 16);
    // 0x801DE64C: addiu       $t4, $zero, -0x100
    ctx->r12 = ADD32(0, -0X100);
    // 0x801DE650: lui         $t6, 0xFFFF
    ctx->r14 = S32(0XFFFF << 16);
    // 0x801DE654: lui         $t5, 0xFB00
    ctx->r13 = S32(0XFB00 << 16);
    // 0x801DE658: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x801DE65C: addiu       $t8, $s0, 0xA8
    ctx->r24 = ADD32(ctx->r16, 0XA8);
    // 0x801DE660: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801DE664: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
    // 0x801DE668: sw          $t2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r10;
    // 0x801DE66C: sw          $t4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r12;
    // 0x801DE670: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x801DE674: sw          $t5, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r13;
    // 0x801DE678: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    // 0x801DE67C: sw          $t7, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r15;
    // 0x801DE680: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x801DE684: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x801DE688: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x801DE68C: sb          $zero, 0xA0($s0)
    MEM_B(0XA0, ctx->r16) = 0;
    // 0x801DE690: sb          $zero, 0xA2($s0)
    MEM_B(0XA2, ctx->r16) = 0;
    // 0x801DE694: addiu       $t0, $zero, 0x4CB
    ctx->r8 = ADD32(0, 0X4CB);
    // 0x801DE698: jal         0x80014218
    // 0x801DE69C: sh          $t0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r8;
    func_80014218_14E18(rdram, ctx);
        goto after_2;
    // 0x801DE69C: sh          $t0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r8;
    after_2:
    // 0x801DE6A0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801DE6A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x801DE6A8: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
L_801DE6AC:
    // 0x801DE6AC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x801DE6B0: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x801DE6B4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x801DE6B8: bnel        $a0, $zero, L_801DE6AC
    if (ctx->r4 != 0) {
        // 0x801DE6BC: sh          $zero, 0x14($a0)
        MEM_H(0X14, ctx->r4) = 0;
            goto L_801DE6AC;
    }
    goto skip_0;
    // 0x801DE6BC: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    skip_0:
    // 0x801DE6C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE6C4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801DE6C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DE6CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE6D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x801DE6D4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x801DE6D8: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x801DE6DC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6EC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6F0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6F4: jal         0x801E8378
    // 0x801DE6F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_3;
    // 0x801DE6F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x801DE6FC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE700: jal         0x800352EC
    // 0x801DE704: addiu       $a0, $a0, -0x18E4
    ctx->r4 = ADD32(ctx->r4, -0X18E4);
    func_800352EC_35EEC(rdram, ctx);
        goto after_4;
    // 0x801DE704: addiu       $a0, $a0, -0x18E4
    ctx->r4 = ADD32(ctx->r4, -0X18E4);
    after_4:
    // 0x801DE708: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801DE70C:
    // 0x801DE70C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DE710: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DE714: jr          $ra
    // 0x801DE718: nop

    TRACE_RETURN()
    return;
    // 0x801DE718: nop

;}
RECOMP_FUNC void func_801CC408_63B258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC408: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801CC40C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801CC410: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801CC414: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801CC418: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801CC41C: jal         0x801CC5CC
    // 0x801CC420: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    func_801CC5CC_63B41C(rdram, ctx);
        goto after_0;
    // 0x801CC420: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    after_0:
    // 0x801CC424: lhu         $v1, 0x35A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X35A);
    // 0x801CC428: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x801CC42C: subu        $t6, $v0, $v1
    ctx->r14 = SUB32(ctx->r2, ctx->r3);
    // 0x801CC430: addiu       $t9, $t6, 0x8
    ctx->r25 = ADD32(ctx->r14, 0X8);
    // 0x801CC434: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x801CC438: slti        $at, $t0, 0x11
    ctx->r1 = SIGNED(ctx->r8) < 0X11 ? 1 : 0;
    // 0x801CC43C: bnel        $at, $zero, L_801CC470
    if (ctx->r1 != 0) {
        // 0x801CC440: lwc1        $f4, 0x340($s1)
        ctx->f4.u32l = MEM_W(ctx->r17, 0X340);
            goto L_801CC470;
    }
    goto skip_0;
    // 0x801CC440: lwc1        $f4, 0x340($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X340);
    skip_0:
    // 0x801CC444: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    // 0x801CC448: addiu       $t2, $s0, 0x800
    ctx->r10 = ADD32(ctx->r16, 0X800);
    // 0x801CC44C: andi        $t3, $t2, 0xFFF
    ctx->r11 = ctx->r10 & 0XFFF;
    // 0x801CC450: addiu       $t4, $t3, -0x800
    ctx->r12 = ADD32(ctx->r11, -0X800);
    // 0x801CC454: slti        $t5, $t4, 0x0
    ctx->r13 = SIGNED(ctx->r12) < 0X0 ? 1 : 0;
    // 0x801CC458: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x801CC45C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x801CC460: addu        $s0, $v1, $t7
    ctx->r16 = ADD32(ctx->r3, ctx->r15);
    // 0x801CC464: addiu       $t9, $s0, -0x8
    ctx->r25 = ADD32(ctx->r16, -0X8);
    // 0x801CC468: andi        $s0, $t9, 0xFFF
    ctx->r16 = ctx->r25 & 0XFFF;
    // 0x801CC46C: lwc1        $f4, 0x340($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X340);
L_801CC470:
    // 0x801CC470: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x801CC474: sh          $s0, 0x35A($s1)
    MEM_H(0X35A, ctx->r17) = ctx->r16;
    // 0x801CC478: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x801CC47C: bgez        $s0, L_801CC498
    if (SIGNED(ctx->r16) >= 0) {
        // 0x801CC480: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_801CC498;
    }
    // 0x801CC480: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x801CC484: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC488: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x801CC48C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801CC490: nop

    // 0x801CC494: add.d       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f8.d + ctx->f10.d;
L_801CC498:
    // 0x801CC498: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC49C: ldc1        $f16, -0x1228($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1228);
    // 0x801CC4A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC4A4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC4A8: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x801CC4AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC4B0: nop

    // 0x801CC4B4: div.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x801CC4B8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x801CC4BC: jal         0x800417F0
    // 0x801CC4C0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x801CC4C0: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x801CC4C4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801CC4C8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801CC4CC: mul.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CC4D0: jal         0x800419B0
    // 0x801CC4D4: nop

    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x801CC4D4: nop

    after_2:
    // 0x801CC4D8: lwc1        $f8, 0x35C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X35C);
    // 0x801CC4DC: lwc1        $f18, 0x334($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X334);
    // 0x801CC4E0: lwc1        $f6, 0x360($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X360);
    // 0x801CC4E4: add.s       $f16, $f8, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x801CC4E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801CC4EC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801CC4F0: swc1        $f4, 0x374($s1)
    MEM_W(0X374, ctx->r17) = ctx->f4.u32l;
    // 0x801CC4F4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801CC4F8: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x801CC4FC: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801CC500: jal         0x801CC69C
    // 0x801CC504: swc1        $f16, 0x378($s1)
    MEM_W(0X378, ctx->r17) = ctx->f16.u32l;
    func_801CC69C_63B4EC(rdram, ctx);
        goto after_3;
    // 0x801CC504: swc1        $f16, 0x378($s1)
    MEM_W(0X378, ctx->r17) = ctx->f16.u32l;
    after_3:
    // 0x801CC508: beql        $s0, $zero, L_801CC5B8
    if (ctx->r16 == 0) {
        // 0x801CC50C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801CC5B8;
    }
    goto skip_1;
    // 0x801CC50C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801CC510: lwc1        $f14, 0x34C($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X34C);
    // 0x801CC514: lwc1        $f20, 0x348($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X348);
    // 0x801CC518: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x801CC51C: jal         0x80003A94
    // 0x801CC520: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_4;
    // 0x801CC520: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x801CC524: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x801CC528: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801CC52C: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x801CC530: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x801CC534: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801CC538: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x801CC53C: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x801CC540: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x801CC544: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x801CC548: cvt.d.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.d = CVT_D_W(ctx->f10.u32l);
    // 0x801CC54C: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801CC550: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x801CC554: bgez        $t3, L_801CC56C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801CC558: swc1        $f0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
            goto L_801CC56C;
    }
    // 0x801CC558: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x801CC55C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801CC560: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801CC564: nop

    // 0x801CC568: add.d       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f6.d + ctx->f8.d;
L_801CC56C:
    // 0x801CC56C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CC570: ldc1        $f16, -0x1220($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X1220);
    // 0x801CC574: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801CC578: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801CC57C: mul.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x801CC580: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801CC584: nop

    // 0x801CC588: div.d       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x801CC58C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x801CC590: jal         0x800419B0
    // 0x801CC594: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x801CC594: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x801CC598: lwc1        $f20, 0x40($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X40);
    // 0x801CC59C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801CC5A0: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x801CC5A4: jal         0x800417F0
    // 0x801CC5A8: swc1        $f8, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f8.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x801CC5A8: swc1        $f8, 0x34C($s1)
    MEM_W(0X34C, ctx->r17) = ctx->f8.u32l;
    after_6:
    // 0x801CC5AC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x801CC5B0: swc1        $f6, 0x348($s1)
    MEM_W(0X348, ctx->r17) = ctx->f6.u32l;
    // 0x801CC5B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801CC5B8:
    // 0x801CC5B8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x801CC5BC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801CC5C0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801CC5C4: jr          $ra
    // 0x801CC5C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x801CC5C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801E4764_6535B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4764: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x801E4768: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x801E476C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x801E4770: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x801E4774: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x801E4778: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x801E477C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x801E4780: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x801E4784: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x801E4788: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x801E478C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x801E4790: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x801E4794: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x801E4798: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x801E479C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x801E47A0: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x801E47A4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801E47A8: lwc1        $f20, 0x5C($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X5C);
    // 0x801E47AC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E47B0: ldc1        $f0, -0xB70($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0XB70);
    // 0x801E47B4: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x801E47B8: lwc1        $f4, 0x60($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X60);
    // 0x801E47BC: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x801E47C0: lw          $s2, 0xE4($a1)
    ctx->r18 = MEM_W(ctx->r5, 0XE4);
    // 0x801E47C4: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x801E47C8: lwc1        $f6, 0x6C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X6C);
    // 0x801E47CC: lwc1        $f30, 0x64($a1)
    ctx->f30.u32l = MEM_W(ctx->r5, 0X64);
    // 0x801E47D0: lwc1        $f24, 0x68($a1)
    ctx->f24.u32l = MEM_W(ctx->r5, 0X68);
    // 0x801E47D4: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x801E47D8: lw          $s5, 0x18($s2)
    ctx->r21 = MEM_W(ctx->r18, 0X18);
    // 0x801E47DC: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    // 0x801E47E0: lwc1        $f26, 0x70($a1)
    ctx->f26.u32l = MEM_W(ctx->r5, 0X70);
    // 0x801E47E4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x801E47E8: cvt.d.s     $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f10.d = CVT_D_S(ctx->f30.fl);
    // 0x801E47EC: swc1        $f22, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f22.u32l;
    // 0x801E47F0: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E47F4: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x801E47F8: addiu       $fp, $a0, 0x290
    ctx->r30 = ADD32(ctx->r4, 0X290);
    // 0x801E47FC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801E4800: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801E4804: nop

    // 0x801E4808: mul.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x801E480C: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x801E4810: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x801E4814: swc1        $f2, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f2.u32l;
    // 0x801E4818: swc1        $f18, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->f18.u32l;
    // 0x801E481C: lbu         $s3, 0x314($a0)
    ctx->r19 = MEM_BU(ctx->r4, 0X314);
    // 0x801E4820: lbu         $s7, 0x75($s2)
    ctx->r23 = MEM_BU(ctx->r18, 0X75);
    // 0x801E4824: beq         $s3, $zero, L_801E4AA0
    if (ctx->r19 == 0) {
        // 0x801E4828: nop
    
            goto L_801E4AA0;
    }
    // 0x801E4828: nop

    // 0x801E482C: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x801E4830: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x801E4834: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_801E4838:
    // 0x801E4838: andi        $t6, $s3, 0xFF
    ctx->r14 = ctx->r19 & 0XFF;
    // 0x801E483C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801E4840: addu        $t8, $fp, $t7
    ctx->r24 = ADD32(ctx->r30, ctx->r15);
    // 0x801E4844: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x801E4848: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x801E484C: sll         $t0, $s7, 2
    ctx->r8 = S32(ctx->r23 << 2);
    // 0x801E4850: lb          $s1, 0x74($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X74);
    // 0x801E4854: andi        $t9, $s1, 0x10
    ctx->r25 = ctx->r17 & 0X10;
    // 0x801E4858: beq         $t9, $zero, L_801E4A98
    if (ctx->r25 == 0) {
        // 0x801E485C: nop
    
            goto L_801E4A98;
    }
    // 0x801E485C: nop

    // 0x801E4860: lbu         $v0, 0x75($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X75);
    // 0x801E4864: subu        $t1, $t0, $s7
    ctx->r9 = SUB32(ctx->r8, ctx->r23);
    // 0x801E4868: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801E486C: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x801E4870: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x801E4874: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x801E4878: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x801E487C: lw          $t9, -0x1D70($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1D70);
    // 0x801E4880: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x801E4884: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E4888: jalr        $t9
    // 0x801E488C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801E488C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x801E4890: beq         $v0, $zero, L_801E4A98
    if (ctx->r2 == 0) {
        // 0x801E4894: lwc1        $f18, 0x70($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
            goto L_801E4A98;
    }
    // 0x801E4894: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x801E4898: lwc1        $f2, 0x80($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X80);
    // 0x801E489C: c.eq.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl == ctx->f28.fl;
    // 0x801E48A0: nop

    // 0x801E48A4: bc1fl       L_801E48B4
    if (!c1cs) {
        // 0x801E48A8: lwc1        $f6, 0x80($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
            goto L_801E48B4;
    }
    goto skip_0;
    // 0x801E48A8: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
    skip_0:
    // 0x801E48AC: lwc1        $f2, 0x78($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E48B0: lwc1        $f6, 0x80($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X80);
L_801E48B4:
    // 0x801E48B4: lh          $t5, 0x0($s6)
    ctx->r13 = MEM_H(ctx->r22, 0X0);
    // 0x801E48B8: lwc1        $f8, 0x64($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X64);
    // 0x801E48BC: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x801E48C0: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x801E48C4: bne         $t6, $zero, L_801E48E0
    if (ctx->r14 != 0) {
        // 0x801E48C8: sub.s       $f2, $f8, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f2.fl;
            goto L_801E48E0;
    }
    // 0x801E48C8: sub.s       $f2, $f8, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x801E48CC: lb          $v1, 0x9F($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X9F);
    // 0x801E48D0: andi        $t1, $s1, 0x8
    ctx->r9 = ctx->r17 & 0X8;
    // 0x801E48D4: andi        $t7, $v1, 0x20
    ctx->r15 = ctx->r3 & 0X20;
    // 0x801E48D8: beq         $t7, $zero, L_801E48F0
    if (ctx->r15 == 0) {
        // 0x801E48DC: nop
    
            goto L_801E48F0;
    }
    // 0x801E48DC: nop

L_801E48E0:
    // 0x801E48E0: lb          $t8, 0x74($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X74);
    // 0x801E48E4: ori         $t0, $t8, 0x80
    ctx->r8 = ctx->r24 | 0X80;
    // 0x801E48E8: b           L_801E4A98
    // 0x801E48EC: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
        goto L_801E4A98;
    // 0x801E48EC: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
L_801E48F0:
    // 0x801E48F0: beq         $t1, $zero, L_801E4A1C
    if (ctx->r9 == 0) {
        // 0x801E48F4: sub.s       $f16, $f30, $f26
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f30.fl - ctx->f26.fl;
            goto L_801E4A1C;
    }
    // 0x801E48F4: sub.s       $f16, $f30, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f30.fl - ctx->f26.fl;
    // 0x801E48F8: sub.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x801E48FC: lwc1        $f0, 0x78($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X78);
    // 0x801E4900: lwc1        $f10, 0x78($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801E4904: sub.s       $f6, $f2, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x801E4908: lwc1        $f14, 0x5C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x801E490C: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x801E4910: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E4914: div.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x801E4918: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x801E491C: sub.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x801E4920: c.lt.s      $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f12.fl < ctx->f28.fl;
    // 0x801E4924: nop

    // 0x801E4928: bc1fl       L_801E493C
    if (!c1cs) {
        // 0x801E492C: mov.s       $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
            goto L_801E493C;
    }
    goto skip_1;
    // 0x801E492C: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    skip_1:
    // 0x801E4930: b           L_801E493C
    // 0x801E4934: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
        goto L_801E493C;
    // 0x801E4934: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
    // 0x801E4938: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_801E493C:
    // 0x801E493C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x801E4940: nop

    // 0x801E4944: bc1fl       L_801E49C8
    if (!c1cs) {
        // 0x801E4948: c.lt.s      $f24, $f14
        CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f24.fl < ctx->f14.fl;
            goto L_801E49C8;
    }
    goto skip_2;
    // 0x801E4948: c.lt.s      $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f24.fl < ctx->f14.fl;
    skip_2:
    // 0x801E494C: lw          $v0, 0x31C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X31C);
    // 0x801E4950: lw          $t2, 0x318($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X318);
    // 0x801E4954: lui         $at, 0xFFCF
    ctx->r1 = S32(0XFFCF << 16);
    // 0x801E4958: ori         $at, $at, 0x7A20
    ctx->r1 = ctx->r1 | 0X7A20;
    // 0x801E495C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x801E4960: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801E4964: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x801E4968: ori         $at, $at, 0xC780
    ctx->r1 = ctx->r1 | 0XC780;
    // 0x801E496C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x801E4970: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801E4974: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801E4978: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E497C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801E4980: mov.s       $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    ctx->f30.fl = ctx->f2.fl;
    // 0x801E4984: ori         $t3, $v1, 0x10
    ctx->r11 = ctx->r3 | 0X10;
    // 0x801E4988: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E498C: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E4990: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x801E4994: nop

    // 0x801E4998: bc1f        L_801E49B0
    if (!c1cs) {
        // 0x801E499C: nop
    
            goto L_801E49B0;
    }
    // 0x801E499C: nop

    // 0x801E49A0: sb          $t3, 0x9F($s4)
    MEM_B(0X9F, ctx->r20) = ctx->r11;
    // 0x801E49A4: lb          $t4, 0x74($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X74);
    // 0x801E49A8: ori         $t9, $t4, 0x80
    ctx->r25 = ctx->r12 | 0X80;
    // 0x801E49AC: sb          $t9, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r25;
L_801E49B0:
    // 0x801E49B0: ldc1        $f8, -0xB68($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XB68);
    // 0x801E49B4: cvt.d.s     $f6, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f6.d = CVT_D_S(ctx->f30.fl);
    // 0x801E49B8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801E49BC: b           L_801E4A08
    // 0x801E49C0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
        goto L_801E4A08;
    // 0x801E49C0: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801E49C4: c.lt.s      $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f24.fl < ctx->f14.fl;
L_801E49C8:
    // 0x801E49C8: nop

    // 0x801E49CC: bc1fl       L_801E49F4
    if (!c1cs) {
        // 0x801E49D0: add.s       $f20, $f14, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f14.fl + ctx->f0.fl;
            goto L_801E49F4;
    }
    goto skip_3;
    // 0x801E49D0: add.s       $f20, $f14, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f14.fl + ctx->f0.fl;
    skip_3:
    // 0x801E49D4: sub.s       $f20, $f14, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x801E49D8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E49DC: ldc1        $f6, -0xB60($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XB60);
    // 0x801E49E0: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x801E49E4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801E49E8: b           L_801E4A08
    // 0x801E49EC: cvt.s.d     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f22.fl = CVT_S_D(ctx->f8.d);
        goto L_801E4A08;
    // 0x801E49EC: cvt.s.d     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f22.fl = CVT_S_D(ctx->f8.d);
    // 0x801E49F0: add.s       $f20, $f14, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f14.fl + ctx->f0.fl;
L_801E49F4:
    // 0x801E49F4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801E49F8: ldc1        $f4, -0xB58($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XB58);
    // 0x801E49FC: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801E4A00: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x801E4A04: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
L_801E4A08:
    // 0x801E4A08: swc1        $f22, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f22.u32l;
    // 0x801E4A0C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x801E4A10: swc1        $f18, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->f18.u32l;
    // 0x801E4A14: b           L_801E4A98
    // 0x801E4A18: swc1        $f8, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f8.u32l;
        goto L_801E4A98;
    // 0x801E4A18: swc1        $f8, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->f8.u32l;
L_801E4A1C:
    // 0x801E4A1C: lwc1        $f0, 0x7C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7C);
    // 0x801E4A20: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E4A24: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E4A28: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x801E4A2C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E4A30: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801E4A34: ori         $t7, $v1, 0x20
    ctx->r15 = ctx->r3 | 0X20;
    // 0x801E4A38: bc1f        L_801E4A50
    if (!c1cs) {
        // 0x801E4A3C: sub.s       $f4, $f2, $f26
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f26.fl;
            goto L_801E4A50;
    }
    // 0x801E4A3C: sub.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x801E4A40: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E4A44: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x801E4A48: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801E4A4C: nop

L_801E4A50:
    // 0x801E4A50: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x801E4A54: lwc1        $f10, 0x60($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X60);
    // 0x801E4A58: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x801E4A5C: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E4A60: div.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x801E4A64: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E4A68: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x801E4A6C: nop

    // 0x801E4A70: bc1fl       L_801E4A8C
    if (!c1cs) {
        // 0x801E4A74: sb          $t7, 0x9F($s4)
        MEM_B(0X9F, ctx->r20) = ctx->r15;
            goto L_801E4A8C;
    }
    goto skip_4;
    // 0x801E4A74: sb          $t7, 0x9F($s4)
    MEM_B(0X9F, ctx->r20) = ctx->r15;
    skip_4:
    // 0x801E4A78: lb          $t5, 0x74($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X74);
    // 0x801E4A7C: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x801E4A80: b           L_801E4A98
    // 0x801E4A84: sb          $t6, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r14;
        goto L_801E4A98;
    // 0x801E4A84: sb          $t6, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r14;
    // 0x801E4A88: sb          $t7, 0x9F($s4)
    MEM_B(0X9F, ctx->r20) = ctx->r15;
L_801E4A8C:
    // 0x801E4A8C: lb          $t8, 0x74($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X74);
    // 0x801E4A90: andi        $t0, $t8, 0xFFEF
    ctx->r8 = ctx->r24 & 0XFFEF;
    // 0x801E4A94: sb          $t0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r8;
L_801E4A98:
    // 0x801E4A98: bnel        $s3, $zero, L_801E4838
    if (ctx->r19 != 0) {
        // 0x801E4A9C: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_801E4838;
    }
    goto skip_5;
    // 0x801E4A9C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    skip_5:
L_801E4AA0:
    // 0x801E4AA0: swc1        $f20, 0x5C($s4)
    MEM_W(0X5C, ctx->r20) = ctx->f20.u32l;
    // 0x801E4AA4: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x801E4AA8: swc1        $f30, 0x64($s4)
    MEM_W(0X64, ctx->r20) = ctx->f30.u32l;
    // 0x801E4AAC: swc1        $f6, 0x60($s4)
    MEM_W(0X60, ctx->r20) = ctx->f6.u32l;
    // 0x801E4AB0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x801E4AB4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x801E4AB8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x801E4ABC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x801E4AC0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x801E4AC4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x801E4AC8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x801E4ACC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x801E4AD0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x801E4AD4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x801E4AD8: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x801E4ADC: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x801E4AE0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x801E4AE4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x801E4AE8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x801E4AEC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x801E4AF0: jr          $ra
    // 0x801E4AF4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    TRACE_RETURN()
    return;
    // 0x801E4AF4: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_801E0920_64F770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E0920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E0924: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801E0928: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801E092C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E0930: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E0934: beq         $a1, $zero, L_801E0990
    if (ctx->r5 == 0) {
        // 0x801E0938: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801E0990;
    }
    // 0x801E0938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E093C: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
L_801E0940:
    // 0x801E0940: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0944: swc1        $f4, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f4.u32l;
    // 0x801E0948: lwc1        $f6, 0x84($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X84);
    // 0x801E094C: swc1        $f6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
    // 0x801E0950: lwc1        $f8, 0x88($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X88);
    // 0x801E0954: jal         0x801CD504
    // 0x801E0958: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_0;
    // 0x801E0958: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    after_0:
    // 0x801E095C: beq         $v0, $zero, L_801E0984
    if (ctx->r2 == 0) {
        // 0x801E0960: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801E0984;
    }
    // 0x801E0960: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0964: jal         0x801CDFE4
    // 0x801E0968: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801E0968: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801E096C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E0970: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E0974: jal         0x80036158
    // 0x801E0978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801E0978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801E097C: b           L_801E0988
    // 0x801E0980: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801E0988;
    // 0x801E0980: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801E0984:
    // 0x801E0984: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801E0988:
    // 0x801E0988: bnel        $s0, $zero, L_801E0940
    if (ctx->r16 != 0) {
        // 0x801E098C: lwc1        $f4, 0x80($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
            goto L_801E0940;
    }
    goto skip_0;
    // 0x801E098C: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    skip_0:
L_801E0990:
    // 0x801E0990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E0994: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801E0998: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801E099C: jr          $ra
    // 0x801E09A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801E09A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801D9EF0_648D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9EF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D9EF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D9EF8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x801D9EFC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x801D9F00: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801D9F04: addiu       $t6, $t6, 0xAA0
    ctx->r14 = ADD32(ctx->r14, 0XAA0);
    // 0x801D9F08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D9F0C: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801D9F10: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801D9F14: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801D9F18: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801D9F1C: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801D9F20: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    // 0x801D9F24: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D9F28: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D9F2C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D9F30: beq         $t9, $zero, L_801D9F88
    if (ctx->r25 == 0) {
        // 0x801D9F34: addiu       $t1, $zero, 0x200
        ctx->r9 = ADD32(0, 0X200);
            goto L_801D9F88;
    }
    // 0x801D9F34: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801D9F38: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801D9F3C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9F40: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801D9F44: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801D9F48: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801D9F4C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x801D9F50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D9F54: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x801D9F58: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D9F5C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D9F60: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F64: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F68: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F6C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F70: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F74: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D9F78: jal         0x801E8378
    // 0x801D9F7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801D9F7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801D9F80: b           L_801D9FD4
    // 0x801D9F84: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
        goto L_801D9FD4;
    // 0x801D9F84: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801D9F88:
    // 0x801D9F88: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D9F8C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801D9F90: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801D9F94: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801D9F98: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801D9F9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D9FA0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D9FA4: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x801D9FA8: lui         $a2, 0x41C8
    ctx->r6 = S32(0X41C8 << 16);
    // 0x801D9FAC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x801D9FB0: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FB8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FBC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FC0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FC4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801D9FC8: jal         0x801E8378
    // 0x801D9FCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801D9FCC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x801D9FD0: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
L_801D9FD4:
    // 0x801D9FD4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x801D9FD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D9FDC: lwc1        $f8, 0x330($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X330);
    // 0x801D9FE0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801D9FE4: addiu       $a0, $a0, -0x5FF8
    ctx->r4 = ADD32(ctx->r4, -0X5FF8);
    // 0x801D9FE8: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D9FEC: jal         0x800352EC
    // 0x801D9FF0: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801D9FF0: swc1        $f0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f0.u32l;
    after_2:
    // 0x801D9FF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801D9FF8: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x801D9FFC: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x801DA000: jr          $ra
    // 0x801DA004: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801DA004: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801CEBE0_63DA30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CEBE0: addiu       $sp, $sp, -0x170
    ctx->r29 = ADD32(ctx->r29, -0X170);
    // 0x801CEBE4: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x801CEBE8: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x801CEBEC: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x801CEBF0: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x801CEBF4: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x801CEBF8: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x801CEBFC: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x801CEC00: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x801CEC04: sdc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X78, ctx->r29);
    // 0x801CEC08: sdc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X70, ctx->r29);
    // 0x801CEC0C: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x801CEC10: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x801CEC14: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x801CEC18: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x801CEC1C: lbu         $s1, 0x9D($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0X9D);
    // 0x801CEC20: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801CEC24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CEC28: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x801CEC2C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801CEC30: lw          $t9, -0x7610($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X7610);
    // 0x801CEC34: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x801CEC38: jalr        $t9
    // 0x801CEC3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801CEC3C: nop

    after_0:
    // 0x801CEC40: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CEC44: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CEC48: lui         $t8, 0x4
    ctx->r24 = S32(0X4 << 16);
    // 0x801CEC4C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CEC50: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x801CEC54: lhu         $t8, -0x520C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X520C);
    // 0x801CEC58: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801CEC5C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x801CEC60: bne         $t8, $at, L_801CEDA0
    if (ctx->r24 != ctx->r1) {
        // 0x801CEC64: slti        $at, $t0, 0x2
        ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
            goto L_801CEDA0;
    }
    // 0x801CEC64: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x801CEC68: beq         $at, $zero, L_801CEDA0
    if (ctx->r1 == 0) {
        // 0x801CEC6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CEDA0;
    }
    // 0x801CEC6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CEC70: lwc1        $f22, 0x330($s6)
    ctx->f22.u32l = MEM_W(ctx->r22, 0X330);
    // 0x801CEC74: lw          $a1, 0xD0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD0);
    // 0x801CEC78: jal         0x801E117C
    // 0x801CEC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801E117C_64FFCC(rdram, ctx);
        goto after_1;
    // 0x801CEC7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801CEC80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CEC84: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801CEC88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x801CEC8C: lw          $v1, 0xE4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE4);
    // 0x801CEC90: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x801CEC94: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801CEC98: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x801CEC9C: lui         $s2, 0x801F
    ctx->r18 = S32(0X801F << 16);
    // 0x801CECA0: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x801CECA4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x801CECA8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801CECAC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x801CECB0: addiu       $s2, $s2, -0x768C
    ctx->r18 = ADD32(ctx->r18, -0X768C);
    // 0x801CECB4: addiu       $s1, $zero, 0x10
    ctx->r17 = ADD32(0, 0X10);
    // 0x801CECB8: addiu       $s5, $sp, 0xC8
    ctx->r21 = ADD32(ctx->r29, 0XC8);
    // 0x801CECBC: lw          $s4, 0x18($v1)
    ctx->r20 = MEM_W(ctx->r3, 0X18);
    // 0x801CECC0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_801CECC4:
    // 0x801CECC4: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x801CECC8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x801CECCC: addu        $s0, $s6, $t2
    ctx->r16 = ADD32(ctx->r22, ctx->r10);
    // 0x801CECD0: addiu       $s2, $s2, -0x4
    ctx->r18 = ADD32(ctx->r18, -0X4);
    // 0x801CECD4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x801CECD8: lwc1        $f24, 0x4C($s0)
    ctx->f24.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x801CECDC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x801CECE0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x801CECE4: jal         0x8001B918
    // 0x801CECE8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    func_8001B918_1C518(rdram, ctx);
        goto after_2;
    // 0x801CECE8: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    after_2:
    // 0x801CECEC: lwc1        $f4, 0xD0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801CECF0: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801CECF4: c.lt.s      $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f22.fl < ctx->f24.fl;
    // 0x801CECF8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CECFC: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801CED00: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801CED04: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801CED08: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801CED0C: mul.d       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f20.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f20.d);
    // 0x801CED10: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x801CED14: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x801CED18: cvt.s.d     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f2.fl = CVT_S_D(ctx->f18.d);
    // 0x801CED1C: swc1        $f14, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f14.u32l;
    // 0x801CED20: swc1        $f2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f2.u32l;
    // 0x801CED24: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x801CED28: bc1f        L_801CED98
    if (!c1cs) {
        // 0x801CED2C: swc1        $f12, 0x8C($s0)
        MEM_W(0X8C, ctx->r16) = ctx->f12.u32l;
            goto L_801CED98;
    }
    // 0x801CED2C: swc1        $f12, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f12.u32l;
    // 0x801CED30: c.le.s      $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f2.fl <= ctx->f22.fl;
    // 0x801CED34: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801CED38: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    // 0x801CED3C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x801CED40: bc1f        L_801CED98
    if (!c1cs) {
        // 0x801CED44: addiu       $t4, $zero, 0xFF
        ctx->r12 = ADD32(0, 0XFF);
            goto L_801CED98;
    }
    // 0x801CED44: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x801CED48: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x801CED4C: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x801CED50: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x801CED54: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x801CED58: addiu       $t9, $zero, 0x93
    ctx->r25 = ADD32(0, 0X93);
    // 0x801CED5C: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x801CED60: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x801CED64: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x801CED68: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801CED6C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801CED70: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801CED74: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801CED78: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801CED7C: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801CED80: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x801CED84: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    // 0x801CED88: swc1        $f26, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f26.u32l;
    // 0x801CED8C: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x801CED90: jal         0x801E0F30
    // 0x801CED94: swc1        $f26, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f26.u32l;
    func_801E0F30_64FD80(rdram, ctx);
        goto after_3;
    // 0x801CED94: swc1        $f26, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f26.u32l;
    after_3:
L_801CED98:
    // 0x801CED98: bnel        $s1, $zero, L_801CECC4
    if (ctx->r17 != 0) {
        // 0x801CED9C: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_801CECC4;
    }
    goto skip_0;
    // 0x801CED9C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_0:
L_801CEDA0:
    // 0x801CEDA0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x801CEDA4: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x801CEDA8: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x801CEDAC: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x801CEDB0: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x801CEDB4: ldc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X70);
    // 0x801CEDB8: ldc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X78);
    // 0x801CEDBC: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x801CEDC0: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x801CEDC4: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x801CEDC8: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x801CEDCC: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x801CEDD0: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x801CEDD4: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x801CEDD8: jr          $ra
    // 0x801CEDDC: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
    TRACE_RETURN()
    return;
    // 0x801CEDDC: addiu       $sp, $sp, 0x170
    ctx->r29 = ADD32(ctx->r29, 0X170);
;}
RECOMP_FUNC void func_801E301C_651E6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E301C: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801E3020: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x801E3024: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801E3028: lh          $v1, 0x35A($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X35A);
    // 0x801E302C: lhu         $t6, 0x358($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X358);
    // 0x801E3030: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801E3034: lui         $at, 0x4050
    ctx->r1 = S32(0X4050 << 16);
    // 0x801E3038: addu        $t8, $v1, $t6
    ctx->r24 = ADD32(ctx->r3, ctx->r14);
    // 0x801E303C: addiu       $t0, $t8, 0x800
    ctx->r8 = ADD32(ctx->r24, 0X800);
    // 0x801E3040: andi        $t3, $t0, 0xFFF
    ctx->r11 = ctx->r8 & 0XFFF;
    // 0x801E3044: addiu       $v1, $t3, -0x800
    ctx->r3 = ADD32(ctx->r11, -0X800);
    // 0x801E3048: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x801E304C: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x801E3050: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801E3054: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801E3058: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x801E305C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801E3060: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E3064: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x801E3068: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801E306C: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x801E3070: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801E3074: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801E3078: sub.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d - ctx->f18.d;
    // 0x801E307C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E3080: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x801E3084: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x801E3088: add.d       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f16.d + ctx->f4.d;
    // 0x801E308C: swc1        $f8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f8.u32l;
    // 0x801E3090: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x801E3094: jr          $ra
    // 0x801E3098: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801E3098: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_801CB8F8_63A748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB8F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801CB8FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB900: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801CB904: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801CB908: lw          $v0, 0xEC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XEC);
    // 0x801CB90C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801CB910: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801CB914: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x801CB918: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x801CB91C: addiu       $a0, $a0, -0x46A4
    ctx->r4 = ADD32(ctx->r4, -0X46A4);
    // 0x801CB920: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x801CB924: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x801CB928: beq         $t9, $zero, L_801CB948
    if (ctx->r25 == 0) {
        // 0x801CB92C: sh          $t7, 0x4($v0)
        MEM_H(0X4, ctx->r2) = ctx->r15;
            goto L_801CB948;
    }
    // 0x801CB92C: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x801CB930: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801CB934: jal         0x8003521C
    // 0x801CB938: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x801CB938: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x801CB93C: jal         0x800369F0
    // 0x801CB940: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800369F0_375F0(rdram, ctx);
        goto after_1;
    // 0x801CB940: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x801CB944: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_801CB948:
    // 0x801CB948: sh          $zero, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = 0;
    // 0x801CB94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801CB954: jr          $ra
    // 0x801CB958: nop

    TRACE_RETURN()
    return;
    // 0x801CB958: nop

;}
RECOMP_FUNC void func_801DDFE8_64CE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDFE8: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x801DDFEC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x801DDFF0: sw          $s3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r19;
    // 0x801DDFF4: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x801DDFF8: sw          $s1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r17;
    // 0x801DDFFC: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x801DE000: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x801DE004: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x801DE008: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x801DE00C: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x801DE010: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x801DE014: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x801DE018: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801DE01C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801DE020: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801DE024: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE028: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DE02C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DE030: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801DE034: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE038: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x801DE03C: addiu       $t9, $sp, 0xE4
    ctx->r25 = ADD32(ctx->r29, 0XE4);
    // 0x801DE040: addiu       $t0, $sp, 0xE8
    ctx->r8 = ADD32(ctx->r29, 0XE8);
    // 0x801DE044: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    // 0x801DE048: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801DE04C: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x801DE050: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801DE054: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE058: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801DE05C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DE060: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x801DE064: lwc1        $f8, 0x24($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801DE068: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x801DE06C: mul.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f0.d);
    // 0x801DE070: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DE074: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x801DE078: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x801DE07C: ldc1        $f18, -0xCE8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, -0XCE8);
    // 0x801DE080: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x801DE084: lhu         $t6, 0x14($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X14);
    // 0x801DE088: mul.d       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x801DE08C: sh          $t6, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r14;
    // 0x801DE090: lhu         $t7, 0x16($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X16);
    // 0x801DE094: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x801DE098: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801DE09C: sh          $t7, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r15;
    // 0x801DE0A0: lhu         $t8, 0x18($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X18);
    // 0x801DE0A4: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x801DE0A8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x801DE0AC: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x801DE0B0: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x801DE0B4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x801DE0B8: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x801DE0BC: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x801DE0C0: sh          $t8, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r24;
    // 0x801DE0C4: jal         0x80033898
    // 0x801DE0C8: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801DE0C8: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    after_0:
    // 0x801DE0CC: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE0D0: lwc1        $f18, 0x5C($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DE0D4: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE0D8: lui         $at, 0x4250
    ctx->r1 = S32(0X4250 << 16);
    // 0x801DE0DC: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DE0E0: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE0E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE0E8: addiu       $t1, $sp, 0xCC
    ctx->r9 = ADD32(ctx->r29, 0XCC);
    // 0x801DE0EC: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801DE0F0: lwc1        $f4, 0x60($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DE0F4: addiu       $t2, $sp, 0xD0
    ctx->r10 = ADD32(ctx->r29, 0XD0);
    // 0x801DE0F8: lhu         $a0, 0x90($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X90);
    // 0x801DE0FC: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DE100: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DE104: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801DE108: lhu         $a1, 0x92($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X92);
    // 0x801DE10C: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x801DE110: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DE114: lwc1        $f18, 0x64($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DE118: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801DE11C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DE120: lhu         $a2, 0x94($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X94);
    // 0x801DE124: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801DE128: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x801DE12C: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DE130: neg.s       $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = -ctx->f6.fl;
    // 0x801DE134: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x801DE138: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x801DE13C: jal         0x80033898
    // 0x801DE140: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801DE140: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x801DE144: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801DE148: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801DE14C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE150: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801DE154: addiu       $s0, $zero, 0x300
    ctx->r16 = ADD32(0, 0X300);
    // 0x801DE158: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x801DE15C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_801DE160:
    // 0x801DE160: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE164: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE168: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE16C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x801DE170: addiu       $t3, $zero, 0x74
    ctx->r11 = ADD32(0, 0X74);
    // 0x801DE174: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x801DE178: addiu       $t5, $zero, 0x38
    ctx->r13 = ADD32(0, 0X38);
    // 0x801DE17C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x801DE180: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x801DE184: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x801DE188: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801DE18C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x801DE190: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801DE194: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x801DE198: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DE19C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x801DE1A0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801DE1A4: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x801DE1A8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801DE1AC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801DE1B0: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801DE1B4: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x801DE1B8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801DE1BC: jal         0x801CDA88
    // 0x801DE1C0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_2;
    // 0x801DE1C0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x801DE1C4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE1C8: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DE1CC: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE1D0: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DE1D4: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE1D8: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DE1DC: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE1E0: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DE1E4: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x801DE1E8: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x801DE1EC: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE1F0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DE1F4: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x801DE1F8: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x801DE1FC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DE200: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x801DE204: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x801DE208: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x801DE20C: bne         $t9, $zero, L_801DE160
    if (ctx->r25 != 0) {
        // 0x801DE210: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_801DE160;
    }
    // 0x801DE210: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x801DE214: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x801DE218: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE21C: lwc1        $f18, 0x98($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801DE220: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801DE224: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801DE228: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801DE22C: lwc1        $f16, 0xA0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801DE230: addiu       $t0, $sp, 0xE4
    ctx->r8 = ADD32(ctx->r29, 0XE4);
    // 0x801DE234: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x801DE238: addiu       $t1, $sp, 0xE8
    ctx->r9 = ADD32(ctx->r29, 0XE8);
    // 0x801DE23C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801DE240: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801DE244: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x801DE248: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x801DE24C: lhu         $a0, 0x90($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X90);
    // 0x801DE250: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x801DE254: lhu         $a1, 0x92($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X92);
    // 0x801DE258: lhu         $a2, 0x94($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X94);
    // 0x801DE25C: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    // 0x801DE260: jal         0x80033898
    // 0x801DE264: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801DE264: addiu       $a3, $sp, 0xE0
    ctx->r7 = ADD32(ctx->r29, 0XE0);
    after_3:
    // 0x801DE268: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE26C: lwc1        $f8, 0x5C($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X5C);
    // 0x801DE270: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE274: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE278: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DE27C: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE280: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DE284: addiu       $t2, $sp, 0xD8
    ctx->r10 = ADD32(ctx->r29, 0XD8);
    // 0x801DE288: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x801DE28C: lwc1        $f16, 0x60($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X60);
    // 0x801DE290: addiu       $t3, $sp, 0xDC
    ctx->r11 = ADD32(ctx->r29, 0XDC);
    // 0x801DE294: lhu         $a0, 0x90($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X90);
    // 0x801DE298: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x801DE29C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE2A0: lhu         $a1, 0x92($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X92);
    // 0x801DE2A4: lhu         $a2, 0x94($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X94);
    // 0x801DE2A8: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x801DE2AC: lwc1        $f8, 0x64($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X64);
    // 0x801DE2B0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801DE2B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x801DE2B8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x801DE2BC: addiu       $a3, $sp, 0xD4
    ctx->r7 = ADD32(ctx->r29, 0XD4);
    // 0x801DE2C0: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x801DE2C4: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x801DE2C8: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x801DE2CC: jal         0x80033898
    // 0x801DE2D0: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_4;
    // 0x801DE2D0: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x801DE2D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE2D8: lui         $at, 0x4252
    ctx->r1 = S32(0X4252 << 16);
    // 0x801DE2DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801DE2E0: addiu       $t4, $sp, 0xCC
    ctx->r12 = ADD32(ctx->r29, 0XCC);
    // 0x801DE2E4: addiu       $t5, $sp, 0xD0
    ctx->r13 = ADD32(ctx->r29, 0XD0);
    // 0x801DE2E8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x801DE2EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801DE2F0: lhu         $a0, 0x90($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X90);
    // 0x801DE2F4: lhu         $a1, 0x92($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X92);
    // 0x801DE2F8: lhu         $a2, 0x94($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X94);
    // 0x801DE2FC: addiu       $a3, $sp, 0xC8
    ctx->r7 = ADD32(ctx->r29, 0XC8);
    // 0x801DE300: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x801DE304: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x801DE308: jal         0x80033898
    // 0x801DE30C: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801DE30C: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x801DE310: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE314: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DE318: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801DE31C: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x801DE320: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x801DE324: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801DE328: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801DE32C: lhu         $a0, 0x90($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X90);
    // 0x801DE330: lhu         $a1, 0x92($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X92);
    // 0x801DE334: lhu         $a2, 0x94($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X94);
    // 0x801DE338: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    // 0x801DE33C: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x801DE340: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x801DE344: jal         0x80033898
    // 0x801DE348: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801DE348: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x801DE34C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x801DE350: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x801DE354: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE358: jal         0x801DFBE0
    // 0x801DE35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801DFBE0_64EA30(rdram, ctx);
        goto after_7;
    // 0x801DE35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x801DE360: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE364: ldc1        $f30, -0xCE0($at)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r1, -0XCE0);
    // 0x801DE368: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE36C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801DE370: ldc1        $f28, -0xCD8($at)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r1, -0XCD8);
    // 0x801DE374: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
L_801DE378:
    // 0x801DE378: jal         0x8000DD58
    // 0x801DE37C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8000DD58_E958(rdram, ctx);
        goto after_8;
    // 0x801DE37C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x801DE380: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x801DE384: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DE388: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801DE38C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x801DE390: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x801DE394: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
    // 0x801DE398: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE39C: add.d       $f10, $f18, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = ctx->f18.d + ctx->f30.d;
    // 0x801DE3A0: jal         0x8000DD58
    // 0x801DE3A4: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_9;
    // 0x801DE3A4: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    after_9:
    // 0x801DE3A8: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801DE3AC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x801DE3B0: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801DE3B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801DE3B8: mul.d       $f16, $f6, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f16.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x801DE3BC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DE3C0: cvt.d.s     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.d = CVT_D_S(ctx->f18.fl);
    // 0x801DE3C4: add.d       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f30.d); 
    ctx->f8.d = ctx->f10.d + ctx->f30.d;
    // 0x801DE3C8: jal         0x8000DD58
    // 0x801DE3CC: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_10;
    // 0x801DE3CC: cvt.s.d     $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f24.fl = CVT_S_D(ctx->f8.d);
    after_10:
    // 0x801DE3D0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801DE3D4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x801DE3D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801DE3DC: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x801DE3E0: mul.d       $f18, $f16, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f28.d);
    // 0x801DE3E4: cvt.s.d     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f10.fl = CVT_S_D(ctx->f18.d);
    // 0x801DE3E8: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x801DE3EC: add.d       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f4.d = ctx->f8.d + ctx->f30.d;
    // 0x801DE3F0: jal         0x8000DD58
    // 0x801DE3F4: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    func_8000DD58_E958(rdram, ctx);
        goto after_11;
    // 0x801DE3F4: cvt.s.d     $f26, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f26.fl = CVT_S_D(ctx->f4.d);
    after_11:
    // 0x801DE3F8: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x801DE3FC: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x801DE400: addiu       $t0, $t9, -0xA
    ctx->r8 = ADD32(ctx->r25, -0XA);
    // 0x801DE404: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x801DE408: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801DE40C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE410: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801DE414: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x801DE418: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801DE41C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801DE420: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801DE424: ldc1        $f16, -0xCD0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0XCD0);
    // 0x801DE428: add.s       $f20, $f6, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801DE42C: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE430: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DE434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801DE438: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x801DE43C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x801DE440: div.d       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f8.d);
    // 0x801DE444: lwc1        $f10, 0xD4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x801DE448: addiu       $a3, $zero, 0xC0
    ctx->r7 = ADD32(0, 0XC0);
    // 0x801DE44C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE450: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE454: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE458: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x801DE45C: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DE460: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x801DE464: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x801DE468: mul.s       $f6, $f16, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x801DE46C: add.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x801DE470: lwc1        $f18, 0xBC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x801DE474: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801DE478: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x801DE47C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE480: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x801DE484: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE488: mul.s       $f18, $f6, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x801DE48C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801DE490: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DE494: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x801DE498: mul.s       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x801DE49C: add.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801DE4A0: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801DE4A4: mul.s       $f18, $f4, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x801DE4A8: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801DE4AC: lwc1        $f16, 0xDC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x801DE4B0: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE4B4: mul.s       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x801DE4B8: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x801DE4BC: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DE4C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DE4C4: mul.s       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x801DE4C8: add.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x801DE4CC: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x801DE4D0: mul.s       $f4, $f8, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x801DE4D4: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DE4D8: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DE4DC: jal         0x801DFC60
    // 0x801DE4E0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_801DFC60_64EAB0(rdram, ctx);
        goto after_12;
    // 0x801DE4E0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801DE4E4: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x801DE4E8: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x801DE4EC: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x801DE4F0: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x801DE4F4: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DE4F8: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x801DE4FC: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x801DE500: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801DE504: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x801DE508: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x801DE50C: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x801DE510: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x801DE514: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x801DE518: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x801DE51C: bne         $t1, $zero, L_801DE378
    if (ctx->r9 != 0) {
        // 0x801DE520: swc1        $f8, 0xE8($sp)
        MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
            goto L_801DE378;
    }
    // 0x801DE520: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x801DE524: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DE528: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DE52C: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x801DE530: bnel        $t3, $zero, L_801DE588
    if (ctx->r11 != 0) {
        // 0x801DE534: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_801DE588;
    }
    goto skip_0;
    // 0x801DE534: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x801DE538: lhu         $t4, 0xE6($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XE6);
    // 0x801DE53C: addiu       $at, $zero, 0x29A
    ctx->r1 = ADD32(0, 0X29A);
    // 0x801DE540: bne         $t4, $at, L_801DE560
    if (ctx->r12 != ctx->r1) {
        // 0x801DE544: nop
    
            goto L_801DE560;
    }
    // 0x801DE544: nop

    // 0x801DE548: jal         0x80038B98
    // 0x801DE54C: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    func_80038B98_39798(rdram, ctx);
        goto after_13;
    // 0x801DE54C: addiu       $a0, $zero, 0x29B
    ctx->r4 = ADD32(0, 0X29B);
    after_13:
    // 0x801DE550: lw          $t6, 0xEC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XEC);
    // 0x801DE554: addiu       $t5, $zero, 0x29B
    ctx->r13 = ADD32(0, 0X29B);
    // 0x801DE558: b           L_801DE574
    // 0x801DE55C: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
        goto L_801DE574;
    // 0x801DE55C: sh          $t5, 0xE6($t6)
    MEM_H(0XE6, ctx->r14) = ctx->r13;
L_801DE560:
    // 0x801DE560: jal         0x80038B98
    // 0x801DE564: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    func_80038B98_39798(rdram, ctx);
        goto after_14;
    // 0x801DE564: addiu       $a0, $zero, 0x29A
    ctx->r4 = ADD32(0, 0X29A);
    after_14:
    // 0x801DE568: lw          $t8, 0xEC($s3)
    ctx->r24 = MEM_W(ctx->r19, 0XEC);
    // 0x801DE56C: addiu       $t7, $zero, 0x29A
    ctx->r15 = ADD32(0, 0X29A);
    // 0x801DE570: sh          $t7, 0xE6($t8)
    MEM_H(0XE6, ctx->r24) = ctx->r15;
L_801DE574:
    // 0x801DE574: lw          $v0, 0xEC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XEC);
    // 0x801DE578: lhu         $t9, 0xE2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XE2);
    // 0x801DE57C: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x801DE580: sh          $t0, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r8;
    // 0x801DE584: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_801DE588:
    // 0x801DE588: jal         0x801E8850
    // 0x801DE58C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801E8850_6576A0(rdram, ctx);
        goto after_15;
    // 0x801DE58C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x801DE590: jal         0x801DBEB0
    // 0x801DE594: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_801DBEB0_64AD00(rdram, ctx);
        goto after_16;
    // 0x801DE594: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_16:
    // 0x801DE598: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x801DE59C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x801DE5A0: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x801DE5A4: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x801DE5A8: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x801DE5AC: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x801DE5B0: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x801DE5B4: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x801DE5B8: lw          $s1, 0x78($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X78);
    // 0x801DE5BC: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x801DE5C0: lw          $s3, 0x80($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X80);
    // 0x801DE5C4: jr          $ra
    // 0x801DE5C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    TRACE_RETURN()
    return;
    // 0x801DE5C8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_801DB4D0_64A320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB4D0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801DB4D4: lui         $t6, 0x800
    ctx->r14 = S32(0X800 << 16);
    // 0x801DB4D8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801DB4DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x801DB4E0: addiu       $t6, $t6, 0x1580
    ctx->r14 = ADD32(ctx->r14, 0X1580);
    // 0x801DB4E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801DB4E8: lui         $t8, 0x801F
    ctx->r24 = S32(0X801F << 16);
    // 0x801DB4EC: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x801DB4F0: addiu       $t8, $t8, -0x1BE8
    ctx->r24 = ADD32(ctx->r24, -0X1BE8);
    // 0x801DB4F4: sw          $t7, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r15;
    // 0x801DB4F8: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    // 0x801DB4FC: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801DB500: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DB504: addiu       $t1, $zero, 0x200
    ctx->r9 = ADD32(0, 0X200);
    // 0x801DB508: beq         $t9, $zero, L_801DB560
    if (ctx->r25 == 0) {
        // 0x801DB50C: lui         $a2, 0x4248
        ctx->r6 = S32(0X4248 << 16);
            goto L_801DB560;
    }
    // 0x801DB50C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x801DB510: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    // 0x801DB514: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB518: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x801DB51C: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x801DB520: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x801DB524: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801DB528: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801DB52C: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x801DB530: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x801DB534: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801DB538: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB53C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB540: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB544: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB548: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB54C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB550: jal         0x801E8378
    // 0x801DB554: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_0;
    // 0x801DB554: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x801DB558: b           L_801DB5A0
    // 0x801DB55C: nop

        goto L_801DB5A0;
    // 0x801DB55C: nop

L_801DB560:
    // 0x801DB560: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DB564: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x801DB568: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x801DB56C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x801DB570: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x801DB574: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DB578: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x801DB57C: lui         $a3, 0x42AA
    ctx->r7 = S32(0X42AA << 16);
    // 0x801DB580: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801DB584: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DB588: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DB58C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DB590: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801DB594: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801DB598: jal         0x801E8378
    // 0x801DB59C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801E8378_6571C8(rdram, ctx);
        goto after_1;
    // 0x801DB59C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
L_801DB5A0:
    // 0x801DB5A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DB5A4: jal         0x800352EC
    // 0x801DB5A8: addiu       $a0, $a0, -0x4A40
    ctx->r4 = ADD32(ctx->r4, -0X4A40);
    func_800352EC_35EEC(rdram, ctx);
        goto after_2;
    // 0x801DB5A8: addiu       $a0, $a0, -0x4A40
    ctx->r4 = ADD32(ctx->r4, -0X4A40);
    after_2:
    // 0x801DB5AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x801DB5B0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x801DB5B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801DB5B8: jr          $ra
    // 0x801DB5BC: nop

    TRACE_RETURN()
    return;
    // 0x801DB5BC: nop

;}
RECOMP_FUNC void func_801D76A0_6464F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D76A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D76A4: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D76A8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D76AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D76B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D76B4: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D76B8: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    // 0x801D76BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D76C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D76C4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D76C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D76CC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D76D0: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D76D4: bgez        $v0, L_801D76E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D76D8: swc1        $f18, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
            goto L_801D76E4;
    }
    // 0x801D76D8: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D76DC: b           L_801D76E4
    // 0x801D76E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D76E4;
    // 0x801D76E0: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D76E4:
    // 0x801D76E4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D76E8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D76EC: ldc1        $f8, -0xE20($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XE20);
    // 0x801D76F0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D76F4: c.le.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d <= ctx->f6.d;
    // 0x801D76F8: nop

    // 0x801D76FC: bc1f        L_801D7708
    if (!c1cs) {
        // 0x801D7700: nop
    
            goto L_801D7708;
    }
    // 0x801D7700: nop

    // 0x801D7704: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
L_801D7708:
    // 0x801D7708: jr          $ra
    // 0x801D770C: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x801D770C: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801DF710_64E560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DF710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DF714: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801DF718: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801DF71C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801DF720: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801DF724: beq         $a1, $zero, L_801DF78C
    if (ctx->r5 == 0) {
        // 0x801DF728: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_801DF78C;
    }
    // 0x801DF728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DF72C: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
L_801DF730:
    // 0x801DF730: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF734: swc1        $f4, 0x5C($s1)
    MEM_W(0X5C, ctx->r17) = ctx->f4.u32l;
    // 0x801DF738: lwc1        $f6, 0x8C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8C);
    // 0x801DF73C: swc1        $f6, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->f6.u32l;
    // 0x801DF740: lwc1        $f8, 0x90($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X90);
    // 0x801DF744: jal         0x801CD504
    // 0x801DF748: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    func_801CD504_63C354(rdram, ctx);
        goto after_0;
    // 0x801DF748: swc1        $f8, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->f8.u32l;
    after_0:
    // 0x801DF74C: beq         $v0, $zero, L_801DF778
    if (ctx->r2 == 0) {
        // 0x801DF750: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801DF778;
    }
    // 0x801DF750: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF754: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF758: jal         0x801CDFE4
    // 0x801DF75C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CDFE4_63CE34(rdram, ctx);
        goto after_1;
    // 0x801DF75C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x801DF760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DF764: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801DF768: jal         0x80036158
    // 0x801DF76C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80036158_36D58(rdram, ctx);
        goto after_2;
    // 0x801DF76C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x801DF770: b           L_801DF784
    // 0x801DF774: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801DF784;
    // 0x801DF774: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801DF778:
    // 0x801DF778: jal         0x801CE068
    // 0x801DF77C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_801CE068_63CEB8(rdram, ctx);
        goto after_3;
    // 0x801DF77C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x801DF780: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_801DF784:
    // 0x801DF784: bnel        $s0, $zero, L_801DF730
    if (ctx->r16 != 0) {
        // 0x801DF788: lwc1        $f4, 0x88($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
            goto L_801DF730;
    }
    goto skip_0;
    // 0x801DF788: lwc1        $f4, 0x88($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X88);
    skip_0:
L_801DF78C:
    // 0x801DF78C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DF790: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x801DF794: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x801DF798: jr          $ra
    // 0x801DF79C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x801DF79C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801CD164_63BFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CD164: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x801CD168: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x801CD16C: mflo        $v1
    ctx->r3 = lo;
    // 0x801CD170: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x801CD174: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x801CD178: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x801CD17C: addu        $t8, $v1, $a1
    ctx->r24 = ADD32(ctx->r3, ctx->r5);
    // 0x801CD180: bne         $t8, $zero, L_801CD190
    if (ctx->r24 != 0) {
        // 0x801CD184: nop
    
            goto L_801CD190;
    }
    // 0x801CD184: nop

    // 0x801CD188: jr          $ra
    // 0x801CD18C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801CD18C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801CD190:
    // 0x801CD190: bne         $v1, $zero, L_801CD1AC
    if (ctx->r3 != 0) {
        // 0x801CD194: negu        $v0, $v1
        ctx->r2 = SUB32(0, ctx->r3);
            goto L_801CD1AC;
    }
    // 0x801CD194: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x801CD198: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
    // 0x801CD19C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801CD1A0: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x801CD1A4: jr          $ra
    // 0x801CD1A8: sll         $v0, $t9, 1
    ctx->r2 = S32(ctx->r25 << 1);
    TRACE_RETURN()
    return;
    // 0x801CD1A8: sll         $v0, $t9, 1
    ctx->r2 = S32(ctx->r25 << 1);
L_801CD1AC:
    // 0x801CD1AC: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x801CD1B0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x801CD1B4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x801CD1B8: jr          $ra
    // 0x801CD1BC: nop

    TRACE_RETURN()
    return;
    // 0x801CD1BC: nop

;}
RECOMP_FUNC void func_801D47B0_643600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D47B0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x801D47B4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x801D47B8: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x801D47BC: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x801D47C0: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x801D47C4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x801D47C8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x801D47CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D47D0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D47D4: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x801D47D8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x801D47DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801D47E0: lui         $at, 0xC024
    ctx->r1 = S32(0XC024 << 16);
    // 0x801D47E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D47E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801D47EC: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x801D47F0: addiu       $t7, $sp, 0x6C
    ctx->r15 = ADD32(ctx->r29, 0X6C);
    // 0x801D47F4: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x801D47F8: mul.d       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x801D47FC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801D4800: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x801D4804: lwc1        $f18, 0x20($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X20);
    // 0x801D4808: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D480C: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x801D4810: nop

    // 0x801D4814: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x801D4818: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D481C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801D4820: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D4824: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x801D4828: lwc1        $f16, 0x24($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X24);
    // 0x801D482C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801D4830: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x801D4834: nop

    // 0x801D4838: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x801D483C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801D4840: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x801D4844: lhu         $a0, 0x14($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X14);
    // 0x801D4848: lhu         $a1, 0x16($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X16);
    // 0x801D484C: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x801D4850: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801D4854: jal         0x80033898
    // 0x801D4858: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801D4858: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801D485C: addiu       $t8, $zero, 0x21
    ctx->r24 = ADD32(0, 0X21);
    // 0x801D4860: addiu       $t9, $zero, 0x4A
    ctx->r25 = ADD32(0, 0X4A);
    // 0x801D4864: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x801D4868: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x801D486C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x801D4870: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x801D4874: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801D4878: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D487C: lwc1        $f18, 0x5C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D4880: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D4884: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D4888: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x801D488C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D4890: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D4894: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x801D4898: addiu       $t3, $zero, 0x300
    ctx->r11 = ADD32(0, 0X300);
    // 0x801D489C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x801D48A0: lwc1        $f8, 0x60($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D48A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D48A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D48AC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801D48B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801D48B4: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x801D48B8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x801D48BC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x801D48C0: lwc1        $f18, 0x64($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D48C4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x801D48C8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x801D48CC: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801D48D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D48D4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D48D8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x801D48DC: jal         0x801CDA88
    // 0x801D48E0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_801CDA88_63C8D8(rdram, ctx);
        goto after_1;
    // 0x801D48E0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801D48E4: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x801D48E8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x801D48EC: lwc1        $f10, 0x5C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X5C);
    // 0x801D48F0: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D48F4: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x801D48F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D48FC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D4900: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D4904: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801D4908: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D490C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D4910: lwc1        $f4, 0x60($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X60);
    // 0x801D4914: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x801D4918: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x801D491C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D4920: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801D4924: lwc1        $f10, 0x64($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X64);
    // 0x801D4928: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D492C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D4930: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D4934: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801D4938: jal         0x801DF9EC
    // 0x801D493C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    func_801DF9EC_64E83C(rdram, ctx);
        goto after_2;
    // 0x801D493C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801D4940: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D4944: lhu         $t5, 0xE2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4948: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801D494C: bnel        $t6, $zero, L_801D49A4
    if (ctx->r14 != 0) {
        // 0x801D4950: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801D49A4;
    }
    goto skip_0;
    // 0x801D4950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x801D4954: lhu         $t7, 0xE4($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XE4);
    // 0x801D4958: addiu       $at, $zero, 0x298
    ctx->r1 = ADD32(0, 0X298);
    // 0x801D495C: bne         $t7, $at, L_801D497C
    if (ctx->r15 != ctx->r1) {
        // 0x801D4960: nop
    
            goto L_801D497C;
    }
    // 0x801D4960: nop

    // 0x801D4964: jal         0x80038B98
    // 0x801D4968: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    func_80038B98_39798(rdram, ctx);
        goto after_3;
    // 0x801D4968: addiu       $a0, $zero, 0x299
    ctx->r4 = ADD32(0, 0X299);
    after_3:
    // 0x801D496C: lw          $t9, 0xEC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XEC);
    // 0x801D4970: addiu       $t8, $zero, 0x299
    ctx->r24 = ADD32(0, 0X299);
    // 0x801D4974: b           L_801D4990
    // 0x801D4978: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
        goto L_801D4990;
    // 0x801D4978: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
L_801D497C:
    // 0x801D497C: jal         0x80038B98
    // 0x801D4980: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    func_80038B98_39798(rdram, ctx);
        goto after_4;
    // 0x801D4980: addiu       $a0, $zero, 0x298
    ctx->r4 = ADD32(0, 0X298);
    after_4:
    // 0x801D4984: lw          $t1, 0xEC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XEC);
    // 0x801D4988: addiu       $t0, $zero, 0x298
    ctx->r8 = ADD32(0, 0X298);
    // 0x801D498C: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
L_801D4990:
    // 0x801D4990: lw          $v0, 0xEC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XEC);
    // 0x801D4994: lhu         $t2, 0xE2($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0XE2);
    // 0x801D4998: ori         $t3, $t2, 0x1
    ctx->r11 = ctx->r10 | 0X1;
    // 0x801D499C: sh          $t3, 0xE2($v0)
    MEM_H(0XE2, ctx->r2) = ctx->r11;
    // 0x801D49A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_801D49A4:
    // 0x801D49A4: jal         0x801E8824
    // 0x801D49A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_801E8824_657674(rdram, ctx);
        goto after_5;
    // 0x801D49A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x801D49AC: jal         0x801D2B90
    // 0x801D49B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801D2B90_6419E0(rdram, ctx);
        goto after_6;
    // 0x801D49B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801D49B4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x801D49B8: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x801D49BC: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x801D49C0: jr          $ra
    // 0x801D49C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x801D49C4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_801D1974_6407C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1974: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x801D1978: andi        $t6, $v0, 0x2000
    ctx->r14 = ctx->r2 & 0X2000;
    // 0x801D197C: bne         $t6, $zero, L_801D19C8
    if (ctx->r14 != 0) {
        // 0x801D1980: andi        $t7, $v0, 0x200
        ctx->r15 = ctx->r2 & 0X200;
            goto L_801D19C8;
    }
    // 0x801D1980: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x801D1984: beq         $t7, $zero, L_801D19C8
    if (ctx->r15 == 0) {
        // 0x801D1988: lui         $t8, 0x8016
        ctx->r24 = S32(0X8016 << 16);
            goto L_801D19C8;
    }
    // 0x801D1988: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801D198C: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x801D1990: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801D1994: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D1998: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x801D199C: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x801D19A0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D19A4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801D19A8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D19AC: lhu         $t1, -0x4F84($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F84);
    // 0x801D19B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D19B4: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x801D19B8: beql        $t2, $zero, L_801D19CC
    if (ctx->r10 == 0) {
        // 0x801D19BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_801D19CC;
    }
    goto skip_0;
    // 0x801D19BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x801D19C0: jr          $ra
    // 0x801D19C4: sb          $zero, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801D19C4: sb          $zero, 0xA0($a0)
    MEM_B(0XA0, ctx->r4) = 0;
L_801D19C8:
    // 0x801D19C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_801D19CC:
    // 0x801D19CC: jr          $ra
    // 0x801D19D0: nop

    TRACE_RETURN()
    return;
    // 0x801D19D0: nop

;}
RECOMP_FUNC void func_801E8378_6571C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8378: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x801E837C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E8380: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8384: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E8388: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x801E838C: sb          $a1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r5;
    // 0x801E8390: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E8394: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x801E8398: bc1tl       L_801E83C0
    if (c1cs) {
        // 0x801E839C: sb          $v0, 0x75($a0)
        MEM_B(0X75, ctx->r4) = ctx->r2;
            goto L_801E83C0;
    }
    goto skip_0;
    // 0x801E839C: sb          $v0, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r2;
    skip_0:
    // 0x801E83A0: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x801E83A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801E83A8: bc1tl       L_801E83C0
    if (c1cs) {
        // 0x801E83AC: sb          $v0, 0x75($a0)
        MEM_B(0X75, ctx->r4) = ctx->r2;
            goto L_801E83C0;
    }
    goto skip_1;
    // 0x801E83AC: sb          $v0, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r2;
    skip_1:
    // 0x801E83B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801E83B4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x801E83B8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x801E83BC: sb          $v0, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r2;
L_801E83C0:
    // 0x801E83C0: swc1        $f14, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f14.u32l;
    // 0x801E83C4: swc1        $f12, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f12.u32l;
    // 0x801E83C8: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x801E83CC: swc1        $f6, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f6.u32l;
    // 0x801E83D0: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x801E83D4: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x801E83D8: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x801E83DC: swc1        $f10, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f10.u32l;
    // 0x801E83E0: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801E83E4: swc1        $f16, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f16.u32l;
    // 0x801E83E8: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x801E83EC: swc1        $f18, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f18.u32l;
    // 0x801E83F0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801E83F4: swc1        $f4, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f4.u32l;
    // 0x801E83F8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E83FC: jr          $ra
    // 0x801E8400: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
    TRACE_RETURN()
    return;
    // 0x801E8400: swc1        $f6, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_801D759C_6463EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D759C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801D75A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D75A4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801D75A8: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x801D75AC: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D75B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801D75B4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D75B8: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D75BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D75C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D75C4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D75C8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D75CC: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D75D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801D75D4: jal         0x801CD96C
    // 0x801D75D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801CD96C_63C7BC(rdram, ctx);
        goto after_0;
    // 0x801D75D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x801D75DC: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D75E0: ldc1        $f6, -0xE30($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0XE30);
    // 0x801D75E4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x801D75E8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801D75EC: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x801D75F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801D75F4: bc1fl       L_801D7610
    if (!c1cs) {
        // 0x801D75F8: lw          $t6, 0xA4($a0)
        ctx->r14 = MEM_W(ctx->r4, 0XA4);
            goto L_801D7610;
    }
    goto skip_0;
    // 0x801D75F8: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
    skip_0:
    // 0x801D75FC: jal         0x801D7778
    // 0x801D7600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801D7778_6465C8(rdram, ctx);
        goto after_1;
    // 0x801D7600: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801D7604: b           L_801D7654
    // 0x801D7608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D7654;
    // 0x801D7608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D760C: lw          $t6, 0xA4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XA4);
L_801D7610:
    // 0x801D7610: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801D7614: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x801D7618: bgez        $v0, L_801D7628
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801D761C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D7628;
    }
    // 0x801D761C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D7620: b           L_801D7628
    // 0x801D7624: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_801D7628;
    // 0x801D7624: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_801D7628:
    // 0x801D7628: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x801D762C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D7630: ldc1        $f10, -0xE28($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, -0XE28);
    // 0x801D7634: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x801D7638: c.le.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d <= ctx->f16.d;
    // 0x801D763C: nop

    // 0x801D7640: bc1fl       L_801D7650
    if (!c1cs) {
        // 0x801D7644: sw          $v0, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->r2;
            goto L_801D7650;
    }
    goto skip_1;
    // 0x801D7644: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
    skip_1:
    // 0x801D7648: sb          $t7, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r15;
    // 0x801D764C: sw          $v0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r2;
L_801D7650:
    // 0x801D7650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D7654:
    // 0x801D7654: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801D7658: jr          $ra
    // 0x801D765C: nop

    TRACE_RETURN()
    return;
    // 0x801D765C: nop

;}
RECOMP_FUNC void func_801D402C_642E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D402C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D4030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D4034: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D4038: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x801D403C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4040: ldc1        $f8, -0xF48($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0XF48);
    // 0x801D4044: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801D4048: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D404C: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x801D4050: swc1        $f18, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f18.u32l;
    // 0x801D4054: jal         0x801CDA5C
    // 0x801D4058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CDA5C_63C8AC(rdram, ctx);
        goto after_0;
    // 0x801D4058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D405C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D4060: ldc1        $f4, -0xF40($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0XF40);
    // 0x801D4064: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x801D4068: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D406C: c.le.d      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.d <= ctx->f4.d;
    // 0x801D4070: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801D4074: bc1fl       L_801D416C
    if (!c1cs) {
        // 0x801D4078: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D416C;
    }
    goto skip_0;
    // 0x801D4078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801D407C: lbu         $v0, 0x9E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D4080: ori         $t7, $zero, 0xD160
    ctx->r15 = 0 | 0XD160;
    // 0x801D4084: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801D4088: beq         $v0, $zero, L_801D40A0
    if (ctx->r2 == 0) {
        // 0x801D408C: sw          $t7, 0xA0($a0)
        MEM_W(0XA0, ctx->r4) = ctx->r15;
            goto L_801D40A0;
    }
    // 0x801D408C: sw          $t7, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r15;
    // 0x801D4090: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x801D4094: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x801D4098: b           L_801D40B0
    // 0x801D409C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_801D40B0;
    // 0x801D409C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_801D40A0:
    // 0x801D40A0: jal         0x801CD9E0
    // 0x801D40A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801CD9E0_63C830(rdram, ctx);
        goto after_1;
    // 0x801D40A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801D40A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D40AC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
L_801D40B0:
    // 0x801D40B0: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x801D40B4: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x801D40B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x801D40BC: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x801D40C0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801D40C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801D40C8: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x801D40CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801D40D0: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x801D40D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D40D8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x801D40DC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801D40E0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801D40E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D40E8: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x801D40EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D40F0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x801D40F4: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801D40F8: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x801D40FC: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x801D4100: mul.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x801D4104: sh          $t0, 0xB6($a0)
    MEM_H(0XB6, ctx->r4) = ctx->r8;
    // 0x801D4108: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801D410C: div.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801D4110: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x801D4114: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x801D4118: nop

    // 0x801D411C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801D4120: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x801D4124: sw          $v1, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r3;
    // 0x801D4128: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D412C: sw          $v1, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r3;
    // 0x801D4130: mul.s       $f6, $f12, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x801D4134: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x801D4138: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x801D413C: div.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f16.fl);
    // 0x801D4140: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D4144: div.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D4148: mul.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x801D414C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x801D4150: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x801D4154: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801D4158: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801D415C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x801D4160: nop

    // 0x801D4164: sw          $t5, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r13;
    // 0x801D4168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D416C:
    // 0x801D416C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D4170: jr          $ra
    // 0x801D4174: nop

    TRACE_RETURN()
    return;
    // 0x801D4174: nop

;}
RECOMP_FUNC void func_801CB56C_63A3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB56C: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x801CB570: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x801CB574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB578: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB580: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801CB584: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801CB588: jal         0x80004240
    // 0x801CB58C: sb          $t6, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = ctx->r14;
    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x801CB58C: sb          $t6, -0x5221($at)
    MEM_B(-0X5221, ctx->r1) = ctx->r14;
    after_0:
    // 0x801CB590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB598: jr          $ra
    // 0x801CB59C: nop

    TRACE_RETURN()
    return;
    // 0x801CB59C: nop

;}
RECOMP_FUNC void func_801E11E0_650030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E11E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E11E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E11E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E11EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E11F0: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x801E11F4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E11F8: jal         0x800352EC
    // 0x801E11FC: addiu       $a0, $a0, 0x1210
    ctx->r4 = ADD32(ctx->r4, 0X1210);
    func_800352EC_35EEC(rdram, ctx);
        goto after_0;
    // 0x801E11FC: addiu       $a0, $a0, 0x1210
    ctx->r4 = ADD32(ctx->r4, 0X1210);
    after_0:
    // 0x801E1200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E1204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1208: jr          $ra
    // 0x801E120C: nop

    TRACE_RETURN()
    return;
    // 0x801E120C: nop

;}
RECOMP_FUNC void func_801D0BB8_63FA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0BC0: lbu         $v0, 0x9D($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9D);
    // 0x801D0BC4: lui         $t9, 0x801F
    ctx->r25 = S32(0X801F << 16);
    // 0x801D0BC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801D0BCC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x801D0BD0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x801D0BD4: lw          $t9, -0x75B8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75B8);
    // 0x801D0BD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801D0BDC: jalr        $t9
    // 0x801D0BE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x801D0BE0: nop

    after_0:
    // 0x801D0BE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x801D0BE8: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0BEC: ldc1        $f8, -0x10B8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X10B8);
    // 0x801D0BF0: lw          $t7, 0x31C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X31C);
    // 0x801D0BF4: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0BF8: ldc1        $f16, -0x10B0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X10B0);
    // 0x801D0BFC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801D0C00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D0C04: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x801D0C08: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x801D0C0C: lw          $a2, 0xA4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XA4);
    // 0x801D0C10: lw          $v1, 0xAC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XAC);
    // 0x801D0C14: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801D0C18: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x801D0C1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D0C20: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x801D0C24: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x801D0C28: nop

    // 0x801D0C2C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x801D0C30: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x801D0C34: nop

    // 0x801D0C38: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D0C3C: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D0C40: beq         $v1, $zero, L_801D0C6C
    if (ctx->r3 == 0) {
        // 0x801D0C44: swc1        $f16, 0x64($a0)
        MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
            goto L_801D0C6C;
    }
    // 0x801D0C44: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x801D0C48: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x801D0C4C: subu        $t0, $a2, $v1
    ctx->r8 = SUB32(ctx->r6, ctx->r3);
    // 0x801D0C50: sw          $t0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r8;
    // 0x801D0C54: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x801D0C58: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801D0C5C: ldc1        $f6, -0x10A8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X10A8);
    // 0x801D0C60: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x801D0C64: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x801D0C68: swc1        $f10, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f10.u32l;
L_801D0C6C:
    // 0x801D0C6C: jal         0x801CD1C0
    // 0x801D0C70: nop

    func_801CD1C0_63C010(rdram, ctx);
        goto after_1;
    // 0x801D0C70: nop

    after_1:
    // 0x801D0C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D0C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0C7C: jr          $ra
    // 0x801D0C80: nop

    TRACE_RETURN()
    return;
    // 0x801D0C80: nop

;}
RECOMP_FUNC void func_801D3BF0_642A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3BF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D3BF4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x801D3BF8: sb          $t6, 0x9C($a0)
    MEM_B(0X9C, ctx->r4) = ctx->r14;
    // 0x801D3BFC: jr          $ra
    // 0x801D3C00: sh          $t7, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r15;
    TRACE_RETURN()
    return;
    // 0x801D3C00: sh          $t7, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_801CE924_63D774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CE924: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801CE928: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    // 0x801CE92C: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE930: ldc1        $f6, -0x11B0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X11B0);
    // 0x801CE934: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x801CE938: lui         $at, 0x801F
    ctx->r1 = S32(0X801F << 16);
    // 0x801CE93C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x801CE940: cvt.d.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.d = CVT_D_W(ctx->f4.u32l);
    // 0x801CE944: c.le.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d <= ctx->f6.d;
    // 0x801CE948: nop

    // 0x801CE94C: bc1fl       L_801CE970
    if (!c1cs) {
        // 0x801CE950: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_801CE970;
    }
    goto skip_0;
    // 0x801CE950: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    skip_0:
    // 0x801CE954: ldc1        $f8, -0x11A8($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X11A8);
    // 0x801CE958: add.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f0.d + ctx->f8.d;
    // 0x801CE95C: trunc.w.d   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x801CE960: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801CE964: nop

    // 0x801CE968: sw          $v0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r2;
    // 0x801CE96C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
L_801CE970:
    // 0x801CE970: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801CE974: lwc1        $f18, 0x60($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X60);
    // 0x801CE978: lw          $v1, 0xB0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XB0);
    // 0x801CE97C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x801CE980: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801CE984: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801CE988: nop

    // 0x801CE98C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x801CE990: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x801CE994: addiu       $v1, $v1, -0xFA0
    ctx->r3 = ADD32(ctx->r3, -0XFA0);
    // 0x801CE998: sw          $v1, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->r3;
    // 0x801CE99C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801CE9A0: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x801CE9A4: bgtz        $v1, L_801CE9B0
    if (SIGNED(ctx->r3) > 0) {
        // 0x801CE9A8: swc1        $f16, 0x60($a0)
        MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
            goto L_801CE9B0;
    }
    // 0x801CE9A8: swc1        $f16, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f16.u32l;
    // 0x801CE9AC: sb          $t8, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r24;
L_801CE9B0:
    // 0x801CE9B0: jr          $ra
    // 0x801CE9B4: nop

    TRACE_RETURN()
    return;
    // 0x801CE9B4: nop

;}
RECOMP_FUNC void func_801D0850_63F6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D0854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D0858: lb          $v0, 0x9F($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X9F);
    // 0x801D085C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801D0860: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x801D0864: beq         $t6, $zero, L_801D0874
    if (ctx->r14 == 0) {
        // 0x801D0868: andi        $t7, $v0, 0xFFFE
        ctx->r15 = ctx->r2 & 0XFFFE;
            goto L_801D0874;
    }
    // 0x801D0868: andi        $t7, $v0, 0xFFFE
    ctx->r15 = ctx->r2 & 0XFFFE;
    // 0x801D086C: sb          $t7, 0x9F($a0)
    MEM_B(0X9F, ctx->r4) = ctx->r15;
    // 0x801D0870: sw          $zero, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = 0;
L_801D0874:
    // 0x801D0874: lbu         $t9, 0x9E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9E);
    // 0x801D0878: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x801D087C: sb          $t8, 0xA2($a0)
    MEM_B(0XA2, ctx->r4) = ctx->r24;
    // 0x801D0880: bnel        $t9, $zero, L_801D08B8
    if (ctx->r25 != 0) {
        // 0x801D0884: lw          $v0, 0xB4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0XB4);
            goto L_801D08B8;
    }
    goto skip_0;
    // 0x801D0884: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
    skip_0:
    // 0x801D0888: sb          $t0, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r8;
    // 0x801D088C: jal         0x801D0910
    // 0x801D0890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801D0910_63F760(rdram, ctx);
        goto after_0;
    // 0x801D0890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801D0894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D0898: addiu       $t2, $zero, 0x2710
    ctx->r10 = ADD32(0, 0X2710);
    // 0x801D089C: lb          $t1, 0xC4($a0)
    ctx->r9 = MEM_B(ctx->r4, 0XC4);
    // 0x801D08A0: beql        $t1, $zero, L_801D0904
    if (ctx->r9 == 0) {
        // 0x801D08A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D0904;
    }
    goto skip_1;
    // 0x801D08A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801D08A8: sb          $zero, 0xC4($a0)
    MEM_B(0XC4, ctx->r4) = 0;
    // 0x801D08AC: b           L_801D0900
    // 0x801D08B0: sw          $t2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r10;
        goto L_801D0900;
    // 0x801D08B0: sw          $t2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r10;
    // 0x801D08B4: lw          $v0, 0xB4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB4);
L_801D08B8:
    // 0x801D08B8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801D08BC: slti        $at, $v0, 0x3A99
    ctx->r1 = SIGNED(ctx->r2) < 0X3A99 ? 1 : 0;
    // 0x801D08C0: beql        $at, $zero, L_801D08DC
    if (ctx->r1 == 0) {
        // 0x801D08C4: slti        $at, $v0, 0x4651
        ctx->r1 = SIGNED(ctx->r2) < 0X4651 ? 1 : 0;
            goto L_801D08DC;
    }
    goto skip_2;
    // 0x801D08C4: slti        $at, $v0, 0x4651
    ctx->r1 = SIGNED(ctx->r2) < 0X4651 ? 1 : 0;
    skip_2:
    // 0x801D08C8: jal         0x801D0960
    // 0x801D08CC: sb          $t3, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r11;
    func_801D0960_63F7B0(rdram, ctx);
        goto after_1;
    // 0x801D08CC: sb          $t3, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r11;
    after_1:
    // 0x801D08D0: b           L_801D0904
    // 0x801D08D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D0904;
    // 0x801D08D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D08D8: slti        $at, $v0, 0x4651
    ctx->r1 = SIGNED(ctx->r2) < 0X4651 ? 1 : 0;
L_801D08DC:
    // 0x801D08DC: beq         $at, $zero, L_801D08F8
    if (ctx->r1 == 0) {
        // 0x801D08E0: addiu       $t5, $zero, 0x4
        ctx->r13 = ADD32(0, 0X4);
            goto L_801D08F8;
    }
    // 0x801D08E0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x801D08E4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x801D08E8: jal         0x801D09AC
    // 0x801D08EC: sb          $t4, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r12;
    func_801D09AC_63F7FC(rdram, ctx);
        goto after_2;
    // 0x801D08EC: sb          $t4, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r12;
    after_2:
    // 0x801D08F0: b           L_801D0904
    // 0x801D08F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801D0904;
    // 0x801D08F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D08F8:
    // 0x801D08F8: jal         0x801D09F8
    // 0x801D08FC: sb          $t5, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r13;
    func_801D09F8_63F848(rdram, ctx);
        goto after_3;
    // 0x801D08FC: sb          $t5, 0x9D($a0)
    MEM_B(0X9D, ctx->r4) = ctx->r13;
    after_3:
L_801D0900:
    // 0x801D0900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801D0904:
    // 0x801D0904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D0908: jr          $ra
    // 0x801D090C: nop

    TRACE_RETURN()
    return;
    // 0x801D090C: nop

;}
