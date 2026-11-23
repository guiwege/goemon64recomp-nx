#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_801E14D0_59D3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E14D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E14D4: jr          $ra
    // 0x801E14D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E14D8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DE104_59A014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801DE108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801DE10C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801DE110: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801DE114: jal         0x801E5328
    // 0x801DE118: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801E5328_5A1238(rdram, ctx);
        goto after_0;
    // 0x801DE118: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE11C: beql        $v0, $zero, L_801DE14C
    if (ctx->r2 == 0) {
        // 0x801DE120: lhu         $t7, 0x98($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X98);
            goto L_801DE14C;
    }
    goto skip_0;
    // 0x801DE120: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
    skip_0:
    // 0x801DE124: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801DE128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE12C: jal         0x801E20A0
    // 0x801DE130: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    func_801E20A0_59DFB0(rdram, ctx);
        goto after_1;
    // 0x801DE130: sh          $zero, 0x0($t6)
    MEM_H(0X0, ctx->r14) = 0;
    after_1:
    // 0x801DE134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE138: jal         0x801DACDC
    // 0x801DE13C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801DE13C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_2:
    // 0x801DE140: b           L_801DE1D4
    // 0x801DE144: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DE1D4;
    // 0x801DE144: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    // 0x801DE148: lhu         $t7, 0x98($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X98);
L_801DE14C:
    // 0x801DE14C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x801DE150: addiu       $t9, $t9, -0x4A54
    ctx->r25 = ADD32(ctx->r25, -0X4A54);
    // 0x801DE154: bne         $t7, $zero, L_801DE180
    if (ctx->r15 != 0) {
        // 0x801DE158: nop
    
            goto L_801DE180;
    }
    // 0x801DE158: nop

    // 0x801DE15C: jal         0x801E3324
    // 0x801DE160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3324_59F234(rdram, ctx);
        goto after_3;
    // 0x801DE160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801DE164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE168: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x801DE16C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x801DE170: jal         0x801DAC7C
    // 0x801DE174: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    func_801DAC7C_596B8C(rdram, ctx);
        goto after_4;
    // 0x801DE174: lbu         $a3, 0xDB($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XDB);
    after_4:
    // 0x801DE178: b           L_801DE1D4
    // 0x801DE17C: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
        goto L_801DE1D4;
    // 0x801DE17C: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
L_801DE180:
    // 0x801DE180: jalr        $t9
    // 0x801DE184: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x801DE184: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x801DE188: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE18C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801DE190: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801DE194: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x801DE198: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x801DE19C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x801DE1A0: nop

    // 0x801DE1A4: bc1fl       L_801DE1D4
    if (!c1cs) {
        // 0x801DE1A8: lui         $a1, 0xBF19
        ctx->r5 = S32(0XBF19 << 16);
            goto L_801DE1D4;
    }
    goto skip_1;
    // 0x801DE1A8: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
    skip_1:
    // 0x801DE1AC: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801DE1B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801DE1B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801DE1B8: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x801DE1BC: lhu         $t1, 0x94($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X94);
    // 0x801DE1C0: addiu       $t2, $t1, 0x200
    ctx->r10 = ADD32(ctx->r9, 0X200);
    // 0x801DE1C4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x801DE1C8: jal         0x801DACDC
    // 0x801DE1CC: sh          $t3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r11;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801DE1CC: sh          $t3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r11;
    after_6:
    // 0x801DE1D0: lui         $a1, 0xBF19
    ctx->r5 = S32(0XBF19 << 16);
L_801DE1D4:
    // 0x801DE1D4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x801DE1D8: jal         0x801E3B9C
    // 0x801DE1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E3B9C_59FAAC(rdram, ctx);
        goto after_7;
    // 0x801DE1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x801DE1E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801DE1E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801DE1E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801DE1EC: jr          $ra
    // 0x801DE1F0: nop

    TRACE_RETURN()
    return;
    // 0x801DE1F0: nop

;}
RECOMP_FUNC void func_801F4C20_5B0B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4C20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801F4C24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F4C28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801F4C2C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801F4C30: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x801F4C34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801F4C38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F4C3C: jal         0x801E8C98
    // 0x801F4C40: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801E8C98_5A4BA8(rdram, ctx);
        goto after_0;
    // 0x801F4C40: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_0:
    // 0x801F4C44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801F4C48: jal         0x801F4D94
    // 0x801F4C4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_801F4D94_5B0CA4(rdram, ctx);
        goto after_1;
    // 0x801F4C4C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x801F4C50: lbu         $t7, 0x30($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X30);
    // 0x801F4C54: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x801F4C58: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801F4C5C: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801F4C60: bgez        $v1, L_801F4CA8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x801F4C64: sb          $t8, 0x30($s0)
        MEM_B(0X30, ctx->r16) = ctx->r24;
            goto L_801F4CA8;
    }
    // 0x801F4C64: sb          $t8, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r24;
    // 0x801F4C68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F4C6C: lw          $t9, 0x5C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4C70: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4C74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801F4C78: swc1        $f0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f0.u32l;
    // 0x801F4C7C: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801F4C80: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F4C84: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F4C88: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x801F4C8C: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801F4C90: swc1        $f4, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f4.u32l;
    // 0x801F4C94: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    // 0x801F4C98: jal         0x801DACDC
    // 0x801F4C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F4C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801F4CA0: b           L_801F4D84
    // 0x801F4CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F4D84;
    // 0x801F4CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4CA8:
    // 0x801F4CA8: beql        $v1, $at, L_801F4CCC
    if (ctx->r3 == ctx->r1) {
        // 0x801F4CAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F4CCC;
    }
    goto skip_0;
    // 0x801F4CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801F4CB0: lhu         $t0, 0x96($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X96);
    // 0x801F4CB4: bnel        $t0, $zero, L_801F4CCC
    if (ctx->r8 != 0) {
        // 0x801F4CB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F4CCC;
    }
    goto skip_1;
    // 0x801F4CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x801F4CBC: jal         0x801F4D94
    // 0x801F4CC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801F4D94_5B0CA4(rdram, ctx);
        goto after_3;
    // 0x801F4CC0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801F4CC4: beq         $v0, $zero, L_801F4D30
    if (ctx->r2 == 0) {
        // 0x801F4CC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801F4D30;
    }
    // 0x801F4CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_801F4CCC:
    // 0x801F4CCC: jal         0x801E8D30
    // 0x801F4CD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_801E8D30_5A4C40(rdram, ctx);
        goto after_4;
    // 0x801F4CD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x801F4CD4: beq         $v0, $zero, L_801F4CE0
    if (ctx->r2 == 0) {
        // 0x801F4CD8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_801F4CE0;
    }
    // 0x801F4CD8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x801F4CDC: sb          $t1, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r9;
L_801F4CE0:
    // 0x801F4CE0: jal         0x80038BC8
    // 0x801F4CE4: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_80038BC8_397C8(rdram, ctx);
        goto after_5;
    // 0x801F4CE4: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_5:
    // 0x801F4CE8: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4CEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F4CF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801F4CF4: sh          $zero, 0x30($t2)
    MEM_H(0X30, ctx->r10) = 0;
    // 0x801F4CF8: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4CFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801F4D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4D04: swc1        $f0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f0.u32l;
    // 0x801F4D08: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D0C: swc1        $f0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D10: swc1        $f0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D14: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D18: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D1C: swc1        $f6, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f6.u32l;
    // 0x801F4D20: jal         0x801DACDC
    // 0x801F4D24: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_6;
    // 0x801F4D24: lbu         $a1, 0x2F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2F);
    after_6:
    // 0x801F4D28: b           L_801F4D84
    // 0x801F4D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801F4D84;
    // 0x801F4D2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4D30:
    // 0x801F4D30: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4D34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801F4D38: lhu         $v1, 0x30($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X30);
    // 0x801F4D3C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x801F4D40: addiu       $t4, $v1, 0x1
    ctx->r12 = ADD32(ctx->r3, 0X1);
    // 0x801F4D44: beq         $a0, $zero, L_801F4D80
    if (ctx->r4 == 0) {
        // 0x801F4D48: sh          $t4, 0x30($v0)
        MEM_H(0X30, ctx->r2) = ctx->r12;
            goto L_801F4D80;
    }
    // 0x801F4D48: sh          $t4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r12;
    // 0x801F4D4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801F4D50: lw          $t5, 0x5C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F4D58: swc1        $f0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f0.u32l;
    // 0x801F4D5C: jal         0x801E8D30
    // 0x801F4D60: swc1        $f0, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f0.u32l;
    func_801E8D30_5A4C40(rdram, ctx);
        goto after_7;
    // 0x801F4D60: swc1        $f0, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f0.u32l;
    after_7:
    // 0x801F4D64: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x801F4D68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801F4D6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801F4D70: jal         0x801EA5E4
    // 0x801F4D74: lw          $a2, 0x88($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X88);
    func_801EA5E4_5A64F4(rdram, ctx);
        goto after_8;
    // 0x801F4D74: lw          $a2, 0x88($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X88);
    after_8:
    // 0x801F4D78: jal         0x80038BC8
    // 0x801F4D7C: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    func_80038BC8_397C8(rdram, ctx);
        goto after_9;
    // 0x801F4D7C: addiu       $a0, $zero, 0x21C
    ctx->r4 = ADD32(0, 0X21C);
    after_9:
L_801F4D80:
    // 0x801F4D80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801F4D84:
    // 0x801F4D84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801F4D88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801F4D8C: jr          $ra
    // 0x801F4D90: nop

    TRACE_RETURN()
    return;
    // 0x801F4D90: nop

;}
RECOMP_FUNC void func_801E1030_59CF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E1030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E1034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E1038: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801E103C: jal         0x801E1150
    // 0x801E1040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E1150_59D060(rdram, ctx);
        goto after_0;
    // 0x801E1040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E1044: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E1048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E104C: lbu         $v0, 0x60($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X60);
    // 0x801E1050: beq         $v0, $at, L_801E1060
    if (ctx->r2 == ctx->r1) {
        // 0x801E1054: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801E1060;
    }
    // 0x801E1054: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801E1058: bnel        $v0, $at, L_801E106C
    if (ctx->r2 != ctx->r1) {
        // 0x801E105C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801E106C;
    }
    goto skip_0;
    // 0x801E105C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_801E1060:
    // 0x801E1060: jal         0x801E84A4
    // 0x801E1064: nop

    func_801E84A4_5A43B4(rdram, ctx);
        goto after_1;
    // 0x801E1064: nop

    after_1:
    // 0x801E1068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801E106C:
    // 0x801E106C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E1070: jr          $ra
    // 0x801E1074: nop

    TRACE_RETURN()
    return;
    // 0x801E1074: nop

;}
RECOMP_FUNC void func_801E5EC4_5A1DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E5EC4: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x801E5EC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E5ECC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E5ED0: sw          $a0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r4;
    // 0x801E5ED4: sw          $a1, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r5;
    // 0x801E5ED8: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x801E5EDC: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E5EE0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x801E5EE4: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x801E5EE8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x801E5EEC: lwc1        $f4, 0xE4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x801E5EF0: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x801E5EF4: addiu       $t9, $sp, 0x2C
    ctx->r25 = ADD32(ctx->r29, 0X2C);
    // 0x801E5EF8: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x801E5EFC: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5F00: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E5F04: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5F08: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E5F0C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E5F10: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x801E5F14: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    // 0x801E5F18: jal         0x80033898
    // 0x801E5F1C: sw          $v1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r3;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E5F1C: sw          $v1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E5F20: lw          $t0, 0x158($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X158);
    // 0x801E5F24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E5F28: lw          $v0, 0x14C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14C);
    // 0x801E5F2C: bne         $t0, $zero, L_801E5F44
    if (ctx->r8 != 0) {
        // 0x801E5F30: lw          $v1, 0x148($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X148);
            goto L_801E5F44;
    }
    // 0x801E5F30: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E5F34: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E5F38: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E5F3C: b           L_801E5F54
    // 0x801E5F40: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
        goto L_801E5F54;
    // 0x801E5F40: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
L_801E5F44:
    // 0x801E5F44: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E5F48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E5F4C: nop

    // 0x801E5F50: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
L_801E5F54:
    // 0x801E5F54: bnel        $t0, $zero, L_801E5F68
    if (ctx->r8 != 0) {
        // 0x801E5F58: swc1        $f16, 0x140($sp)
        MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
            goto L_801E5F68;
    }
    goto skip_0;
    // 0x801E5F58: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    skip_0:
    // 0x801E5F5C: b           L_801E5F68
    // 0x801E5F60: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
        goto L_801E5F68;
    // 0x801E5F60: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
    // 0x801E5F64: swc1        $f16, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f16.u32l;
L_801E5F68:
    // 0x801E5F68: bne         $t0, $zero, L_801E5F78
    if (ctx->r8 != 0) {
        // 0x801E5F6C: lw          $t1, 0x150($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X150);
            goto L_801E5F78;
    }
    // 0x801E5F6C: lw          $t1, 0x150($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X150);
    // 0x801E5F70: b           L_801E5F84
    // 0x801E5F74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_801E5F84;
    // 0x801E5F74: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E5F78:
    // 0x801E5F78: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x801E5F7C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E5F80: nop

L_801E5F84:
    // 0x801E5F84: lwc1        $f6, 0xE4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XE4);
    // 0x801E5F88: addiu       $t2, $sp, 0x140
    ctx->r10 = ADD32(ctx->r29, 0X140);
    // 0x801E5F8C: addiu       $t3, $sp, 0x13C
    ctx->r11 = ADD32(ctx->r29, 0X13C);
    // 0x801E5F90: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801E5F94: addiu       $a3, $sp, 0x144
    ctx->r7 = ADD32(ctx->r29, 0X144);
    // 0x801E5F98: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5F9C: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5FA0: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E5FA4: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5FA8: sw          $v1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r3;
    // 0x801E5FAC: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    // 0x801E5FB0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x801E5FB4: jal         0x80033898
    // 0x801E5FB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E5FB8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x801E5FBC: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E5FC0: lwc1        $f18, 0x144($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X144);
    // 0x801E5FC4: lwc1        $f16, 0x140($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X140);
    // 0x801E5FC8: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E5FCC: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E5FD0: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E5FD4: add.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x801E5FD8: lwc1        $f14, 0x13C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x801E5FDC: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5FE0: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801E5FE4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801E5FE8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E5FEC: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801E5FF0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E5FF4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E5FF8: addiu       $a0, $sp, 0xDC
    ctx->r4 = ADD32(ctx->r29, 0XDC);
    // 0x801E5FFC: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801E6000: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E6004: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E6008: jal         0x8002A458
    // 0x801E600C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_2;
    // 0x801E600C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x801E6010: lw          $t0, 0x158($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X158);
    // 0x801E6014: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E6018: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E601C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E6020: lw          $v0, 0x14C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14C);
    // 0x801E6024: bne         $t0, $zero, L_801E603C
    if (ctx->r8 != 0) {
        // 0x801E6028: lw          $v1, 0x148($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X148);
            goto L_801E603C;
    }
    // 0x801E6028: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E602C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801E6030: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E6034: b           L_801E604C
    // 0x801E6038: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
        goto L_801E604C;
    // 0x801E6038: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
L_801E603C:
    // 0x801E603C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x801E6040: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E6044: nop

    // 0x801E6048: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
L_801E604C:
    // 0x801E604C: bnel        $t0, $zero, L_801E6060
    if (ctx->r8 != 0) {
        // 0x801E6050: swc1        $f16, 0x134($sp)
        MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
            goto L_801E6060;
    }
    goto skip_1;
    // 0x801E6050: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    skip_1:
    // 0x801E6054: b           L_801E6060
    // 0x801E6058: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
        goto L_801E6060;
    // 0x801E6058: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
    // 0x801E605C: swc1        $f16, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f16.u32l;
L_801E6060:
    // 0x801E6060: bne         $t0, $zero, L_801E6070
    if (ctx->r8 != 0) {
        // 0x801E6064: lw          $t4, 0x150($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X150);
            goto L_801E6070;
    }
    // 0x801E6064: lw          $t4, 0x150($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X150);
    // 0x801E6068: b           L_801E607C
    // 0x801E606C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_801E607C;
    // 0x801E606C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E6070:
    // 0x801E6070: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x801E6074: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E6078: nop

