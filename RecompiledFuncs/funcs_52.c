#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021DC14_5D90E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DC14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DC18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021DC1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DC20: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021DC24: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021DC28: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8021DC2C: addiu       $t8, $t8, 0x79F0
    ctx->r24 = ADD32(ctx->r24, 0X79F0);
    // 0x8021DC30: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021DC34: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x8021DC38: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x8021DC3C: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x8021DC40: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
    // 0x8021DC44: sw          $t9, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r25;
    // 0x8021DC48: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8021DC4C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DC50: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x8021DC54: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8021DC58: sll         $t1, $a2, 24
    ctx->r9 = S32(ctx->r6 << 24);
    // 0x8021DC5C: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8021DC60: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8021DC64: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8021DC68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021DC6C: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x8021DC70: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8021DC74: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x8021DC78: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x8021DC7C: sw          $t2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r10;
    // 0x8021DC80: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
    // 0x8021DC84: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x8021DC88: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8021DC8C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8021DC90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021DC94: jal         0x80040620
    // 0x8021DC98: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021DC98: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    after_0:
    // 0x8021DC9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DCA0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8021DCA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021DCA8: jr          $ra
    // 0x8021DCAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021DCAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021928C_5D475C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021928C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80219290: lw          $t6, -0x32A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X32A0);
    // 0x80219294: jr          $ra
    // 0x80219298: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80219298: sw          $t6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8020F40C_5CA8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F414: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F418: jal         0x80013AC4
    // 0x8020F41C: addiu       $a0, $a0, -0x2ED4
    ctx->r4 = ADD32(ctx->r4, -0X2ED4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F41C: addiu       $a0, $a0, -0x2ED4
    ctx->r4 = ADD32(ctx->r4, -0X2ED4);
    after_0:
    // 0x8020F420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F428: jr          $ra
    // 0x8020F42C: nop

    TRACE_RETURN()
    return;
    // 0x8020F42C: nop

;}
RECOMP_FUNC void func_80225D10_5E11E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80225D14: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225D18: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80225D1C: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x80225D20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225D24: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x80225D28: lhu         $s2, -0x6660($s2)
    ctx->r18 = MEM_HU(ctx->r18, -0X6660);
    // 0x80225D2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225D30: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225D34: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80225D38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225D3C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x80225D40: jal         0x800141C4
    // 0x80225D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800141C4_14DC4(rdram, ctx);
        goto after_0;
    // 0x80225D44: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80225D48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80225D4C: bnel        $v0, $at, L_80225D68
    if (ctx->r2 != ctx->r1) {
        // 0x80225D50: lw          $a2, 0x44($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X44);
            goto L_80225D68;
    }
    goto skip_0;
    // 0x80225D50: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    skip_0:
    // 0x80225D54: jal         0x80038BC8
    // 0x80225D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80225D58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80225D5C: jal         0x80013B14
    // 0x80225D60: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    func_80013B14_14714(rdram, ctx);
        goto after_2;
    // 0x80225D60: andi        $a0, $s2, 0xFFFF
    ctx->r4 = ctx->r18 & 0XFFFF;
    after_2:
    // 0x80225D64: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
L_80225D68:
    // 0x80225D68: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225D6C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225D70: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x80225D74: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x80225D78: lw          $a0, -0x69D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69D0);
    // 0x80225D7C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80225D80: jal         0x80225E20
    // 0x80225D84: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_80225E20_5E12F0(rdram, ctx);
        goto after_3;
    // 0x80225D84: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_3:
    // 0x80225D88: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80225D8C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225D90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80225D94: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80225D98: lw          $a0, -0x6818($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6818);
    // 0x80225D9C: jal         0x80225E20
    // 0x80225DA0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_80225E20_5E12F0(rdram, ctx);
        goto after_4;
    // 0x80225DA0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_4:
    // 0x80225DA4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80225DA8: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    // 0x80225DAC: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80225DB0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80225DB4: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    // 0x80225DB8: sh          $t9, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r25;
    // 0x80225DBC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80225DC0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80225DC4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80225DC8: nop

    // 0x80225DCC: sh          $t1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r9;
    // 0x80225DD0: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80225DD4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80225DD8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80225DDC: nop

    // 0x80225DE0: sh          $t3, 0xCA($s0)
    MEM_H(0XCA, ctx->r16) = ctx->r11;
    // 0x80225DE4: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80225DE8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80225DEC: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80225DF0: nop

    // 0x80225DF4: sh          $t5, 0xCC($s0)
    MEM_H(0XCC, ctx->r16) = ctx->r13;
    // 0x80225DF8: lhu         $t6, 0x16($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X16);
    // 0x80225DFC: sb          $zero, 0xCF($s0)
    MEM_B(0XCF, ctx->r16) = 0;
    // 0x80225E00: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x80225E04: sb          $t7, 0xCE($s0)
    MEM_B(0XCE, ctx->r16) = ctx->r15;
    // 0x80225E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80225E0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80225E10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80225E14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225E18: jr          $ra
    // 0x80225E1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80225E1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802201F0_5DB6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802201F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802201F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802201F8: jal         0x80220210
    // 0x802201FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80220210_5DB6E0(rdram, ctx);
        goto after_0;
    // 0x802201FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_0:
    // 0x80220200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80220204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80220208: jr          $ra
    // 0x8022020C: nop

    TRACE_RETURN()
    return;
    // 0x8022020C: nop

;}
RECOMP_FUNC void func_8020E0EC_5C95BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E0EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E0F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E0F8: jal         0x80013AC4
    // 0x8020E0FC: addiu       $a0, $a0, -0x3B6C
    ctx->r4 = ADD32(ctx->r4, -0X3B6C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E0FC: addiu       $a0, $a0, -0x3B6C
    ctx->r4 = ADD32(ctx->r4, -0X3B6C);
    after_0:
    // 0x8020E100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E108: jr          $ra
    // 0x8020E10C: nop

    TRACE_RETURN()
    return;
    // 0x8020E10C: nop

;}
RECOMP_FUNC void func_802192A4_5D4774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802192A4: jr          $ra
    // 0x802192A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x802192A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8021072C_5CBBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021072C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210730: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210734: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210738: jal         0x80013AC4
    // 0x8021073C: addiu       $a0, $a0, -0x1D2C
    ctx->r4 = ADD32(ctx->r4, -0X1D2C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021073C: addiu       $a0, $a0, -0x1D2C
    ctx->r4 = ADD32(ctx->r4, -0X1D2C);
    after_0:
    // 0x80210740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210748: jr          $ra
    // 0x8021074C: nop

    TRACE_RETURN()
    return;
    // 0x8021074C: nop

;}
RECOMP_FUNC void func_80224B00_5DFFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80224B00: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80224B04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80224B08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80224B0C: addiu       $t6, $a0, 0xB2
    ctx->r14 = ADD32(ctx->r4, 0XB2);
    // 0x80224B10: addiu       $t7, $a0, 0xB1
    ctx->r15 = ADD32(ctx->r4, 0XB1);
    // 0x80224B14: addiu       $t8, $a0, 0xB0
    ctx->r24 = ADD32(ctx->r4, 0XB0);
    // 0x80224B18: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80224B1C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80224B20: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80224B24: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80224B28: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80224B2C: jal         0x80224560
    // 0x80224B30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80224560_5DFA30(rdram, ctx);
        goto after_0;
    // 0x80224B30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80224B34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80224B38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80224B3C: jr          $ra
    // 0x80224B40: nop

    TRACE_RETURN()
    return;
    // 0x80224B40: nop

;}
RECOMP_FUNC void func_8021102C_5CC4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021102C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211034: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211038: jal         0x80013AC4
    // 0x8021103C: addiu       $a0, $a0, -0x1748
    ctx->r4 = ADD32(ctx->r4, -0X1748);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021103C: addiu       $a0, $a0, -0x1748
    ctx->r4 = ADD32(ctx->r4, -0X1748);
    after_0:
    // 0x80211040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211048: jr          $ra
    // 0x8021104C: nop

    TRACE_RETURN()
    return;
    // 0x8021104C: nop

;}
RECOMP_FUNC void func_8020EAE8_5C9FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EAE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EAF0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EAF4: jal         0x80013AC4
    // 0x8020EAF8: addiu       $a0, $a0, -0x35F8
    ctx->r4 = ADD32(ctx->r4, -0X35F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EAF8: addiu       $a0, $a0, -0x35F8
    ctx->r4 = ADD32(ctx->r4, -0X35F8);
    after_0:
    // 0x8020EAFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EB04: jr          $ra
    // 0x8020EB08: nop

    TRACE_RETURN()
    return;
    // 0x8020EB08: nop

;}
RECOMP_FUNC void func_8020E230_5C9700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E238: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E23C: jal         0x80013AC4
    // 0x8020E240: addiu       $a0, $a0, -0x3AB0
    ctx->r4 = ADD32(ctx->r4, -0X3AB0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E240: addiu       $a0, $a0, -0x3AB0
    ctx->r4 = ADD32(ctx->r4, -0X3AB0);
    after_0:
    // 0x8020E244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E24C: jr          $ra
    // 0x8020E250: nop

    TRACE_RETURN()
    return;
    // 0x8020E250: nop

;}
RECOMP_FUNC void func_802122A0_5CD770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802122A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802122A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802122A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802122AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802122B0: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802122B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802122B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802122BC: jal         0x8021A26C
    // 0x802122C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x802122C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802122C4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802122C8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802122CC: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x802122D0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802122D4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x802122D8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x802122DC: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x802122E0: lw          $t0, 0x64($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X64);
    // 0x802122E4: addiu       $t9, $zero, 0x200
    ctx->r25 = ADD32(0, 0X200);
    // 0x802122E8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802122EC: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x802122F0: addiu       $a0, $a0, 0x2310
    ctx->r4 = ADD32(ctx->r4, 0X2310);
    // 0x802122F4: sw          $t9, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r25;
    // 0x802122F8: jal         0x8003521C
    // 0x802122FC: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802122FC: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    after_1:
    // 0x80212300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80212304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80212308: jr          $ra
    // 0x8021230C: nop

    TRACE_RETURN()
    return;
    // 0x8021230C: nop

