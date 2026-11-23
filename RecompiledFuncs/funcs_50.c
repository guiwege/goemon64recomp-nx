#include "recomp.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8021AC08_5D60D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021AC08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021AC0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021AC10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021AC14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021AC18: lui         $t8, 0x8023
    ctx->r24 = S32(0X8023 << 16);
    // 0x8021AC1C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8021AC20: addiu       $t8, $t8, 0x7C08
    ctx->r24 = ADD32(ctx->r24, 0X7C08);
    // 0x8021AC24: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8021AC28: lui         $t9, 0xFB00
    ctx->r25 = S32(0XFB00 << 16);
    // 0x8021AC2C: sb          $t6, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r14;
    // 0x8021AC30: sw          $t7, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r15;
    // 0x8021AC34: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
    // 0x8021AC38: sw          $t9, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r25;
    // 0x8021AC3C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8021AC40: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8021AC44: andi        $t2, $a3, 0xFF
    ctx->r10 = ctx->r7 & 0XFF;
    // 0x8021AC48: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8021AC4C: sll         $t1, $a2, 24
    ctx->r9 = S32(ctx->r6 << 24);
    // 0x8021AC50: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x8021AC54: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x8021AC58: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8021AC5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8021AC60: or          $t8, $t4, $t7
    ctx->r24 = ctx->r12 | ctx->r15;
    // 0x8021AC64: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8021AC68: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x8021AC6C: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x8021AC70: sw          $t2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r10;
    // 0x8021AC74: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
    // 0x8021AC78: sw          $zero, 0x94($a0)
    MEM_W(0X94, ctx->r4) = 0;
    // 0x8021AC7C: subu        $a1, $s0, $s0
    ctx->r5 = SUB32(ctx->r16, ctx->r16);
    // 0x8021AC80: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8021AC84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021AC88: jal         0x80040620
    // 0x8021AC8C: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021AC8C: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    after_0:
    // 0x8021AC90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021AC94: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8021AC98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021AC9C: jr          $ra
    // 0x8021ACA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021ACA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021C654_5D7B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021C654: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021C658: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021C65C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8021C660: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8021C664: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8021C668: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8021C66C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8021C670: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8021C674: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x8021C678: lui         $at, 0x280
    ctx->r1 = S32(0X280 << 16);
    // 0x8021C67C: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x8021C680: or          $t6, $v0, $at
    ctx->r14 = ctx->r2 | ctx->r1;
    // 0x8021C684: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8021C688: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021C68C: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8021C690: lui         $s3, 0x8016
    ctx->r19 = S32(0X8016 << 16);
    // 0x8021C694: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8021C698: addiu       $s3, $s3, -0x33D0
    ctx->r19 = ADD32(ctx->r19, -0X33D0);
    // 0x8021C69C: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x8021C6A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021C6A4: lui         $at, 0xC008
    ctx->r1 = S32(0XC008 << 16);
    // 0x8021C6A8: sh          $t7, 0x136($s3)
    MEM_H(0X136, ctx->r19) = ctx->r15;
    // 0x8021C6AC: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x8021C6B0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8021C6B4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8021C6B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021C6BC: addiu       $s4, $zero, 0x14
    ctx->r20 = ADD32(0, 0X14);
    // 0x8021C6C0: swc1        $f4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f4.u32l;
L_8021C6C4:
    // 0x8021C6C4: jal         0x8021C744
    // 0x8021C6C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8021C744_5D7C14(rdram, ctx);
        goto after_0;
    // 0x8021C6C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x8021C6CC: lhu         $t8, 0x134($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X134);
    // 0x8021C6D0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8021C6D4: beql        $t9, $zero, L_8021C6F4
    if (ctx->r25 == 0) {
        // 0x8021C6D8: lwc1        $f6, 0xC($s1)
        ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
            goto L_8021C6F4;
    }
    goto skip_0;
    // 0x8021C6D8: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    skip_0:
    // 0x8021C6DC: jal         0x8021B04C
    // 0x8021C6E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8021B04C_5D651C(rdram, ctx);
        goto after_1;
    // 0x8021C6E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x8021C6E4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8021C6E8: b           L_8021C720
    // 0x8021C6EC: sw          $t0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r8;
        goto L_8021C720;
    // 0x8021C6EC: sw          $t0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r8;
    // 0x8021C6F0: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
L_8021C6F4:
    // 0x8021C6F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021C6F8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021C6FC: add.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = ctx->f8.d + ctx->f20.d;
    // 0x8021C700: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8021C704: bne         $s0, $s4, L_8021C6C4
    if (ctx->r16 != ctx->r20) {
        // 0x8021C708: swc1        $f16, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
            goto L_8021C6C4;
    }
    // 0x8021C708: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x8021C70C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021C710: nop

    // 0x8021C714: swc1        $f18, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f18.u32l;
    // 0x8021C718: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8021C71C: sw          $t1, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r9;
L_8021C720:
    // 0x8021C720: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8021C724: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8021C728: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8021C72C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8021C730: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8021C734: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8021C738: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8021C73C: jr          $ra
    // 0x8021C740: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8021C740: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8020DC78_5C9148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DC78: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8020DC7C: addiu       $t1, $t1, -0x33D0
    ctx->r9 = ADD32(ctx->r9, -0X33D0);
    // 0x8020DC80: lbu         $a2, 0x108($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X108);
    // 0x8020DC84: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8020DC88: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
L_8020DC8C:
    // 0x8020DC8C: sb          $t6, 0x108($t1)
    MEM_B(0X108, ctx->r9) = ctx->r14;
    // 0x8020DC90: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x8020DC94: lhu         $v1, 0x20($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X20);
    // 0x8020DC98: beql        $a3, $zero, L_8020DCFC
    if (ctx->r7 == 0) {
        // 0x8020DC9C: lw          $a3, 0x90($t1)
        ctx->r7 = MEM_W(ctx->r9, 0X90);
            goto L_8020DCFC;
    }
    goto skip_0;
    // 0x8020DC9C: lw          $a3, 0x90($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X90);
    skip_0:
    // 0x8020DCA0: lhu         $t7, 0x20($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X20);
    // 0x8020DCA4: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8020DCA8: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8020DCAC: bne         $at, $zero, L_8020DCF8
    if (ctx->r1 != 0) {
        // 0x8020DCB0: lui         $v1, 0x8022
        ctx->r3 = S32(0X8022 << 16);
            goto L_8020DCF8;
    }
    // 0x8020DCB0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8020DCB4: addiu       $v1, $v1, -0x6DA4
    ctx->r3 = ADD32(ctx->r3, -0X6DA4);
    // 0x8020DCB8: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_8020DCBC:
    // 0x8020DCBC: bnel        $v1, $t8, L_8020DCE0
    if (ctx->r3 != ctx->r24) {
        // 0x8020DCC0: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8020DCE0;
    }
    goto skip_1;
    // 0x8020DCC0: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x8020DCC4: lbu         $t9, 0x108($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X108);
    // 0x8020DCC8: lbu         $t2, 0x74($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X74);
    // 0x8020DCCC: bnel        $t9, $t2, L_8020DCE0
    if (ctx->r25 != ctx->r10) {
        // 0x8020DCD0: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8020DCE0;
    }
    goto skip_2;
    // 0x8020DCD0: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x8020DCD4: jr          $ra
    // 0x8020DCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8020DCD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020DCDC: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8020DCE0:
    // 0x8020DCE0: beql        $a3, $zero, L_8020DCFC
    if (ctx->r7 == 0) {
        // 0x8020DCE4: lw          $a3, 0x90($t1)
        ctx->r7 = MEM_W(ctx->r9, 0X90);
            goto L_8020DCFC;
    }
    goto skip_3;
    // 0x8020DCE4: lw          $a3, 0x90($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X90);
    skip_3:
    // 0x8020DCE8: lhu         $t3, 0x20($a3)
    ctx->r11 = MEM_HU(ctx->r7, 0X20);
    // 0x8020DCEC: slt         $at, $t3, $t0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8020DCF0: beql        $at, $zero, L_8020DCBC
    if (ctx->r1 == 0) {
        // 0x8020DCF4: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_8020DCBC;
    }
    goto skip_4;
    // 0x8020DCF4: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_4:
L_8020DCF8:
    // 0x8020DCF8: lw          $a3, 0x90($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X90);
L_8020DCFC:
    // 0x8020DCFC: lbu         $a2, 0x108($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X108);
    // 0x8020DD00: lhu         $v1, 0x20($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X20);
    // 0x8020DD04: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8020DD08: beq         $a3, $zero, L_8020DD64
    if (ctx->r7 == 0) {
        // 0x8020DD0C: nop
    
            goto L_8020DD64;
    }
    // 0x8020DD0C: nop

    // 0x8020DD10: lhu         $t4, 0x20($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X20);
    // 0x8020DD14: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x8020DD18: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8020DD1C: bne         $at, $zero, L_8020DD64
    if (ctx->r1 != 0) {
        // 0x8020DD20: lui         $v1, 0x8022
        ctx->r3 = S32(0X8022 << 16);
            goto L_8020DD64;
    }
    // 0x8020DD20: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8020DD24: addiu       $v1, $v1, -0x6DA4
    ctx->r3 = ADD32(ctx->r3, -0X6DA4);
    // 0x8020DD28: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
L_8020DD2C:
    // 0x8020DD2C: bnel        $v1, $t5, L_8020DD4C
    if (ctx->r3 != ctx->r13) {
        // 0x8020DD30: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8020DD4C;
    }
    goto skip_5;
    // 0x8020DD30: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_5:
    // 0x8020DD34: lbu         $t6, 0x74($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X74);
    // 0x8020DD38: bnel        $a2, $t6, L_8020DD4C
    if (ctx->r6 != ctx->r14) {
        // 0x8020DD3C: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8020DD4C;
    }
    goto skip_6;
    // 0x8020DD3C: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_6:
    // 0x8020DD40: jr          $ra
    // 0x8020DD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8020DD44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8020DD48: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8020DD4C:
    // 0x8020DD4C: beq         $a3, $zero, L_8020DD64
    if (ctx->r7 == 0) {
        // 0x8020DD50: nop
    
            goto L_8020DD64;
    }
    // 0x8020DD50: nop

    // 0x8020DD54: lhu         $t7, 0x20($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X20);
    // 0x8020DD58: slt         $at, $t7, $t0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8020DD5C: beql        $at, $zero, L_8020DD2C
    if (ctx->r1 == 0) {
        // 0x8020DD60: lw          $t5, 0x8($a3)
        ctx->r13 = MEM_W(ctx->r7, 0X8);
            goto L_8020DD2C;
    }
    goto skip_7;
    // 0x8020DD60: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    skip_7:
L_8020DD64:
    // 0x8020DD64: bnel        $a2, $v0, L_8020DC8C
    if (ctx->r6 != ctx->r2) {
        // 0x8020DD68: addu        $t6, $a2, $a1
        ctx->r14 = ADD32(ctx->r6, ctx->r5);
            goto L_8020DC8C;
    }
    goto skip_8;
    // 0x8020DD68: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    skip_8:
    // 0x8020DD6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020DD70: jr          $ra
    // 0x8020DD74: nop

    TRACE_RETURN()
    return;
    // 0x8020DD74: nop

;}
RECOMP_FUNC void func_8020E134_5C9604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E13C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E140: jal         0x80013AC4
    // 0x8020E144: addiu       $a0, $a0, -0x3B3C
    ctx->r4 = ADD32(ctx->r4, -0X3B3C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E144: addiu       $a0, $a0, -0x3B3C
    ctx->r4 = ADD32(ctx->r4, -0X3B3C);
    after_0:
    // 0x8020E148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E14C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E150: jr          $ra
    // 0x8020E154: nop

    TRACE_RETURN()
    return;
    // 0x8020E154: nop

;}
RECOMP_FUNC void func_80214FD0_5D04A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FD0: jr          $ra
    // 0x80214FD4: nop

    TRACE_RETURN()
    return;
    // 0x80214FD4: nop