L_801E607C:
    // 0x801E607C: lwc1        $f8, 0xE4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0XE4);
    // 0x801E6080: addiu       $t5, $sp, 0x134
    ctx->r13 = ADD32(ctx->r29, 0X134);
    // 0x801E6084: addiu       $t7, $sp, 0x130
    ctx->r15 = ADD32(ctx->r29, 0X130);
    // 0x801E6088: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x801E608C: addiu       $a3, $sp, 0x138
    ctx->r7 = ADD32(ctx->r29, 0X138);
    // 0x801E6090: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    // 0x801E6094: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6098: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E609C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E60A0: sw          $v1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r3;
    // 0x801E60A4: sw          $v0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r2;
    // 0x801E60A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E60AC: jal         0x80033898
    // 0x801E60B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80033898_34498(rdram, ctx);
        goto after_3;
    // 0x801E60B0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x801E60B4: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E60B8: lwc1        $f18, 0x138($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X138);
    // 0x801E60BC: lwc1        $f16, 0x134($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X134);
    // 0x801E60C0: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E60C4: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E60C8: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E60CC: add.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x801E60D0: lwc1        $f14, 0x130($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X130);
    // 0x801E60D4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E60D8: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801E60DC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801E60E0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E60E4: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801E60E8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E60EC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E60F0: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x801E60F4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801E60F8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E60FC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E6100: jal         0x8002A458
    // 0x801E6104: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_4;
    // 0x801E6104: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x801E6108: lw          $t0, 0x158($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X158);
    // 0x801E610C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E6110: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801E6114: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E6118: lw          $v0, 0x14C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14C);
    // 0x801E611C: bne         $t0, $zero, L_801E612C
    if (ctx->r8 != 0) {
        // 0x801E6120: lw          $v1, 0x148($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X148);
            goto L_801E612C;
    }
    // 0x801E6120: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E6124: b           L_801E6130
    // 0x801E6128: swc1        $f16, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f16.u32l;
        goto L_801E6130;
    // 0x801E6128: swc1        $f16, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f16.u32l;
L_801E612C:
    // 0x801E612C: swc1        $f16, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f16.u32l;
L_801E6130:
    // 0x801E6130: bne         $t0, $zero, L_801E6140
    if (ctx->r8 != 0) {
        // 0x801E6134: lui         $at, 0x41A8
        ctx->r1 = S32(0X41A8 << 16);
            goto L_801E6140;
    }
    // 0x801E6134: lui         $at, 0x41A8
    ctx->r1 = S32(0X41A8 << 16);
    // 0x801E6138: b           L_801E6144
    // 0x801E613C: swc1        $f2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f2.u32l;
        goto L_801E6144;
    // 0x801E613C: swc1        $f2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f2.u32l;
L_801E6140:
    // 0x801E6140: swc1        $f2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f2.u32l;
L_801E6144:
    // 0x801E6144: bne         $t0, $zero, L_801E6154
    if (ctx->r8 != 0) {
        // 0x801E6148: lw          $t6, 0x150($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X150);
            goto L_801E6154;
    }
    // 0x801E6148: lw          $t6, 0x150($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X150);
    // 0x801E614C: b           L_801E615C
    // 0x801E6150: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_801E615C;
    // 0x801E6150: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E6154:
    // 0x801E6154: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801E6158: nop

L_801E615C:
    // 0x801E615C: lwc1        $f6, 0xE4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0XE4);
    // 0x801E6160: addiu       $t8, $sp, 0x128
    ctx->r24 = ADD32(ctx->r29, 0X128);
    // 0x801E6164: addiu       $t9, $sp, 0x124
    ctx->r25 = ADD32(ctx->r29, 0X124);
    // 0x801E6168: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x801E616C: addiu       $a3, $sp, 0x12C
    ctx->r7 = ADD32(ctx->r29, 0X12C);
    // 0x801E6170: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    // 0x801E6174: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E6178: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E617C: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E6180: sw          $v1, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r3;
    // 0x801E6184: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E6188: jal         0x80033898
    // 0x801E618C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E618C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x801E6190: lw          $v1, 0x148($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X148);
    // 0x801E6194: lwc1        $f18, 0x12C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x801E6198: lwc1        $f16, 0x128($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X128);
    // 0x801E619C: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801E61A0: lwc1        $f12, 0xC($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801E61A4: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801E61A8: add.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x801E61AC: lwc1        $f14, 0x124($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X124);
    // 0x801E61B0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E61B4: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x801E61B8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x801E61BC: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E61C0: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x801E61C4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x801E61C8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E61CC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x801E61D0: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x801E61D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x801E61D8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E61DC: jal         0x8002A458
    // 0x801E61E0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    func_8002A458_2B058(rdram, ctx);
        goto after_6;
    // 0x801E61E0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x801E61E4: lh          $v1, 0x114($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X114);
    // 0x801E61E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x801E61EC: lh          $t1, 0xCC($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XCC);
    // 0x801E61F0: bne         $v1, $zero, L_801E6210
    if (ctx->r3 != 0) {
        // 0x801E61F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_801E6210;
    }
    // 0x801E61F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E61F8: bne         $t1, $zero, L_801E6210
    if (ctx->r9 != 0) {
        // 0x801E61FC: lh          $t2, 0x84($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X84);
            goto L_801E6210;
    }
    // 0x801E61FC: lh          $t2, 0x84($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X84);
    // 0x801E6200: bne         $t2, $zero, L_801E6210
    if (ctx->r10 != 0) {
        // 0x801E6204: lw          $t3, 0x150($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X150);
            goto L_801E6210;
    }
    // 0x801E6204: lw          $t3, 0x150($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X150);
    // 0x801E6208: b           L_801E62C8
    // 0x801E620C: lwc1        $f0, 0xE4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0XE4);
        goto L_801E62C8;
    // 0x801E620C: lwc1        $f0, 0xE4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0XE4);
L_801E6210:
    // 0x801E6210: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x801E6214: bne         $v1, $v0, L_801E6244
    if (ctx->r3 != ctx->r2) {
        // 0x801E6218: lh          $t4, 0xCC($sp)
        ctx->r12 = MEM_H(ctx->r29, 0XCC);
            goto L_801E6244;
    }
    // 0x801E6218: lh          $t4, 0xCC($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XCC);
    // 0x801E621C: lwc1        $f0, 0xF4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x801E6220: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x801E6224: lwc1        $f14, 0xFC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x801E6228: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801E622C: nop

    // 0x801E6230: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E6234: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E6238: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E623C: b           L_801E6248
    // 0x801E6240: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
        goto L_801E6248;
    // 0x801E6240: add.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f10.fl;
L_801E6244:
    // 0x801E6244: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_801E6248:
    // 0x801E6248: bne         $t4, $v0, L_801E6270
    if (ctx->r12 != ctx->r2) {
        // 0x801E624C: lwc1        $f12, 0xAC($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
            goto L_801E6270;
    }
    // 0x801E624C: lwc1        $f12, 0xAC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x801E6250: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801E6254: lwc1        $f14, 0xB0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x801E6258: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x801E625C: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801E6260: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801E6264: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801E6268: b           L_801E6274
    // 0x801E626C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
        goto L_801E6274;
    // 0x801E626C: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
L_801E6270:
    // 0x801E6270: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_801E6274:
    // 0x801E6274: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x801E6278: nop

    // 0x801E627C: bc1fl       L_801E6290
    if (!c1cs) {
        // 0x801E6280: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_801E6290;
    }
    goto skip_2;
    // 0x801E6280: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_2:
    // 0x801E6284: b           L_801E6290
    // 0x801E6288: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_801E6290;
    // 0x801E6288: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E628C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_801E6290:
    // 0x801E6290: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    // 0x801E6294: lw          $t5, 0x150($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X150);
    // 0x801E6298: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x801E629C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E62A0: lwc1        $f10, 0xE4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0XE4);
    // 0x801E62A4: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x801E62A8: cvt.d.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.d = CVT_D_S(ctx->f2.fl);
    // 0x801E62AC: c.lt.d      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.d < ctx->f4.d;
    // 0x801E62B0: nop

    // 0x801E62B4: bc1fl       L_801E62C8
    if (!c1cs) {
        // 0x801E62B8: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_801E62C8;
    }
    goto skip_3;
    // 0x801E62B8: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_3:
    // 0x801E62BC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x801E62C0: nop

    // 0x801E62C4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_801E62C8:
    // 0x801E62C8: jr          $ra
    // 0x801E62CC: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    TRACE_RETURN()
    return;
    // 0x801E62CC: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_801F4550_5B0460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F4554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F455C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801F4560: jal         0x801F4B6C
    // 0x801F4564: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801F4B6C_5B0A7C(rdram, ctx);
        goto after_0;
    // 0x801F4564: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801F4568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F456C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4570: jr          $ra
    // 0x801F4574: nop

    TRACE_RETURN()
    return;
    // 0x801F4574: nop

;}
RECOMP_FUNC void func_801E2C50_59EB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2C58: jal         0x801E3834
    // 0x801E2C5C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_801E3834_59F744(rdram, ctx);
        goto after_0;
    // 0x801E2C5C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x801E2C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2C64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2C68: jr          $ra
    // 0x801E2C6C: nop

    TRACE_RETURN()
    return;
    // 0x801E2C6C: nop

;}
RECOMP_FUNC void func_801EA4E8_5A63F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EA4E8: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801EA4EC: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801EA4F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x801EA4F4: lbu         $t7, 0x60($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X60);
    // 0x801EA4F8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801EA4FC: lwc1        $f0, 0x9C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X9C);
    // 0x801EA500: lwc1        $f2, 0xA0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x801EA504: lwc1        $f12, 0xA4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XA4);
    // 0x801EA508: bne         $t7, $at, L_801EA51C
    if (ctx->r15 != ctx->r1) {
        // 0x801EA50C: lw          $a2, 0x18($t6)
        ctx->r6 = MEM_W(ctx->r14, 0X18);
            goto L_801EA51C;
    }
    // 0x801EA50C: lw          $a2, 0x18($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X18);
    // 0x801EA510: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801EA514: jr          $ra
    // 0x801EA518: sb          $t8, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r24;
    TRACE_RETURN()
    return;
    // 0x801EA518: sb          $t8, 0x64($a1)
    MEM_B(0X64, ctx->r5) = ctx->r24;
L_801EA51C:
    // 0x801EA51C: sb          $zero, 0x64($a1)
    MEM_B(0X64, ctx->r5) = 0;
    // 0x801EA520: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801EA524: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801EA528: lwc1        $f10, 0xA4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA4);
    // 0x801EA52C: add.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801EA530: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x801EA534: lbu         $t9, 0xA0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XA0);
    // 0x801EA538: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x801EA53C: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x801EA540: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EA544: subu        $t0, $v0, $t9
    ctx->r8 = SUB32(ctx->r2, ctx->r25);
    // 0x801EA548: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801EA54C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x801EA550: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA554: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801EA558: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801EA55C: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x801EA560: swc1        $f10, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f10.u32l;
    // 0x801EA564: lwc1        $f4, 0xC($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC);
    // 0x801EA568: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801EA56C: lwc1        $f10, 0xA8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XA8);
    // 0x801EA570: add.s       $f16, $f4, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x801EA574: lbu         $t1, 0xA0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XA0);
    // 0x801EA578: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x801EA57C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801EA580: subu        $t2, $v0, $t1
    ctx->r10 = SUB32(ctx->r2, ctx->r9);
    // 0x801EA584: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x801EA588: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x801EA58C: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801EA590: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801EA594: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA598: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x801EA59C: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x801EA5A0: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x801EA5A4: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801EA5A8: lwc1        $f10, 0xAC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XAC);
    // 0x801EA5AC: add.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x801EA5B0: lbu         $t3, 0xA0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA0);
    // 0x801EA5B4: sub.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x801EA5B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801EA5BC: subu        $t4, $v0, $t3
    ctx->r12 = SUB32(ctx->r2, ctx->r11);
    // 0x801EA5C0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801EA5C4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x801EA5C8: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x801EA5CC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801EA5D0: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x801EA5D4: add.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x801EA5D8: swc1        $f10, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f10.u32l;
    // 0x801EA5DC: jr          $ra
    // 0x801EA5E0: nop

    TRACE_RETURN()
    return;
    // 0x801EA5E0: nop

;}
RECOMP_FUNC void func_801E54A8_5A13B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E54A8: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E54AC: sw          $a1, 0x8C($t6)
    MEM_W(0X8C, ctx->r14) = ctx->r5;
    // 0x801E54B0: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E54B4: lw          $v0, 0x8C($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8C);
    // 0x801E54B8: beq         $v0, $zero, L_801E54D8
    if (ctx->r2 == 0) {
        // 0x801E54BC: nop
    
            goto L_801E54D8;
    }
    // 0x801E54BC: nop

    // 0x801E54C0: lw          $t8, 0x68($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X68);
    // 0x801E54C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E54C8: ori         $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 | 0X8000;
    // 0x801E54CC: sw          $t9, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r25;
    // 0x801E54D0: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E54D4: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
L_801E54D8:
    // 0x801E54D8: jr          $ra
    // 0x801E54DC: nop

    TRACE_RETURN()
    return;
    // 0x801E54DC: nop

;}
RECOMP_FUNC void func_801CC30C_58821C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801CC30C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801CC310: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801CC314: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801CC318: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801CC31C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801CC320: jal         0x801CC454
    // 0x801CC324: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_801CC454_588364(rdram, ctx);
        goto after_0;
    // 0x801CC324: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x801CC328: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801CC32C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801CC330: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801CC334: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x801CC338: addiu       $t6, $t6, -0x3980
    ctx->r14 = ADD32(ctx->r14, -0X3980);
    // 0x801CC33C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801CC340: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x801CC344: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x801CC348: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
    // 0x801CC34C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x801CC350: addiu       $t9, $zero, 0xB9
    ctx->r25 = ADD32(0, 0XB9);
    // 0x801CC354: addiu       $t0, $zero, 0xB4
    ctx->r8 = ADD32(0, 0XB4);
    // 0x801CC358: sb          $t9, 0x91($s0)
    MEM_B(0X91, ctx->r16) = ctx->r25;
    // 0x801CC35C: sb          $t0, 0x92($s0)
    MEM_B(0X92, ctx->r16) = ctx->r8;
    // 0x801CC360: lw          $t1, 0x5C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5C);
    // 0x801CC364: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801CC368: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801CC36C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801CC370: swc1        $f4, 0x5C($t1)
    MEM_W(0X5C, ctx->r9) = ctx->f4.u32l;
    // 0x801CC374: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801CC378: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801CC37C: addiu       $a0, $s0, 0xB4
    ctx->r4 = ADD32(ctx->r16, 0XB4);
    // 0x801CC380: swc1        $f6, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->f6.u32l;
    // 0x801CC384: lw          $t3, 0x5C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X5C);
    // 0x801CC388: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801CC38C: swc1        $f8, 0x64($t3)
    MEM_W(0X64, ctx->r11) = ctx->f8.u32l;
    // 0x801CC390: swc1        $f2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f2.u32l;
    // 0x801CC394: swc1        $f2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->f2.u32l;
    // 0x801CC398: swc1        $f0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f0.u32l;
    // 0x801CC39C: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x801CC3A0: swc1        $f0, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f0.u32l;
    // 0x801CC3A4: swc1        $f0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->f0.u32l;
    // 0x801CC3A8: lwc1        $f10, -0x5818($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5818);
    // 0x801CC3AC: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801CC3B0: jal         0x8001D394
    // 0x801CC3B4: swc1        $f10, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_1;
    // 0x801CC3B4: swc1        $f10, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f10.u32l;
    after_1:
    // 0x801CC3B8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC3BC: addiu       $a1, $a1, -0x47DC
    ctx->r5 = ADD32(ctx->r5, -0X47DC);
    // 0x801CC3C0: jal         0x80035214
    // 0x801CC3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035214_35E14(rdram, ctx);
        goto after_2;
    // 0x801CC3C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801CC3C8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x801CC3CC: addiu       $a1, $a1, -0x4534
    ctx->r5 = ADD32(ctx->r5, -0X4534);
    // 0x801CC3D0: jal         0x80035244
    // 0x801CC3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035244_35E44(rdram, ctx);
        goto after_3;
    // 0x801CC3D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801CC3D8: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x801CC3DC: sb          $t5, 0xCC($s0)
    MEM_B(0XCC, ctx->r16) = ctx->r13;
    // 0x801CC3E0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x801CC3E4: lbu         $t6, 0x7AE0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X7AE0);
    // 0x801CC3E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801CC3EC: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x801CC3F0: bne         $t6, $at, L_801CC408
    if (ctx->r14 != ctx->r1) {
        // 0x801CC3F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801CC408;
    }
    // 0x801CC3F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801CC3F8: jal         0x801DACDC
    // 0x801CC3FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_4;
    // 0x801CC3FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801CC400: b           L_801CC414
    // 0x801CC404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_801CC414;
    // 0x801CC404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CC408:
    // 0x801CC408: jal         0x801DACDC
    // 0x801CC40C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_5;
    // 0x801CC40C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x801CC410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801CC414:
    // 0x801CC414: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801CC418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801CC41C: jr          $ra
    // 0x801CC420: nop

    TRACE_RETURN()
    return;
    // 0x801CC420: nop

