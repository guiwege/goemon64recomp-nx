#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801D85C4_6039A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D85C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D85C8: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D85CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x801D85D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801D85D4: lbu         $v1, 0x160($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X160);
    // 0x801D85D8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x801D85DC: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D85E0: blez        $v1, L_801D85FC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x801D85E4: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_801D85FC;
    }
    // 0x801D85E4: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x801D85E8: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x801D85EC: bne         $t7, $zero, L_801D85FC
    if (ctx->r15 != 0) {
        // 0x801D85F0: sb          $t6, 0x20($v0)
        MEM_B(0X20, ctx->r2) = ctx->r14;
            goto L_801D85FC;
    }
    // 0x801D85F0: sb          $t6, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r14;
    // 0x801D85F4: sb          $zero, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = 0;
    // 0x801D85F8: sb          $zero, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = 0;
L_801D85FC:
    // 0x801D85FC: lbu         $a0, 0x1E($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1E);
    // 0x801D8600: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x801D8604: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x801D8608: beq         $a0, $zero, L_801D8624
    if (ctx->r4 == 0) {
        // 0x801D860C: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_801D8624;
    }
    // 0x801D860C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x801D8610: beq         $a0, $at, L_801D8660
    if (ctx->r4 == ctx->r1) {
        // 0x801D8614: lui         $t6, 0x8016
        ctx->r14 = S32(0X8016 << 16);
            goto L_801D8660;
    }
    // 0x801D8614: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801D8618: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D861C: beq         $v1, $at, L_801D86A0
    if (ctx->r3 == ctx->r1) {
        // 0x801D8620: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_801D86A0;
    }
    // 0x801D8620: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_801D8624:
    // 0x801D8624: sb          $zero, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = 0;
    // 0x801D8628: lw          $t8, -0x3A38($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3A38);
    // 0x801D862C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x801D8630: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x801D8634: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801D8638: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801D863C: lhu         $t1, -0x4F84($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F84);
    // 0x801D8640: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x801D8644: addiu       $t5, $zero, 0x12
    ctx->r13 = ADD32(0, 0X12);
    // 0x801D8648: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x801D864C: beq         $t2, $zero, L_801D86A4
    if (ctx->r10 == 0) {
        // 0x801D8650: nop
    
            goto L_801D86A4;
    }
    // 0x801D8650: nop

    // 0x801D8654: sb          $t4, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r12;
    // 0x801D8658: jr          $ra
    // 0x801D865C: sb          $t5, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r13;
    TRACE_RETURN()
    return;
    // 0x801D865C: sb          $t5, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r13;
L_801D8660:
    // 0x801D8660: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801D8664: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x801D8668: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x801D866C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801D8670: lui         $t9, 0x4
    ctx->r25 = S32(0X4 << 16);
    // 0x801D8674: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801D8678: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x801D867C: lhu         $t9, -0x4F84($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X4F84);
    // 0x801D8680: addiu       $t1, $a0, 0x1
    ctx->r9 = ADD32(ctx->r4, 0X1);
    // 0x801D8684: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x801D8688: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x801D868C: beq         $t0, $zero, L_801D86A4
    if (ctx->r8 == 0) {
        // 0x801D8690: nop
    
            goto L_801D86A4;
    }
    // 0x801D8690: nop

    // 0x801D8694: sb          $t1, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r9;
    // 0x801D8698: jr          $ra
    // 0x801D869C: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
    TRACE_RETURN()
    return;
    // 0x801D869C: sb          $t2, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r10;
L_801D86A0:
    // 0x801D86A0: sb          $t3, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = ctx->r11;
L_801D86A4:
    // 0x801D86A4: jr          $ra
    // 0x801D86A8: nop

    TRACE_RETURN()
    return;
    // 0x801D86A8: nop

    // 0x801D86AC: jr          $ra
    // 0x801D86B0: nop

    TRACE_RETURN()
    return;
    // 0x801D86B0: nop

;}
RECOMP_FUNC void func_801D40A0_5FF480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D40A0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x801D40A4: lw          $t6, -0x70A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X70A0);
    // 0x801D40A8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x801D40AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x801D40B0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801D40B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D40B8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801D40BC: bne         $t6, $zero, L_801D40CC
    if (ctx->r14 != 0) {
        // 0x801D40C0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_801D40CC;
    }
    // 0x801D40C0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801D40C4: b           L_801D4178
    // 0x801D40C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4178;
    // 0x801D40C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D40CC:
    // 0x801D40CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x801D40D0: lw          $t7, -0x709C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X709C);
    // 0x801D40D4: bne         $t7, $zero, L_801D40E4
    if (ctx->r15 != 0) {
        // 0x801D40D8: nop
    
            goto L_801D40E4;
    }
    // 0x801D40D8: nop

    // 0x801D40DC: b           L_801D4178
    // 0x801D40E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4178;
    // 0x801D40E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D40E4:
    // 0x801D40E4: bne         $a2, $zero, L_801D40F4
    if (ctx->r6 != 0) {
        // 0x801D40E8: nop
    
            goto L_801D40F4;
    }
    // 0x801D40E8: nop

    // 0x801D40EC: b           L_801D4178
    // 0x801D40F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4178;
    // 0x801D40F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801D40F4:
    // 0x801D40F4: bnel        $a3, $zero, L_801D4108
    if (ctx->r7 != 0) {
        // 0x801D40F8: lw          $v1, 0x18($a2)
        ctx->r3 = MEM_W(ctx->r6, 0X18);
            goto L_801D4108;
    }
    goto skip_0;
    // 0x801D40F8: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    skip_0:
    // 0x801D40FC: b           L_801D4178
    // 0x801D4100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801D4178;
    // 0x801D4100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4104: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
L_801D4108:
    // 0x801D4108: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D410C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801D4110: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D4114: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D4118: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801D411C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801D4120: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D4124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801D4128: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x801D412C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801D4130: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D4134: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x801D4138: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D413C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x801D4140: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x801D4144: jal         0x8002A7BC
    // 0x801D4148: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    func_8002A7BC_2B3BC(rdram, ctx);
        goto after_0;
    // 0x801D4148: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x801D414C: lh          $t8, 0x54($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X54);
    // 0x801D4150: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D4154: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x801D4158: bne         $t8, $at, L_801D4178
    if (ctx->r24 != ctx->r1) {
        // 0x801D415C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D4178;
    }
    // 0x801D415C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D4160: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D4164: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801D4168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D416C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D4170: b           L_801D4178
    // 0x801D4174: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
        goto L_801D4178;
    // 0x801D4174: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
L_801D4178:
    // 0x801D4178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D417C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x801D4180: jr          $ra
    // 0x801D4184: nop

    TRACE_RETURN()
    return;
    // 0x801D4184: nop

;}
RECOMP_FUNC void func_801F1B78_61CF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1B80: lw          $t6, 0xD4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD4);
    // 0x801F1B84: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F1B88: bgtz        $t7, L_801F1B98
    if (SIGNED(ctx->r15) > 0) {
        // 0x801F1B8C: sw          $t7, 0xD4($a0)
        MEM_W(0XD4, ctx->r4) = ctx->r15;
            goto L_801F1B98;
    }
    // 0x801F1B8C: sw          $t7, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r15;
    // 0x801F1B90: jal         0x801F1D78
    // 0x801F1B94: nop

    func_801F1D78_61D158(rdram, ctx);
        goto after_0;
    // 0x801F1B94: nop

    after_0:
L_801F1B98:
    // 0x801F1B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F1B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1BA0: jr          $ra
    // 0x801F1BA4: nop

    TRACE_RETURN()
    return;
    // 0x801F1BA4: nop

;}
RECOMP_FUNC void func_801F4654_61FA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4654: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F4658: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F465C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4664: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F4668: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F466C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F4670: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801F4674: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F4678: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F467C: lwc1        $f6, 0x94($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X94);
    // 0x801F4680: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F4684: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801F4688: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801F468C: lwc1        $f4, 0x28($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X28);
    // 0x801F4690: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4694: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801F4698: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x801F469C: nop

    // 0x801F46A0: bc1f        L_801F46CC
    if (!c1cs) {
        // 0x801F46A4: nop
    
            goto L_801F46CC;
    }
    // 0x801F46A4: nop

    // 0x801F46A8: lw          $t9, 0xE4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XE4);
    // 0x801F46AC: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x801F46B0: beq         $at, $zero, L_801F46CC
    if (ctx->r1 == 0) {
        // 0x801F46B4: nop
    
            goto L_801F46CC;
    }
    // 0x801F46B4: nop

    // 0x801F46B8: lw          $t0, 0x174($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X174);
    // 0x801F46BC: bne         $t0, $zero, L_801F46CC
    if (ctx->r8 != 0) {
        // 0x801F46C0: nop
    
            goto L_801F46CC;
    }
    // 0x801F46C0: nop

    // 0x801F46C4: jal         0x801F7004
    // 0x801F46C8: nop

    func_801F7004_6223E4(rdram, ctx);
        goto after_0;
    // 0x801F46C8: nop

    after_0:
L_801F46CC:
    // 0x801F46CC: jal         0x801F76D0
    // 0x801F46D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F46D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801F46D4: jal         0x801D5B70
    // 0x801F46D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5B70_600F50(rdram, ctx);
        goto after_2;
    // 0x801F46D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F46DC: jal         0x801F6884
    // 0x801F46E0: nop

    func_801F6884_621C64(rdram, ctx);
        goto after_3;
    // 0x801F46E0: nop

    after_3:
    // 0x801F46E4: jal         0x801F732C
    // 0x801F46E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F732C_62270C(rdram, ctx);
        goto after_4;
    // 0x801F46E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F46EC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801F46F0: jal         0x801D2F40
    // 0x801F46F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D2F40_5FE320(rdram, ctx);
        goto after_5;
    // 0x801F46F4: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_5:
    // 0x801F46F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801F46FC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x801F4700: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x801F4704: nop

    // 0x801F4708: bc1fl       L_801F4770
    if (!c1cs) {
        // 0x801F470C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F4770;
    }
    goto skip_0;
    // 0x801F470C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F4710: lw          $t2, 0x34($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X34);
    // 0x801F4714: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4718: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x801F471C: bne         $s0, $t2, L_801F4734
    if (ctx->r16 != ctx->r10) {
        // 0x801F4720: addiu       $a0, $a0, 0x5AD4
        ctx->r4 = ADD32(ctx->r4, 0X5AD4);
            goto L_801F4734;
    }
    // 0x801F4720: addiu       $a0, $a0, 0x5AD4
    ctx->r4 = ADD32(ctx->r4, 0X5AD4);
    // 0x801F4724: jal         0x8003521C
    // 0x801F4728: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801F4728: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    after_6:
    // 0x801F472C: b           L_801F4770
    // 0x801F4730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F4770;
    // 0x801F4730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4734:
    // 0x801F4734: lw          $t4, 0xE4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE4);
    // 0x801F4738: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x801F473C: bne         $at, $zero, L_801F4764
    if (ctx->r1 != 0) {
        // 0x801F4740: nop
    
            goto L_801F4764;
    }
    // 0x801F4740: nop

    // 0x801F4744: sw          $zero, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = 0;
    // 0x801F4748: jal         0x801F703C
    // 0x801F474C: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    func_801F703C_62241C(rdram, ctx);
        goto after_7;
    // 0x801F474C: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    after_7:
    // 0x801F4750: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4754: jal         0x8003521C
    // 0x801F4758: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    func_8003521C_35E1C(rdram, ctx);
        goto after_8;
    // 0x801F4758: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    after_8:
    // 0x801F475C: b           L_801F4770
    // 0x801F4760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F4770;
    // 0x801F4760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4764:
    // 0x801F4764: jal         0x801F0540
    // 0x801F4768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F0540_61B920(rdram, ctx);
        goto after_9;
    // 0x801F4768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801F476C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4770:
    // 0x801F4770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4774: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F4778: jr          $ra
    // 0x801F477C: nop

    TRACE_RETURN()
    return;
    // 0x801F477C: nop

;}
RECOMP_FUNC void func_801D3F38_5FF318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3F38: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801D3F3C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D3F40: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D3F44: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x801D3F48: andi        $v0, $a2, 0x3FF
    ctx->r2 = ctx->r6 & 0X3FF;
    // 0x801D3F4C: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x801D3F50: andi        $t8, $a0, 0x3FF
    ctx->r24 = ctx->r4 & 0X3FF;
    // 0x801D3F54: subu        $t3, $v0, $t8
    ctx->r11 = SUB32(ctx->r2, ctx->r24);
    // 0x801D3F58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D3F5C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801D3F60: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x801D3F64: bgez        $t3, L_801D3F70
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801D3F68: or          $t2, $t3, $zero
        ctx->r10 = ctx->r11 | 0;
            goto L_801D3F70;
    }
    // 0x801D3F68: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
    // 0x801D3F6C: addiu       $t2, $t3, 0x400
    ctx->r10 = ADD32(ctx->r11, 0X400);
L_801D3F70:
    // 0x801D3F70: slti        $at, $t2, 0x200
    ctx->r1 = SIGNED(ctx->r10) < 0X200 ? 1 : 0;
    // 0x801D3F74: bne         $at, $zero, L_801D3F80
    if (ctx->r1 != 0) {
        // 0x801D3F78: nop
    
            goto L_801D3F80;
    }
    // 0x801D3F78: nop

    // 0x801D3F7C: negu        $t0, $t1
    ctx->r8 = SUB32(0, ctx->r9);
L_801D3F80:
    // 0x801D3F80: bltz        $t0, L_801D3FAC
    if (SIGNED(ctx->r8) < 0) {
        // 0x801D3F84: addu        $a0, $a0, $t0
        ctx->r4 = ADD32(ctx->r4, ctx->r8);
            goto L_801D3FAC;
    }
    // 0x801D3F84: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x801D3F88: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801D3F8C: bne         $at, $zero, L_801D3FC0
    if (ctx->r1 != 0) {
        // 0x801D3F90: subu        $t9, $a0, $v0
        ctx->r25 = SUB32(ctx->r4, ctx->r2);
            goto L_801D3FC0;
    }
    // 0x801D3F90: subu        $t9, $a0, $v0
    ctx->r25 = SUB32(ctx->r4, ctx->r2);
    // 0x801D3F94: slti        $at, $t9, 0x201
    ctx->r1 = SIGNED(ctx->r25) < 0X201 ? 1 : 0;
    // 0x801D3F98: beql        $at, $zero, L_801D3FC4
    if (ctx->r1 == 0) {
        // 0x801D3F9C: sh          $a0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r4;
            goto L_801D3FC4;
    }
    goto skip_0;
    // 0x801D3F9C: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    skip_0:
    // 0x801D3FA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D3FA4: b           L_801D3FC0
    // 0x801D3FA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_801D3FC0;
    // 0x801D3FA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801D3FAC:
    // 0x801D3FAC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D3FB0: bnel        $at, $zero, L_801D3FC4
    if (ctx->r1 != 0) {
        // 0x801D3FB4: sh          $a0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r4;
            goto L_801D3FC4;
    }
    goto skip_1;
    // 0x801D3FB4: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    skip_1:
    // 0x801D3FB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801D3FBC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801D3FC0:
    // 0x801D3FC0: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
L_801D3FC4:
    // 0x801D3FC4: jr          $ra
    // 0x801D3FC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3FC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801F6C4C_62202C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6C4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F6C50: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801F6C54: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801F6C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F6C5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F6C60: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801F6C64: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801F6C68: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F6C6C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801F6C70: lw          $s0, 0x1D8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1D8);
    // 0x801F6C74: beql        $s0, $zero, L_801F6FF4
    if (ctx->r16 == 0) {
        // 0x801F6C78: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F6FF4;
    }
    goto skip_0;
    // 0x801F6C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801F6C7C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x801F6C80: beql        $v0, $zero, L_801F6FF4
    if (ctx->r2 == 0) {
        // 0x801F6C84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801F6FF4;
    }
    goto skip_1;
    // 0x801F6C84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801F6C88: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x801F6C8C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x801F6C90: lw          $v1, 0x64($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X64);
    // 0x801F6C94: andi        $t7, $v1, 0x1000
    ctx->r15 = ctx->r3 & 0X1000;
    // 0x801F6C98: beql        $t7, $zero, L_801F6CA8
    if (ctx->r15 == 0) {
        // 0x801F6C9C: lw          $t8, 0x28($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X28);
            goto L_801F6CA8;
    }
    goto skip_2;
    // 0x801F6C9C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    skip_2:
    // 0x801F6CA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x801F6CA4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
L_801F6CA8:
    // 0x801F6CA8: beq         $t8, $zero, L_801F6FE8
    if (ctx->r24 == 0) {
        // 0x801F6CAC: nop
    
            goto L_801F6FE8;
    }
    // 0x801F6CAC: nop

    // 0x801F6CB0: sw          $v0, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r2;
    // 0x801F6CB4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x801F6CB8: lbu         $t0, 0x4C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4C);
    // 0x801F6CBC: addiu       $t1, $t0, -0x32
    ctx->r9 = ADD32(ctx->r8, -0X32);
    // 0x801F6CC0: sltiu       $at, $t1, 0x2A
    ctx->r1 = ctx->r9 < 0X2A ? 1 : 0;
    // 0x801F6CC4: beq         $at, $zero, L_801F6CE0
    if (ctx->r1 == 0) {
        // 0x801F6CC8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_801F6CE0;
    }
    // 0x801F6CC8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x801F6CCC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F6CD0: addu        $at, $at, $t1
    gpr jr_addend_801F6CD8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801F6CD4: lw          $t1, -0x1950($at)
    ctx->r9 = ADD32(ctx->r1, -0X1950);
    // 0x801F6CD8: jr          $t1
    // 0x801F6CDC: nop

    switch (jr_addend_801F6CD8 >> 2) {
        case 0: goto L_801F6D34; break;
        case 1: goto L_801F6CE0; break;
        case 2: goto L_801F6CE0; break;
        case 3: goto L_801F6CE0; break;
        case 4: goto L_801F6CE0; break;
        case 5: goto L_801F6CE0; break;
        case 6: goto L_801F6CE0; break;
        case 7: goto L_801F6CE0; break;
        case 8: goto L_801F6CE0; break;
        case 9: goto L_801F6CE0; break;
        case 10: goto L_801F6CE0; break;
        case 11: goto L_801F6DF4; break;
        case 12: goto L_801F6EAC; break;
        case 13: goto L_801F6CE0; break;
        case 14: goto L_801F6CE0; break;
        case 15: goto L_801F6CE0; break;
        case 16: goto L_801F6CE0; break;
        case 17: goto L_801F6CE0; break;
        case 18: goto L_801F6CE0; break;
        case 19: goto L_801F6CE0; break;
        case 20: goto L_801F6E50; break;
        case 21: goto L_801F6CE0; break;
        case 22: goto L_801F6CE0; break;
        case 23: goto L_801F6CE0; break;
        case 24: goto L_801F6CE0; break;
        case 25: goto L_801F6CE0; break;
        case 26: goto L_801F6CE0; break;
        case 27: goto L_801F6CE0; break;
        case 28: goto L_801F6CE0; break;
        case 29: goto L_801F6CE0; break;
        case 30: goto L_801F6CE0; break;
        case 31: goto L_801F6D94; break;
        case 32: goto L_801F6CE0; break;
        case 33: goto L_801F6CE0; break;
        case 34: goto L_801F6CE0; break;
        case 35: goto L_801F6CE0; break;
        case 36: goto L_801F6CE0; break;
        case 37: goto L_801F6CE0; break;
        case 38: goto L_801F6CE0; break;
        case 39: goto L_801F6CE0; break;
        case 40: goto L_801F6EF4; break;
        case 41: goto L_801F6DFC; break;
        default: switch_error(__func__, 0x801F6CD8, 0x8020E6B0);
    }
    // 0x801F6CDC: nop

L_801F6CE0:
    // 0x801F6CE0: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x801F6CE4: bne         $t2, $zero, L_801F6D24
    if (ctx->r10 != 0) {
        // 0x801F6CE8: nop
    
            goto L_801F6D24;
    }
    // 0x801F6CE8: nop

    // 0x801F6CEC: jal         0x801D5938
    // 0x801F6CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_0;
    // 0x801F6CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801F6CF4: jal         0x801F705C
    // 0x801F6CF8: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_1;
    // 0x801F6CF8: nop

    after_1:
    // 0x801F6CFC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801F6D00: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6D04: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    // 0x801F6D08: addiu       $a1, $a1, 0x45E8
    ctx->r5 = ADD32(ctx->r5, 0X45E8);
    // 0x801F6D0C: jal         0x8003522C
    // 0x801F6D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801F6D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F6D14: jal         0x801CEE80
    // 0x801F6D18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_3;
    // 0x801F6D18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x801F6D1C: b           L_801F6F2C
    // 0x801F6D20: nop

        goto L_801F6F2C;
    // 0x801F6D20: nop