;}
RECOMP_FUNC void func_80214F44_5D0414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214F44: addiu       $t6, $zero, 0x4000
    ctx->r14 = ADD32(0, 0X4000);
    // 0x80214F48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80214F4C: jr          $ra
    // 0x80214F50: sh          $t6, -0x4C5C($at)
    MEM_H(-0X4C5C, ctx->r1) = ctx->r14;
    TRACE_RETURN()
    return;
    // 0x80214F50: sh          $t6, -0x4C5C($at)
    MEM_H(-0X4C5C, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_802210AC_5DC57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802210AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802210B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802210B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802210B8: jal         0x8003F1D8
    // 0x802210BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003F1D8_3FDD8(rdram, ctx);
        goto after_0;
    // 0x802210BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802210C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x802210C4: bne         $v0, $zero, L_8022114C
    if (ctx->r2 != 0) {
        // 0x802210C8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_8022114C;
    }
    // 0x802210C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802210CC: lw          $t6, 0x68($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X68);
    // 0x802210D0: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x802210D4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802210D8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x802210DC: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x802210E0: sw          $t7, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r15;
    // 0x802210E4: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x802210E8: sw          $t9, 0x68($a2)
    MEM_W(0X68, ctx->r6) = ctx->r25;
    // 0x802210EC: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x802210F0: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x802210F4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x802210F8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802210FC: addiu       $v0, $v0, -0x33D0
    ctx->r2 = ADD32(ctx->r2, -0X33D0);
    // 0x80221100: sw          $zero, -0x764($at)
    MEM_W(-0X764, ctx->r1) = 0;
    // 0x80221104: lhu         $t1, 0x14E($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X14E);
    // 0x80221108: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8022110C: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x80221110: sw          $t1, 0xC0($a2)
    MEM_W(0XC0, ctx->r6) = ctx->r9;
    // 0x80221114: lw          $t2, 0x150($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X150);
    // 0x80221118: addiu       $t5, $t5, 0x1164
    ctx->r13 = ADD32(ctx->r13, 0X1164);
    // 0x8022111C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221120: sw          $t2, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r10;
    // 0x80221124: lhu         $t3, 0x154($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X154);
    // 0x80221128: addiu       $a0, $a0, 0x1F34
    ctx->r4 = ADD32(ctx->r4, 0X1F34);
    // 0x8022112C: sh          $t3, 0x7E($a1)
    MEM_H(0X7E, ctx->r5) = ctx->r11;
    // 0x80221130: lhu         $t4, 0x156($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X156);
    // 0x80221134: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x80221138: sb          $t4, 0x7C($a1)
    MEM_B(0X7C, ctx->r5) = ctx->r12;
    // 0x8022113C: jal         0x8003521C
    // 0x80221140: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x80221140: sw          $t5, 0xBC($a2)
    MEM_W(0XBC, ctx->r6) = ctx->r13;
    after_1:
    // 0x80221144: b           L_80221158
    // 0x80221148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80221158;
    // 0x80221148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022114C:
    // 0x8022114C: jal         0x80221CCC
    // 0x80221150: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80221CCC_5DD19C(rdram, ctx);
        goto after_2;
    // 0x80221150: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80221154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80221158:
    // 0x80221158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022115C: jr          $ra
    // 0x80221160: nop

    TRACE_RETURN()
    return;
    // 0x80221160: nop

;}
RECOMP_FUNC void func_8021ED7C_5DA24C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021ED7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021ED80: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8021ED84: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8021ED88: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x8021ED8C: lw          $t6, -0x39D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39D8);
    // 0x8021ED90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021ED94: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x8021ED98: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    // 0x8021ED9C: lui         $at, 0x8FFF
    ctx->r1 = S32(0X8FFF << 16);
    // 0x8021EDA0: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x8021EDA4: addiu       $t9, $sp, 0x2C
    ctx->r25 = ADD32(ctx->r29, 0X2C);
    // 0x8021EDA8: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x8021EDAC: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x8021EDB0: lw          $a2, 0xC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0XC);
    // 0x8021EDB4: lw          $a3, 0x10($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X10);
    // 0x8021EDB8: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x8021EDBC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8021EDC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8021EDC4: jal         0x8001CC38
    // 0x8021EDC8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8001CC38_1D838(rdram, ctx);
        goto after_0;
    // 0x8021EDC8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x8021EDCC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8021EDD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021EDD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021EDD8: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8021EDDC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8021EDE0: bc1f        L_8021EE48
    if (!c1cs) {
        // 0x8021EDE4: nop
    
            goto L_8021EE48;
    }
    // 0x8021EDE4: nop

    // 0x8021EDE8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021EDEC: lui         $at, 0x43A0
    ctx->r1 = S32(0X43A0 << 16);
    // 0x8021EDF0: bc1t        L_8021EE38
    if (c1cs) {
        // 0x8021EDF4: nop
    
            goto L_8021EE38;
    }
    // 0x8021EDF4: nop

    // 0x8021EDF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021EDFC: nop

    // 0x8021EE00: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8021EE04: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021EE08: bc1t        L_8021EE38
    if (c1cs) {
        // 0x8021EE0C: nop
    
            goto L_8021EE38;
    }
    // 0x8021EE0C: nop

    // 0x8021EE10: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8021EE14: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8021EE18: bc1t        L_8021EE38
    if (c1cs) {
        // 0x8021EE1C: nop
    
            goto L_8021EE38;
    }
    // 0x8021EE1C: nop

    // 0x8021EE20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021EE24: nop

    // 0x8021EE28: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8021EE2C: nop

    // 0x8021EE30: bc1f        L_8021EE40
    if (!c1cs) {
        // 0x8021EE34: nop
    
            goto L_8021EE40;
    }
    // 0x8021EE34: nop

L_8021EE38:
    // 0x8021EE38: b           L_8021EE48
    // 0x8021EE3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8021EE48;
    // 0x8021EE3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021EE40:
    // 0x8021EE40: b           L_8021EE48
    // 0x8021EE44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021EE48;
    // 0x8021EE44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021EE48:
    // 0x8021EE48: jr          $ra
    // 0x8021EE4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8021EE4C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80215B8C_5D105C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215B8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80215B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215B94: lw          $t6, 0xD0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XD0);
    // 0x80215B98: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80215B9C: lhu         $t9, 0x7B10($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7B10);
    // 0x80215BA0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80215BA4: lw          $t7, 0xD4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XD4);
    // 0x80215BA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80215BAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80215BB0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80215BB4: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x80215BB8: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80215BBC: beq         $t9, $zero, L_80215BFC
    if (ctx->r25 == 0) {
        // 0x80215BC0: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_80215BFC;
    }
    // 0x80215BC0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80215BC4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80215BC8: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80215BCC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80215BD0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80215BD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80215BD8:
    // 0x80215BD8: andi        $t0, $v0, 0xFFFF
    ctx->r8 = ctx->r2 & 0XFFFF;
    // 0x80215BDC: multu       $t0, $a1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80215BE0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80215BE4: mflo        $t1
    ctx->r9 = lo;
    // 0x80215BE8: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x80215BEC: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80215BF0: lhu         $t4, 0x2E50($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X2E50);
    // 0x80215BF4: bnel        $t4, $zero, L_80215BD8
    if (ctx->r12 != 0) {
        // 0x80215BF8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80215BD8;
    }
    goto skip_0;
    // 0x80215BF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
L_80215BFC:
    // 0x80215BFC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80215C00: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80215C04: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80215C08: lhu         $t7, 0x16($a3)
    ctx->r15 = MEM_HU(ctx->r7, 0X16);
    // 0x80215C0C: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80215C10: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x80215C14: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x80215C18: lh          $t4, 0x24($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X24);
    // 0x80215C1C: lh          $t8, 0x1C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1C);
    // 0x80215C20: mflo        $t5
    ctx->r13 = lo;
    // 0x80215C24: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x80215C28: addu        $v1, $t6, $a2
    ctx->r3 = ADD32(ctx->r14, ctx->r6);
    // 0x80215C2C: sh          $t7, 0x2E50($v1)
    MEM_H(0X2E50, ctx->r3) = ctx->r15;
    // 0x80215C30: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80215C34: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80215C38: lh          $t6, 0x20($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X20);
    // 0x80215C3C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80215C40: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x80215C44: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80215C48: nop

    // 0x80215C4C: sw          $t9, 0x2E54($v1)
    MEM_W(0X2E54, ctx->r3) = ctx->r25;
    // 0x80215C50: lwc1        $f8, 0xC($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80215C54: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80215C58: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80215C5C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80215C60: nop

    // 0x80215C64: sw          $t1, 0x2E5C($v1)
    MEM_W(0X2E5C, ctx->r3) = ctx->r9;
    // 0x80215C68: lwc1        $f16, 0x10($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X10);
    // 0x80215C6C: sw          $t4, 0x2E6C($v1)
    MEM_W(0X2E6C, ctx->r3) = ctx->r12;
    // 0x80215C70: sw          $t8, 0x2E60($v1)
    MEM_W(0X2E60, ctx->r3) = ctx->r24;
    // 0x80215C74: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80215C78: sw          $t5, 0x2E70($v1)
    MEM_W(0X2E70, ctx->r3) = ctx->r13;
    // 0x80215C7C: sw          $t6, 0x2E74($v1)
    MEM_W(0X2E74, ctx->r3) = ctx->r14;
    // 0x80215C80: sw          $t7, 0x2E58($v1)
    MEM_W(0X2E58, ctx->r3) = ctx->r15;
    // 0x80215C84: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80215C88: sw          $t9, 0x2E68($v1)
    MEM_W(0X2E68, ctx->r3) = ctx->r25;
    // 0x80215C8C: jal         0x80034ED4
    // 0x80215C90: sw          $t3, 0x2E64($v1)
    MEM_W(0X2E64, ctx->r3) = ctx->r11;
    func_80034ED4_35AD4(rdram, ctx);
        goto after_0;
    // 0x80215C90: sw          $t3, 0x2E64($v1)
    MEM_W(0X2E64, ctx->r3) = ctx->r11;
    after_0:
    // 0x80215C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80215C9C: jr          $ra
    // 0x80215CA0: nop

    TRACE_RETURN()
    return;
    // 0x80215CA0: nop

;}
RECOMP_FUNC void func_8021DD4C_5D921C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DD4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DD50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021DD54: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8021DD58: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8021DD5C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021DD60: lui         $t9, 0x8024
    ctx->r25 = S32(0X8024 << 16);
    // 0x8021DD64: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8021DD68: addiu       $t9, $t9, -0x7AD8
    ctx->r25 = ADD32(ctx->r25, -0X7AD8);
    // 0x8021DD6C: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8021DD70: lui         $t0, 0xFB00
    ctx->r8 = S32(0XFB00 << 16);
    // 0x8021DD74: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x8021DD78: sw          $t8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r24;
    // 0x8021DD7C: sw          $t9, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r25;
    // 0x8021DD80: sw          $t0, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r8;
    // 0x8021DD84: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8021DD88: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DD8C: andi        $t3, $a3, 0xFF
    ctx->r11 = ctx->r7 & 0XFF;
    // 0x8021DD90: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x8021DD94: sll         $t2, $a2, 24
    ctx->r10 = S32(ctx->r6 << 24);
    // 0x8021DD98: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x8021DD9C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8021DDA0: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x8021DDA4: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x8021DDA8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8021DDAC: or          $t3, $t9, $t1
    ctx->r11 = ctx->r25 | ctx->r9;
    // 0x8021DDB0: lui         $t2, 0xB800
    ctx->r10 = S32(0XB800 << 16);
    // 0x8021DDB4: sw          $t3, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r11;
    // 0x8021DDB8: sw          $t2, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r10;
    // 0x8021DDBC: sw          $zero, 0x94($v0)
    MEM_W(0X94, ctx->r2) = 0;
    // 0x8021DDC0: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x8021DDC4: subu        $a1, $v0, $v0
    ctx->r5 = SUB32(ctx->r2, ctx->r2);
    // 0x8021DDC8: addiu       $a1, $a1, -0x18
    ctx->r5 = ADD32(ctx->r5, -0X18);
    // 0x8021DDCC: jal         0x80040620
    // 0x8021DDD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8021DDD0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8021DDD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021DDD8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8021DDDC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8021DDE0: jr          $ra
    // 0x8021DDE4: nop

    TRACE_RETURN()
    return;
    // 0x8021DDE4: nop

;}
RECOMP_FUNC void func_80211074_5CC544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80211074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80211078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021107C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80211080: jal         0x80013AC4
    // 0x80211084: addiu       $a0, $a0, -0x16F8
    ctx->r4 = ADD32(ctx->r4, -0X16F8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80211084: addiu       $a0, $a0, -0x16F8
    ctx->r4 = ADD32(ctx->r4, -0X16F8);
    after_0:
    // 0x80211088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021108C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80211090: jr          $ra
    // 0x80211094: nop

    TRACE_RETURN()
    return;
    // 0x80211094: nop

;}
RECOMP_FUNC void func_802157C4_5D0C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802157C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802157C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802157CC: addiu       $t6, $zero, 0x7E
    ctx->r14 = ADD32(0, 0X7E);
    // 0x802157D0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802157D4: sh          $t6, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r14;
    // 0x802157D8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x802157DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802157E0: jal         0x80216DF8
    // 0x802157E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80216DF8_5D22C8(rdram, ctx);
        goto after_0;
    // 0x802157E4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x802157E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802157EC: lwc1        $f0, -0x5DC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5DC8);
    // 0x802157F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x802157F4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802157F8: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x802157FC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80215800: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80215804: swc1        $f0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f0.u32l;
    // 0x80215808: swc1        $f0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f0.u32l;
    // 0x8021580C: swc1        $f0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->f0.u32l;
    // 0x80215810: addiu       $a0, $a0, 0x5830
    ctx->r4 = ADD32(ctx->r4, 0X5830);
    // 0x80215814: sw          $t7, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->r15;
    // 0x80215818: jal         0x8003521C
    // 0x8021581C: sw          $t8, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_1;
    // 0x8021581C: sw          $t8, 0x64($a2)
    MEM_W(0X64, ctx->r6) = ctx->r24;
    after_1:
    // 0x80215820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80215824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80215828: jr          $ra
    // 0x8021582C: nop

    TRACE_RETURN()
    return;
    // 0x8021582C: nop

;}
RECOMP_FUNC void func_8020DDF8_5C92C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DDF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DDFC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8020DE00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DE04: addiu       $t6, $t6, -0x3340
    ctx->r14 = ADD32(ctx->r14, -0X3340);
    // 0x8020DE08: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8020DE0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020DE10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8020DE14: jal         0x80004240
    // 0x8020DE18: sw          $t6, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = ctx->r14;
    func_80004240_4E40(rdram, ctx);
        goto after_0;
    // 0x8020DE18: sw          $t6, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = ctx->r14;
    after_0:
    // 0x8020DE1C: jal         0x80003478
    // 0x8020DE20: nop

    func_80003478_4078(rdram, ctx);
        goto after_1;
    // 0x8020DE20: nop

    after_1:
    // 0x8020DE24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DE28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DE2C: jr          $ra
    // 0x8020DE30: nop

    TRACE_RETURN()
    return;
    // 0x8020DE30: nop

;}
RECOMP_FUNC void func_8021F578_5DAA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F578: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F57C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F580: lw          $v0, 0x84($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X84);
    // 0x8021F584: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8021F588: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F58C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8021F590: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x8021F594: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8021F598: jal         0x8021F460
    // 0x8021F59C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8021F460_5DA930(rdram, ctx);
        goto after_0;
    // 0x8021F59C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8021F5A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F5A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F5A8: jr          $ra
    // 0x8021F5AC: nop

    TRACE_RETURN()
    return;
    // 0x8021F5AC: nop

;}
RECOMP_FUNC void func_80210BF4_5CC0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210BFC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210C00: jal         0x80013AC4
    // 0x80210C04: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210C04: addiu       $a0, $a0, -0x19F4
    ctx->r4 = ADD32(ctx->r4, -0X19F4);
    after_0:
    // 0x80210C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210C10: jr          $ra
    // 0x80210C14: nop

    TRACE_RETURN()
    return;
    // 0x80210C14: nop

;}
RECOMP_FUNC void func_80213EC4_5CF394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213EC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80213EC8: jr          $ra
    // 0x80213ECC: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
    TRACE_RETURN()
    return;
    // 0x80213ECC: sb          $zero, 0x65($a1)
    MEM_B(0X65, ctx->r5) = 0;
;}
RECOMP_FUNC void func_802111B8_5CC688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802111B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802111BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802111C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802111C4: jal         0x80013AC4
    // 0x802111C8: addiu       $a0, $a0, -0x1664
    ctx->r4 = ADD32(ctx->r4, -0X1664);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802111C8: addiu       $a0, $a0, -0x1664
    ctx->r4 = ADD32(ctx->r4, -0X1664);
    after_0:
    // 0x802111CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802111D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802111D4: jr          $ra
    // 0x802111D8: nop

    TRACE_RETURN()
    return;
    // 0x802111D8: nop