;}
RECOMP_FUNC void func_801F2CC0_5AEBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F2CC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801F2CC4: jr          $ra
    // 0x801F2CC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801F2CC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801FA5D4_5B64E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FA5D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801FA5D8: addiu       $v1, $v1, -0x39F4
    ctx->r3 = ADD32(ctx->r3, -0X39F4);
    // 0x801FA5DC: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x801FA5E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FA5E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801FA5E8: lwc1        $f4, 0x8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X8);
    // 0x801FA5EC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x801FA5F0: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x801FA5F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801FA5F8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x801FA5FC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA600: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801FA604: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x801FA608: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x801FA60C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x801FA610: sh          $t0, -0x5012($at)
    MEM_H(-0X5012, ctx->r1) = ctx->r8;
    // 0x801FA614: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x801FA618: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801FA61C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA620: lwc1        $f8, 0xC($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XC);
    // 0x801FA624: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FA628: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801FA62C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x801FA630: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x801FA634: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x801FA638: nop

    // 0x801FA63C: sh          $t4, -0x5010($at)
    MEM_H(-0X5010, ctx->r1) = ctx->r12;
    // 0x801FA640: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x801FA644: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x801FA648: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA64C: lwc1        $f16, 0x10($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X10);
    // 0x801FA650: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x801FA654: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x801FA658: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x801FA65C: nop

    // 0x801FA660: sh          $t8, -0x500E($at)
    MEM_H(-0X500E, ctx->r1) = ctx->r24;
    // 0x801FA664: lw          $t0, -0x39FC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X39FC);
    // 0x801FA668: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x801FA66C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA670: lhu         $t1, 0x94($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X94);
    // 0x801FA674: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x801FA678: sh          $t1, -0x500C($at)
    MEM_H(-0X500C, ctx->r1) = ctx->r9;
    // 0x801FA67C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x801FA680: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA684: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x801FA688: beq         $t7, $zero, L_801FA6A8
    if (ctx->r15 == 0) {
        // 0x801FA68C: sh          $a0, -0x5020($at)
        MEM_H(-0X5020, ctx->r1) = ctx->r4;
            goto L_801FA6A8;
    }
    // 0x801FA68C: sh          $a0, -0x5020($at)
    MEM_H(-0X5020, ctx->r1) = ctx->r4;
    // 0x801FA690: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x801FA694: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA698: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x801FA69C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x801FA6A0: jr          $ra
    // 0x801FA6A4: sb          $t4, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x801FA6A4: sb          $t4, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r12;
L_801FA6A8:
    // 0x801FA6A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801FA6AC: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x801FA6B0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x801FA6B4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801FA6B8: sb          $t6, -0x51D7($at)
    MEM_B(-0X51D7, ctx->r1) = ctx->r14;
    // 0x801FA6BC: jr          $ra
    // 0x801FA6C0: nop

    TRACE_RETURN()
    return;
    // 0x801FA6C0: nop

;}
RECOMP_FUNC void func_801F05D0_5AC4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F05D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F05D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F05D8: jal         0x801E8C44
    // 0x801F05DC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801F05DC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_0:
    // 0x801F05E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F05E4: slti        $t6, $v0, 0x3
    ctx->r14 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x801F05E8: xori        $v0, $t6, 0x1
    ctx->r2 = ctx->r14 ^ 0X1;
    // 0x801F05EC: jr          $ra
    // 0x801F05F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801F05F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801E2220_59E130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2224: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E2228: lwc1        $f4, -0x4CE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4CE8);
    // 0x801E222C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E2230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2234: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2238: swc1        $f4, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f4.u32l;
    // 0x801E223C: swc1        $f6, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f6.u32l;
    // 0x801E2240: sh          $zero, 0x30($t6)
    MEM_H(0X30, ctx->r14) = 0;
    // 0x801E2244: lw          $t7, 0x5C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2248: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x801E224C: jal         0x801DD830
    // 0x801E2250: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801E2250: sb          $zero, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = 0;
    after_0:
    // 0x801E2254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E225C: jr          $ra
    // 0x801E2260: nop

    TRACE_RETURN()
    return;
    // 0x801E2260: nop

;}
RECOMP_FUNC void func_801F595C_5B186C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F595C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801F5960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801F5964: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801F5968: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x801F596C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x801F5970: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801F5974: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801F5978: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x801F597C: addiu       $a2, $zero, 0x69
    ctx->r6 = ADD32(0, 0X69);
    // 0x801F5980: jal         0x801F5B04
    // 0x801F5984: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    func_801F5B04_5B1A14(rdram, ctx);
        goto after_0;
    // 0x801F5984: addiu       $a3, $zero, 0x6B
    ctx->r7 = ADD32(0, 0X6B);
    after_0:
    // 0x801F5988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801F598C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801F5990: jr          $ra
    // 0x801F5994: nop

    TRACE_RETURN()
    return;
    // 0x801F5994: nop

;}
RECOMP_FUNC void func_801F91F0_5B5100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F91F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F91F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F91F8: addiu       $t6, $zero, 0x42
    ctx->r14 = ADD32(0, 0X42);
    // 0x801F91FC: lui         $at, 0x8007
    ctx->r1 = S32(0X8007 << 16);
    // 0x801F9200: lui         $a0, 0x8002
    ctx->r4 = S32(0X8002 << 16);
    // 0x801F9204: sh          $t6, -0x2CDC($at)
    MEM_H(-0X2CDC, ctx->r1) = ctx->r14;
    // 0x801F9208: addiu       $a0, $a0, 0x724
    ctx->r4 = ADD32(ctx->r4, 0X724);
    // 0x801F920C: jal         0x80034DD8
    // 0x801F9210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80034DD8_359D8(rdram, ctx);
        goto after_0;
    // 0x801F9210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x801F9214: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801F9218: jal         0x801F9230
    // 0x801F921C: sw          $v0, -0x3A88($at)
    MEM_W(-0X3A88, ctx->r1) = ctx->r2;
    func_801F9230_5B5140(rdram, ctx);
        goto after_1;
    // 0x801F921C: sw          $v0, -0x3A88($at)
    MEM_W(-0X3A88, ctx->r1) = ctx->r2;
    after_1:
    // 0x801F9220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F9224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F9228: jr          $ra
    // 0x801F922C: nop

    TRACE_RETURN()
    return;
    // 0x801F922C: nop

;}
RECOMP_FUNC void func_801DDA48_599958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDA4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDA50: jal         0x801E1B60
    // 0x801DDA54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E1B60_59DA70(rdram, ctx);
        goto after_0;
    // 0x801DDA54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDA58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDA5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDA60: jr          $ra
    // 0x801DDA64: nop

    TRACE_RETURN()
    return;
    // 0x801DDA64: nop

;}
RECOMP_FUNC void func_801F14BC_5AD3CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F14BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801F14C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801F14C4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x801F14C8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x801F14CC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801F14D0: lw          $v0, 0x5C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X5C);
    // 0x801F14D4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x801F14D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801F14DC: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x801F14E0: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F14E4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x801F14E8: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x801F14EC: lbu         $v1, 0x60($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X60);
    // 0x801F14F0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801F14F4: beq         $v1, $zero, L_801F1514
    if (ctx->r3 == 0) {
        // 0x801F14F8: nop
    
            goto L_801F1514;
    }
    // 0x801F14F8: nop

    // 0x801F14FC: beq         $v1, $at, L_801F152C
    if (ctx->r3 == ctx->r1) {
        // 0x801F1500: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_801F152C;
    }
    // 0x801F1500: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x801F1504: beq         $v1, $at, L_801F1534
    if (ctx->r3 == ctx->r1) {
        // 0x801F1508: addiu       $s0, $s1, 0x9C
        ctx->r16 = ADD32(ctx->r17, 0X9C);
            goto L_801F1534;
    }
    // 0x801F1508: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
    // 0x801F150C: b           L_801F1550
    // 0x801F1510: addiu       $s0, $a0, 0x9C
    ctx->r16 = ADD32(ctx->r4, 0X9C);
        goto L_801F1550;
    // 0x801F1510: addiu       $s0, $a0, 0x9C
    ctx->r16 = ADD32(ctx->r4, 0X9C);
L_801F1514:
    // 0x801F1514: jal         0x801EE2EC
    // 0x801F1518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801EE2EC_5AA1FC(rdram, ctx);
        goto after_0;
    // 0x801F1518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x801F151C: beq         $v0, $zero, L_801F1550
    if (ctx->r2 == 0) {
        // 0x801F1520: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_801F1550;
    }
    // 0x801F1520: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x801F1524: b           L_801F1550
    // 0x801F1528: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
        goto L_801F1550;
    // 0x801F1528: sb          $t7, 0x60($s1)
    MEM_B(0X60, ctx->r17) = ctx->r15;
L_801F152C:
    // 0x801F152C: b           L_801F1550
    // 0x801F1530: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
        goto L_801F1550;
    // 0x801F1530: addiu       $s0, $s1, 0x9C
    ctx->r16 = ADD32(ctx->r17, 0X9C);
L_801F1534:
    // 0x801F1534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801F1538: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x801F153C: jal         0x801EE330
    // 0x801F1540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801EE330_5AA240(rdram, ctx);
        goto after_1;
    // 0x801F1540: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801F1544: beq         $v0, $zero, L_801F1550
    if (ctx->r2 == 0) {
        // 0x801F1548: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_801F1550;
    }
    // 0x801F1548: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801F154C: sb          $t8, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r24;
L_801F1550:
    // 0x801F1550: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x801F1554: jal         0x801EE5F4
    // 0x801F1558: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_801EE5F4_5AA504(rdram, ctx);
        goto after_2;
    // 0x801F1558: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_2:
    // 0x801F155C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F1560: jal         0x801EE25C
    // 0x801F1564: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_801EE25C_5AA16C(rdram, ctx);
        goto after_3;
    // 0x801F1564: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_3:
    // 0x801F1568: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801F156C: jal         0x801EE28C
    // 0x801F1570: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_801EE28C_5AA19C(rdram, ctx);
        goto after_4;
    // 0x801F1570: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_4:
    // 0x801F1574: lbu         $t1, 0x2($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2);
    // 0x801F1578: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x801F157C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801F1580: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801F1584: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x801F1588: addiu       $a2, $a2, 0x4C28
    ctx->r6 = ADD32(ctx->r6, 0X4C28);
    // 0x801F158C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801F1590: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801F1594: lbu         $t3, 0x4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X4);
    // 0x801F1598: or          $t9, $a2, $at
    ctx->r25 = ctx->r6 | ctx->r1;
    // 0x801F159C: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x801F15A0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x801F15A4: lbu         $t4, 0x5($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X5);
    // 0x801F15A8: or          $a2, $t9, $at
    ctx->r6 = ctx->r25 | ctx->r1;
    // 0x801F15AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x801F15B0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x801F15B4: lbu         $t5, 0x6($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X6);
    // 0x801F15B8: addiu       $a1, $s1, 0xA4
    ctx->r5 = ADD32(ctx->r17, 0XA4);
    // 0x801F15BC: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x801F15C0: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    // 0x801F15C4: jal         0x801DC554
    // 0x801F15C8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_801DC554_598464(rdram, ctx);
        goto after_5;
    // 0x801F15C8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_5:
    // 0x801F15CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801F15D0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x801F15D4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x801F15D8: jr          $ra
    // 0x801F15DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x801F15DC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_801F69EC_5B28FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F69EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F69F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F69F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F69F8: jal         0x801E7F50
    // 0x801F69FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801E7F50_5A3E60(rdram, ctx);
        goto after_0;
    // 0x801F69FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x801F6A00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F6A04: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x801F6A08: lbu         $t6, 0x90($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X90);
    // 0x801F6A0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801F6A10: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801F6A14: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x801F6A18: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x801F6A1C: lhu         $v0, 0x7DB2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7DB2);
    // 0x801F6A20: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x801F6A24: beq         $t8, $zero, L_801F6A3C
    if (ctx->r24 == 0) {
        // 0x801F6A28: andi        $t9, $v0, 0x4000
        ctx->r25 = ctx->r2 & 0X4000;
            goto L_801F6A3C;
    }
    // 0x801F6A28: andi        $t9, $v0, 0x4000
    ctx->r25 = ctx->r2 & 0X4000;
    // 0x801F6A2C: jal         0x801DACDC
    // 0x801F6A30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801F6A30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_1:
    // 0x801F6A34: b           L_801F6A50
    // 0x801F6A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801F6A50;
    // 0x801F6A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6A3C:
    // 0x801F6A3C: beql        $t9, $zero, L_801F6A50
    if (ctx->r25 == 0) {
        // 0x801F6A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801F6A50;
    }
    goto skip_0;
    // 0x801F6A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801F6A44: jal         0x801DACDC
    // 0x801F6A48: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_2;
    // 0x801F6A48: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_2:
    // 0x801F6A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801F6A50:
    // 0x801F6A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F6A54: jr          $ra
    // 0x801F6A58: nop

    TRACE_RETURN()
    return;
    // 0x801F6A58: nop

;}
RECOMP_FUNC void func_801F0D4C_5ACC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F0D4C: bne         $a0, $zero, L_801F0D5C
    if (ctx->r4 != 0) {
        // 0x801F0D50: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_801F0D5C;
    }
    // 0x801F0D50: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801F0D54: jr          $ra
    // 0x801F0D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801F0D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F0D5C:
    // 0x801F0D5C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x801F0D60: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801F0D64: beql        $t6, $zero, L_801F0DA0
    if (ctx->r14 == 0) {
        // 0x801F0D68: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801F0DA0;
    }
    goto skip_0;
    // 0x801F0D68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801F0D6C: lw          $a0, 0x8C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8C);
L_801F0D70:
    // 0x801F0D70: beql        $a0, $zero, L_801F0D90
    if (ctx->r4 == 0) {
        // 0x801F0D74: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_801F0D90;
    }
    goto skip_1;
    // 0x801F0D74: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x801F0D78: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x801F0D7C: bnel        $v0, $a1, L_801F0D90
    if (ctx->r2 != ctx->r5) {
        // 0x801F0D80: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_801F0D90;
    }
    goto skip_2;
    // 0x801F0D80: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x801F0D84: jr          $ra
    // 0x801F0D88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801F0D88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801F0D8C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_801F0D90:
    // 0x801F0D90: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x801F0D94: bnel        $t7, $zero, L_801F0D70
    if (ctx->r15 != 0) {
        // 0x801F0D98: lw          $a0, 0x8C($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X8C);
            goto L_801F0D70;
    }
    goto skip_3;
    // 0x801F0D98: lw          $a0, 0x8C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8C);
    skip_3:
    // 0x801F0D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801F0DA0:
    // 0x801F0DA0: jr          $ra
    // 0x801F0DA4: nop

    TRACE_RETURN()
    return;
    // 0x801F0DA4: nop