L_801F6D24:
    // 0x801F6D24: jal         0x801D3894
    // 0x801F6D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_4;
    // 0x801F6D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801F6D2C: b           L_801F6FF4
    // 0x801F6D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F6FF4;
    // 0x801F6D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6D34:
    // 0x801F6D34: andi        $t4, $v1, 0x9
    ctx->r12 = ctx->r3 & 0X9;
    // 0x801F6D38: bne         $t4, $zero, L_801F6D84
    if (ctx->r12 != 0) {
        // 0x801F6D3C: nop
    
            goto L_801F6D84;
    }
    // 0x801F6D3C: nop

    // 0x801F6D40: lw          $t5, 0xE4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XE4);
    // 0x801F6D44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6D48: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x801F6D4C: jal         0x801D5938
    // 0x801F6D50: sw          $t6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r14;
    func_801D5938_600D18(rdram, ctx);
        goto after_5;
    // 0x801F6D50: sw          $t6, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r14;
    after_5:
    // 0x801F6D54: jal         0x801F705C
    // 0x801F6D58: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_6;
    // 0x801F6D58: nop

    after_6:
    // 0x801F6D5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801F6D60: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6D64: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    // 0x801F6D68: addiu       $a1, $a1, 0x45A0
    ctx->r5 = ADD32(ctx->r5, 0X45A0);
    // 0x801F6D6C: jal         0x8003522C
    // 0x801F6D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_7;
    // 0x801F6D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801F6D74: jal         0x801CEE80
    // 0x801F6D78: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_8;
    // 0x801F6D78: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x801F6D7C: b           L_801F6F2C
    // 0x801F6D80: nop

        goto L_801F6F2C;
    // 0x801F6D80: nop

L_801F6D84:
    // 0x801F6D84: jal         0x801D3894
    // 0x801F6D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_9;
    // 0x801F6D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x801F6D8C: b           L_801F6FF4
    // 0x801F6D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F6FF4;
    // 0x801F6D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6D94:
    // 0x801F6D94: andi        $t8, $v1, 0x12
    ctx->r24 = ctx->r3 & 0X12;
    // 0x801F6D98: bne         $t8, $zero, L_801F6DE4
    if (ctx->r24 != 0) {
        // 0x801F6D9C: nop
    
            goto L_801F6DE4;
    }
    // 0x801F6D9C: nop

    // 0x801F6DA0: lw          $t9, 0xE4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XE4);
    // 0x801F6DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6DA8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x801F6DAC: jal         0x801D5938
    // 0x801F6DB0: sw          $t0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r8;
    func_801D5938_600D18(rdram, ctx);
        goto after_10;
    // 0x801F6DB0: sw          $t0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r8;
    after_10:
    // 0x801F6DB4: jal         0x801F705C
    // 0x801F6DB8: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_11;
    // 0x801F6DB8: nop

    after_11:
    // 0x801F6DBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F6DC0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6DC4: sw          $t1, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r9;
    // 0x801F6DC8: addiu       $a1, $a1, 0x45A0
    ctx->r5 = ADD32(ctx->r5, 0X45A0);
    // 0x801F6DCC: jal         0x8003522C
    // 0x801F6DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_12;
    // 0x801F6DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x801F6DD4: jal         0x801CEE80
    // 0x801F6DD8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_13;
    // 0x801F6DD8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_13:
    // 0x801F6DDC: b           L_801F6F2C
    // 0x801F6DE0: nop

        goto L_801F6F2C;
    // 0x801F6DE0: nop

L_801F6DE4:
    // 0x801F6DE4: jal         0x801D3894
    // 0x801F6DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_14;
    // 0x801F6DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x801F6DEC: b           L_801F6FF4
    // 0x801F6DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F6FF4;
    // 0x801F6DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6DF4:
    // 0x801F6DF4: jal         0x801CEE80
    // 0x801F6DF8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_15;
    // 0x801F6DF8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
L_801F6DFC:
    // 0x801F6DFC: jal         0x801F705C
    // 0x801F6E00: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_16;
    // 0x801F6E00: nop

    after_16:
    // 0x801F6E04: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x801F6E08: sw          $t2, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r10;
    // 0x801F6E0C: jal         0x801D5938
    // 0x801F6E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_17;
    // 0x801F6E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x801F6E14: jal         0x801F71DC
    // 0x801F6E18: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_18;
    // 0x801F6E18: nop

    after_18:
    // 0x801F6E1C: bne         $v0, $zero, L_801F6E3C
    if (ctx->r2 != 0) {
        // 0x801F6E20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6E3C;
    }
    // 0x801F6E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6E24: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6E28: addiu       $a1, $a1, 0x4780
    ctx->r5 = ADD32(ctx->r5, 0X4780);
    // 0x801F6E2C: jal         0x8003522C
    // 0x801F6E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_19;
    // 0x801F6E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x801F6E34: b           L_801F6F2C
    // 0x801F6E38: nop

        goto L_801F6F2C;
    // 0x801F6E38: nop

L_801F6E3C:
    // 0x801F6E3C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6E40: jal         0x8003522C
    // 0x801F6E44: addiu       $a1, $a1, 0x4C0C
    ctx->r5 = ADD32(ctx->r5, 0X4C0C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_20;
    // 0x801F6E44: addiu       $a1, $a1, 0x4C0C
    ctx->r5 = ADD32(ctx->r5, 0X4C0C);
    after_20:
    // 0x801F6E48: b           L_801F6F2C
    // 0x801F6E4C: nop

        goto L_801F6F2C;
    // 0x801F6E4C: nop

L_801F6E50:
    // 0x801F6E50: jal         0x801CEE80
    // 0x801F6E54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_21;
    // 0x801F6E54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_21:
    // 0x801F6E58: jal         0x801F705C
    // 0x801F6E5C: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_22;
    // 0x801F6E5C: nop

    after_22:
    // 0x801F6E60: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x801F6E64: sw          $t3, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r11;
    // 0x801F6E68: jal         0x801D5938
    // 0x801F6E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_23;
    // 0x801F6E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x801F6E70: jal         0x801F71DC
    // 0x801F6E74: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_24;
    // 0x801F6E74: nop

    after_24:
    // 0x801F6E78: bne         $v0, $zero, L_801F6E98
    if (ctx->r2 != 0) {
        // 0x801F6E7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6E98;
    }
    // 0x801F6E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6E80: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6E84: addiu       $a1, $a1, 0x47E0
    ctx->r5 = ADD32(ctx->r5, 0X47E0);
    // 0x801F6E88: jal         0x8003522C
    // 0x801F6E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_25;
    // 0x801F6E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x801F6E90: b           L_801F6F2C
    // 0x801F6E94: nop

        goto L_801F6F2C;
    // 0x801F6E94: nop

L_801F6E98:
    // 0x801F6E98: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6E9C: jal         0x8003522C
    // 0x801F6EA0: addiu       $a1, $a1, 0x4C74
    ctx->r5 = ADD32(ctx->r5, 0X4C74);
    func_8003522C_35E2C(rdram, ctx);
        goto after_26;
    // 0x801F6EA0: addiu       $a1, $a1, 0x4C74
    ctx->r5 = ADD32(ctx->r5, 0X4C74);
    after_26:
    // 0x801F6EA4: b           L_801F6F2C
    // 0x801F6EA8: nop

        goto L_801F6F2C;
    // 0x801F6EA8: nop

L_801F6EAC:
    // 0x801F6EAC: lw          $t4, 0xE0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XE0);
    // 0x801F6EB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F6EB4: beq         $t4, $at, L_801F6F2C
    if (ctx->r12 == ctx->r1) {
        // 0x801F6EB8: nop
    
            goto L_801F6F2C;
    }
    // 0x801F6EB8: nop

    // 0x801F6EBC: jal         0x801CEE80
    // 0x801F6EC0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_27;
    // 0x801F6EC0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_27:
    // 0x801F6EC4: jal         0x801F705C
    // 0x801F6EC8: nop

    func_801F705C_62243C(rdram, ctx);
        goto after_28;
    // 0x801F6EC8: nop

    after_28:
    // 0x801F6ECC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801F6ED0: sw          $t5, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r13;
    // 0x801F6ED4: jal         0x801D5938
    // 0x801F6ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_29;
    // 0x801F6ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x801F6EDC: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6EE0: addiu       $a1, $a1, 0x56C8
    ctx->r5 = ADD32(ctx->r5, 0X56C8);
    // 0x801F6EE4: jal         0x8003522C
    // 0x801F6EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_30;
    // 0x801F6EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x801F6EEC: b           L_801F6F2C
    // 0x801F6EF0: nop

        goto L_801F6F2C;
    // 0x801F6EF0: nop

L_801F6EF4:
    // 0x801F6EF4: lw          $t6, 0xE0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XE0);
    // 0x801F6EF8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801F6EFC: beq         $t6, $at, L_801F6F2C
    if (ctx->r14 == ctx->r1) {
        // 0x801F6F00: nop
    
            goto L_801F6F2C;
    }
    // 0x801F6F00: nop

    // 0x801F6F04: jal         0x801F701C
    // 0x801F6F08: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_31;
    // 0x801F6F08: nop

    after_31:
    // 0x801F6F0C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x801F6F10: sw          $t7, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r15;
    // 0x801F6F14: jal         0x801D5938
    // 0x801F6F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_32;
    // 0x801F6F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x801F6F1C: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6F20: addiu       $a1, $a1, 0x6624
    ctx->r5 = ADD32(ctx->r5, 0X6624);
    // 0x801F6F24: jal         0x8003522C
    // 0x801F6F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_33;
    // 0x801F6F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
L_801F6F2C:
    // 0x801F6F2C: jal         0x801D36CC
    // 0x801F6F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_34;
    // 0x801F6F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x801F6F34: jal         0x801D3954
    // 0x801F6F38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_801D3954_5FED34(rdram, ctx);
        goto after_35;
    // 0x801F6F38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_35:
    // 0x801F6F3C: slti        $at, $v0, 0x4B1
    ctx->r1 = SIGNED(ctx->r2) < 0X4B1 ? 1 : 0;
    // 0x801F6F40: beq         $at, $zero, L_801F6F64
    if (ctx->r1 == 0) {
        // 0x801F6F44: nop
    
            goto L_801F6F64;
    }
    // 0x801F6F44: nop

    // 0x801F6F48: jal         0x801F71DC
    // 0x801F6F4C: nop

    func_801F71DC_6225BC(rdram, ctx);
        goto after_36;
    // 0x801F6F4C: nop

    after_36:
    // 0x801F6F50: bne         $v0, $zero, L_801F6F64
    if (ctx->r2 != 0) {
        // 0x801F6F54: lui         $t9, 0x8021
        ctx->r25 = S32(0X8021 << 16);
            goto L_801F6F64;
    }
    // 0x801F6F54: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801F6F58: lw          $t9, -0x1130($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1130);
    // 0x801F6F5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F6F60: sb          $t8, 0x2C5($t9)
    MEM_B(0X2C5, ctx->r25) = ctx->r24;
L_801F6F64:
    // 0x801F6F64: jal         0x801D3A18
    // 0x801F6F68: nop

    func_801D3A18_5FEDF8(rdram, ctx);
        goto after_37;
    // 0x801F6F68: nop

    after_37:
    // 0x801F6F6C: beq         $v0, $zero, L_801F6FE4
    if (ctx->r2 == 0) {
        // 0x801F6F70: lw          $t0, 0x28($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X28);
            goto L_801F6FE4;
    }
    // 0x801F6F70: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801F6F74: lbu         $t1, 0x4C($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X4C);
    // 0x801F6F78: addiu       $t2, $t1, -0x32
    ctx->r10 = ADD32(ctx->r9, -0X32);
    // 0x801F6F7C: sltiu       $at, $t2, 0x20
    ctx->r1 = ctx->r10 < 0X20 ? 1 : 0;
    // 0x801F6F80: beq         $at, $zero, L_801F6FDC
    if (ctx->r1 == 0) {
        // 0x801F6F84: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_801F6FDC;
    }
    // 0x801F6F84: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x801F6F88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801F6F8C: addu        $at, $at, $t2
    gpr jr_addend_801F6F94 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801F6F90: lw          $t2, -0x18A8($at)
    ctx->r10 = ADD32(ctx->r1, -0X18A8);
    // 0x801F6F94: jr          $t2
    // 0x801F6F98: nop

    switch (jr_addend_801F6F94 >> 2) {
        case 0: goto L_801F6F9C; break;
        case 1: goto L_801F6F9C; break;
        case 2: goto L_801F6FDC; break;
        case 3: goto L_801F6FDC; break;
        case 4: goto L_801F6FDC; break;
        case 5: goto L_801F6FDC; break;
        case 6: goto L_801F6FDC; break;
        case 7: goto L_801F6FDC; break;
        case 8: goto L_801F6FDC; break;
        case 9: goto L_801F6FDC; break;
        case 10: goto L_801F6F9C; break;
        case 11: goto L_801F6FDC; break;
        case 12: goto L_801F6FDC; break;
        case 13: goto L_801F6FDC; break;
        case 14: goto L_801F6FDC; break;
        case 15: goto L_801F6FDC; break;
        case 16: goto L_801F6FDC; break;
        case 17: goto L_801F6FDC; break;
        case 18: goto L_801F6FDC; break;
        case 19: goto L_801F6FDC; break;
        case 20: goto L_801F6FDC; break;
        case 21: goto L_801F6FDC; break;
        case 22: goto L_801F6FDC; break;
        case 23: goto L_801F6FDC; break;
        case 24: goto L_801F6FDC; break;
        case 25: goto L_801F6FDC; break;
        case 26: goto L_801F6FDC; break;
        case 27: goto L_801F6FDC; break;
        case 28: goto L_801F6FDC; break;
        case 29: goto L_801F6FDC; break;
        case 30: goto L_801F6F9C; break;
        case 31: goto L_801F6F9C; break;
        default: switch_error(__func__, 0x801F6F94, 0x8020E758);
    }
    // 0x801F6F98: nop

L_801F6F9C:
    // 0x801F6F9C: jal         0x801D5938
    // 0x801F6FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5938_600D18(rdram, ctx);
        goto after_38;
    // 0x801F6FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x801F6FA4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x801F6FA8: jal         0x801F71DC
    // 0x801F6FAC: sw          $zero, 0x34($t3)
    MEM_W(0X34, ctx->r11) = 0;
    func_801F71DC_6225BC(rdram, ctx);
        goto after_39;
    // 0x801F6FAC: sw          $zero, 0x34($t3)
    MEM_W(0X34, ctx->r11) = 0;
    after_39:
    // 0x801F6FB0: bne         $v0, $zero, L_801F6FD0
    if (ctx->r2 != 0) {
        // 0x801F6FB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F6FD0;
    }
    // 0x801F6FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F6FB8: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6FBC: addiu       $a1, $a1, 0x4780
    ctx->r5 = ADD32(ctx->r5, 0X4780);
    // 0x801F6FC0: jal         0x8003522C
    // 0x801F6FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8003522C_35E2C(rdram, ctx);
        goto after_40;
    // 0x801F6FC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x801F6FC8: b           L_801F6FDC
    // 0x801F6FCC: nop

        goto L_801F6FDC;
    // 0x801F6FCC: nop

L_801F6FD0:
    // 0x801F6FD0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801F6FD4: jal         0x8003522C
    // 0x801F6FD8: addiu       $a1, $a1, 0x4C0C
    ctx->r5 = ADD32(ctx->r5, 0X4C0C);
    func_8003522C_35E2C(rdram, ctx);
        goto after_41;
    // 0x801F6FD8: addiu       $a1, $a1, 0x4C0C
    ctx->r5 = ADD32(ctx->r5, 0X4C0C);
    after_41:
L_801F6FDC:
    // 0x801F6FDC: jal         0x801F701C
    // 0x801F6FE0: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_42;
    // 0x801F6FE0: nop

    after_42:
L_801F6FE4:
    // 0x801F6FE4: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
L_801F6FE8:
    // 0x801F6FE8: jal         0x801D3894
    // 0x801F6FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_43;
    // 0x801F6FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x801F6FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F6FF4:
    // 0x801F6FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F6FF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F6FFC: jr          $ra
    // 0x801F7000: nop

    TRACE_RETURN()
    return;
    // 0x801F7000: nop

;}
RECOMP_FUNC void func_801FA9A4_625D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA9A4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FA9A8: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FA9AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA9B0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FA9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA9B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FA9BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA9C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801FA9C4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FA9C8: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801FA9CC: lw          $a3, 0x14($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X14);
    // 0x801FA9D0: swc1        $f14, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f14.u32l;
    // 0x801FA9D4: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x801FA9D8: swc1        $f14, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f14.u32l;
    // 0x801FA9DC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x801FA9E0: jal         0x801D4EB8
    // 0x801FA9E4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_801D4EB8_600298(rdram, ctx);
        goto after_0;
    // 0x801FA9E4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801FA9E8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA9EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801FA9F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801FA9F4: lhu         $a0, 0x1A($v1)
    ctx->r4 = MEM_HU(ctx->r3, 0X1A);
    // 0x801FA9F8: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x801FA9FC: beq         $at, $zero, L_801FAA20
    if (ctx->r1 == 0) {
        // 0x801FAA00: addiu       $t6, $a0, 0xA
        ctx->r14 = ADD32(ctx->r4, 0XA);
            goto L_801FAA20;
    }
    // 0x801FAA00: addiu       $t6, $a0, 0xA
    ctx->r14 = ADD32(ctx->r4, 0XA);
    // 0x801FAA04: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x801FAA08: slti        $at, $a0, 0x1380
    ctx->r1 = SIGNED(ctx->r4) < 0X1380 ? 1 : 0;
    // 0x801FAA0C: bne         $at, $zero, L_801FAA20
    if (ctx->r1 != 0) {
        // 0x801FAA10: sh          $t6, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r14;
            goto L_801FAA20;
    }
    // 0x801FAA10: sh          $t6, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r14;
    // 0x801FAA14: addiu       $t7, $zero, 0x1380
    ctx->r15 = ADD32(0, 0X1380);
    // 0x801FAA18: sh          $t7, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r15;
    // 0x801FAA1C: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
L_801FAA20:
    // 0x801FAA20: slti        $at, $a0, 0x1381
    ctx->r1 = SIGNED(ctx->r4) < 0X1381 ? 1 : 0;
    // 0x801FAA24: bne         $at, $zero, L_801FAA44
    if (ctx->r1 != 0) {
        // 0x801FAA28: addiu       $t8, $a0, -0xA
        ctx->r24 = ADD32(ctx->r4, -0XA);
            goto L_801FAA44;
    }
    // 0x801FAA28: addiu       $t8, $a0, -0xA
    ctx->r24 = ADD32(ctx->r4, -0XA);
    // 0x801FAA2C: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x801FAA30: slti        $at, $t9, 0x1381
    ctx->r1 = SIGNED(ctx->r25) < 0X1381 ? 1 : 0;
    // 0x801FAA34: beq         $at, $zero, L_801FAA44
    if (ctx->r1 == 0) {
        // 0x801FAA38: sh          $t8, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r24;
            goto L_801FAA44;
    }
    // 0x801FAA38: sh          $t8, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r24;
    // 0x801FAA3C: addiu       $t0, $zero, 0x1380
    ctx->r8 = ADD32(0, 0X1380);
    // 0x801FAA40: sh          $t0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r8;
L_801FAA44:
    // 0x801FAA44: beql        $v0, $zero, L_801FAA84
    if (ctx->r2 == 0) {
        // 0x801FAA48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FAA84;
    }
    goto skip_0;
    // 0x801FAA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FAA4C: lhu         $t1, 0x1A($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X1A);
    // 0x801FAA50: addiu       $at, $zero, 0x1380
    ctx->r1 = ADD32(0, 0X1380);
    // 0x801FAA54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x801FAA58: bne         $t1, $at, L_801FAA80
    if (ctx->r9 != ctx->r1) {
        // 0x801FAA5C: lui         $t3, 0x8021
        ctx->r11 = S32(0X8021 << 16);
            goto L_801FAA80;
    }
    // 0x801FAA5C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x801FAA60: lw          $t3, -0x1130($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1130);
    // 0x801FAA64: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x801FAA68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FAA6C: sb          $t2, 0x2C1($t3)
    MEM_B(0X2C1, ctx->r11) = ctx->r10;
    // 0x801FAA70: sw          $t4, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->r12;
    // 0x801FAA74: swc1        $f14, 0x94($a1)
    MEM_W(0X94, ctx->r5) = ctx->f14.u32l;
    // 0x801FAA78: jal         0x8003521C
    // 0x801FAA7C: addiu       $a0, $a0, -0x5570
    ctx->r4 = ADD32(ctx->r4, -0X5570);
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801FAA7C: addiu       $a0, $a0, -0x5570
    ctx->r4 = ADD32(ctx->r4, -0X5570);
    after_1:
L_801FAA80:
    // 0x801FAA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FAA84:
    // 0x801FAA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FAA88: jr          $ra
    // 0x801FAA8C: nop

    TRACE_RETURN()
    return;
    // 0x801FAA8C: nop

;}
RECOMP_FUNC void func_801D3CE4_5FF0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D3CE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D3CE8: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x801D3CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D3CF0: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801D3CF4: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x801D3CF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801D3CFC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x801D3D00: bgez        $a0, L_801D3D14
    if (SIGNED(ctx->r4) >= 0) {
        // 0x801D3D04: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_801D3D14;
    }
    // 0x801D3D04: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x801D3D08: negu        $t6, $a0
    ctx->r14 = SUB32(0, ctx->r4);
    // 0x801D3D0C: b           L_801D3D18
    // 0x801D3D10: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
        goto L_801D3D18;
    // 0x801D3D10: sh          $t6, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r14;
L_801D3D14:
    // 0x801D3D14: sh          $a0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r4;
L_801D3D18:
    // 0x801D3D18: lw          $a2, 0x18($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X18);
    // 0x801D3D1C: sb          $t1, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r9;
    // 0x801D3D20: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D3D24: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D3D28: jal         0x8000E9B0
    // 0x801D3D2C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8000E9B0_F5B0(rdram, ctx);
        goto after_0;
    // 0x801D3D2C: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x801D3D30: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x801D3D34: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801D3D38: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801D3D3C: jal         0x8000E9F4
    // 0x801D3D40: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    func_8000E9F4_F5F4(rdram, ctx);
        goto after_1;
    // 0x801D3D40: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x801D3D44: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x801D3D48: lhu         $t2, 0x20($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X20);
    // 0x801D3D4C: lbu         $t1, 0x1B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1B);
    // 0x801D3D50: lhu         $t0, 0x16($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X16);
    // 0x801D3D54: lhu         $t9, 0x14($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X14);
    // 0x801D3D58: lhu         $a0, 0x3A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X3A);
    // 0x801D3D5C: subu        $v1, $v0, $t0
    ctx->r3 = SUB32(ctx->r2, ctx->r8);
    // 0x801D3D60: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x801D3D64: subu        $a2, $t2, $t9
    ctx->r6 = SUB32(ctx->r10, ctx->r25);
    // 0x801D3D68: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x801D3D6C: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x801D3D70: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801D3D74: bgez        $t8, L_801D3D88
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801D3D78: sra         $a2, $t3, 16
        ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
            goto L_801D3D88;
    }
    // 0x801D3D78: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    // 0x801D3D7C: addiu       $v1, $t8, 0x400
    ctx->r3 = ADD32(ctx->r24, 0X400);
    // 0x801D3D80: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x801D3D84: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
L_801D3D88:
    // 0x801D3D88: bgez        $a2, L_801D3D9C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D3D8C: slti        $at, $v1, 0x400
        ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
            goto L_801D3D9C;
    }
    // 0x801D3D8C: slti        $at, $v1, 0x400
    ctx->r1 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x801D3D90: addiu       $a2, $a2, 0x400
    ctx->r6 = ADD32(ctx->r6, 0X400);
    // 0x801D3D94: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x801D3D98: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
L_801D3D9C:
    // 0x801D3D9C: bnel        $at, $zero, L_801D3DB4
    if (ctx->r1 != 0) {
        // 0x801D3DA0: slti        $at, $a2, 0x400
        ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
            goto L_801D3DB4;
    }
    goto skip_0;
    // 0x801D3DA0: slti        $at, $a2, 0x400
    ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
    skip_0:
    // 0x801D3DA4: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x801D3DA8: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x801D3DAC: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x801D3DB0: slti        $at, $a2, 0x400
    ctx->r1 = SIGNED(ctx->r6) < 0X400 ? 1 : 0;
L_801D3DB4:
    // 0x801D3DB4: bne         $at, $zero, L_801D3DC8
    if (ctx->r1 != 0) {
        // 0x801D3DB8: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_801D3DC8;
    }
    // 0x801D3DB8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x801D3DBC: addiu       $a2, $a2, -0x400
    ctx->r6 = ADD32(ctx->r6, -0X400);
    // 0x801D3DC0: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x801D3DC4: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
L_801D3DC8:
    // 0x801D3DC8: bgez        $v1, L_801D3DD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801D3DCC: nop
    
            goto L_801D3DD8;
    }
    // 0x801D3DCC: nop

    // 0x801D3DD0: b           L_801D3DD8
    // 0x801D3DD4: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
        goto L_801D3DD8;
    // 0x801D3DD4: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
L_801D3DD8:
    // 0x801D3DD8: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D3DDC: beq         $at, $zero, L_801D3DF0
    if (ctx->r1 == 0) {
        // 0x801D3DE0: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_801D3DF0;
    }
    // 0x801D3DE0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x801D3DE4: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x801D3DE8: b           L_801D3E14
    // 0x801D3DEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_801D3E14;
    // 0x801D3DEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_801D3DF0:
    // 0x801D3DF0: slti        $at, $v1, 0x200
    ctx->r1 = SIGNED(ctx->r3) < 0X200 ? 1 : 0;
    // 0x801D3DF4: beq         $at, $zero, L_801D3E0C
    if (ctx->r1 == 0) {
        // 0x801D3DF8: subu        $t8, $t0, $a0
        ctx->r24 = SUB32(ctx->r8, ctx->r4);
            goto L_801D3E0C;
    }
    // 0x801D3DF8: subu        $t8, $t0, $a0
    ctx->r24 = SUB32(ctx->r8, ctx->r4);
    // 0x801D3DFC: addu        $t6, $t0, $a0
    ctx->r14 = ADD32(ctx->r8, ctx->r4);
    // 0x801D3E00: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x801D3E04: b           L_801D3E14
    // 0x801D3E08: sh          $t7, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r15;
        goto L_801D3E14;
    // 0x801D3E08: sh          $t7, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r15;
L_801D3E0C:
    // 0x801D3E0C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801D3E10: sh          $t9, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r25;
L_801D3E14:
    // 0x801D3E14: bgez        $a2, L_801D3E24
    if (SIGNED(ctx->r6) >= 0) {
        // 0x801D3E18: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D3E24;
    }
    // 0x801D3E18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3E1C: b           L_801D3E24
    // 0x801D3E20: negu        $a1, $a2
    ctx->r5 = SUB32(0, ctx->r6);
        goto L_801D3E24;
    // 0x801D3E20: negu        $a1, $a2
    ctx->r5 = SUB32(0, ctx->r6);
L_801D3E24:
    // 0x801D3E24: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x801D3E28: beql        $at, $zero, L_801D3E48
    if (ctx->r1 == 0) {
        // 0x801D3E2C: slti        $at, $a2, 0x200
        ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
            goto L_801D3E48;
    }
    goto skip_1;
    // 0x801D3E2C: slti        $at, $a2, 0x200
    ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
    skip_1:
    // 0x801D3E30: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x801D3E34: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x801D3E38: sh          $t2, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r10;
    // 0x801D3E3C: b           L_801D3E74
    // 0x801D3E40: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
        goto L_801D3E74;
    // 0x801D3E40: or          $t1, $t3, $zero
    ctx->r9 = ctx->r11 | 0;
    // 0x801D3E44: slti        $at, $a2, 0x200
    ctx->r1 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
L_801D3E48:
    // 0x801D3E48: beql        $at, $zero, L_801D3E68
    if (ctx->r1 == 0) {
        // 0x801D3E4C: lhu         $t7, 0x14($a3)
        ctx->r15 = MEM_HU(ctx->r7, 0X14);
            goto L_801D3E68;
    }
    goto skip_2;
    // 0x801D3E4C: lhu         $t7, 0x14($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X14);
    skip_2:
    // 0x801D3E50: lhu         $t4, 0x14($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X14);
    // 0x801D3E54: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x801D3E58: andi        $t6, $t5, 0x3FF
    ctx->r14 = ctx->r13 & 0X3FF;
    // 0x801D3E5C: b           L_801D3E74
    // 0x801D3E60: sh          $t6, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r14;
        goto L_801D3E74;
    // 0x801D3E60: sh          $t6, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r14;
    // 0x801D3E64: lhu         $t7, 0x14($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X14);
L_801D3E68:
    // 0x801D3E68: subu        $t8, $t7, $a0
    ctx->r24 = SUB32(ctx->r15, ctx->r4);
    // 0x801D3E6C: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x801D3E70: sh          $t9, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r25;
L_801D3E74:
    // 0x801D3E74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801D3E78: bne         $t1, $at, L_801D3E88
    if (ctx->r9 != ctx->r1) {
        // 0x801D3E7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801D3E88;
    }
    // 0x801D3E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D3E80: b           L_801D3E88
    // 0x801D3E84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D3E88;
    // 0x801D3E84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D3E88:
    // 0x801D3E88: jr          $ra
    // 0x801D3E8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801D3E8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801D0F90_5FC370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D0F90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801D0F94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x801D0F98: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x801D0F9C: jal         0x80024670
    // 0x801D0FA0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80024670_25270(rdram, ctx);
        goto after_0;
    // 0x801D0FA0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801D0FA4: bne         $v0, $zero, L_801D0FBC
    if (ctx->r2 != 0) {
        // 0x801D0FA8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801D0FBC;
    }
    // 0x801D0FA8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801D0FAC: jal         0x80035020
    // 0x801D0FB0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_1;
    // 0x801D0FB0: nop

    after_1:
    // 0x801D0FB4: b           L_801D10D8
    // 0x801D0FB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_801D10D8;
    // 0x801D0FB8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D0FBC:
    // 0x801D0FBC: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x801D0FC0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x801D0FC4: addiu       $a2, $zero, 0x7D0
    ctx->r6 = ADD32(0, 0X7D0);
    // 0x801D0FC8: sw          $v1, 0xD0($t6)
    MEM_W(0XD0, ctx->r14) = ctx->r3;
    // 0x801D0FCC: addiu       $t7, $zero, 0x5642
    ctx->r15 = ADD32(0, 0X5642);
    // 0x801D0FD0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x801D0FD4: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x801D0FD8: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
    // 0x801D0FDC: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x801D0FE0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x801D0FE4: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x801D0FE8: addiu       $a0, $a0, 0x4720
    ctx->r4 = ADD32(ctx->r4, 0X4720);
    // 0x801D0FEC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x801D0FF0: jal         0x80014840
    // 0x801D0FF4: addiu       $a1, $zero, 0x4B4
    ctx->r5 = ADD32(0, 0X4B4);
    func_80014840_15440(rdram, ctx);
        goto after_2;
    // 0x801D0FF4: addiu       $a1, $zero, 0x4B4
    ctx->r5 = ADD32(0, 0X4B4);
    after_2:
    // 0x801D0FF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D0FFC: lwc1        $f0, -0x2DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X2DE0);
    // 0x801D1000: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801D1004: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x801D1008: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801D100C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1010: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x801D1014: swc1        $f4, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->f4.u32l;
    // 0x801D1018: lwc1        $f6, -0x2DDC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2DDC);
    // 0x801D101C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D1020: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x801D1024: swc1        $f6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f6.u32l;
    // 0x801D1028: lwc1        $f8, -0x2DD8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X2DD8);
    // 0x801D102C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x801D1030: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x801D1034: sb          $t0, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r8;
    // 0x801D1038: sb          $t0, 0x25($v1)
    MEM_B(0X25, ctx->r3) = ctx->r8;
    // 0x801D103C: sb          $t8, 0x26($v1)
    MEM_B(0X26, ctx->r3) = ctx->r24;
    // 0x801D1040: sb          $t9, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r25;
    // 0x801D1044: swc1        $f8, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f8.u32l;
    // 0x801D1048: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x801D104C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D1050: lui         $at, 0xC420
    ctx->r1 = S32(0XC420 << 16);
    // 0x801D1054: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D1058: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801D105C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801D1060: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801D1064: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801D1068: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801D106C: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x801D1070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801D1074: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801D1078: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801D107C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801D1080: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801D1084: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801D1088: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801D108C: jal         0x8000DBF0
    // 0x801D1090: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_3;
    // 0x801D1090: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x801D1094: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x801D1098: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x801D109C: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x801D10A0: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x801D10A4: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x801D10A8: addiu       $t3, $t3, 0xD44
    ctx->r11 = ADD32(ctx->r11, 0XD44);
    // 0x801D10AC: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x801D10B0: sh          $zero, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = 0;
    // 0x801D10B4: addiu       $a0, $a0, 0x4160
    ctx->r4 = ADD32(ctx->r4, 0X4160);
    // 0x801D10B8: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x801D10BC: jal         0x8003521C
    // 0x801D10C0: sw          $t3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r11;
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801D10C0: sw          $t3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r11;
    after_4:
    // 0x801D10C4: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x801D10C8: addiu       $a0, $a0, 0x10E4
    ctx->r4 = ADD32(ctx->r4, 0X10E4);
    // 0x801D10CC: jal         0x80034B24
    // 0x801D10D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034B24_35724(rdram, ctx);
        goto after_5;
    // 0x801D10D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801D10D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_801D10D8:
    // 0x801D10D8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801D10DC: jr          $ra
    // 0x801D10E0: nop

    TRACE_RETURN()
    return;
    // 0x801D10E0: nop

;}
RECOMP_FUNC void func_801F45E8_61F9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F45E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F45EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F45F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F45F4: jal         0x801F7074
    // 0x801F45F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F45F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F45FC: jal         0x801F76D0
    // 0x801F4600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801F4600: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F4604: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4608: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F460C: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x801F4610: slti        $at, $t6, 0x201
    ctx->r1 = SIGNED(ctx->r14) < 0X201 ? 1 : 0;
    // 0x801F4614: beq         $at, $zero, L_801F4630
    if (ctx->r1 == 0) {
        // 0x801F4618: nop
    
            goto L_801F4630;
    }
    // 0x801F4618: nop

    // 0x801F461C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F4620: jal         0x801D2EE4
    // 0x801F4624: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_2;
    // 0x801F4624: addiu       $a1, $a1, -0x4D40
    ctx->r5 = ADD32(ctx->r5, -0X4D40);
    after_2:
    // 0x801F4628: b           L_801F4638
    // 0x801F462C: nop

        goto L_801F4638;
    // 0x801F462C: nop

L_801F4630:
    // 0x801F4630: jal         0x801D2EE4
    // 0x801F4634: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_3;
    // 0x801F4634: addiu       $a1, $a1, -0x4D48
    ctx->r5 = ADD32(ctx->r5, -0X4D48);
    after_3:
L_801F4638:
    // 0x801F4638: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F463C: jal         0x8003521C
    // 0x801F4640: addiu       $a0, $a0, 0x4654
    ctx->r4 = ADD32(ctx->r4, 0X4654);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x801F4640: addiu       $a0, $a0, 0x4654
    ctx->r4 = ADD32(ctx->r4, 0X4654);
    after_4:
    // 0x801F4644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F4648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F464C: jr          $ra
    // 0x801F4650: nop

    TRACE_RETURN()
    return;
    // 0x801F4650: nop

;}
RECOMP_FUNC void func_80208B74_633F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80208B74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80208B78: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80208B7C: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x80208B80: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80208B84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80208B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80208B8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80208B90: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80208B94: addiu       $t6, $zero, 0xAB
    ctx->r14 = ADD32(0, 0XAB);
    // 0x80208B98: sw          $t6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r14;
    // 0x80208B9C: sw          $zero, 0x98($a0)
    MEM_W(0X98, ctx->r4) = 0;
    // 0x80208BA0: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80208BA4: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x80208BA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80208BAC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80208BB0: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x80208BB4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80208BB8: jal         0x8000E630
    // 0x80208BBC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x80208BBC: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80208BC0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80208BC4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80208BC8: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x80208BCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80208BD0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80208BD4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80208BD8: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x80208BDC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80208BE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80208BE4: addiu       $a0, $a0, -0x73F0
    ctx->r4 = ADD32(ctx->r4, -0X73F0);
    // 0x80208BE8: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80208BEC: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80208BF0: sw          $zero, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = 0;
    // 0x80208BF4: jal         0x8003521C
    // 0x80208BF8: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80208BF8: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_1:
    // 0x80208BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80208C00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80208C04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80208C08: jr          $ra
    // 0x80208C0C: nop

    TRACE_RETURN()
    return;
    // 0x80208C0C: nop

;}
RECOMP_FUNC void func_80206D38_632118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80206D38: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80206D3C: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80206D40: lw          $t6, -0x10C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X10C0);
    // 0x80206D44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80206D48: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80206D4C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80206D50: lbu         $t7, 0x817($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X817);
    // 0x80206D54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80206D58: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80206D5C: beq         $t7, $zero, L_80206D84
    if (ctx->r15 == 0) {
        // 0x80206D60: lui         $t4, 0x8021
        ctx->r12 = S32(0X8021 << 16);
            goto L_80206D84;
    }
    // 0x80206D60: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x80206D64: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x80206D68: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80206D6C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80206D70: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x80206D74: bne         $at, $zero, L_80206D9C
    if (ctx->r1 != 0) {
        // 0x80206D78: sw          $t9, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r25;
            goto L_80206D9C;
    }
    // 0x80206D78: sw          $t9, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r25;
    // 0x80206D7C: b           L_80206D9C
    // 0x80206D80: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
        goto L_80206D9C;
    // 0x80206D80: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
L_80206D84:
    // 0x80206D84: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x80206D88: beq         $v0, $zero, L_80206D9C
    if (ctx->r2 == 0) {
        // 0x80206D8C: addiu       $t2, $v0, -0x2
        ctx->r10 = ADD32(ctx->r2, -0X2);
            goto L_80206D9C;
    }
    // 0x80206D8C: addiu       $t2, $v0, -0x2
    ctx->r10 = ADD32(ctx->r2, -0X2);
    // 0x80206D90: bgez        $t2, L_80206D9C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80206D94: sw          $t2, 0x90($s0)
        MEM_W(0X90, ctx->r16) = ctx->r10;
            goto L_80206D9C;
    }
    // 0x80206D94: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
    // 0x80206D98: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
L_80206D9C:
    // 0x80206D9C: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x80206DA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80206DA4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80206DA8: lbu         $t5, 0x2C4($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X2C4);
    // 0x80206DAC: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x80206DB0: bnel        $t5, $at, L_80206DC0
    if (ctx->r13 != ctx->r1) {
        // 0x80206DB4: lw          $t6, 0x90($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X90);
            goto L_80206DC0;
    }
    goto skip_0;
    // 0x80206DB4: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    skip_0:
    // 0x80206DB8: sw          $zero, 0x90($s0)
    MEM_W(0X90, ctx->r16) = 0;
    // 0x80206DBC: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
L_80206DC0:
    // 0x80206DC0: beql        $t6, $zero, L_80206EC8
    if (ctx->r14 == 0) {
        // 0x80206DC4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80206EC8;
    }
    goto skip_1;
    // 0x80206DC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x80206DC8: lw          $t7, 0x94($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X94);
    // 0x80206DCC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80206DD0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80206DD4: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80206DD8: andi        $t9, $t8, 0x3FF
    ctx->r25 = ctx->r24 & 0X3FF;
    // 0x80206DDC: sw          $t9, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r25;
    // 0x80206DE0: jal         0x8000E630
    // 0x80206DE4: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x80206DE4: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    after_0:
    // 0x80206DE8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80206DEC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80206DF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80206DF4: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x80206DF8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80206DFC: lui         $at, 0xC47A
    ctx->r1 = S32(0XC47A << 16);
    // 0x80206E00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80206E04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80206E08: addiu       $t0, $zero, 0xB2
    ctx->r8 = ADD32(0, 0XB2);
    // 0x80206E0C: swc1        $f16, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f16.u32l;
    // 0x80206E10: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80206E14: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x80206E18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80206E1C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80206E20: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80206E24: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80206E28: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80206E2C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80206E30: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80206E34: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80206E38: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x80206E3C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80206E40: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80206E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206E48: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80206E4C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80206E50: jal         0x8000E030
    // 0x80206E54: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80206E54: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_1:
    // 0x80206E58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80206E5C: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x80206E60: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80206E64: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80206E68: sw          $t7, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r15;
    // 0x80206E6C: lw          $t8, 0x98($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X98);
    // 0x80206E70: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80206E74: andi        $t0, $t9, 0x3FF
    ctx->r8 = ctx->r25 & 0X3FF;
    // 0x80206E78: sw          $t0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r8;
    // 0x80206E7C: jal         0x80003EA0
    // 0x80206E80: lhu         $a0, 0x9A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9A);
    func_80003EA0_4AA0(rdram, ctx);
        goto after_2;
    // 0x80206E80: lhu         $a0, 0x9A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X9A);
    after_2:
    // 0x80206E84: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x80206E88: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80206E8C: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80206E90: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80206E94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80206E98: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80206E9C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80206EA0: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80206EA4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80206EA8: cvt.d.s     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f2.d = CVT_D_S(ctx->f8.fl);
    // 0x80206EAC: add.d       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f2.d + ctx->f12.d;
    // 0x80206EB0: sub.d       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f12.d - ctx->f2.d;
    // 0x80206EB4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80206EB8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80206EBC: swc1        $f16, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f16.u32l;
    // 0x80206EC0: swc1        $f4, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f4.u32l;
    // 0x80206EC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80206EC8:
    // 0x80206EC8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80206ECC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80206ED0: jr          $ra
    // 0x80206ED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80206ED4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_801F7EE8_6232C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F7EE8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801F7EEC: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801F7EF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801F7EF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801F7EF8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x801F7EFC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x801F7F00: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801F7F04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F7F08: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801F7F0C: jal         0x801F7168
    // 0x801F7F10: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    func_801F7168_622548(rdram, ctx);
        goto after_0;
    // 0x801F7F10: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_0:
    // 0x801F7F14: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x801F7F18: lwc1        $f6, 0x74($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X74);
    // 0x801F7F1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F7F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F7F24: lui         $a1, 0xBDCC
    ctx->r5 = S32(0XBDCC << 16);
    // 0x801F7F28: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x801F7F2C: nop

    // 0x801F7F30: bc1f        L_801F7F40
    if (!c1cs) {
        // 0x801F7F34: nop
    
            goto L_801F7F40;
    }
    // 0x801F7F34: nop

    // 0x801F7F38: jal         0x801D6508
    // 0x801F7F3C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_801D6508_6018E8(rdram, ctx);
        goto after_1;
    // 0x801F7F3C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