;}
RECOMP_FUNC void func_8020F700_5CABD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F700: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F708: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F70C: jal         0x80013AC4
    // 0x8020F710: addiu       $a0, $a0, -0x2D4C
    ctx->r4 = ADD32(ctx->r4, -0X2D4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F710: addiu       $a0, $a0, -0x2D4C
    ctx->r4 = ADD32(ctx->r4, -0X2D4C);
    after_0:
    // 0x8020F714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F718: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F71C: jr          $ra
    // 0x8020F720: nop

    TRACE_RETURN()
    return;
    // 0x8020F720: nop

;}
RECOMP_FUNC void func_802150A0_5D0570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802150A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802150A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802150A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802150AC: jal         0x802213F4
    // 0x802150B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802213F4_5DC8C4(rdram, ctx);
        goto after_0;
    // 0x802150B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802150B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802150B8: beq         $v0, $at, L_802150D4
    if (ctx->r2 == ctx->r1) {
        // 0x802150BC: lw          $t6, 0x18($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X18);
            goto L_802150D4;
    }
    // 0x802150BC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802150C0: lw          $t7, 0xB4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XB4);
    // 0x802150C4: beql        $t7, $zero, L_802150D8
    if (ctx->r15 == 0) {
        // 0x802150C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802150D8;
    }
    goto skip_0;
    // 0x802150C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x802150CC: jal         0x80037448
    // 0x802150D0: nop

    func_80037448_38048(rdram, ctx);
        goto after_1;
    // 0x802150D0: nop

    after_1:
L_802150D4:
    // 0x802150D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802150D8:
    // 0x802150D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802150DC: jr          $ra
    // 0x802150E0: nop

    TRACE_RETURN()
    return;
    // 0x802150E0: nop

;}
RECOMP_FUNC void func_80210708_5CBBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021070C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210710: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210714: jal         0x80013AC4
    // 0x80210718: addiu       $a0, $a0, -0x1D4C
    ctx->r4 = ADD32(ctx->r4, -0X1D4C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210718: addiu       $a0, $a0, -0x1D4C
    ctx->r4 = ADD32(ctx->r4, -0X1D4C);
    after_0:
    // 0x8021071C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210724: jr          $ra
    // 0x80210728: nop

    TRACE_RETURN()
    return;
    // 0x80210728: nop

;}
RECOMP_FUNC void func_80215230_5D0700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215230: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80215234: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80215238: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x8021523C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80215240: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80215244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80215248: addu        $v1, $v0, $at
    ctx->r3 = ADD32(ctx->r2, ctx->r1);
    // 0x8021524C: lbu         $t6, 0x7898($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X7898);
    // 0x80215250: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80215254: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80215258: beq         $t6, $zero, L_80215320
    if (ctx->r14 == 0) {
        // 0x8021525C: addu        $t7, $t7, $v0
        ctx->r15 = ADD32(ctx->r15, ctx->r2);
            goto L_80215320;
    }
    // 0x8021525C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80215260: lbu         $t7, -0x51D7($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X51D7);
    // 0x80215264: bnel        $t7, $zero, L_80215324
    if (ctx->r15 != 0) {
        // 0x80215268: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80215324;
    }
    goto skip_0;
    // 0x80215268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021526C: lw          $t8, 0xD8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XD8);
    // 0x80215270: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80215274: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80215278: lbu         $v0, 0x7898($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7898);
    // 0x8021527C: lb          $t5, 0x1E($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1E);
    // 0x80215280: slti        $at, $v0, 0x11
    ctx->r1 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80215284: bne         $at, $zero, L_80215304
    if (ctx->r1 != 0) {
        // 0x80215288: andi        $t6, $t5, 0xF
        ctx->r14 = ctx->r13 & 0XF;
            goto L_80215304;
    }
    // 0x80215288: andi        $t6, $t5, 0xF
    ctx->r14 = ctx->r13 & 0XF;
    // 0x8021528C: lw          $a0, -0x39F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39F4);
    // 0x80215290: lb          $t9, 0x1E($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1E);
    // 0x80215294: beq         $a0, $zero, L_80215320
    if (ctx->r4 == 0) {
        // 0x80215298: andi        $a2, $t9, 0xF0
        ctx->r6 = ctx->r25 & 0XF0;
            goto L_80215320;
    }
    // 0x80215298: andi        $a2, $t9, 0xF0
    ctx->r6 = ctx->r25 & 0XF0;
    // 0x8021529C: jal         0x802154FC
    // 0x802152A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_802154FC_5D09CC(rdram, ctx);
        goto after_0;
    // 0x802152A0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x802152A4: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x802152A8: bne         $v0, $at, L_80215320
    if (ctx->r2 != ctx->r1) {
        // 0x802152AC: lw          $a3, 0x28($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X28);
            goto L_80215320;
    }
    // 0x802152AC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x802152B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802152B4: lw          $v0, -0x3A00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A00);
    // 0x802152B8: lhu         $t1, 0x22($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X22);
    // 0x802152BC: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x802152C0: sh          $t2, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r10;
    // 0x802152C4: jal         0x801FB270
    // 0x802152C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_801FB270_5B7180(rdram, ctx);
        goto after_1;
    // 0x802152C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x802152CC: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x802152D0: lw          $t4, -0x3A38($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3A38);
    // 0x802152D4: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x802152D8: lw          $t3, -0x39F4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X39F4);
    // 0x802152DC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x802152E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x802152E4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x802152E8: jal         0x80215330
    // 0x802152EC: sw          $t3, -0x76C($at)
    MEM_W(-0X76C, ctx->r1) = ctx->r11;
    func_80215330_5D0800(rdram, ctx);
        goto after_2;
    // 0x802152EC: sw          $t3, -0x76C($at)
    MEM_W(-0X76C, ctx->r1) = ctx->r11;
    after_2:
    // 0x802152F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802152F4: jal         0x8003521C
    // 0x802152F8: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802152F8: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    after_3:
    // 0x802152FC: b           L_80215324
    // 0x80215300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80215324;
    // 0x80215300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80215304:
    // 0x80215304: bnel        $t6, $v0, L_80215324
    if (ctx->r14 != ctx->r2) {
        // 0x80215308: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80215324;
    }
    goto skip_1;
    // 0x80215308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021530C: jal         0x80215330
    // 0x80215310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80215330_5D0800(rdram, ctx);
        goto after_4;
    // 0x80215310: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80215314: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80215318: jal         0x8003521C
    // 0x8021531C: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    func_8003521C_35E1C(rdram, ctx);
        goto after_5;
    // 0x8021531C: addiu       $a0, $a0, 0x54F0
    ctx->r4 = ADD32(ctx->r4, 0X54F0);
    after_5:
L_80215320:
    // 0x80215320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80215324:
    // 0x80215324: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80215328: jr          $ra
    // 0x8021532C: nop

    TRACE_RETURN()
    return;
    // 0x8021532C: nop

;}
RECOMP_FUNC void func_80215CA4_5D1174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215CA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80215CA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80215CAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80215CB0: lw          $t6, 0xDC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XDC);
    // 0x80215CB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80215CB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80215CBC: bnel        $t6, $zero, L_80215D20
    if (ctx->r14 != 0) {
        // 0x80215CC0: lw          $v0, 0xDC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XDC);
            goto L_80215D20;
    }
    goto skip_0;
    // 0x80215CC0: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
    skip_0:
    // 0x80215CC4: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80215CC8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80215CCC: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80215CD0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80215CD4: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215CD8: addiu       $t2, $v1, 0x7FFF
    ctx->r10 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215CDC: addiu       $t3, $zero, 0x1AF4
    ctx->r11 = ADD32(0, 0X1AF4);
    // 0x80215CE0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x80215CE4: nop

    // 0x80215CE8: sw          $t8, 0x3001($at)
    MEM_W(0X3001, ctx->r1) = ctx->r24;
    // 0x80215CEC: lwc1        $f8, 0xC($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80215CF0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80215CF4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80215CF8: nop

    // 0x80215CFC: sw          $t0, 0x3005($at)
    MEM_W(0X3005, ctx->r1) = ctx->r8;
    // 0x80215D00: lhu         $t1, 0x14($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X14);
    // 0x80215D04: sw          $t1, 0x3009($at)
    MEM_W(0X3009, ctx->r1) = ctx->r9;
    // 0x80215D08: lhu         $t2, 0x2DF3($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X2DF3);
    // 0x80215D0C: addiu       $at, $zero, 0x132
    ctx->r1 = ADD32(0, 0X132);
    // 0x80215D10: bne         $t2, $at, L_80215D1C
    if (ctx->r10 != ctx->r1) {
        // 0x80215D14: addiu       $at, $v1, 0x7FFF
        ctx->r1 = ADD32(ctx->r3, 0X7FFF);
            goto L_80215D1C;
    }
    // 0x80215D14: addiu       $at, $v1, 0x7FFF
    ctx->r1 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215D18: sw          $t3, 0x3009($at)
    MEM_W(0X3009, ctx->r1) = ctx->r11;
L_80215D1C:
    // 0x80215D1C: lw          $v0, 0xDC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XDC);
L_80215D20:
    // 0x80215D20: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80215D24: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80215D28: beq         $v0, $zero, L_80215D58
    if (ctx->r2 == 0) {
        // 0x80215D2C: lw          $a3, 0xE0($s0)
        ctx->r7 = MEM_W(ctx->r16, 0XE0);
            goto L_80215D58;
    }
    // 0x80215D2C: lw          $a3, 0xE0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XE0);
    // 0x80215D30: beq         $v0, $a2, L_80215FB8
    if (ctx->r2 == ctx->r6) {
        // 0x80215D34: lui         $a0, 0x8015
        ctx->r4 = S32(0X8015 << 16);
            goto L_80215FB8;
    }
    // 0x80215D34: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x80215D38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80215D3C: beq         $v0, $at, L_80216038
    if (ctx->r2 == ctx->r1) {
        // 0x80215D40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80216038;
    }
    // 0x80215D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215D44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80215D48: beq         $v0, $at, L_802160F0
    if (ctx->r2 == ctx->r1) {
        // 0x80215D4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802160F0;
    }
    // 0x80215D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215D50: b           L_8021616C
    // 0x80215D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021616C;
    // 0x80215D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80215D58:
    // 0x80215D58: jal         0x80036260
    // 0x80215D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80036260_36E60(rdram, ctx);
        goto after_0;
    // 0x80215D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80215D60: lhu         $t4, 0xD0($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XD0);
    // 0x80215D64: lui         $t6, 0x8023
    ctx->r14 = S32(0X8023 << 16);
    // 0x80215D68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80215D6C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80215D70: lw          $t6, 0x6984($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6984);
    // 0x80215D74: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80215D78: jal         0x800141C4
    // 0x80215D7C: lhu         $a0, 0x0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X0);
    func_800141C4_14DC4(rdram, ctx);
        goto after_1;
    // 0x80215D7C: lhu         $a0, 0x0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X0);
    after_1:
    // 0x80215D80: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80215D84: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80215D88: addiu       $t8, $v1, 0x7FFF
    ctx->r24 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215D8C: lbu         $t8, 0x2DE5($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2DE5);
    // 0x80215D90: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80215D94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80215D98: bne         $t8, $at, L_80215DBC
    if (ctx->r24 != ctx->r1) {
        // 0x80215D9C: addiu       $a0, $a0, 0x6988
        ctx->r4 = ADD32(ctx->r4, 0X6988);
            goto L_80215DBC;
    }
    // 0x80215D9C: addiu       $a0, $a0, 0x6988
    ctx->r4 = ADD32(ctx->r4, 0X6988);
    // 0x80215DA0: addiu       $t9, $v1, 0x7FFF
    ctx->r25 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215DA4: lhu         $t9, 0x2DF5($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X2DF5);
    // 0x80215DA8: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80215DAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80215DB0: lbu         $t0, 0x79A0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X79A0);
    // 0x80215DB4: b           L_80215DD4
    // 0x80215DB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_80215DD4;
    // 0x80215DB8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_80215DBC:
    // 0x80215DBC: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215DC0: lhu         $t1, 0x2DF5($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X2DF5);
    // 0x80215DC4: lui         $t2, 0x8023
    ctx->r10 = S32(0X8023 << 16);
    // 0x80215DC8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80215DCC: lbu         $t2, 0x79CC($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X79CC);
    // 0x80215DD0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
L_80215DD4:
    // 0x80215DD4: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80215DD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215DDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80215DE0: sw          $t3, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r11;
    // 0x80215DE4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80215DE8: bnel        $t4, $zero, L_80215E18
    if (ctx->r12 != 0) {
        // 0x80215DEC: lhu         $t1, 0xD0($s0)
        ctx->r9 = MEM_HU(ctx->r16, 0XD0);
            goto L_80215E18;
    }
    goto skip_1;
    // 0x80215DEC: lhu         $t1, 0xD0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD0);
    skip_1:
    // 0x80215DF0: lhu         $t5, 0xD0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0XD0);
    // 0x80215DF4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80215DF8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80215DFC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80215E00: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80215E04: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80215E08: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x80215E0C: b           L_80215E34
    // 0x80215E10: sh          $t0, -0x6344($at)
    MEM_H(-0X6344, ctx->r1) = ctx->r8;
        goto L_80215E34;
    // 0x80215E10: sh          $t0, -0x6344($at)
    MEM_H(-0X6344, ctx->r1) = ctx->r8;
    // 0x80215E14: lhu         $t1, 0xD0($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XD0);
L_80215E18:
    // 0x80215E18: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80215E1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80215E20: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80215E24: lw          $t4, -0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, -0X4);
    // 0x80215E28: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80215E2C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80215E30: sh          $t6, -0x6334($at)
    MEM_H(-0X6334, ctx->r1) = ctx->r14;