;}
RECOMP_FUNC void func_801EF4A8_5AB3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EF4A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801EF4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EF4B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801EF4B4: lw          $a0, 0x5C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C);
    // 0x801EF4B8: jal         0x801E8D30
    // 0x801EF4BC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    func_801E8D30_5A4C40(rdram, ctx);
        goto after_0;
    // 0x801EF4BC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_0:
    // 0x801EF4C0: bne         $v0, $zero, L_801EF4D0
    if (ctx->r2 != 0) {
        // 0x801EF4C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801EF4D0;
    }
    // 0x801EF4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EF4C8: b           L_801EF518
    // 0x801EF4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801EF518;
    // 0x801EF4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EF4D0:
    // 0x801EF4D0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801EF4D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801EF4D8: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x801EF4DC: bne         $v1, $zero, L_801EF4EC
    if (ctx->r3 != 0) {
        // 0x801EF4E0: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_801EF4EC;
    }
    // 0x801EF4E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x801EF4E4: b           L_801EF518
    // 0x801EF4E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801EF518;
    // 0x801EF4E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EF4EC:
    // 0x801EF4EC: bnel        $v0, $a0, L_801EF50C
    if (ctx->r2 != ctx->r4) {
        // 0x801EF4F0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801EF50C;
    }
    goto skip_0;
    // 0x801EF4F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x801EF4F4: lbu         $t6, 0x90($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X90);
    // 0x801EF4F8: beql        $t6, $zero, L_801EF50C
    if (ctx->r14 == 0) {
        // 0x801EF4FC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_801EF50C;
    }
    goto skip_1;
    // 0x801EF4FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_1:
    // 0x801EF500: b           L_801EF518
    // 0x801EF504: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_801EF518;
    // 0x801EF504: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801EF508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_801EF50C:
    // 0x801EF50C: bne         $v0, $a1, L_801EF4EC
    if (ctx->r2 != ctx->r5) {
        // 0x801EF510: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_801EF4EC;
    }
    // 0x801EF510: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x801EF514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EF518:
    // 0x801EF518: jr          $ra
    // 0x801EF51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x801EF51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801D7868_593778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7868: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x801D786C: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x801D7870: andi        $t8, $a2, 0x8000
    ctx->r24 = ctx->r6 & 0X8000;
    // 0x801D7874: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D7878: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801D787C: beq         $t8, $zero, L_801D78C0
    if (ctx->r24 == 0) {
        // 0x801D7880: sw          $a2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r6;
            goto L_801D78C0;
    }
    // 0x801D7880: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801D7884: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x801D7888: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x801D788C: bnel        $t9, $zero, L_801D78A0
    if (ctx->r25 != 0) {
        // 0x801D7890: lhu         $v1, 0x12($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0X12);
            goto L_801D78A0;
    }
    goto skip_0;
    // 0x801D7890: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    skip_0:
    // 0x801D7894: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D7898: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x801D789C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
L_801D78A0:
    // 0x801D78A0: subu        $t1, $v0, $a3
    ctx->r9 = SUB32(ctx->r2, ctx->r7);
    // 0x801D78A4: sh          $t1, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r9;
    // 0x801D78A8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x801D78AC: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x801D78B0: beq         $t3, $zero, L_801D78F8
    if (ctx->r11 == 0) {
        // 0x801D78B4: negu        $t4, $v1
        ctx->r12 = SUB32(0, ctx->r3);
            goto L_801D78F8;
    }
    // 0x801D78B4: negu        $t4, $v1
    ctx->r12 = SUB32(0, ctx->r3);
    // 0x801D78B8: jr          $ra
    // 0x801D78BC: sh          $t4, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r12;
    TRACE_RETURN()
    return;
    // 0x801D78BC: sh          $t4, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r12;
L_801D78C0:
    // 0x801D78C0: lhu         $v0, 0xB8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB8);
    // 0x801D78C4: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x801D78C8: beql        $t5, $zero, L_801D78DC
    if (ctx->r13 == 0) {
        // 0x801D78CC: lhu         $v1, 0x12($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0X12);
            goto L_801D78DC;
    }
    goto skip_1;
    // 0x801D78CC: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    skip_1:
    // 0x801D78D0: sh          $zero, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = 0;
    // 0x801D78D4: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x801D78D8: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
L_801D78DC:
    // 0x801D78DC: addu        $t7, $v0, $a3
    ctx->r15 = ADD32(ctx->r2, ctx->r7);
    // 0x801D78E0: sh          $t7, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r15;
    // 0x801D78E4: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x801D78E8: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x801D78EC: bne         $t9, $zero, L_801D78F8
    if (ctx->r25 != 0) {
        // 0x801D78F0: nop
    
            goto L_801D78F8;
    }
    // 0x801D78F0: nop

    // 0x801D78F4: sh          $v1, 0xB8($a0)
    MEM_H(0XB8, ctx->r4) = ctx->r3;
L_801D78F8:
    // 0x801D78F8: jr          $ra
    // 0x801D78FC: nop

    TRACE_RETURN()
    return;
    // 0x801D78FC: nop

;}
RECOMP_FUNC void func_801F59D4_5B18E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F59D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F59D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F59DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801F59E0: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    // 0x801F59E4: jal         0x801F5B9C
    // 0x801F59E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_801F5B9C_5B1AAC(rdram, ctx);
        goto after_0;
    // 0x801F59E8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x801F59EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F59F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F59F4: jr          $ra
    // 0x801F59F8: nop

    TRACE_RETURN()
    return;
    // 0x801F59F8: nop

;}
RECOMP_FUNC void func_801FC578_5B8488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801FC578: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801FC57C: jr          $ra
    // 0x801FC580: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801FC580: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DE694_59A5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE69C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DE6A0: jal         0x801E7DE8
    // 0x801DE6A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DE6A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE6A8: beq         $v0, $zero, L_801DE6BC
    if (ctx->r2 == 0) {
        // 0x801DE6AC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DE6BC;
    }
    // 0x801DE6AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DE6B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE6B4: b           L_801DE6C8
    // 0x801DE6B8: lwc1        $f0, -0x4E78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E78);
        goto L_801DE6C8;
    // 0x801DE6B8: lwc1        $f0, -0x4E78($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E78);
L_801DE6BC:
    // 0x801DE6BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801DE6C0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE6C4: nop

L_801DE6C8:
    // 0x801DE6C8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DE6CC: jal         0x801E3EBC
    // 0x801DE6D0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_1;
    // 0x801DE6D0: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x801DE6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE6DC: jr          $ra
    // 0x801DE6E0: nop

    TRACE_RETURN()
    return;
    // 0x801DE6E0: nop

;}
RECOMP_FUNC void func_801EE2EC_5AA1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EE2EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801EE2F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x801EE2F4: lbu         $a3, 0x0($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X0);
    // 0x801EE2F8: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x801EE2FC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801EE300: subu        $t8, $t7, $a3
    ctx->r24 = SUB32(ctx->r15, ctx->r7);
    // 0x801EE304: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x801EE308: beq         $at, $zero, L_801EE320
    if (ctx->r1 == 0) {
        // 0x801EE30C: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_801EE320;
    }
    // 0x801EE30C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801EE310: addu        $t9, $a3, $t6
    ctx->r25 = ADD32(ctx->r7, ctx->r14);
    // 0x801EE314: sb          $t9, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r25;
    // 0x801EE318: jr          $ra
    // 0x801EE31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801EE31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801EE320:
    // 0x801EE320: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x801EE324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801EE328: jr          $ra
    // 0x801EE32C: nop

    TRACE_RETURN()
    return;
    // 0x801EE32C: nop

;}
RECOMP_FUNC void func_801D9E28_595D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D9E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801D9E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801D9E30: lbu         $t6, 0x63($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X63);
    // 0x801D9E34: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801D9E38: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x801D9E3C: beq         $t6, $zero, L_801D9E8C
    if (ctx->r14 == 0) {
        // 0x801D9E40: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D9E8C;
    }
    // 0x801D9E40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D9E44: sb          $zero, 0x63($a0)
    MEM_B(0X63, ctx->r4) = 0;
    // 0x801D9E48: sw          $zero, -0x3A1C($at)
    MEM_W(-0X3A1C, ctx->r1) = 0;
    // 0x801D9E4C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x801D9E50: jal         0x80038BC8
    // 0x801D9E54: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x801D9E54: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x801D9E58: jal         0x801E30E4
    // 0x801D9E5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801E30E4_59EFF4(rdram, ctx);
        goto after_1;
    // 0x801D9E5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801D9E60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801D9E64: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x801D9E68: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x801D9E6C: lbu         $t8, 0xDB($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XDB);
    // 0x801D9E70: addiu       $a1, $a1, -0x1480
    ctx->r5 = ADD32(ctx->r5, -0X1480);
    // 0x801D9E74: sb          $t7, 0xCC($a0)
    MEM_B(0XCC, ctx->r4) = ctx->r15;
    // 0x801D9E78: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x801D9E7C: jal         0x8003522C
    // 0x801D9E80: sb          $t9, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r25;
    func_8003522C_35E2C(rdram, ctx);
        goto after_2;
    // 0x801D9E80: sb          $t9, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r25;
    after_2:
    // 0x801D9E84: b           L_801D9E8C
    // 0x801D9E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801D9E8C;
    // 0x801D9E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801D9E8C:
    // 0x801D9E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801D9E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801D9E94: jr          $ra
    // 0x801D9E98: nop

    TRACE_RETURN()
    return;
    // 0x801D9E98: nop

;}
RECOMP_FUNC void func_801E2B54_59EA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801E2B58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801E2B5C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801E2B60: jal         0x801DD830
    // 0x801E2B64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_801DD830_599740(rdram, ctx);
        goto after_0;
    // 0x801E2B64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x801E2B68: lui         $at, 0x42E6
    ctx->r1 = S32(0X42E6 << 16);
    // 0x801E2B6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801E2B70: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x801E2B74: lw          $a1, -0x3340($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3340);
    // 0x801E2B78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801E2B7C: addiu       $a2, $zero, 0x196
    ctx->r6 = ADD32(0, 0X196);
    // 0x801E2B80: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x801E2B84: jal         0x801DB494
    // 0x801E2B88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_801DB494_5973A4(rdram, ctx);
        goto after_1;
    // 0x801E2B88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x801E2B8C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801E2B90: lw          $t7, 0x5C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5C);
    // 0x801E2B94: sw          $v0, 0x88($t7)
    MEM_W(0X88, ctx->r15) = ctx->r2;
    // 0x801E2B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801E2B9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801E2BA0: jr          $ra
    // 0x801E2BA4: nop

    TRACE_RETURN()
    return;
    // 0x801E2BA4: nop

;}
RECOMP_FUNC void func_801E8D30_5A4C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E8D30: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x801E8D34: lw          $v0, 0xDC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XDC);
    // 0x801E8D38: lhu         $v1, 0x20($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X20);
    // 0x801E8D3C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801E8D40: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x801E8D44: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801E8D48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x801E8D4C: beql        $a2, $zero, L_801E8D88
    if (ctx->r6 == 0) {
        // 0x801E8D50: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E8D88;
    }
    goto skip_0;
    // 0x801E8D50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801E8D54: lhu         $t7, 0x20($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X20);
L_801E8D58:
    // 0x801E8D58: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x801E8D5C: beql        $at, $zero, L_801E8D88
    if (ctx->r1 == 0) {
        // 0x801E8D60: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801E8D88;
    }
    goto skip_1;
    // 0x801E8D60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x801E8D64: lbu         $t8, 0x64($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X64);
    // 0x801E8D68: bnel        $a1, $t8, L_801E8D7C
    if (ctx->r5 != ctx->r24) {
        // 0x801E8D6C: lw          $a2, 0x0($a2)
        ctx->r6 = MEM_W(ctx->r6, 0X0);
            goto L_801E8D7C;
    }
    goto skip_2;
    // 0x801E8D6C: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    skip_2:
    // 0x801E8D70: jr          $ra
    // 0x801E8D74: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    TRACE_RETURN()
    return;
    // 0x801E8D74: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x801E8D78: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
L_801E8D7C:
    // 0x801E8D7C: bnel        $a2, $zero, L_801E8D58
    if (ctx->r6 != 0) {
        // 0x801E8D80: lhu         $t7, 0x20($a2)
        ctx->r15 = MEM_HU(ctx->r6, 0X20);
            goto L_801E8D58;
    }
    goto skip_3;
    // 0x801E8D80: lhu         $t7, 0x20($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X20);
    skip_3:
    // 0x801E8D84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801E8D88:
    // 0x801E8D88: jr          $ra
    // 0x801E8D8C: nop

    TRACE_RETURN()
    return;
    // 0x801E8D8C: nop

;}
RECOMP_FUNC void func_801E3750_59F660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E3750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E3754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E3758: beq         $a2, $zero, L_801E3774
    if (ctx->r6 == 0) {
        // 0x801E375C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_801E3774;
    }
    // 0x801E375C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x801E3760: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801E3764: beql        $a2, $at, L_801E37AC
    if (ctx->r6 == ctx->r1) {
        // 0x801E3768: lbu         $t1, 0x90($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X90);
            goto L_801E37AC;
    }
    goto skip_0;
    // 0x801E3768: lbu         $t1, 0x90($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X90);
    skip_0:
    // 0x801E376C: b           L_801E37E4
    // 0x801E3770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801E37E4;
    // 0x801E3770: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E3774:
    // 0x801E3774: lui         $v1, 0x8015
    ctx->r3 = S32(0X8015 << 16);
    // 0x801E3778: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x801E377C: addiu       $t6, $v1, 0x7FFF
    ctx->r14 = ADD32(ctx->r3, 0X7FFF);
    // 0x801E3780: lw          $t6, 0x789D($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X789D);
    // 0x801E3784: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801E3788: addiu       $v0, $v1, 0x7FFF
    ctx->r2 = ADD32(ctx->r3, 0X7FFF);
    // 0x801E378C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x801E3790: sw          $t7, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r15;
    // 0x801E3794: lw          $v0, 0x789D($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X789D);
    // 0x801E3798: lw          $t9, 0x68($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X68);
    // 0x801E379C: ori         $t0, $t9, 0x100
    ctx->r8 = ctx->r25 | 0X100;
    // 0x801E37A0: b           L_801E37E0
    // 0x801E37A4: sw          $t0, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r8;
        goto L_801E37E0;
    // 0x801E37A4: sw          $t0, 0x68($v0)
    MEM_W(0X68, ctx->r2) = ctx->r8;
    // 0x801E37A8: lbu         $t1, 0x90($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X90);
L_801E37AC:
    // 0x801E37AC: bnel        $t1, $zero, L_801E37C0
    if (ctx->r9 != 0) {
        // 0x801E37B0: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_801E37C0;
    }
    goto skip_1;
    // 0x801E37B0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_1:
    // 0x801E37B4: b           L_801E37C0
    // 0x801E37B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_801E37C0;
    // 0x801E37B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801E37BC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_801E37C0:
    // 0x801E37C0: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x801E37C4: lbu         $t2, 0x7C($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X7C);
    // 0x801E37C8: ori         $t3, $t2, 0x8
    ctx->r11 = ctx->r10 | 0X8;
    // 0x801E37CC: or          $t4, $t3, $v1
    ctx->r12 = ctx->r11 | ctx->r3;
    // 0x801E37D0: sb          $t4, 0x7C($v0)
    MEM_B(0X7C, ctx->r2) = ctx->r12;
    // 0x801E37D4: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E37D8: lw          $t5, 0x9C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X9C);
    // 0x801E37DC: sw          $t5, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r13;
L_801E37E0:
    // 0x801E37E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801E37E4:
    // 0x801E37E4: sw          $a3, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r7;
    // 0x801E37E8: sb          $v0, 0xCD($a0)
    MEM_B(0XCD, ctx->r4) = ctx->r2;
    // 0x801E37EC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801E37F0: sb          $v0, 0x7AE3($at)
    MEM_B(0X7AE3, ctx->r1) = ctx->r2;
    // 0x801E37F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801E37F8: jal         0x801DACDC
    // 0x801E37FC: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801E37FC: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    after_0:
    // 0x801E3800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801E3804: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E3808: nop

    // 0x801E380C: swc1        $f0, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f0.u32l;
    // 0x801E3810: swc1        $f0, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f0.u32l;
    // 0x801E3814: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801E3818: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801E381C: jal         0x80221EBC
    // 0x801E3820: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    func_80221EBC_5DD38C(rdram, ctx);
        goto after_1;
    // 0x801E3820: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x801E3824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E3828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E382C: jr          $ra
    // 0x801E3830: nop

    TRACE_RETURN()
    return;
    // 0x801E3830: nop

;}
RECOMP_FUNC void func_801DDAA8_5999B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDAB0: jal         0x801E15D0
    // 0x801DDAB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E15D0_59D4E0(rdram, ctx);
        goto after_0;
    // 0x801DDAB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDAC0: jr          $ra
    // 0x801DDAC4: nop

    TRACE_RETURN()
    return;
    // 0x801DDAC4: nop