;}
RECOMP_FUNC void func_8021F460_5DA930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F468: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F46C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021F470: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8021F474: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021F478: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021F47C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8021F480: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021F484: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021F488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F48C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8021F490: bc1fl       L_8021F4A8
    if (!c1cs) {
        // 0x8021F494: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021F4A8;
    }
    goto skip_0;
    // 0x8021F494: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_0:
    // 0x8021F498: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021F49C: b           L_8021F4A8
    // 0x8021F4A0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F4A8;
    // 0x8021F4A0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F4A4: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8021F4A8:
    // 0x8021F4A8: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F4AC: nop

    // 0x8021F4B0: bc1fl       L_8021F540
    if (!c1cs) {
        // 0x8021F4B4: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F540;
    }
    goto skip_1;
    // 0x8021F4B4: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x8021F4B8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021F4BC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021F4C0: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8021F4C4: nop

    // 0x8021F4C8: bc1fl       L_8021F4E0
    if (!c1cs) {
        // 0x8021F4CC: sub.s       $f2, $f14, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
            goto L_8021F4E0;
    }
    goto skip_2;
    // 0x8021F4CC: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    skip_2:
    // 0x8021F4D0: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8021F4D4: b           L_8021F4E0
    // 0x8021F4D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F4E0;
    // 0x8021F4D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F4DC: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
L_8021F4E0:
    // 0x8021F4E0: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F4E4: nop

    // 0x8021F4E8: bc1fl       L_8021F540
    if (!c1cs) {
        // 0x8021F4EC: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F540;
    }
    goto skip_3;
    // 0x8021F4EC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x8021F4F0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F4F4: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8021F4F8: nop

    // 0x8021F4FC: bc1fl       L_8021F514
    if (!c1cs) {
        // 0x8021F500: sub.s       $f2, $f16, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
            goto L_8021F514;
    }
    goto skip_4;
    // 0x8021F500: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    skip_4:
    // 0x8021F504: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8021F508: b           L_8021F514
    // 0x8021F50C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F514;
    // 0x8021F50C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F510: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
L_8021F514:
    // 0x8021F514: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F518: nop

    // 0x8021F51C: bc1fl       L_8021F540
    if (!c1cs) {
        // 0x8021F520: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F540;
    }
    goto skip_5;
    // 0x8021F520: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_5:
    // 0x8021F524: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021F528: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021F52C: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021F530: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021F534: b           L_8021F568
    // 0x8021F538: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
        goto L_8021F568;
    // 0x8021F538: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x8021F53C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
L_8021F540:
    // 0x8021F540: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8021F544: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8021F548: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8021F54C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021F550: jal         0x8021EE50
    // 0x8021F554: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_8021EE50_5DA320(rdram, ctx);
        goto after_0;
    // 0x8021F554: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8021F558: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021F55C: jal         0x8021F1F8
    // 0x8021F560: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8021F1F8_5DA6C8(rdram, ctx);
        goto after_1;
    // 0x8021F560: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8021F564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021F568:
    // 0x8021F568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F56C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F570: jr          $ra
    // 0x8021F574: nop

    TRACE_RETURN()
    return;
    // 0x8021F574: nop

;}
RECOMP_FUNC void func_802118AC_5CCD7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802118AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802118B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802118B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802118B8: lhu         $v0, 0x8A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8A);
    // 0x802118BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802118C0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x802118C4: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x802118C8: bne         $v0, $zero, L_80211990
    if (ctx->r2 != 0) {
        // 0x802118CC: sh          $t6, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r14;
            goto L_80211990;
    }
    // 0x802118CC: sh          $t6, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r14;
    // 0x802118D0: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x802118D4: sll         $t7, $v0, 15
    ctx->r15 = S32(ctx->r2 << 15);
    // 0x802118D8: bgez        $t7, L_8021190C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802118DC: sll         $t9, $v0, 13
        ctx->r25 = S32(ctx->r2 << 13);
            goto L_8021190C;
    }
    // 0x802118DC: sll         $t9, $v0, 13
    ctx->r25 = S32(ctx->r2 << 13);
    // 0x802118E0: sll         $t8, $v0, 13
    ctx->r24 = S32(ctx->r2 << 13);
    // 0x802118E4: bgez        $t8, L_802118FC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x802118E8: nop
    
            goto L_802118FC;
    }
    // 0x802118E8: nop

    // 0x802118EC: jal         0x80038BC8
    // 0x802118F0: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    func_80038BC8_397C8(rdram, ctx);
        goto after_0;
    // 0x802118F0: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_0:
    // 0x802118F4: b           L_80211944
    // 0x802118F8: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_80211944;
    // 0x802118F8: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_802118FC:
    // 0x802118FC: jal         0x80038BC8
    // 0x80211900: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    func_80038BC8_397C8(rdram, ctx);
        goto after_1;
    // 0x80211900: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_1:
    // 0x80211904: b           L_80211944
    // 0x80211908: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_80211944;
    // 0x80211908: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_8021190C:
    // 0x8021190C: bgez        $t9, L_80211930
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80211910: addiu       $a0, $zero, 0x107
        ctx->r4 = ADD32(0, 0X107);
            goto L_80211930;
    }
    // 0x80211910: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x80211914: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211918: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x8021191C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x80211920: jal         0x8000F420
    // 0x80211924: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_2;
    // 0x80211924: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_2:
    // 0x80211928: b           L_80211944
    // 0x8021192C: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
        goto L_80211944;
    // 0x8021192C: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_80211930:
    // 0x80211930: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80211934: addiu       $a1, $a1, -0x3410
    ctx->r5 = ADD32(ctx->r5, -0X3410);
    // 0x80211938: jal         0x8000F420
    // 0x8021193C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    func_8000F420_10020(rdram, ctx);
        goto after_3;
    // 0x8021193C: lui         $a3, 0x44C8
    ctx->r7 = S32(0X44C8 << 16);
    after_3:
    // 0x80211940: addiu       $t0, $zero, 0x7E
    ctx->r8 = ADD32(0, 0X7E);
L_80211944:
    // 0x80211944: addiu       $t1, $zero, 0x222
    ctx->r9 = ADD32(0, 0X222);
    // 0x80211948: addiu       $t2, $zero, 0xFC
    ctx->r10 = ADD32(0, 0XFC);
    // 0x8021194C: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x80211950: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x80211954: sb          $t2, 0xD0($s0)
    MEM_B(0XD0, ctx->r16) = ctx->r10;
    // 0x80211958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021195C: jal         0x80216DF8
    // 0x80211960: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_4;
    // 0x80211960: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x80211964: jal         0x8021A310
    // 0x80211968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021A310_5D57E0(rdram, ctx);
        goto after_5;
    // 0x80211968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8021196C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80211970: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80211974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80211978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8021197C: jal         0x80224ABC
    // 0x80211980: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80224ABC_5DFF8C(rdram, ctx);
        goto after_6;
    // 0x80211980: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x80211984: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80211988: jal         0x8003521C
    // 0x8021198C: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    func_8003521C_35E1C(rdram, ctx);
        goto after_7;
    // 0x8021198C: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    after_7:
L_80211990:
    // 0x80211990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80211994: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80211998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021199C: jr          $ra
    // 0x802119A0: nop

    TRACE_RETURN()
    return;
    // 0x802119A0: nop

;}
RECOMP_FUNC void func_80222220_5DD6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80222220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80222224: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80222228: lw          $v0, -0x39F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X39F4);
    // 0x8022222C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80222230: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80222234: lwc1        $f10, 0xC4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC4);
    // 0x80222238: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8022223C: lwc1        $f18, 0xC8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x80222240: lwc1        $f6, 0xCC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XCC);
    // 0x80222244: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80222248: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8022224C: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80222250: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80222254: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80222258: lwc1        $f16, 0xC0($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0XC0);
    // 0x8022225C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80222260: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80222264: nop

    // 0x80222268: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8022226C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80222270: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80222274: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80222278: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8022227C: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x80222280: nop

    // 0x80222284: bc1f        L_802222AC
    if (!c1cs) {
        // 0x80222288: nop
    
            goto L_802222AC;
    }
    // 0x80222288: nop

    // 0x8022228C: lw          $a0, 0xBC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XBC);
    // 0x80222290: jal         0x8003521C
    // 0x80222294: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80222294: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80222298: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022229C: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x802222A0: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x802222A4: jalr        $t9
    // 0x802222A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802222A8: nop

    after_1:
L_802222AC:
    // 0x802222AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802222B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802222B4: jr          $ra
    // 0x802222B8: nop

    TRACE_RETURN()
    return;
    // 0x802222B8: nop