L_801F7F40:
    // 0x801F7F40: jal         0x801D60E4
    // 0x801F7F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D60E4_6014C4(rdram, ctx);
        goto after_2;
    // 0x801F7F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F7F48: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801F7F4C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801F7F50: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x801F7F54: nop

    // 0x801F7F58: bc1fl       L_801F7FB4
    if (!c1cs) {
        // 0x801F7F5C: mtc1        $zero, $f16
        ctx->f16.u32l = 0;
            goto L_801F7FB4;
    }
    goto skip_0;
    // 0x801F7F5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    skip_0:
    // 0x801F7F60: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x801F7F64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801F7F68: addiu       $a0, $zero, 0x286
    ctx->r4 = ADD32(0, 0X286);
    // 0x801F7F6C: bne         $t8, $zero, L_801F7FB0
    if (ctx->r24 != 0) {
        // 0x801F7F70: lui         $a1, 0x8021
        ctx->r5 = S32(0X8021 << 16);
            goto L_801F7FB0;
    }
    // 0x801F7F70: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F7F74: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    // 0x801F7F78: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F7F7C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F7F80: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F7F84: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F7F88: jal         0x8000F3D8
    // 0x801F7F8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_3;
    // 0x801F7F8C: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801F7F90: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801F7F94: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x801F7F98: lui         $a3, 0x3D75
    ctx->r7 = S32(0X3D75 << 16);
    // 0x801F7F9C: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x801F7FA0: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x801F7FA4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F7FA8: jal         0x801F74E4
    // 0x801F7FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801F7FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_801F7FB0:
    // 0x801F7FB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
L_801F7FB4:
    // 0x801F7FB4: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F7FB8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x801F7FBC: nop

    // 0x801F7FC0: bc1f        L_801F7FD0
    if (!c1cs) {
        // 0x801F7FC4: nop
    
            goto L_801F7FD0;
    }
    // 0x801F7FC4: nop

    // 0x801F7FC8: jal         0x80034ED4
    // 0x801F7FCC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_5;
    // 0x801F7FCC: nop

    after_5:
L_801F7FD0:
    // 0x801F7FD0: jal         0x801D365C
    // 0x801F7FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_6;
    // 0x801F7FD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x801F7FD8: bne         $v0, $zero, L_801F7FF0
    if (ctx->r2 != 0) {
        // 0x801F7FDC: nop
    
            goto L_801F7FF0;
    }
    // 0x801F7FDC: nop

    // 0x801F7FE0: jal         0x801D36CC
    // 0x801F7FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D36CC_5FEAAC(rdram, ctx);
        goto after_7;
    // 0x801F7FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801F7FE8: beq         $v0, $zero, L_801F80D4
    if (ctx->r2 == 0) {
        // 0x801F7FEC: nop
    
            goto L_801F80D4;
    }
    // 0x801F7FEC: nop

L_801F7FF0:
    // 0x801F7FF0: jal         0x801D3854
    // 0x801F7FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_8;
    // 0x801F7FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x801F7FF8: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x801F7FFC: bne         $at, $zero, L_801F8020
    if (ctx->r1 != 0) {
        // 0x801F8000: nop
    
            goto L_801F8020;
    }
    // 0x801F8000: nop

    // 0x801F8004: jal         0x801D3A68
    // 0x801F8008: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_9;
    // 0x801F8008: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
    // 0x801F800C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801F8010: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801F8014: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801F8018: jal         0x801D7438
    // 0x801F801C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_10;
    // 0x801F801C: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_10:
L_801F8020:
    // 0x801F8020: jal         0x801D365C
    // 0x801F8024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_11;
    // 0x801F8024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801F8028: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801F802C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801F8030: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x801F8034: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801F8038: lw          $t0, 0x1CC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1CC);
    // 0x801F803C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F8040: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F8044: bne         $v0, $t0, L_801F8080
    if (ctx->r2 != ctx->r8) {
        // 0x801F8048: addiu       $a1, $v1, 0xA0
        ctx->r5 = ADD32(ctx->r3, 0XA0);
            goto L_801F8080;
    }
    // 0x801F8048: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801F804C: lbu         $t2, 0xE($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XE);
    // 0x801F8050: bne         $t2, $zero, L_801F8088
    if (ctx->r10 != 0) {
        // 0x801F8054: nop
    
            goto L_801F8088;
    }
    // 0x801F8054: nop

    // 0x801F8058: lbu         $t3, 0x2C5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801F805C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801F8060: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801F8064: bne         $t3, $zero, L_801F8088
    if (ctx->r11 != 0) {
        // 0x801F8068: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_801F8088;
    }
    // 0x801F8068: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801F806C: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F8070: jal         0x8000F3D8
    // 0x801F8074: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_12;
    // 0x801F8074: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_12:
    // 0x801F8078: b           L_801F8088
    // 0x801F807C: nop

        goto L_801F8088;
    // 0x801F807C: nop

L_801F8080:
    // 0x801F8080: jal         0x8000F3D8
    // 0x801F8084: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_13;
    // 0x801F8084: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_13:
L_801F8088:
    // 0x801F8088: jal         0x801CEE80
    // 0x801F808C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_14;
    // 0x801F808C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_14:
    // 0x801F8090: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801F8094: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F8098: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801F809C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801F80A0: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x801F80A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F80A8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x801F80AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F80B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801F80B4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x801F80B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F80BC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801F80C0: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F80C4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801F80C8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801F80CC: jal         0x801E1B30
    // 0x801F80D0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_15;
    // 0x801F80D0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_15:
L_801F80D4:
    // 0x801F80D4: jal         0x801D3894
    // 0x801F80D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D3894_5FEC74(rdram, ctx);
        goto after_16;
    // 0x801F80D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x801F80DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801F80E0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x801F80E4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x801F80E8: jr          $ra
    // 0x801F80EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801F80EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801FC638_627A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC638: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801FC63C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801FC640: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801FC644: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801FC648: lw          $t7, 0xA0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XA0);
    // 0x801FC64C: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x801FC650: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x801FC654: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x801FC658: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x801FC65C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801FC660: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801FC664: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801FC668: lui         $a2, 0xC4FA
    ctx->r6 = S32(0XC4FA << 16);
    // 0x801FC66C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x801FC670: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801FC674: jal         0x801D46B8
    // 0x801FC678: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_801D46B8_5FFA98(rdram, ctx);
        goto after_0;
    // 0x801FC678: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_0:
    // 0x801FC67C: jal         0x801D614C
    // 0x801FC680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FC680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801FC684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FC688: jal         0x801D3018
    // 0x801FC68C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_2;
    // 0x801FC68C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_2:
    // 0x801FC690: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801FC694: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x801FC698: jal         0x801D3118
    // 0x801FC69C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_801D3118_5FE4F8(rdram, ctx);
        goto after_3;
    // 0x801FC69C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x801FC6A0: beq         $v0, $zero, L_801FC6C4
    if (ctx->r2 == 0) {
        // 0x801FC6A4: addiu       $a0, $zero, 0x248
        ctx->r4 = ADD32(0, 0X248);
            goto L_801FC6C4;
    }
    // 0x801FC6A4: addiu       $a0, $zero, 0x248
    ctx->r4 = ADD32(0, 0X248);
    // 0x801FC6A8: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FC6AC: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801FC6B0: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801FC6B4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801FC6B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801FC6BC: jal         0x8000F3D8
    // 0x801FC6C0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801FC6C0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_801FC6C4:
    // 0x801FC6C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801FC6C8: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC6CC: lwc1        $f14, 0x78($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FC6D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801FC6D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801FC6D8: jal         0x8000EB08
    // 0x801FC6DC: nop

    func_8000EB08_F708(rdram, ctx);
        goto after_5;
    // 0x801FC6DC: nop

    after_5:
    // 0x801FC6E0: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801FC6E4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x801FC6E8: sh          $zero, 0x14($s1)
    MEM_H(0X14, ctx->r17) = 0;
    // 0x801FC6EC: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x801FC6F0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FC6F4: ldc1        $f8, -0x1580($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1580);
    // 0x801FC6F8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x801FC6FC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801FC700: c.le.d      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.d <= ctx->f8.d;
    // 0x801FC704: nop

    // 0x801FC708: bc1fl       L_801FC74C
    if (!c1cs) {
        // 0x801FC70C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801FC74C;
    }
    goto skip_0;
    // 0x801FC70C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x801FC710: lwc1        $f18, 0x70($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X70);
    // 0x801FC714: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801FC718: lwc1        $f8, 0x78($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X78);
    // 0x801FC71C: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x801FC720: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x801FC724: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x801FC728: neg.s       $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = -ctx->f8.fl;
    // 0x801FC72C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FC730: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801FC734: addiu       $a0, $a0, -0x38A4
    ctx->r4 = ADD32(ctx->r4, -0X38A4);
    // 0x801FC738: swc1        $f10, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f10.u32l;
    // 0x801FC73C: swc1        $f6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f6.u32l;
    // 0x801FC740: jal         0x8003521C
    // 0x801FC744: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_6;
    // 0x801FC744: swc1        $f18, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f18.u32l;
    after_6:
    // 0x801FC748: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801FC74C:
    // 0x801FC74C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801FC750: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801FC754: jr          $ra
    // 0x801FC758: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x801FC758: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80205A04_630DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205A04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80205A08: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x80205A0C: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x80205A10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80205A14: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80205A18: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80205A1C: lw          $v0, 0x1D8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D8);
    // 0x80205A20: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80205A24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80205A28: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80205A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205A30: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80205A34: jal         0x801D3E90
    // 0x80205A38: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_801D3E90_5FF270(rdram, ctx);
        goto after_0;
    // 0x80205A38: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x80205A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205A40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80205A44: jal         0x801D3EC8
    // 0x80205A48: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801D3EC8_5FF2A8(rdram, ctx);
        goto after_1;
    // 0x80205A48: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80205A4C: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x80205A50: lw          $t7, -0x10C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X10C0);
    // 0x80205A54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80205A58: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80205A5C: lbu         $t8, 0x11($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X11);
    // 0x80205A60: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x80205A64: addiu       $a3, $s1, 0x10
    ctx->r7 = ADD32(ctx->r17, 0X10);
    // 0x80205A68: bnel        $t8, $at, L_80205A88
    if (ctx->r24 != ctx->r1) {
        // 0x80205A6C: lw          $t2, 0x94($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X94);
            goto L_80205A88;
    }
    goto skip_0;
    // 0x80205A6C: lw          $t2, 0x94($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X94);
    skip_0:
    // 0x80205A70: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x80205A74: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x80205A78: andi        $t1, $t0, 0x3FF
    ctx->r9 = ctx->r8 & 0X3FF;
    // 0x80205A7C: b           L_80205A94
    // 0x80205A80: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
        goto L_80205A94;
    // 0x80205A80: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    // 0x80205A84: lw          $t2, 0x94($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X94);
L_80205A88:
    // 0x80205A88: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x80205A8C: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x80205A90: sw          $t4, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r12;
L_80205A94:
    // 0x80205A94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80205A98: lwc1        $f4, -0x1198($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1198);
    // 0x80205A9C: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80205AA0: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x80205AA4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205AA8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80205AAC: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80205AB0: nop

    // 0x80205AB4: bc1fl       L_80205AE0
    if (!c1cs) {
        // 0x80205AB8: lui         $at, 0x4407
        ctx->r1 = S32(0X4407 << 16);
            goto L_80205AE0;
    }
    goto skip_1;
    // 0x80205AB8: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    skip_1:
    // 0x80205ABC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80205AC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80205AC4: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80205AC8: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x80205ACC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80205AD0: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x80205AD4: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x80205AD8: lwc1        $f0, 0x1C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x80205ADC: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
L_80205AE0:
    // 0x80205AE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80205AE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205AE8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80205AEC: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80205AF0: nop

    // 0x80205AF4: bc1fl       L_80205B1C
    if (!c1cs) {
        // 0x80205AF8: lhu         $a1, 0x96($s0)
        ctx->r5 = MEM_HU(ctx->r16, 0X96);
            goto L_80205B1C;
    }
    goto skip_2;
    // 0x80205AF8: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
    skip_2:
    // 0x80205AFC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80205B00: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80205B04: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x80205B08: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80205B0C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80205B10: swc1        $f18, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->f18.u32l;
    // 0x80205B14: lwc1        $f12, 0x90($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X90);
    // 0x80205B18: lhu         $a1, 0x96($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X96);
L_80205B1C:
    // 0x80205B1C: jal         0x8000E630
    // 0x80205B20: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8000E630_F230(rdram, ctx);
        goto after_2;
    // 0x80205B20: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x80205B24: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80205B28: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80205B2C: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80205B30: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80205B34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80205B38: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80205B3C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80205B40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80205B44: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x80205B48: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80205B4C: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x80205B50: lwc1        $f16, 0x10($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80205B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205B58: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80205B5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80205B60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80205B64: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x80205B68: lwc1        $f2, 0x20($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X20);
    // 0x80205B6C: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80205B70: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80205B74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80205B78: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80205B7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80205B80: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x80205B84: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80205B88: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80205B8C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80205B90: jal         0x801D66AC
    // 0x80205B94: nop

    func_801D66AC_601A8C(rdram, ctx);
        goto after_3;
    // 0x80205B94: nop

    after_3:
    // 0x80205B98: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80205B9C: lw          $t5, -0x10C0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X10C0);
    // 0x80205BA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80205BA4: lbu         $t6, 0x11($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X11);
    // 0x80205BA8: bne         $t6, $at, L_80205BE4
    if (ctx->r14 != ctx->r1) {
        // 0x80205BAC: nop
    
            goto L_80205BE4;
    }
    // 0x80205BAC: nop

    // 0x80205BB0: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x80205BB4: sltiu       $at, $v0, 0x80
    ctx->r1 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80205BB8: bne         $at, $zero, L_80205BE4
    if (ctx->r1 != 0) {
        // 0x80205BBC: sltiu       $at, $v0, 0x181
        ctx->r1 = ctx->r2 < 0X181 ? 1 : 0;
            goto L_80205BE4;
    }
    // 0x80205BBC: sltiu       $at, $v0, 0x181
    ctx->r1 = ctx->r2 < 0X181 ? 1 : 0;
    // 0x80205BC0: beq         $at, $zero, L_80205BE4
    if (ctx->r1 == 0) {
        // 0x80205BC4: nop
    
            goto L_80205BE4;
    }
    // 0x80205BC4: nop

    // 0x80205BC8: jal         0x8000DD58
    // 0x80205BCC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_4;
    // 0x80205BCC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x80205BD0: addiu       $t7, $v0, 0x50
    ctx->r15 = ADD32(ctx->r2, 0X50);
    // 0x80205BD4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80205BD8: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x80205BDC: jal         0x8003521C
    // 0x80205BE0: addiu       $a0, $a0, 0x5614
    ctx->r4 = ADD32(ctx->r4, 0X5614);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80205BE0: addiu       $a0, $a0, 0x5614
    ctx->r4 = ADD32(ctx->r4, 0X5614);
    after_5:
L_80205BE4:
    // 0x80205BE4: jal         0x80205C00
    // 0x80205BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_6;
    // 0x80205BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80205BEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80205BF0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80205BF4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80205BF8: jr          $ra
    // 0x80205BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80205BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8020460C_62F9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020460C: addiu       $t6, $zero, 0x1C2
    ctx->r14 = ADD32(0, 0X1C2);
    // 0x80204610: jr          $ra
    // 0x80204614: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80204614: sw          $t6, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_801D365C_5FEA3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D365C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x801D3660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D3664: beq         $v1, $zero, L_801D3674
    if (ctx->r3 == 0) {
        // 0x801D3668: nop
    
            goto L_801D3674;
    }
    // 0x801D3668: nop

    // 0x801D366C: jr          $ra
    // 0x801D3670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D3670: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801D3674:
    // 0x801D3674: jr          $ra
    // 0x801D3678: nop

    TRACE_RETURN()
    return;
    // 0x801D3678: nop

;}
RECOMP_FUNC void func_801D369C_5FEA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D369C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x801D36A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D36A4: beq         $v1, $zero, L_801D36B4
    if (ctx->r3 == 0) {
        // 0x801D36A8: nop
    
            goto L_801D36B4;
    }
    // 0x801D36A8: nop

    // 0x801D36AC: jr          $ra
    // 0x801D36B0: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
    TRACE_RETURN()
    return;
    // 0x801D36B0: lw          $v0, 0x60($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X60);
L_801D36B4:
    // 0x801D36B4: jr          $ra
    // 0x801D36B8: nop

    TRACE_RETURN()
    return;
    // 0x801D36B8: nop

;}
RECOMP_FUNC void func_80201ECC_62D2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201ECC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80201ED0: jr          $ra
    // 0x80201ED4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80201ED4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80205614_6309F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205614: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205618: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020561C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80205620: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80205624: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80205628: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8020562C: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x80205630: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80205634: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80205638: lui         $a1, 0xC316
    ctx->r5 = S32(0XC316 << 16);
    // 0x8020563C: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x80205640: jal         0x801D655C
    // 0x80205644: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801D655C_60193C(rdram, ctx);
        goto after_0;
    // 0x80205644: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80205648: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8020564C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80205650: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x80205654: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80205658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020565C: lui         $a1, 0xC220
    ctx->r5 = S32(0XC220 << 16);
    // 0x80205660: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x80205664: jal         0x801D66AC
    // 0x80205668: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_801D66AC_601A8C(rdram, ctx);
        goto after_1;
    // 0x80205668: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8020566C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80205670: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80205674: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80205678: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8020567C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80205680: lui         $a1, 0xC352
    ctx->r5 = S32(0XC352 << 16);
    // 0x80205684: lui         $a2, 0xC334
    ctx->r6 = S32(0XC334 << 16);
    // 0x80205688: jal         0x801D67FC
    // 0x8020568C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_801D67FC_601BDC(rdram, ctx);
        goto after_2;
    // 0x8020568C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x80205690: lwc1        $f12, 0x70($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X70);
    // 0x80205694: lwc1        $f14, 0x74($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X74);
    // 0x80205698: lw          $a2, 0x78($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X78);
    // 0x8020569C: jal         0x8000EB50
    // 0x802056A0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    func_8000EB50_F750(rdram, ctx);
        goto after_3;
    // 0x802056A0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x802056A4: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x802056A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x802056AC: bgez        $t7, L_802056E0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802056B0: sw          $t7, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r15;
            goto L_802056E0;
    }
    // 0x802056B0: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802056B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802056B8: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x802056BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802056C0: lwc1        $f16, 0x10($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X10);
    // 0x802056C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802056C8: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x802056CC: nop

    // 0x802056D0: bc1f        L_802056E0
    if (!c1cs) {
        // 0x802056D4: nop
    
            goto L_802056E0;
    }
    // 0x802056D4: nop

    // 0x802056D8: jal         0x8003521C
    // 0x802056DC: addiu       $a0, $a0, 0x5734
    ctx->r4 = ADD32(ctx->r4, 0X5734);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x802056DC: addiu       $a0, $a0, 0x5734
    ctx->r4 = ADD32(ctx->r4, 0X5734);
    after_4:
L_802056E0:
    // 0x802056E0: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x802056E4: lw          $t0, -0x10C0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X10C0);
    // 0x802056E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802056EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802056F0: lbu         $t1, 0x11($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X11);
    // 0x802056F4: bne         $t1, $at, L_80205718
    if (ctx->r9 != ctx->r1) {
        // 0x802056F8: nop
    
            goto L_80205718;
    }
    // 0x802056F8: nop

    // 0x802056FC: jal         0x8003521C
    // 0x80205700: addiu       $a0, $a0, 0x58B0
    ctx->r4 = ADD32(ctx->r4, 0X58B0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x80205700: addiu       $a0, $a0, 0x58B0
    ctx->r4 = ADD32(ctx->r4, 0X58B0);
    after_5:
    // 0x80205704: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x80205708: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8020570C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80205710: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x80205714: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
L_80205718:
    // 0x80205718: jal         0x80205C00
    // 0x8020571C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_6;
    // 0x8020571C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80205720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80205724: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80205728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8020572C: jr          $ra
    // 0x80205730: nop

    TRACE_RETURN()
    return;
    // 0x80205730: nop

;}
RECOMP_FUNC void func_80201770_62CB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80201770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80201774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80201778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020177C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80201780: addiu       $t6, $zero, 0xC8
    ctx->r14 = ADD32(0, 0XC8);
    // 0x80201784: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x80201788: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8020178C: jal         0x8003521C
    // 0x80201790: addiu       $a0, $a0, 0x17C8
    ctx->r4 = ADD32(ctx->r4, 0X17C8);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80201790: addiu       $a0, $a0, 0x17C8
    ctx->r4 = ADD32(ctx->r4, 0X17C8);
    after_0:
    // 0x80201794: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x80201798: lw          $t8, -0x10C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X10C0);
    // 0x8020179C: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x802017A0: beq         $t9, $zero, L_802017B0
    if (ctx->r25 == 0) {
        // 0x802017A4: nop
    
            goto L_802017B0;
    }
    // 0x802017A4: nop

    // 0x802017A8: jal         0x80200684
    // 0x802017AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80200684_62BA64(rdram, ctx);
        goto after_1;
    // 0x802017AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_802017B0:
    // 0x802017B0: jal         0x8020407C
    // 0x802017B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8020407C_62F45C(rdram, ctx);
        goto after_2;
    // 0x802017B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x802017B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802017BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802017C0: jr          $ra
    // 0x802017C4: nop

    TRACE_RETURN()
    return;
    // 0x802017C4: nop

;}
RECOMP_FUNC void func_80204A58_62FE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204A58: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80204A5C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80204A60: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x80204A64: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x80204A68: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80204A6C: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80204A70: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80204A74: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80204A78: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80204A7C: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80204A80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80204A84: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80204A88: lui         $a2, 0x802
    ctx->r6 = S32(0X802 << 16);
    // 0x80204A8C: addiu       $a2, $a2, -0x6BD0
    ctx->r6 = ADD32(ctx->r6, -0X6BD0);
    // 0x80204A90: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80204A94: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80204A98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80204A9C: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80204AA0: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80204AA4: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80204AA8: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80204AAC: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x80204AB0: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80204AB4: addiu       $t9, $zero, 0x4B5
    ctx->r25 = ADD32(0, 0X4B5);
    // 0x80204AB8: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x80204ABC: addiu       $a3, $a3, -0x5238
    ctx->r7 = ADD32(ctx->r7, -0X5238);
    // 0x80204AC0: addiu       $a1, $a1, 0x4C5C
    ctx->r5 = ADD32(ctx->r5, 0X4C5C);
    // 0x80204AC4: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80204AC8: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80204ACC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80204AD0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80204AD4: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80204AD8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80204ADC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80204AE0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80204AE4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80204AE8: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80204AEC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80204AF0: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80204AF4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80204AF8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80204AFC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80204B00: jal         0x800358E8
    // 0x80204B04: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x80204B04: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x80204B08: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80204B0C: beq         $v0, $zero, L_80204C48
    if (ctx->r2 == 0) {
        // 0x80204B10: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80204C48;
    }
    // 0x80204B10: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80204B14: lbu         $a1, 0x7B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X7B);
    // 0x80204B18: sw          $zero, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = 0;
    // 0x80204B1C: sw          $a0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r4;
    // 0x80204B20: sw          $s0, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r16;
    // 0x80204B24: sw          $a1, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r5;
    // 0x80204B28: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80204B2C: lui         $t2, 0x8021
    ctx->r10 = S32(0X8021 << 16);
    // 0x80204B30: addiu       $t2, $t2, -0x47A0
    ctx->r10 = ADD32(ctx->r10, -0X47A0);
    // 0x80204B34: swc1        $f6, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f6.u32l;
    // 0x80204B38: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80204B3C: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x80204B40: addu        $t0, $t1, $t2
    ctx->r8 = ADD32(ctx->r9, ctx->r10);
    // 0x80204B44: swc1        $f8, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f8.u32l;
    // 0x80204B48: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80204B4C: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80204B50: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x80204B54: swc1        $f10, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->f10.u32l;
    // 0x80204B58: lbu         $t3, 0xE($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XE);
    // 0x80204B5C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80204B60: addiu       $a1, $a1, -0x5238
    ctx->r5 = ADD32(ctx->r5, -0X5238);
    // 0x80204B64: sw          $t3, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r11;
    // 0x80204B68: lwc1        $f16, 0x0($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80204B6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80204B70: swc1        $f16, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->f16.u32l;
    // 0x80204B74: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80204B78: swc1        $f18, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->f18.u32l;
    // 0x80204B7C: lbu         $t8, 0xD($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XD);
    // 0x80204B80: lbu         $t7, 0xC($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0XC);
    // 0x80204B84: lbu         $t6, 0xB($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0XB);
    // 0x80204B88: lbu         $t4, 0xA($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XA);
    // 0x80204B8C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80204B90: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80204B94: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80204B98: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80204B9C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80204BA0: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x80204BA4: lbu         $a3, 0x9($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X9);
    // 0x80204BA8: lbu         $a2, 0x8($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0X8);
    // 0x80204BAC: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x80204BB0: jal         0x8000E030
    // 0x80204BB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    func_8000E030_EC30(rdram, ctx);
        goto after_1;
    // 0x80204BB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x80204BB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80204BBC: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80204BC0: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x80204BC4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80204BC8: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80204BCC: sw          $t2, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r10;
    // 0x80204BD0: lwc1        $f4, 0xA0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XA0);
    // 0x80204BD4: addiu       $t3, $v1, 0xC
    ctx->r11 = ADD32(ctx->r3, 0XC);
    // 0x80204BD8: addiu       $t4, $v1, 0x10
    ctx->r12 = ADD32(ctx->r3, 0X10);
    // 0x80204BDC: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x80204BE0: lwc1        $f6, 0xA4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XA4);
    // 0x80204BE4: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x80204BE8: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x80204BEC: lwc1        $f8, 0xA8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XA8);
    // 0x80204BF0: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x80204BF4: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80204BF8: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80204BFC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80204C00: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80204C04: jal         0x8000E808
    // 0x80204C08: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8000E808_F408(rdram, ctx);
        goto after_2;
    // 0x80204C08: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x80204C0C: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x80204C10: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80204C14: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80204C18: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80204C1C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80204C20: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80204C24: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x80204C28: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x80204C2C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80204C30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80204C34: swc1        $f8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f8.u32l;
    // 0x80204C38: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80204C3C: sb          $t5, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r13;
    // 0x80204C40: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80204C44: swc1        $f18, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f18.u32l;
L_80204C48:
    // 0x80204C48: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80204C4C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80204C50: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80204C54: jr          $ra
    // 0x80204C58: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80204C58: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_801F25A0_61D980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F25A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F25A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F25A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F25AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F25B0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801F25B4: jal         0x801D3018
    // 0x801F25B8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801F25B8: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801F25BC: jal         0x801D619C
    // 0x801F25C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801D619C_60157C(rdram, ctx);
        goto after_1;
    // 0x801F25C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801F25C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801F25C8: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x801F25CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F25D0: lwc1        $f4, 0x20($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X20);
    // 0x801F25D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F25D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801F25DC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801F25E0: jal         0x801F718C
    // 0x801F25E4: nop

    func_801F718C_62256C(rdram, ctx);
        goto after_2;
    // 0x801F25E4: nop

    after_2:
    // 0x801F25E8: beq         $v0, $zero, L_801F2634
    if (ctx->r2 == 0) {
        // 0x801F25EC: addiu       $a0, $zero, 0x281
        ctx->r4 = ADD32(0, 0X281);
            goto L_801F2634;
    }
    // 0x801F25EC: addiu       $a0, $zero, 0x281
    ctx->r4 = ADD32(0, 0X281);
    // 0x801F25F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F25F4: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801F25F8: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801F25FC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801F2600: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801F2604: jal         0x8000F3D8
    // 0x801F2608: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_3;
    // 0x801F2608: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_3:
    // 0x801F260C: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801F2610: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801F2614: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801F2618: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801F261C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F2620: jal         0x801F74E4
    // 0x801F2624: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801F74E4_6228C4(rdram, ctx);
        goto after_4;
    // 0x801F2624: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_4:
    // 0x801F2628: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F262C: jal         0x8003521C
    // 0x801F2630: addiu       $a0, $a0, 0x2644
    ctx->r4 = ADD32(ctx->r4, 0X2644);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801F2630: addiu       $a0, $a0, 0x2644
    ctx->r4 = ADD32(ctx->r4, 0X2644);
    after_5:
L_801F2634:
    // 0x801F2634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F2638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F263C: jr          $ra
    // 0x801F2640: nop

    TRACE_RETURN()
    return;
    // 0x801F2640: nop

;}
RECOMP_FUNC void func_801E4978_60FD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E4978: lui         $t7, 0x8021
    ctx->r15 = S32(0X8021 << 16);
    // 0x801E497C: lw          $t7, -0x1130($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1130);
    // 0x801E4980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E4984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E4988: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801E498C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801E4990: sb          $t6, 0x2C1($t7)
    MEM_B(0X2C1, ctx->r15) = ctx->r14;
    // 0x801E4994: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x801E4998: jal         0x801D326C
    // 0x801E499C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    func_801D326C_5FE64C(rdram, ctx);
        goto after_0;
    // 0x801E499C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_0:
    // 0x801E49A0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801E49A4: lui         $at, 0xC307
    ctx->r1 = S32(0XC307 << 16);
    // 0x801E49A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E49AC: lwc1        $f0, 0xC($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E49B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E49B4: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x801E49B8: nop

    // 0x801E49BC: bc1t        L_801E4A1C
    if (c1cs) {
        // 0x801E49C0: nop
    
            goto L_801E4A1C;
    }
    // 0x801E49C0: nop

    // 0x801E49C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E49C8: lui         $at, 0xC28C
    ctx->r1 = S32(0XC28C << 16);
    // 0x801E49CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E49D0: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801E49D4: swc1        $f8, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f8.u32l;
    // 0x801E49D8: lwc1        $f16, 0xC($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801E49DC: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x801E49E0: nop

    // 0x801E49E4: bc1fl       L_801E4A34
    if (!c1cs) {
        // 0x801E49E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E4A34;
    }
    goto skip_0;
    // 0x801E49E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E49EC: jal         0x80038BC8
    // 0x801E49F0: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E49F0: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_1:
    // 0x801E49F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E49F8: jal         0x80037C9C
    // 0x801E49FC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    func_80037C9C_3889C(rdram, ctx);
        goto after_2;
    // 0x801E49FC: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_2:
    // 0x801E4A00: lui         $a2, 0xA0A0
    ctx->r6 = S32(0XA0A0 << 16);
    // 0x801E4A04: ori         $a2, $a2, 0xA0A0
    ctx->r6 = ctx->r6 | 0XA0A0;
    // 0x801E4A08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801E4A0C: jal         0x80037C20
    // 0x801E4A10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_3;
    // 0x801E4A10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x801E4A14: b           L_801E4A34
    // 0x801E4A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801E4A34;
    // 0x801E4A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E4A1C:
    // 0x801E4A1C: jal         0x80038BC8
    // 0x801E4A20: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_80038BC8_397C8(rdram, ctx);
        goto after_4;
    // 0x801E4A20: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_4:
    // 0x801E4A24: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E4A28: jal         0x8003521C
    // 0x801E4A2C: addiu       $a0, $a0, 0x493C
    ctx->r4 = ADD32(ctx->r4, 0X493C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801E4A2C: addiu       $a0, $a0, 0x493C
    ctx->r4 = ADD32(ctx->r4, 0X493C);
    after_5:
    // 0x801E4A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E4A34:
    // 0x801E4A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E4A38: jr          $ra
    // 0x801E4A3C: nop

    TRACE_RETURN()
    return;
    // 0x801E4A3C: nop

;}
RECOMP_FUNC void func_801D619C_60157C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D619C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801D61A0: lwc1        $f6, 0x70($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801D61A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801D61A8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801D61AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D61B0: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801D61B4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x801D61B8: lwc1        $f16, 0x74($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801D61BC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801D61C0: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x801D61C4: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801D61C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D61CC: jr          $ra
    // 0x801D61D0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    TRACE_RETURN()
    return;
    // 0x801D61D0: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_801FA0E8_6254C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA0E8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801FA0EC: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801FA0F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FA0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FA0F8: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x801FA0FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801FA100: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x801FA104: jal         0x801EE658
    // 0x801FA108: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_801EE658_619A38(rdram, ctx);
        goto after_0;
    // 0x801FA108: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801FA10C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FA110: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x801FA114: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x801FA118: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x801FA11C: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801FA120: addiu       $v0, $t6, -0x1
    ctx->r2 = ADD32(ctx->r14, -0X1);
    // 0x801FA124: bgtz        $v0, L_801FA1BC
    if (SIGNED(ctx->r2) > 0) {
        // 0x801FA128: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_801FA1BC;
    }
    // 0x801FA128: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x801FA12C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801FA130: lwc1        $f4, 0x90($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801FA134: lui         $at, 0x3FEC
    ctx->r1 = S32(0X3FEC << 16);
    // 0x801FA138: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x801FA13C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x801FA140: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801FA144: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x801FA148: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x801FA14C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801FA150: lui         $at, 0x3FE4
    ctx->r1 = S32(0X3FE4 << 16);
    // 0x801FA154: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801FA158: swc1        $f16, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f16.u32l;
    // 0x801FA15C: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801FA160: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x801FA164: nop

    // 0x801FA168: bc1fl       L_801FA17C
    if (!c1cs) {
        // 0x801FA16C: swc1        $f0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
            goto L_801FA17C;
    }
    goto skip_0;
    // 0x801FA16C: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    skip_0:
    // 0x801FA170: swc1        $f2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f2.u32l;
    // 0x801FA174: lwc1        $f0, 0x90($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X90);
    // 0x801FA178: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
L_801FA17C:
    // 0x801FA17C: lwc1        $f18, 0x94($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA180: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x801FA184: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801FA188: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801FA18C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x801FA190: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x801FA194: swc1        $f10, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f10.u32l;
    // 0x801FA198: lwc1        $f2, 0x94($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA19C: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x801FA1A0: nop

    // 0x801FA1A4: bc1fl       L_801FA1B8
    if (!c1cs) {
        // 0x801FA1A8: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_801FA1B8;
    }
    goto skip_1;
    // 0x801FA1A8: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x801FA1AC: swc1        $f12, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->f12.u32l;
    // 0x801FA1B0: lwc1        $f2, 0x94($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X94);
    // 0x801FA1B4: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_801FA1B8:
    // 0x801FA1B8: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_801FA1BC:
    // 0x801FA1BC: addiu       $at, $zero, -0x55
    ctx->r1 = ADD32(0, -0X55);
    // 0x801FA1C0: bnel        $v0, $at, L_801FA1E4
    if (ctx->r2 != ctx->r1) {
        // 0x801FA1C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FA1E4;
    }
    goto skip_2;
    // 0x801FA1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x801FA1C8: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801FA1CC: jal         0x801FA5C8
    // 0x801FA1D0: lw          $a0, 0x1D8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1D8);
    func_801FA5C8_6259A8(rdram, ctx);
        goto after_1;
    // 0x801FA1D0: lw          $a0, 0x1D8($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1D8);
    after_1:
    // 0x801FA1D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FA1D8: jal         0x8003521C
    // 0x801FA1DC: addiu       $a0, $a0, -0x5E10
    ctx->r4 = ADD32(ctx->r4, -0X5E10);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801FA1DC: addiu       $a0, $a0, -0x5E10
    ctx->r4 = ADD32(ctx->r4, -0X5E10);
    after_2:
    // 0x801FA1E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FA1E4:
    // 0x801FA1E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FA1E8: jr          $ra
    // 0x801FA1EC: nop

    TRACE_RETURN()
    return;
    // 0x801FA1EC: nop

;}
RECOMP_FUNC void func_801E1314_60C6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1314: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E1318: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E131C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E1320: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E1324: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E1328: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801E132C: lui         $a2, 0x801
    ctx->r6 = S32(0X801 << 16);
    // 0x801E1330: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E1334: addiu       $a2, $a2, -0x350
    ctx->r6 = ADD32(ctx->r6, -0X350);
    // 0x801E1338: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x801E133C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801E1340: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E1344: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E1348: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E134C: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x801E1350: addiu       $t9, $zero, 0x4B2
    ctx->r25 = ADD32(0, 0X4B2);
    // 0x801E1354: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x801E1358: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x801E135C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x801E1360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x801E1364: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E1368: addiu       $a1, $a1, 0x13F0
    ctx->r5 = ADD32(ctx->r5, 0X13F0);
    // 0x801E136C: addiu       $a3, $a3, -0x5430
    ctx->r7 = ADD32(ctx->r7, -0X5430);
    // 0x801E1370: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x801E1374: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x801E1378: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x801E137C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x801E1380: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x801E1384: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x801E1388: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x801E138C: jal         0x800358E8
    // 0x801E1390: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_0;
    // 0x801E1390: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E1394: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801E1398: beq         $v0, $zero, L_801E13DC
    if (ctx->r2 == 0) {
        // 0x801E139C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801E13DC;
    }
    // 0x801E139C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801E13A0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x801E13A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E13A8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x801E13AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E13B0: div.s       $f4, $f12, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x801E13B4: swc1        $f8, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->f8.u32l;
    // 0x801E13B8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801E13BC: addiu       $t0, $zero, 0x2D
    ctx->r8 = ADD32(0, 0X2D);
    // 0x801E13C0: swc1        $f10, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->f10.u32l;
    // 0x801E13C4: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801E13C8: sw          $t0, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r8;
    // 0x801E13CC: swc1        $f0, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f0.u32l;
    // 0x801E13D0: swc1        $f0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->f0.u32l;
    // 0x801E13D4: swc1        $f16, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->f16.u32l;
    // 0x801E13D8: swc1        $f4, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f4.u32l;
L_801E13DC:
    // 0x801E13DC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E13E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E13E4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E13E8: jr          $ra
    // 0x801E13EC: nop

    TRACE_RETURN()
    return;
    // 0x801E13EC: nop

;}
RECOMP_FUNC void func_801E41F0_60F5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E41F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801E41F4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x801E41F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E41FC: lwc1        $f0, -0x22F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X22F0);
    // 0x801E4200: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x801E4204: addiu       $a1, $a1, 0xC1C
    ctx->r5 = ADD32(ctx->r5, 0XC1C);
    // 0x801E4208: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x801E420C: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801E4210: lui         $at, 0xC320
    ctx->r1 = S32(0XC320 << 16);
    // 0x801E4214: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E4218: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801E421C: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x801E4220: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801E4224: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E4228: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801E422C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x801E4230: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801E4234: addiu       $t7, $zero, 0x4D6
    ctx->r15 = ADD32(0, 0X4D6);
    // 0x801E4238: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E423C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801E4240: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801E4244: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E4248: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801E424C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801E4250: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E4254: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x801E4258: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801E425C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x801E4260: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x801E4264: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801E4268: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x801E426C: jal         0x8000DBF0
    // 0x801E4270: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8000DBF0_E7F0(rdram, ctx);
        goto after_0;
    // 0x801E4270: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x801E4274: sb          $zero, 0x65($v0)
    MEM_B(0X65, ctx->r2) = 0;
    // 0x801E4278: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x801E427C: lw          $t8, -0x1130($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1130);
    // 0x801E4280: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x801E4284: addiu       $t1, $zero, 0xC8
    ctx->r9 = ADD32(0, 0XC8);
    // 0x801E4288: sw          $v0, 0x1E0($t8)
    MEM_W(0X1E0, ctx->r24) = ctx->r2;
    // 0x801E428C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x801E4290: addiu       $t2, $zero, 0x1F4
    ctx->r10 = ADD32(0, 0X1F4);
    // 0x801E4294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E4298: sw          $zero, 0x60($t9)
    MEM_W(0X60, ctx->r25) = 0;
    // 0x801E429C: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x801E42A0: sh          $t1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r9;
    // 0x801E42A4: sh          $t2, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r10;
    // 0x801E42A8: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x801E42AC: jal         0x801E46C4
    // 0x801E42B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801E46C4_60FAA4(rdram, ctx);
        goto after_1;
    // 0x801E42B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801E42B4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E42B8: jal         0x8003521C
    // 0x801E42BC: addiu       $a0, $a0, 0x42D4
    ctx->r4 = ADD32(ctx->r4, 0X42D4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801E42BC: addiu       $a0, $a0, 0x42D4
    ctx->r4 = ADD32(ctx->r4, 0X42D4);
    after_2:
    // 0x801E42C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801E42C4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x801E42C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x801E42CC: jr          $ra
    // 0x801E42D0: nop

    TRACE_RETURN()
    return;
    // 0x801E42D0: nop

;}
RECOMP_FUNC void func_801EECCC_61A0AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EECCC: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801EECD0: addiu       $t0, $t0, -0x1130
    ctx->r8 = ADD32(ctx->r8, -0X1130);
    // 0x801EECD4: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x801EECD8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EECDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EECE0: lw          $a3, 0x1D8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X1D8);
    // 0x801EECE4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801EECE8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x801EECEC: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x801EECF0: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x801EECF4: addiu       $t8, $zero, 0x136
    ctx->r24 = ADD32(0, 0X136);
    // 0x801EECF8: addiu       $t9, $zero, 0xB8
    ctx->r25 = ADD32(0, 0XB8);
    // 0x801EECFC: sb          $t1, 0x2C0($v1)
    MEM_B(0X2C0, ctx->r3) = ctx->r9;
    // 0x801EED00: sb          $zero, 0x2C1($v1)
    MEM_B(0X2C1, ctx->r3) = 0;
    // 0x801EED04: sb          $t1, 0x2C2($v1)
    MEM_B(0X2C2, ctx->r3) = ctx->r9;
    // 0x801EED08: sb          $zero, 0x2C3($v1)
    MEM_B(0X2C3, ctx->r3) = 0;
    // 0x801EED0C: sw          $t6, 0x1EC($v1)
    MEM_W(0X1EC, ctx->r3) = ctx->r14;
    // 0x801EED10: sw          $t7, 0x1F0($v1)
    MEM_W(0X1F0, ctx->r3) = ctx->r15;
    // 0x801EED14: sw          $t8, 0x1F4($v1)
    MEM_W(0X1F4, ctx->r3) = ctx->r24;
    // 0x801EED18: sw          $t9, 0x1F8($v1)
    MEM_W(0X1F8, ctx->r3) = ctx->r25;
    // 0x801EED1C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801EED20: addiu       $v0, $v1, 0xA0
    ctx->r2 = ADD32(ctx->r3, 0XA0);
    // 0x801EED24: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x801EED28: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x801EED2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EED30: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801EED34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EED38: addiu       $t2, $zero, 0x1380
    ctx->r10 = ADD32(0, 0X1380);
    // 0x801EED3C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801EED40: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x801EED44: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801EED48: sh          $t2, 0x1A($v0)
    MEM_H(0X1A, ctx->r2) = ctx->r10;
    // 0x801EED4C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x801EED50: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x801EED54: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x801EED58: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    // 0x801EED5C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x801EED60: lw          $a0, 0x1D4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X1D4);
    // 0x801EED64: jal         0x80034EF8
    // 0x801EED68: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80034EF8_35AF8(rdram, ctx);
        goto after_0;
    // 0x801EED68: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x801EED6C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EED70: addiu       $a0, $a0, -0x2524
    ctx->r4 = ADD32(ctx->r4, -0X2524);
    // 0x801EED74: jal         0x80034DD8
    // 0x801EED78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_1;
    // 0x801EED78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801EED7C: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x801EED80: lw          $t4, -0x1130($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1130);
    // 0x801EED84: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x801EED88: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801EED8C: sw          $zero, 0x1D4($t4)
    MEM_W(0X1D4, ctx->r12) = 0;
    // 0x801EED90: addiu       $a1, $a1, 0x4C98
    ctx->r5 = ADD32(ctx->r5, 0X4C98);
    // 0x801EED94: jal         0x8003522C
    // 0x801EED98: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801EED98: lw          $a0, 0x1D8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1D8);
    after_2:
    // 0x801EED9C: jal         0x80038BC8
    // 0x801EEDA0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80038BC8_397C8(rdram, ctx);
        goto after_3;
    // 0x801EEDA0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x801EEDA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EEDA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EEDAC: jr          $ra
    // 0x801EEDB0: nop

    TRACE_RETURN()
    return;
    // 0x801EEDB0: nop