;}
RECOMP_FUNC void func_801E2568_59E478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2568: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801E256C: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x801E2570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2574: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801E2578: addiu       $t7, $t7, 0x44EC
    ctx->r15 = ADD32(ctx->r15, 0X44EC);
    // 0x801E257C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x801E2580: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x801E2584: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x801E2588: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x801E258C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x801E2590: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x801E2594: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x801E2598: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x801E259C: addiu       $t2, $t2, 0x44FC
    ctx->r10 = ADD32(ctx->r10, 0X44FC);
    // 0x801E25A0: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x801E25A4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x801E25A8: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x801E25AC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x801E25B0: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x801E25B4: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x801E25B8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x801E25BC: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x801E25C0: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x801E25C4: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801E25C8: addiu       $t8, $t8, 0x450C
    ctx->r24 = ADD32(ctx->r24, 0X450C);
    // 0x801E25CC: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x801E25D0: sw          $t5, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r13;
    // 0x801E25D4: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x801E25D8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x801E25DC: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x801E25E0: sw          $t0, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r8;
    // 0x801E25E4: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x801E25E8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x801E25EC: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x801E25F0: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x801E25F4: sw          $t0, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r8;
    // 0x801E25F8: jal         0x801E7DE8
    // 0x801E25FC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801E25FC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x801E2600: beq         $v0, $zero, L_801E2614
    if (ctx->r2 == 0) {
        // 0x801E2604: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_801E2614;
    }
    // 0x801E2604: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x801E2608: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E260C: b           L_801E261C
    // 0x801E2610: lwc1        $f0, -0x4CC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CC4);
        goto L_801E261C;
    // 0x801E2610: lwc1        $f0, -0x4CC4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CC4);
L_801E2614:
    // 0x801E2614: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E2618: lwc1        $f0, -0x4CC0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4CC0);
L_801E261C:
    // 0x801E261C: lwc1        $f4, 0xE4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XE4);
    // 0x801E2620: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E2624: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801E2628: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x801E262C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x801E2630: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801E2634: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x801E2638: addu        $t3, $sp, $t4
    ctx->r11 = ADD32(ctx->r29, ctx->r12);
    // 0x801E263C: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x801E2640: nop

    // 0x801E2644: bc1fl       L_801E2658
    if (!c1cs) {
        // 0x801E2648: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_801E2658;
    }
    goto skip_0;
    // 0x801E2648: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_0:
    // 0x801E264C: b           L_801E265C
    // 0x801E2650: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_801E265C;
    // 0x801E2650: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x801E2654: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_801E2658:
    // 0x801E2658: nop

L_801E265C:
    // 0x801E265C: lwc1        $f8, 0x48($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X48);
    // 0x801E2660: addu        $t1, $sp, $t4
    ctx->r9 = ADD32(ctx->r29, ctx->r12);
    // 0x801E2664: lwc1        $f16, 0x38($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X38);
    // 0x801E2668: sub.s       $f0, $f12, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x801E266C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x801E2670: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E2674: lwc1        $f6, 0xD0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XD0);
    // 0x801E2678: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x801E267C: addu        $t2, $sp, $t4
    ctx->r10 = ADD32(ctx->r29, ctx->r12);
    // 0x801E2680: lwc1        $f16, 0x28($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X28);
    // 0x801E2684: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2688: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x801E268C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x801E2690: nop

    // 0x801E2694: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x801E2698: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x801E269C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E26A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801E26A4: jr          $ra
    // 0x801E26A8: nop

    TRACE_RETURN()
    return;
    // 0x801E26A8: nop

;}
RECOMP_FUNC void func_801E2F38_59EE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2F38: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E2F3C: jr          $ra
    // 0x801E2F40: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
    TRACE_RETURN()
    return;
    // 0x801E2F40: sb          $zero, 0x2C($t6)
    MEM_B(0X2C, ctx->r14) = 0;
;}
RECOMP_FUNC void func_801EB9B4_5A78C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801EB9B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801EB9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801EB9BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801EB9C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801EB9C4: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x801EB9C8: lw          $a0, 0x18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X18);
    // 0x801EB9CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801EB9D0: addiu       $a1, $a1, 0x4B98
    ctx->r5 = ADD32(ctx->r5, 0X4B98);
    // 0x801EB9D4: addiu       $a3, $t6, 0xA4
    ctx->r7 = ADD32(ctx->r14, 0XA4);
    // 0x801EB9D8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801EB9DC: jal         0x801EE750
    // 0x801EB9E0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_801EE750_5AA660(rdram, ctx);
        goto after_0;
    // 0x801EB9E0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x801EB9E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x801EB9E8: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801EB9EC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801EB9F0: lbu         $t8, 0x90($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X90);
    // 0x801EB9F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801EB9F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801EB9FC: lw          $t0, -0x2DE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2DE0);
    // 0x801EBA00: sw          $t0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r8;
    // 0x801EBA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801EBA08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801EBA0C: jr          $ra
    // 0x801EBA10: nop

    TRACE_RETURN()
    return;
    // 0x801EBA10: nop

;}
RECOMP_FUNC void func_801D7058_592F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D7058: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801D705C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D7060: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7064: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801D7068: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801D706C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801D7070: sh          $t6, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r14;
    // 0x801D7074: sb          $zero, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = 0;
    // 0x801D7078: sb          $zero, 0xAA($a0)
    MEM_B(0XAA, ctx->r4) = 0;
    // 0x801D707C: addiu       $t8, $zero, 0xE00
    ctx->r24 = ADD32(0, 0XE00);
    // 0x801D7080: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D7084: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801D7088: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D708C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x801D7090: jal         0x801D7C20
    // 0x801D7094: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_801D7C20_593B30(rdram, ctx);
        goto after_0;
    // 0x801D7094: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x801D7098: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x801D709C: lw          $v1, -0x39F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X39F4);
    // 0x801D70A0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x801D70A4: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    // 0x801D70A8: sb          $v0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r2;
    // 0x801D70AC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801D70B0: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x801D70B4: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D70B8: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x801D70BC: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x801D70C0: jal         0x80003A94
    // 0x801D70C4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_1;
    // 0x801D70C4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x801D70C8: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D70CC: lw          $t9, -0x39D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39D4);
    // 0x801D70D0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x801D70D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D70D8: lhu         $t1, 0x90($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X90);
    // 0x801D70DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D70E0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x801D70E4: subu        $t0, $v0, $t1
    ctx->r8 = SUB32(ctx->r2, ctx->r9);
    // 0x801D70E8: andi        $t2, $t0, 0xFFFF
    ctx->r10 = ctx->r8 & 0XFFFF;
    // 0x801D70EC: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x801D70F0: beq         $t3, $zero, L_801D7108
    if (ctx->r11 == 0) {
        // 0x801D70F4: or          $t0, $t2, $zero
        ctx->r8 = ctx->r10 | 0;
            goto L_801D7108;
    }
    // 0x801D70F4: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x801D70F8: lui         $t4, 0x1
    ctx->r12 = S32(0X1 << 16);
    // 0x801D70FC: subu        $t0, $t4, $t2
    ctx->r8 = SUB32(ctx->r12, ctx->r10);
    // 0x801D7100: andi        $t5, $t0, 0xFFFF
    ctx->r13 = ctx->r8 & 0XFFFF;
    // 0x801D7104: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
L_801D7108:
    // 0x801D7108: sh          $t6, -0x2E14($at)
    MEM_H(-0X2E14, ctx->r1) = ctx->r14;
    // 0x801D710C: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
    // 0x801D7110: sb          $zero, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = 0;
    // 0x801D7114: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D7118: sh          $zero, -0x2E10($at)
    MEM_H(-0X2E10, ctx->r1) = 0;
    // 0x801D711C: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x801D7120: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801D7124: jal         0x801D8034
    // 0x801D7128: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    func_801D8034_593F44(rdram, ctx);
        goto after_2;
    // 0x801D7128: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    after_2:
    // 0x801D712C: lui         $t9, 0x8021
    ctx->r25 = S32(0X8021 << 16);
    // 0x801D7130: lhu         $t9, -0x2E2C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X2E2C);
    // 0x801D7134: lhu         $t8, 0x6E($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6E);
    // 0x801D7138: lhu         $t0, 0x2C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2C);
    // 0x801D713C: lbu         $t2, 0x2B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2B);
    // 0x801D7140: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x801D7144: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x801D7148: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x801D714C: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x801D7150: beq         $at, $zero, L_801D7180
    if (ctx->r1 == 0) {
        // 0x801D7154: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_801D7180;
    }
    // 0x801D7154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801D7158: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D715C: beq         $t2, $at, L_801D716C
    if (ctx->r10 == ctx->r1) {
        // 0x801D7160: slti        $at, $t0, 0x8
        ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
            goto L_801D716C;
    }
    // 0x801D7160: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x801D7164: beq         $at, $zero, L_801D7180
    if (ctx->r1 == 0) {
        // 0x801D7168: nop
    
            goto L_801D7180;
    }
    // 0x801D7168: nop

L_801D716C:
    // 0x801D716C: lbu         $t3, 0xE1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE1);
    // 0x801D7170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801D7174: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x801D7178: b           L_801D7180
    // 0x801D717C: sb          $t4, 0xE1($s0)
    MEM_B(0XE1, ctx->r16) = ctx->r12;
        goto L_801D7180;
    // 0x801D717C: sb          $t4, 0xE1($s0)
    MEM_B(0XE1, ctx->r16) = ctx->r12;
L_801D7180:
    // 0x801D7180: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801D7184: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801D7188: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801D718C: jr          $ra
    // 0x801D7190: nop

    TRACE_RETURN()
    return;
    // 0x801D7190: nop

;}
RECOMP_FUNC void func_801E9AE0_5A59F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E9AE0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x801E9AE4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x801E9AE8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x801E9AEC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x801E9AF0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x801E9AF4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x801E9AF8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x801E9AFC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x801E9B00: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x801E9B04: lw          $s4, 0x5C($a0)
    ctx->r20 = MEM_W(ctx->r4, 0X5C);
    // 0x801E9B08: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x801E9B0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E9B10: lbu         $t6, 0xCC($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XCC);
    // 0x801E9B14: lw          $s1, 0x18($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X18);
    // 0x801E9B18: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x801E9B1C: xori        $t7, $t6, 0x77
    ctx->r15 = ctx->r14 ^ 0X77;
    // 0x801E9B20: sltiu       $t7, $t7, 0x1
    ctx->r15 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x801E9B24: jal         0x801E8C44
    // 0x801E9B28: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    func_801E8C44_5A4B54(rdram, ctx);
        goto after_0;
    // 0x801E9B28: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    after_0:
    // 0x801E9B2C: bne         $v0, $zero, L_801E9FE8
    if (ctx->r2 != 0) {
        // 0x801E9B30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801E9FE8;
    }
    // 0x801E9B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9B34: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x801E9B38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801E9B3C: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x801E9B40: lw          $a1, 0x4868($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4868);
    // 0x801E9B44: jal         0x80034E08
    // 0x801E9B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034E08_35A08(rdram, ctx);
        goto after_1;
    // 0x801E9B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x801E9B4C: beq         $v0, $zero, L_801E9FE8
    if (ctx->r2 == 0) {
        // 0x801E9B50: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_801E9FE8;
    }
    // 0x801E9B50: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801E9B54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E9B58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801E9B5C: jal         0x801EE4AC
    // 0x801E9B60: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    func_801EE4AC_5AA3BC(rdram, ctx);
        goto after_2;
    // 0x801E9B60: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_2:
    // 0x801E9B64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E9B68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9B6C: jal         0x80035EEC
    // 0x801E9B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_3;
    // 0x801E9B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x801E9B74: bne         $v0, $zero, L_801E9B88
    if (ctx->r2 != 0) {
        // 0x801E9B78: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_801E9B88;
    }
    // 0x801E9B78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E9B7C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x801E9B80: b           L_801E9FE8
    // 0x801E9B84: sb          $t9, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r25;
        goto L_801E9FE8;
    // 0x801E9B84: sb          $t9, 0x65($s2)
    MEM_B(0X65, ctx->r18) = ctx->r25;
L_801E9B88:
    // 0x801E9B88: lw          $s3, 0x18($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X18);
    // 0x801E9B8C: jal         0x801EA00C
    // 0x801E9B90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_801EA00C_5A5F1C(rdram, ctx);
        goto after_4;
    // 0x801E9B90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_4:
    // 0x801E9B94: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x801E9B98: sb          $zero, 0xB8($s2)
    MEM_B(0XB8, ctx->r18) = 0;
    // 0x801E9B9C: sb          $zero, 0xD2($s2)
    MEM_B(0XD2, ctx->r18) = 0;
    // 0x801E9BA0: beq         $v0, $zero, L_801E9BB4
    if (ctx->r2 == 0) {
        // 0x801E9BA4: addiu       $a3, $sp, 0xA8
        ctx->r7 = ADD32(ctx->r29, 0XA8);
            goto L_801E9BB4;
    }
    // 0x801E9BA4: addiu       $a3, $sp, 0xA8
    ctx->r7 = ADD32(ctx->r29, 0XA8);
    // 0x801E9BA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x801E9BAC: b           L_801E9BC0
    // 0x801E9BB0: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
        goto L_801E9BC0;
    // 0x801E9BB0: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
L_801E9BB4:
    // 0x801E9BB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E9BB8: nop

    // 0x801E9BBC: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
L_801E9BC0:
    // 0x801E9BC0: beq         $v0, $zero, L_801E9BD8
    if (ctx->r2 == 0) {
        // 0x801E9BC4: addiu       $t0, $sp, 0xA4
        ctx->r8 = ADD32(ctx->r29, 0XA4);
            goto L_801E9BD8;
    }
    // 0x801E9BC4: addiu       $t0, $sp, 0xA4
    ctx->r8 = ADD32(ctx->r29, 0XA4);
    // 0x801E9BC8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801E9BCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E9BD0: b           L_801E9BE8
    // 0x801E9BD4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
        goto L_801E9BE8;
    // 0x801E9BD4: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
L_801E9BD8:
    // 0x801E9BD8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801E9BDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E9BE0: nop

    // 0x801E9BE4: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_801E9BE8:
    // 0x801E9BE8: beq         $v0, $zero, L_801E9C00
    if (ctx->r2 == 0) {
        // 0x801E9BEC: addiu       $t1, $sp, 0xA0
        ctx->r9 = ADD32(ctx->r29, 0XA0);
            goto L_801E9C00;
    }
    // 0x801E9BEC: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x801E9BF0: lui         $at, 0x4138
    ctx->r1 = S32(0X4138 << 16);
    // 0x801E9BF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E9BF8: b           L_801E9C10
    // 0x801E9BFC: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
        goto L_801E9C10;
    // 0x801E9BFC: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
L_801E9C00:
    // 0x801E9C00: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x801E9C04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801E9C08: nop

    // 0x801E9C0C: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
L_801E9C10:
    // 0x801E9C10: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9C14: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9C18: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9C1C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x801E9C20: jal         0x80033898
    // 0x801E9C24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80033898_34498(rdram, ctx);
        goto after_5;
    // 0x801E9C24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x801E9C28: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801E9C2C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E9C30: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x801E9C34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9C38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9C3C: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x801E9C40: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x801E9C44: addiu       $t4, $sp, 0x94
    ctx->r12 = ADD32(ctx->r29, 0X94);
    // 0x801E9C48: swc1        $f8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f8.u32l;
    // 0x801E9C4C: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E9C50: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x801E9C54: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801E9C58: swc1        $f18, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->f18.u32l;
    // 0x801E9C5C: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E9C60: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x801E9C64: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801E9C68: swc1        $f8, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f8.u32l;
    // 0x801E9C6C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x801E9C70: swc1        $f10, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = ctx->f10.u32l;
    // 0x801E9C74: lwc1        $f16, 0x9C($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X9C);
    // 0x801E9C78: swc1        $f16, 0xC4($s2)
    MEM_W(0XC4, ctx->r18) = ctx->f16.u32l;
    // 0x801E9C7C: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x801E9C80: swc1        $f18, 0xA0($s2)
    MEM_W(0XA0, ctx->r18) = ctx->f18.u32l;
    // 0x801E9C84: lwc1        $f4, 0xA0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XA0);
    // 0x801E9C88: swc1        $f4, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = ctx->f4.u32l;
    // 0x801E9C8C: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801E9C90: swc1        $f6, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->f6.u32l;
    // 0x801E9C94: lwc1        $f8, 0xA4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XA4);
    // 0x801E9C98: swc1        $f8, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = ctx->f8.u32l;
    // 0x801E9C9C: lw          $t2, 0x74($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X74);
    // 0x801E9CA0: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x801E9CA4: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x801E9CA8: beq         $t2, $zero, L_801E9CC0
    if (ctx->r10 == 0) {
        // 0x801E9CAC: nop
    
            goto L_801E9CC0;
    }
    // 0x801E9CAC: nop

    // 0x801E9CB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9CB4: lwc1        $f10, -0x47C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X47C8);
    // 0x801E9CB8: b           L_801E9CC8
    // 0x801E9CBC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
        goto L_801E9CC8;
    // 0x801E9CBC: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