L_80215E34:
    // 0x80215E34: jal         0x80035EEC
    // 0x80215E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_2;
    // 0x80215E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80215E3C: bne         $v0, $zero, L_80215E54
    if (ctx->r2 != 0) {
        // 0x80215E40: addiu       $t7, $zero, 0x20
        ctx->r15 = ADD32(0, 0X20);
            goto L_80215E54;
    }
    // 0x80215E40: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80215E44: jal         0x80035044
    // 0x80215E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_3;
    // 0x80215E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80215E4C: b           L_8021616C
    // 0x80215E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021616C;
    // 0x80215E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80215E54:
    // 0x80215E54: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80215E58: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215E5C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80215E60: sh          $t7, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r15;
    // 0x80215E64: sw          $a0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r4;
    // 0x80215E68: addiu       $a2, $a2, -0x6360
    ctx->r6 = ADD32(ctx->r6, -0X6360);
    // 0x80215E6C: addiu       $a1, $a1, -0x642C
    ctx->r5 = ADD32(ctx->r5, -0X642C);
    // 0x80215E70: jal         0x800086C4
    // 0x80215E74: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_800086C4_92C4(rdram, ctx);
        goto after_4;
    // 0x80215E74: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_4:
    // 0x80215E78: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80215E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215E80: jal         0x8021617C
    // 0x80215E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8021617C_5D164C(rdram, ctx);
        goto after_5;
    // 0x80215E84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80215E88: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80215E8C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80215E90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215E94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215E98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80215E9C: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    // 0x80215EA0: jal         0x80035EEC
    // 0x80215EA4: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_6;
    // 0x80215EA4: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    after_6:
    // 0x80215EA8: bne         $v0, $zero, L_80215EC0
    if (ctx->r2 != 0) {
        // 0x80215EAC: addiu       $t8, $zero, 0x30
        ctx->r24 = ADD32(0, 0X30);
            goto L_80215EC0;
    }
    // 0x80215EAC: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80215EB0: jal         0x80035044
    // 0x80215EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_7;
    // 0x80215EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80215EB8: b           L_8021616C
    // 0x80215EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021616C;
    // 0x80215EBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80215EC0:
    // 0x80215EC0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80215EC4: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215EC8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80215ECC: sh          $t8, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r24;
    // 0x80215ED0: sw          $a0, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = ctx->r4;
    // 0x80215ED4: addiu       $a2, $a2, -0x6360
    ctx->r6 = ADD32(ctx->r6, -0X6360);
    // 0x80215ED8: addiu       $a1, $a1, -0x6438
    ctx->r5 = ADD32(ctx->r5, -0X6438);
    // 0x80215EDC: jal         0x800086C4
    // 0x80215EE0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_800086C4_92C4(rdram, ctx);
        goto after_8;
    // 0x80215EE0: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_8:
    // 0x80215EE4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80215EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215EEC: jal         0x8021617C
    // 0x80215EF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8021617C_5D164C(rdram, ctx);
        goto after_9;
    // 0x80215EF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80215EF4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80215EF8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80215EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80215F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80215F08: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    // 0x80215F0C: jal         0x80035EEC
    // 0x80215F10: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    func_80035EEC_36AEC(rdram, ctx);
        goto after_10;
    // 0x80215F10: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
    after_10:
    // 0x80215F14: bnel        $v0, $zero, L_80215F30
    if (ctx->r2 != 0) {
        // 0x80215F18: lw          $a3, 0x1C($s0)
        ctx->r7 = MEM_W(ctx->r16, 0X1C);
            goto L_80215F30;
    }
    goto skip_2;
    // 0x80215F18: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    skip_2:
    // 0x80215F1C: jal         0x80035044
    // 0x80215F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80035044_35C44(rdram, ctx);
        goto after_11;
    // 0x80215F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80215F24: b           L_8021616C
    // 0x80215F28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021616C;
    // 0x80215F28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80215F2C: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
L_80215F30:
    // 0x80215F30: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80215F34: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215F38: sh          $t9, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r25;
    // 0x80215F3C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80215F40: addiu       $a1, $a1, -0x6444
    ctx->r5 = ADD32(ctx->r5, -0X6444);
    // 0x80215F44: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80215F48: bne         $t0, $zero, L_80215F74
    if (ctx->r8 != 0) {
        // 0x80215F4C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80215F74;
    }
    // 0x80215F4C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80215F50: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80215F54: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80215F58: addiu       $a2, $a2, -0x6360
    ctx->r6 = ADD32(ctx->r6, -0X6360);
    // 0x80215F5C: addiu       $a1, $a1, -0x6450
    ctx->r5 = ADD32(ctx->r5, -0X6450);
    // 0x80215F60: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80215F64: jal         0x800086C4
    // 0x80215F68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800086C4_92C4(rdram, ctx);
        goto after_12;
    // 0x80215F68: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_12:
    // 0x80215F6C: b           L_80215F98
    // 0x80215F70: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_80215F98;
    // 0x80215F70: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_80215F74:
    // 0x80215F74: addiu       $a2, $a2, -0x6360
    ctx->r6 = ADD32(ctx->r6, -0X6360);
    // 0x80215F78: jal         0x800086C4
    // 0x80215F7C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_800086C4_92C4(rdram, ctx);
        goto after_13;
    // 0x80215F7C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_13:
    // 0x80215F80: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80215F84: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x80215F88: ori         $t1, $t1, 0x800
    ctx->r9 = ctx->r9 | 0X800;
    // 0x80215F8C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80215F90: sw          $t1, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r9;
    // 0x80215F94: sb          $t2, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r10;
L_80215F98:
    // 0x80215F98: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80215F9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80215FA0: jal         0x8021617C
    // 0x80215FA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8021617C_5D164C(rdram, ctx);
        goto after_14;
    // 0x80215FA4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_14:
    // 0x80215FA8: lw          $t3, 0xDC($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XDC);
    // 0x80215FAC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80215FB0: b           L_80216168
    // 0x80215FB4: sw          $t4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r12;
        goto L_80216168;
    // 0x80215FB4: sw          $t4, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r12;
L_80215FB8:
    // 0x80215FB8: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x80215FBC: addiu       $t5, $a0, 0x7FFF
    ctx->r13 = ADD32(ctx->r4, 0X7FFF);
    // 0x80215FC0: lbu         $t5, 0x78B5($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X78B5);
    // 0x80215FC4: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80215FC8: addiu       $t0, $v1, 0x7FFF
    ctx->r8 = ADD32(ctx->r3, 0X7FFF);
    // 0x80215FCC: bnel        $t5, $zero, L_80216008
    if (ctx->r13 != 0) {
        // 0x80215FD0: lbu         $t0, 0x2E23($t0)
        ctx->r8 = MEM_BU(ctx->r8, 0X2E23);
            goto L_80216008;
    }
    goto skip_3;
    // 0x80215FD0: lbu         $t0, 0x2E23($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2E23);
    skip_3:
    // 0x80215FD4: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80215FD8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80215FDC: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80215FE0: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80215FE4: lhu         $t6, 0x307A($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X307A);
    // 0x80215FE8: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x80215FEC: bnel        $t7, $zero, L_8021616C
    if (ctx->r15 != 0) {
        // 0x80215FF0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021616C;
    }
    goto skip_4;
    // 0x80215FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x80215FF4: lhu         $t8, 0x307C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X307C);
    // 0x80215FF8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80215FFC: beql        $t9, $zero, L_8021616C
    if (ctx->r25 == 0) {
        // 0x80216000: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021616C;
    }
    goto skip_5;
    // 0x80216000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x80216004: lbu         $t0, 0x2E23($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X2E23);
L_80216008:
    // 0x80216008: addiu       $t1, $v1, 0x7FFF
    ctx->r9 = ADD32(ctx->r3, 0X7FFF);
    // 0x8021600C: bnel        $t0, $zero, L_8021616C
    if (ctx->r8 != 0) {
        // 0x80216010: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021616C;
    }
    goto skip_6;
    // 0x80216010: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x80216014: lhu         $t1, 0x2E17($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X2E17);
    // 0x80216018: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x8021601C: bnel        $t1, $zero, L_8021616C
    if (ctx->r9 != 0) {
        // 0x80216020: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021616C;
    }
    goto skip_7;
    // 0x80216020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_7:
    // 0x80216024: sb          $a2, 0x78B5($at)
    MEM_B(0X78B5, ctx->r1) = ctx->r6;
    // 0x80216028: lw          $t2, 0xDC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XDC);
    // 0x8021602C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80216030: b           L_80216168
    // 0x80216034: sw          $t3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r11;
        goto L_80216168;
    // 0x80216034: sw          $t3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r11;
L_80216038:
    // 0x80216038: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8021603C: jal         0x80216228
    // 0x80216040: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80216228_5D16F8(rdram, ctx);
        goto after_15;
    // 0x80216040: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_15:
    // 0x80216044: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80216048: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8021604C: addiu       $v1, $v1, -0x3340
    ctx->r3 = ADD32(ctx->r3, -0X3340);
    // 0x80216050: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x80216054: addiu       $t5, $zero, 0xA0
    ctx->r13 = ADD32(0, 0XA0);
    // 0x80216058: addiu       $t2, $v1, 0x7FFF
    ctx->r10 = ADD32(ctx->r3, 0X7FFF);
    // 0x8021605C: lbu         $v0, 0x10($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X10);
    // 0x80216060: slti        $at, $v0, 0x91
    ctx->r1 = SIGNED(ctx->r2) < 0X91 ? 1 : 0;
    // 0x80216064: beq         $at, $zero, L_80216074
    if (ctx->r1 == 0) {
        // 0x80216068: addiu       $t4, $v0, 0x10
        ctx->r12 = ADD32(ctx->r2, 0X10);
            goto L_80216074;
    }
    // 0x80216068: addiu       $t4, $v0, 0x10
    ctx->r12 = ADD32(ctx->r2, 0X10);
    // 0x8021606C: b           L_80216078
    // 0x80216070: sb          $t4, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r12;
        goto L_80216078;
    // 0x80216070: sb          $t4, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r12;
L_80216074:
    // 0x80216074: sb          $t5, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r13;
L_80216078:
    // 0x80216078: lbu         $t6, 0x10($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X10);
    // 0x8021607C: lw          $t7, 0xE8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE8);
    // 0x80216080: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x80216084: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80216088: sb          $t6, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r14;
    // 0x8021608C: lw          $v0, -0x3A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A38);
    // 0x80216090: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x80216094: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80216098: lhu         $t8, 0x307A($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X307A);
    // 0x8021609C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x802160A0: bnel        $t9, $zero, L_802160BC
    if (ctx->r25 != 0) {
        // 0x802160A4: lbu         $t2, 0x2E23($t2)
        ctx->r10 = MEM_BU(ctx->r10, 0X2E23);
            goto L_802160BC;
    }
    goto skip_8;
    // 0x802160A4: lbu         $t2, 0x2E23($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2E23);
    skip_8:
    // 0x802160A8: lhu         $t0, 0x307C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X307C);
    // 0x802160AC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x802160B0: bne         $t1, $zero, L_802160D0
    if (ctx->r9 != 0) {
        // 0x802160B4: nop
    
            goto L_802160D0;
    }
    // 0x802160B4: nop

    // 0x802160B8: lbu         $t2, 0x2E23($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X2E23);
L_802160BC:
    // 0x802160BC: addiu       $t3, $v1, 0x7FFF
    ctx->r11 = ADD32(ctx->r3, 0X7FFF);
    // 0x802160C0: bne         $t2, $zero, L_802160D0
    if (ctx->r10 != 0) {
        // 0x802160C4: nop
    
            goto L_802160D0;
    }
    // 0x802160C4: nop

    // 0x802160C8: lhu         $t3, 0x2E17($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X2E17);
    // 0x802160CC: beq         $t3, $zero, L_80216168
    if (ctx->r11 == 0) {
        // 0x802160D0: lui         $a0, 0x8015
        ctx->r4 = S32(0X8015 << 16);
            goto L_80216168;
    }
L_802160D0:
    // 0x802160D0: lui         $a0, 0x8015
    ctx->r4 = S32(0X8015 << 16);
    // 0x802160D4: addiu       $a0, $a0, -0x3340
    ctx->r4 = ADD32(ctx->r4, -0X3340);
    // 0x802160D8: addiu       $at, $a0, 0x7FFF
    ctx->r1 = ADD32(ctx->r4, 0X7FFF);
    // 0x802160DC: sb          $zero, 0x78B5($at)
    MEM_B(0X78B5, ctx->r1) = 0;
    // 0x802160E0: lw          $t4, 0xDC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XDC);
    // 0x802160E4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802160E8: b           L_80216168
    // 0x802160EC: sw          $t5, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r13;
        goto L_80216168;
    // 0x802160EC: sw          $t5, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r13;
L_802160F0:
    // 0x802160F0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x802160F4: jal         0x80216228
    // 0x802160F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80216228_5D16F8(rdram, ctx);
        goto after_16;
    // 0x802160F8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_16:
    // 0x802160FC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80216100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80216104: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80216108: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x8021610C: lbu         $v0, 0x10($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X10);
    // 0x80216110: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80216114: bne         $at, $zero, L_80216124
    if (ctx->r1 != 0) {
        // 0x80216118: addiu       $t6, $v0, -0x10
        ctx->r14 = ADD32(ctx->r2, -0X10);
            goto L_80216124;
    }
    // 0x80216118: addiu       $t6, $v0, -0x10
    ctx->r14 = ADD32(ctx->r2, -0X10);
    // 0x8021611C: b           L_80216138
    // 0x80216120: sb          $t6, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r14;
        goto L_80216138;
    // 0x80216120: sb          $t6, 0x10($a3)
    MEM_B(0X10, ctx->r7) = ctx->r14;
L_80216124:
    // 0x80216124: sb          $zero, 0x10($a3)
    MEM_B(0X10, ctx->r7) = 0;
    // 0x80216128: lw          $t7, 0xE0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XE0);
    // 0x8021612C: sw          $a2, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r6;
    // 0x80216130: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x80216134: sb          $zero, 0x10($t7)
    MEM_B(0X10, ctx->r15) = 0;
L_80216138:
    // 0x80216138: lbu         $t8, 0x10($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X10);
    // 0x8021613C: lw          $t9, 0xE8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XE8);
    // 0x80216140: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80216144: lui         $t1, 0x4
    ctx->r9 = S32(0X4 << 16);
    // 0x80216148: sb          $t8, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r24;
    // 0x8021614C: lw          $t0, -0x3A38($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3A38);
    // 0x80216150: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80216154: lhu         $t1, -0x4F6E($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X4F6E);
    // 0x80216158: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x8021615C: beql        $t2, $zero, L_8021616C
    if (ctx->r10 == 0) {
        // 0x80216160: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8021616C;
    }
    goto skip_9;
    // 0x80216160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x80216164: sw          $t3, 0xDC($s0)
    MEM_W(0XDC, ctx->r16) = ctx->r11;
L_80216168:
    // 0x80216168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021616C:
    // 0x8021616C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80216170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80216174: jr          $ra
    // 0x80216178: nop

    TRACE_RETURN()
    return;
    // 0x80216178: nop