;}
RECOMP_FUNC void func_8020E9C8_5C9E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E9C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E9D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E9D4: jal         0x80013AC4
    // 0x8020E9D8: addiu       $a0, $a0, -0x3684
    ctx->r4 = ADD32(ctx->r4, -0X3684);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E9D8: addiu       $a0, $a0, -0x3684
    ctx->r4 = ADD32(ctx->r4, -0X3684);
    after_0:
    // 0x8020E9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E9E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E9E4: jr          $ra
    // 0x8020E9E8: nop

    TRACE_RETURN()
    return;
    // 0x8020E9E8: nop

;}
RECOMP_FUNC void func_802103F0_5CB8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802103F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802103F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802103F8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802103FC: jal         0x80013AC4
    // 0x80210400: addiu       $a0, $a0, -0x2034
    ctx->r4 = ADD32(ctx->r4, -0X2034);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210400: addiu       $a0, $a0, -0x2034
    ctx->r4 = ADD32(ctx->r4, -0X2034);
    after_0:
    // 0x80210404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021040C: jr          $ra
    // 0x80210410: nop

    TRACE_RETURN()
    return;
    // 0x80210410: nop

;}
RECOMP_FUNC void func_80210AF8_5CBFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210B00: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210B04: jal         0x80013AC4
    // 0x80210B08: addiu       $a0, $a0, -0x1A84
    ctx->r4 = ADD32(ctx->r4, -0X1A84);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210B08: addiu       $a0, $a0, -0x1A84
    ctx->r4 = ADD32(ctx->r4, -0X1A84);
    after_0:
    // 0x80210B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210B10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210B14: jr          $ra
    // 0x80210B18: nop

    TRACE_RETURN()
    return;
    // 0x80210B18: nop

;}
RECOMP_FUNC void func_80211050_5CC520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211058: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021105C: jal         0x80013AC4
    // 0x80211060: addiu       $a0, $a0, -0x1720
    ctx->r4 = ADD32(ctx->r4, -0X1720);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211060: addiu       $a0, $a0, -0x1720
    ctx->r4 = ADD32(ctx->r4, -0X1720);
    after_0:
    // 0x80211064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80211068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021106C: jr          $ra
    // 0x80211070: nop

    TRACE_RETURN()
    return;
    // 0x80211070: nop

;}
RECOMP_FUNC void func_8021BFF0_5D74C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021BFF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021BFF4: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021BFF8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8021BFFC: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8021C000: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021C004: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8021C008: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021C00C: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021C010: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021C014: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x8021C018: nop

    // 0x8021C01C: bc1fl       L_8021C05C
    if (!c1cs) {
        // 0x8021C020: c.lt.s      $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
            goto L_8021C05C;
    }
    goto skip_0;
    // 0x8021C020: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    skip_0:
    // 0x8021C024: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C028: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021C02C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8021C030: nop

    // 0x8021C034: bc1fl       L_8021C05C
    if (!c1cs) {
        // 0x8021C038: c.lt.s      $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
            goto L_8021C05C;
    }
    goto skip_1;
    // 0x8021C038: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    skip_1:
    // 0x8021C03C: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C040: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8021C044: nop

    // 0x8021C048: bc1fl       L_8021C05C
    if (!c1cs) {
        // 0x8021C04C: c.lt.s      $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
            goto L_8021C05C;
    }
    goto skip_2;
    // 0x8021C04C: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    skip_2:
    // 0x8021C050: b           L_8021C188
    // 0x8021C054: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021C188;
    // 0x8021C054: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8021C058: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
L_8021C05C:
    // 0x8021C05C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021C060: lwc1        $f2, 0xC($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C064: lwc1        $f12, 0x10($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C068: bc1fl       L_8021C080
    if (!c1cs) {
        // 0x8021C06C: sub.s       $f14, $f20, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f16.fl;
            goto L_8021C080;
    }
    goto skip_3;
    // 0x8021C06C: sub.s       $f14, $f20, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f16.fl;
    skip_3:
    // 0x8021C070: sub.s       $f14, $f20, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x8021C074: b           L_8021C084
    // 0x8021C078: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
        goto L_8021C084;
    // 0x8021C078: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    // 0x8021C07C: sub.s       $f14, $f20, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f20.fl - ctx->f16.fl;
L_8021C080:
    // 0x8021C080: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
L_8021C084:
    // 0x8021C084: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021C088: nop

    // 0x8021C08C: bc1fl       L_8021C100
    if (!c1cs) {
        // 0x8021C090: lw          $v0, 0x84($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X84);
            goto L_8021C100;
    }
    goto skip_4;
    // 0x8021C090: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    skip_4:
    // 0x8021C094: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8021C098: nop

    // 0x8021C09C: bc1fl       L_8021C0B4
    if (!c1cs) {
        // 0x8021C0A0: sub.s       $f0, $f20, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
            goto L_8021C0B4;
    }
    goto skip_5;
    // 0x8021C0A0: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    skip_5:
    // 0x8021C0A4: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x8021C0A8: b           L_8021C0B4
    // 0x8021C0AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C0B4;
    // 0x8021C0AC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C0B0: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
L_8021C0B4:
    // 0x8021C0B4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021C0B8: nop

    // 0x8021C0BC: bc1fl       L_8021C100
    if (!c1cs) {
        // 0x8021C0C0: lw          $v0, 0x84($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X84);
            goto L_8021C100;
    }
    goto skip_6;
    // 0x8021C0C0: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    skip_6:
    // 0x8021C0C4: c.lt.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl < ctx->f12.fl;
    // 0x8021C0C8: nop

    // 0x8021C0CC: bc1fl       L_8021C0E4
    if (!c1cs) {
        // 0x8021C0D0: sub.s       $f0, $f20, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f12.fl;
            goto L_8021C0E4;
    }
    goto skip_7;
    // 0x8021C0D0: sub.s       $f0, $f20, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f12.fl;
    skip_7:
    // 0x8021C0D4: sub.s       $f0, $f20, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f12.fl;
    // 0x8021C0D8: b           L_8021C0E4
    // 0x8021C0DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021C0E4;
    // 0x8021C0DC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021C0E0: sub.s       $f0, $f20, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f12.fl;
L_8021C0E4:
    // 0x8021C0E4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x8021C0E8: nop

    // 0x8021C0EC: bc1fl       L_8021C100
    if (!c1cs) {
        // 0x8021C0F0: lw          $v0, 0x84($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X84);
            goto L_8021C100;
    }
    goto skip_8;
    // 0x8021C0F0: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    skip_8:
    // 0x8021C0F4: b           L_8021C188
    // 0x8021C0F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021C188;
    // 0x8021C0F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021C0FC: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
L_8021C100:
    // 0x8021C100: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021C104: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021C108: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021C10C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8021C110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021C114: sub.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x8021C118: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021C11C: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8021C120: sub.s       $f20, $f6, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x8021C124: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8021C128: nop

    // 0x8021C12C: mul.s       $f8, $f20, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021C130: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021C134: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8021C138: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021C13C: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021C140: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021C144: div.s       $f8, $f14, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8021C148: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8021C14C: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x8021C150: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021C154: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021C158: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021C15C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021C160: div.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021C164: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x8021C168: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
    // 0x8021C16C: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021C170: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021C174: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021C178: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021C17C: div.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021C180: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8021C184: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
L_8021C188:
    // 0x8021C188: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021C18C: jr          $ra
    // 0x8021C190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021C190: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021B480_5D6950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B480: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021B484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B488: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x8021B48C: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8021B490: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8021B494: beql        $t7, $zero, L_8021B4F0
    if (ctx->r15 == 0) {
        // 0x8021B498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021B4F0;
    }
    goto skip_0;
    // 0x8021B498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021B49C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021B4A0: lwc1        $f12, 0x78($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X78);
    // 0x8021B4A4: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x8021B4A8: nop

    // 0x8021B4AC: bc1fl       L_8021B4CC
    if (!c1cs) {
        // 0x8021B4B0: lwc1        $f14, 0x80($a0)
        ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
            goto L_8021B4CC;
    }
    goto skip_1;
    // 0x8021B4B0: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    skip_1:
    // 0x8021B4B4: lwc1        $f4, 0x80($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X80);
    // 0x8021B4B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8021B4BC: nop

    // 0x8021B4C0: bc1tl       L_8021B4F0
    if (c1cs) {
        // 0x8021B4C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021B4F0;
    }
    goto skip_2;
    // 0x8021B4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8021B4C8: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
L_8021B4CC:
    // 0x8021B4CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021B4D0: jal         0x8021ADD0
    // 0x8021B4D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8021ADD0_5D62A0(rdram, ctx);
        goto after_0;
    // 0x8021B4D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8021B4D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021B4DC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8021B4E0: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x8021B4E4: sh          $v0, 0x88($a0)
    MEM_H(0X88, ctx->r4) = ctx->r2;
    // 0x8021B4E8: sh          $t9, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r25;
    // 0x8021B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B4F0:
    // 0x8021B4F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021B4F4: jr          $ra
    // 0x8021B4F8: nop

    TRACE_RETURN()
    return;
    // 0x8021B4F8: nop

;}
RECOMP_FUNC void func_80214B90_5D0060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214B90: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x80214B94: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x80214B98: lui         $t8, 0x801C
    ctx->r24 = S32(0X801C << 16);
    // 0x80214B9C: lw          $t8, 0x7740($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7740);
    // 0x80214BA0: lw          $v0, 0x2C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2C);
    // 0x80214BA4: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x80214BA8: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x80214BAC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80214BB0: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80214BB4: jr          $ra
    // 0x80214BB8: sh          $t9, 0x1A($t7)
    MEM_H(0X1A, ctx->r15) = ctx->r25;
    TRACE_RETURN()
    return;
    // 0x80214BB8: sh          $t9, 0x1A($t7)
    MEM_H(0X1A, ctx->r15) = ctx->r25;