L_801E9CC0:
    // 0x801E9CC0: lwc1        $f16, -0x47C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X47C4);
    // 0x801E9CC4: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
L_801E9CC8:
    // 0x801E9CC8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9CCC: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9CD0: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9CD4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x801E9CD8: jal         0x80033898
    // 0x801E9CDC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_80033898_34498(rdram, ctx);
        goto after_6;
    // 0x801E9CDC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
    // 0x801E9CE0: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E9CE4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9CE8: addiu       $a3, $sp, 0x90
    ctx->r7 = ADD32(ctx->r29, 0X90);
    // 0x801E9CEC: swc1        $f18, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = ctx->f18.u32l;
    // 0x801E9CF0: lwc1        $f4, 0xAC($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XAC);
    // 0x801E9CF4: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
    // 0x801E9CF8: addiu       $t7, $sp, 0x88
    ctx->r15 = ADD32(ctx->r29, 0X88);
    // 0x801E9CFC: swc1        $f4, 0x6C($s2)
    MEM_W(0X6C, ctx->r18) = ctx->f4.u32l;
    // 0x801E9D00: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E9D04: swc1        $f6, 0xB0($s2)
    MEM_W(0XB0, ctx->r18) = ctx->f6.u32l;
    // 0x801E9D08: lwc1        $f8, 0xB0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0XB0);
    // 0x801E9D0C: swc1        $f8, 0x70($s2)
    MEM_W(0X70, ctx->r18) = ctx->f8.u32l;
    // 0x801E9D10: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E9D14: swc1        $f10, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->f10.u32l;
    // 0x801E9D18: lwc1        $f16, 0xB4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XB4);
    // 0x801E9D1C: swc1        $f16, 0x74($s2)
    MEM_W(0X74, ctx->r18) = ctx->f16.u32l;
    // 0x801E9D20: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801E9D24: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801E9D28: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x801E9D2C: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x801E9D30: nop

    // 0x801E9D34: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x801E9D38: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x801E9D3C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x801E9D40: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801E9D44: swc1        $f6, 0xA8($s2)
    MEM_W(0XA8, ctx->r18) = ctx->f6.u32l;
    // 0x801E9D48: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x801E9D4C: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x801E9D50: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x801E9D54: beq         $t5, $zero, L_801E9D6C
    if (ctx->r13 == 0) {
        // 0x801E9D58: nop
    
            goto L_801E9D6C;
    }
    // 0x801E9D58: nop

    // 0x801E9D5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9D60: lwc1        $f4, -0x47C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X47C0);
    // 0x801E9D64: b           L_801E9D74
    // 0x801E9D68: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
        goto L_801E9D74;
    // 0x801E9D68: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
L_801E9D6C:
    // 0x801E9D6C: lwc1        $f8, -0x47BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X47BC);
    // 0x801E9D70: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
L_801E9D74:
    // 0x801E9D74: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9D78: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9D7C: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9D80: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E9D84: jal         0x80033898
    // 0x801E9D88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_7;
    // 0x801E9D88: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_7:
    // 0x801E9D8C: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x801E9D90: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x801E9D94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E9D98: swc1        $f16, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->f16.u32l;
    // 0x801E9D9C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x801E9DA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9DA4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801E9DA8: swc1        $f10, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f10.u32l;
    // 0x801E9DAC: lwc1        $f18, 0x88($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X88);
    // 0x801E9DB0: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    // 0x801E9DB4: swc1        $f18, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->f18.u32l;
    // 0x801E9DB8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E9DBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E9DC0: jal         0x801EE228
    // 0x801E9DC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_801EE228_5AA138(rdram, ctx);
        goto after_8;
    // 0x801E9DC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_8:
    // 0x801E9DC8: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x801E9DCC: sh          $t9, 0xD0($s2)
    MEM_H(0XD0, ctx->r18) = ctx->r25;
    // 0x801E9DD0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E9DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9DD8: jal         0x80035EEC
    // 0x801E9DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80035EEC_36AEC(rdram, ctx);
        goto after_9;
    // 0x801E9DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x801E9DE0: beq         $v0, $zero, L_801E9E90
    if (ctx->r2 == 0) {
        // 0x801E9DE4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E9E90;
    }
    // 0x801E9DE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E9DE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9DEC: lwc1        $f0, -0x47B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X47B8);
    // 0x801E9DF0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x801E9DF4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x801E9DF8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x801E9DFC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x801E9E00: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x801E9E04: ori         $t2, $zero, 0x8000
    ctx->r10 = 0 | 0X8000;
    // 0x801E9E08: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x801E9E0C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x801E9E10: lwc1        $f4, 0xC($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0XC);
    // 0x801E9E14: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x801E9E18: addiu       $t5, $zero, 0x120
    ctx->r13 = ADD32(0, 0X120);
    // 0x801E9E1C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x801E9E20: lwc1        $f8, 0x10($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X10);
    // 0x801E9E24: lui         $t7, 0xC
    ctx->r15 = S32(0XC << 16);
    // 0x801E9E28: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x801E9E2C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x801E9E30: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x801E9E34: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x801E9E38: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x801E9E3C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x801E9E40: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x801E9E44: lhu         $t7, 0x2D90($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X2D90);
    // 0x801E9E48: lui         $t0, 0x901
    ctx->r8 = S32(0X901 << 16);
    // 0x801E9E4C: lui         $t1, 0x8007
    ctx->r9 = S32(0X8007 << 16);
    // 0x801E9E50: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x801E9E54: addiu       $t1, $t1, -0x26E0
    ctx->r9 = ADD32(ctx->r9, -0X26E0);
    // 0x801E9E58: addiu       $t0, $t0, -0x6DC8
    ctx->r8 = ADD32(ctx->r8, -0X6DC8);
    // 0x801E9E5C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801E9E60: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    // 0x801E9E64: or          $a2, $t1, $v0
    ctx->r6 = ctx->r9 | ctx->r2;
    // 0x801E9E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801E9E6C: jal         0x80034680
    // 0x801E9E70: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    func_80034680_35280(rdram, ctx);
        goto after_10;
    // 0x801E9E70: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    after_10:
    // 0x801E9E74: lbu         $t8, 0x90($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X90);
    // 0x801E9E78: lui         $t0, 0x8021
    ctx->r8 = S32(0X8021 << 16);
    // 0x801E9E7C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801E9E80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801E9E84: lw          $t0, -0x2DE0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2DE0);
    // 0x801E9E88: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x801E9E8C: sw          $s0, 0xBC($s2)
    MEM_W(0XBC, ctx->r18) = ctx->r16;
L_801E9E90:
    // 0x801E9E90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801E9E94: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x801E9E98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801E9E9C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x801E9EA0: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x801E9EA4: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x801E9EA8: lui         $t3, 0x8007
    ctx->r11 = S32(0X8007 << 16);
    // 0x801E9EAC: addiu       $t3, $t3, -0x26E0
    ctx->r11 = ADD32(ctx->r11, -0X26E0);
    // 0x801E9EB0: lhu         $a2, 0x18($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X18);
    // 0x801E9EB4: lhu         $a1, 0x16($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X16);
    // 0x801E9EB8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x801E9EBC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E9EC0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x801E9EC4: addiu       $t1, $sp, 0x7C
    ctx->r9 = ADD32(ctx->r29, 0X7C);
    // 0x801E9EC8: addiu       $t2, $sp, 0x78
    ctx->r10 = ADD32(ctx->r29, 0X78);
    // 0x801E9ECC: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x801E9ED0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x801E9ED4: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x801E9ED8: jal         0x80033898
    // 0x801E9EDC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    func_80033898_34498(rdram, ctx);
        goto after_11;
    // 0x801E9EDC: addiu       $a3, $sp, 0x80
    ctx->r7 = ADD32(ctx->r29, 0X80);
    after_11:
    // 0x801E9EE0: lui         $a2, 0x901
    ctx->r6 = S32(0X901 << 16);
    // 0x801E9EE4: addiu       $a2, $a2, -0x6CB8
    ctx->r6 = ADD32(ctx->r6, -0X6CB8);
    // 0x801E9EE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x801E9EEC: addu        $a2, $a2, $at
    ctx->r6 = ADD32(ctx->r6, ctx->r1);
    // 0x801E9EF0: lui         $a1, 0x801F
    ctx->r5 = S32(0X801F << 16);
    // 0x801E9EF4: addiu       $a1, $a1, -0x5B18
    ctx->r5 = ADD32(ctx->r5, -0X5B18);
    // 0x801E9EF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801E9EFC: lwc1        $f20, -0x47B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X47B4);
    // 0x801E9F00: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x801E9F04: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x801E9F08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_801E9F0C:
    // 0x801E9F0C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x801E9F10: ori         $t5, $zero, 0x8000
    ctx->r13 = 0 | 0X8000;
    // 0x801E9F14: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x801E9F18: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x801E9F1C: lwc1        $f18, 0xC($s3)
    ctx->f18.u32l = MEM_W(ctx->r19, 0XC);
    // 0x801E9F20: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x801E9F24: addiu       $t8, $zero, 0x120
    ctx->r24 = ADD32(0, 0X120);
    // 0x801E9F28: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x801E9F2C: lwc1        $f6, 0x10($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X10);
    // 0x801E9F30: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x801E9F34: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x801E9F38: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x801E9F3C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x801E9F40: swc1        $f20, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f20.u32l;
    // 0x801E9F44: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x801E9F48: swc1        $f20, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f20.u32l;
    // 0x801E9F4C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x801E9F50: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x801E9F54: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x801E9F58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x801E9F5C: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x801E9F60: jal         0x800358E8
    // 0x801E9F64: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_800358E8_364E8(rdram, ctx);
        goto after_12;
    // 0x801E9F64: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x801E9F68: beq         $v0, $zero, L_801E9FE8
    if (ctx->r2 == 0) {
        // 0x801E9F6C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801E9FE8;
    }
    // 0x801E9F6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801E9F70: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x801E9F74: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x801E9F78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801E9F7C: beql        $v1, $zero, L_801E9FEC
    if (ctx->r3 == 0) {
        // 0x801E9F80: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_801E9FEC;
    }
    goto skip_0;
    // 0x801E9F80: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x801E9F84: sw          $s4, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r20;
    // 0x801E9F88: sw          $s2, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r18;
    // 0x801E9F8C: sb          $s1, 0xA0($v0)
    MEM_B(0XA0, ctx->r2) = ctx->r17;
    // 0x801E9F90: lbu         $t9, 0x90($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X90);
    // 0x801E9F94: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x801E9F98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x801E9F9C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x801E9FA0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x801E9FA4: lw          $t1, -0x2DE0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2DE0);
    // 0x801E9FA8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x801E9FAC: addiu       $a3, $zero, 0x15
    ctx->r7 = ADD32(0, 0X15);
    // 0x801E9FB0: sw          $t1, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r9;
    // 0x801E9FB4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x801E9FB8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x801E9FBC: jal         0x801EE228
    // 0x801E9FC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_801EE228_5AA138(rdram, ctx);
        goto after_13;
    // 0x801E9FC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_13:
    // 0x801E9FC4: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x801E9FC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x801E9FCC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x801E9FD0: swc1        $f4, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->f4.u32l;
    // 0x801E9FD4: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x801E9FD8: swc1        $f8, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f8.u32l;
    // 0x801E9FDC: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x801E9FE0: bne         $s1, $at, L_801E9F0C
    if (ctx->r17 != ctx->r1) {
        // 0x801E9FE4: swc1        $f16, 0xAC($s0)
        MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
            goto L_801E9F0C;
    }
    // 0x801E9FE4: swc1        $f16, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f16.u32l;
L_801E9FE8:
    // 0x801E9FE8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_801E9FEC:
    // 0x801E9FEC: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x801E9FF0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x801E9FF4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x801E9FF8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x801E9FFC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x801EA000: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x801EA004: jr          $ra
    // 0x801EA008: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x801EA008: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_801DAA10_596920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DAA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DAA14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DAA18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801DAA1C: lw          $t8, 0x5C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAA20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801DAA24: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x801DAA28: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x801DAA2C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DAA30: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x801DAA34: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAA38: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x801DAA3C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x801DAA40: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x801DAA44: swc1        $f2, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f2.u32l;
    // 0x801DAA48: lhu         $t0, 0x94($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X94);
    // 0x801DAA4C: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x801DAA50: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x801DAA54: subu        $v0, $t0, $t6
    ctx->r2 = SUB32(ctx->r8, ctx->r14);
    // 0x801DAA58: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x801DAA5C: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x801DAA60: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x801DAA64: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x801DAA68: swc1        $f2, 0xE8($a0)
    MEM_W(0XE8, ctx->r4) = ctx->f2.u32l;
    // 0x801DAA6C: bgez        $t2, L_801DAA7C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801DAA70: swc1        $f2, 0xE4($a0)
        MEM_W(0XE4, ctx->r4) = ctx->f2.u32l;
            goto L_801DAA7C;
    }
    // 0x801DAA70: swc1        $f2, 0xE4($a0)
    MEM_W(0XE4, ctx->r4) = ctx->f2.u32l;
    // 0x801DAA74: b           L_801DAA80
    // 0x801DAA78: negu        $v1, $t2
    ctx->r3 = SUB32(0, ctx->r10);
        goto L_801DAA80;
    // 0x801DAA78: negu        $v1, $t2
    ctx->r3 = SUB32(0, ctx->r10);
L_801DAA7C:
    // 0x801DAA7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801DAA80:
    // 0x801DAA80: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x801DAA84: bne         $at, $zero, L_801DAAAC
    if (ctx->r1 != 0) {
        // 0x801DAA88: addiu       $t6, $a2, 0x200
        ctx->r14 = ADD32(ctx->r6, 0X200);
            goto L_801DAAAC;
    }
    // 0x801DAA88: addiu       $t6, $a2, 0x200
    ctx->r14 = ADD32(ctx->r6, 0X200);
    // 0x801DAA8C: lw          $t5, 0x5C($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAA90: addiu       $t3, $a2, 0x200
    ctx->r11 = ADD32(ctx->r6, 0X200);
    // 0x801DAA94: andi        $t4, $t3, 0x3FF
    ctx->r12 = ctx->r11 & 0X3FF;
    // 0x801DAA98: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x801DAA9C: jal         0x801DACDC
    // 0x801DAAA0: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    func_801DACDC_596BEC(rdram, ctx);
        goto after_0;
    // 0x801DAAA0: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    after_0:
    // 0x801DAAA4: b           L_801DAACC
    // 0x801DAAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_801DAACC;
    // 0x801DAAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAAAC:
    // 0x801DAAAC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x801DAAB0: andi        $t7, $t6, 0x3FF
    ctx->r15 = ctx->r14 & 0X3FF;
    // 0x801DAAB4: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x801DAAB8: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x801DAABC: sh          $a2, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r6;
    // 0x801DAAC0: jal         0x801DACDC
    // 0x801DAAC4: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_801DACDC_596BEC(rdram, ctx);
        goto after_1;
    // 0x801DAAC4: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_1:
    // 0x801DAAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801DAACC:
    // 0x801DAACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DAAD0: jr          $ra
    // 0x801DAAD4: nop

    TRACE_RETURN()
    return;
    // 0x801DAAD4: nop

;}
RECOMP_FUNC void func_801ED554_5A9464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801ED554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801ED558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801ED55C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801ED560: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x801ED564: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801ED568: jal         0x801ED580
    // 0x801ED56C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801ED580_5A9490(rdram, ctx);
        goto after_0;
    // 0x801ED56C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x801ED570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801ED574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801ED578: jr          $ra
    // 0x801ED57C: nop

    TRACE_RETURN()
    return;
    // 0x801ED57C: nop

;}
RECOMP_FUNC void func_801D48E0_5907F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D48E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801D48E4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x801D48E8: addiu       $a2, $a2, -0x39D8
    ctx->r6 = ADD32(ctx->r6, -0X39D8);
    // 0x801D48EC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x801D48F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801D48F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801D48F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801D48FC: lw          $a3, 0x2C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X2C);
    // 0x801D4900: lbu         $v0, 0x64($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X64);
    // 0x801D4904: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x801D4908: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x801D490C: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x801D4910: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801D4914: beq         $v0, $zero, L_801D4924
    if (ctx->r2 == 0) {
        // 0x801D4918: or          $a3, $t7, $zero
        ctx->r7 = ctx->r15 | 0;
            goto L_801D4924;
    }
    // 0x801D4918: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x801D491C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x801D4920: sb          $v0, -0x3410($at)
    MEM_B(-0X3410, ctx->r1) = ctx->r2;