;}
RECOMP_FUNC void func_8021F2FC_5DA7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021F2FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F300: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F304: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8021F308: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021F30C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021F310: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x8021F314: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021F318: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021F31C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021F320: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    // 0x8021F324: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8021F328: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8021F32C: bc1fl       L_8021F344
    if (!c1cs) {
        // 0x8021F330: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_8021F344;
    }
    goto skip_0;
    // 0x8021F330: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_0:
    // 0x8021F334: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8021F338: b           L_8021F344
    // 0x8021F33C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F344;
    // 0x8021F33C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F340: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_8021F344:
    // 0x8021F344: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F348: nop

    // 0x8021F34C: bc1fl       L_8021F3DC
    if (!c1cs) {
        // 0x8021F350: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F3DC;
    }
    goto skip_1;
    // 0x8021F350: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_1:
    // 0x8021F354: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021F358: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021F35C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x8021F360: nop

    // 0x8021F364: bc1fl       L_8021F37C
    if (!c1cs) {
        // 0x8021F368: sub.s       $f2, $f16, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
            goto L_8021F37C;
    }
    goto skip_2;
    // 0x8021F368: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    skip_2:
    // 0x8021F36C: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8021F370: b           L_8021F37C
    // 0x8021F374: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F37C;
    // 0x8021F374: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F378: sub.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f16.fl - ctx->f0.fl;
L_8021F37C:
    // 0x8021F37C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F380: nop

    // 0x8021F384: bc1fl       L_8021F3DC
    if (!c1cs) {
        // 0x8021F388: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F3DC;
    }
    goto skip_3;
    // 0x8021F388: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_3:
    // 0x8021F38C: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021F390: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x8021F394: nop

    // 0x8021F398: bc1fl       L_8021F3B0
    if (!c1cs) {
        // 0x8021F39C: sub.s       $f2, $f14, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
            goto L_8021F3B0;
    }
    goto skip_4;
    // 0x8021F39C: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    skip_4:
    // 0x8021F3A0: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
    // 0x8021F3A4: b           L_8021F3B0
    // 0x8021F3A8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_8021F3B0;
    // 0x8021F3A8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8021F3AC: sub.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f0.fl;
L_8021F3B0:
    // 0x8021F3B0: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x8021F3B4: nop

    // 0x8021F3B8: bc1fl       L_8021F3DC
    if (!c1cs) {
        // 0x8021F3BC: lwc1        $f16, 0x30($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
            goto L_8021F3DC;
    }
    goto skip_5;
    // 0x8021F3BC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    skip_5:
    // 0x8021F3C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8021F3C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021F3C8: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x8021F3CC: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x8021F3D0: b           L_8021F408
    // 0x8021F3D4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
        goto L_8021F408;
    // 0x8021F3D4: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x8021F3D8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
L_8021F3DC:
    // 0x8021F3DC: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021F3E0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8021F3E4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021F3E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8021F3EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8021F3F0: jal         0x8021EE50
    // 0x8021F3F4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    func_8021EE50_5DA320(rdram, ctx);
        goto after_0;
    // 0x8021F3F4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8021F3F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8021F3FC: jal         0x8021F1F8
    // 0x8021F400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8021F1F8_5DA6C8(rdram, ctx);
        goto after_1;
    // 0x8021F400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8021F404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021F408:
    // 0x8021F408: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021F410: jr          $ra
    // 0x8021F414: nop

    TRACE_RETURN()
    return;
    // 0x8021F414: nop

;}
RECOMP_FUNC void func_8020DEF4_5C93C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020DEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020DEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020DEFC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020DF00: jal         0x80013AC4
    // 0x8020DF04: addiu       $a0, $a0, -0x3D2C
    ctx->r4 = ADD32(ctx->r4, -0X3D2C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020DF04: addiu       $a0, $a0, -0x3D2C
    ctx->r4 = ADD32(ctx->r4, -0X3D2C);
    after_0:
    // 0x8020DF08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020DF0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020DF10: jr          $ra
    // 0x8020DF14: nop

    TRACE_RETURN()
    return;
    // 0x8020DF14: nop

;}
RECOMP_FUNC void func_8020FA60_5CAF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020FA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020FA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020FA68: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020FA6C: jal         0x80013AC4
    // 0x8020FA70: addiu       $a0, $a0, -0x2A78
    ctx->r4 = ADD32(ctx->r4, -0X2A78);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020FA70: addiu       $a0, $a0, -0x2A78
    ctx->r4 = ADD32(ctx->r4, -0X2A78);
    after_0:
    // 0x8020FA74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020FA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020FA7C: jr          $ra
    // 0x8020FA80: nop

    TRACE_RETURN()
    return;
    // 0x8020FA80: nop

;}
RECOMP_FUNC void func_80214498_5CF968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021449C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802144A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802144A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802144A8: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x802144AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x802144B0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802144B4: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x802144B8: beq         $t6, $zero, L_802144D8
    if (ctx->r14 == 0) {
        // 0x802144BC: addiu       $a0, $a0, 0x45F0
        ctx->r4 = ADD32(ctx->r4, 0X45F0);
            goto L_802144D8;
    }
    // 0x802144BC: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    // 0x802144C0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x802144C4: addiu       $t9, $t9, 0x521C
    ctx->r25 = ADD32(ctx->r25, 0X521C);
    // 0x802144C8: jalr        $t9
    // 0x802144CC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802144CC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x802144D0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x802144D4: lw          $v0, 0x68($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X68);
L_802144D8:
    // 0x802144D8: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x802144DC: beql        $t7, $zero, L_80214500
    if (ctx->r15 == 0) {
        // 0x802144E0: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_80214500;
    }
    goto skip_0;
    // 0x802144E0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
    // 0x802144E4: lwc1        $f4, 0x78($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X78);
    // 0x802144E8: lwc1        $f8, 0x80($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X80);
    // 0x802144EC: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x802144F0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802144F4: swc1        $f6, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f6.u32l;
    // 0x802144F8: swc1        $f10, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f10.u32l;
    // 0x802144FC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_80214500:
    // 0x80214500: lwc1        $f16, 0x7C($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x80214504: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80214508: nop

    // 0x8021450C: bc1fl       L_80214570
    if (!c1cs) {
        // 0x80214510: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_80214570;
    }
    goto skip_1;
    // 0x80214510: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_1:
    // 0x80214514: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x80214518: andi        $t0, $t8, 0x1000
    ctx->r8 = ctx->r24 & 0X1000;
    // 0x8021451C: beql        $t0, $zero, L_80214570
    if (ctx->r8 == 0) {
        // 0x80214520: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_80214570;
    }
    goto skip_2;
    // 0x80214520: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_2:
    // 0x80214524: lwc1        $f18, 0xD0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0XD0);
    // 0x80214528: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021452C: ldc1        $f6, -0x6088($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X6088);
    // 0x80214530: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80214534: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80214538: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8021453C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80214540: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80214544: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80214548: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8021454C: swc1        $f0, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f0.u32l;
    // 0x80214550: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x80214554: nop

    // 0x80214558: bc1fl       L_80214570
    if (!c1cs) {
        // 0x8021455C: lhu         $v0, 0x8A($a1)
        ctx->r2 = MEM_HU(ctx->r5, 0X8A);
            goto L_80214570;
    }
    goto skip_3;
    // 0x8021455C: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
    skip_3:
    // 0x80214560: swc1        $f2, 0x80($a1)
    MEM_W(0X80, ctx->r5) = ctx->f2.u32l;
    // 0x80214564: swc1        $f2, 0x7C($a1)
    MEM_W(0X7C, ctx->r5) = ctx->f2.u32l;
    // 0x80214568: swc1        $f2, 0x78($a1)
    MEM_W(0X78, ctx->r5) = ctx->f2.u32l;
    // 0x8021456C: lhu         $v0, 0x8A($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X8A);
L_80214570:
    // 0x80214570: lwc1        $f18, 0x7C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X7C);
    // 0x80214574: slti        $v1, $v0, 0x78
    ctx->r3 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x80214578: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x8021457C: sh          $t1, 0x8A($a1)
    MEM_H(0X8A, ctx->r5) = ctx->r9;
    // 0x80214580: beq         $v1, $zero, L_802145E0
    if (ctx->r3 == 0) {
        // 0x80214584: swc1        $f18, 0xD0($a1)
        MEM_W(0XD0, ctx->r5) = ctx->f18.u32l;
            goto L_802145E0;
    }
    // 0x80214584: swc1        $f18, 0xD0($a1)
    MEM_W(0XD0, ctx->r5) = ctx->f18.u32l;
    // 0x80214588: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8021458C: bgez        $t2, L_802145A0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80214590: andi        $t3, $t2, 0x1
        ctx->r11 = ctx->r10 & 0X1;
            goto L_802145A0;
    }
    // 0x80214590: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80214594: beq         $t3, $zero, L_802145A0
    if (ctx->r11 == 0) {
        // 0x80214598: nop
    
            goto L_802145A0;
    }
    // 0x80214598: nop

    // 0x8021459C: addiu       $t3, $t3, -0x2
    ctx->r11 = ADD32(ctx->r11, -0X2);
L_802145A0:
    // 0x802145A0: bgtzl       $t3, L_802145C0
    if (SIGNED(ctx->r11) > 0) {
        // 0x802145A4: lw          $t6, 0x60($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X60);
            goto L_802145C0;
    }
    goto skip_4;
    // 0x802145A4: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    skip_4:
    // 0x802145A8: lw          $t4, 0x60($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X60);
    // 0x802145AC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x802145B0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x802145B4: b           L_802145C8
    // 0x802145B8: sw          $t5, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r13;
        goto L_802145C8;
    // 0x802145B8: sw          $t5, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r13;
    // 0x802145BC: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
L_802145C0:
    // 0x802145C0: ori         $t9, $t6, 0x20
    ctx->r25 = ctx->r14 | 0X20;
    // 0x802145C4: sw          $t9, 0x60($a1)
    MEM_W(0X60, ctx->r5) = ctx->r25;
L_802145C8:
    // 0x802145C8: lhu         $t7, 0x8A($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8A);
    // 0x802145CC: bnel        $t7, $zero, L_802145E4
    if (ctx->r15 != 0) {
        // 0x802145D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802145E4;
    }
    goto skip_5;
    // 0x802145D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x802145D4: lw          $t8, 0x68($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X68);
    // 0x802145D8: ori         $t0, $t8, 0x2
    ctx->r8 = ctx->r24 | 0X2;
    // 0x802145DC: sw          $t0, 0x68($a1)
    MEM_W(0X68, ctx->r5) = ctx->r8;
L_802145E0:
    // 0x802145E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802145E4:
    // 0x802145E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802145E8: jr          $ra
    // 0x802145EC: nop

    TRACE_RETURN()
    return;
    // 0x802145EC: nop

;}
RECOMP_FUNC void func_8020EC98_5CA168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EC98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EC9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020ECA0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020ECA4: jal         0x80013AC4
    // 0x8020ECA8: addiu       $a0, $a0, -0x344C
    ctx->r4 = ADD32(ctx->r4, -0X344C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020ECA8: addiu       $a0, $a0, -0x344C
    ctx->r4 = ADD32(ctx->r4, -0X344C);
    after_0:
    // 0x8020ECAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020ECB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020ECB4: jr          $ra
    // 0x8020ECB8: nop

    TRACE_RETURN()
    return;
    // 0x8020ECB8: nop

;}
RECOMP_FUNC void func_80221964_5DCE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221964: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80221968: lw          $t6, -0x3A38($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A38);
    // 0x8022196C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80221970: lui         $t7, 0x4
    ctx->r15 = S32(0X4 << 16);
    // 0x80221974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80221978: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8022197C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80221980: lbu         $t7, -0x5206($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X5206);
    // 0x80221984: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80221988: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8022198C: bne         $t7, $at, L_802219BC
    if (ctx->r15 != ctx->r1) {
        // 0x80221990: lui         $a0, 0x8022
        ctx->r4 = S32(0X8022 << 16);
            goto L_802219BC;
    }
    // 0x80221990: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221994: addiu       $a0, $a0, 0x1894
    ctx->r4 = ADD32(ctx->r4, 0X1894);
    // 0x80221998: jal         0x8003521C
    // 0x8022199C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x8022199C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x802219A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802219A4: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x802219A8: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x802219AC: jalr        $t9
    // 0x802219B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x802219B0: nop

    after_1:
    // 0x802219B4: b           L_802219C8
    // 0x802219B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802219C8;
    // 0x802219B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802219BC:
    // 0x802219BC: jal         0x80035020
    // 0x802219C0: nop

    func_80035020_35C20(rdram, ctx);
        goto after_2;
    // 0x802219C0: nop

    after_2:
    // 0x802219C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802219C8:
    // 0x802219C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802219CC: jr          $ra
    // 0x802219D0: nop

    TRACE_RETURN()
    return;
    // 0x802219D0: nop

;}
RECOMP_FUNC void func_80213EE8_5CF3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80213EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80213EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80213EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80213EF4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80213EF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80213EFC: jal         0x8003521C
    // 0x80213F00: addiu       $a0, $a0, 0x3EDC
    ctx->r4 = ADD32(ctx->r4, 0X3EDC);
    func_8003521C_35E1C(rdram, ctx);
        goto after_0;
    // 0x80213F00: addiu       $a0, $a0, 0x3EDC
    ctx->r4 = ADD32(ctx->r4, 0X3EDC);
    after_0:
    // 0x80213F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80213F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80213F0C: jr          $ra
    // 0x80213F10: nop

    TRACE_RETURN()
    return;
    // 0x80213F10: nop

;}
RECOMP_FUNC void func_80216E1C_5D22EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80216E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80216E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80216E24: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80216E28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80216E2C: lwc1        $f0, -0x5AF0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5AF0);
    // 0x80216E30: lw          $a1, 0x18($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X18);
    // 0x80216E34: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x80216E38: swc1        $f0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f0.u32l;
    // 0x80216E3C: jal         0x80216CE0
    // 0x80216E40: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    func_80216CE0_5D21B0(rdram, ctx);
        goto after_0;
    // 0x80216E40: swc1        $f0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f0.u32l;
    after_0:
    // 0x80216E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80216E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80216E4C: jr          $ra
    // 0x80216E50: nop

    TRACE_RETURN()
    return;
    // 0x80216E50: nop

;}
RECOMP_FUNC void func_80214FE4_5D04B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80214FE4: jr          $ra
    // 0x80214FE8: nop

    TRACE_RETURN()
    return;
    // 0x80214FE8: nop