;}
RECOMP_FUNC void func_8020E9A4_5C9E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E9A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E9A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E9AC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E9B0: jal         0x80013AC4
    // 0x8020E9B4: addiu       $a0, $a0, -0x368C
    ctx->r4 = ADD32(ctx->r4, -0X368C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E9B4: addiu       $a0, $a0, -0x368C
    ctx->r4 = ADD32(ctx->r4, -0X368C);
    after_0:
    // 0x8020E9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E9BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E9C0: jr          $ra
    // 0x8020E9C4: nop

    TRACE_RETURN()
    return;
    // 0x8020E9C4: nop

;}
RECOMP_FUNC void func_8020FACC_5CAF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FAD4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FAD8: jal         0x80013AC4
    // 0x8020FADC: addiu       $a0, $a0, -0x2A0C
    ctx->r4 = ADD32(ctx->r4, -0X2A0C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FADC: addiu       $a0, $a0, -0x2A0C
    ctx->r4 = ADD32(ctx->r4, -0X2A0C);
    after_0:
    // 0x8020FAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FAE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FAE8: jr          $ra
    // 0x8020FAEC: nop

    TRACE_RETURN()
    return;
    // 0x8020FAEC: nop

;}
RECOMP_FUNC void func_8021FB44_5DB014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021FB44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021FB48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021FB4C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8021FB50: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8021FB54: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8021FB58: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021FB5C: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x8021FB60: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8021FB64: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8021FB68: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021FB6C: nop

    // 0x8021FB70: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021FB74: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021FB78: mul.s       $f16, $f12, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8021FB7C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x8021FB80: nop

    // 0x8021FB84: bc1f        L_8021FBC8
    if (!c1cs) {
        // 0x8021FB88: nop
    
            goto L_8021FBC8;
    }
    // 0x8021FB88: nop

    // 0x8021FB8C: sub.s       $f0, $f16, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x8021FB90: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8021FB94: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021FB98: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8021FB9C: lwc1        $f10, 0x4($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8021FBA0: jal         0x8001D394
    // 0x8021FBA4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    func_8001D394_1DF94(rdram, ctx);
        goto after_0;
    // 0x8021FBA4: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8021FBA8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8021FBAC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8021FBB0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8021FBB4: lhu         $t6, 0x4($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X4);
    // 0x8021FBB8: lhu         $a2, 0x0($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X0);
    // 0x8021FBBC: lhu         $a3, 0x2($v0)
    ctx->r7 = MEM_HU(ctx->r2, 0X2);
    // 0x8021FBC0: jal         0x8001DB04
    // 0x8021FBC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_8001DB04_1E704(rdram, ctx);
        goto after_1;
    // 0x8021FBC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
L_8021FBC8:
    // 0x8021FBC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021FBCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8021FBD0: jr          $ra
    // 0x8021FBD4: nop

    TRACE_RETURN()
    return;
    // 0x8021FBD4: nop

;}
RECOMP_FUNC void func_8020F748_5CAC18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F750: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F754: jal         0x80013AC4
    // 0x8020F758: addiu       $a0, $a0, -0x2D0C
    ctx->r4 = ADD32(ctx->r4, -0X2D0C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F758: addiu       $a0, $a0, -0x2D0C
    ctx->r4 = ADD32(ctx->r4, -0X2D0C);
    after_0:
    // 0x8020F75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F764: jr          $ra
    // 0x8020F768: nop

    TRACE_RETURN()
    return;
    // 0x8020F768: nop

;}
RECOMP_FUNC void func_80210090_5CB560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210098: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021009C: jal         0x80013AC4
    // 0x802100A0: addiu       $a0, $a0, -0x2394
    ctx->r4 = ADD32(ctx->r4, -0X2394);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802100A0: addiu       $a0, $a0, -0x2394
    ctx->r4 = ADD32(ctx->r4, -0X2394);
    after_0:
    // 0x802100A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802100A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802100AC: jr          $ra
    // 0x802100B0: nop

    TRACE_RETURN()
    return;
    // 0x802100B0: nop

;}
RECOMP_FUNC void func_802192B4_5D4784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802192B4: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x802192B8: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x802192BC: lw          $t8, 0x48($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X48);
    // 0x802192C0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x802192C4: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x802192C8: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x802192CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802192D0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802192D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802192D8: lhu         $t7, -0x4F86($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4F86);
    // 0x802192DC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x802192E0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802192E4: addiu       $t0, $t9, 0x929
    ctx->r8 = ADD32(ctx->r25, 0X929);
    // 0x802192E8: addiu       $at, $zero, 0x11B7
    ctx->r1 = ADD32(0, 0X11B7);
    // 0x802192EC: xor         $t1, $t7, $t0
    ctx->r9 = ctx->r15 ^ ctx->r8;
    // 0x802192F0: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x802192F4: mfhi        $t2
    ctx->r10 = hi;
    // 0x802192F8: sw          $t2, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r10;
    // 0x802192FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80219300: multu       $t2, $a0
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80219304: ldc1        $f8, -0x5A88($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5A88);
    // 0x80219308: mflo        $t4
    ctx->r12 = lo;
    // 0x8021930C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80219310: nop

    // 0x80219314: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80219318: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8021931C: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x80219320: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80219324: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80219328: jr          $ra
    // 0x8021932C: nop

    TRACE_RETURN()
    return;
    // 0x8021932C: nop

;}
RECOMP_FUNC void func_802104EC_5CB9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802104EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802104F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802104F4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802104F8: jal         0x80013AC4
    // 0x802104FC: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802104FC: addiu       $a0, $a0, -0x1F3C
    ctx->r4 = ADD32(ctx->r4, -0X1F3C);
    after_0:
    // 0x80210500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210508: jr          $ra
    // 0x8021050C: nop

    TRACE_RETURN()
    return;
    // 0x8021050C: nop

;}
RECOMP_FUNC void func_8020F430_5CA900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F438: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F43C: jal         0x80013AC4
    // 0x8020F440: addiu       $a0, $a0, -0x2ECC
    ctx->r4 = ADD32(ctx->r4, -0X2ECC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F440: addiu       $a0, $a0, -0x2ECC
    ctx->r4 = ADD32(ctx->r4, -0X2ECC);
    after_0:
    // 0x8020F444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F44C: jr          $ra
    // 0x8020F450: nop

    TRACE_RETURN()
    return;
    // 0x8020F450: nop

;}
RECOMP_FUNC void func_80220168_5DB638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220168: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8022016C: addiu       $v0, $v0, -0x3A38
    ctx->r2 = ADD32(ctx->r2, -0X3A38);
    // 0x80220170: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80220174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80220178: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x8022017C: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x80220180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80220184: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80220188: addu        $t8, $t7, $t0
    ctx->r24 = ADD32(ctx->r15, ctx->r8);
    // 0x8022018C: lw          $v1, 0x3018($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X3018);
    // 0x80220190: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80220194: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80220198: beql        $v1, $zero, L_802201E4
    if (ctx->r3 == 0) {
        // 0x8022019C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802201E4;
    }
    goto skip_0;
    // 0x8022019C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802201A0: lbu         $t9, 0x10($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X10);
    // 0x802201A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802201A8: subu        $a0, $t9, $t6
    ctx->r4 = SUB32(ctx->r25, ctx->r14);
    // 0x802201AC: blez        $a0, L_802201C0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802201B0: lui         $t9, 0x8003
        ctx->r25 = S32(0X8003 << 16);
            goto L_802201C0;
    }
    // 0x802201B0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802201B4: sb          $a0, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r4;
    // 0x802201B8: b           L_802201E0
    // 0x802201BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802201E0;
    // 0x802201BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802201C0:
    // 0x802201C0: sb          $zero, 0x10($v1)
    MEM_B(0X10, ctx->r3) = 0;
    // 0x802201C4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802201C8: addiu       $t9, $t9, 0x6158
    ctx->r25 = ADD32(ctx->r25, 0X6158);
    // 0x802201CC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802201D0: addu        $t2, $t1, $t0
    ctx->r10 = ADD32(ctx->r9, ctx->r8);
    // 0x802201D4: jalr        $t9
    // 0x802201D8: lw          $a1, 0x3018($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X3018);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802201D8: lw          $a1, 0x3018($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X3018);
    after_0:
    // 0x802201DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802201E0:
    // 0x802201E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802201E4:
    // 0x802201E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802201E8: jr          $ra
    // 0x802201EC: nop

    TRACE_RETURN()
    return;
    // 0x802201EC: nop