L_801D4924:
    // 0x801D4924: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x801D4928: addiu       $a1, $a1, -0x39FC
    ctx->r5 = ADD32(ctx->r5, -0X39FC);
    // 0x801D492C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x801D4930: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801D4934: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x801D4938: sb          $zero, 0xED($t9)
    MEM_B(0XED, ctx->r25) = 0;
    // 0x801D493C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x801D4940: addiu       $v1, $v1, -0x2E1C
    ctx->r3 = ADD32(ctx->r3, -0X2E1C);
    // 0x801D4944: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4948: lwc1        $f4, 0x88($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X88);
    // 0x801D494C: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x801D4950: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x801D4954: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x801D4958: swc1        $f6, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f6.u32l;
    // 0x801D495C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D4960: ldc1        $f16, -0x53B0($at)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r1, -0X53B0);
    // 0x801D4964: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4968: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x801D496C: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x801D4970: nop

    // 0x801D4974: bc1fl       L_801D49E8
    if (!c1cs) {
        // 0x801D4978: sb          $zero, 0xE8($s0)
        MEM_B(0XE8, ctx->r16) = 0;
            goto L_801D49E8;
    }
    goto skip_0;
    // 0x801D4978: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
    skip_0:
    // 0x801D497C: ldc1        $f0, -0x53A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, -0X53A8);
    // 0x801D4980: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x801D4984: lwc1        $f18, 0x7DBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7DBC);
    // 0x801D4988: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x801D498C: c.lt.d      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.d < ctx->f0.d;
    // 0x801D4990: nop

    // 0x801D4994: bc1tl       L_801D49D0
    if (c1cs) {
        // 0x801D4998: lbu         $v0, 0xE8($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0XE8);
            goto L_801D49D0;
    }
    goto skip_1;
    // 0x801D4998: lbu         $v0, 0xE8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE8);
    skip_1:
    // 0x801D499C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x801D49A0: lw          $v0, 0x5C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X5C);
    // 0x801D49A4: lhu         $t1, 0x0($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X0);
    // 0x801D49A8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x801D49AC: beql        $t2, $zero, L_801D49E8
    if (ctx->r10 == 0) {
        // 0x801D49B0: sb          $zero, 0xE8($s0)
        MEM_B(0XE8, ctx->r16) = 0;
            goto L_801D49E8;
    }
    goto skip_2;
    // 0x801D49B0: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
    skip_2:
    // 0x801D49B4: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x801D49B8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x801D49BC: c.lt.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d < ctx->f0.d;
    // 0x801D49C0: nop

    // 0x801D49C4: bc1fl       L_801D49E8
    if (!c1cs) {
        // 0x801D49C8: sb          $zero, 0xE8($s0)
        MEM_B(0XE8, ctx->r16) = 0;
            goto L_801D49E8;
    }
    goto skip_3;
    // 0x801D49C8: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
    skip_3:
    // 0x801D49CC: lbu         $v0, 0xE8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE8);
L_801D49D0:
    // 0x801D49D0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D49D4: beq         $v0, $at, L_801D49EC
    if (ctx->r2 == ctx->r1) {
        // 0x801D49D8: addiu       $t3, $v0, 0x1
        ctx->r11 = ADD32(ctx->r2, 0X1);
            goto L_801D49EC;
    }
    // 0x801D49D8: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x801D49DC: b           L_801D49EC
    // 0x801D49E0: sb          $t3, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = ctx->r11;
        goto L_801D49EC;
    // 0x801D49E0: sb          $t3, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = ctx->r11;
    // 0x801D49E4: sb          $zero, 0xE8($s0)
    MEM_B(0XE8, ctx->r16) = 0;
L_801D49E8:
    // 0x801D49E8: sh          $t4, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r12;
L_801D49EC:
    // 0x801D49EC: jal         0x801D55E0
    // 0x801D49F0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_801D55E0_5914F0(rdram, ctx);
        goto after_0;
    // 0x801D49F0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x801D49F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D49F8: jal         0x801D7818
    // 0x801D49FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D7818_593728(rdram, ctx);
        goto after_1;
    // 0x801D49FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x801D4A00: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x801D4A04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4A08: sh          $v0, -0x2E1E($at)
    MEM_H(-0X2E1E, ctx->r1) = ctx->r2;
    // 0x801D4A0C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x801D4A10: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x801D4A14: lwc1        $f16, 0x14($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X14);
    // 0x801D4A18: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x801D4A1C: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x801D4A20: jal         0x80003A94
    // 0x801D4A24: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    func_80003A94_4694(rdram, ctx);
        goto after_2;
    // 0x801D4A24: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    after_2:
    // 0x801D4A28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4A2C: sh          $v0, -0x2E20($at)
    MEM_H(-0X2E20, ctx->r1) = ctx->r2;
    // 0x801D4A30: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x801D4A34: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x801D4A38: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801D4A3C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x801D4A40: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x801D4A44: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
    // 0x801D4A48: lbu         $v1, 0x64($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X64);
    // 0x801D4A4C: bnel        $v1, $zero, L_801D4A90
    if (ctx->r3 != 0) {
        // 0x801D4A50: lw          $t2, 0xC($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XC);
            goto L_801D4A90;
    }
    goto skip_4;
    // 0x801D4A50: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    skip_4:
    // 0x801D4A54: lhu         $t7, 0x5C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X5C);
    // 0x801D4A58: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x801D4A5C: beql        $t7, $zero, L_801D4A90
    if (ctx->r15 == 0) {
        // 0x801D4A60: lw          $t2, 0xC($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XC);
            goto L_801D4A90;
    }
    goto skip_5;
    // 0x801D4A60: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    skip_5:
    // 0x801D4A64: lw          $t8, -0x39FC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X39FC);
    // 0x801D4A68: lbu         $t9, 0xCD($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XCD);
    // 0x801D4A6C: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x801D4A70: beql        $at, $zero, L_801D4A90
    if (ctx->r1 == 0) {
        // 0x801D4A74: lw          $t2, 0xC($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XC);
            goto L_801D4A90;
    }
    goto skip_6;
    // 0x801D4A74: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    skip_6:
    // 0x801D4A78: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x801D4A7C: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x801D4A80: addiu       $t0, $t0, -0x7A50
    ctx->r8 = ADD32(ctx->r8, -0X7A50);
    // 0x801D4A84: beq         $t0, $t1, L_801D4AA0
    if (ctx->r8 == ctx->r9) {
        // 0x801D4A88: nop
    
            goto L_801D4AA0;
    }
    // 0x801D4A88: nop

    // 0x801D4A8C: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
L_801D4A90:
    // 0x801D4A90: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x801D4A94: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x801D4A98: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x801D4A9C: lbu         $v1, 0x64($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X64);
L_801D4AA0:
    // 0x801D4AA0: bnel        $v1, $zero, L_801D4BE0
    if (ctx->r3 != 0) {
        // 0x801D4AA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D4BE0;
    }
    goto skip_7;
    // 0x801D4AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x801D4AA8: lhu         $t4, 0x5C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X5C);
    // 0x801D4AAC: lui         $t5, 0x8020
    ctx->r13 = S32(0X8020 << 16);
    // 0x801D4AB0: beql        $t4, $zero, L_801D4BE0
    if (ctx->r12 == 0) {
        // 0x801D4AB4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D4BE0;
    }
    goto skip_8;
    // 0x801D4AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x801D4AB8: lw          $t5, -0x39FC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X39FC);
    // 0x801D4ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4AC0: lbu         $t6, 0xCD($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0XCD);
    // 0x801D4AC4: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x801D4AC8: beql        $at, $zero, L_801D4BE0
    if (ctx->r1 == 0) {
        // 0x801D4ACC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D4BE0;
    }
    goto skip_9;
    // 0x801D4ACC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x801D4AD0: jal         0x801D2734
    // 0x801D4AD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D2734_58E644(rdram, ctx);
        goto after_3;
    // 0x801D4AD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801D4AD8: lbu         $v0, 0xD1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD1);
    // 0x801D4ADC: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x801D4AE0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x801D4AE4: bne         $v0, $v1, L_801D4AF4
    if (ctx->r2 != ctx->r3) {
        // 0x801D4AE8: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_801D4AF4;
    }
    // 0x801D4AE8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x801D4AEC: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x801D4AF0: bne         $v0, $t7, L_801D4B04
    if (ctx->r2 != ctx->r15) {
        // 0x801D4AF4: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_801D4B04;
    }
L_801D4AF4:
    // 0x801D4AF4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801D4AF8: beql        $a0, $at, L_801D4B08
    if (ctx->r4 == ctx->r1) {
        // 0x801D4AFC: lbu         $t8, 0x98($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X98);
            goto L_801D4B08;
    }
    goto skip_10;
    // 0x801D4AFC: lbu         $t8, 0x98($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X98);
    skip_10:
    // 0x801D4B00: sb          $v1, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r3;
L_801D4B04:
    // 0x801D4B04: lbu         $t8, 0x98($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X98);
L_801D4B08:
    // 0x801D4B08: lw          $t9, -0x39FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X39FC);
    // 0x801D4B0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801D4B10: sb          $t8, -0x2E5E($at)
    MEM_B(-0X2E5E, ctx->r1) = ctx->r24;
    // 0x801D4B14: lbu         $t0, 0x61($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X61);
    // 0x801D4B18: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x801D4B1C: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x801D4B20: beql        $t0, $zero, L_801D4B30
    if (ctx->r8 == 0) {
        // 0x801D4B24: lbu         $t2, 0xD2($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XD2);
            goto L_801D4B30;
    }
    goto skip_11;
    // 0x801D4B24: lbu         $t2, 0xD2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD2);
    skip_11:
    // 0x801D4B28: sb          $t1, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r9;
    // 0x801D4B2C: lbu         $t2, 0xD2($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD2);
L_801D4B30:
    // 0x801D4B30: beql        $t2, $zero, L_801D4B40
    if (ctx->r10 == 0) {
        // 0x801D4B34: lbu         $a1, 0x98($s0)
        ctx->r5 = MEM_BU(ctx->r16, 0X98);
            goto L_801D4B40;
    }
    goto skip_12;
    // 0x801D4B34: lbu         $a1, 0x98($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X98);
    skip_12:
    // 0x801D4B38: sb          $t3, 0x98($s0)
    MEM_B(0X98, ctx->r16) = ctx->r11;
    // 0x801D4B3C: lbu         $a1, 0x98($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X98);
L_801D4B40:
    // 0x801D4B40: lbu         $t4, 0xD1($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XD1);
    // 0x801D4B44: beq         $a1, $t4, L_801D4B64
    if (ctx->r5 == ctx->r12) {
        // 0x801D4B48: nop
    
            goto L_801D4B64;
    }
    // 0x801D4B48: nop

    // 0x801D4B4C: jal         0x801D4828
    // 0x801D4B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D4828_590738(rdram, ctx);
        goto after_4;
    // 0x801D4B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x801D4B54: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x801D4B58: sb          $zero, 0x5E($s0)
    MEM_B(0X5E, ctx->r16) = 0;
    // 0x801D4B5C: b           L_801D4B6C
    // 0x801D4B60: sb          $t5, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r13;
        goto L_801D4B6C;
    // 0x801D4B60: sb          $t5, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r13;
L_801D4B64:
    // 0x801D4B64: jal         0x801D4828
    // 0x801D4B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D4828_590738(rdram, ctx);
        goto after_5;
    // 0x801D4B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_801D4B6C:
    // 0x801D4B6C: sb          $zero, 0x5F($s0)
    MEM_B(0X5F, ctx->r16) = 0;
    // 0x801D4B70: jal         0x801D55E0
    // 0x801D4B74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D55E0_5914F0(rdram, ctx);
        goto after_6;
    // 0x801D4B74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x801D4B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4B7C: jal         0x801D4BF0
    // 0x801D4B80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D4BF0_590B00(rdram, ctx);
        goto after_7;
    // 0x801D4B80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x801D4B84: jal         0x801D55E0
    // 0x801D4B88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801D55E0_5914F0(rdram, ctx);
        goto after_8;
    // 0x801D4B88: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x801D4B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4B90: jal         0x801D51A8
    // 0x801D4B94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D51A8_5910B8(rdram, ctx);
        goto after_9;
    // 0x801D4B94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x801D4B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4B9C: jal         0x801D5214
    // 0x801D4BA0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D5214_591124(rdram, ctx);
        goto after_10;
    // 0x801D4BA0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x801D4BA4: jal         0x801D5374
    // 0x801D4BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801D5374_591284(rdram, ctx);
        goto after_11;
    // 0x801D4BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x801D4BAC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x801D4BB0: beq         $v1, $zero, L_801D4BDC
    if (ctx->r3 == 0) {
        // 0x801D4BB4: sll         $t6, $v1, 8
        ctx->r14 = S32(ctx->r3 << 8);
            goto L_801D4BDC;
    }
    // 0x801D4BB4: sll         $t6, $v1, 8
    ctx->r14 = S32(ctx->r3 << 8);
    // 0x801D4BB8: bltzl       $t6, L_801D4BE0
    if (SIGNED(ctx->r14) < 0) {
        // 0x801D4BBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D4BE0;
    }
    goto skip_13;
    // 0x801D4BBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_13:
    // 0x801D4BC0: lbu         $t7, 0x98($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X98);
    // 0x801D4BC4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x801D4BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801D4BCC: beql        $t7, $at, L_801D4BE0
    if (ctx->r15 == ctx->r1) {
        // 0x801D4BD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801D4BE0;
    }
    goto skip_14;
    // 0x801D4BD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_14:
    // 0x801D4BD4: jal         0x801D54C0
    // 0x801D4BD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801D54C0_5913D0(rdram, ctx);
        goto after_12;
    // 0x801D4BD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_12:
L_801D4BDC:
    // 0x801D4BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801D4BE0:
    // 0x801D4BE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801D4BE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801D4BE8: jr          $ra
    // 0x801D4BEC: nop

    TRACE_RETURN()
    return;
    // 0x801D4BEC: nop

;}
RECOMP_FUNC void func_801F3AF0_5AFA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F3AF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801F3AF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x801F3AF8: beq         $v0, $zero, L_801F3B24
    if (ctx->r2 == 0) {
        // 0x801F3AFC: nop
    
            goto L_801F3B24;
    }
    // 0x801F3AFC: nop

    // 0x801F3B00: lhu         $a1, 0x20($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X20);
    // 0x801F3B04: lhu         $t6, 0x20($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X20);
L_801F3B08:
    // 0x801F3B08: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x801F3B0C: beq         $at, $zero, L_801F3B24
    if (ctx->r1 == 0) {
        // 0x801F3B10: nop
    
            goto L_801F3B24;
    }
    // 0x801F3B10: nop

    // 0x801F3B14: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x801F3B18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801F3B1C: bnel        $v0, $zero, L_801F3B08
    if (ctx->r2 != 0) {
        // 0x801F3B20: lhu         $t6, 0x20($v0)
        ctx->r14 = MEM_HU(ctx->r2, 0X20);
            goto L_801F3B08;
    }
    goto skip_0;
    // 0x801F3B20: lhu         $t6, 0x20($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X20);
    skip_0:
L_801F3B24:
    // 0x801F3B24: jr          $ra
    // 0x801F3B28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    TRACE_RETURN()
    return;
    // 0x801F3B28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_801E2E90_59EDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E2E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801E2E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801E2E98: jal         0x801E2EF0
    // 0x801E2E9C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_801E2EF0_59EE00(rdram, ctx);
        goto after_0;
    // 0x801E2E9C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x801E2EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801E2EA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801E2EA8: jr          $ra
    // 0x801E2EAC: nop

    TRACE_RETURN()
    return;
    // 0x801E2EAC: nop

;}
RECOMP_FUNC void func_801E15B4_59D4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E15B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x801E15B8: jr          $ra
    // 0x801E15BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x801E15BC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_801DDD7C_599C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DDD7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DDD80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DDD84: jal         0x801E3400
    // 0x801DDD88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E3400_59F310(rdram, ctx);
        goto after_0;
    // 0x801DDD88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DDD8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DDD90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DDD94: jr          $ra
    // 0x801DDD98: nop

    TRACE_RETURN()
    return;
    // 0x801DDD98: nop