;}
RECOMP_FUNC void func_802105C4_5CBA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802105C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802105C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802105CC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802105D0: jal         0x80013AC4
    // 0x802105D4: addiu       $a0, $a0, -0x1E50
    ctx->r4 = ADD32(ctx->r4, -0X1E50);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802105D4: addiu       $a0, $a0, -0x1E50
    ctx->r4 = ADD32(ctx->r4, -0X1E50);
    after_0:
    // 0x802105D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802105DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802105E0: jr          $ra
    // 0x802105E4: nop

    TRACE_RETURN()
    return;
    // 0x802105E4: nop

;}
RECOMP_FUNC void func_802108DC_5CBDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802108DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802108E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802108E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802108E8: jal         0x80013AC4
    // 0x802108EC: addiu       $a0, $a0, -0x1BE4
    ctx->r4 = ADD32(ctx->r4, -0X1BE4);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802108EC: addiu       $a0, $a0, -0x1BE4
    ctx->r4 = ADD32(ctx->r4, -0X1BE4);
    after_0:
    // 0x802108F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802108F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802108F8: jr          $ra
    // 0x802108FC: nop

    TRACE_RETURN()
    return;
    // 0x802108FC: nop

;}
RECOMP_FUNC void func_8020EED8_5CA3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020EED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020EEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020EEE0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020EEE4: jal         0x80013AC4
    // 0x8020EEE8: addiu       $a0, $a0, -0x325C
    ctx->r4 = ADD32(ctx->r4, -0X325C);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020EEE8: addiu       $a0, $a0, -0x325C
    ctx->r4 = ADD32(ctx->r4, -0X325C);
    after_0:
    // 0x8020EEEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020EEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020EEF4: jr          $ra
    // 0x8020EEF8: nop

    TRACE_RETURN()
    return;
    // 0x8020EEF8: nop

;}
RECOMP_FUNC void func_80215094_5D0564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80215094: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80215098: jr          $ra
    // 0x8021509C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8021509C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80221198_5DC668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80221198: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022119C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802211A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802211A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x802211A8: jal         0x80220FF0
    // 0x802211AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_0;
    // 0x802211AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x802211B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802211B4: lui         $t6, 0x8020
    ctx->r14 = S32(0X8020 << 16);
    // 0x802211B8: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x802211BC: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x802211C0: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802211C4: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    // 0x802211C8: lw          $t6, -0x39FC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X39FC);
    // 0x802211CC: lui         $at, 0xD
    ctx->r1 = S32(0XD << 16);
    // 0x802211D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802211D4: sw          $t6, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = ctx->r14;
    // 0x802211D8: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x802211DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802211E0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802211E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x802211E8: sw          $s0, -0x764($at)
    MEM_W(-0X764, ctx->r1) = ctx->r16;
    // 0x802211EC: jal         0x80221C0C
    // 0x802211F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_1;
    // 0x802211F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802211F4: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x802211F8: addiu       $t8, $t8, 0x1028
    ctx->r24 = ADD32(ctx->r24, 0X1028);
    // 0x802211FC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80221200: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x80221204: jal         0x8003521C
    // 0x80221208: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_2;
    // 0x80221208: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    after_2:
    // 0x8022120C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80221210: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80221214: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80221218: jr          $ra
    // 0x8022121C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022121C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80225158_5E0628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225158: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022515C: lw          $v0, -0x4BF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BF0);
    // 0x80225160: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8022516C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225170: bne         $v0, $at, L_80225180
    if (ctx->r2 != ctx->r1) {
        // 0x80225174: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80225180;
    }
    // 0x80225174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225178: b           L_8022523C
    // 0x8022517C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8022523C;
    // 0x8022517C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225180:
    // 0x80225180: bne         $v0, $zero, L_802251DC
    if (ctx->r2 != 0) {
        // 0x80225184: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802251DC;
    }
    // 0x80225184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80225188: jal         0x80224EF8
    // 0x8022518C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80224EF8_5E03C8(rdram, ctx);
        goto after_0;
    // 0x8022518C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80225190: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80225194: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225198: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022519C: addiu       $a1, $a1, -0x53F4
    ctx->r5 = ADD32(ctx->r5, -0X53F4);
    // 0x802251A0: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x802251A4: jal         0x80048984
    // 0x802251A8: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x802251A8: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_1:
    // 0x802251AC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802251B0: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x802251B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802251B8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x802251BC: jal         0x800042AC
    // 0x802251C0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x802251C0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_2:
    // 0x802251C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802251C8: lhu         $a1, 0xEA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XEA);
    // 0x802251CC: jal         0x8022634C
    // 0x802251D0: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    func_8022634C_5E181C(rdram, ctx);
        goto after_3;
    // 0x802251D0: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    after_3:
    // 0x802251D4: b           L_80225240
    // 0x802251D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225240;
    // 0x802251D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802251DC:
    // 0x802251DC: bnel        $v0, $at, L_8022523C
    if (ctx->r2 != ctx->r1) {
        // 0x802251E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022523C;
    }
    goto skip_0;
    // 0x802251E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802251E4: jal         0x80225000
    // 0x802251E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80225000_5E04D0(rdram, ctx);
        goto after_4;
    // 0x802251E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802251EC: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x802251F0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802251F4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802251F8: addiu       $a1, $a1, -0x53EC
    ctx->r5 = ADD32(ctx->r5, -0X53EC);
    // 0x802251FC: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x80225200: jal         0x80048984
    // 0x80225204: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x80225204: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_5:
    // 0x80225208: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022520C: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x80225210: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80225214: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80225218: jal         0x800042AC
    // 0x8022521C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_6;
    // 0x8022521C: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_6:
    // 0x80225220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80225224: lhu         $a1, 0xEA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XEA);
    // 0x80225228: jal         0x8022634C
    // 0x8022522C: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    func_8022634C_5E181C(rdram, ctx);
        goto after_7;
    // 0x8022522C: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    after_7:
    // 0x80225230: b           L_80225240
    // 0x80225234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225240;
    // 0x80225234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8022523C:
    // 0x8022523C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225240:
    // 0x80225240: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225248: jr          $ra
    // 0x8022524C: nop

    TRACE_RETURN()
    return;
    // 0x8022524C: nop

;}
RECOMP_FUNC void func_802121EC_5CD6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802121EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802121F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802121F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802121F8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x802121FC: lbu         $t6, 0xD0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XD0);
    // 0x80212200: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x80212204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80212208: addiu       $t7, $t6, -0x10
    ctx->r15 = ADD32(ctx->r14, -0X10);
    // 0x8021220C: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x80212210: beq         $t8, $zero, L_80212234
    if (ctx->r24 == 0) {
        // 0x80212214: sb          $t7, 0xD0($a0)
        MEM_B(0XD0, ctx->r4) = ctx->r15;
            goto L_80212234;
    }
    // 0x80212214: sb          $t7, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r15;
    // 0x80212218: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x8021221C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80212220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80212224: jal         0x8021A26C
    // 0x80212228: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_0;
    // 0x80212228: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8021222C: b           L_8021227C
    // 0x80212230: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
        goto L_8021227C;
    // 0x80212230: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
L_80212234:
    // 0x80212234: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x80212238: beq         $t9, $zero, L_80212260
    if (ctx->r25 == 0) {
        // 0x8021223C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80212260;
    }
    // 0x8021223C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80212240: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x80212244: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80212248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021224C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x80212250: jal         0x8021A26C
    // 0x80212254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021A26C_5D573C(rdram, ctx);
        goto after_1;
    // 0x80212254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80212258: b           L_8021227C
    // 0x8021225C: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
        goto L_8021227C;
    // 0x8021225C: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
L_80212260:
    // 0x80212260: lbu         $a1, 0xD0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD0);
    // 0x80212264: addiu       $t0, $zero, 0xFA
    ctx->r8 = ADD32(0, 0XFA);
    // 0x80212268: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8021226C: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x80212270: jal         0x8021A26C
    // 0x80212274: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    func_8021A26C_5D573C(rdram, ctx);
        goto after_2;
    // 0x80212274: addiu       $a3, $zero, 0xFA
    ctx->r7 = ADD32(0, 0XFA);
    after_2:
    // 0x80212278: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
L_8021227C:
    // 0x8021227C: bnel        $t1, $zero, L_80212290
    if (ctx->r9 != 0) {
        // 0x80212280: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80212290;
    }
    goto skip_0;
    // 0x80212280: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80212284: jal         0x80034ED4
    // 0x80212288: nop

    func_80034ED4_35AD4(rdram, ctx);
        goto after_3;
    // 0x80212288: nop

    after_3:
    // 0x8021228C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80212290:
    // 0x80212290: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80212294: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80212298: jr          $ra
    // 0x8021229C: nop

    TRACE_RETURN()
    return;
    // 0x8021229C: nop

;}
RECOMP_FUNC void func_8021E924_5D9DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021E924: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8021E928: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x8021E92C: lw          $v1, 0x84($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X84);
    // 0x8021E930: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8021E934: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8021E938: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021E93C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021E940: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021E944: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8021E948: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021E94C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8021E950: nop

    // 0x8021E954: bc1fl       L_8021E9A0
    if (!c1cs) {
        // 0x8021E958: lwc1        $f10, 0x28($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8021E9A0;
    }
    goto skip_0;
    // 0x8021E958: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x8021E95C: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021E960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021E964: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021E968: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8021E96C: c.eq.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl == ctx->f6.fl;
    // 0x8021E970: nop

    // 0x8021E974: bc1fl       L_8021E9A0
    if (!c1cs) {
        // 0x8021E978: lwc1        $f10, 0x28($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8021E9A0;
    }
    goto skip_1;
    // 0x8021E978: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x8021E97C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E980: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E984: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x8021E988: nop

    // 0x8021E98C: bc1fl       L_8021E9A0
    if (!c1cs) {
        // 0x8021E990: lwc1        $f10, 0x28($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
            goto L_8021E9A0;
    }
    goto skip_2;
    // 0x8021E990: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    skip_2:
    // 0x8021E994: b           L_8021EC10
    // 0x8021E998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021EC10;
    // 0x8021E998: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021E99C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
L_8021E9A0:
    // 0x8021E9A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021E9A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021E9A8: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8021E9AC: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021E9B0: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021E9B4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021E9B8: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021E9BC: bc1f        L_8021E9D4
    if (!c1cs) {
        // 0x8021E9C0: add.s       $f14, $f8, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
            goto L_8021E9D4;
    }
    // 0x8021E9C0: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021E9C4: sub.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8021E9C8: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x8021E9CC: b           L_8021E9E0
    // 0x8021E9D0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_8021E9E0;
    // 0x8021E9D0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_8021E9D4:
    // 0x8021E9D4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021E9D8: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x8021E9DC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
L_8021E9E0:
    // 0x8021E9E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021E9E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8021E9E8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8021E9EC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021E9F0: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x8021E9F4: nop

    // 0x8021E9F8: bc1fl       L_8021EA70
    if (!c1cs) {
        // 0x8021E9FC: sub.s       $f6, $f18, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021EA70;
    }
    goto skip_3;
    // 0x8021E9FC: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    skip_3:
    // 0x8021EA00: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8021EA04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021EA08: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8021EA0C: bc1fl       L_8021EA24
    if (!c1cs) {
        // 0x8021EA10: sub.s       $f0, $f14, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
            goto L_8021EA24;
    }
    goto skip_4;
    // 0x8021EA10: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    skip_4:
    // 0x8021EA14: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021EA18: b           L_8021EA24
    // 0x8021EA1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021EA24;
    // 0x8021EA1C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021EA20: sub.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f12.fl;
L_8021EA24:
    // 0x8021EA24: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021EA28: nop

    // 0x8021EA2C: bc1fl       L_8021EA70
    if (!c1cs) {
        // 0x8021EA30: sub.s       $f6, $f18, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021EA70;
    }
    goto skip_5;
    // 0x8021EA30: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    skip_5:
    // 0x8021EA34: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8021EA38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021EA3C: bc1fl       L_8021EA54
    if (!c1cs) {
        // 0x8021EA40: sub.s       $f0, $f18, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021EA54;
    }
    goto skip_6;
    // 0x8021EA40: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    skip_6:
    // 0x8021EA44: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x8021EA48: b           L_8021EA54
    // 0x8021EA4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8021EA54;
    // 0x8021EA4C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8021EA50: sub.s       $f0, $f18, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f16.fl;
L_8021EA54:
    // 0x8021EA54: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x8021EA58: nop

    // 0x8021EA5C: bc1fl       L_8021EA70
    if (!c1cs) {
        // 0x8021EA60: sub.s       $f6, $f18, $f16
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
            goto L_8021EA70;
    }
    goto skip_7;
    // 0x8021EA60: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    skip_7:
    // 0x8021EA64: b           L_8021EC10
    // 0x8021EA68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021EC10;
    // 0x8021EA68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021EA6C: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
L_8021EA70:
    // 0x8021EA70: andi        $a1, $a0, 0x3FF
    ctx->r5 = ctx->r4 & 0X3FF;
    // 0x8021EA74: sltiu       $at, $a1, 0x200
    ctx->r1 = ctx->r5 < 0X200 ? 1 : 0;
    // 0x8021EA78: sub.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021EA7C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x8021EA80: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8021EA84: addiu       $t6, $a1, -0x200
    ctx->r14 = ADD32(ctx->r5, -0X200);
    // 0x8021EA88: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8021EA8C: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8021EA90: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8021EA94: mul.s       $f10, $f6, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8021EA98: nop

    // 0x8021EA9C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8021EAA0: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021EAA4: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8021EAA8: beq         $at, $zero, L_8021EB60
    if (ctx->r1 == 0) {
        // 0x8021EAAC: sqrt.s      $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
            goto L_8021EB60;
    }
    // 0x8021EAAC: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x8021EAB0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8021EAB4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021EAB8: bgez        $a1, L_8021EAD0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8021EABC: cvt.d.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.d = CVT_D_W(ctx->f4.u32l);
            goto L_8021EAD0;
    }
    // 0x8021EABC: cvt.d.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.d = CVT_D_W(ctx->f4.u32l);
    // 0x8021EAC0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021EAC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021EAC8: nop

    // 0x8021EACC: add.d       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f10.d + ctx->f8.d;