;}
RECOMP_FUNC void func_8020ED28_5CA1F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020ED28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020ED2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ED30: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ED34: jal         0x80013AC4
    // 0x8020ED38: addiu       $a0, $a0, -0x33CC
    ctx->r4 = ADD32(ctx->r4, -0X33CC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ED38: addiu       $a0, $a0, -0x33CC
    ctx->r4 = ADD32(ctx->r4, -0X33CC);
    after_0:
    // 0x8020ED3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ED40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ED44: jr          $ra
    // 0x8020ED48: nop

    TRACE_RETURN()
    return;
    // 0x8020ED48: nop

;}
RECOMP_FUNC void func_80218350_5D3820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80218354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80218358: lw          $v1, 0x68($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X68);
    // 0x8021835C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80218360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80218364: sll         $t6, $v1, 13
    ctx->r14 = S32(ctx->r3 << 13);
    // 0x80218368: bgez        $t6, L_8021839C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021836C: addiu       $at, $zero, -0x81
        ctx->r1 = ADD32(0, -0X81);
            goto L_8021839C;
    }
    // 0x8021836C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x80218370: lbu         $t8, 0x8D($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X8D);
    // 0x80218374: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x80218378: sw          $t7, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r15;
    // 0x8021837C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80218380: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x80218384: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x80218388: bne         $at, $zero, L_802184B4
    if (ctx->r1 != 0) {
        // 0x8021838C: sb          $t9, 0x8D($a0)
        MEM_B(0X8D, ctx->r4) = ctx->r25;
            goto L_802184B4;
    }
    // 0x8021838C: sb          $t9, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = ctx->r25;
    // 0x80218390: sb          $zero, 0x8D($a0)
    MEM_B(0X8D, ctx->r4) = 0;
    // 0x80218394: b           L_802184B4
    // 0x80218398: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
        goto L_802184B4;
    // 0x80218398: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_8021839C:
    // 0x8021839C: lw          $v0, 0x60($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X60);
    // 0x802183A0: andi        $t1, $v1, 0x80
    ctx->r9 = ctx->r3 & 0X80;
    // 0x802183A4: sll         $t0, $v0, 10
    ctx->r8 = S32(ctx->r2 << 10);
    // 0x802183A8: bgez        $t0, L_802183B8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x802183AC: nop
    
            goto L_802183B8;
    }
    // 0x802183AC: nop

    // 0x802183B0: bnel        $t1, $zero, L_802183C4
    if (ctx->r9 != 0) {
        // 0x802183B4: lw          $a0, 0x38($a2)
        ctx->r4 = MEM_W(ctx->r6, 0X38);
            goto L_802183C4;
    }
    goto skip_0;
    // 0x802183B4: lw          $a0, 0x38($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X38);
    skip_0:
L_802183B8:
    // 0x802183B8: b           L_80218538
    // 0x802183BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x802183BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802183C0: lw          $a0, 0x38($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X38);
L_802183C4:
    // 0x802183C4: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x802183C8: and         $t2, $v1, $at
    ctx->r10 = ctx->r3 & ctx->r1;
    // 0x802183CC: bne         $a0, $zero, L_802183DC
    if (ctx->r4 != 0) {
        // 0x802183D0: sll         $t3, $v0, 9
        ctx->r11 = S32(ctx->r2 << 9);
            goto L_802183DC;
    }
    // 0x802183D0: sll         $t3, $v0, 9
    ctx->r11 = S32(ctx->r2 << 9);
    // 0x802183D4: b           L_80218538
    // 0x802183D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x802183D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802183DC:
    // 0x802183DC: bgez        $t3, L_802183F4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x802183E0: sw          $t2, 0x68($a2)
        MEM_W(0X68, ctx->r6) = ctx->r10;
            goto L_802183F4;
    }
    // 0x802183E0: sw          $t2, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r10;
    // 0x802183E4: ori         $t5, $t2, 0x1
    ctx->r13 = ctx->r10 | 0X1;
    // 0x802183E8: sw          $t5, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r13;
    // 0x802183EC: b           L_80218538
    // 0x802183F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x802183F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802183F4:
    // 0x802183F4: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x802183F8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x802183FC: beql        $t7, $zero, L_80218410
    if (ctx->r15 == 0) {
        // 0x80218400: lbu         $v0, 0x4C($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X4C);
            goto L_80218410;
    }
    goto skip_1;
    // 0x80218400: lbu         $v0, 0x4C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4C);
    skip_1:
    // 0x80218404: b           L_80218538
    // 0x80218408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x80218408: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021840C: lbu         $v0, 0x4C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4C);
L_80218410:
    // 0x80218410: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x80218414: beq         $v0, $at, L_80218494
    if (ctx->r2 == ctx->r1) {
        // 0x80218418: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_80218494;
    }
    // 0x80218418: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x8021841C: beq         $v0, $at, L_80218494
    if (ctx->r2 == ctx->r1) {
        // 0x80218420: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_80218494;
    }
    // 0x80218420: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80218424: bnel        $v0, $at, L_80218438
    if (ctx->r2 != ctx->r1) {
        // 0x80218428: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_80218438;
    }
    goto skip_2;
    // 0x80218428: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    skip_2:
    // 0x8021842C: b           L_80218494
    // 0x80218430: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80218494;
    // 0x80218430: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80218434: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
L_80218438:
    // 0x80218438: bnel        $v0, $at, L_8021844C
    if (ctx->r2 != ctx->r1) {
        // 0x8021843C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_8021844C;
    }
    goto skip_3;
    // 0x8021843C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    skip_3:
    // 0x80218440: b           L_80218494
    // 0x80218444: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80218494;
    // 0x80218444: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80218448: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_8021844C:
    // 0x8021844C: bnel        $v0, $at, L_80218460
    if (ctx->r2 != ctx->r1) {
        // 0x80218450: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_80218460;
    }
    goto skip_4;
    // 0x80218450: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    skip_4:
    // 0x80218454: b           L_80218494
    // 0x80218458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80218494;
    // 0x80218458: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8021845C: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_80218460:
    // 0x80218460: bnel        $v0, $at, L_80218474
    if (ctx->r2 != ctx->r1) {
        // 0x80218464: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_80218474;
    }
    goto skip_5;
    // 0x80218464: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    skip_5:
    // 0x80218468: b           L_80218494
    // 0x8021846C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_80218494;
    // 0x8021846C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218470: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
L_80218474:
    // 0x80218474: bnel        $v0, $at, L_80218488
    if (ctx->r2 != ctx->r1) {
        // 0x80218478: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_80218488;
    }
    goto skip_6;
    // 0x80218478: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    skip_6:
    // 0x8021847C: b           L_80218494
    // 0x80218480: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_80218494;
    // 0x80218480: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80218484: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_80218488:
    // 0x80218488: bnel        $v0, $at, L_80218498
    if (ctx->r2 != ctx->r1) {
        // 0x8021848C: lbu         $t8, 0x8D($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X8D);
            goto L_80218498;
    }
    goto skip_7;
    // 0x8021848C: lbu         $t8, 0x8D($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X8D);
    skip_7:
    // 0x80218490: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_80218494:
    // 0x80218494: lbu         $t8, 0x8D($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X8D);
L_80218498:
    // 0x80218498: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x8021849C: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x802184A0: slti        $at, $v0, 0xF1
    ctx->r1 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x802184A4: bne         $at, $zero, L_802184B4
    if (ctx->r1 != 0) {
        // 0x802184A8: sb          $t9, 0x8D($a2)
        MEM_B(0X8D, ctx->r6) = ctx->r25;
            goto L_802184B4;
    }
    // 0x802184A8: sb          $t9, 0x8D($a2)
    MEM_B(0X8D, ctx->r6) = ctx->r25;
    // 0x802184AC: sb          $zero, 0x8D($a2)
    MEM_B(0X8D, ctx->r6) = 0;
    // 0x802184B0: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_802184B4:
    // 0x802184B4: beq         $v0, $zero, L_8021850C
    if (ctx->r2 == 0) {
        // 0x802184B8: nop
    
            goto L_8021850C;
    }
    // 0x802184B8: nop

    // 0x802184BC: lw          $t0, 0x68($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X68);
    // 0x802184C0: lw          $a0, 0x90($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X90);
    // 0x802184C4: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x802184C8: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x802184CC: beq         $a0, $zero, L_80218500
    if (ctx->r4 == 0) {
        // 0x802184D0: sw          $t1, 0x68($a2)
        MEM_W(0X68, ctx->r6) = ctx->r9;
            goto L_80218500;
    }
    // 0x802184D0: sw          $t1, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r9;
    // 0x802184D4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802184D8: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x802184DC: jalr        $t9
    // 0x802184E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802184E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802184E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802184E8: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x802184EC: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x802184F0: jalr        $t9
    // 0x802184F4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802184F4: nop

    after_1:
    // 0x802184F8: b           L_80218538
    // 0x802184FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x802184FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218500:
    // 0x80218500: sb          $t2, 0x8C($a2)
    MEM_B(0X8C, ctx->r6) = ctx->r10;
    // 0x80218504: b           L_80218538
    // 0x80218508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80218538;
    // 0x80218508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021850C:
    // 0x8021850C: bne         $v0, $zero, L_80218534
    if (ctx->r2 != 0) {
        // 0x80218510: lui         $v0, 0x8016
        ctx->r2 = S32(0X8016 << 16);
            goto L_80218534;
    }
    // 0x80218510: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80218514: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80218518: lbu         $t3, 0x138($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X138);
    // 0x8021851C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80218520: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80218524: jal         0x80218548
    // 0x80218528: sb          $t4, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r12;
    func_80218548_5D3A18(rdram, ctx);
        goto after_2;
    // 0x80218528: sb          $t4, 0x138($v0)
    MEM_B(0X138, ctx->r2) = ctx->r12;
    after_2:
    // 0x8021852C: b           L_8021853C
    // 0x80218530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021853C;
    // 0x80218530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80218534:
    // 0x80218534: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218538:
    // 0x80218538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021853C:
    // 0x8021853C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80218540: jr          $ra
    // 0x80218544: nop

    TRACE_RETURN()
    return;
    // 0x80218544: nop