;}
RECOMP_FUNC void func_801EA730_615B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA730: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x801EA734: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EA738: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801EA73C: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x801EA740: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x801EA744: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x801EA748: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x801EA74C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EA750: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801EA754: ldc1        $f8, -0x1ED0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X1ED0);
    // 0x801EA758: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x801EA75C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x801EA760: addiu       $t6, $sp, 0x4C
    ctx->r14 = ADD32(ctx->r29, 0X4C);
    // 0x801EA764: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x801EA768: addiu       $t7, $sp, 0x48
    ctx->r15 = ADD32(ctx->r29, 0X48);
    // 0x801EA76C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x801EA770: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x801EA774: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x801EA778: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801EA77C: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801EA780: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801EA784: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801EA788: jal         0x8000E808
    // 0x801EA78C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8000E808_F408(rdram, ctx);
        goto after_0;
    // 0x801EA78C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x801EA790: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801EA794: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA798: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA79C: lui         $a1, 0x801
    ctx->r5 = S32(0X801 << 16);
    // 0x801EA7A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EA7A4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EA7A8: addiu       $a1, $a1, -0x180
    ctx->r5 = ADD32(ctx->r5, -0X180);
    // 0x801EA7AC: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EA7B0: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x801EA7B4: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801EA7B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801EA7BC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x801EA7C0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801EA7C4: addiu       $t8, $zero, 0x4B0
    ctx->r24 = ADD32(0, 0X4B0);
    // 0x801EA7C8: addiu       $a2, $a2, -0x5830
    ctx->r6 = ADD32(ctx->r6, -0X5830);
    // 0x801EA7CC: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x801EA7D0: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x801EA7D4: lwc1        $f18, 0x10($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801EA7D8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA7DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x801EA7E0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801EA7E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x801EA7E8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801EA7EC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801EA7F0: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x801EA7F4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EA7F8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801EA7FC: addiu       $a0, $a0, -0x5700
    ctx->r4 = ADD32(ctx->r4, -0X5700);
    // 0x801EA800: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801EA804: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EA808: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x801EA80C: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x801EA810: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x801EA814: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801EA818: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801EA81C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x801EA820: jal         0x80035854
    // 0x801EA824: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_80035854_36454(rdram, ctx);
        goto after_1;
    // 0x801EA824: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801EA828: beq         $v0, $zero, L_801EA8EC
    if (ctx->r2 == 0) {
        // 0x801EA82C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801EA8EC;
    }
    // 0x801EA82C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801EA830: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA834: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EA838: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801EA83C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801EA840: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x801EA844: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801EA848: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x801EA84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801EA850: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x801EA854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EA858: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x801EA85C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801EA860: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801EA864: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x801EA868: jal         0x801E006C
    // 0x801EA86C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    func_801E006C_60B44C(rdram, ctx);
        goto after_2;
    // 0x801EA86C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x801EA870: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA874: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801EA878: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x801EA87C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801EA880: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    // 0x801EA884: jal         0x8000E39C
    // 0x801EA888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8000E39C_EF9C(rdram, ctx);
        goto after_3;
    // 0x801EA888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
    // 0x801EA88C: addiu       $v1, $zero, 0x32
    ctx->r3 = ADD32(0, 0X32);
    // 0x801EA890: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x801EA894: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x801EA898: addiu       $t1, $zero, -0xA
    ctx->r9 = ADD32(0, -0XA);
    // 0x801EA89C: addiu       $t2, $zero, 0x96
    ctx->r10 = ADD32(0, 0X96);
    // 0x801EA8A0: addiu       $t3, $zero, 0xAA
    ctx->r11 = ADD32(0, 0XAA);
    // 0x801EA8A4: addiu       $t4, $zero, -0x78
    ctx->r12 = ADD32(0, -0X78);
    // 0x801EA8A8: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x801EA8AC: sw          $t0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r8;
    // 0x801EA8B0: sb          $v1, 0x4C($s0)
    MEM_B(0X4C, ctx->r16) = ctx->r3;
    // 0x801EA8B4: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x801EA8B8: sh          $t1, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r9;
    // 0x801EA8BC: sh          $zero, 0x52($s0)
    MEM_H(0X52, ctx->r16) = 0;
    // 0x801EA8C0: sh          $t2, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r10;
    // 0x801EA8C4: sh          $t3, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r11;
    // 0x801EA8C8: sh          $t4, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r12;
    // 0x801EA8CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801EA8D0: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x801EA8D4: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EA8D8: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x801EA8DC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x801EA8E0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x801EA8E4: jal         0x8000F3D8
    // 0x801EA8E8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801EA8E8: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_4:
L_801EA8EC:
    // 0x801EA8EC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x801EA8F0: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x801EA8F4: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x801EA8F8: jr          $ra
    // 0x801EA8FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x801EA8FC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_801D36C4_5FEAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D36C4: jr          $ra
    // 0x801D36C8: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x801D36C8: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
;}
RECOMP_FUNC void func_801CB54C_5F692C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CB54C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801CB550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801CB554: jal         0x80034734
    // 0x801CB558: nop

    func_80034734_35334(rdram, ctx);
        goto after_0;
    // 0x801CB558: nop

    after_0:
    // 0x801CB55C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB560: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB564: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CB568: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CB56C: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB570: lhu         $t6, 0x307C($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X307C);
    // 0x801CB574: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x801CB578: beql        $t7, $zero, L_801CB5A0
    if (ctx->r15 == 0) {
        // 0x801CB57C: lhu         $t8, 0x2DD2($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
            goto L_801CB5A0;
    }
    goto skip_0;
    // 0x801CB57C: lhu         $t8, 0x2DD2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
    skip_0:
    // 0x801CB580: jal         0x80003478
    // 0x801CB584: nop

    func_80003478_4078(rdram, ctx);
        goto after_1;
    // 0x801CB584: nop

    after_1:
    // 0x801CB588: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801CB58C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x801CB590: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x801CB594: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x801CB598: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x801CB59C: lhu         $t8, 0x2DD2($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X2DD2);
L_801CB5A0:
    // 0x801CB5A0: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801CB5A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x801CB5A8: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x801CB5AC: sh          $t9, -0x522E($at)
    MEM_H(-0X522E, ctx->r1) = ctx->r25;
    // 0x801CB5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801CB5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801CB5B8: jr          $ra
    // 0x801CB5BC: nop

    TRACE_RETURN()
    return;
    // 0x801CB5BC: nop

;}
RECOMP_FUNC void func_801E2EF8_60E2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2EF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801E2EFC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801E2F00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801E2F04: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801E2F08: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801E2F0C: bne         $a1, $zero, L_801E2F24
    if (ctx->r5 != 0) {
        // 0x801E2F10: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_801E2F24;
    }
    // 0x801E2F10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E2F14: jal         0x80034ED4
    // 0x801E2F18: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x801E2F18: nop

    after_0:
    // 0x801E2F1C: b           L_801E3014
    // 0x801E2F20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_801E3014;
    // 0x801E2F20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E2F24:
    // 0x801E2F24: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x801E2F28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2F2C: lwc1        $f6, 0x94($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X94);
    // 0x801E2F30: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x801E2F34: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x801E2F38: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801E2F3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E2F40: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801E2F44: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801E2F48: lw          $t6, 0xA0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XA0);
    // 0x801E2F4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801E2F50: addiu       $v1, $v1, 0x178
    ctx->r3 = ADD32(ctx->r3, 0X178);
    // 0x801E2F54: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x801E2F58: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801E2F5C: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801E2F60: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801E2F64: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x801E2F68: nop

    // 0x801E2F6C: bgezl       $v0, L_801E2F7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x801E2F70: lw          $t8, 0x98($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X98);
            goto L_801E2F7C;
    }
    goto skip_0;
    // 0x801E2F70: lw          $t8, 0x98($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X98);
    skip_0:
    // 0x801E2F74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801E2F78: lw          $t8, 0x98($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X98);
L_801E2F7C:
    // 0x801E2F7C: lw          $a1, 0xA8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA8);
    // 0x801E2F80: lw          $a2, 0x90($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X90);
    // 0x801E2F84: lw          $a3, 0x94($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X94);
    // 0x801E2F88: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x801E2F8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x801E2F90: jal         0x8000DF10
    // 0x801E2F94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8000DF10_EB10(rdram, ctx);
        goto after_1;
    // 0x801E2F94: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x801E2F98: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E2F9C: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x801E2FA0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x801E2FA4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801E2FA8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x801E2FAC: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x801E2FB0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801E2FB4: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E2FB8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801E2FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E2FC0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801E2FC4: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
    // 0x801E2FC8: lw          $t1, 0xA4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XA4);
    // 0x801E2FCC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x801E2FD0: bgez        $t1, L_801E2FE4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x801E2FD4: cvt.s.w     $f16, $f16
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
            goto L_801E2FE4;
    }
    // 0x801E2FD4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801E2FD8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2FDC: nop

    // 0x801E2FE0: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_801E2FE4:
    // 0x801E2FE4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x801E2FE8: jal         0x801D2F40
    // 0x801E2FEC: nop

    func_801D2F40_5FE320(rdram, ctx);
        goto after_2;
    // 0x801E2FEC: nop

    after_2:
    // 0x801E2FF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E2FF4: nop

    // 0x801E2FF8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x801E2FFC: nop

    // 0x801E3000: bc1fl       L_801E3014
    if (!c1cs) {
        // 0x801E3004: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E3014;
    }
    goto skip_1;
    // 0x801E3004: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x801E3008: jal         0x80034ED4
    // 0x801E300C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x801E300C: nop

    after_3:
    // 0x801E3010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801E3014:
    // 0x801E3014: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x801E3018: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x801E301C: jr          $ra
    // 0x801E3020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x801E3020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_801EF958_61AD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801EF964: jal         0x801F7074
    // 0x801EF968: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801EF968: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801EF96C: jal         0x801F76D0
    // 0x801EF970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801F76D0_622AB0(rdram, ctx);
        goto after_1;
    // 0x801EF970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801EF974: jal         0x801F701C
    // 0x801EF978: nop

    func_801F701C_6223FC(rdram, ctx);
        goto after_2;
    // 0x801EF978: nop

    after_2:
    // 0x801EF97C: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801EF980: jal         0x8003521C
    // 0x801EF984: addiu       $a0, $a0, -0x668
    ctx->r4 = ADD32(ctx->r4, -0X668);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801EF984: addiu       $a0, $a0, -0x668
    ctx->r4 = ADD32(ctx->r4, -0X668);
    after_3:
    // 0x801EF988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801EF990: jr          $ra
    // 0x801EF994: nop

    TRACE_RETURN()
    return;
    // 0x801EF994: nop

;}
RECOMP_FUNC void func_801EA614_6159F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA614: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801EA618: lw          $t6, -0x1130($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1130);
    // 0x801EA61C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x801EA620: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801EA624: addiu       $t7, $t6, 0x140
    ctx->r15 = ADD32(ctx->r14, 0X140);
    // 0x801EA628: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801EA62C: beq         $a0, $zero, L_801EA71C
    if (ctx->r4 == 0) {
        // 0x801EA630: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_801EA71C;
    }
    // 0x801EA630: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x801EA634: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x801EA638: beql        $s0, $zero, L_801EA720
    if (ctx->r16 == 0) {
        // 0x801EA63C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801EA720;
    }
    goto skip_0;
    // 0x801EA63C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x801EA640: jal         0x801D3854
    // 0x801EA644: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_0;
    // 0x801EA644: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x801EA648: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x801EA64C: bne         $at, $zero, L_801EA670
    if (ctx->r1 != 0) {
        // 0x801EA650: nop
    
            goto L_801EA670;
    }
    // 0x801EA650: nop

    // 0x801EA654: jal         0x801D3A68
    // 0x801EA658: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_1;
    // 0x801EA658: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x801EA65C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x801EA660: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x801EA664: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x801EA668: jal         0x801D7438
    // 0x801EA66C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_2;
    // 0x801EA66C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_2:
L_801EA670:
    // 0x801EA670: jal         0x801D365C
    // 0x801EA674: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_801D365C_5FEA3C(rdram, ctx);
        goto after_3;
    // 0x801EA674: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x801EA678: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801EA67C: lw          $v1, -0x1130($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1130);
    // 0x801EA680: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x801EA684: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801EA688: lw          $t8, 0x1CC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1CC);
    // 0x801EA68C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EA690: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EA694: bne         $v0, $t8, L_801EA6D0
    if (ctx->r2 != ctx->r24) {
        // 0x801EA698: addiu       $a1, $v1, 0xA0
        ctx->r5 = ADD32(ctx->r3, 0XA0);
            goto L_801EA6D0;
    }
    // 0x801EA698: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801EA69C: lbu         $t0, 0xE($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0XE);
    // 0x801EA6A0: bne         $t0, $zero, L_801EA6D8
    if (ctx->r8 != 0) {
        // 0x801EA6A4: nop
    
            goto L_801EA6D8;
    }
    // 0x801EA6A4: nop

    // 0x801EA6A8: lbu         $t1, 0x2C5($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2C5);
    // 0x801EA6AC: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x801EA6B0: addiu       $a1, $v1, 0xA0
    ctx->r5 = ADD32(ctx->r3, 0XA0);
    // 0x801EA6B4: bne         $t1, $zero, L_801EA6D8
    if (ctx->r9 != 0) {
        // 0x801EA6B8: or          $a2, $s0, $zero
        ctx->r6 = ctx->r16 | 0;
            goto L_801EA6D8;
    }
    // 0x801EA6B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x801EA6BC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x801EA6C0: jal         0x8000F3D8
    // 0x801EA6C4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_4;
    // 0x801EA6C4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_4:
    // 0x801EA6C8: b           L_801EA6D8
    // 0x801EA6CC: nop

        goto L_801EA6D8;
    // 0x801EA6CC: nop

L_801EA6D0:
    // 0x801EA6D0: jal         0x8000F3D8
    // 0x801EA6D4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_5;
    // 0x801EA6D4: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    after_5:
L_801EA6D8:
    // 0x801EA6D8: jal         0x801CEE80
    // 0x801EA6DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_6;
    // 0x801EA6DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x801EA6E0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801EA6E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EA6E8: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x801EA6EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801EA6F0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801EA6F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA6F8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x801EA6FC: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x801EA700: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801EA704: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801EA708: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x801EA70C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801EA710: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x801EA714: jal         0x801E1B30
    // 0x801EA718: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_801E1B30_60CF10(rdram, ctx);
        goto after_7;
    // 0x801EA718: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_7:
L_801EA71C:
    // 0x801EA71C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801EA720:
    // 0x801EA720: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801EA724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801EA728: jr          $ra
    // 0x801EA72C: nop

    TRACE_RETURN()
    return;
    // 0x801EA72C: nop

;}
RECOMP_FUNC void func_801DD394_608774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DD394: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x801DD398: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801DD39C: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801DD3A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x801DD3A4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x801DD3A8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x801DD3AC: lui         $t0, 0x4
    ctx->r8 = S32(0X4 << 16);
    // 0x801DD3B0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x801DD3B4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DD3B8: lhu         $t0, -0x4F86($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X4F86);
    // 0x801DD3BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801DD3C0: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x801DD3C4: bne         $t1, $zero, L_801DD3D4
    if (ctx->r9 != 0) {
        // 0x801DD3C8: nop
    
            goto L_801DD3D4;
    }
    // 0x801DD3C8: nop

    // 0x801DD3CC: jr          $ra
    // 0x801DD3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x801DD3D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801DD3D4:
    // 0x801DD3D4: jr          $ra
    // 0x801DD3D8: nop

    TRACE_RETURN()
    return;
    // 0x801DD3D8: nop

;}
RECOMP_FUNC void func_801F6624_621A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F6624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F6628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F662C: jal         0x801F7074
    // 0x801F6630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801F7074_622454(rdram, ctx);
        goto after_0;
    // 0x801F6630: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F6634: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801F6638: addiu       $a1, $a1, -0x4D30
    ctx->r5 = ADD32(ctx->r5, -0X4D30);
    // 0x801F663C: jal         0x801D2EE4
    // 0x801F6640: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_801D2EE4_5FE2C4(rdram, ctx);
        goto after_1;
    // 0x801F6640: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x801F6644: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F6648: jal         0x8003521C
    // 0x801F664C: addiu       $a0, $a0, 0x6660
    ctx->r4 = ADD32(ctx->r4, 0X6660);
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x801F664C: addiu       $a0, $a0, 0x6660
    ctx->r4 = ADD32(ctx->r4, 0X6660);
    after_2:
    // 0x801F6650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F6654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6658: jr          $ra
    // 0x801F665C: nop

    TRACE_RETURN()
    return;
    // 0x801F665C: nop