;}
RECOMP_FUNC void func_801D1358_58D268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801D1358: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x801D135C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x801D1360: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x801D1364: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x801D1368: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x801D136C: sw          $a3, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r7;
    // 0x801D1370: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801D1374: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x801D1378: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x801D137C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x801D1380: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x801D1384: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x801D1388: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D138C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x801D1390: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x801D1394: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x801D1398: lbu         $t6, 0x91($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X91);
    // 0x801D139C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x801D13A0: bgez        $t6, L_801D13B4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801D13A4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_801D13B4;
    }
    // 0x801D13A4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D13A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x801D13AC: nop

    // 0x801D13B0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_801D13B4:
    // 0x801D13B4: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D13B8: lw          $t7, 0xD8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD8);
    // 0x801D13BC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x801D13C0: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x801D13C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801D13C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D13CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801D13D0: swc1        $f6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f6.u32l;
    // 0x801D13D4: lw          $v0, 0x5C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5C);
    // 0x801D13D8: lhu         $t8, 0xA($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA);
    // 0x801D13DC: andi        $t9, $t8, 0xF0FF
    ctx->r25 = ctx->r24 & 0XF0FF;
    // 0x801D13E0: sh          $t9, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r25;
    // 0x801D13E4: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x801D13E8: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x801D13EC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x801D13F0: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801D13F4: nop

    // 0x801D13F8: cvt.w.s     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = CVT_W_S(ctx->f18.fl);
    // 0x801D13FC: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801D1400: nop

    // 0x801D1404: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801D1408: beql        $v1, $zero, L_801D1458
    if (ctx->r3 == 0) {
        // 0x801D140C: mfc1        $v1, $f16
        ctx->r3 = (int32_t)ctx->f16.u32l;
            goto L_801D1458;
    }
    goto skip_0;
    // 0x801D140C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x801D1410: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D1414: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x801D1418: sub.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x801D141C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x801D1420: nop

    // 0x801D1424: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x801D1428: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x801D142C: nop

    // 0x801D1430: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x801D1434: bne         $v1, $zero, L_801D144C
    if (ctx->r3 != 0) {
        // 0x801D1438: nop
    
            goto L_801D144C;
    }
    // 0x801D1438: nop

    // 0x801D143C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x801D1440: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x801D1444: b           L_801D1464
    // 0x801D1448: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_801D1464;
    // 0x801D1448: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_801D144C:
    // 0x801D144C: b           L_801D1464
    // 0x801D1450: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_801D1464;
    // 0x801D1450: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x801D1454: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
L_801D1458:
    // 0x801D1458: nop

    // 0x801D145C: bltz        $v1, L_801D144C
    if (SIGNED(ctx->r3) < 0) {
        // 0x801D1460: nop
    
            goto L_801D144C;
    }
    // 0x801D1460: nop

L_801D1464:
    // 0x801D1464: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x801D1468: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D146C: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x801D1470: lw          $t3, 0xD8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD8);
    // 0x801D1474: andi        $t2, $v1, 0xFFFF
    ctx->r10 = ctx->r3 & 0XFFFF;
    // 0x801D1478: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801D147C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x801D1480: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x801D1484: lw          $t4, 0xDC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XDC);
    // 0x801D1488: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x801D148C: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x801D1490: lwc1        $f18, 0x4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X4);
    // 0x801D1494: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D1498: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x801D149C: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x801D14A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801D14A4: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x801D14A8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x801D14AC: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x801D14B0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x801D14B4: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D14B8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801D14BC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x801D14C0: bgez        $t2, L_801D14D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801D14C4: swc1        $f18, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
            goto L_801D14D4;
    }
    // 0x801D14C4: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x801D14C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x801D14CC: nop

    // 0x801D14D0: add.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f16.fl;
L_801D14D4:
    // 0x801D14D4: lwc1        $f10, 0x0($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X0);
    // 0x801D14D8: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x801D14DC: addiu       $t5, $v1, 0x2
    ctx->r13 = ADD32(ctx->r3, 0X2);
    // 0x801D14E0: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x801D14E4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x801D14E8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x801D14EC: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x801D14F0: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x801D14F4: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x801D14F8: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x801D14FC: neg.s       $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = -ctx->f4.fl;
    // 0x801D1500: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x801D1504: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x801D1508: lwc1        $f6, 0x8($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X8);
    // 0x801D150C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801D1510: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x801D1514: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x801D1518: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x801D151C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x801D1520: jal         0x8002C9D4
    // 0x801D1524: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8002C9D4_2D5D4(rdram, ctx);
        goto after_0;
    // 0x801D1524: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x801D1528: lh          $t6, 0xB8($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XB8);
    // 0x801D152C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x801D1530: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x801D1534: bne         $t6, $at, L_801D15C0
    if (ctx->r14 != ctx->r1) {
        // 0x801D1538: lwc1        $f0, 0x44($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
            goto L_801D15C0;
    }
    // 0x801D1538: lwc1        $f0, 0x44($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X44);
    // 0x801D153C: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D1540: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x801D1544: nop

    // 0x801D1548: bc1fl       L_801D15C4
    if (!c1cs) {
        // 0x801D154C: lwc1        $f10, 0x5C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D15C4;
    }
    goto skip_1;
    // 0x801D154C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    skip_1:
    // 0x801D1550: lw          $v0, 0x5C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5C);
    // 0x801D1554: negu        $t9, $t0
    ctx->r25 = SUB32(0, ctx->r8);
    // 0x801D1558: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x801D155C: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x801D1560: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801D1564: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x801D1568: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x801D156C: sh          $t8, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r24;
    // 0x801D1570: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x801D1574: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x801D1578: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x801D157C: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x801D1580: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x801D1584: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D1588: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x801D158C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x801D1590: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x801D1594: add.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x801D1598: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x801D159C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x801D15A0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x801D15A4: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x801D15A8: lwc1        $f16, 0xA4($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0XA4);
    // 0x801D15AC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x801D15B0: nop

    // 0x801D15B4: bc1fl       L_801D15C4
    if (!c1cs) {
        // 0x801D15B8: lwc1        $f10, 0x5C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_801D15C4;
    }
    goto skip_2;
    // 0x801D15B8: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x801D15BC: swc1        $f0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->f0.u32l;
L_801D15C0:
    // 0x801D15C0: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
L_801D15C4:
    // 0x801D15C4: swc1        $f10, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f10.u32l;
    // 0x801D15C8: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x801D15CC: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    // 0x801D15D0: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x801D15D4: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x801D15D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x801D15DC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x801D15E0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x801D15E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x801D15E8: jr          $ra
    // 0x801D15EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x801D15EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_801F70B0_5B2FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F70B0: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801F70B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801F70B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801F70BC: lwc1        $f4, 0xAC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XAC);
    // 0x801F70C0: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x801F70C4: nop

    // 0x801F70C8: bc1f        L_801F70D4
    if (!c1cs) {
        // 0x801F70CC: nop
    
            goto L_801F70D4;
    }
    // 0x801F70CC: nop

    // 0x801F70D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801F70D4:
    // 0x801F70D4: jr          $ra
    // 0x801F70D8: nop

    TRACE_RETURN()
    return;
    // 0x801F70D8: nop

;}
RECOMP_FUNC void func_801F1F34_5ADE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F1F34: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801F1F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F1F3C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801F1F40: lwc1        $f4, 0x6C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801F1F44: lwc1        $f6, 0x78($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X78);
    // 0x801F1F48: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F1F4C: lwc1        $f16, 0x7C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x801F1F50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F1F54: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x801F1F58: lwc1        $f4, 0x74($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F1F5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F1F60: swc1        $f8, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f8.u32l;
    // 0x801F1F64: lwc1        $f0, 0x6C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x801F1F68: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x801F1F6C: swc1        $f18, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f18.u32l;
    // 0x801F1F70: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x801F1F74: lwc1        $f2, 0x70($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F1F78: swc1        $f8, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f8.u32l;
    // 0x801F1F7C: lwc1        $f12, 0x74($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F1F80: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801F1F84: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801F1F88: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801F1F8C: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x801F1F90: nop

    // 0x801F1F94: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x801F1F98: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x801F1F9C: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x801F1FA0: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x801F1FA4: nop

    // 0x801F1FA8: bc1f        L_801F200C
    if (!c1cs) {
        // 0x801F1FAC: nop
    
            goto L_801F200C;
    }
    // 0x801F1FAC: nop

    // 0x801F1FB0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x801F1FB4: lwc1        $f10, 0x70($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X70);
    // 0x801F1FB8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801F1FBC: lwc1        $f16, 0x74($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X74);
    // 0x801F1FC0: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x801F1FC4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801F1FC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801F1FCC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x801F1FD0: jal         0x8001D394
    // 0x801F1FD4: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x801F1FD4: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x801F1FD8: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801F1FDC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801F1FE0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x801F1FE4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x801F1FE8: mul.s       $f18, $f4, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x801F1FEC: swc1        $f18, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->f18.u32l;
    // 0x801F1FF0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801F1FF4: lwc1        $f0, 0x6C($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X6C);
    // 0x801F1FF8: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x801F1FFC: swc1        $f8, 0x70($a2)
    MEM_W(0X70, ctx->r6) = ctx->f8.u32l;
    // 0x801F2000: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801F2004: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x801F2008: swc1        $f16, 0x74($a2)
    MEM_W(0X74, ctx->r6) = ctx->f16.u32l;
L_801F200C:
    // 0x801F200C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x801F2010: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x801F2014: lwc1        $f16, 0x10($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X10);
    // 0x801F2018: add.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x801F201C: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
    // 0x801F2020: lwc1        $f8, 0x70($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X70);
    // 0x801F2024: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801F2028: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x801F202C: lwc1        $f4, 0x74($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X74);
    // 0x801F2030: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x801F2034: swc1        $f18, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f18.u32l;
    // 0x801F2038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F203C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801F2040: jr          $ra
    // 0x801F2044: nop

    TRACE_RETURN()
    return;
    // 0x801F2044: nop

;}
RECOMP_FUNC void func_801F4658_5B0568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801F4658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801F465C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801F4660: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801F4664: jal         0x801E84A4
    // 0x801F4668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E84A4_5A43B4(rdram, ctx);
        goto after_0;
    // 0x801F4668: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801F466C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801F4670: jal         0x801F4E38
    // 0x801F4674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801F4E38_5B0D48(rdram, ctx);
        goto after_1;
    // 0x801F4674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x801F4678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801F467C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801F4680: jr          $ra
    // 0x801F4684: nop

    TRACE_RETURN()
    return;
    // 0x801F4684: nop

;}
RECOMP_FUNC void func_801DE70C_59A61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DE70C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801DE710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801DE714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801DE718: jal         0x801E7DE8
    // 0x801DE71C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_801E7DE8_5A3CF8(rdram, ctx);
        goto after_0;
    // 0x801DE71C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801DE720: beq         $v0, $zero, L_801DE734
    if (ctx->r2 == 0) {
        // 0x801DE724: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_801DE734;
    }
    // 0x801DE724: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801DE728: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x801DE72C: b           L_801DE740
    // 0x801DE730: lwc1        $f0, -0x4E74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E74);
        goto L_801DE740;
    // 0x801DE730: lwc1        $f0, -0x4E74($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4E74);
L_801DE734:
    // 0x801DE734: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801DE738: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801DE73C: nop

L_801DE740:
    // 0x801DE740: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x801DE744: jal         0x801E3EBC
    // 0x801DE748: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    func_801E3EBC_59FDCC(rdram, ctx);
        goto after_1;
    // 0x801DE748: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    after_1:
    // 0x801DE74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801DE750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801DE754: jr          $ra
    // 0x801DE758: nop

    TRACE_RETURN()
    return;
    // 0x801DE758: nop

;}
RECOMP_FUNC void func_801E55D4_5A14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801E55D4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x801E55D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801E55DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801E55E0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x801E55E4: lw          $t6, 0x5C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X5C);
    // 0x801E55E8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x801E55EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x801E55F0: lw          $t7, 0x8C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8C);
    // 0x801E55F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801E55F8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x801E55FC: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x801E5600: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801E5604: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x801E5608: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801E560C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x801E5610: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801E5614: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x801E5618: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    // 0x801E561C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x801E5620: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    // 0x801E5624: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x801E5628: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x801E562C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801E5630: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E5634: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E5638: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E563C: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x801E5640: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x801E5644: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x801E5648: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801E564C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x801E5650: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x801E5654: jal         0x80033898
    // 0x801E5658: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80033898_34498(rdram, ctx);
        goto after_0;
    // 0x801E5658: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_0:
    // 0x801E565C: lw          $t0, 0x5C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5660: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x801E5664: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x801E5668: lw          $t1, 0x8C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8C);
    // 0x801E566C: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x801E5670: addiu       $t7, $sp, 0x28
    ctx->r15 = ADD32(ctx->r29, 0X28);
    // 0x801E5674: swc1        $f16, 0x78($t1)
    MEM_W(0X78, ctx->r9) = ctx->f16.u32l;
    // 0x801E5678: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x801E567C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x801E5680: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    // 0x801E5684: lw          $t3, 0x8C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X8C);
    // 0x801E5688: swc1        $f18, 0x7C($t3)
    MEM_W(0X7C, ctx->r11) = ctx->f18.u32l;
    // 0x801E568C: lw          $t4, 0x5C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5C);
    // 0x801E5690: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801E5694: lw          $t5, 0x8C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8C);
    // 0x801E5698: swc1        $f4, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->f4.u32l;
    // 0x801E569C: lhu         $a2, 0x18($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X18);
    // 0x801E56A0: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
    // 0x801E56A4: lhu         $a0, 0x14($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X14);
    // 0x801E56A8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x801E56AC: jal         0x80033898
    // 0x801E56B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80033898_34498(rdram, ctx);
        goto after_1;
    // 0x801E56B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x801E56B4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x801E56B8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x801E56BC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x801E56C0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x801E56C4: addiu       $a1, $s0, 0x84
    ctx->r5 = ADD32(ctx->r16, 0X84);
    // 0x801E56C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x801E56CC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E56D0: addiu       $a0, $v1, 0x14
    ctx->r4 = ADD32(ctx->r3, 0X14);
    // 0x801E56D4: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
    // 0x801E56D8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x801E56DC: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801E56E0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x801E56E4: swc1        $f4, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f4.u32l;
    // 0x801E56E8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x801E56EC: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801E56F0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x801E56F4: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x801E56F8: lhu         $a3, 0x94($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X94);
    // 0x801E56FC: jal         0x8001DB04
    // 0x801E5700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8001DB04_1E704(rdram, ctx);
        goto after_2;
    // 0x801E5700: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x801E5704: jal         0x801E55A0
    // 0x801E5708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_801E55A0_5A14B0(rdram, ctx);
        goto after_3;
    // 0x801E5708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801E570C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801E5710: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801E5714: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x801E5718: jr          $ra
    // 0x801E571C: nop

    TRACE_RETURN()
    return;
    // 0x801E571C: nop

;}
RECOMP_FUNC void func_801DB180_597090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x801DB180: lbu         $t8, 0x60($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X60);
    // 0x801DB184: lbu         $t6, 0xCC($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XCC);
    // 0x801DB188: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x801DB18C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x801DB190: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x801DB194: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x801DB198: lw          $t0, 0x3F34($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3F34);
    // 0x801DB19C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x801DB1A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x801DB1A4: bne         $a1, $zero, L_801DB1B4
    if (ctx->r5 != 0) {
        // 0x801DB1A8: addu        $v1, $t7, $t0
        ctx->r3 = ADD32(ctx->r15, ctx->r8);
            goto L_801DB1B4;
    }
    // 0x801DB1A8: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x801DB1AC: jr          $ra
    // 0x801DB1B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    TRACE_RETURN()
    return;
    // 0x801DB1B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801DB1B4:
    // 0x801DB1B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x801DB1B8: bnel        $a1, $at, L_801DB1CC
    if (ctx->r5 != ctx->r1) {
        // 0x801DB1BC: lbu         $v0, 0x15($v1)
        ctx->r2 = MEM_BU(ctx->r3, 0X15);
            goto L_801DB1CC;
    }
    goto skip_0;
    // 0x801DB1BC: lbu         $v0, 0x15($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X15);
    skip_0:
    // 0x801DB1C0: jr          $ra
    // 0x801DB1C4: lbu         $v0, 0x14($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X14);
    TRACE_RETURN()
    return;
    // 0x801DB1C4: lbu         $v0, 0x14($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X14);
    // 0x801DB1C8: lbu         $v0, 0x15($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X15);
L_801DB1CC:
    // 0x801DB1CC: jr          $ra
    // 0x801DB1D0: nop

    TRACE_RETURN()
    return;
    // 0x801DB1D0: nop

;}