;}
RECOMP_FUNC void func_8020EE00_5CA2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EE08: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EE0C: jal         0x80013AC4
    // 0x8020EE10: addiu       $a0, $a0, -0x32D0
    ctx->r4 = ADD32(ctx->r4, -0X32D0);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EE10: addiu       $a0, $a0, -0x32D0
    ctx->r4 = ADD32(ctx->r4, -0X32D0);
    after_0:
    // 0x8020EE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EE1C: jr          $ra
    // 0x8020EE20: nop

    TRACE_RETURN()
    return;
    // 0x8020EE20: nop

;}
RECOMP_FUNC void func_80214FB0_5D0480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80214FB4: jr          $ra
    // 0x80214FB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80214FB8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80210F9C_5CC46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210FA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210FA8: jal         0x80013AC4
    // 0x80210FAC: addiu       $a0, $a0, -0x17A4
    ctx->r4 = ADD32(ctx->r4, -0X17A4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210FAC: addiu       $a0, $a0, -0x17A4
    ctx->r4 = ADD32(ctx->r4, -0X17A4);
    after_0:
    // 0x80210FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210FB8: jr          $ra
    // 0x80210FBC: nop

    TRACE_RETURN()
    return;
    // 0x80210FBC: nop

;}
RECOMP_FUNC void func_80215044_5D0514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215044: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215048: jr          $ra
    // 0x8021504C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021504C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8021B04C_5D651C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021B04C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021B050: nop

    // 0x8021B054: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021B058: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021B05C: jr          $ra
    // 0x8021B060: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8021B060: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_8020E764_5C9C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E76C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E770: jal         0x80013AC4
    // 0x8020E774: addiu       $a0, $a0, -0x37BC
    ctx->r4 = ADD32(ctx->r4, -0X37BC);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E774: addiu       $a0, $a0, -0x37BC
    ctx->r4 = ADD32(ctx->r4, -0X37BC);
    after_0:
    // 0x8020E778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E77C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E780: jr          $ra
    // 0x8020E784: nop

    TRACE_RETURN()
    return;
    // 0x8020E784: nop

;}
RECOMP_FUNC void func_80213A9C_5CEF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213A9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80213AA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80213AA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80213AA8: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
    // 0x80213AAC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80213AB0: addiu       $t6, $zero, 0xFA
    ctx->r14 = ADD32(0, 0XFA);
    // 0x80213AB4: bne         $v0, $at, L_80213AC4
    if (ctx->r2 != ctx->r1) {
        // 0x80213AB8: addiu       $a1, $zero, 0x8C
        ctx->r5 = ADD32(0, 0X8C);
            goto L_80213AC4;
    }
    // 0x80213AB8: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80213ABC: sb          $t6, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = ctx->r14;
    // 0x80213AC0: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
L_80213AC4:
    // 0x80213AC4: bne         $v0, $zero, L_80213AD4
    if (ctx->r2 != 0) {
        // 0x80213AC8: addiu       $t7, $zero, 0x5
        ctx->r15 = ADD32(0, 0X5);
            goto L_80213AD4;
    }
    // 0x80213AC8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x80213ACC: sb          $t7, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = ctx->r15;
    // 0x80213AD0: lbu         $v0, 0xD4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD4);
L_80213AD4:
    // 0x80213AD4: lbu         $t8, 0xD5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XD5);
    // 0x80213AD8: addiu       $t0, $zero, 0x50
    ctx->r8 = ADD32(0, 0X50);
    // 0x80213ADC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x80213AE0: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80213AE4: sb          $t9, 0xD4($a0)
    MEM_B(0XD4, ctx->r4) = ctx->r25;
    // 0x80213AE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80213AEC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80213AF0: jal         0x8021A26C
    // 0x80213AF4: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80213AF4: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    after_0:
    // 0x80213AF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80213AFC: lbu         $t1, 0xD0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XD0);
    // 0x80213B00: beql        $t1, $zero, L_80213B14
    if (ctx->r9 == 0) {
        // 0x80213B04: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80213B14;
    }
    goto skip_0;
    // 0x80213B04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80213B08: jal         0x80034ED4
    // 0x80213B0C: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x80213B0C: nop

    after_1:
    // 0x80213B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80213B14:
    // 0x80213B14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80213B18: jr          $ra
    // 0x80213B1C: nop

    TRACE_RETURN()
    return;
    // 0x80213B1C: nop

;}
RECOMP_FUNC void func_80210BD0_5CC0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210BD8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210BDC: jal         0x80013AC4
    // 0x80210BE0: addiu       $a0, $a0, -0x1A04
    ctx->r4 = ADD32(ctx->r4, -0X1A04);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210BE0: addiu       $a0, $a0, -0x1A04
    ctx->r4 = ADD32(ctx->r4, -0X1A04);
    after_0:
    // 0x80210BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210BEC: jr          $ra
    // 0x80210BF0: nop

    TRACE_RETURN()
    return;
    // 0x80210BF0: nop

;}
RECOMP_FUNC void func_802100FC_5CB5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802100FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210104: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210108: jal         0x80013AC4
    // 0x8021010C: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8021010C: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    after_0:
    // 0x80210110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210118: jr          $ra
    // 0x8021011C: nop

    TRACE_RETURN()
    return;
    // 0x8021011C: nop

;}
RECOMP_FUNC void func_80221C0C_5DD0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221C14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80221C18: jal         0x8021664C
    // 0x80221C1C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8021664C_5D1B1C(rdram, ctx);
        goto after_0;
    // 0x80221C1C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80221C20: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80221C24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80221C28: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80221C2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80221C30: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80221C34: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80221C38: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80221C3C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80221C40: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80221C44: nop

    // 0x80221C48: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80221C4C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80221C50: nop

    // 0x80221C54: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80221C58: beql        $t7, $zero, L_80221CA8
    if (ctx->r15 == 0) {
        // 0x80221C5C: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_80221CA8;
    }
    goto skip_0;
    // 0x80221C5C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x80221C60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80221C64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80221C68: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80221C6C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80221C70: nop

    // 0x80221C74: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80221C78: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80221C7C: nop

    // 0x80221C80: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80221C84: bne         $t7, $zero, L_80221C9C
    if (ctx->r15 != 0) {
        // 0x80221C88: nop
    
            goto L_80221C9C;
    }
    // 0x80221C88: nop

    // 0x80221C8C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80221C90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80221C94: b           L_80221CB4
    // 0x80221C98: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80221CB4;
    // 0x80221C98: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80221C9C:
    // 0x80221C9C: b           L_80221CB4
    // 0x80221CA0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80221CB4;
    // 0x80221CA0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80221CA4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_80221CA8:
    // 0x80221CA8: nop

    // 0x80221CAC: bltz        $t7, L_80221C9C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80221CB0: nop
    
            goto L_80221C9C;
    }
    // 0x80221CB0: nop

L_80221CB4:
    // 0x80221CB4: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x80221CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80221CBC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80221CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80221CC4: jr          $ra
    // 0x80221CC8: nop

    TRACE_RETURN()
    return;
    // 0x80221CC8: nop

;}
RECOMP_FUNC void func_80213424_5CE8F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021342C: lhu         $t6, 0x16($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X16);
    // 0x80213430: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80213434: addiu       $t7, $t6, -0x60
    ctx->r15 = ADD32(ctx->r14, -0X60);
    // 0x80213438: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x8021343C: sh          $t8, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r24;
    // 0x80213440: lwc1        $f6, 0x7C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80213444: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80213448: nop

    // 0x8021344C: bc1fl       L_802134CC
    if (!c1cs) {
        // 0x80213450: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_802134CC;
    }
    goto skip_0;
    // 0x80213450: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_0:
    // 0x80213454: lw          $t9, 0x68($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X68);
    // 0x80213458: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8021345C: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x80213460: beql        $t0, $zero, L_802134CC
    if (ctx->r8 == 0) {
        // 0x80213464: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_802134CC;
    }
    goto skip_1;
    // 0x80213464: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_1:
    // 0x80213468: lwc1        $f8, 0xD8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0XD8);
    // 0x8021346C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80213470: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80213474: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80213478: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021347C: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80213480: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80213484: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x80213488: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    // 0x8021348C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x80213490: lwc1        $f4, 0x7C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x80213494: swc1        $f0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->f0.u32l;
    // 0x80213498: ldc1        $f8, -0x60C0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X60C0);
    // 0x8021349C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802134A0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x802134A4: nop

    // 0x802134A8: bc1fl       L_802134CC
    if (!c1cs) {
        // 0x802134AC: lhu         $t1, 0x8A($a0)
        ctx->r9 = MEM_HU(ctx->r4, 0X8A);
            goto L_802134CC;
    }
    goto skip_2;
    // 0x802134AC: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
    skip_2:
    // 0x802134B0: jal         0x802171A8
    // 0x802134B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x802134B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802134B8: jal         0x80034ED4
    // 0x802134BC: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_1;
    // 0x802134BC: nop

    after_1:
    // 0x802134C0: b           L_802134F8
    // 0x802134C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802134F8;
    // 0x802134C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802134C8: lhu         $t1, 0x8A($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X8A);