;}
RECOMP_FUNC void func_801DE58C_60996C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE58C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801DE590: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801DE594: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801DE598: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801DE59C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801DE5A0: addiu       $t6, $v0, 0x140
    ctx->r14 = ADD32(ctx->r2, 0X140);
    // 0x801DE5A4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801DE5A8: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x801DE5AC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x801DE5B0: lw          $t7, 0x1D8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X1D8);
    // 0x801DE5B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE5B8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x801DE5BC: lw          $t8, 0x18($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X18);
    // 0x801DE5C0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x801DE5C4: jal         0x801CEE80
    // 0x801DE5C8: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    func_801CEE80_5FA260(rdram, ctx);
        goto after_0;
    // 0x801DE5C8: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    after_0:
    // 0x801DE5CC: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x801DE5D0: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x801DE5D4: lw          $a2, 0x74($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X74);
    // 0x801DE5D8: addiu       $t1, $t9, 0x20
    ctx->r9 = ADD32(ctx->r25, 0X20);
    // 0x801DE5DC: sw          $t1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r9;
    // 0x801DE5E0: lw          $a3, 0x78($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X78);
    // 0x801DE5E4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801DE5E8: jal         0x8000EE50
    // 0x801DE5EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000EE50_FA50(rdram, ctx);
        goto after_1;
    // 0x801DE5EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x801DE5F0: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801DE5F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DE5F8: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x801DE5FC: lbu         $t3, 0xE($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XE);
    // 0x801DE600: bnel        $t3, $at, L_801DE758
    if (ctx->r11 != ctx->r1) {
        // 0x801DE604: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_801DE758;
    }
    goto skip_0;
    // 0x801DE604: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x801DE608: lw          $t4, 0xA8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XA8);
    // 0x801DE60C: addiu       $t6, $t6, -0x6100
    ctx->r14 = ADD32(ctx->r14, -0X6100);
    // 0x801DE610: lwc1        $f4, 0xAC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XAC);
    // 0x801DE614: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x801DE618: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x801DE61C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x801DE620: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x801DE624: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DE628: lwc1        $f10, 0xB0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XB0);
    // 0x801DE62C: lw          $t7, 0xB4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XB4);
    // 0x801DE630: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE634: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801DE638: swc1        $f8, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f8.u32l;
    // 0x801DE63C: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DE640: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x801DE644: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801DE648: swc1        $f18, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f18.u32l;
    // 0x801DE64C: lh          $t8, 0x14($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X14);
    // 0x801DE650: lw          $a2, 0xB0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XB0);
    // 0x801DE654: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x801DE658: sw          $t9, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r25;
    // 0x801DE65C: jal         0x801D53EC
    // 0x801DE660: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    func_801D53EC_6007CC(rdram, ctx);
        goto after_2;
    // 0x801DE660: lhu         $a3, 0xB6($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XB6);
    after_2:
    // 0x801DE664: lw          $t1, 0x80($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X80);
    // 0x801DE668: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x801DE66C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE670: addiu       $v0, $t1, 0x1
    ctx->r2 = ADD32(ctx->r9, 0X1);
    // 0x801DE674: bne         $v0, $at, L_801DE688
    if (ctx->r2 != ctx->r1) {
        // 0x801DE678: sw          $v0, 0x80($s0)
        MEM_W(0X80, ctx->r16) = ctx->r2;
            goto L_801DE688;
    }
    // 0x801DE678: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x801DE67C: jal         0x801E0E7C
    // 0x801DE680: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    func_801E0E7C_60C25C(rdram, ctx);
        goto after_3;
    // 0x801DE680: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
    after_3:
    // 0x801DE684: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
L_801DE688:
    // 0x801DE688: beq         $v0, $zero, L_801DE698
    if (ctx->r2 == 0) {
        // 0x801DE68C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_801DE698;
    }
    // 0x801DE68C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DE690: bnel        $v0, $at, L_801DE6F8
    if (ctx->r2 != ctx->r1) {
        // 0x801DE694: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_801DE6F8;
    }
    goto skip_1;
    // 0x801DE694: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    skip_1:
L_801DE698:
    // 0x801DE698: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE69C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x801DE6A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE6A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DE6A8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE6AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801DE6B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801DE6B4: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DE6B8: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x801DE6BC: lui         $a3, 0x3E99
    ctx->r7 = S32(0X3E99 << 16);
    // 0x801DE6C0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801DE6C4: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x801DE6C8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x801DE6CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE6D0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x801DE6D4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DE6D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE6DC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE6E8: jal         0x801DFB90
    // 0x801DE6EC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_4;
    // 0x801DE6EC: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x801DE6F0: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x801DE6F4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
L_801DE6F8:
    // 0x801DE6F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE6FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801DE700: bnel        $v0, $at, L_801DE758
    if (ctx->r2 != ctx->r1) {
        // 0x801DE704: lw          $v0, 0x7C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X7C);
            goto L_801DE758;
    }
    goto skip_2;
    // 0x801DE704: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    skip_2:
    // 0x801DE708: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x801DE70C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801DE710: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE714: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801DE718: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x801DE71C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x801DE720: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801DE724: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801DE728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE72C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801DE730: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801DE734: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x801DE738: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x801DE73C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801DE740: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801DE744: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x801DE748: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x801DE74C: jal         0x801DFB90
    // 0x801DE750: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_801DFB90_60AF70(rdram, ctx);
        goto after_5;
    // 0x801DE750: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x801DE754: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
L_801DE758:
    // 0x801DE758: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801DE75C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE760: bnel        $v0, $zero, L_801DE790
    if (ctx->r2 != 0) {
        // 0x801DE764: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_801DE790;
    }
    goto skip_3;
    // 0x801DE764: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    skip_3:
    // 0x801DE768: jal         0x80037C9C
    // 0x801DE76C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_80037C9C_3889C(rdram, ctx);
        goto after_6;
    // 0x801DE76C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_6:
    // 0x801DE770: lui         $a2, 0x1111
    ctx->r6 = S32(0X1111 << 16);
    // 0x801DE774: ori         $a2, $a2, 0x1111
    ctx->r6 = ctx->r6 | 0X1111;
    // 0x801DE778: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x801DE77C: jal         0x80037C20
    // 0x801DE780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80037C20_38820(rdram, ctx);
        goto after_7;
    // 0x801DE780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x801DE784: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DE788: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801DE78C: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
L_801DE790:
    // 0x801DE790: sw          $t3, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r11;
    // 0x801DE794: bgez        $t3, L_801DE884
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801DE798: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_801DE884;
    }
    // 0x801DE798: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x801DE79C: lbu         $v1, 0xE($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XE);
    // 0x801DE7A0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x801DE7A4: bne         $v1, $at, L_801DE7E0
    if (ctx->r3 != ctx->r1) {
        // 0x801DE7A8: addiu       $at, $zero, -0x19
        ctx->r1 = ADD32(0, -0X19);
            goto L_801DE7E0;
    }
    // 0x801DE7A8: addiu       $at, $zero, -0x19
    ctx->r1 = ADD32(0, -0X19);
    // 0x801DE7AC: bne         $t3, $at, L_801DE7CC
    if (ctx->r11 != ctx->r1) {
        // 0x801DE7B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DE7CC;
    }
    // 0x801DE7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE7B4: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x801DE7B8: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    // 0x801DE7BC: jal         0x801E1084
    // 0x801DE7C0: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    func_801E1084_60C464(rdram, ctx);
        goto after_8;
    // 0x801DE7C0: lw          $a3, 0x10($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X10);
    after_8:
    // 0x801DE7C4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x801DE7C8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
L_801DE7CC:
    // 0x801DE7CC: addiu       $at, $zero, -0x32
    ctx->r1 = ADD32(0, -0X32);
    // 0x801DE7D0: bne         $v0, $at, L_801DE7F0
    if (ctx->r2 != ctx->r1) {
        // 0x801DE7D4: addiu       $t4, $zero, 0xA
        ctx->r12 = ADD32(0, 0XA);
            goto L_801DE7F0;
    }
    // 0x801DE7D4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x801DE7D8: b           L_801DE7F0
    // 0x801DE7DC: sb          $t4, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r12;
        goto L_801DE7F0;
    // 0x801DE7DC: sb          $t4, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r12;
L_801DE7E0:
    // 0x801DE7E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801DE7E4: bne         $v1, $at, L_801DE7F0
    if (ctx->r3 != ctx->r1) {
        // 0x801DE7E8: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_801DE7F0;
    }
    // 0x801DE7E8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x801DE7EC: sb          $t5, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r13;
L_801DE7F0:
    // 0x801DE7F0: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DE7F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE7F8: ldc1        $f0, -0x2508($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X2508);
    // 0x801DE7FC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x801DE800: lwc1        $f8, 0x24($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X24);
    // 0x801DE804: sub.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f18.d - ctx->f0.d;
    // 0x801DE808: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801DE80C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x801DE810: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801DE814: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x801DE818: sub.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = ctx->f10.d - ctx->f0.d;
    // 0x801DE81C: swc1        $f6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f6.u32l;
    // 0x801DE820: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x801DE824: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x801DE828: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x801DE82C: swc1        $f18, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f18.u32l;
    // 0x801DE830: bc1fl       L_801DE87C
    if (!c1cs) {
        // 0x801DE834: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801DE87C;
    }
    goto skip_4;
    // 0x801DE834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x801DE838: lbu         $t6, 0xE($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0XE);
    // 0x801DE83C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x801DE840: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x801DE844: bnel        $t6, $at, L_801DE858
    if (ctx->r14 != ctx->r1) {
        // 0x801DE848: sw          $zero, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = 0;
            goto L_801DE858;
    }
    goto skip_5;
    // 0x801DE848: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
    skip_5:
    // 0x801DE84C: b           L_801DE858
    // 0x801DE850: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
        goto L_801DE858;
    // 0x801DE850: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x801DE854: sw          $zero, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = 0;
L_801DE858:
    // 0x801DE858: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x801DE85C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801DE860: addiu       $a0, $a0, -0x1768
    ctx->r4 = ADD32(ctx->r4, -0X1768);
    // 0x801DE864: sh          $zero, 0x2E($t8)
    MEM_H(0X2E, ctx->r24) = 0;
    // 0x801DE868: sw          $t9, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r25;
    // 0x801DE86C: swc1        $f2, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f2.u32l;
    // 0x801DE870: jal         0x8003521C
    // 0x801DE874: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    func_8003521C_35E1C(rdram, ctx);
        goto after_9;
    // 0x801DE874: swc1        $f2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f2.u32l;
    after_9:
    // 0x801DE878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801DE87C:
    // 0x801DE87C: jal         0x801DED6C
    // 0x801DE880: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    func_801DED6C_60A14C(rdram, ctx);
        goto after_10;
    // 0x801DE880: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    after_10:
L_801DE884:
    // 0x801DE884: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801DE888: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801DE88C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801DE890: jr          $ra
    // 0x801DE894: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x801DE894: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801F1BD8_61CFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F1BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1BE0: lw          $v0, 0xD0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XD0);
    // 0x801F1BE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F1BE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1BEC: beq         $v0, $zero, L_801F1C04
    if (ctx->r2 == 0) {
        // 0x801F1BF0: addiu       $a2, $zero, 0x50
        ctx->r6 = ADD32(0, 0X50);
            goto L_801F1C04;
    }
    // 0x801F1BF0: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x801F1BF4: beq         $v0, $at, L_801F1C14
    if (ctx->r2 == ctx->r1) {
        // 0x801F1BF8: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_801F1C14;
    }
    // 0x801F1BF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801F1BFC: b           L_801F1C14
    // 0x801F1C00: nop

        goto L_801F1C14;
    // 0x801F1C00: nop

L_801F1C04:
    // 0x801F1C04: jal         0x801F1FA4
    // 0x801F1C08: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_801F1FA4_61D384(rdram, ctx);
        goto after_0;
    // 0x801F1C08: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_0:
    // 0x801F1C0C: b           L_801F1C28
    // 0x801F1C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F1C28;
    // 0x801F1C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1C14:
    // 0x801F1C14: jal         0x801F1FA4
    // 0x801F1C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801F1FA4_61D384(rdram, ctx);
        goto after_1;
    // 0x801F1C18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x801F1C1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F1C20: sw          $zero, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = 0;
    // 0x801F1C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F1C28:
    // 0x801F1C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F1C2C: jr          $ra
    // 0x801F1C30: nop

    TRACE_RETURN()
    return;
    // 0x801F1C30: nop

;}
RECOMP_FUNC void func_801EEB3C_619F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EEB3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801EEB40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801EEB44: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801EEB48: addiu       $s0, $s0, -0x1130
    ctx->r16 = ADD32(ctx->r16, -0X1130);
    // 0x801EEB4C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801EEB50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EEB54: sw          $zero, -0x10E0($at)
    MEM_W(-0X10E0, ctx->r1) = 0;
    // 0x801EEB58: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801EEB5C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801EEB60: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801EEB64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801EEB68: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801EEB6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x801EEB70: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801EEB74: jal         0x800148F0
    // 0x801EEB78: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801EEB78: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801EEB7C: bne         $v0, $zero, L_801EEB8C
    if (ctx->r2 != 0) {
        // 0x801EEB80: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801EEB8C;
    }
    // 0x801EEB80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801EEB84: b           L_801EEC08
    // 0x801EEB88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801EEC08;
    // 0x801EEB88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EEB8C:
    // 0x801EEB8C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801EEB90: sw          $v1, -0x10E0($at)
    MEM_W(-0X10E0, ctx->r1) = ctx->r3;
    // 0x801EEB94: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801EEB98: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801EEB9C: addiu       $a1, $a1, -0x10C0
    ctx->r5 = ADD32(ctx->r5, -0X10C0);
    // 0x801EEBA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EEBA4: jal         0x80034E08
    // 0x801EEBA8: lw          $a0, 0x1C4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801EEBA8: lw          $a0, 0x1C4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X1C4);
    after_1:
    // 0x801EEBAC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801EEBB0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801EEBB4: addiu       $a1, $a1, 0x4800
    ctx->r5 = ADD32(ctx->r5, 0X4800);
    // 0x801EEBB8: sw          $v0, 0x1D0($t8)
    MEM_W(0X1D0, ctx->r24) = ctx->r2;
    // 0x801EEBBC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801EEBC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EEBC4: jal         0x80034E08
    // 0x801EEBC8: lw          $a0, 0x1C4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801EEBC8: lw          $a0, 0x1C4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C4);
    after_2:
    // 0x801EEBCC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x801EEBD0: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801EEBD4: addiu       $a1, $a1, -0x3F94
    ctx->r5 = ADD32(ctx->r5, -0X3F94);
    // 0x801EEBD8: sw          $v0, 0x1D8($t0)
    MEM_W(0X1D8, ctx->r8) = ctx->r2;
    // 0x801EEBDC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x801EEBE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801EEBE4: jal         0x80034E08
    // 0x801EEBE8: lw          $a0, 0x1BC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1BC);
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x801EEBE8: lw          $a0, 0x1BC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1BC);
    after_3:
    // 0x801EEBEC: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x801EEBF0: addiu       $t3, $zero, 0x7D0
    ctx->r11 = ADD32(0, 0X7D0);
    // 0x801EEBF4: sw          $v0, 0x1D4($t2)
    MEM_W(0X1D4, ctx->r10) = ctx->r2;
    // 0x801EEBF8: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x801EEBFC: sw          $t3, 0x60($t4)
    MEM_W(0X60, ctx->r12) = ctx->r11;
    // 0x801EEC00: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x801EEC04: lw          $v0, 0x1D8($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X1D8);
L_801EEC08:
    // 0x801EEC08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801EEC0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801EEC10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801EEC14: jr          $ra
    // 0x801EEC18: nop

    TRACE_RETURN()
    return;
    // 0x801EEC18: nop

;}
RECOMP_FUNC void func_801FFF70_62B350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FFF70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFF74: sw          $zero, -0x10C0($at)
    MEM_W(-0X10C0, ctx->r1) = 0;
    // 0x801FFF78: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x801FFF7C: lw          $a0, -0x3A38($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A38);
    // 0x801FFF80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FFF84: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x801FFF88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FFF8C: ori         $at, $at, 0x7FA4
    ctx->r1 = ctx->r1 | 0X7FA4;
    // 0x801FFF90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FFF94: addiu       $a1, $zero, 0x81C
    ctx->r5 = ADD32(0, 0X81C);
    // 0x801FFF98: jal         0x800148F0
    // 0x801FFF9C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800148F0_154F0(rdram, ctx);
        goto after_0;
    // 0x801FFF9C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x801FFFA0: bne         $v0, $zero, L_801FFFB0
    if (ctx->r2 != 0) {
        // 0x801FFFA4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801FFFB0;
    }
    // 0x801FFFA4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801FFFA8: b           L_80200028
    // 0x801FFFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80200028;
    // 0x801FFFAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801FFFB0:
    // 0x801FFFB0: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x801FFFB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801FFFB8: addiu       $s0, $s0, -0x1130
    ctx->r16 = ADD32(ctx->r16, -0X1130);
    // 0x801FFFBC: sw          $v1, -0x10C0($at)
    MEM_W(-0X10C0, ctx->r1) = ctx->r3;
    // 0x801FFFC0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x801FFFC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFFC8: addiu       $a1, $a1, -0x554
    ctx->r5 = ADD32(ctx->r5, -0X554);
    // 0x801FFFCC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FFFD0: jal         0x80034E08
    // 0x801FFFD4: lw          $a0, 0x1C4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801FFFD4: lw          $a0, 0x1C4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C4);
    after_1:
    // 0x801FFFD8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x801FFFDC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801FFFE0: addiu       $a1, $a1, -0x5150
    ctx->r5 = ADD32(ctx->r5, -0X5150);
    // 0x801FFFE4: sw          $v0, 0x1D0($t7)
    MEM_W(0X1D0, ctx->r15) = ctx->r2;
    // 0x801FFFE8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x801FFFEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801FFFF0: jal         0x80034E08
    // 0x801FFFF4: lw          $a0, 0x1C4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C4);
    func_80034E08_35A08(rdram, ctx);
        goto after_2;
    // 0x801FFFF4: lw          $a0, 0x1C4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X1C4);
    after_2:
    // 0x801FFFF8: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x801FFFFC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80200000: addiu       $a1, $a1, -0x3F94
    ctx->r5 = ADD32(ctx->r5, -0X3F94);
    // 0x80200004: sw          $v0, 0x1D8($t9)
    MEM_W(0X1D8, ctx->r25) = ctx->r2;
    // 0x80200008: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x8020000C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80200010: jal         0x80034E08
    // 0x80200014: lw          $a0, 0x1BC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1BC);
    func_80034E08_35A08(rdram, ctx);
        goto after_3;
    // 0x80200014: lw          $a0, 0x1BC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1BC);
    after_3:
    // 0x80200018: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8020001C: sw          $v0, 0x1D4($t1)
    MEM_W(0X1D4, ctx->r9) = ctx->r2;
    // 0x80200020: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80200024: lw          $v0, 0x1D8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X1D8);
L_80200028:
    // 0x80200028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8020002C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80200030: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80200034: jr          $ra
    // 0x80200038: nop

    TRACE_RETURN()
    return;
    // 0x80200038: nop

;}
RECOMP_FUNC void func_801D2E00_5FE1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D2E00: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x801D2E04: lw          $v0, -0x1130($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1130);
    // 0x801D2E08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801D2E0C: lbu         $t6, 0x148($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X148);
    // 0x801D2E10: addiu       $v0, $v0, 0x140
    ctx->r2 = ADD32(ctx->r2, 0X140);
    // 0x801D2E14: beql        $t6, $zero, L_801D2E24
    if (ctx->r14 == 0) {
        // 0x801D2E18: lbu         $t7, 0x9($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0X9);
            goto L_801D2E24;
    }
    goto skip_0;
    // 0x801D2E18: lbu         $t7, 0x9($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9);
    skip_0:
    // 0x801D2E1C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D2E20: lbu         $t7, 0x9($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X9);
L_801D2E24:
    // 0x801D2E24: ori         $t8, $v1, 0x2
    ctx->r24 = ctx->r3 | 0X2;
    // 0x801D2E28: beql        $t7, $zero, L_801D2E38
    if (ctx->r15 == 0) {
        // 0x801D2E2C: lbu         $t9, 0xA($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0XA);
            goto L_801D2E38;
    }
    goto skip_1;
    // 0x801D2E2C: lbu         $t9, 0xA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XA);
    skip_1:
    // 0x801D2E30: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801D2E34: lbu         $t9, 0xA($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XA);