L_8021EAD0:
    // 0x8021EAD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021EAD4: ldc1        $f6, -0x5850($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X5850);
    // 0x8021EAD8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021EADC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021EAE0: mul.d       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x8021EAE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021EAE8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021EAEC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8021EAF0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021EAF4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021EAF8: div.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8021EAFC: div.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021EB00: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x8021EB04: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x8021EB08: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8021EB0C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8021EB10: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8021EB14: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021EB18: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021EB1C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021EB20: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8021EB24: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8021EB28: div.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8021EB2C: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8021EB30: nop

    // 0x8021EB34: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8021EB38: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x8021EB3C: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021EB40: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021EB44: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021EB48: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021EB4C: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021EB50: nop

    // 0x8021EB54: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8021EB58: b           L_8021EC0C
    // 0x8021EB5C: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
        goto L_8021EC0C;
    // 0x8021EB5C: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
L_8021EB60:
    // 0x8021EB60: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8021EB64: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8021EB68: bgez        $t6, L_8021EB80
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8021EB6C: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_8021EB80;
    }
    // 0x8021EB6C: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x8021EB70: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021EB74: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021EB78: nop

    // 0x8021EB7C: add.d       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f10.d + ctx->f4.d;
L_8021EB80:
    // 0x8021EB80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8021EB84: ldc1        $f8, -0x5848($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X5848);
    // 0x8021EB88: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8021EB8C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8021EB90: mul.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f8.d);
    // 0x8021EB94: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8021EB98: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8021EB9C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8021EBA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021EBA4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8021EBA8: div.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f4.d);
    // 0x8021EBAC: div.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8021EBB0: sub.d       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f8.d - ctx->f10.d;
    // 0x8021EBB4: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x8021EBB8: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021EBBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021EBC0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8021EBC4: swc1        $f10, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f10.u32l;
    // 0x8021EBC8: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021EBCC: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021EBD0: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8021EBD4: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021EBD8: div.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021EBDC: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8021EBE0: nop

    // 0x8021EBE4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8021EBE8: swc1        $f10, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f10.u32l;
    // 0x8021EBEC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021EBF0: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021EBF4: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021EBF8: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021EBFC: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8021EC00: nop

    // 0x8021EC04: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8021EC08: swc1        $f4, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f4.u32l;
L_8021EC0C:
    // 0x8021EC0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8021EC10:
    // 0x8021EC10: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x8021EC14: jr          $ra
    // 0x8021EC18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8021EC18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8020F3A0_5CA870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F3A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F3A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F3A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F3AC: jal         0x80013AC4
    // 0x8020F3B0: addiu       $a0, $a0, -0x2F38
    ctx->r4 = ADD32(ctx->r4, -0X2F38);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F3B0: addiu       $a0, $a0, -0x2F38
    ctx->r4 = ADD32(ctx->r4, -0X2F38);
    after_0:
    // 0x8020F3B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F3B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F3BC: jr          $ra
    // 0x8020F3C0: nop

    TRACE_RETURN()
    return;
    // 0x8020F3C0: nop

;}
RECOMP_FUNC void func_80225060_5E0530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225060: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225064: lw          $v0, -0x4BF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4BF0);
    // 0x80225068: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022506C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225070: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80225074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80225078: bne         $v0, $at, L_80225088
    if (ctx->r2 != ctx->r1) {
        // 0x8022507C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80225088;
    }
    // 0x8022507C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225080: b           L_80225144
    // 0x80225084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80225144;
    // 0x80225084: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225088:
    // 0x80225088: bne         $v0, $zero, L_802250E4
    if (ctx->r2 != 0) {
        // 0x8022508C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802250E4;
    }
    // 0x8022508C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80225090: jal         0x80224EF8
    // 0x80225094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80224EF8_5E03C8(rdram, ctx);
        goto after_0;
    // 0x80225094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80225098: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8022509C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802250A0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802250A4: addiu       $a1, $a1, -0x5404
    ctx->r5 = ADD32(ctx->r5, -0X5404);
    // 0x802250A8: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x802250AC: jal         0x80048984
    // 0x802250B0: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_1;
    // 0x802250B0: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_1:
    // 0x802250B4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802250B8: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x802250BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802250C0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x802250C4: jal         0x800042AC
    // 0x802250C8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_2;
    // 0x802250C8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_2:
    // 0x802250CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802250D0: lhu         $a1, 0xEA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XEA);
    // 0x802250D4: jal         0x80226580
    // 0x802250D8: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    func_80226580_5E1A50(rdram, ctx);
        goto after_3;
    // 0x802250D8: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    after_3:
    // 0x802250DC: b           L_80225148
    // 0x802250E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225148;
    // 0x802250E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802250E4:
    // 0x802250E4: bnel        $v0, $at, L_80225144
    if (ctx->r2 != ctx->r1) {
        // 0x802250E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80225144;
    }
    goto skip_0;
    // 0x802250E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x802250EC: jal         0x80225000
    // 0x802250F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80225000_5E04D0(rdram, ctx);
        goto after_4;
    // 0x802250F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802250F4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x802250F8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802250FC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225100: addiu       $a1, $a1, -0x53FC
    ctx->r5 = ADD32(ctx->r5, -0X53FC);
    // 0x80225104: addiu       $a0, $a0, -0x4BE0
    ctx->r4 = ADD32(ctx->r4, -0X4BE0);
    // 0x80225108: jal         0x80048984
    // 0x8022510C: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x8022510C: lhu         $a2, 0xEA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XEA);
    after_5:
    // 0x80225110: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80225114: addiu       $a1, $a1, -0x4BE0
    ctx->r5 = ADD32(ctx->r5, -0X4BE0);
    // 0x80225118: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022511C: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80225120: jal         0x800042AC
    // 0x80225124: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_800042AC_4EAC(rdram, ctx);
        goto after_6;
    // 0x80225124: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_6:
    // 0x80225128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8022512C: lhu         $a1, 0xEA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XEA);
    // 0x80225130: jal         0x80226580
    // 0x80225134: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    func_80226580_5E1A50(rdram, ctx);
        goto after_7;
    // 0x80225134: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    after_7:
    // 0x80225138: b           L_80225148
    // 0x8022513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80225148;
    // 0x8022513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80225144:
    // 0x80225144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80225148:
    // 0x80225148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022514C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80225150: jr          $ra
    // 0x80225154: nop

    TRACE_RETURN()
    return;
    // 0x80225154: nop

;}
RECOMP_FUNC void func_80210318_5CB7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021031C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210320: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210324: jal         0x80013AC4
    // 0x80210328: addiu       $a0, $a0, -0x2118
    ctx->r4 = ADD32(ctx->r4, -0X2118);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210328: addiu       $a0, $a0, -0x2118
    ctx->r4 = ADD32(ctx->r4, -0X2118);
    after_0:
    // 0x8021032C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80210330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210334: jr          $ra
    // 0x80210338: nop

    TRACE_RETURN()
    return;
    // 0x80210338: nop

;}
RECOMP_FUNC void func_80210990_5CBE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80210990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80210994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80210998: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8021099C: jal         0x80013AC4
    // 0x802109A0: addiu       $a0, $a0, -0x1B58
    ctx->r4 = ADD32(ctx->r4, -0X1B58);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x802109A0: addiu       $a0, $a0, -0x1B58
    ctx->r4 = ADD32(ctx->r4, -0X1B58);
    after_0:
    // 0x802109A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802109A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802109AC: jr          $ra
    // 0x802109B0: nop

    TRACE_RETURN()
    return;
    // 0x802109B0: nop

;}
RECOMP_FUNC void func_8020E0C8_5C9598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020E0C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020E0CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020E0D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020E0D4: jal         0x80013AC4
    // 0x8020E0D8: addiu       $a0, $a0, -0x3B88
    ctx->r4 = ADD32(ctx->r4, -0X3B88);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020E0D8: addiu       $a0, $a0, -0x3B88
    ctx->r4 = ADD32(ctx->r4, -0X3B88);
    after_0:
    // 0x8020E0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020E0E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020E0E4: jr          $ra
    // 0x8020E0E8: nop

    TRACE_RETURN()
    return;
    // 0x8020E0E8: nop

;}
RECOMP_FUNC void func_80220A60_5DBF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80220A60: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80220A64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80220A68: lw          $s0, 0xB8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB8);
    // 0x80220A6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80220A70: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80220A74: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80220A78: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80220A7C: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80220A80: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x80220A84: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x80220A88: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
    // 0x80220A8C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80220A90: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80220A94: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x80220A98: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80220A9C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x80220AA0: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80220AA4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x80220AA8: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80220AAC: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80220AB0: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x80220AB4: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80220AB8: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80220ABC: sw          $t7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r15;
    // 0x80220AC0: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x80220AC4: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x80220AC8: lui         $t9, 0xF510
    ctx->r25 = S32(0XF510 << 16);
    // 0x80220ACC: sw          $t9, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r25;
    // 0x80220AD0: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x80220AD4: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x80220AD8: lw          $t9, 0xF0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF0);
    // 0x80220ADC: addiu       $t1, $s0, 0x30
    ctx->r9 = ADD32(ctx->r16, 0X30);
    // 0x80220AE0: andi        $t6, $t7, 0x3
    ctx->r14 = ctx->r15 & 0X3;
    // 0x80220AE4: andi        $t7, $t9, 0xF
    ctx->r15 = ctx->r25 & 0XF;
    // 0x80220AE8: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x80220AEC: sll         $t8, $t6, 18
    ctx->r24 = S32(ctx->r14 << 18);
    // 0x80220AF0: sll         $t6, $t7, 14
    ctx->r14 = S32(ctx->r15 << 14);
    // 0x80220AF4: andi        $t7, $t9, 0xF
    ctx->r15 = ctx->r25 & 0XF;
    // 0x80220AF8: sll         $t9, $t7, 10
    ctx->r25 = S32(ctx->r15 << 10);
    // 0x80220AFC: lw          $t7, 0xE4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE4);
    // 0x80220B00: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80220B04: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80220B08: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80220B0C: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80220B10: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x80220B14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80220B18: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x80220B1C: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x80220B20: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x80220B24: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80220B28: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x80220B2C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80220B30: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80220B34: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80220B38: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80220B3C: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x80220B40: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80220B44: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80220B48: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x80220B4C: or          $t7, $t7, $t9
    ctx->r15 = ctx->r15 | ctx->r25;
    // 0x80220B50: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80220B54: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80220B58: addiu       $v1, $t1, 0x8
    ctx->r3 = ADD32(ctx->r9, 0X8);
    // 0x80220B5C: or          $t7, $t7, $t9
    ctx->r15 = ctx->r15 | ctx->r25;
    // 0x80220B60: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80220B64: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80220B68: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80220B6C: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x80220B70: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80220B74: or          $t5, $t7, $t8
    ctx->r13 = ctx->r15 | ctx->r24;
    // 0x80220B78: sw          $t5, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r13;
    // 0x80220B7C: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
    // 0x80220B80: sw          $t6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r14;
    // 0x80220B84: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x80220B88: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x80220B8C: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80220B90: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x80220B94: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80220B98: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80220B9C: sll         $t9, $t4, 1
    ctx->r25 = S32(ctx->r12 << 1);
    // 0x80220BA0: srl         $a2, $t9, 3
    ctx->r6 = S32(U32(ctx->r25) >> 3);
    // 0x80220BA4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80220BA8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80220BAC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80220BB0: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    // 0x80220BB4: mflo        $t2
    ctx->r10 = lo;
    // 0x80220BB8: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80220BBC: sltiu       $at, $t2, 0x7FF
    ctx->r1 = ctx->r10 < 0X7FF ? 1 : 0;
    // 0x80220BC0: beq         $at, $zero, L_80220BD0
    if (ctx->r1 == 0) {
        // 0x80220BC4: nop
    
            goto L_80220BD0;
    }
    // 0x80220BC4: nop

    // 0x80220BC8: b           L_80220BD0
    // 0x80220BCC: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_80220BD0;
    // 0x80220BCC: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_80220BD0:
    // 0x80220BD0: bne         $a2, $zero, L_80220BE0
    if (ctx->r6 != 0) {
        // 0x80220BD4: or          $t4, $t9, $zero
        ctx->r12 = ctx->r25 | 0;
            goto L_80220BE0;
    }
    // 0x80220BD4: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
    // 0x80220BD8: b           L_80220BE0
    // 0x80220BDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80220BE0;
    // 0x80220BDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80220BE0:
    // 0x80220BE0: bne         $a2, $zero, L_80220BF0
    if (ctx->r6 != 0) {
        // 0x80220BE4: addiu       $t6, $a3, 0x7FF
        ctx->r14 = ADD32(ctx->r7, 0X7FF);
            goto L_80220BF0;
    }
    // 0x80220BE4: addiu       $t6, $a3, 0x7FF
    ctx->r14 = ADD32(ctx->r7, 0X7FF);
    // 0x80220BE8: b           L_80220BF0
    // 0x80220BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80220BF0;
    // 0x80220BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80220BF0:
    // 0x80220BF0: divu        $zero, $t6, $a1
    lo = S32(U32(ctx->r14) / U32(ctx->r5)); hi = S32(U32(ctx->r14) % U32(ctx->r5));
    // 0x80220BF4: mflo        $t7
    ctx->r15 = lo;
    // 0x80220BF8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80220BFC: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x80220C00: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80220C04: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80220C08: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x80220C0C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80220C10: addiu       $ra, $t4, 0x7
    ctx->r31 = ADD32(ctx->r12, 0X7);
    // 0x80220C14: srl         $t9, $ra, 3
    ctx->r25 = S32(U32(ctx->r31) >> 3);
    // 0x80220C18: sw          $t8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r24;
    // 0x80220C1C: andi        $t7, $t9, 0x1FF
    ctx->r15 = ctx->r25 & 0X1FF;
    // 0x80220C20: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80220C24: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x80220C28: sll         $t8, $t7, 9
    ctx->r24 = S32(ctx->r15 << 9);
    // 0x80220C2C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80220C30: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80220C34: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80220C38: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80220C3C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80220C40: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80220C44: or          $ra, $t6, $zero
    ctx->r31 = ctx->r14 | 0;
    // 0x80220C48: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80220C4C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80220C50: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80220C54: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80220C58: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80220C5C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80220C60: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80220C64: or          $t9, $t8, $t6
    ctx->r25 = ctx->r24 | ctx->r14;
    // 0x80220C68: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80220C6C: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80220C70: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x80220C74: lw          $t6, 0xD4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD4);
    // 0x80220C78: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220C7C: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x80220C80: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80220C84: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x80220C88: sll         $t7, $t9, 12
    ctx->r15 = S32(ctx->r25 << 12);
    // 0x80220C8C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80220C90: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80220C94: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x80220C98: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80220C9C: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x80220CA0: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x80220CA4: bne         $a1, $zero, L_80220CB0
    if (ctx->r5 != 0) {
        // 0x80220CA8: nop
    
            goto L_80220CB0;
    }
    // 0x80220CA8: nop

    // 0x80220CAC: break       7
    do_break(2149715116);