L_802134CC:
    // 0x802134CC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802134D0: addiu       $a1, $a1, 0x12EC
    ctx->r5 = ADD32(ctx->r5, 0X12EC);
    // 0x802134D4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x802134D8: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x802134DC: bne         $t3, $zero, L_802134F4
    if (ctx->r11 != 0) {
        // 0x802134E0: sh          $t2, 0x8A($a0)
        MEM_H(0X8A, ctx->r4) = ctx->r10;
            goto L_802134F4;
    }
    // 0x802134E0: sh          $t2, 0x8A($a0)
    MEM_H(0X8A, ctx->r4) = ctx->r10;
    // 0x802134E4: jal         0x802171A8
    // 0x802134E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_2;
    // 0x802134E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802134EC: jal         0x80034ED4
    // 0x802134F0: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x802134F0: nop

    after_3:
L_802134F4:
    // 0x802134F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802134F8:
    // 0x802134F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802134FC: jr          $ra
    // 0x80213500: nop

    TRACE_RETURN()
    return;
    // 0x80213500: nop

;}
RECOMP_FUNC void func_80218548_5D3A18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80218548: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021854C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80218550: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80218554: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80218558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021855C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80218560: lw          $t7, 0x68($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X68);
    // 0x80218564: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80218568: sll         $t0, $t8, 13
    ctx->r8 = S32(ctx->r24 << 13);
    // 0x8021856C: bgez        $t0, L_802185DC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80218570: sw          $t8, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r24;
            goto L_802185DC;
    }
    // 0x80218570: sw          $t8, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r24;
    // 0x80218574: lw          $t1, 0x64($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X64);
    // 0x80218578: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x8021857C: bnel        $t2, $zero, L_802187E4
    if (ctx->r10 != 0) {
        // 0x80218580: lw          $t4, 0x68($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X68);
            goto L_802187E4;
    }
    goto skip_0;
    // 0x80218580: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    skip_0:
    // 0x80218584: jal         0x802192B4
    // 0x80218588: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_802192B4_5D4784(rdram, ctx);
        goto after_0;
    // 0x80218588: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_0:
    // 0x8021858C: slti        $at, $v0, 0x2BD
    ctx->r1 = SIGNED(ctx->r2) < 0X2BD ? 1 : 0;
    // 0x80218590: bne         $at, $zero, L_802185B0
    if (ctx->r1 != 0) {
        // 0x80218594: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802185B0;
    }
    // 0x80218594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218598: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021859C: addiu       $a1, $a1, 0x4314
    ctx->r5 = ADD32(ctx->r5, 0X4314);
    // 0x802185A0: jal         0x802171A8
    // 0x802185A4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802171A8_5D2678(rdram, ctx);
        goto after_1;
    // 0x802185A4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x802185A8: b           L_802187E4
    // 0x802185AC: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
        goto L_802187E4;
    // 0x802185AC: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
L_802185B0:
    // 0x802185B0: jal         0x802192B4
    // 0x802185B4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_802192B4_5D4784(rdram, ctx);
        goto after_2;
    // 0x802185B4: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_2:
    // 0x802185B8: slti        $at, $v0, 0x321
    ctx->r1 = SIGNED(ctx->r2) < 0X321 ? 1 : 0;
    // 0x802185BC: bne         $at, $zero, L_802187E0
    if (ctx->r1 != 0) {
        // 0x802185C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802187E0;
    }
    // 0x802185C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802185C4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802185C8: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x802185CC: jal         0x802171A8
    // 0x802185D0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802171A8_5D2678(rdram, ctx);
        goto after_3;
    // 0x802185D0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_3:
    // 0x802185D4: b           L_802187E4
    // 0x802185D8: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
        goto L_802187E4;
    // 0x802185D8: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
L_802185DC:
    // 0x802185DC: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x802185E0: bnel        $a1, $zero, L_802185F4
    if (ctx->r5 != 0) {
        // 0x802185E4: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_802185F4;
    }
    goto skip_1;
    // 0x802185E4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    skip_1:
    // 0x802185E8: b           L_802187F0
    // 0x802185EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802187F0;
    // 0x802185EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_802185F4:
    // 0x802185F4: lw          $t3, 0x64($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X64);
    // 0x802185F8: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x802185FC: bnel        $t4, $zero, L_8021869C
    if (ctx->r12 != 0) {
        // 0x80218600: lw          $v1, 0x60($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X60);
            goto L_8021869C;
    }
    goto skip_2;
    // 0x80218600: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    skip_2:
    // 0x80218604: lbu         $t5, 0x4C($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X4C);
    // 0x80218608: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8021860C: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x80218610: bne         $t5, $at, L_80218648
    if (ctx->r13 != ctx->r1) {
        // 0x80218614: nop
    
            goto L_80218648;
    }
    // 0x80218614: nop

    // 0x80218618: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    // 0x8021861C: jal         0x802192B4
    // 0x80218620: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_802192B4_5D4784(rdram, ctx);
        goto after_4;
    // 0x80218620: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_4:
    // 0x80218624: slti        $at, $v0, 0x1F4
    ctx->r1 = SIGNED(ctx->r2) < 0X1F4 ? 1 : 0;
    // 0x80218628: beq         $at, $zero, L_80218698
    if (ctx->r1 == 0) {
        // 0x8021862C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80218698;
    }
    // 0x8021862C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218630: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218634: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x80218638: jal         0x802171A8
    // 0x8021863C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802171A8_5D2678(rdram, ctx);
        goto after_5;
    // 0x8021863C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_5:
    // 0x80218640: b           L_8021869C
    // 0x80218644: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
        goto L_8021869C;
    // 0x80218644: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
L_80218648:
    // 0x80218648: jal         0x802192B4
    // 0x8021864C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_802192B4_5D4784(rdram, ctx);
        goto after_6;
    // 0x8021864C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_6:
    // 0x80218650: slti        $at, $v0, 0x2BD
    ctx->r1 = SIGNED(ctx->r2) < 0X2BD ? 1 : 0;
    // 0x80218654: bne         $at, $zero, L_80218674
    if (ctx->r1 != 0) {
        // 0x80218658: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80218674;
    }
    // 0x80218658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021865C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218660: addiu       $a1, $a1, 0x4314
    ctx->r5 = ADD32(ctx->r5, 0X4314);
    // 0x80218664: jal         0x802171A8
    // 0x80218668: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802171A8_5D2678(rdram, ctx);
        goto after_7;
    // 0x80218668: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_7:
    // 0x8021866C: b           L_8021869C
    // 0x80218670: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
        goto L_8021869C;
    // 0x80218670: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
L_80218674:
    // 0x80218674: jal         0x802192B4
    // 0x80218678: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    func_802192B4_5D4784(rdram, ctx);
        goto after_8;
    // 0x80218678: addiu       $a0, $zero, 0x3E8
    ctx->r4 = ADD32(0, 0X3E8);
    after_8:
    // 0x8021867C: slti        $at, $v0, 0x321
    ctx->r1 = SIGNED(ctx->r2) < 0X321 ? 1 : 0;
    // 0x80218680: bne         $at, $zero, L_80218698
    if (ctx->r1 != 0) {
        // 0x80218684: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80218698;
    }
    // 0x80218684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80218688: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021868C: addiu       $a1, $a1, 0x41AC
    ctx->r5 = ADD32(ctx->r5, 0X41AC);
    // 0x80218690: jal         0x802171A8
    // 0x80218694: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_802171A8_5D2678(rdram, ctx);
        goto after_9;
    // 0x80218694: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_9:
L_80218698:
    // 0x80218698: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
L_8021869C:
    // 0x8021869C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x802186A0: sll         $t6, $v1, 13
    ctx->r14 = S32(ctx->r3 << 13);
    // 0x802186A4: bgez        $t6, L_80218768
    if (SIGNED(ctx->r14) >= 0) {
        // 0x802186A8: sll         $t2, $v1, 14
        ctx->r10 = S32(ctx->r3 << 14);
            goto L_80218768;
    }
    // 0x802186A8: sll         $t2, $v1, 14
    ctx->r10 = S32(ctx->r3 << 14);
    // 0x802186AC: lbu         $v0, 0x4C($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4C);
    // 0x802186B0: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x802186B4: beq         $v0, $at, L_802186D4
    if (ctx->r2 == ctx->r1) {
        // 0x802186B8: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_802186D4;
    }
    // 0x802186B8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x802186BC: beq         $v0, $at, L_802186D4
    if (ctx->r2 == ctx->r1) {
        // 0x802186C0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_802186D4;
    }
    // 0x802186C0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x802186C4: beq         $v0, $at, L_802186D4
    if (ctx->r2 == ctx->r1) {
        // 0x802186C8: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_802186D4;
    }
    // 0x802186C8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x802186CC: bne         $v0, $at, L_80218768
    if (ctx->r2 != ctx->r1) {
        // 0x802186D0: nop
    
            goto L_80218768;
    }
    // 0x802186D0: nop

L_802186D4:
    // 0x802186D4: jal         0x80038B98
    // 0x802186D8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    func_80038B98_39798(rdram, ctx);
        goto after_10;
    // 0x802186D8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    after_10:
    // 0x802186DC: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802186E0: addiu       $a1, $a1, 0x30C8
    ctx->r5 = ADD32(ctx->r5, 0X30C8);
    // 0x802186E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802186E8: jal         0x802171A8
    // 0x802186EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_11;
    // 0x802186EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x802186F0: beq         $v0, $zero, L_80218720
    if (ctx->r2 == 0) {
        // 0x802186F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80218720;
    }
    // 0x802186F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802186F8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x802186FC: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x80218700: lwc1        $f4, 0x1C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X1C);
    // 0x80218704: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
    // 0x80218708: lwc1        $f6, 0x20($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X20);
    // 0x8021870C: swc1        $f6, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f6.u32l;
    // 0x80218710: lwc1        $f8, 0x24($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80218714: swc1        $f8, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f8.u32l;
    // 0x80218718: lbu         $t7, 0x8E($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8E);
    // 0x8021871C: sb          $t7, 0x8E($v0)
    MEM_B(0X8E, ctx->r2) = ctx->r15;