L_801D2E38:
    // 0x801D2E38: ori         $t0, $v1, 0x4
    ctx->r8 = ctx->r3 | 0X4;
    // 0x801D2E3C: beql        $t9, $zero, L_801D2E4C
    if (ctx->r25 == 0) {
        // 0x801D2E40: lbu         $t1, 0xB($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0XB);
            goto L_801D2E4C;
    }
    goto skip_2;
    // 0x801D2E40: lbu         $t1, 0xB($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XB);
    skip_2:
    // 0x801D2E44: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x801D2E48: lbu         $t1, 0xB($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XB);
L_801D2E4C:
    // 0x801D2E4C: ori         $t2, $v1, 0x8
    ctx->r10 = ctx->r3 | 0X8;
    // 0x801D2E50: beql        $t1, $zero, L_801D2E60
    if (ctx->r9 == 0) {
        // 0x801D2E54: lbu         $t3, 0xC($v0)
        ctx->r11 = MEM_BU(ctx->r2, 0XC);
            goto L_801D2E60;
    }
    goto skip_3;
    // 0x801D2E54: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
    skip_3:
    // 0x801D2E58: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801D2E5C: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
L_801D2E60:
    // 0x801D2E60: ori         $t4, $v1, 0x10
    ctx->r12 = ctx->r3 | 0X10;
    // 0x801D2E64: beql        $t3, $zero, L_801D2E74
    if (ctx->r11 == 0) {
        // 0x801D2E68: lbu         $t5, 0xE($v0)
        ctx->r13 = MEM_BU(ctx->r2, 0XE);
            goto L_801D2E74;
    }
    goto skip_4;
    // 0x801D2E68: lbu         $t5, 0xE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XE);
    skip_4:
    // 0x801D2E6C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x801D2E70: lbu         $t5, 0xE($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XE);
L_801D2E74:
    // 0x801D2E74: ori         $t6, $v1, 0x20
    ctx->r14 = ctx->r3 | 0X20;
    // 0x801D2E78: beql        $t5, $zero, L_801D2E88
    if (ctx->r13 == 0) {
        // 0x801D2E7C: lbu         $t7, 0xF($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0XF);
            goto L_801D2E88;
    }
    goto skip_5;
    // 0x801D2E7C: lbu         $t7, 0xF($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XF);
    skip_5:
    // 0x801D2E80: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x801D2E84: lbu         $t7, 0xF($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XF);
L_801D2E88:
    // 0x801D2E88: ori         $t8, $v1, 0x40
    ctx->r24 = ctx->r3 | 0X40;
    // 0x801D2E8C: beql        $t7, $zero, L_801D2E9C
    if (ctx->r15 == 0) {
        // 0x801D2E90: lbu         $t9, 0x10($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X10);
            goto L_801D2E9C;
    }
    goto skip_6;
    // 0x801D2E90: lbu         $t9, 0x10($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X10);
    skip_6:
    // 0x801D2E94: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x801D2E98: lbu         $t9, 0x10($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X10);
L_801D2E9C:
    // 0x801D2E9C: ori         $t0, $v1, 0x80
    ctx->r8 = ctx->r3 | 0X80;
    // 0x801D2EA0: beq         $t9, $zero, L_801D2EAC
    if (ctx->r25 == 0) {
        // 0x801D2EA4: nop
    
            goto L_801D2EAC;
    }
    // 0x801D2EA4: nop

    // 0x801D2EA8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_801D2EAC:
    // 0x801D2EAC: jr          $ra
    // 0x801D2EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801D2EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801FCD1C_6280FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FCD1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801FCD20: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801FCD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801FCD28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801FCD2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FCD30: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x801FCD34: jal         0x801D2F40
    // 0x801FCD38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D2F40_5FE320(rdram, ctx);
        goto after_0;
    // 0x801FCD38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801FCD3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801FCD40: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FCD44: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801FCD48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801FCD4C: bc1fl       L_801FCDA0
    if (!c1cs) {
        // 0x801FCD50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801FCDA0;
    }
    goto skip_0;
    // 0x801FCD50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801FCD54: jal         0x801D614C
    // 0x801FCD58: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_801D614C_60152C(rdram, ctx);
        goto after_1;
    // 0x801FCD58: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x801FCD5C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801FCD60: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801FCD64: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x801FCD68: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x801FCD6C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801FCD70: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x801FCD74: sh          $t7, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r15;
    // 0x801FCD78: lw          $t8, 0x7C($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X7C);
    // 0x801FCD7C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x801FCD80: bne         $t9, $zero, L_801FCD9C
    if (ctx->r25 != 0) {
        // 0x801FCD84: sw          $t9, 0x7C($a2)
        MEM_W(0X7C, ctx->r6) = ctx->r25;
            goto L_801FCD9C;
    }
    // 0x801FCD84: sw          $t9, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r25;
    // 0x801FCD88: jal         0x801D31CC
    // 0x801FCD8C: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    func_801D31CC_5FE5AC(rdram, ctx);
        goto after_2;
    // 0x801FCD8C: addiu       $a1, $a1, -0x4BE8
    ctx->r5 = ADD32(ctx->r5, -0X4BE8);
    after_2:
    // 0x801FCD90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FCD94: jal         0x8003521C
    // 0x801FCD98: addiu       $a0, $a0, -0x339C
    ctx->r4 = ADD32(ctx->r4, -0X339C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801FCD98: addiu       $a0, $a0, -0x339C
    ctx->r4 = ADD32(ctx->r4, -0X339C);
    after_3:
L_801FCD9C:
    // 0x801FCD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801FCDA0:
    // 0x801FCDA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801FCDA4: jr          $ra
    // 0x801FCDA8: nop

    TRACE_RETURN()
    return;
    // 0x801FCDA8: nop

;}
RECOMP_FUNC void func_801E5274_610654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E5278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E527C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E5280: jal         0x801D31F0
    // 0x801E5284: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_801D31F0_5FE5D0(rdram, ctx);
        goto after_0;
    // 0x801E5284: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_0:
    // 0x801E5288: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E528C: nop

    // 0x801E5290: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x801E5294: nop

    // 0x801E5298: bc1fl       L_801E52C0
    if (!c1cs) {
        // 0x801E529C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E52C0;
    }
    goto skip_0;
    // 0x801E529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801E52A0: jal         0x80038BC8
    // 0x801E52A4: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x801E52A4: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x801E52A8: jal         0x80038BC8
    // 0x801E52AC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    func_80038BC8_397C8(rdram, ctx);
        goto after_2;
    // 0x801E52AC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_2:
    // 0x801E52B0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x801E52B4: jal         0x8003521C
    // 0x801E52B8: addiu       $a0, $a0, 0x52CC
    ctx->r4 = ADD32(ctx->r4, 0X52CC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x801E52B8: addiu       $a0, $a0, 0x52CC
    ctx->r4 = ADD32(ctx->r4, 0X52CC);
    after_3:
    // 0x801E52BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E52C0:
    // 0x801E52C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E52C4: jr          $ra
    // 0x801E52C8: nop

    TRACE_RETURN()
    return;
    // 0x801E52C8: nop

;}
RECOMP_FUNC void func_801D5BA8_600F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D5BA8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801D5BAC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D5BB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D5BB4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801D5BB8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801D5BBC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x801D5BC0: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801D5BC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5BC8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801D5BCC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801D5BD0: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x801D5BD4: jal         0x8000E630
    // 0x801D5BD8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_8000E630_F230(rdram, ctx);
        goto after_0;
    // 0x801D5BD8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x801D5BDC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801D5BE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x801D5BE4: lhu         $a1, 0x4E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X4E);
    // 0x801D5BE8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x801D5BEC: jal         0x8000E630
    // 0x801D5BF0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_8000E630_F230(rdram, ctx);
        goto after_1;
    // 0x801D5BF0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x801D5BF4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801D5BF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D5BFC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801D5C00: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x801D5C04: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x801D5C08: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x801D5C0C: lhu         $a3, 0x4A($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X4A);
    // 0x801D5C10: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x801D5C14: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D5C18: jal         0x801D5CB8
    // 0x801D5C1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_801D5CB8_601098(rdram, ctx);
        goto after_2;
    // 0x801D5C1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x801D5C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D5C24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801D5C28: jr          $ra
    // 0x801D5C2C: nop

    TRACE_RETURN()
    return;
    // 0x801D5C2C: nop

;}
RECOMP_FUNC void func_80205C00_630FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205C00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80205C04: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80205C08: lw          $v0, -0x10C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X10C0);
    // 0x80205C0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80205C10: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80205C14: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80205C18: lbu         $t6, 0x11($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X11);
    // 0x80205C1C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80205C20: lw          $s0, 0x18($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X18);
    // 0x80205C24: bnel        $t6, $zero, L_80205C88
    if (ctx->r14 != 0) {
        // 0x80205C28: lw          $t9, 0x38($s1)
        ctx->r25 = MEM_W(ctx->r17, 0X38);
            goto L_80205C88;
    }
    goto skip_0;
    // 0x80205C28: lw          $t9, 0x38($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X38);
    skip_0:
    // 0x80205C2C: lbu         $t7, 0x12($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X12);
    // 0x80205C30: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80205C34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80205C38: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80205C3C: sb          $t8, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r24;
    // 0x80205C40: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80205C44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80205C48: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80205C4C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80205C50: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80205C54: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80205C58: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80205C5C: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80205C60: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80205C64: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80205C68: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80205C6C: jal         0x801E1B30
    // 0x80205C70: nop

    func_801E1B30_60CF10(rdram, ctx);
        goto after_0;
    // 0x80205C70: nop

    after_0:
    // 0x80205C74: jal         0x80034F20
    // 0x80205C78: nop

    func_80034F20_35B20(rdram, ctx);
        goto after_1;
    // 0x80205C78: nop

    after_1:
    // 0x80205C7C: b           L_80205D54
    // 0x80205C80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80205D54;
    // 0x80205C80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80205C84: lw          $t9, 0x38($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X38);
L_80205C88:
    // 0x80205C88: beql        $t9, $zero, L_80205D54
    if (ctx->r25 == 0) {
        // 0x80205C8C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80205D54;
    }
    goto skip_1;
    // 0x80205C8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_1:
    // 0x80205C90: lbu         $t0, 0x12($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X12);
    // 0x80205C94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80205C98: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80205C9C: jal         0x801D3854
    // 0x80205CA0: sb          $t1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r9;
    func_801D3854_5FEC34(rdram, ctx);
        goto after_2;
    // 0x80205CA0: sb          $t1, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r9;
    after_2:
    // 0x80205CA4: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80205CA8: bne         $at, $zero, L_80205CCC
    if (ctx->r1 != 0) {
        // 0x80205CAC: nop
    
            goto L_80205CCC;
    }
    // 0x80205CAC: nop

    // 0x80205CB0: jal         0x801D3A68
    // 0x80205CB4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_801D3A68_5FEE48(rdram, ctx);
        goto after_3;
    // 0x80205CB4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_3:
    // 0x80205CB8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80205CBC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x80205CC0: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x80205CC4: jal         0x801D7438
    // 0x80205CC8: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    func_801D7438_602818(rdram, ctx);
        goto after_4;
    // 0x80205CC8: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    after_4:
L_80205CCC:
    // 0x80205CCC: jal         0x80034F20
    // 0x80205CD0: nop

    func_80034F20_35B20(rdram, ctx);
        goto after_5;
    // 0x80205CD0: nop

    after_5:
    // 0x80205CD4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80205CD8: lw          $a1, -0x1130($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1130);
    // 0x80205CDC: lui         $a3, 0x44BB
    ctx->r7 = S32(0X44BB << 16);
    // 0x80205CE0: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x80205CE4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    // 0x80205CE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80205CEC: jal         0x8000F3D8
    // 0x80205CF0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    func_8000F3D8_FFD8(rdram, ctx);
        goto after_6;
    // 0x80205CF0: addiu       $a1, $a1, 0xA0
    ctx->r5 = ADD32(ctx->r5, 0XA0);
    after_6:
    // 0x80205CF4: jal         0x801CEE80
    // 0x80205CF8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_801CEE80_5FA260(rdram, ctx);
        goto after_7;
    // 0x80205CF8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x80205CFC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80205D00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80205D04: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80205D08: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80205D0C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80205D10: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80205D14: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80205D18: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80205D1C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80205D20: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80205D24: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80205D28: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80205D2C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80205D30: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80205D34: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80205D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80205D3C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80205D40: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80205D44: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80205D48: jal         0x801E210C
    // 0x80205D4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    func_801E210C_60D4EC(rdram, ctx);
        goto after_8;
    // 0x80205D4C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x80205D50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80205D54:
    // 0x80205D54: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80205D58: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80205D5C: jr          $ra
    // 0x80205D60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80205D60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80204624_62FA04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80204624: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80204628: addiu       $v0, $v0, -0x10C0
    ctx->r2 = ADD32(ctx->r2, -0X10C0);
    // 0x8020462C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80204630: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80204634: sb          $zero, 0x7($t6)
    MEM_B(0X7, ctx->r14) = 0;
    // 0x80204638: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8020463C: sb          $zero, 0x9($t7)
    MEM_B(0X9, ctx->r15) = 0;
    // 0x80204640: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80204644: sb          $zero, 0xB($t8)
    MEM_B(0XB, ctx->r24) = 0;
    // 0x80204648: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8020464C: sb          $zero, 0xD($t9)
    MEM_B(0XD, ctx->r25) = 0;
    // 0x80204650: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80204654: sb          $zero, 0xF($t0)
    MEM_B(0XF, ctx->r8) = 0;
    // 0x80204658: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8020465C: jr          $ra
    // 0x80204660: sb          $t1, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x80204660: sb          $t1, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r9;
;}
RECOMP_FUNC void func_801FBCA8_627088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FBCA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801FBCAC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801FBCB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801FBCB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801FBCB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801FBCBC: jal         0x801D3018
    // 0x801FBCC0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_801D3018_5FE3F8(rdram, ctx);
        goto after_0;
    // 0x801FBCC0: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_0:
    // 0x801FBCC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBCC8: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x801FBCCC: jal         0x801D3B18
    // 0x801FBCD0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_1;
    // 0x801FBCD0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x801FBCD4: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x801FBCD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBCDC: jal         0x801D6244
    // 0x801FBCE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_801D6244_601624(rdram, ctx);
        goto after_2;
    // 0x801FBCE0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x801FBCE4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FBCE8: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x801FBCEC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x801FBCF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBCF4: jal         0x801D6330
    // 0x801FBCF8: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    func_801D6330_601710(rdram, ctx);
        goto after_3;
    // 0x801FBCF8: lui         $a1, 0xC2A0
    ctx->r5 = S32(0XC2A0 << 16);
    after_3:
    // 0x801FBCFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FBD00: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x801FBD04: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x801FBD08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801FBD0C: jal         0x801D641C
    // 0x801FBD10: lui         $a1, 0xC42F
    ctx->r5 = S32(0XC42F << 16);
    func_801D641C_6017FC(rdram, ctx);
        goto after_4;
    // 0x801FBD10: lui         $a1, 0xC42F
    ctx->r5 = S32(0XC42F << 16);
    after_4:
    // 0x801FBD14: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x801FBD18: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x801FBD1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x801FBD20: bne         $t8, $at, L_801FBD30
    if (ctx->r24 != ctx->r1) {
        // 0x801FBD24: lui         $a0, 0x8020
        ctx->r4 = S32(0X8020 << 16);
            goto L_801FBD30;
    }
    // 0x801FBD24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x801FBD28: jal         0x8003521C
    // 0x801FBD2C: addiu       $a0, $a0, -0x42BC
    ctx->r4 = ADD32(ctx->r4, -0X42BC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x801FBD2C: addiu       $a0, $a0, -0x42BC
    ctx->r4 = ADD32(ctx->r4, -0X42BC);
    after_5:
L_801FBD30:
    // 0x801FBD30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801FBD34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801FBD38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801FBD3C: jr          $ra
    // 0x801FBD40: nop

    TRACE_RETURN()
    return;
    // 0x801FBD40: nop

;}
RECOMP_FUNC void func_801F4AC8_61FEA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4ACC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F4AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4AD4: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x801F4AD8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x801F4ADC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F4AE0: jal         0x801F72B4
    // 0x801F4AE4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_801F72B4_622694(rdram, ctx);
        goto after_0;
    // 0x801F4AE4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_0:
    // 0x801F4AE8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x801F4AEC: lw          $t6, 0x7C($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X7C);
    // 0x801F4AF0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x801F4AF4: bgez        $t7, L_801F4B3C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801F4AF8: sw          $t7, 0x7C($a3)
        MEM_W(0X7C, ctx->r7) = ctx->r15;
            goto L_801F4B3C;
    }
    // 0x801F4AF8: sw          $t7, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->r15;
    // 0x801F4AFC: beql        $v0, $zero, L_801F4B40
    if (ctx->r2 == 0) {
        // 0x801F4B00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4B40;
    }
    goto skip_0;
    // 0x801F4B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F4B04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801F4B08: lwc1        $f6, 0x74($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X74);
    // 0x801F4B0C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x801F4B10: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801F4B14: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x801F4B18: nop

    // 0x801F4B1C: bc1fl       L_801F4B40
    if (!c1cs) {
        // 0x801F4B20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F4B40;
    }
    goto skip_1;
    // 0x801F4B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x801F4B24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801F4B28: lui         $a0, 0x801F
    ctx->r4 = S32(0X801F << 16);
    // 0x801F4B2C: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    // 0x801F4B30: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x801F4B34: jal         0x8003521C
    // 0x801F4B38: sw          $zero, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = 0;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x801F4B38: sw          $zero, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = 0;
    after_1:
L_801F4B3C:
    // 0x801F4B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F4B40:
    // 0x801F4B40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4B44: jr          $ra
    // 0x801F4B48: nop

    TRACE_RETURN()
    return;
    // 0x801F4B48: nop

;}
RECOMP_FUNC void func_80205734_630B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80205734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80205738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8020573C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80205740: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80205744: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80205748: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x8020574C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80205750: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80205754: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80205758: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8020575C: jal         0x801D3B18
    // 0x80205760: nop

    func_801D3B18_5FEEF8(rdram, ctx);
        goto after_0;
    // 0x80205760: nop

    after_0:
    // 0x80205764: beq         $v0, $zero, L_802057B8
    if (ctx->r2 == 0) {
        // 0x80205768: nop
    
            goto L_802057B8;
    }
    // 0x80205768: nop

    // 0x8020576C: jal         0x8000DD58
    // 0x80205770: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8000DD58_E958(rdram, ctx);
        goto after_1;
    // 0x80205770: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x80205774: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80205778: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8020577C: mflo        $a1
    ctx->r5 = lo;
    // 0x80205780: addiu       $a1, $a1, 0x12
    ctx->r5 = ADD32(ctx->r5, 0X12);
    // 0x80205784: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80205788: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8020578C: jal         0x80203BC0
    // 0x80205790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80203BC0_62EFA0(rdram, ctx);
        goto after_2;
    // 0x80205790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80205794: jal         0x8000DD58
    // 0x80205798: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8000DD58_E958(rdram, ctx);
        goto after_3;
    // 0x80205798: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x8020579C: addiu       $t7, $v0, 0x50
    ctx->r15 = ADD32(ctx->r2, 0X50);
    // 0x802057A0: addiu       $t8, $zero, 0x96
    ctx->r24 = ADD32(0, 0X96);
    // 0x802057A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802057A8: sw          $t7, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r15;
    // 0x802057AC: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x802057B0: jal         0x8003521C
    // 0x802057B4: addiu       $a0, $a0, 0x580C
    ctx->r4 = ADD32(ctx->r4, 0X580C);
    func_8003521C_35E1C(rdram, ctx);
        goto after_4;
    // 0x802057B4: addiu       $a0, $a0, 0x580C
    ctx->r4 = ADD32(ctx->r4, 0X580C);
    after_4:
L_802057B8:
    // 0x802057B8: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x802057BC: lw          $t9, -0x10C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X10C0);
    // 0x802057C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802057C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802057C8: lbu         $t0, 0x11($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X11);
    // 0x802057CC: bne         $t0, $at, L_802057F0
    if (ctx->r8 != ctx->r1) {
        // 0x802057D0: nop
    
            goto L_802057F0;
    }
    // 0x802057D0: nop

    // 0x802057D4: jal         0x8003521C
    // 0x802057D8: addiu       $a0, $a0, 0x58B0
    ctx->r4 = ADD32(ctx->r4, 0X58B0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x802057D8: addiu       $a0, $a0, 0x58B0
    ctx->r4 = ADD32(ctx->r4, 0X58B0);
    after_5:
    // 0x802057DC: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x802057E0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x802057E4: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x802057E8: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x802057EC: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
L_802057F0:
    // 0x802057F0: jal         0x80205C00
    // 0x802057F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80205C00_630FE0(rdram, ctx);
        goto after_6;
    // 0x802057F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x802057F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802057FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80205804: jr          $ra
    // 0x80205808: nop

    TRACE_RETURN()
    return;
    // 0x80205808: nop

;}