L_80220CB0:
    // 0x80220CB0: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80220CB4: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x80220CB8: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x80220CBC: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x80220CC0: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80220CC4: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x80220CC8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80220CCC: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80220CD0: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x80220CD4: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x80220CD8: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x80220CDC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80220CE0: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x80220CE4: bne         $t9, $at, L_80220E48
    if (ctx->r25 != ctx->r1) {
        // 0x80220CE8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80220E48;
    }
    // 0x80220CE8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220CEC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80220CF0: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80220CF4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80220CF8: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
    // 0x80220CFC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220D00: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80220D04: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80220D08: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x80220D0C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220D10: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x80220D14: andi        $t8, $t0, 0x1FF
    ctx->r24 = ctx->r8 & 0X1FF;
    // 0x80220D18: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80220D1C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80220D20: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x80220D24: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80220D28: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220D2C: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x80220D30: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220D34: or          $t5, $v1, $zero
    ctx->r13 = ctx->r3 | 0;
    // 0x80220D38: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80220D3C: sltiu       $at, $t2, 0x7FF
    ctx->r1 = ctx->r10 < 0X7FF ? 1 : 0;
    // 0x80220D40: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x80220D44: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x80220D48: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220D4C: beq         $at, $zero, L_80220D5C
    if (ctx->r1 == 0) {
        // 0x80220D50: or          $t0, $t8, $zero
        ctx->r8 = ctx->r24 | 0;
            goto L_80220D5C;
    }
    // 0x80220D50: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80220D54: b           L_80220D60
    // 0x80220D58: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
        goto L_80220D60;
    // 0x80220D58: or          $t3, $t2, $zero
    ctx->r11 = ctx->r10 | 0;
L_80220D5C:
    // 0x80220D5C: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
L_80220D60:
    // 0x80220D60: bne         $a2, $zero, L_80220D70
    if (ctx->r6 != 0) {
        // 0x80220D64: lui         $at, 0x700
        ctx->r1 = S32(0X700 << 16);
            goto L_80220D70;
    }
    // 0x80220D64: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x80220D68: b           L_80220D74
    // 0x80220D6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80220D74;
    // 0x80220D6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80220D70:
    // 0x80220D70: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_80220D74:
    // 0x80220D74: bne         $a2, $zero, L_80220D84
    if (ctx->r6 != 0) {
        // 0x80220D78: addiu       $t8, $a3, 0x7FF
        ctx->r24 = ADD32(ctx->r7, 0X7FF);
            goto L_80220D84;
    }
    // 0x80220D78: addiu       $t8, $a3, 0x7FF
    ctx->r24 = ADD32(ctx->r7, 0X7FF);
    // 0x80220D7C: b           L_80220D88
    // 0x80220D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80220D88;
    // 0x80220D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80220D84:
    // 0x80220D84: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_80220D88:
    // 0x80220D88: divu        $zero, $t8, $a1
    lo = S32(U32(ctx->r24) / U32(ctx->r5)); hi = S32(U32(ctx->r24) % U32(ctx->r5));
    // 0x80220D8C: mflo        $t9
    ctx->r25 = lo;
    // 0x80220D90: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80220D94: andi        $t8, $t3, 0xFFF
    ctx->r24 = ctx->r11 & 0XFFF;
    // 0x80220D98: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x80220D9C: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x80220DA0: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80220DA4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80220DA8: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x80220DAC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220DB0: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80220DB4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80220DB8: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80220DBC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220DC0: or          $t6, $ra, $t0
    ctx->r14 = ctx->r31 | ctx->r8;
    // 0x80220DC4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80220DC8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80220DCC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80220DD0: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80220DD4: or          $t7, $t9, $a2
    ctx->r15 = ctx->r25 | ctx->r6;
    // 0x80220DD8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80220DDC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80220DE0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80220DE4: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80220DE8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80220DEC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80220DF0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80220DF4: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80220DF8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220DFC: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x80220E00: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x80220E04: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x80220E08: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x80220E0C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80220E10: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80220E14: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x80220E18: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x80220E1C: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x80220E20: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80220E24: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80220E28: or          $t9, $t1, $a2
    ctx->r25 = ctx->r9 | ctx->r6;
    // 0x80220E2C: or          $t6, $t9, $t4
    ctx->r14 = ctx->r25 | ctx->r12;
    // 0x80220E30: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80220E34: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80220E38: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220E3C: bne         $a1, $zero, L_80220E48
    if (ctx->r5 != 0) {
        // 0x80220E40: nop
    
            goto L_80220E48;
    }
    // 0x80220E40: nop

    // 0x80220E44: break       7
    do_break(2149715524);
L_80220E48:
    // 0x80220E48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80220E4C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80220E50: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x80220E54: subu        $a1, $v1, $s0
    ctx->r5 = SUB32(ctx->r3, ctx->r16);
    // 0x80220E58: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80220E5C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80220E60: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80220E64: addiu       $t9, $t9, 0x620
    ctx->r25 = ADD32(ctx->r25, 0X620);
    // 0x80220E68: sra         $t8, $a1, 3
    ctx->r24 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80220E6C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80220E70: sw          $v1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r3;
    // 0x80220E74: jalr        $t9
    // 0x80220E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80220E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80220E7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80220E80: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80220E84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80220E88: jr          $ra
    // 0x80220E8C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80220E8C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8021A4E4_5D59B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021A4E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021A4E8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021A4EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021A4F0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8021A4F4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8021A4F8: addiu       $a1, $a1, 0x2088
    ctx->r5 = ADD32(ctx->r5, 0X2088);
    // 0x8021A4FC: jal         0x802171A8
    // 0x8021A500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_802171A8_5D2678(rdram, ctx);
        goto after_0;
    // 0x8021A500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8021A504: beq         $v0, $zero, L_8021A634
    if (ctx->r2 == 0) {
        // 0x8021A508: sw          $v0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r2;
            goto L_8021A634;
    }
    // 0x8021A508: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8021A50C: jal         0x802192B4
    // 0x8021A510: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_802192B4_5D4784(rdram, ctx);
        goto after_1;
    // 0x8021A510: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8021A514: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8021A518: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8021A51C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8021A520: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021A524: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021A528: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8021A52C: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x8021A530: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8021A534: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8021A538: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8021A53C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8021A540: div.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8021A544: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8021A548: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8021A54C: add.d       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f16.d + ctx->f8.d;
    // 0x8021A550: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8021A554: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021A558: jal         0x80219E08
    // 0x8021A55C: nop

    func_80219E08_5D52D8(rdram, ctx);
        goto after_2;
    // 0x8021A55C: nop

    after_2:
    // 0x8021A560: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8021A564: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8021A568: addiu       $v0, $v0, -0x3410
    ctx->r2 = ADD32(ctx->r2, -0X3410);
    // 0x8021A56C: lw          $v1, 0x18($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X18);
    // 0x8021A570: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021A574: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021A578: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021A57C: lui         $t9, 0x8002
    ctx->r25 = S32(0X8002 << 16);
    // 0x8021A580: addiu       $t9, $t9, -0x2C6C
    ctx->r25 = ADD32(ctx->r25, -0X2C6C);
    // 0x8021A584: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021A588: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A58C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8021A590: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x8021A594: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021A598: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A59C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8021A5A0: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021A5A4: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8021A5A8: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8021A5AC: jalr        $t9
    // 0x8021A5B0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8021A5B0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x8021A5B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8021A5B8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8021A5BC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8021A5C0: lbu         $t7, 0x99($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X99);
    // 0x8021A5C4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8021A5C8: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x8021A5CC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8021A5D0: nop

    // 0x8021A5D4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021A5D8: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8021A5DC: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021A5E0: lwc1        $f18, 0xC($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8021A5E4: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
    // 0x8021A5E8: lbu         $t0, 0x99($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X99);
    // 0x8021A5EC: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8021A5F0: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x8021A5F4: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8021A5F8: nop

    // 0x8021A5FC: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8021A600: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8021A604: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x8021A608: lwc1        $f6, 0x10($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X10);
    // 0x8021A60C: swc1        $f16, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f16.u32l;
    // 0x8021A610: lbu         $t2, 0x99($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X99);
    // 0x8021A614: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8021A618: addiu       $t3, $t2, 0xA
    ctx->r11 = ADD32(ctx->r10, 0XA);
    // 0x8021A61C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8021A620: nop

    // 0x8021A624: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8021A628: mul.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8021A62C: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x8021A630: swc1        $f16, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f16.u32l;
L_8021A634:
    // 0x8021A634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021A638: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021A63C: jr          $ra
    // 0x8021A640: nop

    TRACE_RETURN()
    return;
    // 0x8021A640: nop

;}
RECOMP_FUNC void func_80219E70_5D5340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80219E70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80219E74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80219E78: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80219E7C: lhu         $t8, 0x5E($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X5E);
    // 0x80219E80: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80219E84: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80219E88: sb          $a1, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r5;
    // 0x80219E8C: sb          $a2, 0x6F($a0)
    MEM_B(0X6F, ctx->r4) = ctx->r6;
    // 0x80219E90: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x80219E94: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80219E98: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80219E9C: sh          $t9, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r25;
    // 0x80219EA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80219EA4: jal         0x80216E54
    // 0x80219EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80216E54_5D2324(rdram, ctx);
        goto after_0;
    // 0x80219EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80219EAC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80219EB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80219EB4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80219EB8: beq         $v0, $zero, L_80219EFC
    if (ctx->r2 == 0) {
        // 0x80219EBC: sh          $t0, 0x5E($a0)
        MEM_H(0X5E, ctx->r4) = ctx->r8;
            goto L_80219EFC;
    }
    // 0x80219EBC: sh          $t0, 0x5E($a0)
    MEM_H(0X5E, ctx->r4) = ctx->r8;
    // 0x80219EC0: lui         $t9, 0x8022
    ctx->r25 = S32(0X8022 << 16);
    // 0x80219EC4: addiu       $t9, $t9, -0x23EC
    ctx->r25 = ADD32(ctx->r25, -0X23EC);
    // 0x80219EC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80219ECC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80219ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80219ED4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80219ED8: jalr        $t9
    // 0x80219EDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80219EDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80219EE0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80219EE4: lui         $at, 0x2000
    ctx->r1 = S32(0X2000 << 16);
    // 0x80219EE8: or          $t1, $v0, $at
    ctx->r9 = ctx->r2 | ctx->r1;
    // 0x80219EEC: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x80219EF0: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    // 0x80219EF4: b           L_80219F10
    // 0x80219EF8: sb          $t2, 0x7C($v1)
    MEM_B(0X7C, ctx->r3) = ctx->r10;
        goto L_80219F10;
    // 0x80219EF8: sb          $t2, 0x7C($v1)
    MEM_B(0X7C, ctx->r3) = ctx->r10;
L_80219EFC:
    // 0x80219EFC: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x80219F00: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x80219F04: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80219F08: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80219F0C: sw          $t4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r12;
L_80219F10:
    // 0x80219F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80219F14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80219F18: jr          $ra
    // 0x80219F1C: nop

    TRACE_RETURN()
    return;
    // 0x80219F1C: nop

;}
RECOMP_FUNC void func_802102F4_5CB7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802102F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802102F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802102FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80210300: jal         0x80013AC4
    // 0x80210304: addiu       $a0, $a0, -0x2140
    ctx->r4 = ADD32(ctx->r4, -0X2140);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x80210304: addiu       $a0, $a0, -0x2140
    ctx->r4 = ADD32(ctx->r4, -0X2140);
    after_0:
    // 0x80210308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021030C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80210310: jr          $ra
    // 0x80210314: nop

    TRACE_RETURN()
    return;
    // 0x80210314: nop

;}
RECOMP_FUNC void func_8020F790_5CAC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8020F790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020F794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8020F798: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8020F79C: jal         0x80013AC4
    // 0x8020F7A0: addiu       $a0, $a0, -0x2CC8
    ctx->r4 = ADD32(ctx->r4, -0X2CC8);
    func_80013AC4_146C4(rdram, ctx);
        goto after_0;
    // 0x8020F7A0: addiu       $a0, $a0, -0x2CC8
    ctx->r4 = ADD32(ctx->r4, -0X2CC8);
    after_0:
    // 0x8020F7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020F7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020F7AC: jr          $ra
    // 0x8020F7B0: nop

    TRACE_RETURN()
    return;
    // 0x8020F7B0: nop

;}
RECOMP_FUNC void func_8022125C_5DC72C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022125C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80221260: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80221264: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80221268: jal         0x80221B7C
    // 0x8022126C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80221B7C_5DD04C(rdram, ctx);
        goto after_0;
    // 0x8022126C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80221270: bne         $v0, $zero, L_80221280
    if (ctx->r2 != 0) {
        // 0x80221274: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80221280;
    }
    // 0x80221274: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80221278: b           L_802212DC
    // 0x8022127C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_802212DC;
    // 0x8022127C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80221280:
    // 0x80221280: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80221284: lw          $t7, -0x3A38($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A38);
    // 0x80221288: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x8022128C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80221290: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80221294: jal         0x80220FF0
    // 0x80221298: sb          $t6, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r14;
    func_80220FF0_5DC4C0(rdram, ctx);
        goto after_1;
    // 0x80221298: sb          $t6, -0x51DE($at)
    MEM_B(-0X51DE, ctx->r1) = ctx->r14;
    after_1:
    // 0x8022129C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x802212A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802212A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802212A8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x802212AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x802212B0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x802212B4: swc1        $f0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->f0.u32l;
    // 0x802212B8: jal         0x80221C0C
    // 0x802212BC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    func_80221C0C_5DD0DC(rdram, ctx);
        goto after_2;
    // 0x802212BC: swc1        $f0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x802212C0: lui         $t8, 0x8022
    ctx->r24 = S32(0X8022 << 16);
    // 0x802212C4: addiu       $t8, $t8, 0x1028
    ctx->r24 = ADD32(ctx->r24, 0X1028);
    // 0x802212C8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802212CC: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x802212D0: jal         0x8003521C
    // 0x802212D4: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    func_8003521C_35E1C(rdram, ctx);
        goto after_3;
    // 0x802212D4: sw          $t8, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r24;
    after_3:
    // 0x802212D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802212DC:
    // 0x802212DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802212E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802212E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802212E8: jr          $ra
    // 0x802212EC: nop

    TRACE_RETURN()
    return;
    // 0x802212EC: nop

;}