L_80218720:
    // 0x80218720: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80218724: addiu       $a1, $a1, 0x332C
    ctx->r5 = ADD32(ctx->r5, 0X332C);
    // 0x80218728: jal         0x802171A8
    // 0x8021872C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_12;
    // 0x8021872C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80218730: beq         $v0, $zero, L_802187E0
    if (ctx->r2 == 0) {
        // 0x80218734: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_802187E0;
    }
    // 0x80218734: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80218738: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8021873C: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80218740: swc1        $f10, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f10.u32l;
    // 0x80218744: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80218748: lwc1        $f16, 0x20($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X20);
    // 0x8021874C: swc1        $f16, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->f16.u32l;
    // 0x80218750: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80218754: lwc1        $f18, 0x24($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80218758: swc1        $f18, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->f18.u32l;
    // 0x8021875C: lbu         $t1, 0x8F($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X8F);
    // 0x80218760: b           L_802187E0
    // 0x80218764: sb          $t1, 0x8F($v0)
    MEM_B(0X8F, ctx->r2) = ctx->r9;
        goto L_802187E0;
    // 0x80218764: sb          $t1, 0x8F($v0)
    MEM_B(0X8F, ctx->r2) = ctx->r9;
L_80218768:
    // 0x80218768: bgez        $t2, L_80218794
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8021876C: nop
    
            goto L_80218794;
    }
    // 0x8021876C: nop

    // 0x80218770: lbu         $t3, 0x4C($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4C);
    // 0x80218774: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80218778: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8021877C: bne         $t3, $at, L_80218794
    if (ctx->r11 != ctx->r1) {
        // 0x80218780: nop
    
            goto L_80218794;
    }
    // 0x80218780: nop

    // 0x80218784: jal         0x8003521C
    // 0x80218788: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, 0X3504);
    func_8003521C_35E1C(rdram, ctx);
        goto after_13;
    // 0x80218788: addiu       $a0, $a0, 0x3504
    ctx->r4 = ADD32(ctx->r4, 0X3504);
    after_13:
    // 0x8021878C: b           L_802187F0
    // 0x80218790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802187F0;
    // 0x80218790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80218794:
    // 0x80218794: jal         0x80217F1C
    // 0x80218798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80217F1C_5D33EC(rdram, ctx);
        goto after_14;
    // 0x80218798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8021879C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x802187A0: bnel        $v0, $at, L_802187E4
    if (ctx->r2 != ctx->r1) {
        // 0x802187A4: lw          $t4, 0x68($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X68);
            goto L_802187E4;
    }
    goto skip_3;
    // 0x802187A4: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
    skip_3:
    // 0x802187A8: lw          $a0, 0x90($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X90);
    // 0x802187AC: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802187B0: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x802187B4: beq         $a0, $zero, L_802187D8
    if (ctx->r4 == 0) {
        // 0x802187B8: nop
    
            goto L_802187D8;
    }
    // 0x802187B8: nop

    // 0x802187BC: jalr        $t9
    // 0x802187C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x802187C0: nop

    after_15:
    // 0x802187C4: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x802187C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802187CC: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x802187D0: jalr        $t9
    // 0x802187D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x802187D4: nop

    after_16:
L_802187D8:
    // 0x802187D8: b           L_802187F0
    // 0x802187DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802187F0;
    // 0x802187DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802187E0:
    // 0x802187E0: lw          $t4, 0x68($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X68);
L_802187E4:
    // 0x802187E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802187E8: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x802187EC: sw          $t5, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r13;
L_802187F0:
    // 0x802187F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802187F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802187F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802187FC: jr          $ra
    // 0x80218800: nop

    TRACE_RETURN()
    return;
    // 0x80218800: nop

;}
RECOMP_FUNC void func_8020E83C_5C9D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E844: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E848: jal         0x80013AC4
    // 0x8020E84C: addiu       $a0, $a0, -0x3714
    ctx->r4 = ADD32(ctx->r4, -0X3714);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E84C: addiu       $a0, $a0, -0x3714
    ctx->r4 = ADD32(ctx->r4, -0X3714);
    after_0:
    // 0x8020E850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E858: jr          $ra
    // 0x8020E85C: nop

    TRACE_RETURN()
    return;
    // 0x8020E85C: nop

;}
RECOMP_FUNC void func_80221724_5DCBF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221728: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022172C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80221730: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80221734: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80221738: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022173C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80221740: jal         0x8003D310
    // 0x80221744: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8003D310_3DF10(rdram, ctx);
        goto after_0;
    // 0x80221744: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80221748: bne         $v0, $zero, L_80221758
    if (ctx->r2 != 0) {
        // 0x8022174C: lw          $a3, 0x18($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X18);
            goto L_80221758;
    }
    // 0x8022174C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80221750: b           L_802217AC
    // 0x80221754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802217AC;
    // 0x80221754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80221758:
    // 0x80221758: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8022175C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80221760: addiu       $v1, $v1, -0x33D0
    ctx->r3 = ADD32(ctx->r3, -0X33D0);
    // 0x80221764: lw          $t8, 0x2C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X2C);
    // 0x80221768: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8022176C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80221770: sw          $t8, 0x150($v1)
    MEM_W(0X150, ctx->r3) = ctx->r24;
    // 0x80221774: lhu         $t9, 0x7E($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X7E);
    // 0x80221778: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022177C: addiu       $a0, $a0, 0x17BC
    ctx->r4 = ADD32(ctx->r4, 0X17BC);
    // 0x80221780: sh          $t9, 0x154($v1)
    MEM_H(0X154, ctx->r3) = ctx->r25;
    // 0x80221784: lbu         $t0, 0x7C($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7C);
    // 0x80221788: sh          $t0, 0x156($v1)
    MEM_H(0X156, ctx->r3) = ctx->r8;
    // 0x8022178C: sw          $t1, 0xB4($a3)
    MEM_W(0XB4, ctx->r7) = ctx->r9;
    // 0x80221790: lhu         $t2, 0x7E($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X7E);
    // 0x80221794: swc1        $f0, 0x78($a3)
    MEM_W(0X78, ctx->r7) = ctx->f0.u32l;
    // 0x80221798: swc1        $f0, 0x7C($a3)
    MEM_W(0X7C, ctx->r7) = ctx->f0.u32l;
    // 0x8022179C: swc1        $f0, 0x80($a3)
    MEM_W(0X80, ctx->r7) = ctx->f0.u32l;
    // 0x802217A0: jal         0x8003521C
    // 0x802217A4: sh          $t2, 0xA8($a3)
    MEM_H(0XA8, ctx->r7) = ctx->r10;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x802217A4: sh          $t2, 0xA8($a3)
    MEM_H(0XA8, ctx->r7) = ctx->r10;
    after_1:
    // 0x802217A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802217AC:
    // 0x802217AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802217B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802217B4: jr          $ra
    // 0x802217B8: nop

    TRACE_RETURN()
    return;
    // 0x802217B8: nop

;}
RECOMP_FUNC void func_8020F454_5CA924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F45C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F460: jal         0x80013AC4
    // 0x8020F464: addiu       $a0, $a0, -0x2EC4
    ctx->r4 = ADD32(ctx->r4, -0X2EC4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F464: addiu       $a0, $a0, -0x2EC4
    ctx->r4 = ADD32(ctx->r4, -0X2EC4);
    after_0:
    // 0x8020F468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F46C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F470: jr          $ra
    // 0x8020F474: nop

    TRACE_RETURN()
    return;
    // 0x8020F474: nop

;}
RECOMP_FUNC void func_802145F0_5CFAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802145F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802145F4: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x802145F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802145FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80214600: addiu       $t9, $t9, -0x7468
    ctx->r25 = ADD32(ctx->r25, -0X7468);
    // 0x80214604: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80214608: jalr        $t9
    // 0x8021460C: addiu       $a0, $zero, 0x26B
    ctx->r4 = ADD32(0, 0X26B);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8021460C: addiu       $a0, $zero, 0x26B
    ctx->r4 = ADD32(0, 0X26B);
    after_0:
    // 0x80214610: lui         $t9, 0x801E
    ctx->r25 = S32(0X801E << 16);
    // 0x80214614: addiu       $t9, $t9, -0x3310
    ctx->r25 = ADD32(ctx->r25, -0X3310);
    // 0x80214618: jalr        $t9
    // 0x8021461C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8021461C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x80214620: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80214624: addiu       $t9, $t9, -0x7FB4
    ctx->r25 = ADD32(ctx->r25, -0X7FB4);
    // 0x80214628: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8021462C: jalr        $t9
    // 0x80214630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80214630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80214634: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80214638: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x8021463C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80214640: sw          $t8, 0x68($t6)
    MEM_W(0X68, ctx->r14) = ctx->r24;
    // 0x80214644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80214648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021464C: jr          $ra
    // 0x80214650: nop

    TRACE_RETURN()
    return;
    // 0x80214650: nop

;}
